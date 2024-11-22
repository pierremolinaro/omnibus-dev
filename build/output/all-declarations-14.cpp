#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

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
  cEnumerator_range enumerator_35097 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 852))), EnumerationOrder::down) ;
  while (enumerator_35097.hasCurrentObject ()) {
    result_result.plusAssign_operation(GGS_string ("<td class=\"fields\">").add_operation (enumerator_35097.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)) ;
    enumerator_35097.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_fieldIndexColumns (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
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
  GGS_uintlist temp_0 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 860)) ;
  result_result = temp_0 ;
  cEnumerator_range enumerator_35387 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inSize.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 861))), EnumerationOrder::up) ;
  while (enumerator_35387.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_35387.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 862)) ;
    enumerator_35387.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_arrayIndexListFor (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
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
//
//Overriding extension getter '@globalConstantDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_globalConstantDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_globalConstantDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mConstantName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@globalConstantDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_globalConstantDeclarationAST temp_0 = this ;
  const GGS_globalConstantDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mConstantName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 67)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_globalConstantDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConstantTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GGS_globalConstantDeclarationAST temp_4 = this ;
      const GGS_globalConstantDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mConstantName (), temp_5.readProperty_mConstantTypeName () COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
      }
    }
  }
  const GGS_globalConstantDeclarationAST temp_6 = this ;
  const GGS_globalConstantDeclarationAST temp_7 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), temp_7.readProperty_mConstantName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 73)) ;
  {
  const GGS_globalConstantDeclarationAST temp_8 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_8.readProperty_mConstantName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@globalConstantDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_globalConstantDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_globalConstantDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("global constant ").add_operation (temp_0.readProperty_mConstantName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 80)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@globalConstantDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                               GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                               GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_displayValue_4369 = GGS_bool (false) ;
  const GGS_globalConstantDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4397 (temp_0.readProperty_mAttributeList (), EnumerationOrder::up) ;
  while (enumerator_4397.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_4397.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("display"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4397.current_mValue (HERE).readProperty_location (), GGS_string ("attribute should be @display"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 100)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_displayValue_4369.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4397.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 102)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_displayValue_4369 = GGS_bool (true) ;
      }
    }
    enumerator_4397.gotoNextObject () ;
  }
  GGS_objectIR var_expressionResult_4946 ;
  {
  const GGS_globalConstantDeclarationAST temp_5 = this ;
  const GGS_globalConstantDeclarationAST temp_6 = this ;
  const GGS_globalConstantDeclarationAST temp_7 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_5.readProperty_mSourceExpression (), temp_6.readProperty_mConstantName ().readProperty_location (), temp_7.readProperty_mConstantTypeName (), var_expressionResult_4946, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }
  {
  const GGS_globalConstantDeclarationAST temp_8 = this ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_8.readProperty_mConstantName (), var_expressionResult_4946, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 117)) ;
  }
  {
  const GGS_globalConstantDeclarationAST temp_9 = this ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_9.readProperty_mConstantName (), var_expressionResult_4946, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 118)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_displayValue_4369.boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      const GGS_globalConstantDeclarationAST temp_11 = this ;
      routine_print_3F_ (GGS_string ("Global constant '").add_operation (temp_11.readProperty_mConstantName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GGS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (extensionGetter_llvmValue (var_expressionResult_4946, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGlobalConstantMapHTMLFile??sourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGlobalConstantMapHTMLFile_3F__3F_sourceFile (const GGS_globalConstantMap constinArgument_inGlobalConstantMap,
                                                               const GGS_lstring constinArgument_inSourceFile,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_typeDumpFilePath_5874 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 134)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 136)) ;
      GGS_stringset var_firstLetterSet_6031 = temp_1 ;
      cEnumerator_globalConstantMap enumerator_6066 (constinArgument_inGlobalConstantMap, EnumerationOrder::up) ;
      while (enumerator_6066.hasCurrentObject ()) {
        var_firstLetterSet_6031.addAssign_operation (enumerator_6066.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 138))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)) ;
        enumerator_6066.gotoNextObject () ;
      }
      GGS_string var_tableOfTypeString_6186 = GGS_string::makeEmptyString () ;
      GGS_char var_currentFirstLetter_6223 = GGS_char (TO_UNICODE (32)) ;
      cEnumerator_globalConstantMap enumerator_6267 (constinArgument_inGlobalConstantMap, EnumerationOrder::up) ;
      while (enumerator_6267.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, var_currentFirstLetter_6223.objectCompare (enumerator_6267.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_currentFirstLetter_6223 = enumerator_6267.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)) ;
            var_tableOfTypeString_6186.plusAssign_operation(GGS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6223.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 145)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GGS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (var_currentFirstLetter_6223.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GGS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)) ;
          }
        }
        var_tableOfTypeString_6186.plusAssign_operation(function_linkForGlobalConstant (enumerator_6267.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)).add_operation (GGS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)) ;
        enumerator_6267.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_6674 = GGS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 150)), constinArgument_inGlobalConstantMap, var_firstLetterSet_6031, var_tableOfTypeString_6186 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 149))) ;
      GGS_bool joker_6931 ; // Joker input parameter
      var_typeDumpString_6674.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_5874, joker_6931, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 155)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_5874, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 157)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'constantDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_constantDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_constantDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_constantDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_constantDumpGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'constantDumpGenerationTemplate dump'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (Compiler * inCompiler,
                                                                    const GGS_string & in_PROJECT_5F_NAME,
                                                                    const GGS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                    const GGS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                    const GGS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n<title>Global constants of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</title>\n<style type=\"text/css\">body {\n  font-family: Georgia, sans-serif ;\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Global Constants of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</h1>\n<p>This document lists all ") ;
  result.appendString (in_GLOBAL_5F_CONSTANT_5F_MAP.getter_count (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" defined global constants, sorted by name.</p>\n<p>") ;
  GGS_uint index_1007_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1007 (in_FIRST_5F_LETTER_5F_SET, EnumerationOrder::up) ;
    while (enumerator_1007.hasCurrentObject ()) {
      result.appendString ("<a class=\"header_link\" href=\"#") ;
      result.appendString (enumerator_1007.current_key (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1007.current_key (HERE).stringValue ()) ;
      result.appendString ("</a>") ;
      if (enumerator_1007.hasNextObject ()) {
        result.appendString (" - ") ;
      }
      index_1007_.increment () ;
      enumerator_1007.gotoNextObject () ;
    }
  }
  result.appendString ("</p>\n<p>") ;
  result.appendString (in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue ()) ;
  result.appendString ("\n</p>\n<table class=\"result\">\n<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_title\">Value</td></tr>\n") ;
  GGS_uint index_1392_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1392 (in_GLOBAL_5F_CONSTANT_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1392.hasCurrentObject ()) {
      result.appendString ("<tr class=\"result_line\"><td><a name=\"") ;
      result.appendString (enumerator_1392.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1392.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</a></td><td>..<'$") ;
      result.appendString (extensionGetter_omnibusTypeDescriptionName (enumerator_1392.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue ()) ;
      result.appendString ("</td><td>") ;
      result.appendString (extensionGetter_llvmTypeName (enumerator_1392.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue ()) ;
      result.appendString ("</td><td>") ;
      result.appendString (extensionGetter_llvmName (enumerator_1392.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue ()) ;
      result.appendString ("</td></tr>\n") ;
      index_1392_.increment () ;
      enumerator_1392.gotoNextObject () ;
    }
  }
  result.appendString ("\n</table>\n</div>\n</body>\n</html>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'linkForGlobalConstant'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_linkForGlobalConstant (const GGS_string & constinArgument_inConstantName,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GGS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_linkForGlobalConstant (Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_linkForGlobalConstant (operand0,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncToolInstanceDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_syncToolInstanceDeclarationAST temp_0 = this ;
  const GGS_syncToolInstanceDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncInstanceName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 46)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_syncToolInstanceDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GGS_syncToolInstanceDeclarationAST temp_4 = this ;
      const GGS_syncToolInstanceDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncInstanceName (), temp_5.readProperty_mSyncTypeName () COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 48)) ;
      }
    }
  }
  const GGS_syncToolInstanceDeclarationAST temp_6 = this ;
  const GGS_syncToolInstanceDeclarationAST temp_7 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), temp_7.readProperty_mSyncInstanceName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 50)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syncToolInstanceDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_syncToolInstanceDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("sync ").add_operation (temp_0.readProperty_mSyncInstanceName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_syncToolInstanceDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_syncToolInstanceDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mSyncInstanceName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncToolInstanceDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                 GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                 GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                 GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_optionalSyncType_4126 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_syncToolInstanceDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_optionalSyncType_4126 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 92)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_syncToolInstanceDeclarationAST temp_2 = this ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_2.readProperty_mSyncTypeName (), var_optionalSyncType_4126, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 94)) ;
  }
  GGS_objectIR var_expressionResult_4593 ;
  {
  const GGS_syncToolInstanceDeclarationAST temp_3 = this ;
  const GGS_syncToolInstanceDeclarationAST temp_4 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_3.readProperty_mSourceExpression (), temp_4.readProperty_mSyncInstanceName ().readProperty_location (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 102)), var_expressionResult_4593, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 97)) ;
  }
  const GGS_syncToolInstanceDeclarationAST temp_5 = this ;
  GGS_objectIR var_result_4665 = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_4593, var_optionalSyncType_4126, temp_5.readProperty_mSyncInstanceName ().readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 106)) ;
  {
  const GGS_syncToolInstanceDeclarationAST temp_6 = this ;
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_6.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4665, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 116)), var_result_4665, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 114)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = extensionGetter_type (var_result_4665, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).readProperty_kind ().getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GGS_syncToolInstanceDeclarationAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mSyncInstanceName ().readProperty_location (), GGS_string ("the type is not a synchronization tool type"), fixItArray9  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)) ;
    }
  }
  {
  const GGS_syncToolInstanceDeclarationAST temp_10 = this ;
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_10.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4665, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)) ;
  }
  const GGS_syncToolInstanceDeclarationAST temp_11 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GGS_decoratedSyncInstance::init_21__21_ (temp_11.readProperty_mSyncInstanceName (), var_result_4665, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedSyncInstance semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedSyncInstance::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_decoratedSyncInstance temp_0 = this ;
  const GGS_decoratedSyncInstance temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_0.readProperty_mSyncInstanceName (), temp_1.readProperty_mExpressionGeneratedCode (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 145)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_implementedDriverAST temp_0 = this ;
  const GGS_implementedDriverAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDriverName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 165)) ;
  }
  {
  const GGS_implementedDriverAST temp_2 = this ;
  const GGS_implementedDriverAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDriverName (), function_omnibusTypeSpecificNameForDriver (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) ;
  }
  const GGS_implementedDriverAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_6057 (temp_4.readProperty_mDriverDependanceList (), EnumerationOrder::up) ;
  while (enumerator_6057.hasCurrentObject ()) {
    {
    const GGS_implementedDriverAST temp_5 = this ;
    ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDriverName (), enumerator_6057.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 168)) ;
    }
    enumerator_6057.gotoNextObject () ;
  }
  {
  const GGS_implementedDriverAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mDriverName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_implementedDriverAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_implementedDriverAST temp_0 = this ;
  result_outRepresentation = GGS_string ("driver ").add_operation (temp_0.readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 176)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_implementedDriverAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_implementedDriverAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mDriverName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusTypeSpecificNameForDriver'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_omnibusTypeSpecificNameForDriver (const GGS_lstring & constinArgument_inDriverName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("driver.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 190)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusTypeSpecificNameForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_omnibusTypeSpecificNameForDriver (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_omnibusTypeSpecificNameForDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusTypeSpecificNameForDriver ("omnibusTypeSpecificNameForDriver",
                                                                                  functionWithGenericHeader_omnibusTypeSpecificNameForDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_omnibusTypeSpecificNameForDriver) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmDriverNameFromName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmDriverNameFromName (const GGS_lstring & constinArgument_inDriverName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("driver$").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmDriverNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmDriverNameFromName (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmDriverNameFromName (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmDriverNameFromName ("llvmDriverNameFromName",
                                                                        functionWithGenericHeader_llvmDriverNameFromName,
                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                        1,
                                                                        functionArgs_llvmDriverNameFromName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmBootRoutineNameFromDriver (const GGS_lstring & constinArgument_inDriverName,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("boot.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmBootRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmBootRoutineNameFromDriver (Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GGS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmBootRoutineNameFromDriver (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmBootRoutineNameFromDriver ("llvmBootRoutineNameFromDriver",
                                                                               functionWithGenericHeader_llvmBootRoutineNameFromDriver,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               1,
                                                                               functionArgs_llvmBootRoutineNameFromDriver) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmStartupRoutineNameFromDriver (const GGS_lstring & constinArgument_inDriverName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("startup.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmStartupRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmStartupRoutineNameFromDriver (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmStartupRoutineNameFromDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmStartupRoutineNameFromDriver ("llvmStartupRoutineNameFromDriver",
                                                                                  functionWithGenericHeader_llvmStartupRoutineNameFromDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmStartupRoutineNameFromDriver) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers&'
//
//--------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers_26_ (GGS_ast & ioArgument_ioAST,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 233)) ;
  GGS_lstringlist var_driverWithNoDependenceList_8996 = temp_0 ;
  cEnumerator_driverDeclarationListAST enumerator_9036 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_9036.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_9036.current_mDriver (HERE).readProperty_mDriverDependanceList ().getter_count (SOURCE_FILE ("declaration-driver.galgas", 235)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_driverWithNoDependenceList_8996.addAssign_operation (enumerator_9036.current_mDriver (HERE).readProperty_mDriverName ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 236)) ;
      }
    }
    enumerator_9036.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_driverWithNoDependenceList_8996.getter_count (SOURCE_FILE ("declaration-driver.galgas", 239)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_lstringlist enumerator_9282 (var_driverWithNoDependenceList_8996, EnumerationOrder::up) ;
      while (enumerator_9282.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9282.current_mValue (HERE).readProperty_location (), GGS_string ("almost one driver can have no dependence"), fixItArray3  COMMA_SOURCE_FILE ("declaration-driver.galgas", 241)) ;
        enumerator_9282.gotoNextObject () ;
      }
    }
  }
  GGS_instanciedDriverMap temp_4 = GGS_instanciedDriverMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 245)) ;
  GGS_instanciedDriverMap var_instanciedDriverMap_9469 = temp_4 ;
  cEnumerator_driverInstanciationListAST enumerator_9513 (ioArgument_ioAST.readProperty_mRequiredDriverListAST (), EnumerationOrder::up) ;
  while (enumerator_9513.hasCurrentObject ()) {
    GGS_driverInstanciationArgumentMap temp_5 = GGS_driverInstanciationArgumentMap::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 247)) ;
    GGS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_9595 = temp_5 ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_9651 (enumerator_9513.current_mDriverInstanciationArgumentList (HERE), EnumerationOrder::up) ;
    while (enumerator_9651.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_9595.setter_insertKey (enumerator_9651.current_mSelector (HERE), enumerator_9651.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 249)) ;
      }
      enumerator_9651.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_9469.setter_insertKey (enumerator_9513.current_mDriverName (HERE), var_driverInstanciationArgumentMap_9595, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 251)) ;
    }
    enumerator_9513.gotoNextObject () ;
  }
  GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 254)) ;
  GGS_stringset var_validDriverNames_9935 = temp_6 ;
  cEnumerator_driverDeclarationListAST enumerator_10020 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_10020.hasCurrentObject ()) {
    var_validDriverNames_9935.addAssign_operation (enumerator_10020.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 256)) ;
    GGS_bool var_driverIsInstancied_10135 = var_instanciedDriverMap_9469.getter_hasKey (enumerator_10020.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-driver.galgas", 257)) ;
    GGS_structurePropertyListAST temp_7 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 259)) ;
    GGS_structurePropertyListAST var_driverPropertyListAST_10299 = temp_7 ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_driverIsInstancied_10135.boolEnum () ;
      if (kBoolTrue == test_8) {
        GGS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_10425 ;
        var_instanciedDriverMap_9469.method_searchKey (enumerator_10020.current_mDriver (HERE).readProperty_mDriverName (), var_driverInstanciationArgumentMap_10425, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 261)) ;
        GGS_stringset temp_9 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 263)) ;
        GGS_stringset var_validArgumentSet_10538 = temp_9 ;
        cEnumerator_structurePropertyListAST enumerator_10634 (enumerator_10020.current_mDriver (HERE).readProperty_mPropertyListAST (), EnumerationOrder::up) ;
        while (enumerator_10634.hasCurrentObject ()) {
          GGS_propertyKindAST var_driverPropertyKind_10712 ;
          switch (enumerator_10634.current_mPropertyKind (HERE).enumValue ()) {
          case GGS_propertyKindAST::Enumeration::invalid:
            break ;
          case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
            {
              GGS_expressionAST var_initExpression_10874 ;
              var_driverInstanciationArgumentMap_10425.method_searchKey (enumerator_10634.current_mPropertyName (HERE), var_initExpression_10874, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 268)) ;
              var_validArgumentSet_10538.addAssign_operation (enumerator_10634.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 269)) ;
              var_driverPropertyKind_10712 = GGS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_10874  COMMA_SOURCE_FILE ("declaration-driver.galgas", 270)) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
            {
              GGS_expressionAST var_initExpression_11148 ;
              var_driverInstanciationArgumentMap_10425.method_searchKey (enumerator_10634.current_mPropertyName (HERE), var_initExpression_11148, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 272)) ;
              var_validArgumentSet_10538.addAssign_operation (enumerator_10634.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 273)) ;
              var_driverPropertyKind_10712 = GGS_propertyKindAST::class_func_initializedConstantProperty (var_initExpression_11148  COMMA_SOURCE_FILE ("declaration-driver.galgas", 274)) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
            {
              GGS_expressionAST extractedValue_11348__0 ;
              enumerator_10634.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedStoredProperty (extractedValue_11348__0) ;
              var_driverPropertyKind_10712 = enumerator_10634.current_mPropertyKind (HERE) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
            {
              GGS_expressionAST extractedValue_11439__0 ;
              enumerator_10634.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedConstantProperty (extractedValue_11439__0) ;
              var_driverPropertyKind_10712 = enumerator_10634.current_mPropertyKind (HERE) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
            {
              GGS_instructionListAST extractedValue_11528__0 ;
              GGS_location extractedValue_11528__1 ;
              enumerator_10634.current_mPropertyKind (HERE).getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_11528__0, extractedValue_11528__1) ;
              var_driverPropertyKind_10712 = enumerator_10634.current_mPropertyKind (HERE) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
            {
              GGS_instructionListAST extractedValue_11614__0 ;
              GGS_location extractedValue_11614__1 ;
              enumerator_10634.current_mPropertyKind (HERE).getAssociatedValuesFor_writeComputedProperty (extractedValue_11614__0, extractedValue_11614__1) ;
              var_driverPropertyKind_10712 = enumerator_10634.current_mPropertyKind (HERE) ;
            }
            break ;
          }
          var_driverPropertyListAST_10299.addAssign_operation (enumerator_10634.current_mPropertyName (HERE), enumerator_10634.current_mPropertyAttributeList (HERE), GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 287)), enumerator_10634.current_mPropertyTypeName (HERE), var_driverPropertyKind_10712  COMMA_SOURCE_FILE ("declaration-driver.galgas", 284)) ;
          enumerator_10634.gotoNextObject () ;
        }
        cEnumerator_stringset enumerator_11938 (var_driverInstanciationArgumentMap_10425.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 292)).substract_operation (var_validArgumentSet_10538, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 292)), EnumerationOrder::up) ;
        while (enumerator_11938.hasCurrentObject ()) {
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_10425.getter_locationForKey (enumerator_11938.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)), GGS_string ("invalid selector"), fixItArray10  COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)) ;
          enumerator_11938.gotoNextObject () ;
        }
      }
    }
    GGS_lstringlist temp_11 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 301)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GGS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (function_omnibusTypeSpecificNameForDriver (enumerator_10020.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 298)), function_omnibusTypeSpecificNameForDriver (enumerator_10020.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 299)), function_llvmDriverNameFromName (enumerator_10020.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 300)), temp_11, GGS_bool (false), var_driverPropertyListAST_10299, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GGS_implementedDriverAST::init_21__21__21__21__21__21__21__21__21_ (enumerator_10020.current_mDriver (HERE).readProperty_mDriverName (), enumerator_10020.current_mDriver (HERE).readProperty_mDriverDependanceList (), var_driverIsInstancied_10135, enumerator_10020.current_mDriver (HERE).readProperty_mBootLocation (), enumerator_10020.current_mDriver (HERE).readProperty_mBootInstructionList (), enumerator_10020.current_mDriver (HERE).readProperty_mBootEndLocation (), enumerator_10020.current_mDriver (HERE).readProperty_mStartupLocation (), enumerator_10020.current_mDriver (HERE).readProperty_mStartupInstructionList (), enumerator_10020.current_mDriver (HERE).readProperty_mStartupEndLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306)) ;
    enumerator_10020.gotoNextObject () ;
  }
  GGS_driverDeclarationListAST temp_12 = GGS_driverDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 318)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST = temp_12 ;
  cEnumerator_stringset enumerator_13061 (var_instanciedDriverMap_9469.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 320)).substract_operation (var_validDriverNames_9935, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 320)), EnumerationOrder::up) ;
  while (enumerator_13061.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_9469.getter_locationForKey (enumerator_13061.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)), GGS_string ("undefined driver"), fixItArray13  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)) ;
    enumerator_13061.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                       GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                       GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                       GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                       GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                       GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                       GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                       GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_driverType_14233 ;
  const GGS_implementedDriverAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)), var_driverType_14233, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 339)) ;
  {
  const GGS_implementedDriverAST temp_1 = this ;
  const GGS_implementedDriverAST temp_2 = this ;
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_1.readProperty_mDriverName (), temp_2.readProperty_mIsInstancied (), var_driverType_14233, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 343)) ;
  }
  const GGS_implementedDriverAST temp_3 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GGS_decoratedRequiredDriver::init_21_ (temp_3.readProperty_mDriverName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 345)) ;
  const GGS_implementedDriverAST temp_4 = this ;
  const GGS_implementedDriverAST temp_5 = this ;
  GGS_routineFormalArgumentListAST temp_6 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 356)) ;
  const GGS_implementedDriverAST temp_7 = this ;
  const GGS_implementedDriverAST temp_8 = this ;
  const GGS_implementedDriverAST temp_9 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_4.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 348)), GGS_mode::class_func_bootMode (SOURCE_FILE ("declaration-driver.galgas", 349)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-driver.galgas", 351)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), function_llvmBootRoutineNameFromDriver (temp_5.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 355)), temp_6, GGS_bool (true), temp_7.readProperty_mBootInstructionList (), temp_8.readProperty_mBootEndLocation (), GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), temp_9.readProperty_mBootLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 347)) ;
  const GGS_implementedDriverAST temp_10 = this ;
  const GGS_implementedDriverAST temp_11 = this ;
  GGS_routineFormalArgumentListAST temp_12 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 371)) ;
  const GGS_implementedDriverAST temp_13 = this ;
  const GGS_implementedDriverAST temp_14 = this ;
  const GGS_implementedDriverAST temp_15 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_10.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 363)), GGS_mode::class_func_startupMode (SOURCE_FILE ("declaration-driver.galgas", 364)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-driver.galgas", 366)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), function_llvmStartupRoutineNameFromDriver (temp_11.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 370)), temp_12, GGS_bool (true), temp_13.readProperty_mStartupInstructionList (), temp_14.readProperty_mStartupEndLocation (), GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), temp_15.readProperty_mStartupLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 362)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedRequiredDriver semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedRequiredDriver::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_driverType_16521 ;
  const GGS_decoratedRequiredDriver temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 394)), var_driverType_16521, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 393)) ;
  const GGS_decoratedRequiredDriver temp_1 = this ;
  GGS_lstring var_typeName_16542 = GGS_lstring::init_21__21_ (var_driverType_16521.readProperty_omnibusTypeDescriptionName (), temp_1.readProperty_mDriverName ().readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_constructorMap var_constructorMap_16684 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_16542, var_constructorMap_16684, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 398)) ;
  GGS_constructorValue var_constructorValue_16778 ;
  const GGS_decoratedRequiredDriver temp_2 = this ;
  GGS_constructorSignature joker_16770 ; // Joker input parameter
  var_constructorMap_16684.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("()"), temp_2.readProperty_mDriverName ().readProperty_location (), inCompiler COMMA_HERE), joker_16770, var_constructorValue_16778, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)) ;
  GGS_sortedOperandIRList var_sortedOperandList_16856 ;
  var_constructorValue_16778.method_extractStructure (var_sortedOperandList_16856, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 400)) ;
  GGS_operandIRList temp_3 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 401)) ;
  GGS_operandIRList var_initialValueList_16896 = temp_3 ;
  cEnumerator_sortedOperandIRList enumerator_16939 (var_sortedOperandList_16856, EnumerationOrder::up) ;
  while (enumerator_16939.hasCurrentObject ()) {
    var_initialValueList_16896.addAssign_operation (enumerator_16939.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 403)) ;
    enumerator_16939.gotoNextObject () ;
  }
  const GGS_decoratedRequiredDriver temp_4 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (temp_4.readProperty_mDriverName (), var_driverType_16521, var_initialValueList_16896  COMMA_SOURCE_FILE ("declaration-driver.galgas", 405)) ;
  const GGS_decoratedRequiredDriver temp_5 = this ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (temp_5.readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 410)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterExtension'
//
//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterExtension (GGS_extendStaticArrayDeclarationDictAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                GGS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_staticListAST temp_1 = this ;
    test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (temp_1.readProperty_mStaticListName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_staticListValueListAST var_elements_6297 ;
      {
      const GGS_staticListAST temp_2 = this ;
      ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (temp_2.readProperty_mStaticListName ().readProperty_string (), var_elements_6297, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 163)) ;
      }
      const GGS_staticListAST temp_3 = this ;
      const GGS_staticListAST temp_4 = this ;
      const GGS_staticListAST temp_5 = this ;
      outArgument_outNewDeclaration = GGS_staticListAST::init_21__21__21_ (temp_3.readProperty_mStaticListName (), temp_4.readProperty_mPropertyList (), temp_5.readProperty_mValueList ().add_operation (var_elements_6297, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 167)), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_staticListAST temp_6 = this ;
    outArgument_outNewDeclaration = temp_6 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_staticListAST temp_0 = this ;
  const GGS_staticListAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mStaticListName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 180)) ;
  }
  {
  const GGS_staticListAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mStaticListName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 181)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 181)) ;
  }
  const GGS_staticListAST temp_3 = this ;
  cEnumerator_staticListPropertyListAST enumerator_7106 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_7106.hasCurrentObject ()) {
    switch (enumerator_7106.current_mPropertyType (HERE).enumValue ()) {
    case GGS_staticListPropertyTypeAST::Enumeration::invalid:
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_valueType:
      {
        GGS_lstring extractedValue_7182_propertyTypeName_0 ;
        enumerator_7106.current_mPropertyType (HERE).getAssociatedValuesFor_valueType (extractedValue_7182_propertyTypeName_0) ;
        {
        const GGS_staticListAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mStaticListName (), extractedValue_7182_propertyTypeName_0 COMMA_SOURCE_FILE ("declaration-static-list.galgas", 186)) ;
        }
      }
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_function:
      {
        GGS_mode extractedValue_7287__0 ;
        GGS_routineFormalArgumentListAST extractedValue_7319_formalArgs_1 ;
        GGS_lstring extractedValue_7339_returnType_2 ;
        enumerator_7106.current_mPropertyType (HERE).getAssociatedValuesFor_function (extractedValue_7287__0, extractedValue_7319_formalArgs_1, extractedValue_7339_returnType_2) ;
        cEnumerator_routineFormalArgumentListAST enumerator_7391 (extractedValue_7319_formalArgs_1, EnumerationOrder::up) ;
        while (enumerator_7391.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7391.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 189)) ;
          }
          enumerator_7391.gotoNextObject () ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, extractedValue_7339_returnType_2.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            const GGS_staticListAST temp_6 = this ;
            ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mStaticListName (), extractedValue_7339_returnType_2 COMMA_SOURCE_FILE ("declaration-static-list.galgas", 192)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_7106.gotoNextObject () ;
  }
  const GGS_staticListAST temp_7 = this ;
  cEnumerator_staticListValueListAST enumerator_7672 (temp_7.readProperty_mValueList (), EnumerationOrder::up) ;
  while (enumerator_7672.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_7714 (enumerator_7672.current_mElement (HERE), EnumerationOrder::up) ;
    while (enumerator_7714.hasCurrentObject ()) {
      switch (enumerator_7714.current_mExpression (HERE).enumValue ()) {
      case GGS_extendStaticListExpressionAST::Enumeration::invalid:
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_expression:
        {
          GGS_expressionAST extractedValue_7788_exp_0 ;
          enumerator_7714.current_mExpression (HERE).getAssociatedValuesFor_expression (extractedValue_7788_exp_0) ;
          const GGS_staticListAST temp_8 = this ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_7788_exp_0.ptr (), temp_8.readProperty_mStaticListName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 201)) ;
        }
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_function:
        {
          GGS_lstring extractedValue_7899__0 ;
          GGS_routineFormalArgumentListAST extractedValue_7931_formalArgs_1 ;
          enumerator_7714.current_mExpression (HERE).getAssociatedValuesFor_function (extractedValue_7899__0, extractedValue_7931_formalArgs_1) ;
          cEnumerator_routineFormalArgumentListAST enumerator_7985 (extractedValue_7931_formalArgs_1, EnumerationOrder::up) ;
          while (enumerator_7985.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_7985.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 204)) ;
            }
            enumerator_7985.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7714.gotoNextObject () ;
    }
    enumerator_7672.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_staticListAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_staticListAST temp_0 = this ;
  result_result = temp_0.readProperty_mStaticListName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_staticListAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_staticListAST temp_0 = this ;
  result_result = GGS_string ("staticlist ").add_operation (temp_0.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 220)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_omnibusNameForStaticListType (const GGS_lstring & constinArgument_inStaticListName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 230)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_omnibusNameForStaticListType (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GGS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_omnibusNameForStaticListType (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListType ("omnibusNameForStaticListType",
                                                                              functionWithGenericHeader_omnibusNameForStaticListType,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_omnibusNameForStaticListType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListType'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmNameForStaticListType (const GGS_lstring & constinArgument_inStaticListName,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist-").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 236)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForStaticListType (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmNameForStaticListType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListType ("llvmNameForStaticListType",
                                                                           functionWithGenericHeader_llvmNameForStaticListType,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           1,
                                                                           functionArgs_llvmNameForStaticListType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_omnibusNameForStaticListElementType (const GGS_lstring & constinArgument_inStaticListName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 242)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_omnibusNameForStaticListElementType (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_omnibusNameForStaticListElementType (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListElementType ("omnibusNameForStaticListElementType",
                                                                                     functionWithGenericHeader_omnibusNameForStaticListElementType,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_omnibusNameForStaticListElementType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmNameForStaticListElementType (const GGS_lstring & constinArgument_inStaticListName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 248)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForStaticListElementType (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmNameForStaticListElementType (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListElementType ("llvmNameForStaticListElementType",
                                                                                  functionWithGenericHeader_llvmNameForStaticListElementType,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmNameForStaticListElementType) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                GGS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList temp_0 = GGS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 279)) ;
  GGS_propertyList var_propertyList_11331 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 281)) ;
  GGS_stringset var_propertyNameSet_11413 = temp_1 ;
  const GGS_staticListAST temp_2 = this ;
  GGS_lstring var_omnibusElementTypeName_11441 = function_omnibusNameForStaticListElementType (temp_2.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 282)) ;
  GGS_unifiedTypeMapEntry var_elementTypeProxy_11589 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11441, var_elementTypeProxy_11589, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 283)) ;
  }
  const GGS_staticListAST temp_3 = this ;
  cEnumerator_staticListPropertyListAST enumerator_11722 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  GGS_uint index_11704 (uint32_t (0)) ;
  while (enumerator_11722.hasCurrentObject ()) {
    switch (enumerator_11722.current_mPropertyType (HERE).enumValue ()) {
    case GGS_staticListPropertyTypeAST::Enumeration::invalid:
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_valueType:
      {
        GGS_lstring extractedValue_11814_propertyTypeName_0 ;
        enumerator_11722.current_mPropertyType (HERE).getAssociatedValuesFor_valueType (extractedValue_11814_propertyTypeName_0) ;
        GGS_omnibusType var_propertyType_11844 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_11814_propertyTypeName_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_propertyNameSet_11413.getter_hasKey (enumerator_11722.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 289)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_11722.current_mPropertyName (HERE).readProperty_location (), GGS_string ("duplicated property name"), fixItArray5  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 290)) ;
          }
        }
        if (kBoolFalse == test_4) {
          var_propertyNameSet_11413.addAssign_operation (enumerator_11722.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
          var_propertyList_11331.addAssign_operation (enumerator_11722.current_mPropertyName (HERE).readProperty_string (), var_propertyType_11844  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 293)) ;
          {
          const GGS_staticListAST temp_6 = this ;
          extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListElementType (temp_6.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 295)), enumerator_11722.current_mPropertyName (HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 297)), GGS_propertyGetterKind::class_func_storedProperty (var_propertyType_11844, index_11704  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 294)) ;
          }
        }
      }
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_function:
      {
        GGS_mode extractedValue_12408_mode_0 ;
        GGS_routineFormalArgumentListAST extractedValue_12443_formalArgs_1 ;
        GGS_lstring extractedValue_12463_returnTypeName_2 ;
        enumerator_11722.current_mPropertyType (HERE).getAssociatedValuesFor_function (extractedValue_12408_mode_0, extractedValue_12443_formalArgs_1, extractedValue_12463_returnTypeName_2) ;
        const GGS_staticListAST temp_7 = this ;
        GGS_lstring var_routineLLVMName_12518 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (temp_7.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 304)).readProperty_string (), enumerator_11722.current_mPropertyName (HERE), extractedValue_12443_formalArgs_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 303)) ;
        GGS_routineTypedSignature var_signature_12766 ;
        {
        routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_12443_formalArgs_1, var_signature_12766, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 309)) ;
        }
        GGS_unifiedTypeMapEntry temp_8 ;
        const enumGalgasBool test_9 = GGS_bool (ComparisonKind::equal, extractedValue_12463_returnTypeName_2.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 311)) ;
        }else if (kBoolFalse == test_9) {
          temp_8 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_12463_returnTypeName_2, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 313)) ;
        }
        GGS_unifiedTypeMapEntry var_returnTypeProxy_12808 = temp_8 ;
        GGS_omnibusType var_propertyType_13002 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 317)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString (), GGS_typeKind::class_func_function (extractedValue_12408_mode_0, var_signature_12766, var_returnTypeProxy_12808  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 320)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
        var_propertyList_11331.addAssign_operation (enumerator_11722.current_mPropertyName (HERE).readProperty_string (), var_propertyType_13002  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 328)) ;
        const GGS_staticListAST temp_10 = this ;
        GGS_lstring var_routineMangledName_13414 = GGS_lstring::init_21__21_ (function_omnibusNameForStaticListElementType (temp_10.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (enumerator_11722.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (extensionGetter_routineSignature (extractedValue_12443_formalArgs_1, enumerator_11722.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)), enumerator_11722.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
        {
        GGS_routineLLVMNameDict temp_11 = GGS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        temp_11.enterElement (GGS_routineLLVMNameDict_2E_element::init_21__21_ (GGS_mode::class_func_userMode (SOURCE_FILE ("declaration-static-list.galgas", 339)), var_routineLLVMName_12518.readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_13414, GGS_bool (true), var_signature_12766, var_returnTypeProxy_12808, temp_11, GGS_bool (false), GGS_mode::class_func_userMode (SOURCE_FILE ("declaration-static-list.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 334)) ;
        }
        ioArgument_ioRoutineListIR.addAssign_operation (GGS_staticListIndirectRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (var_routineLLVMName_12518, GGS_bool (true), GGS_bool (true), var_elementTypeProxy_11589, var_signature_12766, var_returnTypeProxy_12808, index_11704, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 344)) ;
      }
      break ;
    }
    enumerator_11722.gotoNextObject () ;
    index_11704.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 285)) ;
  }
  {
  const GGS_staticListAST temp_12 = this ;
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (temp_12.readProperty_mStaticListName (), var_propertyList_11331, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 355)) ;
  }
  const GGS_staticListAST temp_13 = this ;
  const GGS_staticListAST temp_14 = this ;
  GGS_omnibusType var_elementType_14345 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 358)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), function_omnibusNameForStaticListElementType (temp_13.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 360)).readProperty_string (), GGS_typeKind::class_func_structure (var_propertyList_11331  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 361)), function_llvmNameForStaticListElementType (temp_14.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 362)).readProperty_string (), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11441, var_elementType_14345, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 364)) ;
  }
  GGS_stringlist temp_15 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 366)) ;
  GGS_stringlist var_stringValueList_14843 = temp_15 ;
  const GGS_staticListAST temp_16 = this ;
  cEnumerator_staticListValueListAST enumerator_14880 (temp_16.readProperty_mValueList (), EnumerationOrder::up) ;
  while (enumerator_14880.hasCurrentObject ()) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GGS_bool (ComparisonKind::notEqual, var_propertyList_11331.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 368)).objectCompare (enumerator_14880.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 368)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GGS_staticListAST temp_18 = this ;
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mStaticListName ().readProperty_location (), var_propertyList_11331.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 370)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (GGS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (enumerator_14880.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 371)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 371)), fixItArray19  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 369)) ;
      }
    }
    if (kBoolFalse == test_17) {
      GGS_string var_staticValue_15122 = GGS_string ("{") ;
      cEnumerator_extendStaticListElementAST enumerator_15159 (enumerator_14880.current_mElement (HERE), EnumerationOrder::up) ;
      cEnumerator_propertyList enumerator_15184 (var_propertyList_11331, EnumerationOrder::up) ;
      while (enumerator_15159.hasCurrentObject () && enumerator_15184.hasCurrentObject ()) {
        switch (enumerator_15159.current_mExpression (HERE).enumValue ()) {
        case GGS_extendStaticListExpressionAST::Enumeration::invalid:
          break ;
        case GGS_extendStaticListExpressionAST::Enumeration::enum_expression:
          {
            GGS_expressionAST extractedValue_15280_exp_0 ;
            enumerator_15159.current_mExpression (HERE).getAssociatedValuesFor_expression (extractedValue_15280_exp_0) ;
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = enumerator_15184.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 377)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_15159.current_mEndOfExpression (HERE), GGS_string ("a function name is expected here"), fixItArray21  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 378)) ;
              }
            }
            if (kBoolFalse == test_20) {
              GGS_objectIR var_expressionResult_15697 ;
              {
              routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_15280_exp_0, enumerator_15159.current_mEndOfExpression (HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 385)), var_expressionResult_15697, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 380)) ;
              }
              var_staticValue_15122.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15184.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)).add_operation (extensionGetter_llvmName (var_expressionResult_15697, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)) ;
            }
          }
          break ;
        case GGS_extendStaticListExpressionAST::Enumeration::enum_function:
          {
            GGS_lstring extractedValue_15908_functionName_0 ;
            GGS_routineFormalArgumentListAST extractedValue_15951_formalArgs_1 ;
            enumerator_15159.current_mExpression (HERE).getAssociatedValuesFor_function (extractedValue_15908_functionName_0, extractedValue_15951_formalArgs_1) ;
            enumGalgasBool test_22 = kBoolTrue ;
            if (kBoolTrue == test_22) {
              test_22 = enumerator_15184.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 392)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 392)).boolEnum () ;
              if (kBoolTrue == test_22) {
                TC_Array <FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (enumerator_15159.current_mEndOfExpression (HERE), GGS_string ("a static expression is expected here"), fixItArray23  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)) ;
              }
            }
            if (kBoolFalse == test_22) {
              GGS_mode var_mode_16172 ;
              GGS_routineTypedSignature var_functionSignature_16206 ;
              GGS_unifiedTypeMapEntry var_functionReturnTypeProxy_16259 ;
              enumerator_15184.current_mType (HERE).readProperty_kind ().method_extractFunction (var_mode_16172, var_functionSignature_16206, var_functionReturnTypeProxy_16259, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 395)) ;
              GGS_lstring var_argumentSignature_16313 = extensionGetter_routineSignature (extractedValue_15951_formalArgs_1, extractedValue_15908_functionName_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 400)) ;
              GGS_lstring var_functionMangledName_16393 = GGS_lstring::init_21__21_ (extractedValue_15908_functionName_0.readProperty_string ().add_operation (var_argumentSignature_16313.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 401)), extractedValue_15908_functionName_0.readProperty_location (), inCompiler COMMA_HERE) ;
              GGS_bool var_candidateIsPublic_16592 ;
              GGS_routineTypedSignature var_candidateSignature_16629 ;
              GGS_unifiedTypeMapEntry var_candidateReturnTypeProxy_16667 ;
              GGS_routineLLVMNameDict var_implementedModeDictionary_16739 ;
              GGS_bool var_implementedIsExported_16791 ;
              GGS_mode var_candidateMode_16839 ;
              ioArgument_ioContext.readProperty_mRoutineMap ().method_searchKey (var_functionMangledName_16393, var_candidateIsPublic_16592, var_candidateSignature_16629, var_candidateReturnTypeProxy_16667, var_implementedModeDictionary_16739, var_implementedIsExported_16791, var_candidateMode_16839, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 402)) ;
              GGS_string var_routineLLVMName_16909 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_16739, var_mode_16172, extractedValue_15908_functionName_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 412)) ;
              enumGalgasBool test_24 = kBoolTrue ;
              if (kBoolTrue == test_24) {
                GGS_bool test_25 = var_functionReturnTypeProxy_16259.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 413)) ;
                if (kBoolTrue == test_25.boolEnum ()) {
                  test_25 = var_candidateReturnTypeProxy_16667.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 413)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 413)) ;
                }
                test_24 = test_25.boolEnum () ;
                if (kBoolTrue == test_24) {
                  TC_Array <FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_15908_functionName_0.readProperty_location (), GGS_string ("this function should return an $").add_operation (extensionGetter_key (var_candidateReturnTypeProxy_16667, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)).add_operation (GGS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)), fixItArray26  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)) ;
                }
              }
              if (kBoolFalse == test_24) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  GGS_bool test_28 = var_functionReturnTypeProxy_16259.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 415)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 415)) ;
                  if (kBoolTrue == test_28.boolEnum ()) {
                    test_28 = var_candidateReturnTypeProxy_16667.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 415)) ;
                  }
                  test_27 = test_28.boolEnum () ;
                  if (kBoolTrue == test_27) {
                    TC_Array <FixItDescription> fixItArray29 ;
                    inCompiler->emitSemanticError (extractedValue_15908_functionName_0.readProperty_location (), GGS_string ("this function should return no object"), fixItArray29  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 416)) ;
                  }
                }
              }
              enumGalgasBool test_30 = kBoolTrue ;
              if (kBoolTrue == test_30) {
                test_30 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_16206.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 418)).objectCompare (var_candidateSignature_16629.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 418)))).boolEnum () ;
                if (kBoolTrue == test_30) {
                  TC_Array <FixItDescription> fixItArray31 ;
                  inCompiler->emitSemanticError (extractedValue_15908_functionName_0.readProperty_location (), GGS_string ("this function has ").add_operation (var_candidateSignature_16629.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 420)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GGS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (var_functionSignature_16206.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 421)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GGS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 421)), fixItArray31  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 419)) ;
                }
              }
              if (kBoolFalse == test_30) {
                cEnumerator_routineTypedSignature enumerator_17706 (var_functionSignature_16206, EnumerationOrder::up) ;
                cEnumerator_routineTypedSignature enumerator_17738 (var_candidateSignature_16629, EnumerationOrder::up) ;
                while (enumerator_17706.hasCurrentObject () && enumerator_17738.hasCurrentObject ()) {
                  enumGalgasBool test_32 = kBoolTrue ;
                  if (kBoolTrue == test_32) {
                    test_32 = GGS_bool (ComparisonKind::notEqual, enumerator_17706.current (HERE).readProperty_mTypeProxy ().objectCompare (enumerator_17738.current (HERE).readProperty_mTypeProxy ())).boolEnum () ;
                    if (kBoolTrue == test_32) {
                      TC_Array <FixItDescription> fixItArray33 ;
                      inCompiler->emitSemanticError (enumerator_17738.current (HERE).readProperty_mSelector ().readProperty_location (), GGS_string ("argument type should be $").add_operation (extensionGetter_key (enumerator_17706.current (HERE).readProperty_mTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), fixItArray33  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)) ;
                    }
                  }
                  enumerator_17706.gotoNextObject () ;
                  enumerator_17738.gotoNextObject () ;
                }
              }
              var_staticValue_15122.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15184.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (var_routineLLVMName_16909.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)) ;
            }
          }
          break ;
        }
        if (enumerator_15159.hasNextObject () && enumerator_15184.hasNextObject ()) {
          var_staticValue_15122.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 433)) ;
        }
        enumerator_15159.gotoNextObject () ;
        enumerator_15184.gotoNextObject () ;
      }
      var_staticValue_15122.plusAssign_operation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 435)) ;
      var_stringValueList_14843.addAssign_operation (var_staticValue_15122  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 436)) ;
    }
    enumerator_14880.gotoNextObject () ;
  }
  {
  const GGS_staticListAST temp_34 = this ;
  ioArgument_ioStaticListValueMap.setter_insertKey (temp_34.readProperty_mStaticListName (), var_stringValueList_14843, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 439)) ;
  }
  {
  const GGS_staticListAST temp_35 = this ;
  const GGS_staticListAST temp_36 = this ;
  const GGS_staticListAST temp_37 = this ;
  extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListType (temp_35.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 442)), GGS_lstring::init_21__21_ (GGS_string ("count"), temp_36.readProperty_mStaticListName ().readProperty_location (), inCompiler COMMA_HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 444)), GGS_propertyGetterKind::class_func_constantProperty (GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), temp_37.readProperty_mValueList ().getter_count (SOURCE_FILE ("declaration-static-list.galgas", 445)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 441)) ;
  }
  const GGS_staticListAST temp_38 = this ;
  const GGS_staticListAST temp_39 = this ;
  GGS_omnibusType var_arrayType_18807 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_staticSubscript (var_elementType_14345, var_stringValueList_14843.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 449)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 449))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 450)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("declaration-static-list.galgas", 450)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 450)), function_omnibusNameForStaticListType (temp_38.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 451)).readProperty_string (), GGS_typeKind::class_func_staticArrayType (var_elementType_14345, var_stringValueList_14843.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 452)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 452))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 452)), function_llvmNameForStaticListType (temp_39.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 453)).readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_staticListAST temp_40 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_omnibusNameForStaticListType (temp_40.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 456)), var_arrayType_18807, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 455)) ;
  }
  const GGS_staticListAST temp_41 = this ;
  GGS_unifiedTypeMapEntry var_staticListType_19435 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusNameForStaticListType (temp_41.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)) ;
  {
  const GGS_staticListAST temp_42 = this ;
  const GGS_staticListAST temp_43 = this ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_42.readProperty_mStaticListName (), GGS_objectIR::class_func_reference (extensionGetter_type (var_staticListType_19435, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)), function_llvmNameForGlobalVariable (temp_43.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 461)) ;
  }
  {
  const GGS_staticListAST temp_44 = this ;
  const GGS_staticListAST temp_45 = this ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_44.readProperty_mStaticListName (), GGS_objectIR::class_func_reference (extensionGetter_type (var_staticListType_19435, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467)), function_llvmNameForGlobalVariable (temp_45.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 465)) ;
  }
  const GGS_staticListAST temp_46 = this ;
  const GGS_staticListAST temp_47 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GGS_decoratedStaticList::init_21__21_ (temp_46.readProperty_mStaticListName (), temp_47.readProperty_mValueList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 470)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GGS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_14345.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 473)), var_propertyList_11331, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GGS_userLLVMStaticArrayTypeDefinitionIR::init_21__21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_18807.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 477)), var_elementType_14345, var_stringValueList_14843.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 479)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 479)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 476)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedStaticList semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedStaticList::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                        GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 508)) ;
  GGS_stringset var_invokedFunctionSet_21573 = temp_0 ;
  const GGS_decoratedStaticList temp_1 = this ;
  cEnumerator_staticListValueListAST enumerator_21613 (temp_1.readProperty_mValueList (), EnumerationOrder::up) ;
  while (enumerator_21613.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_21655 (enumerator_21613.current_mElement (HERE), EnumerationOrder::up) ;
    while (enumerator_21655.hasCurrentObject ()) {
      switch (enumerator_21655.current_mExpression (HERE).enumValue ()) {
      case GGS_extendStaticListExpressionAST::Enumeration::invalid:
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_expression:
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_function:
        {
          GGS_lstring extractedValue_21775_functionName_0 ;
          GGS_routineFormalArgumentListAST extractedValue_21818_formalArgs_1 ;
          enumerator_21655.current_mExpression (HERE).getAssociatedValuesFor_function (extractedValue_21775_functionName_0, extractedValue_21818_formalArgs_1) ;
          GGS_lstring var_routineMangledName_21876 = function_routineMangledNameFromAST (GGS_string::makeEmptyString (), extractedValue_21775_functionName_0, extractedValue_21818_formalArgs_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 515)) ;
          var_invokedFunctionSet_21573.addAssign_operation (var_routineMangledName_21876.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 520)) ;
        }
        break ;
      }
      enumerator_21655.gotoNextObject () ;
    }
    enumerator_21613.gotoNextObject () ;
  }
  {
  const GGS_decoratedStaticList temp_2 = this ;
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (temp_2.readProperty_mStaticListName (), var_invokedFunctionSet_21573, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 524)) ;
  }
  {
  const GGS_decoratedStaticList temp_3 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (temp_3.readProperty_mStaticListName (), var_invokedFunctionSet_21573, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 525)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListIndirectRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_staticListIndirectRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 575)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_staticListIndirectRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 576)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 577)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_staticListIndirectRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)) ;
  }
  const GGS_staticListIndirectRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)) ;
  const GGS_staticListIndirectRoutineIR temp_4 = this ;
  GGS_string var_receiverLLVMTypeName_24526 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_4.readProperty_mStaticListElementType (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 582)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 582)) ;
  GGS_bool var_first_24605 = GGS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_24526.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24526.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)) ;
      var_first_24605 = GGS_bool (false) ;
    }
  }
  const GGS_staticListIndirectRoutineIR temp_6 = this ;
  cEnumerator_routineTypedSignature enumerator_24793 (temp_6.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_24793.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_first_24605.boolEnum () ;
      if (kBoolTrue == test_7) {
        var_first_24605 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 592)) ;
    }
    switch (enumerator_24793.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_24793.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).add_operation (enumerator_24793.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_24793.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).add_operation (GGS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).add_operation (enumerator_24793.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_24793.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).add_operation (GGS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).add_operation (enumerator_24793.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)) ;
      }
      break ;
    }
    enumerator_24793.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)) ;
  GGS_string var_llvmFunctionTypeName_25493 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GGS_staticListIndirectRoutineIR temp_9 = this ;
    test_8 = temp_9.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 606)).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_llvmFunctionTypeName_25493 = GGS_string ("void") ;
    }
  }
  if (kBoolFalse == test_8) {
    const GGS_staticListIndirectRoutineIR temp_10 = this ;
    var_llvmFunctionTypeName_25493 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_10.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 609)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 609)) ;
  }
  var_llvmFunctionTypeName_25493.plusAssign_operation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 611)) ;
  var_first_24605 = GGS_bool (true) ;
  const GGS_staticListIndirectRoutineIR temp_11 = this ;
  cEnumerator_routineTypedSignature enumerator_25765 (temp_11.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_25765.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_first_24605.boolEnum () ;
      if (kBoolTrue == test_12) {
        var_first_24605 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_12) {
      var_llvmFunctionTypeName_25493.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)) ;
    }
    switch (enumerator_25765.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_llvmFunctionTypeName_25493.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25765.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        var_llvmFunctionTypeName_25493.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25765.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        var_llvmFunctionTypeName_25493.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25765.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)) ;
      }
      break ;
    }
    enumerator_25765.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_25493.plusAssign_operation(GGS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 628)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_24526, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)) ;
  const GGS_staticListIndirectRoutineIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", ").add_operation (var_receiverLLVMTypeName_24526, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GGS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (temp_13.readProperty_mPropertyIndex ().getter_string (SOURCE_FILE ("declaration-static-list.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_25493, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (var_llvmFunctionTypeName_25493, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (GGS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GGS_staticListIndirectRoutineIR temp_15 = this ;
    test_14 = temp_15.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 633)).boolEnum () ;
    if (kBoolTrue == test_14) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 634)) ;
    }
  }
  if (kBoolFalse == test_14) {
    const GGS_staticListIndirectRoutineIR temp_16 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %result = call ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_16.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)) ;
  var_first_24605 = GGS_bool (true) ;
  const GGS_staticListIndirectRoutineIR temp_17 = this ;
  cEnumerator_routineTypedSignature enumerator_26788 (temp_17.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_26788.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_first_24605.boolEnum () ;
      if (kBoolTrue == test_18) {
        var_first_24605 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_18) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)) ;
    }
    switch (enumerator_26788.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26788.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).add_operation (enumerator_26788.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26788.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).add_operation (GGS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).add_operation (enumerator_26788.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26788.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (GGS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (enumerator_26788.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)) ;
      }
      break ;
    }
    enumerator_26788.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GGS_staticListIndirectRoutineIR temp_20 = this ;
    test_19 = temp_20.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 657)).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 658)) ;
    }
  }
  if (kBoolFalse == test_19) {
    const GGS_staticListIndirectRoutineIR temp_21 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_21.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 662)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedTaskListDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedTaskListDeclaration temp_0 = this ;
  cEnumerator_decoratedTaskList enumerator_12051 (temp_0.readProperty_mTaskList (), EnumerationOrder::up) ;
  GGS_uint index_12034 (uint32_t (0)) ;
  while (enumerator_12051.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_12051.current (HERE), constinArgument_inContext, index_12034, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 320)) ;
    enumerator_12051.gotoNextObject () ;
    index_12034.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 319)) ;
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
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 335)) ;
  outArgument_outSetupOrderedList = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 336)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GGS_uint var_numberOfEntriesWithoutAnyPrecedence_12646 = GGS_uint (uint32_t (0U)) ;
      cEnumerator_taskSetupListAST enumerator_12697 (constinArgument_inTaskRoutineLISTAST, EnumerationOrder::up) ;
      while (enumerator_12697.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, enumerator_12697.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 340)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_numberOfEntriesWithoutAnyPrecedence_12646.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_12646.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 341)) ;
          }
        }
        enumerator_12697.gotoNextObject () ;
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_numberOfEntriesWithoutAnyPrecedence_12646.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          cEnumerator_taskSetupListAST enumerator_12956 (constinArgument_inTaskRoutineLISTAST, EnumerationOrder::up) ;
          while (enumerator_12956.hasCurrentObject ()) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_12956.current_mName (HERE).readProperty_location (), GGS_string ("Exactly one routine should have no precedence"), fixItArray4  COMMA_SOURCE_FILE ("task-declaration.galgas", 346)) ;
            enumerator_12956.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_numberOfEntriesWithoutAnyPrecedence_12646.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            cEnumerator_taskSetupListAST enumerator_13136 (constinArgument_inTaskRoutineLISTAST, EnumerationOrder::up) ;
            while (enumerator_13136.hasCurrentObject ()) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::equal, enumerator_13136.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 350)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_13136.current_mName (HERE).readProperty_location (), GGS_string ("Exactly one routine should have no precedence"), fixItArray7  COMMA_SOURCE_FILE ("task-declaration.galgas", 351)) ;
                }
              }
              enumerator_13136.gotoNextObject () ;
            }
          }
        }
      }
      GGS_taskSetupListAST var_taskSetupListAST_13394 = constinArgument_inTaskRoutineLISTAST ;
      GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 357)) ;
      GGS_stringset var_precedenceSet_13453 = temp_8 ;
      GGS_bool var_continue_13481 = GGS_bool (true) ;
      if (constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).isValid ()) {
        uint32_t variant_13501 = constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).uintValue () ;
        bool loop_13501 = true ;
        while (loop_13501) {
          GGS_bool test_9 = var_continue_13481 ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = GGS_bool (ComparisonKind::greaterThan, var_taskSetupListAST_13394.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).objectCompare (GGS_uint (uint32_t (0U)))) ;
          }
          loop_13501 = test_9.isValid () ;
          if (loop_13501) {
            loop_13501 = test_9.boolValue () ;
          }
          if (loop_13501 && (0 == variant_13501)) {
            loop_13501 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 359)) ;
          }
          if (loop_13501) {
            variant_13501 -- ;
            var_continue_13481 = GGS_bool (false) ;
            GGS_bigint var_idx_13622 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 361)) ;
            cEnumerator_taskSetupListAST enumerator_13646 (var_taskSetupListAST_13394, EnumerationOrder::up) ;
            while (enumerator_13646.hasCurrentObject ()) {
              GGS_bool var_allPrecedenceDefined_13697 = GGS_bool (true) ;
              cEnumerator_lstringlist enumerator_13738 (enumerator_13646.current_mDependanceList (HERE), EnumerationOrder::up) ;
              bool bool_10 = var_allPrecedenceDefined_13697.isValidAndTrue () ;
              if (enumerator_13738.hasCurrentObject () && bool_10) {
                while (enumerator_13738.hasCurrentObject () && bool_10) {
                  var_allPrecedenceDefined_13697 = var_precedenceSet_13453.getter_hasKey (enumerator_13738.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas", 365)) ;
                  enumerator_13738.gotoNextObject () ;
                  if (enumerator_13738.hasCurrentObject ()) {
                    bool_10 = var_allPrecedenceDefined_13697.isValidAndTrue () ;
                  }
                }
              }
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = var_allPrecedenceDefined_13697.boolEnum () ;
                if (kBoolTrue == test_11) {
                  outArgument_outSetupOrderedList.addAssign_operation (enumerator_13646.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 368)) ;
                  var_precedenceSet_13453.addAssign_operation (enumerator_13646.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 369)) ;
                  var_continue_13481 = GGS_bool (true) ;
                  {
                  GGS_lstring joker_14086_2 ; // Joker input parameter
                  GGS_lstringlist joker_14086_1 ; // Joker input parameter
                  var_taskSetupListAST_13394.setter_removeAtIndex (joker_14086_2, joker_14086_1, var_idx_13622.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)) ;
                  }
                }
              }
              if (kBoolFalse == test_11) {
                var_idx_13622 = var_idx_13622.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 373)) ;
              }
              enumerator_13646.gotoNextObject () ;
            }
          }
        }
      }
      cEnumerator_taskSetupListAST enumerator_14217 (var_taskSetupListAST_13394, EnumerationOrder::up) ;
      while (enumerator_14217.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_14217.current_mName (HERE).readProperty_location (), GGS_string ("this routine is out of execution order"), fixItArray12  COMMA_SOURCE_FILE ("task-declaration.galgas", 379)) ;
        enumerator_14217.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskActivateFunctionIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_taskActivateFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                             const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskActivateFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 611)) ;
  const GGS_taskActivateFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("(%").add_operation (temp_1.readProperty_mAssemblerTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 612)) ;
  const GGS_taskActivateFunctionIR temp_2 = this ;
  const GGS_taskActivateFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (temp_2.readProperty_mActivateServiceInvocationName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GGS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (temp_3.readProperty_mTaskIndex ().getter_string (SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 613)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 614)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 615)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 616)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 617)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskSetupDeclarationAST temp_0 = this ;
  const GGS_taskSetupDeclarationAST temp_1 = this ;
  const GGS_taskSetupDeclarationAST temp_2 = this ;
  GGS_string var_s_3454 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)) ;
  {
  const GGS_taskSetupDeclarationAST temp_3 = this ;
  const GGS_taskSetupDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_3454, temp_3.readProperty_mSetupName ().readProperty_location (), inCompiler COMMA_HERE), temp_4, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 91)) ;
  }
  {
  const GGS_taskSetupDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_5.readProperty_mTaskName () COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 93)) ;
  }
  const GGS_taskSetupDeclarationAST temp_6 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_6.readProperty_mTaskSetupInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 94)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_taskSetupDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_taskSetupDeclarationAST temp_0 = this ;
  const GGS_taskSetupDeclarationAST temp_1 = this ;
  result_result = GGS_string ("task function ").add_operation (temp_0.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (temp_1.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_taskSetupDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_taskSetupDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mSetupName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::method_enterInContext (GGS_semanticContext & /* ioArgument_ioContext */,
                                                          GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                          GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                          GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskSetupDeclarationAST temp_0 = this ;
  const GGS_taskSetupDeclarationAST temp_1 = this ;
  const GGS_taskSetupDeclarationAST temp_2 = this ;
  GGS_string var_mangledName_5207 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)) ;
  const GGS_taskSetupDeclarationAST temp_3 = this ;
  const GGS_taskSetupDeclarationAST temp_4 = this ;
  GGS_routineFormalArgumentListAST temp_5 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 134)) ;
  const GGS_taskSetupDeclarationAST temp_6 = this ;
  const GGS_taskSetupDeclarationAST temp_7 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_3.readProperty_mTaskName (), GGS_mode::class_func_userMode (SOURCE_FILE ("task-setup-declaration.galgas", 127)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("task-setup-declaration.galgas", 129)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("task-setup-declaration.galgas", 132)), GGS_lstring::init_21__21_ (var_mangledName_5207, temp_4.readProperty_mSetupName ().readProperty_location (), inCompiler COMMA_HERE), temp_5, GGS_bool (true), temp_6.readProperty_mTaskSetupInstructionList (), temp_7.readProperty_mEndOfTaskSetupDeclaration (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-setup-declaration.galgas", 138))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 125)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_4585 = GGS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_functionDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_functionDeclarationAST temp_2 = this ;
      var_s_4585.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 153)) ;
    }
  }
  const GGS_functionDeclarationAST temp_3 = this ;
  var_s_4585.plusAssign_operation(temp_3.readProperty_mFunctionName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 155)) ;
  const GGS_functionDeclarationAST temp_4 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_4772 (temp_4.readProperty_mFunctionFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_4772.hasCurrentObject ()) {
    var_s_4585.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4772.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (enumerator_4772.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 157)) ;
    enumerator_4772.gotoNextObject () ;
  }
  var_s_4585.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 159)) ;
  const GGS_functionDeclarationAST temp_5 = this ;
  GGS_lstring var_nodeName_4915 = GGS_lstring::init_21__21_ (var_s_4585, temp_5.readProperty_mFunctionName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_functionDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4915, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 161)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4915, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) ;
  }
  const GGS_functionDeclarationAST temp_7 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_5117 (temp_7.readProperty_mFunctionFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_5117.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5117.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 165)) ;
    }
    enumerator_5117.gotoNextObject () ;
  }
  const GGS_functionDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mFunctionInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 167)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_functionDeclarationAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GGS_functionDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 169)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GGS_functionDeclarationAST temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mFunctionReturnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      const GGS_functionDeclarationAST temp_14 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_14.readProperty_mFunctionReturnTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 172)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_functionDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_functionDeclarationAST temp_0 = this ;
  const GGS_functionDeclarationAST temp_1 = this ;
  result_result = GGS_string ("function ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (temp_1.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_functionDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_functionDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mFunctionName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                         GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                         GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                         GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                         GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                         GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                         GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                         GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature var_signature_7009 ;
  {
  const GGS_functionDeclarationAST temp_0 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mFunctionFormalArgumentList (), var_signature_7009, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 203)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_7114 ;
  {
  const GGS_functionDeclarationAST temp_1 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mFunctionReturnTypeName (), var_returnTypeProxy_7114, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 205)) ;
  }
  GGS_bool var_warnIfUnused_7153 = GGS_bool (true) ;
  GGS_bool var_exportedFunction_7179 = GGS_bool (false) ;
  GGS_bool var_canMutateProperties_7210 = GGS_bool (false) ;
  const GGS_functionDeclarationAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_7245 (temp_2.readProperty_mFunctionAttributeList (), EnumerationOrder::up) ;
  while (enumerator_7245.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_7245.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 211)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_warnIfUnused_7153.operator_not (SOURCE_FILE ("declaration-function.galgas", 212)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_7245.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), fixItArray5  COMMA_SOURCE_FILE ("declaration-function.galgas", 213)) ;
          }
        }
        var_warnIfUnused_7153 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::equal, enumerator_7245.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 216)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_exportedFunction_7179.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_7245.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), fixItArray8  COMMA_SOURCE_FILE ("declaration-function.galgas", 218)) ;
            }
          }
          var_exportedFunction_7179 = GGS_bool (true) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_7245.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 221)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = var_canMutateProperties_7210.boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_7245.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), fixItArray11  COMMA_SOURCE_FILE ("declaration-function.galgas", 223)) ;
              }
            }
            var_canMutateProperties_7210 = GGS_bool (true) ;
          }
        }
        if (kBoolFalse == test_9) {
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_7245.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 227)).add_operation (GGS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (GGS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), fixItArray12  COMMA_SOURCE_FILE ("declaration-function.galgas", 227)) ;
        }
      }
    }
    enumerator_7245.gotoNextObject () ;
  }
  const GGS_functionDeclarationAST temp_13 = this ;
  const GGS_functionDeclarationAST temp_14 = this ;
  const GGS_functionDeclarationAST temp_15 = this ;
  GGS_lstring var_functionLLVMName_8163 = function_routineMangledNameFromAST (temp_13.readProperty_mReceiverTypeName ().readProperty_string (), temp_14.readProperty_mFunctionName (), temp_15.readProperty_mFunctionFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 232)) ;
  const GGS_functionDeclarationAST temp_16 = this ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_8384 = extensionGetter_routineLLVMDictionaryForFunction (temp_16.readProperty_mMode (), var_functionLLVMName_8163.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 238)) ;
  const GGS_functionDeclarationAST temp_17 = this ;
  const GGS_functionDeclarationAST temp_18 = this ;
  GGS_lstring var_routineMangledName_8476 = extensionGetter_mangledName (var_signature_7009, temp_17.readProperty_mReceiverTypeName ().readProperty_string (), temp_18.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 239)) ;
  {
  const GGS_functionDeclarationAST temp_19 = this ;
  const GGS_functionDeclarationAST temp_20 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_8476, temp_19.readProperty_mPublicFunction (), var_signature_7009, var_returnTypeProxy_7114, var_routineLLVMNameDict_8384, var_exportedFunction_7179, temp_20.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 240)) ;
  }
  const GGS_functionDeclarationAST temp_21 = this ;
  const GGS_functionDeclarationAST temp_22 = this ;
  const GGS_functionDeclarationAST temp_23 = this ;
  const GGS_functionDeclarationAST temp_24 = this ;
  const GGS_functionDeclarationAST temp_25 = this ;
  const GGS_functionDeclarationAST temp_26 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_21.readProperty_mReceiverTypeName (), temp_22.readProperty_mMode (), ioArgument_ioContext.readProperty_mRequiredRoutineSet ().getter_hasKey (var_functionLLVMName_8163.readProperty_string () COMMA_SOURCE_FILE ("declaration-function.galgas", 253)), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-function.galgas", 254)), var_warnIfUnused_7153, var_exportedFunction_7179, GGS_routineAttributes::init (inCompiler COMMA_HERE), var_functionLLVMName_8163, temp_23.readProperty_mFunctionFormalArgumentList (), GGS_bool (true), temp_24.readProperty_mFunctionInstructionList (), temp_25.readProperty_mEndOfFunctionDeclaration (), temp_26.readProperty_mFunctionReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-function.galgas", 250)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemRoutineDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_5007 = GGS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_systemRoutineDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_systemRoutineDeclarationAST temp_2 = this ;
      var_s_5007.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)) ;
    }
  }
  const GGS_systemRoutineDeclarationAST temp_3 = this ;
  var_s_5007.plusAssign_operation(temp_3.readProperty_mSystemRoutineName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)) ;
  const GGS_systemRoutineDeclarationAST temp_4 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_5199 (temp_4.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_5199.hasCurrentObject ()) {
    var_s_5007.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5199.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (enumerator_5199.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)) ;
    enumerator_5199.gotoNextObject () ;
  }
  var_s_5007.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 175)) ;
  const GGS_systemRoutineDeclarationAST temp_5 = this ;
  GGS_lstring var_nodeKey_5334 = GGS_lstring::init_21__21_ (var_s_5007, temp_5.readProperty_mSystemRoutineName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_systemRoutineDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeKey_5334, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 177)) ;
  }
  const GGS_systemRoutineDeclarationAST temp_7 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_5469 (temp_7.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_5469.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5469.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 180)) ;
    }
    enumerator_5469.gotoNextObject () ;
  }
  const GGS_systemRoutineDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 182)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_systemRoutineDeclarationAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GGS_systemRoutineDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 184)) ;
      }
      {
      const GGS_systemRoutineDeclarationAST temp_12 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5334, temp_12.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 185)) ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GGS_systemRoutineDeclarationAST temp_14 = this ;
    test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mReturnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GGS_systemRoutineDeclarationAST temp_15 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_15.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 188)) ;
      }
      {
      const GGS_systemRoutineDeclarationAST temp_16 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5334, temp_16.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 189)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_systemRoutineDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_systemRoutineDeclarationAST temp_0 = this ;
  const GGS_systemRoutineDeclarationAST temp_1 = this ;
  result_result = GGS_string ("system ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (temp_1.readProperty_mSystemRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST locationForErrorSignaling'
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
  GGS_string var_s_7121 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_section:
    {
      var_s_7121 = GGS_string ("section") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_service:
    {
      var_s_7121 = GGS_string ("service") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_primitive:
    {
      var_s_7121 = GGS_string ("primitive") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_function:
    {
      var_s_7121 = GGS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_7121.plusAssign_operation(GGS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 225)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_7121.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)) ;
    }
  }
  var_s_7121.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 229)) ;
  var_s_7121.plusAssign_operation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7475 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_7475.hasCurrentObject ()) {
    var_s_7121.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7475.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (enumerator_7475.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)) ;
    enumerator_7475.gotoNextObject () ;
  }
  var_s_7121.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_7121, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemUserMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_systemUserMangledNameFromAST (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
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
  GGS_string var_s_8098 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_section:
    {
      var_s_8098 = GGS_string ("section") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_service:
    {
      var_s_8098 = GGS_string ("service") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_primitive:
    {
      var_s_8098 = GGS_string ("primitive") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_function:
    {
      var_s_8098 = GGS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_8098.plusAssign_operation(GGS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 256)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_8098.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)) ;
    }
  }
  var_s_8098.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 260)) ;
  var_s_8098.plusAssign_operation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_8462 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_8462.hasCurrentObject ()) {
    var_s_8098.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_8462.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (enumerator_8462.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
    enumerator_8462.gotoNextObject () ;
  }
  var_s_8098.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_8098, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemImplementationMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_systemImplementationMangledNameFromAST (Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
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
//
//Overriding extension method '@systemRoutineDeclarationAST enterInContext'
//
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
  GGS_unifiedTypeMapEntry var_selfTypeProxy_9664 ;
  {
  const GGS_systemRoutineDeclarationAST temp_0 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_selfTypeProxy_9664, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
  }
  GGS_string temp_1 ;
  const enumGalgasBool test_2 = var_selfTypeProxy_9664.getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GGS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_type (var_selfTypeProxy_9664, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)).readProperty_llvmBaseTypeName () ;
  }
  GGS_string var_receiverLLVMBaseTypeName_9710 = temp_1 ;
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  GGS_stringset var_attributeSet_9851 = temp_3 ;
  const GGS_systemRoutineDeclarationAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_9894 (temp_4.readProperty_mAttributeList (), EnumerationOrder::up) ;
  while (enumerator_9894.hasCurrentObject ()) {
    var_attributeSet_9851.addAssign_operation (enumerator_9894.current (HERE).readProperty_mValue ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)) ;
    enumerator_9894.gotoNextObject () ;
  }
  GGS_routineKind var_routineKind_9987 ;
  const GGS_systemRoutineDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mMode ().enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      var_routineKind_9987 = GGS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas", 296)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      var_routineKind_9987 = GGS_routineKind::class_func_service (SOURCE_FILE ("declaration-svc.galgas", 298)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_primitiveMode:
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      var_routineKind_9987 = GGS_routineKind::class_func_primitive (SOURCE_FILE ("declaration-svc.galgas", 300)) ;
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
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mSystemRoutineName ().readProperty_location (), GGS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("declaration-svc.galgas", 302)) ;
      var_routineKind_9987.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_systemRoutineDeclarationAST temp_8 = this ;
  const GGS_systemRoutineDeclarationAST temp_9 = this ;
  GGS_lstring var_userRoutineMangledName_10440 = function_systemUserMangledNameFromAST (var_receiverLLVMBaseTypeName_9710, var_routineKind_9987, temp_8.readProperty_mSystemRoutineName (), temp_9.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
  const GGS_systemRoutineDeclarationAST temp_10 = this ;
  const GGS_systemRoutineDeclarationAST temp_11 = this ;
  GGS_lstring var_implementationRoutineMangledName_10612 = function_systemImplementationMangledNameFromAST (var_receiverLLVMBaseTypeName_9710, var_routineKind_9987, temp_10.readProperty_mSystemRoutineName (), temp_11.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  GGS_routineTypedSignature var_signature_10890 ;
  {
  const GGS_systemRoutineDeclarationAST temp_12 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_12.readProperty_mFormalArgumentList (), var_signature_10890, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_10988 ;
  {
  const GGS_systemRoutineDeclarationAST temp_13 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_13.readProperty_mReturnTypeName (), var_returnTypeProxy_10988, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 320)) ;
  }
  GGS_bool var_mutatingRoutine_11027 = GGS_bool (false) ;
  GGS_bool var_noUnusedWarning_11057 = GGS_bool (false) ;
  const GGS_systemRoutineDeclarationAST temp_14 = this ;
  cEnumerator_lstringlist enumerator_11088 (temp_14.readProperty_mAttributeList (), EnumerationOrder::up) ;
  while (enumerator_11088.hasCurrentObject ()) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::equal, enumerator_11088.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 325)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_noUnusedWarning_11057.boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <FixItDescription> fixItArray17 ;
            fixItArray17.appendObject (FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_11088.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), fixItArray17  COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)) ;
          }
        }
        var_noUnusedWarning_11057 = GGS_bool (true) ;
      }
    }
    if (kBoolFalse == test_15) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::equal, enumerator_11088.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 330)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          enumGalgasBool test_19 = kBoolTrue ;
          if (kBoolTrue == test_19) {
            test_19 = var_mutatingRoutine_11027.boolEnum () ;
            if (kBoolTrue == test_19) {
              TC_Array <FixItDescription> fixItArray20 ;
              fixItArray20.appendObject (FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11088.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), fixItArray20  COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)) ;
            }
          }
          var_mutatingRoutine_11027 = GGS_bool (true) ;
        }
      }
      if (kBoolFalse == test_18) {
        TC_Array <FixItDescription> fixItArray21 ;
        fixItArray21.appendObject (FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_11088.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (GGS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), fixItArray21  COMMA_SOURCE_FILE ("declaration-svc.galgas", 336)) ;
      }
    }
    enumerator_11088.gotoNextObject () ;
  }
  GGS_routineAttributes var_attributes_11797 = GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-svc.galgas", 341)) ;
  const GGS_systemRoutineDeclarationAST temp_22 = this ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_11880 = extensionGetter_routineLLVMDictionaryForSystemRoutine (temp_22.readProperty_mMode (), var_userRoutineMangledName_10440.readProperty_string (), var_implementationRoutineMangledName_10612.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 343)) ;
  const GGS_systemRoutineDeclarationAST temp_23 = this ;
  const GGS_systemRoutineDeclarationAST temp_24 = this ;
  GGS_lstring var_routineMangledName_12028 = extensionGetter_mangledName (var_signature_10890, temp_23.readProperty_mReceiverTypeName ().readProperty_string (), temp_24.readProperty_mSystemRoutineName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 347)) ;
  {
  const GGS_systemRoutineDeclarationAST temp_25 = this ;
  const GGS_systemRoutineDeclarationAST temp_26 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_12028, temp_25.readProperty_mPublic (), var_signature_10890, var_returnTypeProxy_10988, var_routineLLVMNameDict_11880, GGS_bool (true), temp_26.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
  }
  const GGS_systemRoutineDeclarationAST temp_27 = this ;
  const GGS_systemRoutineDeclarationAST temp_28 = this ;
  const GGS_systemRoutineDeclarationAST temp_29 = this ;
  const GGS_systemRoutineDeclarationAST temp_30 = this ;
  const GGS_systemRoutineDeclarationAST temp_31 = this ;
  const GGS_systemRoutineDeclarationAST temp_32 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_27.readProperty_mReceiverTypeName (), temp_28.readProperty_mMode (), GGS_bool (false), var_routineKind_9987, var_noUnusedWarning_11057.operator_not (SOURCE_FILE ("declaration-svc.galgas", 363)), GGS_bool (true), var_attributes_11797, var_implementationRoutineMangledName_10612, temp_29.readProperty_mFormalArgumentList (), var_noUnusedWarning_11057, temp_30.readProperty_mInstructionList (), temp_31.readProperty_mEndOfInstructionListLocation (), temp_32.readProperty_mReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 358)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GGS_systemUserRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (var_userRoutineMangledName_10440, GGS_bool (false), GGS_bool (false), var_implementationRoutineMangledName_10612.readProperty_string (), var_signature_10890, var_selfTypeProxy_9664, GGS_bool (ComparisonKind::equal, var_routineKind_9987.objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas", 380)))), var_returnTypeProxy_10988, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)) ;
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
  result_result.plusAssign_operation(GGS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
  GGS_bool var_first_14419 = GGS_bool (true) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("declaration-svc.galgas", 414)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)).add_operation (GGS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
      var_first_14419 = GGS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_14603 (constinArgument_inFormalArgumentListForGeneration, EnumerationOrder::up) ;
  while (enumerator_14603.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_first_14419.boolEnum () ;
      if (kBoolTrue == test_1) {
        var_first_14419 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)) ;
    }
    switch (enumerator_14603.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14603.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (enumerator_14603.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14603.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (function_llvmNameForLocalVariable (enumerator_14603.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14603.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (function_llvmNameForLocalVariable (enumerator_14603.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)) ;
      }
      break ;
    }
    enumerator_14603.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListIR,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmFunctionPrototype (Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
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
  cEnumerator_sectionIRlist enumerator_15528 (constinArgument_inSectionIRlist, EnumerationOrder::up) ;
  GGS_uint index_15513 (uint32_t (0)) ;
  while (enumerator_15528.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_15528.current (HERE).readProperty_invocationFromAnyMode ().boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_string var_s_15605 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromAnyMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)) ;
        var_s_15605 = var_s_15605.getter_stringByReplacingStringByString (GGS_string ("!USER_ROUTINE!"), enumerator_15528.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 451)) ;
        var_s_15605 = var_s_15605.getter_stringByReplacingStringByString (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15528.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 452)) ;
        var_s_15605 = var_s_15605.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_15513.getter_string (SOURCE_FILE ("declaration-svc.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 453)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15605, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 454)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GGS_string var_s_16085 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromUserMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 456)) ;
      var_s_16085 = var_s_16085.getter_stringByReplacingStringByString (GGS_string ("!USER_ROUTINE!"), enumerator_15528.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)) ;
      var_s_16085 = var_s_16085.getter_stringByReplacingStringByString (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15528.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 461)) ;
      var_s_16085 = var_s_16085.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_15513.getter_string (SOURCE_FILE ("declaration-svc.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 462)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16085, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 463)) ;
    }
    enumerator_15528.gotoNextObject () ;
    index_15513.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)) ;
  cEnumerator_sectionIRlist enumerator_16751 (constinArgument_inSectionIRlist, EnumerationOrder::up) ;
  GGS_uint index_16718 (uint32_t (0)) ;
  while (enumerator_16751.hasCurrentObject ()) {
    GGS_string var_s_16790 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
    var_s_16790 = var_s_16790.getter_stringByReplacingStringByString (GGS_string ("!USER_ROUTINE!"), enumerator_16751.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
    var_s_16790 = var_s_16790.getter_stringByReplacingStringByString (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_16751.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 476)) ;
    var_s_16790 = var_s_16790.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_16718.getter_string (SOURCE_FILE ("declaration-svc.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 477)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16790, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)) ;
    enumerator_16751.gotoNextObject () ;
    index_16718.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 470)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 480)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GGS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 485)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GGS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 486)) ;
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
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_18082 (constinArgument_inServiceList, EnumerationOrder::up) ;
  GGS_uint index_18067 (uint32_t (0)) ;
  while (enumerator_18082.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_18082.current (HERE).readProperty_mHasReturnValue ().boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_string var_s_18151 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryWithReturnValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 506)) ;
        var_s_18151 = var_s_18151.getter_stringByReplacingStringByString (GGS_string ("!ENTRY!"), enumerator_18082.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 510)) ;
        var_s_18151 = var_s_18151.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_18067.getter_string (SOURCE_FILE ("declaration-svc.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 511)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18151, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 512)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GGS_string var_s_18496 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryNoReturnedValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 514)) ;
      var_s_18496 = var_s_18496.getter_stringByReplacingStringByString (GGS_string ("!ENTRY!"), enumerator_18082.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)) ;
      var_s_18496 = var_s_18496.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_18067.getter_string (SOURCE_FILE ("declaration-svc.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 519)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18496, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 520)) ;
    }
    enumerator_18082.gotoNextObject () ;
    index_18067.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 504)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_19008 (constinArgument_inServiceList, EnumerationOrder::up) ;
  GGS_uint index_18993 (uint32_t (0)) ;
  while (enumerator_19008.hasCurrentObject ()) {
    GGS_string var_s_19039 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 528)) ;
    var_s_19039 = var_s_19039.getter_stringByReplacingStringByString (GGS_string ("!ENTRY!"), enumerator_19008.current (HERE).readProperty_mImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 532)) ;
    var_s_19039 = var_s_19039.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_18993.getter_string (SOURCE_FILE ("declaration-svc.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 533)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_19039, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 534)) ;
    enumerator_19008.gotoNextObject () ;
    index_18993.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 527)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 536)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_systemUserRoutineIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mMangledImplementationName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 557)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_svcDeclarationGeneration (GGS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                GGS_sectionIRlist & ioArgument_ioSectionList,
                                                                GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_systemUserRoutineIR temp_0 = this ;
  GGS_string var_userMangledName_20596 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 567)) ;
  const GGS_systemUserRoutineIR temp_1 = this ;
  GGS_string var_implementationMangledName_20671 = temp_1.readProperty_mMangledImplementationName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 568)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_systemUserRoutineIR temp_3 = this ;
    test_2 = temp_3.readProperty_mIsSection ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_20596, var_implementationMangledName_20671, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 570)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_20596, var_implementationMangledName_20671, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 583)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_systemUserRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 584)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 585)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_systemUserRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)) ;
  }
  const GGS_systemUserRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)) ;
  GGS_bool var_first_21534 = GGS_bool (true) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_systemUserRoutineIR temp_5 = this ;
    test_4 = temp_5.readProperty_mReceiverTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 591)).operator_not (SOURCE_FILE ("declaration-svc.galgas", 591)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_systemUserRoutineIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_6.readProperty_mReceiverTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).add_operation (GGS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)) ;
      var_first_21534 = GGS_bool (false) ;
    }
  }
  const GGS_systemUserRoutineIR temp_7 = this ;
  cEnumerator_routineTypedSignature enumerator_21745 (temp_7.readProperty_mFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_21745.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_first_21534.boolEnum () ;
      if (kBoolTrue == test_8) {
        var_first_21534 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 599)) ;
    }
    switch (enumerator_21745.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_21745.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_21745.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_21745.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)) ;
      }
      break ;
    }
    enumerator_21745.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'checkRequiredProcedures?ast?context?endOfSourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_checkRequiredProcedures_3F_ast_3F_context_3F_endOfSourceFile (const GGS_ast constinArgument_inAST,
                                                                           const GGS_semanticContext constinArgument_inContext,
                                                                           const GGS_location /* constinArgument_inEndOfSourceFile */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredFunctionDeclarationListAST enumerator_2198 (constinArgument_inAST.readProperty_mRequiredFunctionListAST (), EnumerationOrder::up) ;
  while (enumerator_2198.hasCurrentObject ()) {
    GGS_lstring var_requiredFunctionSignature_2234 = extensionGetter_routineSignature (enumerator_2198.current (HERE).readProperty_mFormalArgumentList (), enumerator_2198.current (HERE).readProperty_mName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    GGS_string var_requiredFunctionMangledName_2350 = enumerator_2198.current (HERE).readProperty_mName ().readProperty_string ().add_operation (var_requiredFunctionSignature_2234.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inContext.readProperty_mRoutineMap ().getter_hasKey (var_requiredFunctionMangledName_2350 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 63)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2198.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GGS_bool var_implementedPublic_2694 ;
      GGS_routineTypedSignature var_implementedSignature_2725 ;
      GGS_unifiedTypeMapEntry var_implementedReturnTypeProxy_2759 ;
      GGS_routineLLVMNameDict var_implementedModeDictionary_2834 ;
      GGS_bool var_implementedIsExported_2873 ;
      GGS_mode var_implementedMode_2908 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_2350.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 67)), var_implementedPublic_2694, var_implementedSignature_2725, var_implementedReturnTypeProxy_2759, var_implementedModeDictionary_2834, var_implementedIsExported_2873, var_implementedMode_2908, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      GGS_location var_errorLocation_2942 = constinArgument_inContext.readProperty_mRoutineMap ().getter_locationForKey (var_requiredFunctionMangledName_2350, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GGS_routineTypedSignature var_requiredTypedSignature_3145 ;
      {
      routine_routineTypedSignature_32__3F__3F__21_ (constinArgument_inContext.readProperty_mTypeMap (), enumerator_2198.current (HERE).readProperty_mFormalArgumentList (), var_requiredTypedSignature_3145, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typedString (var_requiredTypedSignature_3145, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2725, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3145, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)).add_operation (GGS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_implementedReturnTypeProxy_2759.getter_isNull (SOURCE_FILE ("declaration-required-proc.galgas", 83)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 83)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_implementedMode_2908.objectCompare (enumerator_2198.current (HERE).readProperty_mExecutionMode ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2198.current (HERE).readProperty_mExecutionMode (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_implementedPublic_2694.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 100)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GGS_bool test_11 = enumerator_2198.current (HERE).readProperty_mIsExported () ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_2873.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 103)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItInsertAfter, GGS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106))) ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GGS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 104)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          GGS_bool test_14 = var_implementedIsExported_2873 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2198.current (HERE).readProperty_mIsExported ().operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 107)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)).add_operation (GGS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 108)) ;
          }
        }
      }
    }
    enumerator_2198.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                      const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                      GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 175)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_externRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mReturnType ().getter_isNull (SOURCE_FILE ("declaration-extern-proc.galgas", 176)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 177)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_externRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)) ;
  }
  const GGS_externRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
  const GGS_externRoutineIR temp_4 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_6975 (temp_4.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_6975.hasCurrentObject ()) {
    switch (enumerator_6975.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6975.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (enumerator_6975.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6975.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (function_llvmNameForLocalVariable (enumerator_6975.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6975.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (function_llvmNameForLocalVariable (enumerator_6975.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)) ;
      }
      break ;
    }
    if (enumerator_6975.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
    }
    enumerator_6975.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (GGS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_isrDeclarationAST temp_0 = this ;
  GGS_lstring var_receiverTypeName_2052 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 53)) ;
  const GGS_isrDeclarationAST temp_1 = this ;
  GGS_string var_s_2130 = var_receiverTypeName_2052.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)) ;
  {
  const GGS_isrDeclarationAST temp_2 = this ;
  const GGS_isrDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_2130, temp_2.readProperty_mISRName ().readProperty_location (), inCompiler COMMA_HERE), temp_3, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)) ;
  }
  const GGS_isrDeclarationAST temp_4 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_4.readProperty_mISRInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 57)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverTypeName_2052.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioGraph.setter_noteNode (var_receiverTypeName_2052 COMMA_SOURCE_FILE ("declaration-isr.galgas", 59)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_isrDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_isrDeclarationAST temp_0 = this ;
  GGS_lstring var_receiverTypeName_2625 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 66)) ;
  const GGS_isrDeclarationAST temp_1 = this ;
  result_result = GGS_string ("function ").add_operation (var_receiverTypeName_2625.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_isrDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_isrDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mISRName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInContext (GGS_semanticContext & /* ioArgument_ioContext */,
                                                    GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                    GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                    GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                    GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                    GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                    GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_isrDeclarationAST temp_0 = this ;
  const GGS_isrDeclarationAST temp_1 = this ;
  const GGS_isrDeclarationAST temp_2 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GGS_decoratedISRDeclaration::init_21__21__21_ (temp_0.readProperty_mISRName (), temp_1.readProperty_mMode (), temp_2.readProperty_mDriverName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)) ;
  const GGS_isrDeclarationAST temp_3 = this ;
  GGS_lstring var_driverLLVMBaseTypeName_4110 = function_llvmDriverNameFromName (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 93)) ;
  const GGS_isrDeclarationAST temp_4 = this ;
  GGS_routineFormalArgumentListAST temp_5 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  GGS_lstring var_isrRoutineMangledName_4184 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_4110.readProperty_string (), temp_4.readProperty_mISRName (), temp_5, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  const GGS_isrDeclarationAST temp_6 = this ;
  const GGS_isrDeclarationAST temp_7 = this ;
  GGS_routineFormalArgumentListAST temp_8 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 104)) ;
  const GGS_isrDeclarationAST temp_9 = this ;
  const GGS_isrDeclarationAST temp_10 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_6.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), temp_7.readProperty_mMode (), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-isr.galgas", 99)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-isr.galgas", 102)), var_isrRoutineMangledName_4184, temp_8, GGS_bool (true), temp_9.readProperty_mISRInstructionList (), temp_10.readProperty_mEndOfISRDeclaration (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 108))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 95)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedISRDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedISRDeclaration::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_selfType_5746 ;
  const GGS_decoratedISRDeclaration temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)), var_selfType_5746, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)) ;
  const GGS_decoratedISRDeclaration temp_1 = this ;
  GGS_interruptionPanicCode joker_5838 ; // Joker input parameter
  constinArgument_inContext.readProperty_mAvailableInterruptMap ().method_searchKey (temp_1.readProperty_mISRName (), joker_5838, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 131)) ;
  {
  const GGS_decoratedISRDeclaration temp_2 = this ;
  const GGS_decoratedISRDeclaration temp_3 = this ;
  const GGS_decoratedISRDeclaration temp_4 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (temp_2.readProperty_mISRName (), var_selfType_5746, temp_3.readProperty_mDriverName ().readProperty_string (), temp_4.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 132)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3136 = GGS_string ("guard.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_guardDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_guardDeclarationAST temp_2 = this ;
      var_s_3136.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)) ;
    }
  }
  const GGS_guardDeclarationAST temp_3 = this ;
  var_s_3136.plusAssign_operation(temp_3.readProperty_mGuardName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)) ;
  const GGS_guardDeclarationAST temp_4 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_3326 (temp_4.readProperty_mGuardFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_3326.hasCurrentObject ()) {
    var_s_3136.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3326.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (enumerator_3326.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)) ;
    enumerator_3326.gotoNextObject () ;
  }
  var_s_3136.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 93)) ;
  {
  const GGS_guardDeclarationAST temp_5 = this ;
  const GGS_guardDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_3136, temp_5.readProperty_mGuardName ().readProperty_location (), inCompiler COMMA_HERE), temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)) ;
  }
  const GGS_guardDeclarationAST temp_7 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_3565 (temp_7.readProperty_mGuardFormalArgumentList (), EnumerationOrder::up) ;
  while (enumerator_3565.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_3565.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 97)) ;
    }
    enumerator_3565.gotoNextObject () ;
  }
  const GGS_guardDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mGuardInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 99)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_guardDeclarationAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GGS_guardDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-guard.galgas", 101)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_guardDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_guardDeclarationAST temp_0 = this ;
  const GGS_guardDeclarationAST temp_1 = this ;
  result_result = GGS_string ("guard ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (temp_1.readProperty_mGuardName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_guardDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_guardDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mGuardName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                      GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                      GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                      GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                      GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                      GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                      GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                      GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature var_signature_5317 ;
  {
  const GGS_guardDeclarationAST temp_0 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mGuardFormalArgumentList (), var_signature_5317, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 132)) ;
  }
  const GGS_guardDeclarationAST temp_1 = this ;
  const GGS_guardDeclarationAST temp_2 = this ;
  GGS_lstring var_guardMangledName_5358 = extensionGetter_mangledName (var_signature_5317, temp_1.readProperty_mReceiverTypeName ().readProperty_string (), temp_2.readProperty_mGuardName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 134)) ;
  const GGS_guardDeclarationAST temp_3 = this ;
  const GGS_guardDeclarationAST temp_4 = this ;
  const GGS_guardDeclarationAST temp_5 = this ;
  GGS_lstring var_guardUserLLVMName_5514 = function_guardUserLLVMName (temp_3.readProperty_mReceiverLLVMBaseTypeName (), temp_4.readProperty_mGuardName (), temp_5.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 136)) ;
  const GGS_guardDeclarationAST temp_6 = this ;
  const GGS_guardDeclarationAST temp_7 = this ;
  const GGS_guardDeclarationAST temp_8 = this ;
  GGS_lstring var_guardImplementationLLVMName_5700 = function_guardImplementationLLVMName (temp_6.readProperty_mReceiverLLVMBaseTypeName (), temp_7.readProperty_mGuardName (), temp_8.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 142)) ;
  {
  const GGS_guardDeclarationAST temp_9 = this ;
  ioArgument_ioContext.mProperty_mGuardMap.setter_insertKey (var_guardMangledName_5358, temp_9.readProperty_mIsPublic (), var_signature_5317, var_guardUserLLVMName_5514, var_guardImplementationLLVMName_5700, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 147)) ;
  }
  const GGS_guardDeclarationAST temp_10 = this ;
  const GGS_guardDeclarationAST temp_11 = this ;
  const GGS_guardDeclarationAST temp_12 = this ;
  const GGS_guardDeclarationAST temp_13 = this ;
  const GGS_guardDeclarationAST temp_14 = this ;
  const GGS_guardDeclarationAST temp_15 = this ;
  const GGS_guardDeclarationAST temp_16 = this ;
  const GGS_guardDeclarationAST temp_17 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GGS_decoratedGuardDeclaration::init_21__21__21__21__21__21__21__21_ (temp_10.readProperty_mReceiverTypeName (), temp_11.readProperty_mGuardName (), temp_12.readProperty_mIsPublic (), temp_13.readProperty_mGuardAttributeList (), temp_14.readProperty_mGuardFormalArgumentList (), temp_15.readProperty_mGuardKind (), temp_16.readProperty_mGuardInstructionList (), temp_17.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'guardUserLLVMName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_guardUserLLVMName (const GGS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                        const GGS_lstring & constinArgument_inGuardName,
                                        const GGS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_6859 = GGS_string ("guard.user.") ;
  var_s_6859.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
  var_s_6859.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 176)) ;
  var_s_6859.plusAssign_operation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 177)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6998 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_6998.hasCurrentObject ()) {
    var_s_6859.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_6998.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (enumerator_6998.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)) ;
    enumerator_6998.gotoNextObject () ;
  }
  var_s_6859.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_6859, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_guardUserLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_guardUserLLVMName (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_routineFormalArgumentListAST operand2 = GGS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                     inCompiler
                                                                                                     COMMA_THERE) ;
  return function_guardUserLLVMName (operand0,
                                     operand1,
                                     operand2,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_guardUserLLVMName ("guardUserLLVMName",
                                                                   functionWithGenericHeader_guardUserLLVMName,
                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                   3,
                                                                   functionArgs_guardUserLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'guardImplementationLLVMName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_guardImplementationLLVMName (const GGS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                  const GGS_lstring & constinArgument_inGuardName,
                                                  const GGS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_7557 = GGS_string ("guard.implementation.") ;
  var_s_7557.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  var_s_7557.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 193)) ;
  var_s_7557.plusAssign_operation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 194)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7706 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_7706.hasCurrentObject ()) {
    var_s_7557.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7706.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (enumerator_7706.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
    enumerator_7706.gotoNextObject () ;
  }
  var_s_7557.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_7557, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_guardImplementationLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_guardImplementationLLVMName (Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_routineFormalArgumentListAST operand2 = GGS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                     inCompiler
                                                                                                     COMMA_THERE) ;
  return function_guardImplementationLLVMName (operand0,
                                               operand1,
                                               operand2,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_guardImplementationLLVMName ("guardImplementationLLVMName",
                                                                             functionWithGenericHeader_guardImplementationLLVMName,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             3,
                                                                             functionArgs_guardImplementationLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedGuardDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedGuardDeclaration::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                              GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedGuardDeclaration temp_0 = this ;
  GGS_omnibusType var_receiverType_9634 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mReceiverTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)) ;
  GGS_bool var_warnIfUnused_9731 = GGS_bool (true) ;
  const GGS_decoratedGuardDeclaration temp_1 = this ;
  cEnumerator_lstringlist enumerator_9758 (temp_1.readProperty_mGuardAttributeList (), EnumerationOrder::up) ;
  while (enumerator_9758.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_9758.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 242)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_warnIfUnused_9731.operator_not (SOURCE_FILE ("declaration-guard.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9758.current_mValue (HERE).readProperty_location (), GGS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)) ;
          }
        }
        var_warnIfUnused_9731 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_9758.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)) ;
    }
    enumerator_9758.gotoNextObject () ;
  }
  GGS_universalValuedObjectMap var_universalMap_10164 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_10164, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 253)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_10164, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 254)) ;
  }
  GGS_routineFormalArgumentListIR temp_6 = GGS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 255)) ;
  GGS_routineFormalArgumentListIR var_formalArguments_10317 = temp_6 ;
  GGS_guardKindGenerationIR var_convenienceGuardGenerationIR_10368 ;
  GGS_allocaList temp_7 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 257)) ;
  GGS_allocaList var_allocaList_10415 = temp_7 ;
  GGS_instructionListIR temp_8 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 258)) ;
  GGS_instructionListIR var_instructionGenerationList_10457 = temp_8 ;
  const GGS_decoratedGuardDeclaration temp_9 = this ;
  switch (temp_9.readProperty_mGuardKind ().enumValue ()) {
  case GGS_guardKind::Enumeration::invalid:
    break ;
  case GGS_guardKind::Enumeration::enum_baseGuard:
    {
      const GGS_decoratedGuardDeclaration temp_10 = this ;
      GGS_lstring var_resultVarName_10577 = GGS_lstring::init_21__21_ (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)), temp_10.readProperty_mGuardName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_resultType_10784 = extensionGetter_booleanType (constinArgument_inContext, var_resultVarName_10577.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 264)) ;
      var_allocaList_10415.addAssign_operation (function_llvmNameForLocalVariable (var_resultVarName_10577.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)), var_resultType_10784, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_10164, var_resultVarName_10577, var_resultType_10784, var_resultVarName_10577, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("declaration-guard.galgas", 278)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 274)) ;
      }
      {
      const GGS_decoratedGuardDeclaration temp_11 = this ;
      routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_11.readProperty_mGuardFormalArgumentList (), var_universalMap_10164, var_formalArguments_10317, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 282)) ;
      }
      var_convenienceGuardGenerationIR_10368 = GGS_guardKindGenerationIR::class_func_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 289)) ;
      const GGS_decoratedGuardDeclaration temp_12 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_12.readProperty_mGuardInstructionList (), var_receiverType_9634, GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 293)), constinArgument_inContext, GGS_mode::class_func_guardMode (SOURCE_FILE ("declaration-guard.galgas", 295)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10164, var_allocaList_10415, var_instructionGenerationList_10457, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 291)) ;
    }
    break ;
  case GGS_guardKind::Enumeration::enum_convenienceGuard:
    {
      GGS_callInstructionAST extractedValue_12218_baseGuardInstruction_0 ;
      temp_9.readProperty_mGuardKind ().getAssociatedValuesFor_convenienceGuard (extractedValue_12218_baseGuardInstruction_0) ;
      {
      const GGS_decoratedGuardDeclaration temp_13 = this ;
      routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_13.readProperty_mGuardFormalArgumentList (), var_universalMap_10164, var_formalArguments_10317, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 304)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((cPtr_callInstructionAST *) extractedValue_12218_baseGuardInstruction_0.ptr (), var_receiverType_9634, GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 314)), constinArgument_inContext, GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 316)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10164, var_convenienceGuardGenerationIR_10368, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 312)) ;
      const GGS_decoratedGuardDeclaration temp_14 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_14.readProperty_mGuardInstructionList (), var_receiverType_9634, GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 325)), constinArgument_inContext, GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 327)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10164, var_allocaList_10415, var_instructionGenerationList_10457, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 323)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_10164, var_instructionGenerationList_10457, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 336)) ;
  {
  const GGS_decoratedGuardDeclaration temp_15 = this ;
  extensionSetter_closeBranch (var_universalMap_10164, temp_15.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 337)) ;
  }
  {
  const GGS_decoratedGuardDeclaration temp_16 = this ;
  extensionSetter_closeOverride (var_universalMap_10164, temp_16.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 338)) ;
  }
  const GGS_decoratedGuardDeclaration temp_17 = this ;
  const GGS_decoratedGuardDeclaration temp_18 = this ;
  GGS_lstring var_guardUserLLVMName_13612 = function_guardUserLLVMName (var_receiverType_9634.readProperty_llvmBaseTypeName (), temp_17.readProperty_mGuardName (), temp_18.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 340)) ;
  const GGS_decoratedGuardDeclaration temp_19 = this ;
  const GGS_decoratedGuardDeclaration temp_20 = this ;
  GGS_lstring var_guardImplementationLLVMName_13753 = function_guardImplementationLLVMName (var_receiverType_9634.readProperty_llvmBaseTypeName (), temp_19.readProperty_mGuardName (), temp_20.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 345)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GGS_guardUserRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (var_guardUserLLVMName_13612, GGS_bool (false), var_warnIfUnused_9731, var_guardImplementationLLVMName_13753.readProperty_string (), var_formalArguments_10317, var_receiverType_9634, var_convenienceGuardGenerationIR_10368, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 351)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GGS_guardImplementationRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (var_guardImplementationLLVMName_13753, GGS_bool (false), var_warnIfUnused_9731, var_formalArguments_10317, var_receiverType_9634, var_convenienceGuardGenerationIR_10368, var_allocaList_10415, var_instructionGenerationList_10457, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 360)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::method_baseGuardAnalyze (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                          const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                          const GGS_semanticContext /* constinArgument_inContext */,
                                                                          const GGS_mode /* constinArgument_inMode */,
                                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                          GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                          GGS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_standAloneProcedureCallInstructionAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mSandAloneRoutineName ().readProperty_location (), GGS_string ("NOT HANDLED YET"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 398)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST baseGuardAnalyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::method_baseGuardAnalyze (const GGS_omnibusType constinArgument_inSelfType,
                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                const GGS_semanticContext constinArgument_inContext,
                                                                const GGS_mode constinArgument_inMode,
                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                GGS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_allocaList temp_0 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 413)) ;
  GGS_allocaList var_baseGuardAllocaList_16562 = temp_0 ;
  GGS_instructionListIR temp_1 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 414)) ;
  GGS_instructionListIR var_baseGuardInstructionGenerationList_16613 = temp_1 ;
  GGS_objectIR var_currentObject_16770 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_procedureCallInstructionAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("declaration-guard.galgas", 418)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GGS_procedureCallInstructionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mIdentifier ().readProperty_location (), GGS_string ("self is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("declaration-guard.galgas", 419)) ;
          var_currentObject_16770.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_4) {
        var_currentObject_16770 = GGS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 421))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 421)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    const GGS_procedureCallInstructionAST temp_7 = this ;
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, temp_7.readProperty_mIdentifier (), constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObject_16770, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 424)) ;
  }
  const GGS_procedureCallInstructionAST temp_8 = this ;
  GGS_accessInAssignmentListAST var_accessList_17257 = temp_8.readProperty_mAccessList () ;
  GGS_accessInAssignmentAST var_lastAccess_17316 ;
  {
  var_accessList_17257.setter_popLast (var_lastAccess_17316, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_17361 (var_accessList_17257, EnumerationOrder::up) ;
  while (enumerator_17361.hasCurrentObject ()) {
    GGS_omnibusType var_currentType_17394 = extensionGetter_type (var_currentObject_16770, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 436)) ;
    switch (enumerator_17361.current_mAccess (HERE).enumValue ()) {
    case GGS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_17475_propertyName_0 ;
        enumerator_17361.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_17475_propertyName_0) ;
        GGS_propertyGetterMap var_propertyGetterMap_17608 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_17394, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 440)) ;
        GGS_propertyGetterKind var_propertyAccess_17809 ;
        GGS_propertyVisibility joker_17801 ; // Joker input parameter
        var_propertyGetterMap_17608.method_searchKey (extractedValue_17475_propertyName_0, joker_17801, var_propertyAccess_17809, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 442)) ;
        switch (var_propertyAccess_17809.enumValue ()) {
        case GGS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GGS_objectIR extractedValue_17882__0 ;
            var_propertyAccess_17809.getAssociatedValuesFor_constantProperty (extractedValue_17882__0) ;
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_17475_propertyName_0.readProperty_location (), GGS_string ("a constant property not available in this context"), fixItArray9  COMMA_SOURCE_FILE ("declaration-guard.galgas", 445)) ;
            var_currentObject_16770.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GGS_omnibusType extractedValue_18023_propertyType_0 ;
            GGS_uint extractedValue_18042_propertyIndex_1 ;
            var_propertyAccess_17809.getAssociatedValuesFor_storedProperty (extractedValue_18023_propertyType_0, extractedValue_18042_propertyIndex_1) ;
            GGS_string var_property_5F_llvmName_18104 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_18104, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 447)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_16613, var_currentType_17394, extensionGetter_llvmName (var_currentObject_16770, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 450)), var_property_5F_llvmName_18104, extractedValue_18042_propertyIndex_1, extractedValue_17475_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 448)) ;
            }
            var_currentObject_16770 = GGS_objectIR::class_func_reference (extractedValue_18023_propertyType_0, var_property_5F_llvmName_18104  COMMA_SOURCE_FILE ("declaration-guard.galgas", 455)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GGS_unifiedTypeMapEntry extractedValue_18466__0 ;
            GGS_routineLLVMNameDict extractedValue_18466__1 ;
            var_propertyAccess_17809.getAssociatedValuesFor_computedProperty (extractedValue_18466__0, extractedValue_18466__1) ;
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_17475_propertyName_0.readProperty_location (), GGS_string ("a computed property cannot be named in guard"), fixItArray10  COMMA_SOURCE_FILE ("declaration-guard.galgas", 457)) ;
            var_currentObject_16770.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_18595__0 ;
        GGS_location extractedValue_18607_endOfIndex_1 ;
        GGS_bool extractedValue_18618__2 ;
        enumerator_17361.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_18595__0, extractedValue_18607_endOfIndex_1, extractedValue_18618__2) ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (extractedValue_18607_endOfIndex_1, GGS_string ("not handled yet"), fixItArray11  COMMA_SOURCE_FILE ("declaration-guard.galgas", 460)) ;
        var_currentObject_16770.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_17361.gotoNextObject () ;
  }
  switch (var_lastAccess_17316.enumValue ()) {
  case GGS_accessInAssignmentAST::Enumeration::invalid:
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_18766_methodName_0 ;
      var_lastAccess_17316.getAssociatedValuesFor_property (extractedValue_18766_methodName_0) ;
      GGS_omnibusType var_currentType_18788 = extensionGetter_type (var_currentObject_16770, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 466)) ;
      const GGS_procedureCallInstructionAST temp_12 = this ;
      GGS_lstring var_guardMangledName_18831 = extensionGetter_mangledName (temp_12.readProperty_mArguments (), var_currentType_18788.readProperty_omnibusTypeDescriptionName (), extractedValue_18766_methodName_0, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 467)) ;
      GGS_routineTypedSignature var_formalSignature_19025 ;
      GGS_lstring var_guardRoutineImplentationLLVMName_19049 ;
      GGS_bool joker_19017 ; // Joker input parameter
      GGS_lstring joker_19041 ; // Joker input parameter
      constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_18831, joker_19017, var_formalSignature_19025, joker_19041, var_guardRoutineImplentationLLVMName_19049, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 468)) ;
      GGS_procCallEffectiveParameterListIR temp_13 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)) ;
      temp_13.enterElement (GGS_procCallEffectiveParameterListIR_2E_element::init_21__21_ (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("declaration-guard.galgas", 471)), GGS_objectIR::class_func_reference (var_currentType_18788, extensionGetter_llvmName (var_currentObject_16770, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)) ;
      GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_19164 = temp_13 ;
      {
      const GGS_procedureCallInstructionAST temp_14 = this ;
      routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_19025, temp_14.readProperty_mArguments (), extractedValue_18766_methodName_0.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_16562, var_baseGuardInstructionGenerationList_16613, var_effectiveParameterListIR_19164, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 474)) ;
      }
      outArgument_outConvenienceGuardGenerationIR = GGS_guardKindGenerationIR::class_func_convenienceGuard (var_baseGuardAllocaList_16562, var_baseGuardInstructionGenerationList_16613, var_guardRoutineImplentationLLVMName_19049.readProperty_string (), var_effectiveParameterListIR_19164  COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)) ;
    }
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_20206__0 ;
      GGS_location extractedValue_20218_endOfIndex_1 ;
      GGS_bool extractedValue_20229__2 ;
      var_lastAccess_17316.getAssociatedValuesFor_arrayAccess (extractedValue_20206__0, extractedValue_20218_endOfIndex_1, extractedValue_20229__2) ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (extractedValue_20218_endOfIndex_1, GGS_string ("a property access is required here"), fixItArray15  COMMA_SOURCE_FILE ("declaration-guard.galgas", 497)) ;
      outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_guardUserRoutineIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mMangledImplementationGuardName ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_svcDeclarationGeneration (GGS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                               GGS_sectionIRlist & ioArgument_ioSectionList,
                                                               GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_guardUserRoutineIR temp_0 = this ;
  GGS_string var_userMangledName_22048 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 538)) ;
  const GGS_guardUserRoutineIR temp_1 = this ;
  GGS_string var_implementationMangledName_22123 = temp_1.readProperty_mMangledImplementationGuardName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 539)) ;
  const GGS_guardUserRoutineIR temp_2 = this ;
  switch (temp_2.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GGS_guardKindGenerationIR::Enumeration::invalid:
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_convenienceGuard:
    {
      GGS_allocaList extractedValue_22276__0 ;
      GGS_instructionListIR extractedValue_22278__1 ;
      GGS_string extractedValue_22280__2 ;
      GGS_procCallEffectiveParameterListIR extractedValue_22282__3 ;
      temp_2.readProperty_mGuardKindGenerationIR ().getAssociatedValuesFor_convenienceGuard (extractedValue_22276__0, extractedValue_22278__1, extractedValue_22280__2, extractedValue_22282__3) ;
      ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_22048, var_implementationMangledName_22123, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)) ;
    }
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_baseGuard:
    {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_22048, var_implementationMangledName_22123, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                         const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                         GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_guardUserRoutineIR temp_0 = this ;
  const GGS_guardUserRoutineIR temp_1 = this ;
  const GGS_guardUserRoutineIR temp_2 = this ;
  GGS_string var_prototype_22818 = function_llvmFunctionPrototype (GGS_string ("i1"), temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 560)), temp_1.readProperty_mReceiverType (), temp_2.readProperty_mFormalArgumentListForGeneration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 558)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("declare ").add_operation (var_prototype_22818, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardImplementationRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                   const GGS_generationContext constinArgument_inGenerationContext,
                                                                   GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_guardImplementationRoutineIR temp_0 = this ;
  GGS_string var_guardRoutineName_23786 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 584)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define i1 @").add_operation (var_guardRoutineName_23786, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)) ;
  const GGS_guardImplementationRoutineIR temp_1 = this ;
  GGS_string temp_2 ;
  const enumGalgasBool test_3 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("declaration-guard.galgas", 586)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GGS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_3) {
    const GGS_guardImplementationRoutineIR temp_4 = this ;
    temp_2 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)) ;
  }
  GGS_string var_receiverLLVMTypeName_23918 = temp_2 ;
  GGS_bool var_first_24046 = GGS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_23918.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_23918.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)) ;
      var_first_24046 = GGS_bool (false) ;
    }
  }
  const GGS_guardImplementationRoutineIR temp_6 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_24234 (temp_6.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_24234.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_first_24046.boolEnum () ;
      if (kBoolTrue == test_7) {
        var_first_24046 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)) ;
    }
    switch (enumerator_24234.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24234.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (enumerator_24234.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24234.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (function_llvmNameForLocalVariable (enumerator_24234.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24234.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)).add_operation (function_llvmNameForLocalVariable (enumerator_24234.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      }
      break ;
    }
    enumerator_24234.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
  const GGS_guardImplementationRoutineIR temp_8 = this ;
  GGS_allocaList var_allocaList_24884 = temp_8.readProperty_mAllocaList () ;
  const GGS_guardImplementationRoutineIR temp_9 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_24998 (temp_9.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_24998.hasCurrentObject ()) {
    switch (enumerator_24998.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_allocaList_24884.addAssign_operation (function_llvmNameForLocalVariable (enumerator_24998.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)), enumerator_24998.current_mFormalArgumentType (HERE), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_24998.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_24884, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)) ;
  const GGS_guardImplementationRoutineIR temp_10 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_25382 (temp_10.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_25382.hasCurrentObject ()) {
    switch (enumerator_25382.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        GGS_string var_llvmType_25505 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25382.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 628)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_llvmType_25505, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (enumerator_25382.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (var_llvmType_25505, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (function_llvmNameForLocalVariable (enumerator_25382.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_25382.gotoNextObject () ;
  }
  GGS_string var_accepted_5F_llvmName_25800 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)) ;
  GGS_string var_accepted_5F_llvmName_5F_loaded_25883 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)).add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
  const GGS_guardImplementationRoutineIR temp_11 = this ;
  switch (temp_11.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GGS_guardKindGenerationIR::Enumeration::invalid:
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_baseGuard:
    {
      GGS_string var_accepted_5F_label_26082 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 640)).add_operation (GGS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 640)) ;
      GGS_string var_rejected_5F_label_26156 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)).add_operation (GGS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)) ;
      const GGS_guardImplementationRoutineIR temp_12 = this ;
      extensionMethod_instructionListLLVMCode (temp_12.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 642)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_25883, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (GGS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (var_accepted_5F_llvmName_25800, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_25883, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_accepted_5F_label_26082, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_rejected_5F_label_26156, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_label_26082.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret i1 true\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 647)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_rejected_5F_label_26156.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 649)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 650)) ;
    }
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_convenienceGuard:
    {
      GGS_allocaList extractedValue_26821_baseGuardAllocaList_0 ;
      GGS_instructionListIR extractedValue_26841_baseGuardInstructionGenerationList_1 ;
      GGS_string extractedValue_26876_baseGuardMangledName_2 ;
      GGS_procCallEffectiveParameterListIR extractedValue_26897_baseGuardEffectiveParameterList_3 ;
      temp_11.readProperty_mGuardKindGenerationIR ().getAssociatedValuesFor_convenienceGuard (extractedValue_26821_baseGuardAllocaList_0, extractedValue_26841_baseGuardInstructionGenerationList_1, extractedValue_26876_baseGuardMangledName_2, extractedValue_26897_baseGuardEffectiveParameterList_3) ;
      extensionMethod_generateAllocaList (extractedValue_26821_baseGuardAllocaList_0, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 652)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_26841_baseGuardInstructionGenerationList_1, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 653)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_26876_baseGuardMangledName_2.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 655)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_27276 (extractedValue_26897_baseGuardEffectiveParameterList_3, EnumerationOrder::up) ;
      while (enumerator_27276.hasCurrentObject ()) {
        switch (enumerator_27276.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
          break ;
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27276.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)).add_operation (extensionGetter_llvmName (enumerator_27276.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)) ;
          }
          break ;
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27276.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)).add_operation (extensionGetter_llvmName (enumerator_27276.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)) ;
          }
          break ;
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27276.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)).add_operation (extensionGetter_llvmName (enumerator_27276.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)) ;
          }
          break ;
        }
        if (enumerator_27276.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 666)) ;
        }
        enumerator_27276.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 668)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 669)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 670)) ;
      const GGS_guardImplementationRoutineIR temp_13 = this ;
      extensionMethod_instructionListLLVMCode (temp_13.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 671)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret i1 true\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 672)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 673)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 674)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 675)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GGS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 677)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GGS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 678)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardImplementationRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_guardImplementationRoutineIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 687)) ;
  const GGS_guardImplementationRoutineIR temp_1 = this ;
  switch (temp_1.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GGS_guardKindGenerationIR::Enumeration::invalid:
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_baseGuard:
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_convenienceGuard:
    {
      GGS_allocaList extractedValue_28802__0 ;
      GGS_instructionListIR extractedValue_28804_baseGuardInstructionGenerationList_1 ;
      GGS_string extractedValue_28839_baseGuardImplementationMangledName_2 ;
      GGS_procCallEffectiveParameterListIR extractedValue_28874__3 ;
      temp_1.readProperty_mGuardKindGenerationIR ().getAssociatedValuesFor_convenienceGuard (extractedValue_28802__0, extractedValue_28804_baseGuardInstructionGenerationList_1, extractedValue_28839_baseGuardImplementationMangledName_2, extractedValue_28874__3) ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_28839_baseGuardImplementationMangledName_2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 691)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_28804_baseGuardInstructionGenerationList_1, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 692)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_26__3F__21_ (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                const GGS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                                GGS_routineTypedSignature & outArgument_outSignature,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  GGS_routineTypedSignature temp_0 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 167)) ;
  outArgument_outSignature = temp_0 ;
  cEnumerator_routineFormalArgumentListAST enumerator_6131 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_6131.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_typeProxy_6234 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6131.current_mFormalArgumentTypeName (HERE), var_typeProxy_6234, inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 169)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_6131.current_mFormalArgumentPassingMode (HERE), enumerator_6131.current_mSelector (HERE), var_typeProxy_6234, enumerator_6131.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 170)) ;
    enumerator_6131.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature2??!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_32__3F__3F__21_ (const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                                    const GGS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                                    GGS_routineTypedSignature & outArgument_outSignature,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  GGS_routineTypedSignature temp_0 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 180)) ;
  outArgument_outSignature = temp_0 ;
  cEnumerator_routineFormalArgumentListAST enumerator_6756 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_6756.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_typeProxy_6811 = extensionGetter_searchKey (constinArgument_inTypeMap, enumerator_6756.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 182)) ;
    outArgument_outSignature.addAssign_operation (enumerator_6756.current_mFormalArgumentPassingMode (HERE), enumerator_6756.current_mSelector (HERE), var_typeProxy_6811, enumerator_6756.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 183)) ;
    enumerator_6756.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterFormalArguments?context?&&?warningOnUnusedArgs'
//
//--------------------------------------------------------------------------------------------------

void routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (const GGS_semanticContext constinArgument_inContext,
                                                                                 const GGS_routineFormalArgumentListAST constinArgument_inFormalArgumentsAST,
                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                 GGS_routineFormalArgumentListIR & ioArgument_ioFormalArguments,
                                                                                 const GGS_bool constinArgument_inUnusedWarning,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentListAST enumerator_9282 (constinArgument_inFormalArgumentsAST, EnumerationOrder::up) ;
  while (enumerator_9282.hasCurrentObject ()) {
    GGS_omnibusType var_typeProxy_9337 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), enumerator_9282.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_9282.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9337, enumerator_9282.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("formal-arguments.galgas", 242)) ;
    switch (enumerator_9282.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_9282.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9282.current_mFormalArgumentName (HERE), GGS_bool (true), var_typeProxy_9337, enumerator_9282.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 247)) ;
                }
              }
            }
            if (kBoolFalse == test_1) {
              {
              extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9282.current_mFormalArgumentName (HERE), GGS_bool (true), var_typeProxy_9337, enumerator_9282.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 249)) ;
              }
            }
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_9282.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9282.current_mFormalArgumentName (HERE), var_typeProxy_9337, enumerator_9282.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas", 255)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 255)) ;
                }
              }
            }
            if (kBoolFalse == test_3) {
              {
              extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9282.current_mFormalArgumentName (HERE), var_typeProxy_9337, enumerator_9282.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("formal-arguments.galgas", 257)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 257)) ;
              }
            }
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9282.current_mFormalArgumentName (HERE), var_typeProxy_9337, enumerator_9282.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("formal-arguments.galgas", 261)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 261)) ;
        }
      }
      break ;
    }
    enumerator_9282.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@regularRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                            GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_regularRoutineIR temp_0 = this ;
  cEnumerator_instructionListIR enumerator_6084 (temp_0.readProperty_mInstructionGenerationList (), EnumerationOrder::up) ;
  while (enumerator_6084.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_6084.current (HERE).readProperty_mInstructionGeneration ().ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 154)) ;
    enumerator_6084.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@regularRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_regularRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mExportedFunction ().operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 169)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 170)) ;
    }
  }
  const GGS_regularRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)) ;
  const GGS_regularRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
  const GGS_regularRoutineIR temp_4 = this ;
  GGS_string temp_5 ;
  const enumGalgasBool test_6 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 174)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GGS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_6) {
    const GGS_regularRoutineIR temp_7 = this ;
    temp_5 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_7.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 176)) ;
  }
  GGS_string var_receiverLLVMTypeName_6780 = temp_5 ;
  GGS_bool var_first_6906 = GGS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_6780.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_6780.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)) ;
      var_first_6906 = GGS_bool (false) ;
    }
  }
  const GGS_regularRoutineIR temp_9 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_7094 (temp_9.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_7094.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_first_6906.boolEnum () ;
      if (kBoolTrue == test_10) {
        var_first_6906 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_10) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 187)) ;
    }
    switch (enumerator_7094.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7094.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (enumerator_7094.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7094.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_7094.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7094.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (function_llvmNameForLocalVariable (enumerator_7094.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)) ;
      }
      break ;
    }
    enumerator_7094.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    GGS_bool test_12 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 198)) ;
    if (kBoolTrue == test_12.boolEnum ()) {
      const GGS_regularRoutineIR temp_13 = this ;
      test_12 = temp_13.readProperty_mAppendFileAndLineArgumentForPanicLocation () ;
    }
    test_11 = test_12.boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_first_6906.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 199)).boolEnum () ;
        if (kBoolTrue == test_14) {
          ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 200)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (GGS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)) ;
  const GGS_regularRoutineIR temp_15 = this ;
  GGS_allocaList var_allocaList_8011 = temp_15.readProperty_mAllocaList () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GGS_regularRoutineIR temp_17 = this ;
    test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mReturnType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GGS_regularRoutineIR temp_18 = this ;
      var_allocaList_8011.addAssign_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), temp_18.readProperty_mReturnType (), GGS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)) ;
    }
  }
  const GGS_regularRoutineIR temp_19 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_8274 (temp_19.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_8274.hasCurrentObject ()) {
    switch (enumerator_8274.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_allocaList_8011.addAssign_operation (function_llvmNameForLocalVariable (enumerator_8274.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)), enumerator_8274.current_mFormalArgumentType (HERE), GGS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_8274.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_8011, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 218)) ;
  const GGS_regularRoutineIR temp_20 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_8748 (temp_20.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_8748.hasCurrentObject ()) {
    switch (enumerator_8748.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--------- Input argument '").add_operation (enumerator_8748.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)) ;
        GGS_string var_llvmType_8951 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8748.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_llvmType_8951, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (enumerator_8748.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (var_llvmType_8951, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8748.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)) ;
        callExtensionMethod_generateRetain ((cPtr_omnibusType *) enumerator_8748.current_mFormalArgumentType (HERE).ptr (), enumerator_8748.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)) ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          const GGS_regularRoutineIR temp_22 = this ;
          test_21 = GGS_bool (ComparisonKind::equal, temp_22.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 229)))).boolEnum () ;
          if (kBoolTrue == test_21) {
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8748.current_mFormalArgumentType (HERE).ptr (), enumerator_8748.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 230)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          const GGS_regularRoutineIR temp_24 = this ;
          test_23 = GGS_bool (ComparisonKind::equal, temp_24.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 233)))).boolEnum () ;
          if (kBoolTrue == test_23) {
            ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8748.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8748.current_mFormalArgumentType (HERE).ptr (), enumerator_8748.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      break ;
    }
    enumerator_8748.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 241)) ;
  const GGS_regularRoutineIR temp_25 = this ;
  extensionMethod_instructionListLLVMCode (temp_25.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 242)) ;
  const GGS_regularRoutineIR temp_26 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_10054 (temp_26.readProperty_mFormalArgumentListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_10054.hasCurrentObject ()) {
    switch (enumerator_10054.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--------- Release input argument '").add_operation (enumerator_10054.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)) ;
        callExtensionMethod_generateRelease ((cPtr_omnibusType *) enumerator_10054.current_mFormalArgumentType (HERE).ptr (), enumerator_10054.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          const GGS_regularRoutineIR temp_28 = this ;
          test_27 = GGS_bool (ComparisonKind::equal, temp_28.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 251)))).boolEnum () ;
          if (kBoolTrue == test_27) {
            ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--------- Insulate input/output argument '").add_operation (enumerator_10054.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10054.current_mFormalArgumentType (HERE).ptr (), enumerator_10054.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          const GGS_regularRoutineIR temp_30 = this ;
          test_29 = GGS_bool (ComparisonKind::equal, temp_30.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 256)))).boolEnum () ;
          if (kBoolTrue == test_29) {
            ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--------- Insulate output argument '").add_operation (enumerator_10054.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10054.current_mFormalArgumentType (HERE).ptr (), enumerator_10054.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)) ;
          }
        }
      }
      break ;
    }
    enumerator_10054.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)) ;
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    const GGS_regularRoutineIR temp_32 = this ;
    test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mReturnType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 264)))).boolEnum () ;
    if (kBoolTrue == test_31) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 265)) ;
    }
  }
  if (kBoolFalse == test_31) {
    GGS_string var_resultVarLLVMName_11025 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)) ;
    const GGS_regularRoutineIR temp_33 = this ;
    const GGS_regularRoutineIR temp_34 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %result = load ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_33.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_34.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (var_resultVarLLVMName_11025, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
    const GGS_regularRoutineIR temp_35 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_35.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 271)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'checkModeAndReturnsRoutineLLVMName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_checkModeAndReturnsRoutineLLVMName (const GGS_routineLLVMNameDict & constinArgument_inCalledRoutineDictionary,
                                                        const GGS_mode & constinArgument_inCallerRoutineMode,
                                                        const GGS_lstring & constinArgument_inRoutineName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inCalledRoutineDictionary.getter_hasKey (constinArgument_inCallerRoutineMode COMMA_SOURCE_FILE ("logical-modes.galgas", 184)).boolEnum () ;
    if (kBoolTrue == test_0) {
      constinArgument_inCalledRoutineDictionary.method_searchKey (constinArgument_inCallerRoutineMode, result_result, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 185)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_string var_m_8421 = GGS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GGS_string ("' routine cannot be invoked from '"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (extensionGetter_string (constinArgument_inCallerRoutineMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GGS_string ("' mode, but only from:"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)) ;
    cEnumerator_routineLLVMNameDict enumerator_8550 (constinArgument_inCalledRoutineDictionary, EnumerationOrder::up) ;
    while (enumerator_8550.hasCurrentObject ()) {
      var_m_8421.plusAssign_operation(GGS_string ("\n  - '").add_operation (extensionGetter_string (enumerator_8550.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)).add_operation (GGS_string ("' mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 189)) ;
      enumerator_8550.gotoNextObject () ;
    }
    TC_Array <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_m_8421, fixItArray1  COMMA_SOURCE_FILE ("logical-modes.galgas", 191)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_checkModeAndReturnsRoutineLLVMName [4] = {
  & kTypeDescriptor_GALGAS_routineLLVMNameDict,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_routineLLVMNameDict operand0 = GGS_routineLLVMNameDict::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                   inCompiler
                                                                                   COMMA_THERE) ;
  const GGS_mode operand1 = GGS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_checkModeAndReturnsRoutineLLVMName (operand0,
                                                      operand1,
                                                      operand2,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_checkModeAndReturnsRoutineLLVMName ("checkModeAndReturnsRoutineLLVMName",
                                                                                    functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    3,
                                                                                    functionArgs_checkModeAndReturnsRoutineLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicAST temp_0 = this ;
  GGS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GGS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GGS_string ("loop") ;
  }
  const GGS_panicAST temp_3 = this ;
  const GGS_panicAST temp_4 = this ;
  GGS_lstring var_nodeName_2468 = GGS_lstring::init_21__21_ (GGS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)), temp_4.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_panicAST temp_5 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2468, temp_5, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 63)) ;
  }
  const GGS_panicAST temp_6 = this ;
  GGS_lstring var_configNode_2660 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 64)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2468, var_configNode_2660 COMMA_SOURCE_FILE ("panic.galgas", 65)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@panicAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_panicAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_panicAST temp_0 = this ;
  GGS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GGS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GGS_string ("loop") ;
  }
  const GGS_panicAST temp_3 = this ;
  result_outRepresentation = GGS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@panicAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_panicAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_panicAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPriority ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForLocationFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_panicRoutineNameForLocationFile (const GGS_location & constinArgument_inLocation,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLocation.getter_isNowhere (SOURCE_FILE ("panic.galgas", 85)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_string ("raise.panic.nofile") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_string ("raise.panic.file.").add_operation (constinArgument_inLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)).getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 88)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForLocationFile [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicRoutineNameForLocationFile (Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GGS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_location operand0 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_panicRoutineNameForLocationFile (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForLocationFile ("panicRoutineNameForLocationFile",
                                                                                 functionWithGenericHeader_panicRoutineNameForLocationFile,
                                                                                 & kTypeDescriptor_GALGAS_string,
                                                                                 1,
                                                                                 functionArgs_panicRoutineNameForLocationFile) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForFilePath'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_panicRoutineNameForFilePath (const GGS_string & constinArgument_inFilePath,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFilePath.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_string ("raise.panic.nofile") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_string ("raise.panic.file.").add_operation (constinArgument_inFilePath.getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 98)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 98)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForFilePath [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicRoutineNameForFilePath (Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_panicRoutineNameForFilePath (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForFilePath ("panicRoutineNameForFilePath",
                                                                             functionWithGenericHeader_panicRoutineNameForFilePath,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_panicRoutineNameForFilePath) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                           GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                           GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                           GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                           GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                           GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                           GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                           GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_panicAST temp_1 = this ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GGS_panicAST temp_2 = this ;
      const GGS_panicAST temp_3 = this ;
      ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GGS_lstring::init_21__21_ (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 126)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 126)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GGS_panicAST temp_4 = this ;
    const GGS_panicAST temp_5 = this ;
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GGS_lstring::init_21__21_ (temp_4.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 128)), temp_5.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 128)) ;
    }
  }
  const GGS_panicAST temp_6 = this ;
  const GGS_panicAST temp_7 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GGS_decoratedPanicRoutine::init_21__21_ (temp_6.readProperty_mIsSetup (), temp_7.readProperty_mPriority (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 131)) ;
  GGS_routineFormalArgumentListAST temp_8 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 136)) ;
  GGS_routineFormalArgumentListAST var_arguments_6240 = temp_8 ;
  var_arguments_6240.addAssign_operation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 138)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 139)), ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 140)), GGS_string ("LINE").getter_nowhere (SOURCE_FILE ("panic.galgas", 141))  COMMA_SOURCE_FILE ("panic.galgas", 137)) ;
  var_arguments_6240.addAssign_operation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 143)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 144)), ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 145)), GGS_string ("CODE").getter_nowhere (SOURCE_FILE ("panic.galgas", 146))  COMMA_SOURCE_FILE ("panic.galgas", 142)) ;
  var_arguments_6240.addAssign_operation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 148)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 149)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 150)).getter_nowhere (SOURCE_FILE ("panic.galgas", 150)), GGS_string ("FILE").getter_nowhere (SOURCE_FILE ("panic.galgas", 151))  COMMA_SOURCE_FILE ("panic.galgas", 147)) ;
  const GGS_panicAST temp_9 = this ;
  GGS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GGS_string ("setup") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GGS_string ("loop") ;
  }
  const GGS_panicAST temp_12 = this ;
  const GGS_panicAST temp_13 = this ;
  GGS_lstring var_routineMangledName_6616 = GGS_lstring::init_21__21_ (GGS_string ("panic.").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (temp_12.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)), temp_13.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_panicAST temp_14 = this ;
  const GGS_panicAST temp_15 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 157)), GGS_mode::class_func_panicMode (SOURCE_FILE ("panic.galgas", 158)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("panic.galgas", 160)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_routineMangledName_6616, var_arguments_6240, GGS_bool (false), temp_14.readProperty_mPanicInstructionList (), temp_15.readProperty_mEndOfPanicInstructions (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 169))  COMMA_SOURCE_FILE ("panic.galgas", 156)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPanicRoutines?allSourceFilePaths&intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPanicRoutines_3F_allSourceFilePaths_26_intermediateCode (const GGS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                                                            GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GGS_universalModePanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused (GGS_string ("section.user.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 181)), GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 180)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GGS_sectionModePanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (GGS_string ("section.implementation.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 187)), GGS_bool (false), GGS_bool (false), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicSetupListIR (), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicLoopListIR (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 186)) ;
  cEnumerator_stringset enumerator_8310 (constinArgument_inSourceFileAbsolutePathSet, EnumerationOrder::up) ;
  while (enumerator_8310.hasCurrentObject ()) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GGS_fileSpecificPanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (function_panicRoutineNameForFilePath (enumerator_8310.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 196)).getter_nowhere (SOURCE_FILE ("panic.galgas", 196)), GGS_bool (false), GGS_bool (false), enumerator_8310.current_key (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 195)) ;
    enumerator_8310.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GGS_fileSpecificPanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (function_panicRoutineNameForFilePath (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 203)).getter_nowhere (SOURCE_FILE ("panic.galgas", 203)), GGS_bool (false), GGS_bool (false), GGS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 202)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'panicModeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_panicModeName (Compiler *
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("panic") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GGS_string gOnceFunctionResult_panicModeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_panicModeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicModeName (nullptr,
                                                         releaseOnceFunctionResult_panicModeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicModeName (Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GGS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedPanicRoutine semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedPanicRoutine::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_decoratedPanicRoutine temp_1 = this ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GGS_decoratedPanicRoutine temp_2 = this ;
      const GGS_decoratedPanicRoutine temp_3 = this ;
      ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GGS_lstring::init_21__21_ (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 234)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 234)) ;
      }
      const GGS_decoratedPanicRoutine temp_4 = this ;
      ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupListIR.addAssign_operation (temp_4.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 235)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GGS_decoratedPanicRoutine temp_5 = this ;
    const GGS_decoratedPanicRoutine temp_6 = this ;
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GGS_lstring::init_21__21_ (temp_5.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 237)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 237)) ;
    }
    const GGS_decoratedPanicRoutine temp_7 = this ;
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopListIR.addAssign_operation (temp_7.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 238)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePanicCode&?generationContext&generationAdds'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePanicCode_26__3F_generationContext_26_generationAdds (GGS_string & ioArgument_ioLLVMcode,
                                                                           const GGS_generationContext constinArgument_inGenerationContext,
                                                                           GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_emptyStringIndex_11024 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, GGS_string::makeEmptyString (), var_emptyStringIndex_11024, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 260)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GGS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GGS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_11024, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)).add_operation (GGS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 270)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fileSpecificPanicRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                 const GGS_generationContext constinArgument_inGenerationContext,
                                                                 GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arguments_12404 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 288)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)) ;
  const GGS_fileSpecificPanicRoutineIR temp_0 = this ;
  GGS_string var_fileBaseName_12601 = temp_0.readProperty_inFilePath ().getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 292)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 292)) ;
  GGS_uint var_staticStringIndex_12775 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, var_fileBaseName_12601, var_staticStringIndex_12775, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 294)) ;
  }
  const GGS_fileSpecificPanicRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (temp_1.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 298)) ;
  const GGS_fileSpecificPanicRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("panic.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GGS_string (" %in.CODE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %in.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_staticStringIndex_12775, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (var_arguments_12404, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 305)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fileSpecificPanicRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314))  COMMA_SOURCE_FILE ("panic.galgas", 314)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext constinArgument_inGenerationContext,
                                                                  GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arguments_14400 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 331)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GGS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("declare void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_arguments_14400, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)).add_operation (GGS_string ("noreturn\n\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 339)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_svcDeclarationGeneration (GGS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                                        GGS_sectionIRlist & ioArgument_ioSectionList,
                                                                        GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioSectionList.addAssign_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), GGS_bool (true)  COMMA_SOURCE_FILE ("panic.galgas", 349)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361))  COMMA_SOURCE_FILE ("panic.galgas", 361)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sectionModePanicRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                const GGS_generationContext constinArgument_inGenerationContext,
                                                                GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GGS_string ("Raise Panic internal (section mode)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 380)) ;
  GGS_string var_arguments_16474 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 382)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_arguments_16474.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 388)) ;
  const GGS_sectionModePanicRoutineIR temp_0 = this ;
  cEnumerator_panicSortedListIR enumerator_16840 (temp_0.readProperty_mPanicSetupListIR (), EnumerationOrder::up) ;
  while (enumerator_16840.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @panic.setup.").add_operation (enumerator_16840.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (var_arguments_16474, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 391)) ;
    enumerator_16840.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %panic.loop\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 394)) ;
  const GGS_sectionModePanicRoutineIR temp_1 = this ;
  cEnumerator_panicSortedListIR enumerator_17045 (temp_1.readProperty_mPanicLoopListIR (), EnumerationOrder::up) ;
  while (enumerator_17045.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @panic.loop.").add_operation (enumerator_17045.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (var_arguments_16474, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 396)) ;
    enumerator_17045.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 399)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sectionModePanicRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                     GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sectionModePanicRoutineIR temp_0 = this ;
  cEnumerator_panicSortedListIR enumerator_17514 (temp_0.readProperty_mPanicSetupListIR (), EnumerationOrder::up) ;
  while (enumerator_17514.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.addAssign_operation (GGS_string ("panic.setup.").add_operation (enumerator_17514.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 409))  COMMA_SOURCE_FILE ("panic.galgas", 409)) ;
    enumerator_17514.gotoNextObject () ;
  }
  const GGS_sectionModePanicRoutineIR temp_1 = this ;
  cEnumerator_panicSortedListIR enumerator_17620 (temp_1.readProperty_mPanicLoopListIR (), EnumerationOrder::up) ;
  while (enumerator_17620.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.addAssign_operation (GGS_string ("panic.loop.").add_operation (enumerator_17620.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 412))  COMMA_SOURCE_FILE ("panic.galgas", 412)) ;
    enumerator_17620.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'panicRoutineName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_panicRoutineName (Compiler *
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("handle.panic") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicRoutineName = false ;
static GGS_string gOnceFunctionResult_panicRoutineName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_panicRoutineName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicRoutineName) {
    gOnceFunctionResult_panicRoutineName = onceFunction_panicRoutineName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicRoutineName = true ;
  }
  return gOnceFunctionResult_panicRoutineName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicRoutineName (void) {
  gOnceFunctionResult_panicRoutineName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicRoutineName (nullptr,
                                                            releaseOnceFunctionResult_panicRoutineName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicRoutineName (Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicRoutineName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineName ("panicRoutineName",
                                                                  functionWithGenericHeader_panicRoutineName,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  0,
                                                                  functionArgs_panicRoutineName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForAssertViolation'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForAssertViolation (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForAssertViolation = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForAssertViolation ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForAssertViolation (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForAssertViolation) {
    gOnceFunctionResult_panicCodeForAssertViolation = onceFunction_panicCodeForAssertViolation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForAssertViolation = true ;
  }
  return gOnceFunctionResult_panicCodeForAssertViolation ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForAssertViolation (void) {
  gOnceFunctionResult_panicCodeForAssertViolation.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForAssertViolation (nullptr,
                                                                       releaseOnceFunctionResult_panicCodeForAssertViolation) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForAssertViolation [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForAssertViolation (Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForAssertViolation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForAssertViolation ("panicCodeForAssertViolation",
                                                                             functionWithGenericHeader_panicCodeForAssertViolation,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForAssertViolation) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedAdditionOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GGS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedAdditionOverflow (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedAdditionOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForSignedAdditionOverflow = onceFunction_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedAdditionOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedAdditionOverflow (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedAdditionOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedAdditionOverflow (Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedAdditionOverflow ("panicCodeForSignedAdditionOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedAdditionOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedSubtractOverflow (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedSubtractOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow = onceFunction_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedSubtractOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedSubtractOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow (Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GGS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedSubtractOverflow ("panicCodeForUnsignedSubtractOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedSubtractOverflow (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedSubtractOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForSignedSubtractOverflow = onceFunction_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedSubtractOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedSubtractOverflow (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedSubtractOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedSubtractOverflow (Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedSubtractOverflow ("panicCodeForSignedSubtractOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedSubtractOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedMultiplicationOverflow (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow = onceFunction_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedMultiplicationOverflow (nullptr,
                                                                                      releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedMultiplicationOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow (Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GGS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedMultiplicationOverflow ("panicCodeForUnsignedMultiplicationOverflow",
                                                                                            functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow,
                                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                                            0,
                                                                                            functionArgs_panicCodeForUnsignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedMultiplicationOverflow (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedMultiplicationOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow = onceFunction_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedMultiplicationOverflow (nullptr,
                                                                                    releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedMultiplicationOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow (Compiler * inCompiler,
                                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                                      const GGS_location & /* inErrorLocation */
                                                                                      COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedMultiplicationOverflow ("panicCodeForSignedMultiplicationOverflow",
                                                                                          functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow,
                                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                                          0,
                                                                                          functionArgs_panicCodeForSignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedDivisionByZero (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedDivisionByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForUnsignedDivisionByZero = onceFunction_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedDivisionByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedDivisionByZero (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedDivisionByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedDivisionByZero (Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedDivisionByZero ("panicCodeForUnsignedDivisionByZero",
                                                                                    functionWithGenericHeader_panicCodeForUnsignedDivisionByZero,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForUnsignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedDivisionByZero (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 23)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedDivisionByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedDivisionByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForSignedDivisionByZero = onceFunction_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedDivisionByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForSignedDivisionByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedDivisionByZero (nullptr,
                                                                            releaseOnceFunctionResult_panicCodeForSignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedDivisionByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedDivisionByZero (Compiler * inCompiler,
                                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedDivisionByZero ("panicCodeForSignedDivisionByZero",
                                                                                  functionWithGenericHeader_panicCodeForSignedDivisionByZero,
                                                                                  & kTypeDescriptor_GALGAS_bigint,
                                                                                  0,
                                                                                  functionArgs_panicCodeForSignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedRemainderByZero (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 25)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedRemainderByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForUnsignedRemainderByZero = onceFunction_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedRemainderByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedRemainderByZero (nullptr,
                                                                               releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedRemainderByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedRemainderByZero (Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedRemainderByZero ("panicCodeForUnsignedRemainderByZero",
                                                                                     functionWithGenericHeader_panicCodeForUnsignedRemainderByZero,
                                                                                     & kTypeDescriptor_GALGAS_bigint,
                                                                                     0,
                                                                                     functionArgs_panicCodeForUnsignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedRemainderByZero (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 27)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedRemainderByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedRemainderByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForSignedRemainderByZero = onceFunction_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedRemainderByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForSignedRemainderByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedRemainderByZero (nullptr,
                                                                             releaseOnceFunctionResult_panicCodeForSignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedRemainderByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedRemainderByZero (Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedRemainderByZero ("panicCodeForSignedRemainderByZero",
                                                                                   functionWithGenericHeader_panicCodeForSignedRemainderByZero,
                                                                                   & kTypeDescriptor_GALGAS_bigint,
                                                                                   0,
                                                                                   functionArgs_panicCodeForSignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForConvertOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForConvertOverflow (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 31)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForConvertOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForConvertOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForConvertOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForConvertOverflow) {
    gOnceFunctionResult_panicCodeForConvertOverflow = onceFunction_panicCodeForConvertOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForConvertOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForConvertOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForConvertOverflow (void) {
  gOnceFunctionResult_panicCodeForConvertOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForConvertOverflow (nullptr,
                                                                       releaseOnceFunctionResult_panicCodeForConvertOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForConvertOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForConvertOverflow (Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForConvertOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForConvertOverflow ("panicCodeForConvertOverflow",
                                                                             functionWithGenericHeader_panicCodeForConvertOverflow,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForConvertOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForNegativeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForNegativeArrayIndex (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 35)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForNegativeArrayIndex ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForNegativeArrayIndex (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex) {
    gOnceFunctionResult_panicCodeForNegativeArrayIndex = onceFunction_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForNegativeArrayIndex ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForNegativeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForNegativeArrayIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForNegativeArrayIndex (nullptr,
                                                                          releaseOnceFunctionResult_panicCodeForNegativeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForNegativeArrayIndex [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForNegativeArrayIndex (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForNegativeArrayIndex ("panicCodeForNegativeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForNegativeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForNegativeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForTooLargeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForTooLargeArrayIndex (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForTooLargeArrayIndex (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex) {
    gOnceFunctionResult_panicCodeForTooLargeArrayIndex = onceFunction_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForTooLargeArrayIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForTooLargeArrayIndex (nullptr,
                                                                          releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForTooLargeArrayIndex [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForTooLargeArrayIndex (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForTooLargeArrayIndex ("panicCodeForTooLargeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForTooLargeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForTooLargeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForClosedSync'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForClosedSync (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 41)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForClosedSync = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForClosedSync ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForClosedSync (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForClosedSync) {
    gOnceFunctionResult_panicCodeForClosedSync = onceFunction_panicCodeForClosedSync (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForClosedSync = true ;
  }
  return gOnceFunctionResult_panicCodeForClosedSync ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForClosedSync (void) {
  gOnceFunctionResult_panicCodeForClosedSync.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForClosedSync (nullptr,
                                                                  releaseOnceFunctionResult_panicCodeForClosedSync) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForClosedSync [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForClosedSync (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_panicCodeForClosedSync (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForClosedSync ("panicCodeForClosedSync",
                                                                        functionWithGenericHeader_panicCodeForClosedSync,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_panicCodeForClosedSync) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeConvertToBooleanAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeConvertToBooleanAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_compileTimeConvertToBooleanAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmConvertToBooleanAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmConvertToBooleanAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmConvertToBooleanAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeConvertToBooleanAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeConvertToBooleanAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_compileTimeConvertToBooleanAST temp_0 = this ;
  const GGS_compileTimeConvertToBooleanAST temp_1 = this ;
  const GGS_compileTimeConvertToBooleanAST temp_2 = this ;
  GGS_lstring var_nodeName_3437 = GGS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3437, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 88)) ;
  }
  {
  const GGS_compileTimeConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3437, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 89)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeConvertToBooleanAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeConvertToBooleanAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_compileTimeConvertToBooleanAST temp_0 = this ;
  const GGS_compileTimeConvertToBooleanAST temp_1 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 95)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 95)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmConvertToBooleanAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmConvertToBooleanAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmConvertToBooleanAST temp_0 = this ;
  const GGS_llvmConvertToBooleanAST temp_1 = this ;
  const GGS_llvmConvertToBooleanAST temp_2 = this ;
  GGS_lstring var_nodeName_4185 = GGS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4185, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 104)) ;
  }
  {
  const GGS_llvmConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4185, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 105)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmConvertToBooleanAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmConvertToBooleanAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmConvertToBooleanAST temp_0 = this ;
  const GGS_llvmConvertToBooleanAST temp_1 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 111)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 111)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeConvertToBooleanAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeConvertToBooleanAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                 GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                 GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                 GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_compileTimeConvertToBooleanAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mConverterName ().readProperty_string ().objectCompare (GGS_string ("convertToBoolean"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_compileTimeConvertToBooleanAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GGS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 129)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_5868 ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_5868, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 132)) ;
  }
  GGS_omnibusType var_receiverType_5893 = extensionGetter_type (var_receiverTypeProxy_5868, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 133)) ;
  const GGS_compileTimeConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_receiverType_5893.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 134)) ;
  GGS_ctCheckMap temp_6 = GGS_ctCheckMap::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 136)) ;
  GGS_ctCheckMap var_ctCheckMap_6062 = temp_6 ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_7 = this ;
  var_ctCheckMap_6062.setter_insertKey (temp_7.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 137)) ;
  }
  const GGS_compileTimeConvertToBooleanAST temp_8 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_8.readProperty_mExpression ().ptr (), var_ctCheckMap_6062, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 138)) ;
  const GGS_compileTimeConvertToBooleanAST temp_9 = this ;
  GGS_lstring var_key_6227 = GGS_lstring::init_21__21_ (var_receiverType_5893.readProperty_omnibusTypeDescriptionName (), temp_9.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_compileTimeConvertToBooleanAST temp_10 = this ;
  const GGS_compileTimeConvertToBooleanAST temp_11 = this ;
  GGS_compileTimeImplicitConverterToBoolean var_converter_6329 = GGS_compileTimeImplicitConverterToBoolean::init_21__21_ (temp_10.readProperty_mReceiverName (), temp_11.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_6227, var_converter_6329, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 142)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmConvertToBooleanAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmConvertToBooleanAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                          GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                          GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                          GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_llvmConvertToBooleanAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mConverterName ().readProperty_string ().objectCompare (GGS_string ("convertToBoolean"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_llvmConvertToBooleanAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GGS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 158)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_7429 ;
  {
  const GGS_llvmConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_7429, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 161)) ;
  }
  GGS_omnibusType var_receiverType_7454 = extensionGetter_type (var_receiverTypeProxy_7429, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 162)) ;
  const GGS_llvmConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_receiverType_7454.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 163)) ;
  const GGS_llvmConvertToBooleanAST temp_6 = this ;
  GGS_lstring var_key_7611 = GGS_lstring::init_21__21_ (var_receiverType_7454.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_llvmConvertToBooleanAST temp_7 = this ;
  const GGS_llvmConvertToBooleanAST temp_8 = this ;
  GGS_llvmImplicitConverterToBoolean var_converter_7713 = GGS_llvmImplicitConverterToBoolean::init_21__21__21_ (temp_7.readProperty_mReceiverName (), var_receiverType_7454, temp_8.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_7611, var_converter_7713, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 167)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeImplicitConverterToBoolean generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                                      const GGS_location /* constinArgument_inErrorLocation */,
                                                                                      GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                      GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                      GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                      GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_10512 ;
  GGS_omnibusType joker_10496_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_10496_1, var_receiverValue_10512, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 228)) ;
  GGS_ctMap temp_0 = GGS_ctMap::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 229)) ;
  GGS_ctMap var_varMap_10540 = temp_0 ;
  {
  const GGS_compileTimeImplicitConverterToBoolean temp_1 = this ;
  var_varMap_10540.setter_insertKey (temp_1.readProperty_mReceiverName (), var_receiverValue_10512, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 230)) ;
  }
  GGS_bigint var_result_10681 ;
  const GGS_compileTimeImplicitConverterToBoolean temp_2 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mExpression ().ptr (), var_varMap_10540, var_result_10681, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 231)) ;
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_compileTime (GGS_bool (ComparisonKind::notEqual, var_result_10681.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 232))))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 232)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmImplicitConverterToBoolean generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                               const GGS_location /* constinArgument_inErrorLocation */,
                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                                               GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_llvmImplicitConverterToBoolean temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("convert-to-boolean.galgas", 253)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_assignmentGenerationVarMap temp_2 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 256)) ;
    GGS_assignmentGenerationVarMap var_varMap_11671 = temp_2 ;
    {
    const GGS_llvmImplicitConverterToBoolean temp_3 = this ;
    var_varMap_11671.setter_insertKey (temp_3.readProperty_mReceiverName (), extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)) ;
    }
    GGS_string var_resultLLVMName_11767 = GGS_string ("%temp").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("convert-to-boolean.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 258)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 259)) ;
    {
    var_varMap_11671.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("convert-to-boolean.galgas", 260)), var_resultLLVMName_11767, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 260)) ;
    }
    GGS_assignmentGenerationVarMap temp_4 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 262)) ;
    GGS_assignmentGenerationVarMap var_typeMap_11963 = temp_4 ;
    {
    const GGS_llvmImplicitConverterToBoolean temp_5 = this ;
    const GGS_llvmImplicitConverterToBoolean temp_6 = this ;
    var_typeMap_11963.setter_insertKey (temp_5.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_6.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)) ;
    }
    GGS_stringlist temp_7 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 265)) ;
    GGS_stringlist var_generatedInstructions_12081 = temp_7 ;
    const GGS_llvmImplicitConverterToBoolean temp_8 = this ;
    extensionMethod_generateIRCode (temp_8.readProperty_mInstructionList (), var_varMap_11671, var_typeMap_11963, var_generatedInstructions_12081, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 266)) ;
    cEnumerator_stringlist enumerator_12249 (var_generatedInstructions_12081, EnumerationOrder::up) ;
    while (enumerator_12249.hasCurrentObject ()) {
      {
      GGS_stringset temp_9 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 268)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_12249.current_mValue (HERE), temp_9, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 268)) ;
      }
      enumerator_12249.gotoNextObject () ;
    }
    outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (var_resultLLVMName_11767  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 270)) ;
  }
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
  GGS_omnibusType var_annotationType_695 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inOptionalTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_annotationType_695 = function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 16)) ;
    }
  }
  if (kBoolFalse == test_0) {
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inOptionalTypeName, var_annotationType_695, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 18)) ;
  }
  GGS_semanticTemporariesStruct var_unusedSemanticTemporariesStruct_918 = GGS_semanticTemporariesStruct::init (inCompiler COMMA_HERE) ;
  GGS_allocaList temp_1 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 22)) ;
  GGS_allocaList var_unusedAllocaList_976 = temp_1 ;
  GGS_instructionListIR temp_2 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 23)) ;
  GGS_instructionListIR var_unusedInstructionListIR_1024 = temp_2 ;
  GGS_objectIR var_expressionIR_1460 ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) constinArgument_inExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 25)), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_annotationType_695, ioArgument_ioContext, GGS_mode::class_func_bootMode (SOURCE_FILE ("compute-static-expression.galgas", 29)), var_unusedSemanticTemporariesStruct_918, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, var_unusedAllocaList_976, var_unusedInstructionListIR_1024, var_expressionIR_1460, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 24)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = extensionGetter_isStatic (var_expressionIR_1460, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 37)).operator_not (SOURCE_FILE ("compute-static-expression.galgas", 37)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("compute-static-expression.galgas", 38)) ;
      outArgument_outStaticExpressionIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outStaticExpressionIR = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionIR_1460, var_annotationType_695, constinArgument_inErrorLocation, GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 41)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                             GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_convertExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_convertExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-convert.galgas", 52)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_convertExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_convertExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-convert.galgas", 63)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_objectIR var_expressionResult_4176 ;
  const GGS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4176, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4176, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 100)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_convertExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GGS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)).add_operation (GGS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
    }
  }
  const GGS_convertExpressionAST temp_4 = this ;
  GGS_omnibusType temp_5 ;
  const enumGalgasBool test_6 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_6) {
    const GGS_convertExpressionAST temp_7 = this ;
    temp_5 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_7.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)) ;
  }
  GGS_omnibusType var_resultType_4491 = temp_5 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_resultType_4491.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 114)).operator_not (SOURCE_FILE ("expression-convert.galgas", 114)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GGS_convertExpressionAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-convert.galgas", 115)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = extensionGetter_type (var_expressionResult_4176, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 116)).operator_not (SOURCE_FILE ("expression-convert.galgas", 116)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GGS_convertExpressionAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray13  COMMA_SOURCE_FILE ("expression-convert.galgas", 117)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_11) {
      GGS_bigint var_minSource_4977 ;
      GGS_bigint var_maxSource_4996 ;
      GGS_bool joker_5006_2 ; // Joker input parameter
      GGS_uint joker_5006_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4176, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)).readProperty_kind ().method_extractInteger (var_minSource_4977, var_maxSource_4996, joker_5006_2, joker_5006_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)) ;
      GGS_bigint var_minTarget_5056 ;
      GGS_bigint var_maxTarget_5075 ;
      GGS_bool joker_5085_2 ; // Joker input parameter
      GGS_uint joker_5085_1 ; // Joker input parameter
      var_resultType_4491.readProperty_kind ().method_extractInteger (var_minTarget_5056, var_maxTarget_5075, joker_5085_2, joker_5085_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      GGS_bool test_14 = GGS_bool (ComparisonKind::lowerOrEqual, var_minTarget_5056.objectCompare (var_minSource_4977)) ;
      if (kBoolTrue == test_14.boolEnum ()) {
        test_14 = GGS_bool (ComparisonKind::greaterOrEqual, var_maxTarget_5075.objectCompare (var_maxSource_4996)) ;
      }
      GGS_bool var_alwaysPossible_5098 = test_14 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_alwaysPossible_5098.boolEnum () ;
        if (kBoolTrue == test_15) {
          const GGS_convertExpressionAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless explicit conversion"), fixItArray17  COMMA_SOURCE_FILE ("expression-convert.galgas", 123)) ;
        }
      }
      {
      routine_getNewTempValue_3F__26__21_ (var_resultType_4491, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 125)) ;
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_18) {
          ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_truncateInstructionIR::init_21__21_ (outArgument_outResult, var_expressionResult_4176, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 127)) ;
        }
      }
      if (kBoolFalse == test_18) {
        const GGS_convertExpressionAST temp_19 = this ;
        ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_convertInstructionIR::init_21__21__21_ (outArgument_outResult, var_expressionResult_4176, temp_19.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 132)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_convertInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_convertInstructionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 159))  COMMA_SOURCE_FILE ("expression-convert.galgas", 159)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_convertInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                            const GGS_generationContext constinArgument_inGenerationContext,
                                                            GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_convertInstructionIR temp_0 = this ;
  GGS_string var_lbl_6882 = temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).getter_string (SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GGS_string var_convertMinOkLabel_6937 = GGS_string ("min.").add_operation (var_lbl_6882, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GGS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GGS_string var_convertMaxOkLabel_6984 = GGS_string ("max.").add_operation (var_lbl_6882, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GGS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GGS_string var_convertFailLabel_7031 = GGS_string ("fail.").add_operation (var_lbl_6882, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GGS_string var_compareMinVar_7071 = GGS_string ("cmp.").add_operation (var_lbl_6882, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GGS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  GGS_string var_compareMaxVar_7119 = GGS_string ("cmp.").add_operation (var_lbl_6882, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GGS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  GGS_bigint var_minTarget_7213 ;
  GGS_bigint var_maxTarget_7232 ;
  const GGS_convertInstructionIR temp_1 = this ;
  GGS_bool joker_7242_2 ; // Joker input parameter
  GGS_uint joker_7242_1 ; // Joker input parameter
  extensionGetter_type (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).readProperty_kind ().method_extractInteger (var_minTarget_7213, var_maxTarget_7232, joker_7242_2, joker_7242_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  GGS_bigint var_minSource_7300 ;
  GGS_bool var_operandIsUnsigned_7331 ;
  const GGS_convertInstructionIR temp_2 = this ;
  GGS_bigint joker_7310 ; // Joker input parameter
  GGS_uint joker_7349_1 ; // Joker input parameter
  extensionGetter_type (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).readProperty_kind ().method_extractInteger (var_minSource_7300, joker_7310, var_operandIsUnsigned_7331, joker_7349_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  const GGS_convertInstructionIR temp_3 = this ;
  GGS_string var_operandType_7360 = extensionGetter_llvmTypeName (temp_3.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_minTarget_7213.objectCompare (var_minSource_7300)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_compareMinVar_7071, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
      GGS_string temp_5 ;
      const enumGalgasBool test_6 = var_operandIsUnsigned_7331.boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GGS_string ("uge") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GGS_string ("sge") ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(temp_5, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
      const GGS_convertInstructionIR temp_7 = this ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ").add_operation (var_operandType_7360, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_minTarget_7213.getter_string (SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %").add_operation (var_compareMinVar_7071, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertMinOkLabel_6937, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertFailLabel_7031, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_6937.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %").add_operation (var_compareMaxVar_7119, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  GGS_string temp_8 ;
  const enumGalgasBool test_9 = var_operandIsUnsigned_7331.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GGS_string ("ule") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GGS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_8, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  const GGS_convertInstructionIR temp_10 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" ").add_operation (var_operandType_7360, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_maxTarget_7232.getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  br i1 %").add_operation (var_compareMaxVar_7119, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertMaxOkLabel_6984, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertFailLabel_7031, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7031.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  const GGS_convertInstructionIR temp_11 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_11.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).getter_assemblerRepresentation (SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  const GGS_convertInstructionIR temp_12 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (temp_12.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  const GGS_convertInstructionIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_string (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GGS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (temp_13.readProperty_mLocation ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_6984.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  const GGS_convertInstructionIR temp_14 = this ;
  const GGS_convertInstructionIR temp_15 = this ;
  const GGS_convertInstructionIR temp_16 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_14.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_operandType_7360, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (temp_15.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmTypeName (temp_16.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                            GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_extendExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_extendExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas", 52)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_extendExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_extendExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas", 63)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_objectIR var_expressionResult_4051 ;
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4051, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 85)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4051, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
  }
  const GGS_extendExpressionAST temp_1 = this ;
  GGS_omnibusType temp_2 ;
  const enumGalgasBool test_3 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_3) {
    const GGS_extendExpressionAST temp_4 = this ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
  }
  GGS_omnibusType var_resultType_4215 = temp_2 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_resultType_4215.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 108)).operator_not (SOURCE_FILE ("expression-extend.galgas", 108)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GGS_extendExpressionAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 109)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_4051, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 110)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 110)).operator_not (SOURCE_FILE ("expression-extend.galgas", 110)).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GGS_extendExpressionAST temp_9 = this ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-extend.galgas", 111)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_8) {
      GGS_bool var_sourceIsUnsigned_4710 ;
      GGS_uint var_sourceSize_4741 ;
      GGS_bigint joker_4692_2 ; // Joker input parameter
      GGS_bigint joker_4692_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4051, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)).readProperty_kind ().method_extractInteger (joker_4692_2, joker_4692_1, var_sourceIsUnsigned_4710, var_sourceSize_4741, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)) ;
      GGS_bool var_targetIsUnsigned_4807 ;
      GGS_uint var_targetSize_4838 ;
      GGS_bigint joker_4789_2 ; // Joker input parameter
      GGS_bigint joker_4789_1 ; // Joker input parameter
      var_resultType_4215.readProperty_kind ().method_extractInteger (joker_4789_2, joker_4789_1, var_targetIsUnsigned_4807, var_targetSize_4838, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        GGS_bool test_12 = var_sourceIsUnsigned_4710 ;
        if (kBoolTrue == test_12.boolEnum ()) {
          test_12 = var_targetIsUnsigned_4807 ;
        }
        test_11 = test_12.boolEnum () ;
        if (kBoolTrue == test_11) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = GGS_bool (ComparisonKind::greaterThan, var_sourceSize_4741.objectCompare (var_targetSize_4838)).boolEnum () ;
            if (kBoolTrue == test_13) {
              const GGS_extendExpressionAST temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray15  COMMA_SOURCE_FILE ("expression-extend.galgas", 117)) ;
            }
          }
          if (kBoolFalse == test_13) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GGS_bool (ComparisonKind::equal, var_sourceSize_4741.objectCompare (var_targetSize_4838)).boolEnum () ;
              if (kBoolTrue == test_16) {
                const GGS_extendExpressionAST temp_17 = this ;
                TC_Array <FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GGS_string ("same size: useless extend operation"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 119)) ;
              }
            }
          }
        }
      }
      if (kBoolFalse == test_11) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          GGS_bool test_20 = var_sourceIsUnsigned_4710 ;
          if (kBoolTrue == test_20.boolEnum ()) {
            test_20 = var_targetIsUnsigned_4807.operator_not (SOURCE_FILE ("expression-extend.galgas", 121)) ;
          }
          test_19 = test_20.boolEnum () ;
          if (kBoolTrue == test_19) {
            enumGalgasBool test_21 = kBoolTrue ;
            if (kBoolTrue == test_21) {
              test_21 = GGS_bool (ComparisonKind::greaterOrEqual, var_sourceSize_4741.objectCompare (var_targetSize_4838)).boolEnum () ;
              if (kBoolTrue == test_21) {
                const GGS_extendExpressionAST temp_22 = this ;
                TC_Array <FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (temp_22.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray23  COMMA_SOURCE_FILE ("expression-extend.galgas", 123)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_19) {
          enumGalgasBool test_24 = kBoolTrue ;
          if (kBoolTrue == test_24) {
            GGS_bool test_25 = var_sourceIsUnsigned_4710.operator_not (SOURCE_FILE ("expression-extend.galgas", 125)) ;
            if (kBoolTrue == test_25.boolEnum ()) {
              test_25 = var_targetIsUnsigned_4807 ;
            }
            test_24 = test_25.boolEnum () ;
            if (kBoolTrue == test_24) {
              const GGS_extendExpressionAST temp_26 = this ;
              TC_Array <FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (temp_26.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray27  COMMA_SOURCE_FILE ("expression-extend.galgas", 126)) ;
            }
          }
          if (kBoolFalse == test_24) {
            enumGalgasBool test_28 = kBoolTrue ;
            if (kBoolTrue == test_28) {
              test_28 = GGS_bool (ComparisonKind::greaterThan, var_sourceSize_4741.objectCompare (var_targetSize_4838)).boolEnum () ;
              if (kBoolTrue == test_28) {
                const GGS_extendExpressionAST temp_29 = this ;
                TC_Array <FixItDescription> fixItArray30 ;
                inCompiler->emitSemanticError (temp_29.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray30  COMMA_SOURCE_FILE ("expression-extend.galgas", 129)) ;
              }
            }
            if (kBoolFalse == test_28) {
              enumGalgasBool test_31 = kBoolTrue ;
              if (kBoolTrue == test_31) {
                test_31 = GGS_bool (ComparisonKind::equal, var_sourceSize_4741.objectCompare (var_targetSize_4838)).boolEnum () ;
                if (kBoolTrue == test_31) {
                  const GGS_extendExpressionAST temp_32 = this ;
                  TC_Array <FixItDescription> fixItArray33 ;
                  inCompiler->emitSemanticError (temp_32.readProperty_mTypeName ().readProperty_location (), GGS_string ("same size: useless extend operation"), fixItArray33  COMMA_SOURCE_FILE ("expression-extend.galgas", 131)) ;
                }
              }
            }
          }
        }
      }
      {
      routine_getNewTempValue_3F__26__21_ (var_resultType_4215, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4051, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 135)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                              GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_truncateExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_truncateExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas", 52)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_truncateExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_truncateExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas", 63)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_objectIR var_expressionResult_4174 ;
  const GGS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 90)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4174, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4174, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 100)) ;
  }
  const GGS_truncateExpressionAST temp_1 = this ;
  GGS_omnibusType temp_2 ;
  const enumGalgasBool test_3 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_3) {
    const GGS_truncateExpressionAST temp_4 = this ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)) ;
  }
  GGS_omnibusType var_resultType_4338 = temp_2 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_resultType_4338.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 110)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GGS_truncateExpressionAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-truncate.galgas", 111)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_4174, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 112)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 112)).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GGS_truncateExpressionAST temp_9 = this ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_8) {
      GGS_bigint var_minSource_4824 ;
      GGS_bigint var_maxSource_4843 ;
      GGS_uint var_expSize_4871 ;
      GGS_bool joker_4853_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4174, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)).readProperty_kind ().method_extractInteger (var_minSource_4824, var_maxSource_4843, joker_4853_1, var_expSize_4871, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)) ;
      GGS_bigint var_minTarget_4925 ;
      GGS_bigint var_maxTarget_4944 ;
      GGS_uint var_resultSize_4980 ;
      GGS_bool joker_4954 ; // Joker input parameter
      var_resultType_4338.readProperty_kind ().method_extractInteger (var_minTarget_4925, var_maxTarget_4944, joker_4954, var_resultSize_4980, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      GGS_bool test_11 = GGS_bool (ComparisonKind::lowerOrEqual, var_minTarget_4925.objectCompare (var_minSource_4824)) ;
      if (kBoolTrue == test_11.boolEnum ()) {
        test_11 = GGS_bool (ComparisonKind::greaterOrEqual, var_maxTarget_4944.objectCompare (var_maxSource_4843)) ;
      }
      GGS_bool var_alwaysPossible_5000 = test_11 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_alwaysPossible_5000.boolEnum () ;
        if (kBoolTrue == test_12) {
          const GGS_truncateExpressionAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless explicit conversion"), fixItArray14  COMMA_SOURCE_FILE ("expression-truncate.galgas", 119)) ;
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::lowerThan, var_resultSize_4980.objectCompare (var_expSize_4871)).boolEnum () ;
        if (kBoolTrue == test_15) {
          {
          routine_getNewTempValue_3F__26__21_ (var_resultType_4338, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 122)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_truncateInstructionIR::init_21__21_ (outArgument_outResult, var_expressionResult_4174, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-truncate.galgas", 123)) ;
        }
      }
      if (kBoolFalse == test_15) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4174, var_resultType_4338, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_truncateInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                             const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_truncateInstructionIR temp_0 = this ;
  GGS_string var_operandType_6317 = extensionGetter_llvmTypeName (temp_0.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 151)) ;
  const GGS_truncateInstructionIR temp_1 = this ;
  const GGS_truncateInstructionIR temp_2 = this ;
  const GGS_truncateInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GGS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (var_operandType_6317, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofControlRegisterAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                                    GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofControlRegisterAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addressofControlRegisterAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 44)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofControlRegisterAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_string var_llvmRegisterAddressName_3679 ;
  const GGS_addressofControlRegisterAST temp_0 = this ;
  GGS_omnibusType joker_3590 ; // Joker input parameter
  GGS_uint joker_3610 ; // Joker input parameter
  GGS_sliceMap joker_3634 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_3590, joker_3610, joker_3634, var_llvmRegisterAddressName_3679, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 64)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_3742 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 82)).getter_nowhere (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 81)) ;
  outArgument_outResult = GGS_objectIR::class_func_llvmNamedValue (extensionGetter_type (var_resultTypeProxy_3742, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)), var_llvmRegisterAddressName_3679  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                               GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addressofExpressionAST temp_0 = this ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_0.readProperty_mLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 46)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofExpressionAST analyzeExpression'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-addressof-regular-var.galgas", 66)) COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 66)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_addressofExpressionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GGS_string ("addressof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 67)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GGS_LValueRepresentation var_lvalueIR_3681 ;
    const GGS_addressofExpressionAST temp_3 = this ;
    extensionMethod_analyzeLValue (temp_3.readProperty_mLValue (), constinArgument_inSelfType, GGS_bool (true), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_3681, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 70)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_3704 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)).getter_nowhere (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 83)) ;
    GGS_omnibusType var_resultType_3839 = extensionGetter_type (var_resultTypeProxy_3704, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 86)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_3839, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 87)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_addressofInstructionIR::init_21__21_ (outArgument_outResult, var_lvalueIR_3681, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 88)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofInstructionIR llvmInstructionCode'
//
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
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GGS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mLValue ().readProperty_type ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (temp_2.readProperty_mLValue ().readProperty_llvmName (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (GGS_string (" ; addressof\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                            GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofTypeAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                      GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofTypeAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_sizeofTypeAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-sizeof.galgas", 75)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                         const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                         const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                         const GGS_semanticContext constinArgument_inContext,
                                                         const GGS_mode /* constinArgument_inMode */,
                                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                         GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                         GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                         GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         GGS_objectIR & outArgument_outResult,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-sizeof.galgas", 97)) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 97)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_sizeofExpressionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GGS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 98)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GGS_omnibusType var_type_4495 ;
    const GGS_sizeofExpressionAST temp_3 = this ;
    extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_3.readProperty_mLValue (), var_type_4495, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 101)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_4509 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 103)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 102)) ;
    GGS_omnibusType var_resultType_4635 = extensionGetter_type (var_resultTypeProxy_4509, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 105)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_4635, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 106)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_sizeofInstructionIR::init_21__21_ (outArgument_outResult, var_type_4495, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofTypeAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                   const GGS_semanticContext constinArgument_inContext,
                                                   const GGS_mode /* constinArgument_inMode */,
                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                   GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   GGS_objectIR & outArgument_outResult,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-sizeof.galgas", 131)) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 131)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_sizeofTypeAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GGS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 132)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_sizeofTypeAST temp_3 = this ;
    GGS_omnibusType var_type_5821 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_5890 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 136)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 135)) ;
    GGS_omnibusType var_resultType_6016 = extensionGetter_type (var_resultTypeProxy_5890, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 138)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_6016, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 139)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_sizeofInstructionIR::init_21__21_ (outArgument_outResult, var_type_5821, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                           GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sizeofInstructionIR temp_0 = this ;
  GGS_string var_typeName_7056 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 162)) ;
  const GGS_sizeofInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GGS_string (".asPtr = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7056, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7056, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)) ;
  const GGS_sizeofInstructionIR temp_2 = this ;
  const GGS_sizeofInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_2.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GGS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (var_typeName_7056, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GGS_string (".asPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typedConstantCallAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                             GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GGS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) ;
      }
    }
  }
  const GGS_typedConstantCallAST temp_3 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_2147 (temp_3.readProperty_mAccessList (), EnumerationOrder::up) ;
  while (enumerator_2147.hasCurrentObject ()) {
    switch (enumerator_2147.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_2286_indexExpression_0 ;
        GGS_location extractedValue_2303__1 ;
        GGS_bool extractedValue_2303__2 ;
        enumerator_2147.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_2286_indexExpression_0, extractedValue_2303__1, extractedValue_2303__2) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2286_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 53)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_2414__0 ;
        GGS_effectiveArgumentListAST extractedValue_2442_arguments_1 ;
        GGS_location extractedValue_2452__2 ;
        enumerator_2147.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_2414__0, extractedValue_2442_arguments_1, extractedValue_2452__2) ;
        cEnumerator_effectiveArgumentListAST enumerator_2492 (extractedValue_2442_arguments_1, EnumerationOrder::up) ;
        while (enumerator_2492.hasCurrentObject ()) {
          switch (enumerator_2492.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_2602__0 ;
              GGS_lstring extractedValue_2613_typeName_1 ;
              GGS_lstring extractedValue_2622__2 ;
              enumerator_2492.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_2602__0, extractedValue_2613_typeName_1, extractedValue_2622__2) ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_2613_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_2613_typeName_1 COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 60)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_2745_expression_0 ;
              GGS_location extractedValue_2756__1 ;
              enumerator_2492.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_2745_expression_0, extractedValue_2756__1) ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2745_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 62)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_2492.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_2147.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typedConstantCallAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GGS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 77)) ;
      }
    }
  }
  const GGS_typedConstantCallAST temp_3 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_3495 (temp_3.readProperty_mAccessList (), EnumerationOrder::up) ;
  while (enumerator_3495.hasCurrentObject ()) {
    switch (enumerator_3495.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_3634_indexExpression_0 ;
        GGS_location extractedValue_3651__1 ;
        GGS_bool extractedValue_3651__2 ;
        enumerator_3495.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_3634_indexExpression_0, extractedValue_3651__1, extractedValue_3651__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3634_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_3746__0 ;
        GGS_effectiveArgumentListAST extractedValue_3774_arguments_1 ;
        GGS_location extractedValue_3784__2 ;
        enumerator_3495.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_3746__0, extractedValue_3774_arguments_1, extractedValue_3784__2) ;
        cEnumerator_effectiveArgumentListAST enumerator_3824 (extractedValue_3774_arguments_1, EnumerationOrder::up) ;
        while (enumerator_3824.hasCurrentObject ()) {
          switch (enumerator_3824.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_3934__0 ;
              GGS_lstring extractedValue_3945_typeName_1 ;
              GGS_lstring extractedValue_3954__2 ;
              enumerator_3824.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_3934__0, extractedValue_3945_typeName_1, extractedValue_3954__2) ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_3945_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_3945_typeName_1 COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 91)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_4077_expression_0 ;
              GGS_location extractedValue_4088__1 ;
              enumerator_3824.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4077_expression_0, extractedValue_4088__1) ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4077_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 93)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_3824.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3495.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typedConstantCallAST analyzeExpression'
//
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
  GGS_omnibusType var_inferredResultType_5230 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_inferredResultType_5230 = constinArgument_inOptionalTargetType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_typedConstantCallAST temp_2 = this ;
    var_inferredResultType_5230 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_2.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_inferredResultType_5230.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-typed-constant.galgas", 126)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_typedConstantCallAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mConstructorName ().readProperty_location (), GGS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 127)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    const GGS_typedConstantCallAST temp_6 = this ;
    GGS_lstring var_typeName_5565 = GGS_lstring::init_21__21_ (var_inferredResultType_5230.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mConstructorName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_constantMap var_classConstantMap_5728 ;
    constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_typeName_5565, var_classConstantMap_5728, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)) ;
    GGS_bigint var_value_5878 ;
    GGS_lstring var_classTypeName_5889 ;
    const GGS_typedConstantCallAST temp_7 = this ;
    var_classConstantMap_5728.method_searchKey (temp_7.readProperty_mConstructorName (), var_value_5878, var_classTypeName_5889, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 132)) ;
    GGS_omnibusType var_resultType_5912 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_classTypeName_5889, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)) ;
    outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_5912, var_value_5878  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 134)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GGS_typedConstantCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::greaterThan, temp_9.readProperty_mAccessList ().getter_count (SOURCE_FILE ("expression-typed-constant.galgas", 137)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GGS_objectIR var_newTemporaryReference_6319 ;
      {
      routine_getNewTempReference_3F__26__21_ (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)), ioArgument_ioTemporaries, var_newTemporaryReference_6319, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)) ;
      }
      ioArgument_ioAllocaList.addAssign_operation (extensionGetter_llvmName (var_newTemporaryReference_6319, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_type (var_newTemporaryReference_6319, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), GGS_bool (false)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6319, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 145)), extensionGetter_llvmName (var_newTemporaryReference_6319, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 146)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 144)) ;
      }
      outArgument_outResult = var_newTemporaryReference_6319 ;
      {
      const GGS_typedConstantCallAST temp_10 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 151)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                        GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 68)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 69)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 77)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 78)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 79)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_objectIR var_ifExpressionResult_5032 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5032, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 100)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResult_5032, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  }
  GGS_implicitBooleanConversionResult var_ifExpressionConvertedToBoolean_5419 ;
  const GGS_ifExpressionAST temp_1 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_ifExpressionResult_5032, temp_1.readProperty_mIfExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_ifExpressionConvertedToBoolean_5419, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  GGS_objectIR var_thenExpressionTempResult_6019 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_2.readProperty_mThenExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_6019, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 128)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionTempResult_6019, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)) ;
  }
  const GGS_ifExpressionAST temp_3 = this ;
  GGS_objectIR var_thenExpressionResult_6168 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_thenExpressionTempResult_6019, constinArgument_inOptionalTargetType, temp_3.readProperty_mThenExpressionEndLocation (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)) ;
  GGS_objectIR var_elseExpressionTempResult_6852 ;
  const GGS_ifExpressionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mElseExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_6852, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 153)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionTempResult_6852, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)) ;
  }
  const GGS_ifExpressionAST temp_5 = this ;
  GGS_objectIR var_elseExpressionResult_7001 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_elseExpressionTempResult_6852, extensionGetter_type (var_thenExpressionResult_6168, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 173)), temp_5.readProperty_mElseExpressionEndLocation (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
  switch (var_ifExpressionConvertedToBoolean_5419.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_7360_boolValue_0 ;
      var_ifExpressionConvertedToBoolean_5419.getAssociatedValuesFor_compileTime (extractedValue_7360_boolValue_0) ;
      GGS_objectIR temp_6 ;
      const enumGalgasBool test_7 = extractedValue_7360_boolValue_0.boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = var_thenExpressionResult_6168 ;
      }else if (kBoolFalse == test_7) {
        temp_6 = var_elseExpressionResult_7001 ;
      }
      outArgument_outResult = temp_6 ;
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GGS_string extractedValue_7479_testResultVariableName_0 ;
      var_ifExpressionConvertedToBoolean_5419.getAssociatedValuesFor_llvmVariable (extractedValue_7479_testResultVariableName_0) ;
      {
      routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_elseExpressionResult_7001, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
      }
      {
      extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extractedValue_7479_testResultVariableName_0, var_thenExpressionResult_6168, var_elseExpressionResult_7001, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 183)) ;
      }
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                                    GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 19)) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 20)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 28)) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 29)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 50)) ;
  GGS_instructionListIR var_leftInstructionGenerationList_2786 = temp_0 ;
  GGS_objectIR var_leftOperand_3218 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_2786, var_leftOperand_3218, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_3218, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 64)) ;
  }
  GGS_implicitBooleanConversionResult var_leftBooleanOperand_3579 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_leftOperand_3218, temp_2.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_leftInstructionGenerationList_2786, ioArgument_ioAllocaList, var_leftBooleanOperand_3579, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 68)) ;
  GGS_instructionListIR temp_3 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 77)) ;
  GGS_instructionListIR var_rightInstructionGenerationList_3657 = temp_3 ;
  GGS_objectIR var_rightOperand_4094 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_3218, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 81)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3657, var_rightOperand_4094, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 78)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_4094, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 91)) ;
  }
  GGS_implicitBooleanConversionResult var_rightBooleanOperand_4426 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_5 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_rightOperand_4094, temp_5.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_rightInstructionGenerationList_3657, ioArgument_ioAllocaList, var_rightBooleanOperand_4426, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GGS_bool test_7 = var_leftBooleanOperand_3579.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    if (kBoolTrue == test_7.boolEnum ()) {
      test_7 = var_rightBooleanOperand_4426.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    }
    test_6 = test_7.boolEnum () ;
    if (kBoolTrue == test_6) {
      GGS_bool var_leftStaticValue_4638 ;
      var_leftBooleanOperand_3579.method_extractCompileTime (var_leftStaticValue_4638, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 105)) ;
      GGS_bool var_rightStaticValue_4716 ;
      var_rightBooleanOperand_4426.method_extractCompileTime (var_rightStaticValue_4716, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 106)) ;
      outArgument_outResult = GGS_objectIR::class_func_literalInteger (extensionGetter_type (var_leftOperand_3218, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)), var_leftStaticValue_4638.operator_and (var_rightStaticValue_4716 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)).getter_bigint (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)) ;
    }
  }
  if (kBoolFalse == test_6) {
    {
    const GGS_booleanShortCircuitAndOperatorExpressionAST temp_8 = this ;
    routine_getNewTempValue_3F__26__21_ (extensionGetter_booleanType (constinArgument_inContext, temp_8.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)) ;
    }
    {
    const GGS_booleanShortCircuitAndOperatorExpressionAST temp_9 = this ;
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_llvmName (var_leftBooleanOperand_3579, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 114)), var_leftInstructionGenerationList_2786, extensionGetter_llvmName (var_rightBooleanOperand_4426, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 116)), var_rightInstructionGenerationList_3657, temp_9.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 112)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerSliceExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                  GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerSliceExpressionAST temp_0 = this ;
  cEnumerator_integerSliceFieldListAST enumerator_2443 (temp_0.readProperty_mSliceValues (), EnumerationOrder::up) ;
  while (enumerator_2443.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2443.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 58)) ;
    enumerator_2443.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerSliceExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_integerSliceExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 69)) ;
  }
  const GGS_integerSliceExpressionAST temp_1 = this ;
  cEnumerator_integerSliceFieldListAST enumerator_3073 (temp_1.readProperty_mSliceValues (), EnumerationOrder::up) ;
  while (enumerator_3073.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_3073.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 71)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_3073.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 72)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GGS_uint var_sliceWidth_3250 = enumerator_3073.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 73)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_sliceWidth_3250.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3073.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 75)) ;
          }
        }
        if (kBoolFalse == test_3) {
          {
          extensionSetter_noteUINTType (ioArgument_ioGraph, var_sliceWidth_3250, enumerator_3073.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 77)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, enumerator_3073.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)).getter_nowhere (SOURCE_FILE ("expression-integer-slice.galgas", 80)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)) ;
          }
        }
      }
    }
    enumerator_3073.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerSliceExpressionAST analyzeExpression'
//
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
  GGS_omnibusType var_resultType_4539 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_resultType_4539.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-integer-slice.galgas", 105)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_integerSliceExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GGS_bool var_unsigned_4837 ;
    GGS_uint var_bitCount_4860 ;
    GGS_bigint joker_4819_2 ; // Joker input parameter
    GGS_bigint joker_4819_1 ; // Joker input parameter
    var_resultType_4539.readProperty_kind ().method_extractInteger (joker_4819_2, joker_4819_1, var_unsigned_4837, var_bitCount_4860, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 108)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unsigned_4837.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_integerSliceExpressionAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 110)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      GGS_uint var_leftShiftAmount_5076 = var_bitCount_4860 ;
      GGS_bigint var_accumulatedFieldStaticValues_5121 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 114)) ;
      GGS_operandIRList temp_7 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 115)) ;
      GGS_operandIRList var_operandList_5179 = temp_7 ;
      const GGS_integerSliceExpressionAST temp_8 = this ;
      cEnumerator_integerSliceFieldListAST enumerator_5233 (temp_8.readProperty_mSliceValues (), EnumerationOrder::up) ;
      while (enumerator_5233.hasCurrentObject ()) {
        GGS_uint var_sliceWidth_5295 ;
        GGS_lstring var_expressionTypeName_5327 ;
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_5233.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray10  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 120)) ;
            var_operandList_5179.drop () ; // Release error dropped variable
            var_sliceWidth_5295.drop () ; // Release error dropped variable
            var_expressionTypeName_5327.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_9) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_5233.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              var_sliceWidth_5295 = GGS_uint (uint32_t (1U)) ;
              const GGS_integerSliceExpressionAST temp_12 = this ;
              var_expressionTypeName_5327 = GGS_lstring::init_21__21_ (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)), temp_12.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = enumerator_5233.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 124)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 124)).boolEnum () ;
              if (kBoolTrue == test_13) {
                TC_Array <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticError (enumerator_5233.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the selector should be an unsigned integer value"), fixItArray14  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 125)) ;
                var_operandList_5179.drop () ; // Release error dropped variable
                var_sliceWidth_5295.drop () ; // Release error dropped variable
                var_expressionTypeName_5327.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_13) {
              var_sliceWidth_5295 = enumerator_5233.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 127)) ;
              const GGS_integerSliceExpressionAST temp_15 = this ;
              var_expressionTypeName_5327 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_sliceWidth_5295.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)), temp_15.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
              enumGalgasBool test_16 = kBoolTrue ;
              if (kBoolTrue == test_16) {
                test_16 = GGS_bool (ComparisonKind::equal, var_sliceWidth_5295.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_5233.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray17  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 130)) ;
                }
              }
            }
          }
        }
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::greaterOrEqual, var_leftShiftAmount_5076.objectCompare (var_sliceWidth_5295)).boolEnum () ;
          if (kBoolTrue == test_18) {
            var_leftShiftAmount_5076 = var_leftShiftAmount_5076.substract_operation (var_sliceWidth_5295, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 134)) ;
          }
        }
        if (kBoolFalse == test_18) {
          GGS_uint var_specifiedBitCount_6273 = var_bitCount_4860.add_operation (var_sliceWidth_5295, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)).substract_operation (var_leftShiftAmount_5076, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)) ;
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (enumerator_5233.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6273.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (GGS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (var_bitCount_4860.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)), fixItArray19  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)) ;
          var_leftShiftAmount_5076 = GGS_uint (uint32_t (0U)) ;
        }
        GGS_omnibusType var_expressionTargetType_6525 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_expressionTypeName_5327, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)) ;
        GGS_objectIR var_expressionResult_7062 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_5233.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_expressionTargetType_6525, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 142)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 155)) ;
        }
        switch (extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().enumValue ()) {
        case GGS_typeKind::Enumeration::invalid:
          break ;
        case GGS_typeKind::Enumeration::enum_staticArrayType:
          {
            GGS_omnibusType extractedValue_7326__0 ;
            GGS_bigint extractedValue_7328__1 ;
            extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_7326__0, extractedValue_7328__1) ;
            TC_Array <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 162)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_dynamicArrayType:
          {
            GGS_omnibusType extractedValue_7450__0 ;
            extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_7450__0) ;
            TC_Array <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 164)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_opaque:
          {
            GGS_bigint extractedValue_7562__0 ;
            extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_7562__0) ;
            TC_Array <FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 166)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_enumeration:
          {
            GGS_uint extractedValue_7679__0 ;
            extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_7679__0) ;
            TC_Array <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 168)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_structure:
          {
            GGS_propertyList extractedValue_7794__0 ;
            extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_7794__0) ;
            TC_Array <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 170)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_syncTool:
          {
            TC_Array <FixItDescription> fixItArray25 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 172)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_boolean:
          {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 174)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_expressionTargetType_6525.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
              if (kBoolTrue == test_26) {
                TC_Array <FixItDescription> fixItArray27 ;
                inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an $").add_operation (var_expressionTargetType_6525.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GGS_string (" expression is required, found an $"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GGS_string (" expression"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)), fixItArray27  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 175)) ;
              }
            }
            enumGalgasBool test_28 = kBoolTrue ;
            if (kBoolTrue == test_28) {
              test_28 = var_expressionResult_7062.getter_isLiteralInteger (SOURCE_FILE ("expression-integer-slice.galgas", 179)).boolEnum () ;
              if (kBoolTrue == test_28) {
                GGS_bigint var_value_8510 ;
                GGS_omnibusType joker_8487_1 ; // Joker input parameter
                var_expressionResult_7062.method_extractLiteralInteger (joker_8487_1, var_value_8510, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 180)) ;
                var_accumulatedFieldStaticValues_5121 = var_accumulatedFieldStaticValues_5121.operator_or (var_value_8510.left_shift_operation (var_leftShiftAmount_5076, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) ;
              }
            }
            if (kBoolFalse == test_28) {
              GGS_objectIR var_extendedResult_8760 ;
              {
              routine_getNewTempValue_3F__26__21_ (var_resultType_4539, ioArgument_ioTemporaries, var_extendedResult_8760, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 184)) ;
              }
              {
              extensionSetter_appendBoolToUInt (ioArgument_ioInstructionGenerationList, var_extendedResult_8760, var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 185)) ;
              }
              GGS_objectIR var_shiftedResult_8967 ;
              {
              routine_getNewTempValue_3F__26__21_ (var_resultType_4539, ioArgument_ioTemporaries, var_shiftedResult_8967, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 187)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_8967, var_extendedResult_8760, var_leftShiftAmount_5076, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 188)) ;
              }
              var_operandList_5179.addAssign_operation (var_shiftedResult_8967  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 190)) ;
            }
          }
          break ;
        case GGS_typeKind::Enumeration::enum_void:
          {
            TC_Array <FixItDescription> fixItArray29 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray29  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 193)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_literalString:
          {
            TC_Array <FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray30  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 195)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_function:
          {
            GGS_mode extractedValue_9419__0 ;
            GGS_routineTypedSignature extractedValue_9419__1 ;
            GGS_unifiedTypeMapEntry extractedValue_9419__2 ;
            extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_function (extractedValue_9419__0, extractedValue_9419__1, extractedValue_9419__2) ;
            TC_Array <FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray31  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 197)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_generic:
          {
            GGS_genericFormalParameterList extractedValue_9533__0 ;
            GGS_ctExpressionAST extractedValue_9533__1 ;
            GGS_llvmStringDefinition extractedValue_9533__2 ;
            extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_9533__0, extractedValue_9533__1, extractedValue_9533__2) ;
            TC_Array <FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray32  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 199)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_llvmType:
          {
            GGS_bigint extractedValue_9647__0 ;
            extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_9647__0) ;
            TC_Array <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray33  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 201)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_compileTimeBool:
          {
            TC_Array <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray34  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 203)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_compileTimeInteger:
          {
            GGS_bigint var_value_9962 ;
            GGS_omnibusType joker_9939_1 ; // Joker input parameter
            var_expressionResult_7062.method_extractLiteralInteger (joker_9939_1, var_value_9962, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 205)) ;
            enumGalgasBool test_35 = kBoolTrue ;
            if (kBoolTrue == test_35) {
              test_35 = GGS_bool (ComparisonKind::lowerThan, var_value_9962.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 206)))).boolEnum () ;
              if (kBoolTrue == test_35) {
                TC_Array <FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("this integer expression should be positive"), fixItArray36  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 207)) ;
              }
            }
            if (kBoolFalse == test_35) {
              enumGalgasBool test_37 = kBoolTrue ;
              if (kBoolTrue == test_37) {
                test_37 = GGS_bool (ComparisonKind::lowerThan, var_value_9962.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)).left_shift_operation (var_sliceWidth_5295, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)))).boolEnum () ;
                if (kBoolTrue == test_37) {
                  var_accumulatedFieldStaticValues_5121 = var_accumulatedFieldStaticValues_5121.operator_or (var_value_9962.left_shift_operation (var_leftShiftAmount_5076, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) ;
                }
              }
              if (kBoolFalse == test_37) {
                TC_Array <FixItDescription> fixItArray38 ;
                inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("expression too large (should be < ").add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).left_shift_operation (var_sliceWidth_5295, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)), fixItArray38  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)) ;
              }
            }
          }
          break ;
        case GGS_typeKind::Enumeration::enum_integer:
          {
            GGS_bigint extractedValue_10395_min_0 ;
            GGS_bigint extractedValue_10414_max_1 ;
            GGS_bool extractedValue_10424_unsigned_2 ;
            GGS_uint extractedValue_10439_expressionBitCount_3 ;
            extensionGetter_type (var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_10395_min_0, extractedValue_10414_max_1, extractedValue_10424_unsigned_2, extractedValue_10439_expressionBitCount_3) ;
            enumGalgasBool test_39 = kBoolTrue ;
            if (kBoolTrue == test_39) {
              test_39 = extractedValue_10424_unsigned_2.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 214)).boolEnum () ;
              if (kBoolTrue == test_39) {
                TC_Array <FixItDescription> fixItArray40 ;
                inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an $uint").add_operation (var_sliceWidth_5295.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)).add_operation (GGS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)), fixItArray40  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)) ;
              }
            }
            if (kBoolFalse == test_39) {
              enumGalgasBool test_41 = kBoolTrue ;
              if (kBoolTrue == test_41) {
                test_41 = GGS_bool (ComparisonKind::notEqual, extractedValue_10439_expressionBitCount_3.objectCompare (var_sliceWidth_5295)).boolEnum () ;
                if (kBoolTrue == test_41) {
                  TC_Array <FixItDescription> fixItArray42 ;
                  inCompiler->emitSemanticError (enumerator_5233.current_mExpressionLocation (HERE), GGS_string ("an $uint").add_operation (var_sliceWidth_5295.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)).add_operation (GGS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)), fixItArray42  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)) ;
                }
              }
              if (kBoolFalse == test_41) {
                GGS_objectIR var_extendedResult_10865 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_resultType_4539, ioArgument_ioTemporaries, var_extendedResult_10865, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 220)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_10865, var_expressionResult_7062, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 221)) ;
                }
                GGS_objectIR var_shiftedResult_11068 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_resultType_4539, ioArgument_ioTemporaries, var_shiftedResult_11068, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 223)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_11068, var_extendedResult_10865, var_leftShiftAmount_5076, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 224)) ;
                }
                var_operandList_5179.addAssign_operation (var_shiftedResult_11068  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 226)) ;
              }
            }
          }
          break ;
        }
        enumerator_5233.gotoNextObject () ;
      }
      enumGalgasBool test_43 = kBoolTrue ;
      if (kBoolTrue == test_43) {
        test_43 = GGS_bool (ComparisonKind::notEqual, var_leftShiftAmount_5076.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_43) {
          const GGS_integerSliceExpressionAST temp_44 = this ;
          TC_Array <FixItDescription> fixItArray45 ;
          inCompiler->emitSemanticError (temp_44.readProperty_mLocation (), var_bitCount_4860.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GGS_string (" bits required, "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (var_bitCount_4860.substract_operation (var_leftShiftAmount_5076, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GGS_string (" bits defined"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)), fixItArray45  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)) ;
        }
      }
      outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_4539, var_accumulatedFieldStaticValues_5121  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 234)) ;
      cEnumerator_operandIRList enumerator_11628 (var_operandList_5179, EnumerationOrder::up) ;
      while (enumerator_11628.hasCurrentObject ()) {
        GGS_objectIR var_newResult_11713 ;
        {
        routine_getNewTempValue_3F__26__21_ (var_resultType_4539, ioArgument_ioTemporaries, var_newResult_11713, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 236)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_11713, extensionGetter_type (var_newResult_11713, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 239)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 240)), outArgument_outResult, GGS_llvmBinaryOperation::class_func_ior (SOURCE_FILE ("expression-integer-slice.galgas", 242)), enumerator_11628.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 237)) ;
        }
        outArgument_outResult = var_newResult_11713 ;
        enumerator_11628.gotoNextObject () ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                      GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                   const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GGS_semanticContext /* constinArgument_inContext */,
                                                                   const GGS_mode /* constinArgument_inMode */,
                                                                   GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GGS_objectIR & outArgument_outResult,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntegerInExpressionAST temp_0 = this ;
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)), temp_0.readProperty_mLiteralInteger ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                     GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GGS_lstring::init_21__21_ (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST analyzeExpression'
//
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
  GGS_uint var_staticStringIndex_3344 ;
  {
  const GGS_literalStringInExpressionAST temp_0 = this ;
  extensionSetter_findOrAddStaticString (ioArgument_ioStaticEntityMap, temp_0.readProperty_mLiteralString ().readProperty_string (), var_staticStringIndex_3344, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 62)) ;
  }
  const GGS_literalStringInExpressionAST temp_1 = this ;
  outArgument_outResult = GGS_objectIR::class_func_literalString (temp_1.readProperty_mLiteralString ().readProperty_string ().getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 63)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)), var_staticStringIndex_3344  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                      GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                   const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GGS_semanticContext /* constinArgument_inContext */,
                                                                   const GGS_mode /* constinArgument_inMode */,
                                                                   GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GGS_objectIR & outArgument_outResult,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBooleanInExpressionAST temp_0 = this ;
  GGS_bigint temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mValue ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)), temp_1  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_registerInExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName () COMMA_SOURCE_FILE ("expression-control-register.galgas", 44)) ;
  }
  const GGS_registerInExpressionAST temp_1 = this ;
  extensionMethod_addDependenceEdgeForStaticExpression (temp_1.readProperty_mControlRegisterLValue (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 45)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_registerInExpressionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 53)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_omnibusType var_registerType_4108 ;
  GGS_sliceMap var_sliceMap_4163 ;
  GGS_string var_llvmRegisterAddressName_4205 ;
  const GGS_registerInExpressionAST temp_0 = this ;
  GGS_uint joker_4125 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4108, joker_4125, var_sliceMap_4163, var_llvmRegisterAddressName_4205, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 73)) ;
  {
  routine_getNewTempValue_3F__26__21_ (var_registerType_4108, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 90)) ;
  }
  {
  extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_llvmRegisterAddressName_4205, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 91)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_registerInExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mFieldName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GGS_llvmBinaryOperation var_accessOperator_4588 ;
      GGS_bigint var_accessRightOperand_4622 ;
      GGS_omnibusType var_resultType_4665 ;
      const GGS_registerInExpressionAST temp_3 = this ;
      var_sliceMap_4163.method_searchKey (temp_3.readProperty_mFieldName (), var_accessOperator_4588, var_accessRightOperand_4622, var_resultType_4665, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 94)) ;
      GGS_objectIR var_resultIR_4736 ;
      {
      routine_getNewTempValue_3F__26__21_ (var_resultType_4665, ioArgument_ioTemporaries, var_resultIR_4736, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 100)) ;
      }
      {
      const GGS_registerInExpressionAST temp_4 = this ;
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_4736, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 103)), temp_4.readProperty_mFieldName ().readProperty_location (), outArgument_outResult, var_accessOperator_4588, GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), var_accessRightOperand_4622  COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 101)) ;
      }
      outArgument_outResult = var_resultIR_4736 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                                      GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_registerConstantExpressionAST temp_0 = this ;
  cEnumerator_registerIntegerFieldListAST enumerator_2867 (temp_0.readProperty_mFieldValues (), EnumerationOrder::up) ;
  while (enumerator_2867.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2867.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 65)) ;
    enumerator_2867.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST analyzeExpression'
//
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
  GGS_controlRegisterMap var_controlRegisterMap_4069 ;
  const GGS_registerConstantExpressionAST temp_0 = this ;
  GGS_registerGroupKind joker_4057 ; // Joker input parameter
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), joker_4057, var_controlRegisterMap_4069, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 87)) ;
  GGS_omnibusType var_registerType_4237 ;
  GGS_sliceMap var_registerBitSliceMap_4284 ;
  GGS_controlRegisterFieldMap var_registerFieldMap_4338 ;
  GGS_uint var_registerBitCount_4372 ;
  GGS_uint var_powerOfTwoForArraySize_4405 ;
  GGS_uint var_elementArraySize_4444 ;
  const GGS_registerConstantExpressionAST temp_1 = this ;
  GGS_bool joker_4254_2 ; // Joker input parameter
  GGS_bool joker_4254_1 ; // Joker input parameter
  GGS_bigint joker_4359_2 ; // Joker input parameter
  GGS_controlRegisterFieldList joker_4359_1 ; // Joker input parameter
  var_controlRegisterMap_4069.method_searchKey (temp_1.readProperty_mRegisterName (), var_registerType_4237, joker_4254_2, joker_4254_1, var_registerBitSliceMap_4284, var_registerFieldMap_4338, joker_4359_2, joker_4359_1, var_registerBitCount_4372, var_powerOfTwoForArraySize_4405, var_elementArraySize_4444, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 93)) ;
  GGS_bigint var_accumulatedFieldStaticValues_4551 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 105)) ;
  GGS_operandIRList temp_2 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 106)) ;
  GGS_operandIRList var_operandList_4605 = temp_2 ;
  const GGS_registerConstantExpressionAST temp_3 = this ;
  cEnumerator_registerIntegerFieldListAST enumerator_4651 (temp_3.readProperty_mFieldValues (), EnumerationOrder::up) ;
  while (enumerator_4651.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, enumerator_4651.current_mFieldName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_4651.current_mFieldName (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray5  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 109)) ;
        var_operandList_4605.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      GGS_uint var_fieldBitIndex_4887 ;
      GGS_uint var_fieldBitCount_4920 ;
      var_registerFieldMap_4338.method_searchKey (enumerator_4651.current_mFieldName (HERE), var_fieldBitIndex_4887, var_fieldBitCount_4920, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 111)) ;
      GGS_lstring var_inferredTypeName_4952 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_fieldBitCount_4920.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), enumerator_4651.current_mFieldName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_inferredType_5098 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_inferredTypeName_4952, var_inferredType_5098, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 117)) ;
      GGS_objectIR var_expressionResult_5564 ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_4651.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_inferredType_5098, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5564, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_5564, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 132)) ;
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_type (var_expressionResult_5564, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GGS_bigint var_value_5880 ;
          GGS_omnibusType joker_5857_1 ; // Joker input parameter
          var_expressionResult_5564.method_extractLiteralInteger (joker_5857_1, var_value_5880, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 138)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::lowerThan, var_value_5880.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 139)))).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_4651.current_mExpressionLocation (HERE), GGS_string ("this integer expression should be positive"), fixItArray8  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 140)) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::lowerThan, var_value_5880.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)).left_shift_operation (var_fieldBitCount_4920, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_accumulatedFieldStaticValues_4551 = var_accumulatedFieldStaticValues_4551.operator_or (var_value_5880.left_shift_operation (var_fieldBitIndex_4887, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) ;
              }
            }
            if (kBoolFalse == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_4651.current_mExpressionLocation (HERE), GGS_string ("expression too large (should be < ").add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).left_shift_operation (var_fieldBitCount_4920, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), fixItArray10  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = extensionGetter_type (var_expressionResult_5564, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).boolEnum () ;
          if (kBoolTrue == test_11) {
            GGS_bool var_unsigned_6402 ;
            GGS_uint var_expressionBitCount_6431 ;
            GGS_bigint joker_6378_2 ; // Joker input parameter
            GGS_bigint joker_6378_1 ; // Joker input parameter
            extensionGetter_type (var_expressionResult_5564, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)).readProperty_kind ().method_extractInteger (joker_6378_2, joker_6378_1, var_unsigned_6402, var_expressionBitCount_6431, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)) ;
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = var_unsigned_6402.operator_not (SOURCE_FILE ("expression-register-value-from-slices.galgas", 148)).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_4651.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 149)) ;
              }
            }
            if (kBoolFalse == test_12) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = GGS_bool (ComparisonKind::notEqual, var_expressionBitCount_6431.objectCompare (var_fieldBitCount_4920)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_4651.current_mExpressionLocation (HERE), GGS_string ("type error, $uint").add_operation (var_fieldBitCount_4920.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)).add_operation (GGS_string (" type required"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), fixItArray15  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)) ;
                }
              }
              if (kBoolFalse == test_14) {
                GGS_objectIR var_partialResult_6805 = var_expressionResult_5564 ;
                enumGalgasBool test_16 = kBoolTrue ;
                if (kBoolTrue == test_16) {
                  test_16 = GGS_bool (ComparisonKind::lowerThan, var_expressionBitCount_6431.objectCompare (var_registerBitCount_4372)).boolEnum () ;
                  if (kBoolTrue == test_16) {
                    GGS_objectIR var_extendedResult_6958 ;
                    {
                    routine_getNewTempValue_3F__26__21_ (var_registerType_4237, ioArgument_ioTemporaries, var_extendedResult_6958, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 156)) ;
                    }
                    {
                    extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_6958, var_partialResult_6805, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 157)) ;
                    }
                    var_partialResult_6805 = var_extendedResult_6958 ;
                  }
                }
                GGS_objectIR var_shiftedResult_7213 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_registerType_4237, ioArgument_ioTemporaries, var_shiftedResult_7213, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 161)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_7213, var_partialResult_6805, var_fieldBitIndex_4887, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 162)) ;
                }
                var_operandList_4605.addAssign_operation (var_shiftedResult_7213  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 164)) ;
              }
            }
          }
        }
      }
    }
    enumerator_4651.gotoNextObject () ;
  }
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_registerType_4237, var_accumulatedFieldStaticValues_4551  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 170)) ;
  cEnumerator_operandIRList enumerator_7593 (var_operandList_4605, EnumerationOrder::up) ;
  while (enumerator_7593.hasCurrentObject ()) {
    GGS_objectIR var_newResult_7676 ;
    {
    routine_getNewTempValue_3F__26__21_ (var_registerType_4237, ioArgument_ioTemporaries, var_newResult_7676, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 172)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_7676, extensionGetter_type (var_newResult_7676, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 175)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 176)), outArgument_outResult, GGS_llvmBinaryOperation::class_func_ior (SOURCE_FILE ("expression-register-value-from-slices.galgas", 178)), enumerator_7593.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 173)) ;
    }
    outArgument_outResult = var_newResult_7676 ;
    enumerator_7593.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                               GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_primaryInExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GGS_primaryInExpressionAST temp_2 = this ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mReceiverName () COMMA_SOURCE_FILE ("expression-primary.galgas", 106)) ;
      }
    }
  }
  const GGS_primaryInExpressionAST temp_3 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_4267 (temp_3.readProperty_mAccessList (), EnumerationOrder::up) ;
  while (enumerator_4267.hasCurrentObject ()) {
    switch (enumerator_4267.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_4406_indexExpression_0 ;
        GGS_location extractedValue_4423__1 ;
        GGS_bool extractedValue_4423__2 ;
        enumerator_4267.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_4406_indexExpression_0, extractedValue_4423__1, extractedValue_4423__2) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4406_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 113)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_4534__0 ;
        GGS_effectiveArgumentListAST extractedValue_4562_arguments_1 ;
        GGS_location extractedValue_4572__2 ;
        enumerator_4267.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_4534__0, extractedValue_4562_arguments_1, extractedValue_4572__2) ;
        cEnumerator_effectiveArgumentListAST enumerator_4612 (extractedValue_4562_arguments_1, EnumerationOrder::up) ;
        while (enumerator_4612.hasCurrentObject ()) {
          switch (enumerator_4612.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_4722__0 ;
              GGS_lstring extractedValue_4733_typeName_1 ;
              GGS_lstring extractedValue_4742__2 ;
              enumerator_4612.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_4722__0, extractedValue_4733_typeName_1, extractedValue_4742__2) ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_4733_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_4733_typeName_1 COMMA_SOURCE_FILE ("expression-primary.galgas", 120)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_4865_expression_0 ;
              GGS_location extractedValue_4876__1 ;
              enumerator_4612.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4865_expression_0, extractedValue_4876__1) ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4865_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 122)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_4612.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4267.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_primaryInExpressionAST temp_0 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_5516 (temp_0.readProperty_mAccessList (), EnumerationOrder::up) ;
  while (enumerator_5516.hasCurrentObject ()) {
    switch (enumerator_5516.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_5597_low_0 ;
        GGS_lbigint extractedValue_5610_high_1 ;
        enumerator_5516.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_5597_low_0, extractedValue_5610_high_1) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterOrEqual, extractedValue_5610_high_1.readProperty_bigint ().objectCompare (extractedValue_5597_low_0.readProperty_bigint ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_5610_high_1.readProperty_bigint ().substract_operation (extractedValue_5597_low_0.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), extractedValue_5597_low_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)) ;
            }
          }
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_5813_indexExpression_0 ;
        GGS_location extractedValue_5830__1 ;
        GGS_bool extractedValue_5830__2 ;
        enumerator_5516.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_5813_indexExpression_0, extractedValue_5830__1, extractedValue_5830__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5813_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 144)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_5925__0 ;
        GGS_effectiveArgumentListAST extractedValue_5953_arguments_1 ;
        GGS_location extractedValue_5963__2 ;
        enumerator_5516.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_5925__0, extractedValue_5953_arguments_1, extractedValue_5963__2) ;
        cEnumerator_effectiveArgumentListAST enumerator_6003 (extractedValue_5953_arguments_1, EnumerationOrder::up) ;
        while (enumerator_6003.hasCurrentObject ()) {
          switch (enumerator_6003.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_6113__0 ;
              GGS_lstring extractedValue_6124_typeName_1 ;
              GGS_lstring extractedValue_6133__2 ;
              enumerator_6003.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_6113__0, extractedValue_6124_typeName_1, extractedValue_6133__2) ;
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_6124_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_2) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_6124_typeName_1 COMMA_SOURCE_FILE ("expression-primary.galgas", 151)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_6256_expression_0 ;
              GGS_location extractedValue_6267__1 ;
              enumerator_6003.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_6256_expression_0, extractedValue_6267__1) ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_6256_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 153)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_6003.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_5516.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST analyzeExpression'
//
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_primaryInExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas", 181)) COMMA_SOURCE_FILE ("expression-primary.galgas", 181)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GGS_primaryInExpressionAST temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mReceiverName ().readProperty_location (), GGS_string ("in guard, only 'self' properties may be accessed"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 182)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        const GGS_primaryInExpressionAST temp_5 = this ;
        callExtensionMethod_analyzePrimaryExpressionNoSelf ((cPtr_primaryInExpressionAST *) temp_5.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 184)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-primary.galgas", 198)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GGS_primaryInExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mReceiverName ().readProperty_location (), GGS_string ("'self' is not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GGS_primaryInExpressionAST temp_9 = this ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((cPtr_primaryInExpressionAST *) temp_9.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 201)) ;
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_13976 (constinArgument_inAccessList, EnumerationOrder::up) ;
  while (enumerator_13976.hasCurrentObject ()) {
    switch (enumerator_13976.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_14053_low_0 ;
        GGS_lbigint extractedValue_14066_high_1 ;
        enumerator_13976.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_14053_low_0, extractedValue_14066_high_1) ;
        {
        routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (constinArgument_inContext, ioArgument_ioResult, extractedValue_14053_low_0, extractedValue_14066_high_1, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_14308_propertyName_0 ;
        enumerator_13976.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_14308_propertyName_0) ;
        {
        routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, ioArgument_ioResult, extractedValue_14308_propertyName_0, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_14616_indexExpression_0 ;
        GGS_location extractedValue_14642_endOfIndex_1 ;
        GGS_bool extractedValue_14653_checkIndexExpression_2 ;
        enumerator_13976.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_14616_indexExpression_0, extractedValue_14642_endOfIndex_1, extractedValue_14653_checkIndexExpression_2) ;
        {
        routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (ioArgument_ioResult, extractedValue_14616_indexExpression_0, extractedValue_14642_endOfIndex_1, extractedValue_14653_checkIndexExpression_2, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 377)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_15215_methodName_0 ;
        GGS_effectiveArgumentListAST extractedValue_15252_arguments_1 ;
        GGS_location extractedValue_15272_errorLocation_2 ;
        enumerator_13976.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_15215_methodName_0, extractedValue_15252_arguments_1, extractedValue_15272_errorLocation_2) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas", 394)) COMMA_SOURCE_FILE ("expression-primary.galgas", 394)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_15272_errorLocation_2, GGS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 395)) ;
            ioArgument_ioResult.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (extractedValue_15215_methodName_0, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_15252_arguments_1, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 397)) ;
          }
        }
      }
      break ;
    }
    enumerator_13976.gotoNextObject () ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inLow.readProperty_bigint ().objectCompare (constinArgument_inHigh.readProperty_bigint ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GGS_string ("low bound should be lower or equal to high bound"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 506)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GGS_bool test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      }
      test_2 = test_3.operator_not (SOURCE_FILE ("expression-primary.galgas", 507)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GGS_string ("Invalid, receiver is not an integer"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 508)) ;
        ioArgument_ioResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      {
      extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, ioArgument_ioResult, constinArgument_inLow.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
      }
      GGS_lstring var_resultIntegerName_19521 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (constinArgument_inHigh.readProperty_bigint ().substract_operation (constinArgument_inLow.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).getter_string (SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), constinArgument_inLow.readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_sliceType_19684 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_resultIntegerName_19521, var_sliceType_19684, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 514)) ;
      {
      extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_19684, ioArgument_ioResult, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 515)) ;
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
  GGS_omnibusType var_type_20234 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 530)) ;
  GGS_propertyGetterMap var_propertyGetterMap_20361 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_type_20234, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
  GGS_propertyGetterKind var_accessKind_20492 ;
  GGS_propertyVisibility joker_20464 ; // Joker input parameter
  var_propertyGetterMap_20361.method_searchKey (constinArgument_inPropertyName, joker_20464, var_accessKind_20492, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 533)) ;
  switch (var_accessKind_20492.enumValue ()) {
  case GGS_propertyGetterKind::Enumeration::invalid:
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
    {
      GGS_objectIR extractedValue_20559_value_0 ;
      var_accessKind_20492.getAssociatedValuesFor_constantProperty (extractedValue_20559_value_0) ;
      ioArgument_ioResult = extractedValue_20559_value_0 ;
    }
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
    {
      GGS_omnibusType extractedValue_20625_propertyType_0 ;
      GGS_uint extractedValue_20644_propertyIndex_1 ;
      var_accessKind_20492.getAssociatedValuesFor_storedProperty (extractedValue_20625_propertyType_0, extractedValue_20644_propertyIndex_1) ;
      GGS_string var_property_5F_llvmName_20701 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_20701, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 541)), var_property_5F_llvmName_20701, extractedValue_20644_propertyIndex_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 539)) ;
      }
      ioArgument_ioResult = GGS_objectIR::class_func_reference (extractedValue_20625_propertyType_0, var_property_5F_llvmName_20701  COMMA_SOURCE_FILE ("expression-primary.galgas", 546)) ;
    }
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
    {
      GGS_unifiedTypeMapEntry extractedValue_21015_propertyTypeProxy_0 ;
      GGS_routineLLVMNameDict extractedValue_21033_modeDictionary_1 ;
      var_accessKind_20492.getAssociatedValuesFor_computedProperty (extractedValue_21015_propertyTypeProxy_0, extractedValue_21033_modeDictionary_1) ;
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)) ;
      }
      GGS_string var_routineLLVMName_21164 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_21033_modeDictionary_1, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
      GGS_objectIR var_resultValueIR_21429 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, var_routineLLVMName_21164, extensionGetter_type (extractedValue_21015_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 554)), var_resultValueIR_21429, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 550)) ;
      }
      ioArgument_ioResult = var_resultValueIR_21429 ;
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
  switch (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      TC_Array <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is ").add_operation (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).add_operation (GGS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 582)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is literal string (dynamic array) and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 584)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_22692_elementType_0 ;
      GGS_bigint extractedValue_22712_arraySize_1 ;
      extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_22692_elementType_0, extractedValue_22712_arraySize_1) ;
      GGS_objectIR var_indexIR_23201 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_22712_arraySize_1, extractedValue_22692_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_23201, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 587)) ;
      }
      GGS_objectIR var_result_23420 ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, extractedValue_22692_elementType_0, var_indexIR_23201, var_result_23420, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
      }
      ioArgument_ioResult = var_result_23420 ;
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
  GGS_omnibusType var_receiverType_24165 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 631)) ;
  GGS_lstring var_methodMangledName_24253 = extensionGetter_mangledName (constinArgument_inArguments, var_receiverType_24165.readProperty_omnibusTypeDescriptionName (), constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 633)) ;
  GGS_bool var_implementedPublic_24503 ;
  GGS_routineTypedSignature var_formalSignature_24530 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_24555 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_24614 ;
  GGS_bool var_implementedIsExported_24656 ;
  GGS_mode var_implementedMode_24694 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_24253, var_implementedPublic_24503, var_formalSignature_24530, var_formalReturnTypeProxy_24555, var_implementedModeDictionary_24614, var_implementedIsExported_24656, var_implementedMode_24694, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 636)) ;
  GGS_string var_functionLLVMName_24737 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_24614, constinArgument_inMode, constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 646)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_formalReturnTypeProxy_24555, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 648)).readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-primary.galgas", 648)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.readProperty_location (), GGS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 649)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 652)) ;
    }
    GGS_procCallEffectiveParameterListIR temp_2 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 654)) ;
    GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_25256 = temp_2 ;
    var_effectiveParameterListIR_25256.addAssign_operation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("expression-primary.galgas", 655)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 655)) ;
    {
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_24530, constinArgument_inArguments, constinArgument_inMethodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_25256, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 657)) ;
    }
    GGS_objectIR var_callReturnedResult_26033 ;
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_formalReturnTypeProxy_24555, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 673)), ioArgument_ioTemporaries, var_callReturnedResult_26033, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 673)) ;
    }
    GGS_lstring var_routineMangledName_26082 = function_routineMangledNameFromCall (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)).readProperty_llvmBaseTypeName (), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)) ;
    ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (var_callReturnedResult_26033, var_routineMangledName_26082, var_functionLLVMName_24737, var_effectiveParameterListIR_25256, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 676)) ;
    ioArgument_ioObjectIR = var_callReturnedResult_26033 ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                          GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_standaloneFunctionInExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mStandaloneFunctionName () COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 37)) ;
  }
  const GGS_standaloneFunctionInExpressionAST temp_1 = this ;
  cEnumerator_effectiveArgumentListAST enumerator_2106 (temp_1.readProperty_mArguments (), EnumerationOrder::up) ;
  while (enumerator_2106.hasCurrentObject ()) {
    switch (enumerator_2106.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_2210__0 ;
        GGS_lstring extractedValue_2221_typeName_1 ;
        GGS_lstring extractedValue_2230__2 ;
        enumerator_2106.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_2210__0, extractedValue_2221_typeName_1, extractedValue_2230__2) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_2221_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_2221_typeName_1 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_2337_expression_0 ;
        GGS_location extractedValue_2348__1 ;
        enumerator_2106.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_2337_expression_0, extractedValue_2348__1) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2337_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 45)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_2106.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_standaloneFunctionInExpressionAST temp_0 = this ;
  cEnumerator_effectiveArgumentListAST enumerator_2995 (temp_0.readProperty_mArguments (), EnumerationOrder::up) ;
  while (enumerator_2995.hasCurrentObject ()) {
    switch (enumerator_2995.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_3099__0 ;
        GGS_lstring extractedValue_3110_typeName_1 ;
        GGS_lstring extractedValue_3119__2 ;
        enumerator_2995.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_3099__0, extractedValue_3110_typeName_1, extractedValue_3119__2) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, extractedValue_3110_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_3110_typeName_1 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_3226_expression_0 ;
        GGS_location extractedValue_3237__1 ;
        enumerator_2995.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_3226_expression_0, extractedValue_3237__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3226_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 66)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_2995.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                       const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                       const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                       const GGS_semanticContext constinArgument_inContext,
                                                                       const GGS_mode constinArgument_inMode,
                                                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                       GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                       GGS_allocaList & ioArgument_ioAllocaList,
                                                                       GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GGS_objectIR & outArgument_outFunctionCallReturnedValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-standalone-function-call.galgas", 91)) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_standaloneFunctionInExpressionAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mStandaloneFunctionName ().readProperty_location (), GGS_string ("a routine cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 92)) ;
    }
  }
  const GGS_standaloneFunctionInExpressionAST temp_3 = this ;
  const GGS_standaloneFunctionInExpressionAST temp_4 = this ;
  GGS_lstring var_routineLLVMName_4630 = function_routineMangledNameFromCall (GGS_string::makeEmptyString (), temp_3.readProperty_mStandaloneFunctionName (), temp_4.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 95)) ;
  const GGS_standaloneFunctionInExpressionAST temp_5 = this ;
  const GGS_standaloneFunctionInExpressionAST temp_6 = this ;
  GGS_lstring var_signature_4769 = extensionGetter_routineSignature (temp_5.readProperty_mArguments (), temp_6.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 97)) ;
  const GGS_standaloneFunctionInExpressionAST temp_7 = this ;
  const GGS_standaloneFunctionInExpressionAST temp_8 = this ;
  GGS_lstring var_requiredFunctionMangledName_4889 = GGS_lstring::init_21__21_ (temp_7.readProperty_mStandaloneFunctionName ().readProperty_string ().add_operation (var_signature_4769.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)), temp_8.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_bool var_implementedPublic_5135 ;
  GGS_routineTypedSignature var_formalSignature_5162 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_5187 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_5246 ;
  GGS_bool var_isExported_5288 ;
  GGS_mode var_implementedMode_5315 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_4889, var_implementedPublic_5135, var_formalSignature_5162, var_formalReturnTypeProxy_5187, var_implementedModeDictionary_5246, var_isExported_5288, var_implementedMode_5315, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 101)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_formalReturnTypeProxy_5187.getter_isNull (SOURCE_FILE ("expression-standalone-function-call.galgas", 111)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (var_requiredFunctionMangledName_4889.readProperty_location (), GGS_string ("this function does not return any value"), fixItArray10  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 112)) ;
      outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_9) {
    GGS_string var_functionLLVMName_5565 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_5246, constinArgument_inMode, var_requiredFunctionMangledName_4889, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 115)) ;
    GGS_procCallEffectiveParameterListIR temp_11 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 117)) ;
    GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5763 = temp_11 ;
    {
    const GGS_standaloneFunctionInExpressionAST temp_12 = this ;
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5162, temp_12.readProperty_mArguments (), var_requiredFunctionMangledName_4889.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5763, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 118)) ;
    }
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_formalReturnTypeProxy_5187, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outFunctionCallReturnedValue, var_routineLLVMName_4630, var_functionLLVMName_5565, var_effectiveParameterListIR_5763, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136)) ;
  }
}
