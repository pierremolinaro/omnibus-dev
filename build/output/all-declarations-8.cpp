#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@globalConstantDeclaration enterInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  {
  const GALGAS_globalConstantDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_typeName_3242 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mConstantTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 73)) ;
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, var_typeName_3242 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                               extensionMethod_globalConstantDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInPrecedenceGraph (defineExtensionMethod_globalConstantDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@globalConstantDeclaration keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 83)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                                           extensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_globalConstantDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@globalConstantDeclaration enterInContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_unifiedSymbolMap var_variableMap_4689 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_4749 ;
  {
  routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 98)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 100)), var_variableMap_4689, var_universalMap_4749, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 96)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_annotationType_4818 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mConstantTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType_4818 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 107)) ;
  }else if (kBoolFalse == test_0) {
    var_annotationType_4818 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 109)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_5065 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-constant.galgas", 112)) ;
  GALGAS_instructionListIR var_instructionGenerationList_5123 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 113)) ;
  GALGAS_generationStruct var_generationStruct_5165 = GALGAS_generationStruct::constructor_default (SOURCE_FILE ("declaration-global-constant.galgas", 114)) ;
  GALGAS_objectIR var_expressionResult_5692 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 116)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 119)), var_annotationType_4818, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 122)), var_temporaries_5065, ioArgument_ioGlobalLiteralStringMap, var_variableMap_4689, var_universalMap_4749, var_generationStruct_5165, var_instructionGenerationList_5123, var_expressionResult_5692, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 115)) ;
  GALGAS_objectIR var_result_5745 = function_checkAssignmentCompatibility (var_expressionResult_5692, var_annotationType_4818, object->mProperty_mConstantName.mProperty_location, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 132)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_5123.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_generationStruct_5165.mProperty_mAllocaList.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_result_5745, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 139)).operator_not (SOURCE_FILE ("declaration-global-constant.galgas", 139)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 140)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 140)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_result_5745, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                       extensionMethod_globalConstantDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterInContext (defineExtensionMethod_globalConstantDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@globalConstantDeclaration enterRoutinesInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                              const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                              GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                              GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                               extensionMethod_globalConstantDeclaration_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_enterRoutinesInContext (defineExtensionMethod_globalConstantDeclaration_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_7276 = constinArgument_inSourceFile.mProperty_string.add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 164)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_7423 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 166)) ;
    cEnumerator_globalConstantMap enumerator_7462 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7462.hasCurrentObject ()) {
      var_firstLetterSet_7423.addAssign_operation (enumerator_7462.current_lkey (HERE).mProperty_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 168))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168)) ;
      enumerator_7462.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_7570 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_7604 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_7650 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7650.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_7604.objectCompare (enumerator_7650.current_lkey (HERE).mProperty_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_7604 = enumerator_7650.current_lkey (HERE).mProperty_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 174)) ;
        var_tableOfTypeString_7570.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_7604.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 175)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (var_currentFirstLetter_7604.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)) ;
      }
      var_tableOfTypeString_7570.plusAssign_operation(function_linkForGlobalConstant (enumerator_7650.current_lkey (HERE).mProperty_string, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)) ;
      enumerator_7650.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_8046 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.mProperty_string.getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 180)), inArgument_inGlobalConstantMap, var_firstLetterSet_7423, var_tableOfTypeString_7570 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179))) ;
    GALGAS_bool joker_8290 ; // Joker input parameter
    var_typeDumpString_8046.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_7276, joker_8290, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 185)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_7276, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 187)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_constantDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_constantDumpGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Global constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-family: Georgia, sans-serif ;\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Global Constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_GLOBAL_5F_CONSTANT_5F_MAP.getter_count (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined global constants, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1005_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1005 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1005.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1005.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_1005.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1005.hasNextObject ()) {
        result << " - " ;
      }
      index_1005_.increment () ;
      enumerator_1005.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_title\">V"
    "alue</td></tr>\n" ;
  GALGAS_uint index_1375_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1375 (in_GLOBAL_5F_CONSTANT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1375.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1375.current_lkey (HERE).mProperty_string.stringValue () ;
      result << "\">" ;
      result << enumerator_1375.current_lkey (HERE).mProperty_string.stringValue () ;
      result << "</a></td><td>$" ;
      result << extensionGetter_key (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1375_.increment () ;
      enumerator_1375.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_linkForGlobalConstant (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForGlobalConstant (operand0,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@globalConstantDeclaration semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_globalConstantDeclaration_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                                        const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                        GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                        GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_globalConstantDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_globalConstantDeclaration.mSlotID,
                                         extensionMethod_globalConstantDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_globalConstantDeclaration_semanticAnalysis (defineExtensionMethod_globalConstantDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@moduleDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  {
  const GALGAS_moduleDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mModuleName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 126)) ;
  }
  GALGAS_lstring var_moduleTypeName_4662 = function_llvmRegularTypeMangledNameFromName (function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 127)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mModuleName, var_moduleTypeName_4662 COMMA_SOURCE_FILE ("declaration-module.galgas", 128)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                               extensionMethod_moduleDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_moduleDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@moduleDeclarationAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("module ").add_operation (object->mProperty_mModuleName.getter_string (SOURCE_FILE ("declaration-module.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 134)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                                           extensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_moduleDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@moduleDeclarationAST location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_moduleDeclarationAST_location (const cPtr_abstractDeclaration * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  result_outLocation = object->mProperty_mModuleName.mProperty_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_moduleDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                 extensionGetter_moduleDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_moduleDeclarationAST_location (defineExtensionGetter_moduleDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@moduleDeclarationAST addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  const GALGAS_moduleDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                     extensionMethod_moduleDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_addExtension (defineExtensionMethod_moduleDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@moduleDeclarationAST enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mModuleMap.setter_insertKey (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 170)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                       extensionMethod_moduleDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_enterInContext (defineExtensionMethod_moduleDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@moduleDeclarationAST enterRoutinesInContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                         const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                         GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                               extensionMethod_moduleDeclarationAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_enterRoutinesInContext (defineExtensionMethod_moduleDeclarationAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@moduleDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduleDeclarationAST_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduleDeclarationAST * object = (const cPtr_moduleDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduleDeclarationAST) ;
  GALGAS_lstring var_moduleTypeName_8071 = function_moduleMangledNameFromModuleName (object->mProperty_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 199)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_moduleType_8137 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, var_moduleTypeName_8071, inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 200)) ;
  GALGAS_constructorValue var_constructorValue_8286 ;
  constinArgument_inContext.mProperty_mConstructorMap.method_searchKey (var_moduleTypeName_8071, var_constructorValue_8286, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 201)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_8382 ;
  GALGAS_constructorSignature joker_8340 ; // Joker input parameter
  var_constructorValue_8286.method_structure (joker_8340, var_sortedOperandList_8382, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 202)) ;
  GALGAS_operandIRList var_initialValueList_8417 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 203)) ;
  cEnumerator_sortedOperandIRList enumerator_8466 (var_sortedOperandList_8382, kENUMERATION_UP) ;
  while (enumerator_8466.hasCurrentObject ()) {
    var_initialValueList_8417.addAssign_operation (enumerator_8466.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 205)) ;
    enumerator_8466.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mModuleList.addAssign_operation (object->mProperty_mModuleName.mProperty_string, var_moduleType_8137, var_initialValueList_8417  COMMA_SOURCE_FILE ("declaration-module.galgas", 207)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduleDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_moduleDeclarationAST.mSlotID,
                                         extensionMethod_moduleDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduleDeclarationAST_semanticAnalysis (defineExtensionMethod_moduleDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@staticArrayAST location'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_staticArrayAST_location (const cPtr_abstractDeclaration * inObject,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  result_result = object->mProperty_mStaticListName.mProperty_location ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticArrayAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                 extensionGetter_staticArrayAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticArrayAST_location (defineExtensionGetter_staticArrayAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@staticArrayAST keyRepresentationForErrorSignaling'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_staticArrayAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 33)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_staticArrayAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                                           extensionGetter_staticArrayAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_staticArrayAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticArrayAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@staticArrayAST addExtension'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                         GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                         GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  const GALGAS_staticArrayAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                     extensionMethod_staticArrayAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_addExtension (defineExtensionMethod_staticArrayAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@staticArrayAST enterInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  {
  const GALGAS_staticArrayAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 95)) ;
  }
  cEnumerator_staticArrayPropertyListAST enumerator_4040 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_4040.hasCurrentObject ()) {
    switch (enumerator_4040.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticArrayPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType * extractPtr_4237 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType *) (enumerator_4040.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_4237->mAssociatedValue0 ;
        GALGAS_lstring var_typeName_4127 = function_llvmRegularTypeMangledNameFromName (extractedValue_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 100)) ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_typeName_4127 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 101)) ;
        }
      }
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_function * extractPtr_4696 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_function *) (enumerator_4040.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_4696->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_4696->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentList enumerator_4374 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_4374.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_4398 = function_llvmRegularTypeMangledNameFromName (enumerator_4374.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 104)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_4398 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 105)) ;
          }
          enumerator_4374.gotoNextObject () ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_lstring var_returnTypeName_4574 = function_llvmRegularTypeMangledNameFromName (extractedValue_returnType, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 108)) ;
          {
          ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_returnTypeName_4574 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 109)) ;
          }
        }
      }
      break ;
    }
    enumerator_4040.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                               extensionMethod_staticArrayAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_enterInPrecedenceGraph (defineExtensionMethod_staticArrayAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@staticArrayAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                           GALGAS_staticlistValues_5F_listMap & /* ioArgument_ioStaticListValueMap */,
                                                           GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayAST * object = (const cPtr_staticArrayAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayAST) ;
  GALGAS_propertyList var_propertyList_5749 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 134)) ;
  GALGAS_propertyMap var_staticlistPropertyMap_5791 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 135)) ;
  GALGAS_stringset var_propertyNameSet_5825 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 136)) ;
  GALGAS_lstring var_plmTypeName_5848 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 137)) ;
  cEnumerator_staticArrayPropertyListAST enumerator_5944 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_5944.hasCurrentObject ()) {
    switch (enumerator_5944.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticArrayPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType * extractPtr_6550 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType *) (enumerator_5944.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_6550->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_propertyType_6035 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 141)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_5825.getter_hasKey (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 142)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 142)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_5944.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 143)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 143)) ;
        }
        var_propertyNameSet_5825.addAssign_operation (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 145))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 145)) ;
        var_propertyList_5749.addAssign_operation (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 146)), var_propertyType_6035  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 146)) ;
        GALGAS_uint var_propertyIndex_6341 = var_staticlistPropertyMap_5791.getter_count (SOURCE_FILE ("declaration-static-array.galgas", 147)) ;
        {
        var_staticlistPropertyMap_5791.setter_insertKey (enumerator_5944.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_objectIR::constructor_property (var_propertyType_6035, enumerator_5944.current_mPropertyName (HERE), var_propertyIndex_6341  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 148)) ;
        }
      }
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_function * extractPtr_7965 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_function *) (enumerator_5944.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_7965->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_7965->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_7965->mAssociatedValue2 ;
        GALGAS_lstring var_routineMangledName_6704 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_5944.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 155)) ;
        GALGAS_routineTypedSignature var_signature_6888 ;
        {
        routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_6888, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 161)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 163)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 165)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnType_6932 = temp_2 ;
        GALGAS_routineDescriptor var_descriptor_7083 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (extractedValue_mode  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 167)), var_signature_6888, var_returnType_6932, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 167)) ;
        const enumGalgasBool test_4 = ioArgument_ioContext.mProperty_mTypeMap.getter_hasKey (var_routineMangledName_6704.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 168)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 168)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 168)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_routineMangledName_6704, GALGAS_typeKind::constructor_function (var_descriptor_7083  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 169)) ;
          }
        }
        GALGAS_unifiedTypeMap_2D_proxy var_propertyType_7585 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mProperty_mTypeMap, var_routineMangledName_6704, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 176)) ;
        var_propertyList_5749.addAssign_operation (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 177)), var_propertyType_7585  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 177)) ;
        GALGAS_uint var_propertyIndex_7735 = var_staticlistPropertyMap_5791.getter_count (SOURCE_FILE ("declaration-static-array.galgas", 178)) ;
        {
        var_staticlistPropertyMap_5791.setter_insertKey (var_routineMangledName_6704, GALGAS_bool (true), GALGAS_objectIR::constructor_property (var_propertyType_7585, enumerator_5944.current_mPropertyName (HERE), var_propertyIndex_7735  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 179)) ;
        }
      }
      break ;
    }
    enumerator_5944.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticlistMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_5749, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 186)) ;
  }
  GALGAS_typeKind var_kind_8109 = GALGAS_typeKind::constructor_structure (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 192)), var_staticlistPropertyMap_5791, GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("declaration-static-array.galgas", 194)), var_propertyList_5749, GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 191)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmTypeName_5848, var_kind_8109, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 198)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                       extensionMethod_staticArrayAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_enterInContext (defineExtensionMethod_staticArrayAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@staticArrayAST enterRoutinesInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                   const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                   GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                   GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                               extensionMethod_staticArrayAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_enterRoutinesInContext (defineExtensionMethod_staticArrayAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@staticArrayAST semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticArrayAST_semanticAnalysis (const cPtr_abstractDeclaration * /* inObject */,
                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GALGAS_intermediateCodeStruct & /* ioArgument_ioIntermediateCodeStruct */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticArrayAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_staticArrayAST.mSlotID,
                                         extensionMethod_staticArrayAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticArrayAST_semanticAnalysis (defineExtensionMethod_staticArrayAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@extendStaticArrayDeclarationAST location'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_extendStaticArrayDeclarationAST_location (const cPtr_abstractDeclaration * inObject,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  result_outLocation = object->mProperty_mStaticlistName.mProperty_location ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extendStaticArrayDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                 extensionGetter_extendStaticArrayDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extendStaticArrayDeclarationAST_location (defineExtensionGetter_extendStaticArrayDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@extendStaticArrayDeclarationAST keyRepresentationForErrorSignaling'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclaration * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticlistName.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 33)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                                           extensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_extendStaticArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@extendStaticArrayDeclarationAST addExtension'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_addExtension (const cPtr_abstractDeclaration * inObject,
                                                                          GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                          GALGAS_abstractDeclaration & outArgument_outNewDeclaration,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  const GALGAS_extendStaticArrayDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                     extensionMethod_extendStaticArrayDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_addExtension (defineExtensionMethod_extendStaticArrayDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@extendStaticArrayDeclarationAST enterInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclaration * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_lstring var_nodeName_3941 = GALGAS_lstring::constructor_new (object->mProperty_mStaticlistName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).add_operation (ioArgument_ioGraph.getter_keyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)), object->mProperty_mStaticlistName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 90))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)) ;
  {
  const GALGAS_extendStaticArrayDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3941, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 92)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3941, object->mProperty_mStaticlistName COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 94)) ;
  }
  cEnumerator_extendStaticArrayExpressionListAST enumerator_4276 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_4276.hasCurrentObject ()) {
    switch (enumerator_4276.current_mExpression (HERE).enumValue ()) {
    case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_4410 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_4276.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_4410->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), var_nodeName_3941, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 99)) ;
      }
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_4663 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_4276.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_4663->mAssociatedValue1 ;
        cEnumerator_routineFormalArgumentList enumerator_4527 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_4527.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_4551 = function_llvmRegularTypeMangledNameFromName (enumerator_4527.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 102)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_4551 COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 103)) ;
          }
          enumerator_4527.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4276.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                               extensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_extendStaticArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@extendStaticArrayDeclarationAST enterInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_enterInContext (const cPtr_abstractDeclaration * inObject,
                                                                            const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                            GALGAS_semanticContext & ioArgument_ioContext,
                                                                            GALGAS_staticlistValues_5F_listMap & ioArgument_ioStaticListValueMap,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_propertyList var_staticArrayPropertyList_5620 ;
  ioArgument_ioContext.mProperty_mStaticlistMap.method_searchKey (object->mProperty_mStaticlistName, var_staticArrayPropertyList_5620, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 123)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_staticArrayPropertyList_5620.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 124)).objectCompare (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 124)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStaticlistName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 125)), var_staticArrayPropertyList_5620.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 127)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 126)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 127)), fixItArray1  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 125)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_staticValue_5869 = GALGAS_string ("{") ;
    cEnumerator_extendStaticArrayExpressionListAST enumerator_5918 (object->mProperty_mExpressions, kENUMERATION_UP) ;
    cEnumerator_propertyList enumerator_5955 (var_staticArrayPropertyList_5620, kENUMERATION_UP) ;
    while (enumerator_5918.hasCurrentObject () && enumerator_5955.hasCurrentObject ()) {
      switch (enumerator_5918.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_7912 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_5918.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7912->mAssociatedValue0 ;
          const enumGalgasBool test_2 = enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 133)).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 133)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray3  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 134)) ;
          }else if (kBoolFalse == test_2) {
            GALGAS_unifiedSymbolMap var_variableMap_6414 ;
            GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6482 ;
            {
            routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 138)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 140)), var_variableMap_6414, var_universalMap_6482, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 136)) ;
            }
            GALGAS_semanticTemporariesStruct var_temporaries_6543 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-extend-static-array.galgas", 144)) ;
            GALGAS_instructionListIR var_instructionGenerationList_6609 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 145)) ;
            GALGAS_generationStruct var_generationStruct_6659 = GALGAS_generationStruct::constructor_default (SOURCE_FILE ("declaration-extend-static-array.galgas", 146)) ;
            GALGAS_objectIR var_expressionResult_7282 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 148)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 151)), enumerator_5955.current_mType (HERE), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 154)), var_temporaries_6543, ioArgument_ioGlobalLiteralStringMap, var_variableMap_6414, var_universalMap_6482, var_generationStruct_6659, var_instructionGenerationList_6609, var_expressionResult_7282, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 147)) ;
            GALGAS_objectIR var_result_7359 = function_checkAssignmentCompatibility (var_expressionResult_7282, enumerator_5955.current_mType (HERE), enumerator_5918.current_mEndOfExpression (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 164)) ;
            GALGAS_bool test_4 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_6609.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            if (kBoolTrue != test_4.boolEnum ()) {
              test_4 = GALGAS_bool (kIsStrictSup, var_generationStruct_6659.mProperty_mAllocaList.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            }
            GALGAS_bool test_5 = test_4 ;
            if (kBoolTrue != test_5.boolEnum ()) {
              test_5 = extensionGetter_isStatic (var_result_7359, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 170)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 170)) ;
            }
            const enumGalgasBool test_6 = test_5.boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("source expression cannot be statically computed"), fixItArray7  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 171)) ;
            }
            var_staticValue_5869.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)).add_operation (extensionGetter_llvmName (var_expressionResult_7282, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)) ;
          }
        }
        break ;
      case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_10747 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_5918.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_10747->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_10747->mAssociatedValue1 ;
          const enumGalgasBool test_8 = enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 177)).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 177)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 177)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray9  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 178)) ;
          }else if (kBoolFalse == test_8) {
            GALGAS_routineDescriptor var_functionDescriptor_8193 ;
            enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 180)).method_function (var_functionDescriptor_8193, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 180)) ;
            GALGAS_lstring var_argumentSignature_8226 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 181)) ;
            GALGAS_lstring var_candidateRoutineLLVMName_8433 ;
            GALGAS_routineDescriptor var_routineDescriptor_8487 ;
            GALGAS_location var_functionDefinitionLocation_8531 ;
            extensionMethod_searchKey (ioArgument_ioContext.mProperty_mRoutineMapForContext, extractedValue_functionName, var_argumentSignature_8226, var_candidateRoutineLLVMName_8433, var_routineDescriptor_8487, var_functionDefinitionLocation_8531, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 182)) ;
            GALGAS_bool var_candidateIsPublic_8575 = var_routineDescriptor_8487.mProperty_mIsPublic ;
            GALGAS_routineKind var_candidateRoutineKind_8640 = var_routineDescriptor_8487.mProperty_mRoutineKind ;
            GALGAS_mode var_candidateMode_8701 = extensionGetter_executionMode (var_routineDescriptor_8487.mProperty_mRoutineKind, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 191)) ;
            GALGAS_routineTypedSignature var_candidateSignature_8818 = var_routineDescriptor_8487.mProperty_mSignature ;
            GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnType_8883 = var_routineDescriptor_8487.mProperty_mReturnType ;
            const enumGalgasBool test_10 = var_candidateIsPublic_8575.operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 195)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string var_declarationFile_9020 = var_functionDefinitionLocation_8531.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 196)) ;
              GALGAS_string var_invocationFile_9087 = extractedValue_functionName.mProperty_location.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 197)) ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_invocationFile_9087.objectCompare (var_declarationFile_9020)).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 199)), GALGAS_string ("this function is not public"), fixItArray12  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 199)) ;
              }
            }
            const enumGalgasBool test_13 = var_candidateRoutineKind_8640.getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 202)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 202)).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 203)), GALGAS_string ("this routine is not a function"), fixItArray14  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 203)) ;
            }
            GALGAS_mode var_currentMode_9429 = extensionGetter_executionMode (var_functionDescriptor_8193.mProperty_mRoutineKind, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)) ;
            const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_currentMode_9429.objectCompare (var_candidateMode_8701)).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), GALGAS_string ("this function runs in ").add_operation (extensionGetter_string (var_candidateMode_8701, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)).add_operation (GALGAS_string (" mode, but "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)).add_operation (extensionGetter_string (var_currentMode_9429, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)).add_operation (GALGAS_string (" is required"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), fixItArray16  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)) ;
            }
            GALGAS_bool test_17 = GALGAS_bool (kIsEqual, var_functionDescriptor_8193.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 209)))) ;
            if (kBoolTrue == test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsNotEqual, var_candidateReturnType_8883.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 209)))) ;
            }
            const enumGalgasBool test_18 = test_17.boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnType_8883.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), fixItArray19  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)) ;
            }else if (kBoolFalse == test_18) {
              GALGAS_bool test_20 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8193.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 211)))) ;
              if (kBoolTrue == test_20.boolEnum ()) {
                test_20 = GALGAS_bool (kIsEqual, var_candidateReturnType_8883.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 211)))) ;
              }
              const enumGalgasBool test_21 = test_20.boolEnum () ;
              if (kBoolTrue == test_21) {
                TC_Array <C_FixItDescription> fixItArray22 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 212)), GALGAS_string ("this function should return no object"), fixItArray22  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 212)) ;
              }
            }
            const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8193.mProperty_mSignature.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 214)).objectCompare (var_candidateSignature_8818.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 214)))).boolEnum () ;
            if (kBoolTrue == test_23) {
              TC_Array <C_FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 215)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_8818.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).add_operation (var_functionDescriptor_8193.mProperty_mSignature.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 217)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 217)), fixItArray24  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)) ;
            }else if (kBoolFalse == test_23) {
              cEnumerator_routineTypedSignature enumerator_10391 (var_functionDescriptor_8193.mProperty_mSignature, kENUMERATION_UP) ;
              cEnumerator_routineTypedSignature enumerator_10424 (var_candidateSignature_8818, kENUMERATION_UP) ;
              while (enumerator_10391.hasCurrentObject () && enumerator_10424.hasCurrentObject ()) {
                const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_10391.current (HERE).mProperty_mType.objectCompare (enumerator_10424.current (HERE).mProperty_mType)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (enumerator_10424.current (HERE).mProperty_mSelector.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 221)), GALGAS_string ("argument type should be $").add_operation (enumerator_10391.current (HERE).mProperty_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 221)), fixItArray26  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 221)) ;
                }
                enumerator_10391.gotoNextObject () ;
                enumerator_10424.gotoNextObject () ;
              }
            }
            var_staticValue_5869.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)).add_operation (function_llvmNameForFunction (var_candidateRoutineLLVMName_8433.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)) ;
          }
        }
        break ;
      }
      if (enumerator_5918.hasNextObject () && enumerator_5955.hasNextObject ()) {
        var_staticValue_5869.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 229)) ;
      }
      enumerator_5918.gotoNextObject () ;
      enumerator_5955.gotoNextObject () ;
    }
    var_staticValue_5869.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 231)) ;
    ioArgument_ioStaticListValueMap.addAssign_operation (object->mProperty_mStaticlistName.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 232)), var_staticValue_5869  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 232)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                       extensionMethod_extendStaticArrayDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_enterInContext (defineExtensionMethod_extendStaticArrayDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@extendStaticArrayDeclarationAST enterRoutinesInContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (const cPtr_abstractDeclaration * /* inObject */,
                                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                                    GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (void) {
  enterExtensionMethod_enterRoutinesInContext (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                               extensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext (defineExtensionMethod_extendStaticArrayDeclarationAST_enterRoutinesInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extendStaticArrayDeclarationAST semanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis (const cPtr_abstractDeclaration * inObject,
                                                                              const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendStaticArrayDeclarationAST * object = (const cPtr_extendStaticArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendStaticArrayDeclarationAST) ;
  GALGAS_stringset var_invokedFunctionSet_12214 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-extend-static-array.galgas", 263)) ;
  cEnumerator_extendStaticArrayExpressionListAST enumerator_12260 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_12260.hasCurrentObject ()) {
    switch (enumerator_12260.current_mExpression (HERE).enumValue ()) {
    case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_12332 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_12260.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_12332->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_12614 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_12260.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_functionName = extractPtr_12614->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_12614->mAssociatedValue1 ;
        GALGAS_lstring var_routineMangledName_12473 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 269)) ;
        var_invokedFunctionSet_12214.addAssign_operation (var_routineMangledName_12473.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 274))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 274)) ;
      }
      break ;
    }
    enumerator_12260.gotoNextObject () ;
  }
  cMapElement_staticArrayMap * objectArray_12635 = (cMapElement_staticArrayMap *) ioArgument_ioTemporaries.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.mProperty_string  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 277)) ;
  if (NULL != objectArray_12635) {
      macroValidSharedObject (objectArray_12635, cMapElement_staticArrayMap) ;
    objectArray_12635->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12214, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 278)) ;
  }else{
    {
    ioArgument_ioTemporaries.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12214, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 280)) ;
    }
  }
  cMapElement_staticArrayMap * objectArray_12847 = (cMapElement_staticArrayMap *) ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.mProperty_string  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 282)) ;
  if (NULL != objectArray_12847) {
      macroValidSharedObject (objectArray_12847, cMapElement_staticArrayMap) ;
    objectArray_12847->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12214, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 283)) ;
  }else{
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12214, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 285)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST.mSlotID,
                                         extensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendStaticArrayDeclarationAST_semanticAnalysis (defineExtensionMethod_extendStaticArrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_calleeKindIR function_checkMode (const GALGAS_mode & constinArgument_inCallerMode,
                                        const GALGAS_mode & constinArgument_inCalleeMode,
                                        const GALGAS_routineKind & constinArgument_inRoutineKind,
                                        const GALGAS_location & constinArgument_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_calleeKindIR result_outResult ; // Returned variable
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 63)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_safeFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 64)) ;
      }else if (kBoolFalse == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_safeFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 66)) ;
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 69)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 70)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_bool test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 71)))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 71)))) ;
        }
        const enumGalgasBool test_3 = test_2.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 72)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 74)), fixItArray4  COMMA_SOURCE_FILE ("logical-modes.galgas", 74)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 77)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outResult = GALGAS_calleeKindIR::constructor_primitiveFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 78)) ;
      }else if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a primitive cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 80)), fixItArray6  COMMA_SOURCE_FILE ("logical-modes.galgas", 80)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 83)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 84)) ;
      }else if (kBoolFalse == test_7) {
        GALGAS_bool test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 85)))) ;
        if (kBoolTrue != test_8.boolEnum ()) {
          test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_guardMode (SOURCE_FILE ("logical-modes.galgas", 85)))) ;
        }
        const enumGalgasBool test_9 = test_8.boolEnum () ;
        if (kBoolTrue == test_9) {
          result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 86)) ;
        }else if (kBoolFalse == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 88)), fixItArray10  COMMA_SOURCE_FILE ("logical-modes.galgas", 88)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      GALGAS_bool var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (constinArgument_inCalleeMode)) ;
      const enumGalgasBool test_11 = var_ok_3103.operator_not (SOURCE_FILE ("logical-modes.galgas", 92)).boolEnum () ;
      if (kBoolTrue == test_11) {
        switch (constinArgument_inCallerMode.enumValue ()) {
        case GALGAS_mode::kNotBuilt:
          break ;
        case GALGAS_mode::kEnum_userMode:
          {
            var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 95)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_sectionMode:
          {
            GALGAS_bool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 97)))) ;
            if (kBoolTrue != test_12.boolEnum ()) {
              test_12 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 97)))) ;
            }
            var_ok_3103 = test_12 ;
          }
          break ;
        case GALGAS_mode::kEnum_serviceMode:
          {
            GALGAS_bool test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            if (kBoolTrue != test_13.boolEnum ()) {
              test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            }
            GALGAS_bool test_14 = test_13 ;
            if (kBoolTrue != test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 99)))) ;
            }
            var_ok_3103 = test_14 ;
          }
          break ;
        case GALGAS_mode::kEnum_primitiveMode:
          {
            GALGAS_bool test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            if (kBoolTrue != test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            GALGAS_bool test_16 = test_15 ;
            if (kBoolTrue != test_16.boolEnum ()) {
              test_16 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            GALGAS_bool test_17 = test_16 ;
            if (kBoolTrue != test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 101)))) ;
            }
            var_ok_3103 = test_17 ;
          }
          break ;
        case GALGAS_mode::kEnum_guardMode:
          {
            GALGAS_bool test_18 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            if (kBoolTrue != test_18.boolEnum ()) {
              test_18 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            GALGAS_bool test_19 = test_18 ;
            if (kBoolTrue != test_19.boolEnum ()) {
              test_19 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            GALGAS_bool test_20 = test_19 ;
            if (kBoolTrue != test_20.boolEnum ()) {
              test_20 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 103)))) ;
            }
            var_ok_3103 = test_20 ;
          }
          break ;
        case GALGAS_mode::kEnum_panicMode:
        case GALGAS_mode::kEnum_initMode:
          {
            GALGAS_bool test_21 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_safeMode (SOURCE_FILE ("logical-modes.galgas", 105)))) ;
            if (kBoolTrue != test_21.boolEnum ()) {
              test_21 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 105)))) ;
            }
            var_ok_3103 = test_21 ;
          }
          break ;
        case GALGAS_mode::kEnum_bootMode:
          {
          }
          break ;
        case GALGAS_mode::kEnum_safeMode:
          {
            var_ok_3103 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 108)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_anyMode:
          {
          }
          break ;
        }
      }
      const enumGalgasBool test_22 = var_ok_3103.operator_not (SOURCE_FILE ("logical-modes.galgas", 112)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a func ").add_operation (extensionGetter_string (constinArgument_inCalleeMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (GALGAS_string (" cannot be called from "), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 114)), fixItArray23  COMMA_SOURCE_FILE ("logical-modes.galgas", 113)) ;
      }
      result_outResult = GALGAS_calleeKindIR::constructor_function (SOURCE_FILE ("logical-modes.galgas", 116)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkMode [5] = {
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkMode (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_mode operand0 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_mode operand1 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_routineKind operand2 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_checkMode (operand0,
                             operand1,
                             operand2,
                             operand3,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkMode ("checkMode",
                                                           functionWithGenericHeader_checkMode,
                                                           & kTypeDescriptor_GALGAS_calleeKindIR,
                                                           4,
                                                           functionArgs_checkMode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'panicModeName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_panicModeName (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("panic") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GALGAS_string gOnceFunctionResult_panicModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_panicModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicModeName (NULL,
                                                           releaseOnceFunctionResult_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicModeName (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateSectionAndSafeDispatcher'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSectionAndSafeDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                               const GALGAS_string constinArgument_inTargetName,
                                               const GALGAS_string constinArgument_inSectionInvocationScheme,
                                               GALGAS_string & ioArgument_ioAssemblerCode,
                                               const GALGAS__32_stringlist constinArgument_inSectionAndSafeList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_stringlist enumerator_9585 (constinArgument_inSectionAndSafeList, kENUMERATION_UP) ;
  GALGAS_uint index_9531 ((uint32_t) 0) ;
  while (enumerator_9585.hasCurrentObject ()) {
    GALGAS_string var_s_9604 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)).add_operation (GALGAS_string ("-section-invocation.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 264)) ;
    var_s_9604 = var_s_9604.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_9585.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 268)) ;
    var_s_9604 = var_s_9604.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_9585.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 269)) ;
    var_s_9604 = var_s_9604.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_9531.getter_string (SOURCE_FILE ("declaration-svc.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 270)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_9604, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 271)) ;
    enumerator_9585.gotoNextObject () ;
    index_9531.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)).add_operation (GALGAS_string ("-section-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 273)) ;
  cEnumerator__32_stringlist enumerator_10246 (constinArgument_inSectionAndSafeList, kENUMERATION_UP) ;
  GALGAS_uint index_10192 ((uint32_t) 0) ;
  while (enumerator_10246.hasCurrentObject ()) {
    GALGAS_string var_s_10265 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)).add_operation (GALGAS_string ("-section-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 278)) ;
    var_s_10265 = var_s_10265.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_10246.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 282)) ;
    var_s_10265 = var_s_10265.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_10246.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)) ;
    var_s_10265 = var_s_10265.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_10192.getter_string (SOURCE_FILE ("declaration-svc.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_10265, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 285)) ;
    enumerator_10246.gotoNextObject () ;
    index_10192.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 277)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 287)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)).add_operation (GALGAS_string ("-section-dispatcher-code.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 292)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 293)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generatePrimitiveAndServiceDispatcher'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePrimitiveAndServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                                    const GALGAS_string constinArgument_inTargetName,
                                                    GALGAS_string & ioArgument_ioAssemblerCode,
                                                    const GALGAS__32_stringlist constinArgument_inServiceList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_stringlist enumerator_11377 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_11347 ((uint32_t) 0) ;
  while (enumerator_11377.hasCurrentObject ()) {
    GALGAS_string var_s_11396 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
    var_s_11396 = var_s_11396.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_11377.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 306)) ;
    var_s_11396 = var_s_11396.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_11347.getter_string (SOURCE_FILE ("declaration-svc.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 307)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_11396, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 308)) ;
    enumerator_11377.gotoNextObject () ;
    index_11347.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 304)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 310)) ;
  cEnumerator__32_stringlist enumerator_11822 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_11782 ((uint32_t) 0) ;
  while (enumerator_11822.hasCurrentObject ()) {
    GALGAS_string var_s_11841 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 312)) ;
    var_s_11841 = var_s_11841.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_11822.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 313)) ;
    var_s_11841 = var_s_11841.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_11782.getter_string (SOURCE_FILE ("declaration-svc.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 314)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_11841, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 315)) ;
    enumerator_11822.gotoNextObject () ;
    index_11782.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 317)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'initSemanticAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initSemanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                   const GALGAS_lbigint constinArgument_inPriority,
                                   const GALGAS_mode constinArgument_inCurrentMode,
                                   const GALGAS_lstringlist constinArgument_inRequiredByProcList,
                                   const GALGAS_instructionListAST constinArgument_inInstructionListAST,
                                   const GALGAS_location constinArgument_inEndOfInitDeclaration,
                                   GALGAS_generationStruct & outArgument_outAnalysisStruct,
                                   GALGAS_instructionListIR & outArgument_outInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAnalysisStruct.drop () ; // Release 'out' argument
  outArgument_outInstructionGenerationList.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineNameForInvocationGraph_5614 = function_initNameForInvocationGraph (constinArgument_inSelfType, constinArgument_inPriority, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 138)) ;
  {
  ioArgument_ioTemporaries.mProperty_mInitRoutinePriorityMap.setter_insertKey (var_routineNameForInvocationGraph_5614, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 139)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_5614.mProperty_string COMMA_SOURCE_FILE ("declaration-init.galgas", 141)).operator_not (SOURCE_FILE ("declaration-init.galgas", 141)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_5614, var_routineNameForInvocationGraph_5614, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 142)) ;
    }
  }
  cEnumerator_lstringlist enumerator_6061 (constinArgument_inRequiredByProcList, kENUMERATION_UP) ;
  while (enumerator_6061.hasCurrentObject ()) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (enumerator_6061.current_mValue (HERE), var_routineNameForInvocationGraph_5614 COMMA_SOURCE_FILE ("declaration-init.galgas", 148)) ;
    }
    enumerator_6061.gotoNextObject () ;
  }
  GALGAS_unifiedSymbolMap var_variableMap_6377 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6437 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_initMode (SOURCE_FILE ("declaration-init.galgas", 156)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-init.galgas", 158)), var_variableMap_6377, var_universalMap_6437, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 154)) ;
  }
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 163)) ;
  outArgument_outAnalysisStruct = GALGAS_generationStruct::constructor_default (SOURCE_FILE ("declaration-init.galgas", 164)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_routineNameForInvocationGraph_5614, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6377, var_universalMap_6437, outArgument_outAnalysisStruct, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 165)) ;
  var_variableMap_6377.method_checkAutomatonStates (constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 181)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredProcedureDeclarationListAST enumerator_2388 (constinArgument_inAST.mProperty_mRequiredProcListAST, kENUMERATION_UP) ;
  while (enumerator_2388.hasCurrentObject ()) {
    GALGAS_lstring var_argumentSignature_2417 = extensionGetter_routineSignature (enumerator_2388.current (HERE).mProperty_mFormalArgumentList, enumerator_2388.current (HERE).mProperty_mName.getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
    const enumGalgasBool test_0 = extensionGetter_hasKey (constinArgument_inSemanticContext.mProperty_mRoutineMapForContext, enumerator_2388.current (HERE).mProperty_mName, var_argumentSignature_2417, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 65)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 65)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2388.current (HERE).mProperty_mName.getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 66)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_routineDescriptor var_routineDescriptor_2845 ;
      GALGAS_location var_routineLocation_2884 ;
      GALGAS_lstring joker_2794 ; // Joker input parameter
      extensionMethod_searchKey (constinArgument_inSemanticContext.mProperty_mRoutineMapForContext, enumerator_2388.current (HERE).mProperty_mName, var_argumentSignature_2417, joker_2794, var_routineDescriptor_2845, var_routineLocation_2884, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 68)) ;
      GALGAS_bool var_isExported_2913 = var_routineDescriptor_2845.mProperty_mExported ;
      GALGAS_mode var_mode_2958 = extensionGetter_executionMode (var_routineDescriptor_2845.mProperty_mRoutineKind, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 76)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_mode_2958.objectCompare (enumerator_2388.current (HERE).mProperty_mExecutionMode)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("required mode should be '").add_operation (extensionGetter_string (enumerator_2388.current (HERE).mProperty_mExecutionMode, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
      }
      GALGAS_bool test_4 = enumerator_2388.current (HERE).mProperty_mIsExported ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_isExported_2913.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 82)) ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 85))) ;
        inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)), fixItArray6  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 83)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_7 = var_isExported_2913 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = enumerator_2388.current (HERE).mProperty_mIsExported.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 86)) ;
        }
        const enumGalgasBool test_8 = test_7.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 88)), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 87)) ;
        }
      }
    }
    enumerator_2388.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'guardSemanticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_guardSemanticAnalysis (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                    const GALGAS_lstring constinArgument_inRoutineName,
                                    const GALGAS_routineFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                    const GALGAS_guardKind constinArgument_inGuardKind,
                                    const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                    const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                    const GALGAS_bool constinArgument_inWarnIfUnused,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 169)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 169)) ;
  }
  GALGAS_lstring var_guardMangledName_6153 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 168)) ;
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.getter_isNodeDefined (var_guardMangledName_6153.mProperty_string COMMA_SOURCE_FILE ("declaration-guard.galgas", 174)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 174)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_guardMangledName_6153, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
    }
  }
  GALGAS_unifiedSymbolMap var_variableMap_6738 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6798 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 183)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 185)), var_variableMap_6738, var_universalMap_6798, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_6860 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 189)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_6919 ;
  GALGAS_allocaList var_allocaList_6944 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 191)) ;
  GALGAS_instructionListIR var_instructionGenerationList_6996 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  switch (constinArgument_inGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_7099 = GALGAS_lstring::constructor_new (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), constinArgument_inRoutineName.mProperty_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_7181 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)) ;
      var_allocaList_6944.addAssign_operation (var_resultVarName_7099.mProperty_string, extensionGetter_llvmTypeName (var_resultType_7181.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
      {
      var_variableMap_6738.setter_insertOutputFormalArgument (var_resultVarName_7099, var_resultType_7181, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_resultType_7181, var_resultVarName_7099  COMMA_SOURCE_FILE ("declaration-guard.galgas", 203)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 199)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6738, var_formalArguments_6860, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 208)) ;
      }
      var_convenienceGuardGenerationIR_6919 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 214)) ;
      GALGAS_generationStruct var_generationStruct_7896 = GALGAS_generationStruct::constructor_default (SOURCE_FILE ("declaration-guard.galgas", 216)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 223)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_generationStruct_7896, var_instructionGenerationList_6996, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 217)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_9750 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_9750->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6738, var_formalArguments_6860, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 233)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 244)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_convenienceGuardGenerationIR_6919, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 240)) ;
      GALGAS_generationStruct var_generationStruct_9167 = GALGAS_generationStruct::constructor_default (SOURCE_FILE ("declaration-guard.galgas", 252)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 259)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_generationStruct_9167, var_instructionGenerationList_6996, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 253)) ;
    }
    break ;
  }
  var_variableMap_6738.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 270)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR.setter_insertKey (var_guardMangledName_6153, var_formalArguments_6860, constinArgument_inSelfType, var_convenienceGuardGenerationIR_6919, var_allocaList_6944, var_instructionGenerationList_6996, constinArgument_inWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 44)) ;
  GALGAS_lstring var_typeName_2042 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2042 COMMA_SOURCE_FILE ("expression-convert.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 54)) ;
  GALGAS_lstring var_typeName_2686 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2686 COMMA_SOURCE_FILE ("expression-convert.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@convertExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                    const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                    const GALGAS_bool constinArgument_inGuard,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                    GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                    GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4711 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4711, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 82)) ;
  GALGAS_objectIR var_expressionResult_4872 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4711, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 101)), var_expressionResult_4872, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 98)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).operator_not (SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 106)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_5077 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 109)) ;
  const enumGalgasBool test_2 = var_resultType_5077.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 111)).operator_not (SOURCE_FILE ("expression-convert.galgas", 111)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 112)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 112)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_expressionResult_4872, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 113)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 113)).operator_not (SOURCE_FILE ("expression-convert.galgas", 113)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 114)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_5472 ;
      GALGAS_bigint var_maxSource_5491 ;
      GALGAS_bool joker_5493_2 ; // Joker input parameter
      GALGAS_uint joker_5493_1 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4872, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).method_integer (var_minSource_5472, var_maxSource_5491, joker_5493_2, joker_5493_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)) ;
      GALGAS_bigint var_minTarget_5546 ;
      GALGAS_bigint var_maxTarget_5565 ;
      GALGAS_bool joker_5567_2 ; // Joker input parameter
      GALGAS_uint joker_5567_1 ; // Joker input parameter
      var_resultType_5077.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 117)).method_integer (var_minTarget_5546, var_maxTarget_5565, joker_5567_2, joker_5567_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 117)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5546.objectCompare (var_minSource_5472)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5565.objectCompare (var_maxSource_5491)) ;
      }
      GALGAS_bool var_alwaysPossible_5593 = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible_5593.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 120)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      }
      {
      routine_getNewTempVariable (var_resultType_5077, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 122)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4872  COMMA_SOURCE_FILE ("expression-convert.galgas", 124))  COMMA_SOURCE_FILE ("expression-convert.galgas", 124)) ;
      }else if (kBoolFalse == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4872, object->mProperty_mTypeName.mProperty_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 129))  COMMA_SOURCE_FILE ("expression-convert.galgas", 129)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                          extensionMethod_convertExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_analyzeExpression (defineExtensionMethod_convertExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@convertInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                                extensionMethod_convertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_enterAccessibleEntities (defineExtensionMethod_convertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@convertInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  GALGAS_uint var_staticStringIndex_7534 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 166)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 166)), var_staticStringIndex_7534, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)) ;
  }
  GALGAS_string var_lbl_7548 = object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).getter_string (SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GALGAS_string var_convertMinOkLabel_7609 = GALGAS_string ("min.").add_operation (var_lbl_7548, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GALGAS_string var_convertMaxOkLabel_7656 = GALGAS_string ("max.").add_operation (var_lbl_7548, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GALGAS_string var_convertFailLabel_7702 = GALGAS_string ("fail.").add_operation (var_lbl_7548, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GALGAS_string var_compareMinVar_7739 = GALGAS_string ("cmp.").add_operation (var_lbl_7548, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  GALGAS_string var_compareMaxVar_7787 = GALGAS_string ("cmp.").add_operation (var_lbl_7548, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  GALGAS_bigint var_minTarget_7860 ;
  GALGAS_bigint var_maxTarget_7879 ;
  GALGAS_bool joker_7881_2 ; // Joker input parameter
  GALGAS_uint joker_7881_1 ; // Joker input parameter
  extensionGetter_kind (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).method_integer (var_minTarget_7860, var_maxTarget_7879, joker_7881_2, joker_7881_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  GALGAS_bigint var_minSource_7930 ;
  GALGAS_bool var_operandIsUnsigned_7969 ;
  GALGAS_bigint joker_7936 ; // Joker input parameter
  GALGAS_uint joker_7971_1 ; // Joker input parameter
  extensionGetter_kind (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).method_integer (var_minSource_7930, joker_7936, var_operandIsUnsigned_7969, joker_7971_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  GALGAS_string var_operandType_7992 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_7860.objectCompare (var_minSource_7930)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7739, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned_7969.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7992, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_minTarget_7860.getter_string (SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7739, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertMinOkLabel_7609, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertFailLabel_7702, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7609.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7787, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_7969.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7992, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_maxTarget_7879.getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7787, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertMaxOkLabel_7656, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertFailLabel_7702, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7702.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_7534.getter_string (SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_string (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7656.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_operandType_7992, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                            extensionMethod_convertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_llvmInstructionCode (defineExtensionMethod_convertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 44)) ;
  GALGAS_lstring var_typeName_2038 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2038 COMMA_SOURCE_FILE ("expression-extend.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 54)) ;
  GALGAS_lstring var_typeName_2681 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2681 COMMA_SOURCE_FILE ("expression-extend.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@extendExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                   const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                   const GALGAS_bool constinArgument_inGuard,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                   GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4705 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4705, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 82)) ;
  GALGAS_objectIR var_expressionResult_4866 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4705, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 101)), var_expressionResult_4866, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4907 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
  const enumGalgasBool test_0 = var_resultType_4907.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 107)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 107)).operator_not (SOURCE_FILE ("expression-extend.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 108)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-extend.galgas", 108)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4866, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 109)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 109)).operator_not (SOURCE_FILE ("expression-extend.galgas", 109)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 110)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned_5328 ;
      GALGAS_uint var_sourceSize_5353 ;
      GALGAS_bigint joker_5289 ; // Joker input parameter
      GALGAS_bigint joker_5296 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4866, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 112)).method_integer (joker_5289, joker_5296, var_sourceIsUnsigned_5328, var_sourceSize_5353, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 112)) ;
      GALGAS_bool var_targetIsUnsigned_5430 ;
      GALGAS_uint var_targetSize_5455 ;
      GALGAS_bigint joker_5391 ; // Joker input parameter
      GALGAS_bigint joker_5398 ; // Joker input parameter
      var_resultType_4907.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)).method_integer (joker_5391, joker_5398, var_targetIsUnsigned_5430, var_targetSize_5455, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)) ;
      GALGAS_bool test_4 = var_sourceIsUnsigned_5328 ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_targetIsUnsigned_5430 ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sourceSize_5353.objectCompare (var_targetSize_5455)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 116)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 116)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_sourceSize_5353.objectCompare (var_targetSize_5455)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 118)), GALGAS_string ("same size: useless extend operation"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 118)) ;
          }
        }
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_10 = var_sourceIsUnsigned_5328 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          test_10 = var_targetIsUnsigned_5430.operator_not (SOURCE_FILE ("expression-extend.galgas", 120)) ;
        }
        const enumGalgasBool test_11 = test_10.boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_5353.objectCompare (var_targetSize_5455)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 122)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray13  COMMA_SOURCE_FILE ("expression-extend.galgas", 122)) ;
          }
        }else if (kBoolFalse == test_11) {
          GALGAS_bool test_14 = var_sourceIsUnsigned_5328.operator_not (SOURCE_FILE ("expression-extend.galgas", 124)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = var_targetIsUnsigned_5430 ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 125)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray16  COMMA_SOURCE_FILE ("expression-extend.galgas", 125)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_sourceSize_5353.objectCompare (var_targetSize_5455)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 128)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 128)) ;
            }else if (kBoolFalse == test_17) {
              const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_sourceSize_5353.objectCompare (var_targetSize_5455)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 130)), GALGAS_string ("same size: useless extend operation"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 130)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType_4907, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 133)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 133)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4866, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                          extensionMethod_extendExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_analyzeExpression (defineExtensionMethod_extendExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inConstantName,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 44)) ;
  GALGAS_lstring var_typeName_2046 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2046 COMMA_SOURCE_FILE ("expression-truncate.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 54)) ;
  GALGAS_lstring var_typeName_2691 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2691 COMMA_SOURCE_FILE ("expression-truncate.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@truncateExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_bool constinArgument_inGuard,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4711 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-truncate.galgas", 87)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4711, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 82)) ;
  GALGAS_objectIR var_expressionResult_4872 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4711, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 101)), var_expressionResult_4872, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4913 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 105)) ;
  const enumGalgasBool test_0 = var_resultType_4913.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 107)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 108)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-truncate.galgas", 108)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4872, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 109)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 109)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 109)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 110)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource_5308 ;
      GALGAS_bigint var_maxSource_5327 ;
      GALGAS_uint var_expSize_5361 ;
      GALGAS_bool joker_5338 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4872, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).method_integer (var_minSource_5308, var_maxSource_5327, joker_5338, var_expSize_5361, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)) ;
      GALGAS_bigint var_minTarget_5412 ;
      GALGAS_bigint var_maxTarget_5431 ;
      GALGAS_uint var_resultSize_5468 ;
      GALGAS_bool joker_5442 ; // Joker input parameter
      var_resultType_4913.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)).method_integer (var_minTarget_5412, var_maxTarget_5431, joker_5442, var_resultSize_5468, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)) ;
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5412.objectCompare (var_minSource_5308)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5431.objectCompare (var_maxSource_5327)) ;
      }
      GALGAS_bool var_alwaysPossible_5492 = test_4 ;
      const enumGalgasBool test_5 = var_alwaysPossible_5492.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 116)), GALGAS_string ("useless explicit conversion"), fixItArray6  COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, var_resultSize_5468.objectCompare (var_expSize_5361)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        routine_getNewTempVariable (var_resultType_4913, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 119)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4872  COMMA_SOURCE_FILE ("expression-truncate.galgas", 120))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 120)) ;
      }else if (kBoolFalse == test_7) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4872, var_resultType_4913, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 125)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                          extensionMethod_truncateExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_analyzeExpression (defineExtensionMethod_truncateExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@truncateInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                           GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                                extensionMethod_truncateInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_enterAccessibleEntities (defineExtensionMethod_truncateInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@truncateInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateInstructionIR * object = (const cPtr_truncateInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncateInstructionIR) ;
  GALGAS_string var_operandType_7174 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (var_operandType_7174, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 158)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                            extensionMethod_truncateInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_llvmInstructionCode (defineExtensionMethod_truncateInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@constructorCall addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName_2058 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName_2058 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 50)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                             extensionMethod_constructorCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_addDependenceEdgeForStaticExpression (defineExtensionMethod_constructorCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@constructorCall noteExpressionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName_2649 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 58)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2649 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 59)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                             extensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@constructorCall analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_3984 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType_3984 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType_3984 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_3984.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorValue var_initValue_4309 ;
    constinArgument_inContext.mProperty_mConstructorMap.method_searchKey (var_resultType_3984.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 92)), var_initValue_4309, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
    switch (var_initValue_4309.enumValue ()) {
    case GALGAS_constructorValue::kNotBuilt:
      break ;
    case GALGAS_constructorValue::kEnum_zero:
      {
        outArgument_outResult = GALGAS_objectIR::constructor_zero (var_resultType_3984  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
      }
      break ;
    case GALGAS_constructorValue::kEnum_simple:
      {
        const cEnumAssociatedValues_constructorValue_simple * extractPtr_4658 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4309.unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_4658->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 97)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (var_resultType_3984.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_3984, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
        }
      }
      break ;
    case GALGAS_constructorValue::kEnum_structure:
      {
        const cEnumAssociatedValues_constructorValue_structure * extractPtr_6646 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4309.unsafePointer ()) ;
        const GALGAS_constructorSignature extractedValue_constructorSignature = extractPtr_6646->mAssociatedValue0 ;
        const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_6646->mAssociatedValue1 ;
        GALGAS_sortedOperandIRList var_sortedOperandIRList_4750 = extractedValue_sortedOperandList ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 104)).objectCompare (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 104)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 106)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 105)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 106)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 107)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107)), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          cEnumerator_constructorSignature enumerator_5157 (extractedValue_constructorSignature, kENUMERATION_UP) ;
          cEnumerator_functionCallEffectiveParameterList enumerator_5190 (object->mProperty_mParameterList, kENUMERATION_UP) ;
          while (enumerator_5157.hasCurrentObject () && enumerator_5190.hasCurrentObject ()) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_5190.current_mSelector (HERE).mProperty_string.objectCompare (enumerator_5157.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_5190.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 112)), GALGAS_string ("the selector should be '!").add_operation (enumerator_5157.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)), fixItArray10  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)) ;
            }
            GALGAS_objectIR var_expressionResult_6064 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5190.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, enumerator_5157.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_expressionResult_6064, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
            GALGAS_objectIR var_result_6097 = function_checkAssignmentCompatibility (var_expressionResult_6064, enumerator_5157.current_mType (HERE), enumerator_5190.current_mSelector (HERE).mProperty_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
            var_sortedOperandIRList_4750.addAssign_operation (var_result_6097, enumerator_5157.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 136)) ;
            enumerator_5157.gotoNextObject () ;
            enumerator_5190.gotoNextObject () ;
          }
          GALGAS_operandIRList var_initialValueList_6432 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 138)) ;
          cEnumerator_sortedOperandIRList enumerator_6489 (var_sortedOperandIRList_4750, kENUMERATION_UP) ;
          while (enumerator_6489.hasCurrentObject ()) {
            var_initialValueList_6432.addAssign_operation (enumerator_6489.current_mOperand (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 140)) ;
            enumerator_6489.gotoNextObject () ;
          }
          outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureConstant (var_resultType_3984, var_initialValueList_6432  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
        }
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                          extensionMethod_constructorCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_analyzeExpression (defineExtensionMethod_constructorCall_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typedConstantCall addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                             extensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_addDependenceEdgeForStaticExpression (defineExtensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typedConstantCall noteExpressionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                             extensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typedConstantCall analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                 const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                 const GALGAS_bool /* constinArgument_inGuard */,
                                                                 const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                 GALGAS_generationStruct & /* ioArgument_ioGenerationStruct */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredResultType_4015 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_4015 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_4015 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 81)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_4015.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-typed-constant.galgas", 83)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 84)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_classConstantMap var_classConstantMap_4323 = extensionGetter_classConstantMap (var_inferredResultType_4015, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 86)) ;
    var_classConstantMap_4323.method_searchKey (object->mProperty_mConstructorName, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 87)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                          extensionMethod_typedConstantCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_analyzeExpression (defineExtensionMethod_typedConstantCall_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@ifExpressionAST addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 54)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@ifExpressionAST noteExpressionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 65)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@ifExpressionAST analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_objectIR var_ifExpressionResult_5042 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5042, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 90)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_ifExpressionResult_5042, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 107)).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 107)).operator_not (SOURCE_FILE ("expression-if.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 108)) ;
  }
  GALGAS_objectIR var_thenExpressionTempResult_5838 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_5838, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 111)) ;
  GALGAS_objectIR var_thenExpressionResult_5869 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_5838, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 127)) ;
  GALGAS_objectIR var_elseExpressionTempResult_6683 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_6683, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 134)) ;
  GALGAS_objectIR var_elseExpressionResult_6714 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_6683, extensionGetter_type (var_thenExpressionResult_5869, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 152)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 150)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_5042, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 157)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_7081 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_7062_1 ; // Joker input parameter
    var_ifExpressionResult_5042.method_literalInteger (joker_7062_1, var_value_7081, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 158)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_7081.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 159)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_5869 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_6714 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (extensionGetter_type (var_elseExpressionResult_6714, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 161)), object->mProperty_mIfExpressionEndLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 161)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_5042, var_thenExpressionResult_5869, var_elseExpressionResult_6714, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                          extensionMethod_ifExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeExpression (defineExtensionMethod_ifExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@infixOperatorExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 55)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 65)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@infixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 74)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 81)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@infixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                          const GALGAS_bool constinArgument_inGuard,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                          GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_objectIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_objectIR var_leftOperandPossibleReference_6286 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_leftOperandPossibleReference_6286, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 131)) ;
  GALGAS_objectIR var_leftOperand_6445 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_6286, object->mProperty_mOperatorLocation, var_leftOperand_6445, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 147)) ;
  }
  GALGAS_objectIR var_rightOperandPossibleReference_7088 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_6445, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 159)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_rightOperandPossibleReference_7088, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 154)) ;
  GALGAS_objectIR var_rightOperand_7249 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_7088, object->mProperty_mOperatorLocation, var_rightOperand_7249, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 170)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap_7311 = function_getInfixOperatorMap (object->mProperty_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 177)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_7618 ;
  GALGAS_infixOperatorDescription var_binaryOperator_7671 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_7311, extensionGetter_type (var_leftOperand_6445, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 180)), extensionGetter_type (var_rightOperand_7249, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 181)), object->mProperty_mOperatorLocation, var_resultType_7618, var_binaryOperator_7671, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 179)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_7671.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_6445, object->mProperty_mOperatorLocation, var_rightOperand_7249, var_resultType_7618, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                          extensionMethod_infixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap function_getInfixOperatorMap (const GALGAS_infixOperator & constinArgument_inOp,
                                                      const GALGAS_semanticContext & constinArgument_inContext,
                                                      const GALGAS_mode & constinArgument_inCurrentMode,
                                                      const GALGAS_location & constinArgument_inOperatorLocation,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result_outOperatorMap ; // Returned variable
  switch (constinArgument_inOp.enumValue ()) {
  case GALGAS_infixOperator::kNotBuilt:
    break ;
  case GALGAS_infixOperator::kEnum_equal:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mNonEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mStrictInfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mInfEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mStrictSupOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mSupEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mAndOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mOrOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mBooleanXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 230)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_2) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mAddOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 241)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_5) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mSubOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 252)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_8) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mMulOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 263)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_11) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_11) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mDivOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 274)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_14) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mModOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mModNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mLeftShiftOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mRightShiftOperatorMap ;
    }
    break ;
  }
//---
  return result_outOperatorMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_getInfixOperatorMap [5] = {
  & kTypeDescriptor_GALGAS_infixOperator,
  & kTypeDescriptor_GALGAS_semanticContext,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_getInfixOperatorMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_infixOperator operand0 = GALGAS_infixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                             inCompiler
                                                                             COMMA_THERE) ;
  const GALGAS_semanticContext operand1 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  const GALGAS_mode operand2 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_location operand3 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_getInfixOperatorMap (operand0,
                                       operand1,
                                       operand2,
                                       operand3,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_getInfixOperatorMap ("getInfixOperatorMap",
                                                                     functionWithGenericHeader_getInfixOperatorMap,
                                                                     & kTypeDescriptor_GALGAS_infixOperatorMap,
                                                                     4,
                                                                     functionArgs_getInfixOperatorMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                           GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                                           GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList_12292 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 310)) ;
  GALGAS_objectIR var_leftOperandPossibleReference_12890 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_leftInstructionGenerationList_12292, var_leftOperandPossibleReference_12890, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 311)) ;
  GALGAS_objectIR var_leftOperand_13049 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_12890, object->mProperty_mOperatorLocation, var_leftOperand_13049, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 327)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_13137 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 334)) ;
  GALGAS_objectIR var_rightOperandPossibleReference_13736 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_13049, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 340)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_rightInstructionGenerationList_13137, var_rightOperandPossibleReference_13736, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 335)) ;
  GALGAS_objectIR var_rightOperand_13897 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_13736, object->mProperty_mOperatorLocation, var_rightOperand_13897, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 351)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_leftOperand_13049, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 358)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 358)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 359)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_rightOperand_13897, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 362)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 362)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 363)) ;
  }
  {
  routine_getNewTempVariable (constinArgument_inContext.mProperty_mBooleanType, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 366)) ;
  }
  {
  extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_13049, var_leftInstructionGenerationList_12292, var_rightOperand_13897, var_rightInstructionGenerationList_13137, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 368)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                          extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                           GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_3684 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_3684, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 60)) ;
  GALGAS_objectIR var_expressionResult_3853 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_3684, object->mProperty_mOperatorLocation, var_expressionResult_3853, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 76)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_3949 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_3987 ;
  GALGAS_objectIR var_leftOperand_4011 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_3949 = constinArgument_inContext.mProperty_mUnsignedComplementOperatorMap ;
      var_binaryOperator_3987 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 89)) ;
      switch (extensionGetter_kind (var_expressionResult_3853, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 92)) ;
          var_leftOperand_4011.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 94)) ;
          var_leftOperand_4011.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96)) ;
          var_leftOperand_4011.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 98)) ;
          var_leftOperand_4011.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100)) ;
          var_leftOperand_4011.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 102)) ;
          var_leftOperand_4011.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 104)) ;
          var_leftOperand_4011.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 106)) ;
          var_leftOperand_4011.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 108)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray9  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)) ;
            var_leftOperand_4011.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_8) {
            const enumGalgasBool test_10 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 110)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 110)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_bigint var_minTarget_5203 ;
              GALGAS_bigint var_maxTarget_5222 ;
              GALGAS_bool joker_5224_2 ; // Joker input parameter
              GALGAS_uint joker_5224_1 ; // Joker input parameter
              constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)).method_integer (var_minTarget_5203, var_maxTarget_5222, joker_5224_2, joker_5224_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)) ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_minTarget_5203.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray12  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113)) ;
                var_leftOperand_4011.drop () ; // Release error dropped variable
              }else if (kBoolFalse == test_11) {
                var_leftOperand_4011 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, var_maxTarget_5222  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)) ;
              }
            }else if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118)) ;
              var_leftOperand_4011.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_5783 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_3853, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5783->mAssociatedValue3 ;
          var_leftOperand_4011 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_3949 = constinArgument_inContext.mProperty_mNotOperatorMap ;
      var_binaryOperator_3987 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 125)) ;
      var_leftOperand_4011 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_3949 = constinArgument_inContext.mProperty_mUnaryMinusOperatorMap ;
      var_binaryOperator_3987 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 129)) ;
      var_leftOperand_4011 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 130))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 130)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_3949 = constinArgument_inContext.mProperty_mUnaryMinusOperatorMap ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 133)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)), fixItArray15  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 134)) ;
      }
      const enumGalgasBool test_16 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_16) {
        var_binaryOperator_3987 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 138)) ;
        var_leftOperand_4011 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)) ;
      }else if (kBoolFalse == test_16) {
        var_binaryOperator_3987 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 141)) ;
        var_leftOperand_4011 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_3949.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_key (var_expressionResult_3853, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_6844 = extensionGetter_type (var_expressionResult_3853, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147)) ;
  const enumGalgasBool test_17 = var_expressionResult_3853.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 149)).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_bigint var_value_6987 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_6960_1 ; // Joker input parameter
    var_expressionResult_3853.method_literalInteger (joker_6960_1, var_value_6987, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 150)) ;
    GALGAS_bigint var_result_7007 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_7007 = var_value_6987.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 154)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 156)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray19  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 157)) ;
          var_result_7007.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_18) {
          const enumGalgasBool test_20 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 158)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_bigint var_minTarget_7378 ;
            GALGAS_bigint var_maxTarget_7397 ;
            GALGAS_bool joker_7399_2 ; // Joker input parameter
            GALGAS_uint joker_7399_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159)).method_integer (var_minTarget_7378, var_maxTarget_7397, joker_7399_2, joker_7399_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159)) ;
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictInf, var_minTarget_7378.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160)))).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray22  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 161)) ;
              var_result_7007.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_21) {
              var_result_7007 = var_value_6987.operator_xor (var_maxTarget_7397 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
            }
          }else if (kBoolFalse == test_20) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray23  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 166)) ;
            var_result_7007.drop () ; // Release error dropped variable
          }
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_7007 = var_value_6987.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 169)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_7007 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)).operator_xor (var_value_6987 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6844, var_result_7007  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 173)) ;
  }else if (kBoolFalse == test_17) {
    {
    routine_getNewTempVariable (var_resultType_6844, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 176)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 180)), object->mProperty_mOperatorLocation, var_leftOperand_4011, var_binaryOperator_3987, var_expressionResult_3853, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 178)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                          extensionMethod_prefixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_generationStruct & /* ioArgument_ioGenerationStruct */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, object->mProperty_mLiteralInteger.mProperty_bigint  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                          extensionMethod_literalIntegerInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeExpression (defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inConstantName,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.mProperty_location  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@literalStringInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                            const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                            const GALGAS_bool /* constinArgument_inGuard */,
                                                                            const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                            GALGAS_generationStruct & /* ioArgument_ioGenerationStruct */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_3783 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)) ;
  GALGAS_uint var_staticStringIndex_3973 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.mProperty_string, var_staticStringIndex_3973, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 66)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (var_type_3783, object->mProperty_mLiteralString.mProperty_string.getter_length (SOURCE_FILE ("expression-literal-string.galgas", 67)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 67)), var_staticStringIndex_3973  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                          extensionMethod_literalStringInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpression (defineExtensionMethod_literalStringInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_generationStruct & /* ioArgument_ioGenerationStruct */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mValue.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 72)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mBooleanType, temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                          extensionMethod_literalBooleanInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_analyzeExpression (defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  cEnumerator_registerIntegerFieldListAST enumerator_3082 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_3082.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3082.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 70)) ;
    enumerator_3082.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@registerConstantExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                             const GALGAS_bool constinArgument_inGuard,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                             GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                             GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_4461 ;
  GALGAS_sliceMap var_registerBitSliceMap_4521 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4572 ;
  GALGAS_bigint var_registerAddress_4612 ;
  GALGAS_uint var_registerBitCount_4645 ;
  GALGAS_uint var_powerOfTwoForArraySize_4684 ;
  GALGAS_uint var_elementArraySize_4717 ;
  GALGAS_bool joker_4467 ; // Joker input parameter
  GALGAS_bool joker_4474 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4618 ; // Joker input parameter
  constinArgument_inContext.mProperty_mControlRegisterMap.method_searchKey (object->mProperty_mRegisterName, var_registerType_4461, joker_4467, joker_4474, var_registerBitSliceMap_4521, var_registerFieldMap_4572, var_registerAddress_4612, joker_4618, var_registerBitCount_4645, var_powerOfTwoForArraySize_4684, var_elementArraySize_4717, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 95)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4829 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 109)) ;
  cEnumerator_lstringlist enumerator_4871 (object->mProperty_mMaskFieldNames, kENUMERATION_UP) ;
  while (enumerator_4871.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_4954 ;
    GALGAS_uint var_fieldBitCount_4985 ;
    var_registerFieldMap_4572.method_searchKey (enumerator_4871.current_mValue (HERE), var_fieldBitIndex_4954, var_fieldBitCount_4985, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 111)) ;
    GALGAS_bigint var_mask_5004 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)).left_shift_operation (var_fieldBitCount_4985 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)) ;
    var_accumulatedFieldStaticValues_4829 = var_accumulatedFieldStaticValues_4829.operator_or (var_mask_5004.left_shift_operation (var_fieldBitIndex_4954 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 117)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 117)) ;
    enumerator_4871.gotoNextObject () ;
  }
  GALGAS_operandList var_operandList_5228 = GALGAS_operandList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 120)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_5297 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_5297.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_5380 ;
    GALGAS_uint var_fieldBitCount_5411 ;
    var_registerFieldMap_4572.method_searchKey (enumerator_5297.current_mFieldName (HERE), var_fieldBitIndex_5380, var_fieldBitCount_5411, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 122)) ;
    GALGAS_objectIR var_expressionResult_6032 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5297.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-cst-registre.galgas", 133)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_expressionResult_6032, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 128)) ;
    switch (extensionGetter_kind (var_expressionResult_6032, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 145)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_arrayType:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray0  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 157)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_pointer:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_bigint var_value_7061 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_7034_1 ; // Joker input parameter
        var_expressionResult_6032.method_literalInteger (joker_7034_1, var_value_7061, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)) ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_value_7061.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 165)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_value_7061.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)).left_shift_operation (var_fieldBitCount_5411 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            var_accumulatedFieldStaticValues_4829 = var_accumulatedFieldStaticValues_4829.operator_or (var_value_7061.left_shift_operation (var_fieldBitIndex_5380 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)).left_shift_operation (var_fieldBitCount_5411 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) ;
          }
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_9277 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_6032, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 145)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_min = extractPtr_9277->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_max = extractPtr_9277->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_9277->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_expressionBitCount = extractPtr_9277->mAssociatedValue3 ;
        const enumGalgasBool test_12 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 172)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)) ;
        }else if (kBoolFalse == test_12) {
          GALGAS_bool test_14 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5411)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 175)) ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_5297.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_5411.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)), fixItArray16  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 176)) ;
          }
          GALGAS_bool test_17 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5411)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)) ;
          }
          GALGAS_bool test_18 = test_17 ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 180)) ;
          }
          const enumGalgasBool test_19 = test_18.boolEnum () ;
          if (kBoolTrue == test_19) {
            {
            extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_6032, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)).left_shift_operation (var_fieldBitCount_5411 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)), GALGAS_uint ((uint32_t) 8U), enumerator_5297.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 181)) ;
            }
          }
          GALGAS_objectIR var_partialResult_8376 = var_expressionResult_6032 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4645)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_objectIR var_extendedResult_8549 ;
            {
            routine_getNewTempVariable (var_registerType_4461, enumerator_5297.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_extendedResult_8549, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 191)) ;
            }
            {
            extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_8549, var_partialResult_8376, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 192)) ;
            }
            var_partialResult_8376 = var_extendedResult_8549 ;
          }else if (kBoolFalse == test_20) {
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4645)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_objectIR var_truncatedResult_8835 ;
              {
              routine_getNewTempVariable (var_registerType_4461, enumerator_5297.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_truncatedResult_8835, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 195)) ;
              }
              {
              extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_8835, var_partialResult_8376, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 196)) ;
              }
              var_partialResult_8376 = var_truncatedResult_8835 ;
            }
          }
          GALGAS_objectIR var_shiftedResult_9103 ;
          {
          routine_getNewTempVariable (var_registerType_4461, enumerator_5297.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_shiftedResult_9103, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 200)) ;
          }
          {
          extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9103, var_partialResult_8376, var_fieldBitIndex_5380, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 201)) ;
          }
          var_operandList_5228.addAssign_operation (var_shiftedResult_9103  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 203)) ;
        }
      }
      break ;
    }
    enumerator_5297.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4461, var_accumulatedFieldStaticValues_4829  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 208)) ;
  cEnumerator_operandList enumerator_9472 (var_operandList_5228, kENUMERATION_UP) ;
  while (enumerator_9472.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_9559 ;
    {
    routine_getNewTempVariable (var_registerType_4461, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 210)), ioArgument_ioTemporaries, var_newResult_9559, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_9559, extensionGetter_type (var_newResult_9559, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 216)), enumerator_9472.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)) ;
    }
    outArgument_outResult = var_newResult_9559 ;
    enumerator_9472.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                          extensionMethod_registerConstantExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_analyzeExpression (defineExtensionMethod_registerConstantExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inConstantName,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mObjectName COMMA_SOURCE_FILE ("expression-primary.galgas", 161)) ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_6073 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_6073.hasCurrentObject ()) {
    switch (enumerator_6073.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_6137 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_6073.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6137->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_6282 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_6073.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_6282->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 166)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6832 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_6073.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_6832->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_6368 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_6368.hasCurrentObject ()) {
          switch (enumerator_6368.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6622 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_6368.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_6622->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_6735 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_6368.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_6735->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 175)) ;
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
            {
            }
            break ;
          }
          enumerator_6368.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_6073.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_7361 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_7361.hasCurrentObject ()) {
    switch (enumerator_7361.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_7425 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_7361.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7425->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_7554 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_7361.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_7554->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 193)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_8088 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_7361.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_8088->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_7640 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_7640.hasCurrentObject ()) {
          switch (enumerator_7640.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_7894 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_7640.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_7894->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 200)) COMMA_SOURCE_FILE ("expression-primary.galgas", 200)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7991 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_7640.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_7991->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 202)) ;
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
            {
            }
            break ;
          }
          enumerator_7640.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7361.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@primaryInExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                      const GALGAS_bool constinArgument_inGuard,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                      GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_objectIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_objectIR var_currentPointer_9364 ;
  GALGAS_string var_globalVariableReceiverName_9401 ;
  switch (object->mProperty_mSelfAccess.enumValue ()) {
  case GALGAS_primaryInExpressionSelfAccessAST::kNotBuilt:
    break ;
  case GALGAS_primaryInExpressionSelfAccessAST::kEnum_noSelfAccess:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 237)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 237)) ;
        var_currentPointer_9364.drop () ; // Release error dropped variable
        var_globalVariableReceiverName_9401.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_2 = ioArgument_ioVariableMap.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 238)) COMMA_SOURCE_FILE ("expression-primary.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_unifiedTypeMap_2D_proxy joker_9708_2 ; // Joker input parameter
          GALGAS_bool joker_9708_1 ; // Joker input parameter
          GALGAS_bool joker_9753_2 ; // Joker input parameter
          GALGAS_bool joker_9753_1 ; // Joker input parameter
          ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mObjectName, joker_9708_2, joker_9708_1, var_currentPointer_9364, joker_9753_2, joker_9753_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 239)) ;
          }
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = var_currentPointer_9364.getter_isGlobalVariableReference (SOURCE_FILE ("expression-primary.galgas", 244)).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = object->mProperty_mObjectName.mProperty_string ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          var_globalVariableReceiverName_9401 = temp_3 ;
        }else if (kBoolFalse == test_2) {
          var_currentPointer_9364 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("expression-primary.galgas", 246)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 246)) ;
          var_globalVariableReceiverName_9401 = GALGAS_string::makeEmptyString () ;
        }
      }
    }
    break ;
  case GALGAS_primaryInExpressionSelfAccessAST::kEnum_selfAccess:
    {
      const cEnumAssociatedValues_primaryInExpressionSelfAccessAST_selfAccess * extractPtr_11009 = (const cEnumAssociatedValues_primaryInExpressionSelfAccessAST_selfAccess *) (object->mProperty_mSelfAccess.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_11009->mAssociatedValue0 ;
      var_globalVariableReceiverName_9401 = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 251)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 252)) ;
        var_currentPointer_9364.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_7 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 253)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 253)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_propertyMap var_structureObjectMap_10379 ;
          GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_10410 ;
          GALGAS_lstring joker_10342 ; // Joker input parameter
          GALGAS_propertyList joker_10412_2 ; // Joker input parameter
          GALGAS_uint joker_10412_1 ; // Joker input parameter
          constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 254)).method_structure (joker_10342, var_structureObjectMap_10379, var_universalMap_10410, joker_10412_2, joker_10412_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 254)) ;
          const enumGalgasBool test_8 = var_structureObjectMap_10379.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 255)) COMMA_SOURCE_FILE ("expression-primary.galgas", 255)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_objectIR var_object_10566 ;
            GALGAS_bool joker_10543 ; // Joker input parameter
            var_structureObjectMap_10379.method_searchKey (object->mProperty_mObjectName, joker_10543, var_object_10566, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 256)) ;
            {
            routine_handleSelfAccessInExpression (constinArgument_inSelfType, var_object_10566, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_currentPointer_9364, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 261)) ;
            }
          }else if (kBoolFalse == test_8) {
            var_currentPointer_9364 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 269)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 269)) ;
          }
        }else if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 272)) ;
          var_currentPointer_9364.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_11062 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_11062.hasCurrentObject ()) {
    switch (enumerator_11062.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_11664 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_11062.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_11664->mAssociatedValue0 ;
        {
        routine_handlePropertyInExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioGenerationStruct, extractedValue_propertyName, ioArgument_ioInstructionGenerationList, var_currentPointer_9364, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 279)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_12352 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_11062.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_12352->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_12352->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, extractedValue_indexExpression, extractedValue_endOfIndex, ioArgument_ioInstructionGenerationList, var_currentPointer_9364, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 295)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_13296 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_11062.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_13296->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_13296->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_returnedType_13149 ;
        {
        routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_9401, GALGAS_bool (false), constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, var_currentPointer_9364, var_returnedType_13149, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 313)) ;
        }
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedType_13149.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 333)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("the function cannot be called in expression: no return value"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 334)) ;
        }
      }
      break ;
    }
    enumerator_11062.gotoNextObject () ;
  }
  outArgument_outResult = var_currentPointer_9364 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                          extensionMethod_primaryInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzeExpression (defineExtensionMethod_primaryInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInExpression'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                           const GALGAS_objectIR constinArgument_inObject,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           GALGAS_objectIR & outArgument_outObjectPtr,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectPtr.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 350)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_13766 ;
    GALGAS_lstring var_name_13784 ;
    GALGAS_uint var_index_13801 ;
    constinArgument_inObject.method_property (var_type_13766, var_name_13784, var_index_13801, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 351)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_13766, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 354)), var_name_13784.getter_location (SOURCE_FILE ("expression-primary.galgas", 354))  COMMA_SOURCE_FILE ("expression-primary.galgas", 354)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 355)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 352)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_13784.getter_string (SOURCE_FILE ("expression-primary.galgas", 362)), var_index_13801, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 359)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-primary.galgas", 366)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 366)) ;
    outArgument_outObjectPtr.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (GALGAS_objectIR & ioArgument_ioObject,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_objectIR constinArgument_inProperty,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inProperty.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 379)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_14661 ;
    GALGAS_lstring var_name_14679 ;
    GALGAS_uint var_index_14696 ;
    constinArgument_inProperty.method_property (var_type_14661, var_name_14679, var_index_14696, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 380)) ;
    GALGAS_objectIR var_newObject_14715 = GALGAS_objectIR::constructor_temporaryReference (var_type_14661, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 383)), var_name_14679.getter_location (SOURCE_FILE ("expression-primary.galgas", 383))  COMMA_SOURCE_FILE ("expression-primary.galgas", 383)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 384)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 381)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 387)) ;
    {
    extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_14715, ioArgument_ioObject, var_name_14679.getter_string (SOURCE_FILE ("expression-primary.galgas", 391)), var_index_14696.getter_string (SOURCE_FILE ("expression-primary.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 388)) ;
    }
    ioArgument_ioObject = var_newObject_14715 ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 396)) ;
    ioArgument_ioObject.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'handlePropertyInExpression'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyInExpression (const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                         const GALGAS_bool /* constinArgument_inGuard */,
                                         const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode /* constinArgument_inCurrentMode */,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                         GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                         GALGAS_generationStruct & /* ioArgument_ioGenerationStruct */,
                                         const GALGAS_lstring constinArgument_inPropertyName,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_objectIR & ioArgument_ioObjectPtr,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 418)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 418)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 418)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_16154 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_16185 ;
    GALGAS_lstring joker_16117 ; // Joker input parameter
    GALGAS_propertyList joker_16187_2 ; // Joker input parameter
    GALGAS_uint joker_16187_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 419)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 419)).method_structure (joker_16117, var_structureObjectMap_16154, var_universalMap_16185, joker_16187_2, joker_16187_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 419)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_16154.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 420)) COMMA_SOURCE_FILE ("expression-primary.galgas", 420)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_16321 ;
      GALGAS_bool joker_16300 ; // Joker input parameter
      var_structureObjectMap_16154.method_searchKey (constinArgument_inPropertyName, joker_16300, var_property_16321, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 421)) ;
      {
      routine_handlePropertyAccessInExpression (ioArgument_ioObjectPtr, constinArgument_inPropertyName.mProperty_location, var_property_16321, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 422)) ;
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObjectPtr, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("expression-primary.galgas", 430)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 433)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 433)).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 433)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_sliceMap var_sliceMap_16719 = extensionGetter_sliceMap (ioArgument_ioObjectPtr, constinArgument_inPropertyName.mProperty_location, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 434)) ;
      GALGAS_objectIR var_loadedRegisterValue_16938 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioObjectPtr, constinArgument_inPropertyName.mProperty_location, var_loadedRegisterValue_16938, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 435)) ;
      }
      GALGAS_llvmBinaryOperation var_accessOperator_17037 ;
      GALGAS_bigint var_accessRightOperand_17075 ;
      GALGAS_sliceMap var_resultSliceMap_17111 ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_17155 ;
      var_sliceMap_16719.method_searchKey (constinArgument_inPropertyName, var_accessOperator_17037, var_accessRightOperand_17075, var_resultSliceMap_17111, var_resultType_17155, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 441)) ;
      GALGAS_objectIR var_resultObject_17182 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_17155, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 450)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 450))  COMMA_SOURCE_FILE ("expression-primary.galgas", 450)), var_resultSliceMap_17111  COMMA_SOURCE_FILE ("expression-primary.galgas", 448)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 453)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_17182, extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 456)), constinArgument_inPropertyName.mProperty_location, var_loadedRegisterValue_16938, var_accessOperator_17037, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, var_accessRightOperand_17075  COMMA_SOURCE_FILE ("expression-primary.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 454)) ;
      }
      ioArgument_ioObjectPtr = var_resultObject_17182 ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 464)), GALGAS_string ("the current object has no property"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 464)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                             const GALGAS_string constinArgument_inGlobalVariableReceiverName,
                                             const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                             const GALGAS_bool constinArgument_inGuard,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                             GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                             const GALGAS_location constinArgument_inErrorLocation,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             GALGAS_objectIR & ioArgument_ioObjectPtr,
                                             GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 490)).operator_not (SOURCE_FILE ("expression-primary.galgas", 490)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 491)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_19098 ;
      GALGAS_objectIR joker_19065_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_19065_1, var_functionName_19098, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 493)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_19098.getter_location (SOURCE_FILE ("expression-primary.galgas", 494)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 494)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_19269 ;
      GALGAS_lstring var_functionName_19300 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_19269, var_functionName_19300, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 496)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_20015 ;
      GALGAS_calleeKindIR var_routineKind_20064 ;
      GALGAS_lstring var_functionMangledName_20123 ;
      GALGAS_lstring var_functionNameForGeneration_20194 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_19269, var_functionName_19300, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_20015, var_routineKind_20064, var_functionMangledName_20123, var_functionNameForGeneration_20194, outArgument_outReturnedType, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 497)) ;
      }
      GALGAS_objectIR var_functionResult_20382 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_20123.getter_location (SOURCE_FILE ("expression-primary.galgas", 520)), ioArgument_ioTemporaries, var_functionResult_20382, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 520)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_20382, var_functionMangledName_20123, var_functionNameForGeneration_20194, var_routineKind_20064, var_effectiveParameterListIR_20015  COMMA_SOURCE_FILE ("expression-primary.galgas", 522))  COMMA_SOURCE_FILE ("expression-primary.galgas", 522)) ;
      ioArgument_ioObjectPtr = var_functionResult_20382 ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeFunctionCallInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionCallInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                              const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                              const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                              const GALGAS_objectIR constinArgument_inReceiver,
                                              const GALGAS_lstring constinArgument_inRoutineName,
                                              const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              const GALGAS_mode constinArgument_inRequiredMode,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                              GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                              GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                              GALGAS_calleeKindIR & outArgument_outRoutineKindIR,
                                              GALGAS_lstring & outArgument_outRoutineMangledName,
                                              GALGAS_lstring & outArgument_outRoutineNameForGeneration,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outRoutineKindIR.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  outArgument_outRoutineNameForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 560)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_22047 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 561)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsNotEqual, var_receiverType_22047.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 563)))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_receiverType_22047.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 563)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 563)) ;
  }
  GALGAS_bool var_specialCase_22160 = test_0 ;
  const enumGalgasBool test_1 = var_specialCase_22160.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_propertyMap var_propertyMap_22334 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_22365 ;
    GALGAS_lstring joker_22291 ; // Joker input parameter
    GALGAS_propertyList joker_22367_2 ; // Joker input parameter
    GALGAS_uint joker_22367_1 ; // Joker input parameter
    var_receiverType_22047.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 565)).method_structure (joker_22291, var_propertyMap_22334, var_universalMap_22365, joker_22367_2, joker_22367_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 565)) ;
    const enumGalgasBool test_2 = var_propertyMap_22334.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 566)) COMMA_SOURCE_FILE ("expression-primary.galgas", 566)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_objectIR var_propertyObject_22495 ;
      GALGAS_bool joker_22464 ; // Joker input parameter
      var_propertyMap_22334.method_searchKey (constinArgument_inRoutineName, joker_22464, var_propertyObject_22495, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 567)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_type_22542 ;
      GALGAS_lstring var_plmName_22570 ;
      GALGAS_uint var_index_22594 ;
      var_propertyObject_22495.method_property (var_type_22542, var_plmName_22570, var_index_22594, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 568)) ;
      var_specialCase_22160 = var_type_22542.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 569)).getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 569)) ;
      const enumGalgasBool test_3 = var_specialCase_22160.boolEnum () ;
      if (kBoolTrue == test_3) {
        constinArgument_inRoutineName.log ("inRoutineName"  COMMA_SOURCE_FILE ("expression-primary.galgas", 571)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_receiverType_22047.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 576)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 577)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 577)) ;
  }
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_receiverType_22047.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 581)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string ("$").add_operation (var_receiverType_22047.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 581)) ;
  }
  outArgument_outRoutineMangledName = function_routineMangledNameFromCall (temp_5, constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)) ;
  GALGAS_routineDescriptor var_routineDescriptor_23267 ;
  GALGAS_location var_outRoutineLocation_23305 ;
  extensionMethod_searchKey (constinArgument_inContext.mProperty_mRoutineMapForContext, constinArgument_inRoutineName, extensionGetter_routineSignature (constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 587)), outArgument_outRoutineNameForGeneration, var_routineDescriptor_23267, var_outRoutineLocation_23305, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 585)) ;
  GALGAS_bool var_isPublic_23324 = var_routineDescriptor_23267.mProperty_mIsPublic ;
  GALGAS_routineKind var_routineKind_23372 = var_routineDescriptor_23267.mProperty_mRoutineKind ;
  GALGAS_mode var_calleeMode_23422 = extensionGetter_executionMode (var_routineKind_23372, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 594)) ;
  GALGAS_routineTypedSignature var_formalSignature_23509 = var_routineDescriptor_23267.mProperty_mSignature ;
  outArgument_outReturnedType = var_routineDescriptor_23267.mProperty_mReturnType ;
  const enumGalgasBool test_7 = var_isPublic_23324.operator_not (SOURCE_FILE ("expression-primary.galgas", 598)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_receiverType_22047.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 599)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_declarationFile_23728 = var_outRoutineLocation_23305.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 600)) ;
      GALGAS_string var_invocationFile_23781 = constinArgument_inRoutineName.mProperty_location.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 601)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_invocationFile_23781.objectCompare (var_declarationFile_23728)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 603)), GALGAS_string ("this routine is not public"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 603)) ;
      }
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_receiverType_22047.objectCompare (constinArgument_inSelfType)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 606)), GALGAS_string ("this routine is not public"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 606)) ;
      }
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 610)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredMode, var_calleeMode_23422, var_routineKind_23372, constinArgument_inRoutineName.mProperty_location, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 612)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_23509, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.mProperty_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 619)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                         const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode constinArgument_inRequiredMode,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                         GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_26256 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 660)) ;
  cEnumerator_routineTypedSignature enumerator_26299 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_26342 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_26299.hasCurrentObject () && enumerator_26342.hasCurrentObject ()) {
    switch (enumerator_26342.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_27698 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_26342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_27698->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_27698->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_27698->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_26299.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 667)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_26480 = temp_0 ;
        GALGAS_lstring var_varLLVMName_26648 = GALGAS_lstring::constructor_new (extractedValue_name.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 669)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 669)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 669))  COMMA_SOURCE_FILE ("expression-primary.galgas", 669)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 670)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_26480, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_type_26480, var_varLLVMName_26648  COMMA_SOURCE_FILE ("expression-primary.galgas", 676)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 672)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_26480, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_type_26480, var_varLLVMName_26648  COMMA_SOURCE_FILE ("expression-primary.galgas", 685)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 681)) ;
          }
        }
        ioArgument_ioGenerationStruct.mProperty_mAllocaList.addAssign_operation (var_varLLVMName_26648.getter_string (SOURCE_FILE ("expression-primary.galgas", 690)), extensionGetter_llvmTypeName (var_type_26480.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 690))  COMMA_SOURCE_FILE ("expression-primary.galgas", 690)) ;
        var_parameterList_26256.addAssign_operation (enumerator_26342.current_mEffectiveParameterKind (HERE), enumerator_26342.current_mSelector (HERE), var_type_26480  COMMA_SOURCE_FILE ("expression-primary.galgas", 691)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 693)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_26480, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_26648.getter_string (SOURCE_FILE ("expression-primary.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 694)), var_varLLVMName_26648.getter_location (SOURCE_FILE ("expression-primary.galgas", 694))  COMMA_SOURCE_FILE ("expression-primary.galgas", 694)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 694))  COMMA_SOURCE_FILE ("expression-primary.galgas", 694))  COMMA_SOURCE_FILE ("expression-primary.galgas", 692)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_28676 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_26342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_28676->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_27817 ;
        GALGAS_bool var_accessIsAllowed_27864 ;
        GALGAS_objectIR var_objectIR_27895 ;
        GALGAS_bool var_isCopyable_27928 ;
        GALGAS_bool var_canBeUsedAsInputParameter_28042 ;
        {
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_27817, var_accessIsAllowed_27864, var_objectIR_27895, var_isCopyable_27928, var_canBeUsedAsInputParameter_28042, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 696)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_27864.operator_not (SOURCE_FILE ("expression-primary.galgas", 704)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 705)), GALGAS_string ("routine has no access right on the this variable"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 705)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter_28042.operator_not (SOURCE_FILE ("expression-primary.galgas", 707)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 708)), GALGAS_string ("this variable cannot be used as input parameter"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 708)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable_27928.operator_not (SOURCE_FILE ("expression-primary.galgas", 710)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 711)), GALGAS_string ("an $").add_operation (var_type_27817.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 711)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 711)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 711)) ;
        }
        var_parameterList_26256.addAssign_operation (enumerator_26342.current_mEffectiveParameterKind (HERE), enumerator_26342.current_mSelector (HERE), var_type_27817  COMMA_SOURCE_FILE ("expression-primary.galgas", 713)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 715)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_27817, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_27895, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 716)), extensionGetter_location (var_objectIR_27895, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 716))  COMMA_SOURCE_FILE ("expression-primary.galgas", 716)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 716))  COMMA_SOURCE_FILE ("expression-primary.galgas", 716))  COMMA_SOURCE_FILE ("expression-primary.galgas", 714)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_29886 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_26342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_29886->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_29886->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_29366 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_26299.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_expressionResult_29366, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 718)) ;
        GALGAS_objectIR var_expressionValue_29532 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_29366, extractedValue_endOfExp, var_expressionValue_29532, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 734)) ;
        }
        GALGAS_objectIR var_result_29559 = function_checkAssignmentCompatibility (var_expressionValue_29532, enumerator_26299.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 740)) ;
        var_parameterList_26256.addAssign_operation (enumerator_26342.current_mEffectiveParameterKind (HERE), enumerator_26342.current_mSelector (HERE), enumerator_26299.current_mType (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 746)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 747)), var_result_29559  COMMA_SOURCE_FILE ("expression-primary.galgas", 747)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_30770 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_26342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_30770->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_30015 ;
        GALGAS_bool var_accessIsAllowed_30062 ;
        GALGAS_objectIR var_objectIR_30093 ;
        GALGAS_bool var_canBeUsedAsInputParameter_30170 ;
        {
        GALGAS_bool joker_30103_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_30015, var_accessIsAllowed_30062, var_objectIR_30093, joker_30103_1, var_canBeUsedAsInputParameter_30170, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 749)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter_30170.operator_not (SOURCE_FILE ("expression-primary.galgas", 757)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 758)), GALGAS_string ("this variable cannot be used as output/input parameter"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 758)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed_30062.operator_not (SOURCE_FILE ("expression-primary.galgas", 760)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 761)), GALGAS_string ("routine has no access right on the this variable"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 761)) ;
        }
        var_parameterList_26256.addAssign_operation (enumerator_26342.current_mEffectiveParameterKind (HERE), enumerator_26342.current_mSelector (HERE), var_type_30015  COMMA_SOURCE_FILE ("expression-primary.galgas", 763)) ;
        GALGAS_objectIR var_argumentIR_30532 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_30015, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_30093, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 766)), extensionGetter_location (var_objectIR_30093, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 766))  COMMA_SOURCE_FILE ("expression-primary.galgas", 766)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 767))  COMMA_SOURCE_FILE ("expression-primary.galgas", 764)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 769)), var_argumentIR_30532  COMMA_SOURCE_FILE ("expression-primary.galgas", 769)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_33194 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_26342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_33194->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 771)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 772)), GALGAS_string ("'self' is not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 772)) ;
          var_parameterList_26256.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("expression-primary.galgas", 773)).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 774)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 774)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 774)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("expression-primary.galgas", 775)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 776)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 776)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 776)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 778)).enumValue ()) {
              case GALGAS_typeKind::kNotBuilt:
                break ;
              case GALGAS_typeKind::kEnum_opaque:
                {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 780)), GALGAS_string ("a structure type is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 780)) ;
                  var_parameterList_26256.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_arrayType:
                {
                  TC_Array <C_FixItDescription> fixItArray20 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 782)), GALGAS_string ("a structure type is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-primary.galgas", 782)) ;
                  var_parameterList_26256.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_boolean:
                {
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 784)), GALGAS_string ("a structure type is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-primary.galgas", 784)) ;
                  var_parameterList_26256.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_staticInteger:
                {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 786)), GALGAS_string ("a structure type is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-primary.galgas", 786)) ;
                  var_parameterList_26256.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_literalString:
                {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 788)), GALGAS_string ("a structure type is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-primary.galgas", 788)) ;
                  var_parameterList_26256.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_enumeration:
                {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 790)), GALGAS_string ("a structure type is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-primary.galgas", 790)) ;
                  var_parameterList_26256.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_function:
                {
                  TC_Array <C_FixItDescription> fixItArray25 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 792)), GALGAS_string ("a structure type is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-primary.galgas", 792)) ;
                  var_parameterList_26256.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_pointer:
                {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 794)), GALGAS_string ("a structure type is required here"), fixItArray26  COMMA_SOURCE_FILE ("expression-primary.galgas", 794)) ;
                  var_parameterList_26256.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_integer:
                {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 796)), GALGAS_string ("a structure type is required here"), fixItArray27  COMMA_SOURCE_FILE ("expression-primary.galgas", 796)) ;
                  var_parameterList_26256.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_structure:
                {
                  const cEnumAssociatedValues_typeKind_structure * extractPtr_33168 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 778)).unsafePointer ()) ;
                  const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_33168->mAssociatedValue2 ;
                  GALGAS_bool var_public_32598 ;
                  GALGAS_objectIR var_propertyObject_32618 ;
                  extensionMethod_searchValuedObject (extractedValue_universalMap, extractedValue_name, var_public_32598, var_propertyObject_32618, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 798)) ;
                  GALGAS_uint var_idx_32673 ;
                  GALGAS_unifiedTypeMap_2D_proxy joker_32656_2 ; // Joker input parameter
                  GALGAS_lstring joker_32656_1 ; // Joker input parameter
                  var_propertyObject_32618.method_property (joker_32656_2, joker_32656_1, var_idx_32673, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 799)) ;
                  GALGAS_objectIR var_fieldObjectReference_32775 ;
                  {
                  routine_getNewTempVariable (extensionGetter_type (var_propertyObject_32618, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 800)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 800)), ioArgument_ioTemporaries, var_fieldObjectReference_32775, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 800)) ;
                  }
                  {
                  extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_32775, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 804)), var_idx_32673, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 801)) ;
                  }
                  var_parameterList_26256.addAssign_operation (enumerator_26342.current_mEffectiveParameterKind (HERE), enumerator_26342.current_mSelector (HERE), extensionGetter_type (var_propertyObject_32618, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 807))  COMMA_SOURCE_FILE ("expression-primary.galgas", 807)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 809)), var_fieldObjectReference_32775  COMMA_SOURCE_FILE ("expression-primary.galgas", 808)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_26299.gotoNextObject () ;
    enumerator_26342.gotoNextObject () ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 816)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 816)))).boolEnum () ;
  if (kBoolTrue == test_28) {
    TC_Array <C_FixItDescription> fixItArray29 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 817)).getter_string (SOURCE_FILE ("expression-primary.galgas", 817)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 817)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 817)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 818)).getter_string (SOURCE_FILE ("expression-primary.galgas", 817)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 817)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 818)), fixItArray29  COMMA_SOURCE_FILE ("expression-primary.galgas", 817)) ;
  }else if (kBoolFalse == test_28) {
    cEnumerator_routineTypedSignature enumerator_33526 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_33555 (var_parameterList_26256, kENUMERATION_UP) ;
    while (enumerator_33526.hasCurrentObject () && enumerator_33555.hasCurrentObject ()) {
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_33526.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 821)).objectCompare (enumerator_33555.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 821)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_33555.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 822)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_33555.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 822)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 822)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 822)).add_operation (enumerator_33526.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 823)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 823)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 823)), fixItArray31  COMMA_SOURCE_FILE ("expression-primary.galgas", 822)) ;
      }
      GALGAS_string var_requiredPassingMode_33846 = extensionGetter_requiredActualPassingModeForSelector (enumerator_33526.current_mFormalArgumentPassingMode (HERE), enumerator_33526.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 825)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 825)) ;
      GALGAS_string var_testedPassingMode_33967 = extensionGetter_passingModeForActualSelector (enumerator_33555.current_mEffectiveParameterPassingMode (HERE), enumerator_33555.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 826)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_33846.objectCompare (var_testedPassingMode_33967)).boolEnum () ;
      if (kBoolTrue == test_32) {
        TC_Array <C_FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_33555.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 828)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_33846, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 828)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 828)), fixItArray33  COMMA_SOURCE_FILE ("expression-primary.galgas", 828)) ;
      }
      enumerator_33526.gotoNextObject () ;
      enumerator_33555.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                              extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@checkInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_checkInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                         const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_3108 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 59)) ;
  GALGAS_objectIR var_expressionResult_3665 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 65)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_instructionGenerationList_3108, var_expressionResult_3665, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 60)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_expressionResult_3665, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 77)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 77)).operator_not (SOURCE_FILE ("directive-check.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 78)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3665, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 81)).operator_not (SOURCE_FILE ("directive-check.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 82)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_4058 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4035_1 ; // Joker input parameter
    var_expressionResult_3665.method_literalInteger (joker_4035_1, var_value_4058, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 84)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_4058.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 85)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 86)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_checkInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                extensionMethod_checkInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_analyze (defineExtensionMethod_checkInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@varAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentInstructionAST * object = (const cPtr_varAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 38)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@varAssignmentInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                 const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                 const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode constinArgument_inCurrentMode,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                 GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                 GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentInstructionAST * object = (const cPtr_varAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentInstructionAST) ;
  GALGAS_objectIR var_currentObject_3867 ;
  GALGAS_string var_globalVariableReceiverName_3937 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 62)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_currentObject_3867, var_globalVariableReceiverName_3937, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 60)) ;
  const enumGalgasBool test_0 = var_currentObject_3867.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 78)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 78)) ;
    var_currentObject_3867.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperandPossibleReference_4701 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_3867, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 86)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_4701, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 81)) ;
  GALGAS_objectIR var_sourceOperand_4879 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_4701, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 100)), var_sourceOperand_4879, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 97)) ;
  }
  GALGAS_objectIR var_result_4898 = function_checkAssignmentCompatibility (var_sourceOperand_4879, extensionGetter_type (var_currentObject_3867, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)), object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 106)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 103)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_3867, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 109)), var_result_4898, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varAssignmentInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varAssignmentInstructionAST.mSlotID,
                                extensionMethod_varAssignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varAssignmentInstructionAST_analyze (defineExtensionMethod_varAssignmentInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@varOperatorAssignInstructionAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignInstructionAST * object = (const cPtr_varOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 94)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST.mSlotID,
                                                              extensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@varOperatorAssignInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignInstructionAST * object = (const cPtr_varOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignInstructionAST) ;
  GALGAS_objectIR var_targetObject_5103 ;
  GALGAS_string var_globalVariableReceiverName_5173 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment-operator.galgas", 118)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_targetObject_5103, var_globalVariableReceiverName_5173, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 116)) ;
  const enumGalgasBool test_0 = var_targetObject_5103.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 133)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 134)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 134)) ;
    var_targetObject_5103.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourcePossibleReference_5927 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_5103, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 142)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5927, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 137)) ;
  GALGAS_objectIR var_sourceValue_6086 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_5927, object->mProperty_mEndOfSourceExpression, var_sourceValue_6086, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 153)) ;
  }
  GALGAS_bool var_noPanicGeneration_6560 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_6623 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 173)))) ;
  GALGAS_infixOperatorMap var_operatorMap_6685 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_6685 = constinArgument_inContext.mProperty_mAndOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_6685 = constinArgument_inContext.mProperty_mOrOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_6685 = constinArgument_inContext.mProperty_mXorOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_6623.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 184)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 185)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 185)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 184)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_6560.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.mProperty_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.mProperty_mAddOperatorMap ;
      }
      var_operatorMap_6685 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_6685 = constinArgument_inContext.mProperty_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_6623.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 192)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 193)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 193)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 192)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_6560.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.mProperty_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.mProperty_mSubOperatorMap ;
      }
      var_operatorMap_6685 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_6685 = constinArgument_inContext.mProperty_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_6623.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 200)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 201)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 201)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 200)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_6560.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.mProperty_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.mProperty_mMulOperatorMap ;
      }
      var_operatorMap_6685 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_6685 = constinArgument_inContext.mProperty_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_6623.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 208)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 209)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 209)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 208)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_6560.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.mProperty_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.mProperty_mDivOperatorMap ;
      }
      var_operatorMap_6685 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_6685 = constinArgument_inContext.mProperty_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_6623.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 216)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 217)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 217)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 216)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_6560.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.mProperty_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.mProperty_mModOperatorMap ;
      }
      var_operatorMap_6685 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_6685 = constinArgument_inContext.mProperty_mModNoOvfOperatorMap ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_9018 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_8964 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_6685, extensionGetter_type (var_targetObject_5103, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 224)), extensionGetter_type (var_sourceValue_6086, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 225)), object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 226)), joker_8964, var_binaryOperator_9018, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 223)) ;
  GALGAS_objectIR var_variableValue_9199 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_5103, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 234)), var_variableValue_9199, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 231)) ;
  }
  GALGAS_objectIR var_newResultingValue_9427 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_9018.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_9199, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 241)), var_sourceValue_6086, extensionGetter_type (var_targetObject_5103, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 243)), var_newResultingValue_9427, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 237)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_5103, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 248)), var_newResultingValue_9427, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 246)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varOperatorAssignInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST.mSlotID,
                                extensionMethod_varOperatorAssignInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varOperatorAssignInstructionAST_analyze (defineExtensionMethod_varOperatorAssignInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2711 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2711 COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@varInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_lstring var_typeName_3133 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 75)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3133 COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                                                              extensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 98)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4379 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_5100 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4379, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5100, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 102)) ;
  GALGAS_objectIR var_expressionResult_5250 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_5100, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 121)), var_expressionResult_5250, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 118)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_4379.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_4379 = extensionGetter_type (var_expressionResult_5250, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)) ;
  }
  GALGAS_objectIR var_result_5376 = function_checkAssignmentCompatibility (var_expressionResult_5250, var_targetType_4379, object->mProperty_mVarName.mProperty_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  GALGAS_lstring var_varName_5623 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-var.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 136))  COMMA_SOURCE_FILE ("instruction-var.galgas", 136)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 137)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedVariable (object->mProperty_mVarName, extensionGetter_type (var_result_5376, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 140)), GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_5376, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 142)), var_varName_5623  COMMA_SOURCE_FILE ("instruction-var.galgas", 142)), extensionGetter_copyable (extensionGetter_type (var_result_5376, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 143)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  }
  ioArgument_ioGenerationStruct.mProperty_mAllocaList.addAssign_operation (var_varName_5623.getter_string (SOURCE_FILE ("instruction-var.galgas", 147)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_5376, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 147)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 147))  COMMA_SOURCE_FILE ("instruction-var.galgas", 147)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varName_5623.getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), extensionGetter_type (var_result_5376, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 150)), var_result_5376, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 148)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionWithAssignmentAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                extensionMethod_varInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_analyze (defineExtensionMethod_varInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@varInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                       const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                       const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                       GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                       GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_7170 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 171)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_7170.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).operator_not (SOURCE_FILE ("instruction-var.galgas", 173)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 174)), GALGAS_string ("$").add_operation (var_targetType_7170.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 174)) ;
  }
  GALGAS_lstring var_varLLVMName_7394 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 177)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-var.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 177)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 177))  COMMA_SOURCE_FILE ("instruction-var.galgas", 177)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 178)) ;
  {
  ioArgument_ioVariableMap.setter_insertUndefinedVariable (object->mProperty_mVarName, var_targetType_7170, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_targetType_7170, var_varLLVMName_7394  COMMA_SOURCE_FILE ("instruction-var.galgas", 183)), extensionGetter_copyable (var_targetType_7170, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 184)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179)) ;
  }
  ioArgument_ioGenerationStruct.mProperty_mAllocaList.addAssign_operation (var_varLLVMName_7394.getter_string (SOURCE_FILE ("instruction-var.galgas", 188)), extensionGetter_llvmTypeName (var_targetType_7170.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188))  COMMA_SOURCE_FILE ("instruction-var.galgas", 188)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                                extensionMethod_varInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_analyze (defineExtensionMethod_varInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@letInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2137 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 47)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2137 COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@letInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_3472 = temp_0 ;
  GALGAS_objectIR var_expressionResultPossibleReference_4207 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3472, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4207, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 76)) ;
  GALGAS_objectIR var_expressionResult_4367 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4207, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 95)), var_expressionResult_4367, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 92)) ;
  }
  GALGAS_objectIR var_result_4414 = function_checkAssignmentCompatibility (var_expressionResult_4367, var_targetType_3472, object->mProperty_mVarName.mProperty_location, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_4414, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)).operator_not (SOURCE_FILE ("instruction-let.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 108)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_4414, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
    var_result_4414.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_varPLMName_4785 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-let.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 111))  COMMA_SOURCE_FILE ("instruction-let.galgas", 111)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 112)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_4414, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGenerationStruct.mProperty_mAllocaList.addAssign_operation (var_varPLMName_4785.getter_string (SOURCE_FILE ("instruction-let.galgas", 114)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_4414, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114))  COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
    GALGAS_objectIR var_localConstant_5062 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_4414, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 115)), var_varPLMName_4785  COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
    {
    extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_localConstant_5062, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 116)), var_result_4414, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_insertConstant (object->mProperty_mVarName, extensionGetter_type (var_result_4414, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 120)), GALGAS_bool (true), var_expressionResult_4367, extensionGetter_copyable (extensionGetter_type (var_result_4414, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 123)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionWithAssignmentAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                extensionMethod_letInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_analyze (defineExtensionMethod_letInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                                              extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@assertInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                          const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 58)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3277 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 62)) ;
  GALGAS_objectIR var_expressionValue_3833 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 68)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_instructionGenerationList_3277, var_expressionValue_3833, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 63)) ;
  const enumGalgasBool test_2 = extensionGetter_kind (var_expressionValue_3833, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 80)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 80)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 80)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 81)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3833, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 84)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 85)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 88)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mAssertInstructionLocation, var_instructionGenerationList_3277, var_expressionValue_3833  COMMA_SOURCE_FILE ("instruction-assert.galgas", 89))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 89)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                extensionMethod_assertInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_analyze (defineExtensionMethod_assertInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@assertInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  GALGAS_uint var_assertErrorCode_5230 = GALGAS_uint ((uint32_t) 7U) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (var_assertErrorCode_5230.getter_string (SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 118)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                            extensionMethod_assertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_llvmInstructionCode (defineExtensionMethod_assertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@assertInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                                extensionMethod_assertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_enterAccessibleEntities (defineExtensionMethod_assertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@panicInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                                              extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@panicInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                         const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 56)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3265 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 60)) ;
  GALGAS_objectIR var_result_3833 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.mProperty_mPanicCodeType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_unusedInstructionListIR_3265, var_result_3833, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 61)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3265.getter_length (SOURCE_FILE ("instruction-panic.galgas", 79)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3833.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 80)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 80)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_3833, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_4169 ;
    GALGAS_bigint var_max_4182 ;
    GALGAS_bool joker_4193 ; // Joker input parameter
    GALGAS_uint joker_4196_1 ; // Joker input parameter
    constinArgument_inContext.mProperty_mPanicCodeType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)).method_integer (var_min_4169, var_max_4182, joker_4193, joker_4196_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)) ;
    GALGAS_bigint var_throwValue_4252 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4228_1 ; // Joker input parameter
    var_result_3833.method_literalInteger (joker_4228_1, var_throwValue_4252, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_4252.objectCompare (var_min_4169)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_4252.objectCompare (var_max_4182)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.mProperty_mPanicCodeType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 87)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 87)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 88)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mThrowLocation, var_throwValue_4252  COMMA_SOURCE_FILE ("instruction-panic.galgas", 89))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 89)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                extensionMethod_panicInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicInstructionAST_analyze (defineExtensionMethod_panicInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@panicInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionIR * object = (const cPtr_panicInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionIR) ;
  GALGAS_uint var_staticStringIndex_5534 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 114)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 114)), var_staticStringIndex_5534, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_5534.getter_string (SOURCE_FILE ("instruction-panic.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 119)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 119)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                            extensionMethod_panicInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicInstructionIR_llvmInstructionCode (defineExtensionMethod_panicInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@panicInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                        GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                                extensionMethod_panicInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicInstructionIR_enterAccessibleEntities (defineExtensionMethod_panicInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mThenInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mElseInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                              extensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@ifInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                      GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_objectIR var_testResultPossibleReference_5406 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 118)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_testResultPossibleReference_5406, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)) ;
  GALGAS_objectIR var_testResult_5572 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResultPossibleReference_5406, object->mProperty_mTestExpressionEndLocation, var_testResult_5572, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testResult_5572, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 136)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testResult_5572, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_5572, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)).operator_not (SOURCE_FILE ("instruction-if.galgas", 138)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_5572, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 140)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
      }
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_6209 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 145)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_thenInstructionGenerationList_6209, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 146)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6901 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 162)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_elseInstructionGenerationList_6901, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 163)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_5572, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_6209, var_elseInstructionGenerationList_6901  COMMA_SOURCE_FILE ("instruction-if.galgas", 180))  COMMA_SOURCE_FILE ("instruction-if.galgas", 180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                extensionMethod_ifInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_analyze (defineExtensionMethod_ifInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@ifInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  GALGAS_string var_labelTrue_8632 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GALGAS_string var_labelFalse_8695 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  GALGAS_string var_labelEnd_8757 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).getter_string (SOURCE_FILE ("instruction-if.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelTrue_8632, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelFalse_8695, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8632.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8757, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8695.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8757, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8757.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                            extensionMethod_ifInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_llvmInstructionCode (defineExtensionMethod_ifInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@ifInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                                extensionMethod_ifInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_enterAccessibleEntities (defineExtensionMethod_ifInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@syncInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  cEnumerator_syncInstructionBranchList enumerator_5704 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_5704.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5704.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 148)) ;
    enumerator_5704.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                                              extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@syncInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                        const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                        const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_mode constinArgument_inCurrentMode,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                        GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_syncInstructionBranchListIR var_onInstructionBranchListIR_6952 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 170)) ;
  cEnumerator_syncInstructionBranchList enumerator_7023 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_7023.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 172)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR_7127 ;
    switch (enumerator_7023.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommand::kNotBuilt:
      break ;
    case GALGAS_guardedCommand::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommand_synchronization * extractPtr_8339 = (const cEnumAssociatedValues_guardedCommand_synchronization *) (enumerator_7023.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_8339->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_8339->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_8339->mAssociatedValue2 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_8339->mAssociatedValue3 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_7306 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 177)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_7948 ;
        GALGAS_lstring var_guardMangledName_8004 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_guardInstructionGenerationList_7306, var_guardEffectiveParameterListIR_7948, var_guardMangledName_8004, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 178)) ;
        }
        var_guardedCommandIR_7127 = GALGAS_guardedCommandIR::constructor_synchronization (extractedValue_isWhileCommand, var_guardMangledName_8004.mProperty_string, extractedValue_optionalReceiverName.mProperty_string, var_guardInstructionGenerationList_7306, var_guardEffectiveParameterListIR_7948  COMMA_SOURCE_FILE ("instruction-sync.galgas", 195)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommand_boolean * extractPtr_9508 = (const cEnumAssociatedValues_guardedCommand_boolean *) (enumerator_7023.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_9508->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_9508->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_9508->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_8458 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 203)) ;
        GALGAS_objectIR var_sourceOperand_9075 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 209)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_guardInstructionGenerationList_8458, var_sourceOperand_9075, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 204)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_sourceOperand_9075, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 220)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 220)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 221)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_9075, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 222)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 223)) ;
          }
        }
        var_guardedCommandIR_7127 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_8458, var_sourceOperand_9075  COMMA_SOURCE_FILE ("instruction-sync.galgas", 225)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommand_boolAndSync * extractPtr_11783 = (const cEnumAssociatedValues_guardedCommand_boolAndSync *) (enumerator_7023.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_11783->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_11783->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_11783->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_11783->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_11783->mAssociatedValue4 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_11783->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_9687 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 231)) ;
        GALGAS_objectIR var_boolExpressionResult_10317 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 237)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_boolExpInstructionGenerationList_9687, var_boolExpressionResult_10317, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 232)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_boolExpressionResult_10317, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 248)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 248)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 249)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = extensionGetter_isStatic (var_boolExpressionResult_10317, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 250)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 251)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_10635 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 253)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_11277 ;
        GALGAS_lstring var_guardMangledName_11333 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_guardInstructionGenerationList_10635, var_guardEffectiveParameterListIR_11277, var_guardMangledName_11333, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 254)) ;
        }
        var_guardedCommandIR_7127 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_9687, var_boolExpressionResult_10317, var_guardMangledName_11333.mProperty_string, extractedValue_optionalReceiverName.mProperty_string, var_guardInstructionGenerationList_10635, var_guardEffectiveParameterListIR_11277  COMMA_SOURCE_FILE ("instruction-sync.galgas", 271)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_11870 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 282)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_7023.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_7023.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_branchInstructionGenerationList_11870, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 283)) ;
    {
    ioArgument_ioVariableMap.setter_closeOverride (enumerator_7023.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 298)) ;
    }
    var_onInstructionBranchListIR_6952.addAssign_operation (var_guardedCommandIR_7127, var_branchInstructionGenerationList_11870  COMMA_SOURCE_FILE ("instruction-sync.galgas", 300)) ;
    enumerator_7023.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mStartOf_5F_on_5F_instruction, var_onInstructionBranchListIR_6952  COMMA_SOURCE_FILE ("instruction-sync.galgas", 305))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 305)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                extensionMethod_syncInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncInstructionAST_analyze (defineExtensionMethod_syncInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'analyzeGuardCall'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeGuardCall (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                               const GALGAS_lstring constinArgument_inReceiverName,
                               const GALGAS_lstring constinArgument_inGuardName,
                               const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                               const GALGAS_semanticContext constinArgument_inContext,
                               const GALGAS_mode constinArgument_inRequiredMode,
                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                               GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                               GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 327)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_13833 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectIR var_objectIR_14003 ;
    {
    GALGAS_bool joker_13972_1 ; // Joker input parameter
    GALGAS_bool joker_14011_2 ; // Joker input parameter
    GALGAS_bool joker_14011_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForMethodCall (constinArgument_inReceiverName, var_receiverType_13833, joker_13972_1, var_objectIR_14003, joker_14011_2, joker_14011_1, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 330)) ;
    }
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 337)), var_objectIR_14003  COMMA_SOURCE_FILE ("instruction-sync.galgas", 337)) ;
  }else if (kBoolFalse == test_0) {
    var_receiverType_13833 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 339)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("$").add_operation (var_receiverType_13833.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 342)) ;
  }
  outArgument_outGuardMangledName = function_routineMangledNameFromCall (temp_1, constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 341)) ;
  GALGAS_bool var_isPublic_14384 ;
  GALGAS_routineTypedSignature var_formalSignature_14432 ;
  constinArgument_inContext.mProperty_mGuardMapForContext.method_searchKey (outArgument_outGuardMangledName, var_isPublic_14384, var_formalSignature_14432, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 346)) ;
  const enumGalgasBool test_3 = var_isPublic_14384.operator_not (SOURCE_FILE ("instruction-sync.galgas", 352)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_declarationFile_14580 = constinArgument_inContext.mProperty_mGuardMapForContext.getter_locationForKey (outArgument_outGuardMangledName.mProperty_string, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)) ;
      GALGAS_string var_invocationFile_14689 = constinArgument_inGuardName.mProperty_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 355)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_invocationFile_14689.objectCompare (var_declarationFile_14580)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 357)), GALGAS_string ("this guard is not public"), fixItArray6  COMMA_SOURCE_FILE ("instruction-sync.galgas", 357)) ;
      }
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 360)), GALGAS_string ("this guard is not public"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 360)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 364)) ;
  }
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature_14432, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.mProperty_location, outArgument_outGuardMangledName, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 366)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@syncInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mUsesGuards = GALGAS_bool (true) ;
  GALGAS_string var_startLabel_17954 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.getter_string (SOURCE_FILE ("instruction-sync.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 432)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 433)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_17954, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)) ;
  GALGAS_string var_startLabelName_18118 = var_startLabel_17954.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 436)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_18118.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)) ;
  GALGAS_string var_exitLabelName_18202 = var_startLabel_17954.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)) ;
  GALGAS_string var_selectLabelName_18247 = var_startLabel_17954.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 439)) ;
  GALGAS_string var_errorLabelName_18293 = var_startLabel_17954.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 440)) ;
  GALGAS_string var_currentStartBranchLabel_18347 = var_startLabelName_18118 ;
  cEnumerator_syncInstructionBranchListIR enumerator_18407 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_18370 ((uint32_t) 0) ;
  while (enumerator_18407.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_18442 = GALGAS_string ("%").add_operation (var_startLabel_17954, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)).add_operation (index_18370.getter_string (SOURCE_FILE ("instruction-sync.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)) ;
    GALGAS_bool var_isWhileGuardedCommand_18512 ;
    switch (enumerator_18407.current (HERE).mProperty_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_19446 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_18407.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_19446->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_19446->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_19446->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_19446->mAssociatedValue4 ;
        var_isWhileGuardedCommand_18512 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18442, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_18997 (extractedValue_effectiveParameterListIR, kENUMERATION_UP) ;
        while (enumerator_18997.hasCurrentObject ()) {
          switch (enumerator_18997.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18997.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)).add_operation (extensionGetter_llvmName (enumerator_18997.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18997.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)).add_operation (extensionGetter_llvmName (enumerator_18997.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18997.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)).add_operation (extensionGetter_llvmName (enumerator_18997.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)) ;
            }
            break ;
          }
          if (enumerator_18997.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)) ;
          }
          enumerator_18997.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_20264 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_18407.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_20264->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_20264->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_20264->mAssociatedValue2 ;
        var_isWhileGuardedCommand_18512 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)) ;
        GALGAS_string var_acceptedLabelName_19714 = var_startLabel_17954.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)).add_operation (index_18370.getter_string (SOURCE_FILE ("instruction-sync.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)) ;
        GALGAS_string var_rejectedLabelName_19777 = var_startLabel_17954.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)).add_operation (index_18370.getter_string (SOURCE_FILE ("instruction-sync.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (var_acceptedLabelName_19714, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (var_rejectedLabelName_19777, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_19714.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_19777, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_19777.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18442, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_21995 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_18407.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_21995->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_21995->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_21995->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_21995->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_21995->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_21995->mAssociatedValue6 ;
        var_isWhileGuardedCommand_18512 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)) ;
        GALGAS_string var_testOkLabelName_20571 = var_startLabel_17954.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (index_18370.getter_string (SOURCE_FILE ("instruction-sync.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)) ;
        GALGAS_string var_testExitLabelName_20642 = var_startLabel_17954.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)).add_operation (index_18370.getter_string (SOURCE_FILE ("instruction-sync.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)).add_operation (var_testOkLabelName_20571, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)).add_operation (var_testExitLabelName_20642, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_20571.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)) ;
        GALGAS_string var_guardAcceptationLabelName_20997 = var_startLabel_17954.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (index_18370.getter_string (SOURCE_FILE ("instruction-sync.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_20997, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_21223 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_21223.hasCurrentObject ()) {
          switch (enumerator_21223.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21223.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)).add_operation (extensionGetter_llvmName (enumerator_21223.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21223.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)).add_operation (extensionGetter_llvmName (enumerator_21223.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21223.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)).add_operation (extensionGetter_llvmName (enumerator_21223.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)) ;
            }
            break ;
          }
          if (enumerator_21223.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)) ;
          }
          enumerator_21223.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_20642, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_20642.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18442, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_20997, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (var_testOkLabelName_20571, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_18347, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_22029 = var_startLabel_17954.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (index_18370.getter_string (SOURCE_FILE ("instruction-sync.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)) ;
    GALGAS_string var_rejectedLabelName_22089 = var_startLabel_17954.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)).add_operation (index_18370.getter_string (SOURCE_FILE ("instruction-sync.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_18442, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)).add_operation (var_acceptedLabelName_22029, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)).add_operation (var_rejectedLabelName_22089, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_22029.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)) ;
    extensionMethod_instructionListLLVMCode (enumerator_18407.current (HERE).mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_18512.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_18118 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_18202 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_22089.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)) ;
    var_currentStartBranchLabel_18347 = var_rejectedLabelName_22089 ;
    enumerator_18407.gotoNextObject () ;
    index_18370.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 442)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_18247, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_18247, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)).add_operation (var_startLabelName_18118, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)).add_operation (var_errorLabelName_18293, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_18293.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_18202, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_23281 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 521)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 521)), var_staticStringIndex_23281, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_23281.getter_string (SOURCE_FILE ("instruction-sync.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_18202.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                            extensionMethod_syncInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncInstructionIR_llvmInstructionCode (defineExtensionMethod_syncInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@syncInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                       GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  GALGAS_uint var_branchCount_23934 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 538)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_23934)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_23934 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_24119 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_24119.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_24119.current (HERE).mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 543)) ;
    switch (enumerator_24119.current (HERE).mProperty_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_24673 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_24119.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24673->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_24673->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24673->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 549)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_24840 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_24119.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24840->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 552)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_25375 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_24119.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25375->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25375->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_25375->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_25375->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 555)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 558)) ;
        }
      }
      break ;
    }
    enumerator_24119.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                                extensionMethod_syncInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncInstructionIR_enterAccessibleEntities (defineExtensionMethod_syncInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 47)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                              extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@whileInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3542 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 70)) ;
  GALGAS_objectIR var_testValuePossibleReference_4117 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 76)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_testInstructionGenerationList_3542, var_testValuePossibleReference_4117, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)) ;
  GALGAS_objectIR var_testValue_4277 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testValuePossibleReference_4117, object->mProperty_mEndOf_5F_test_5F_expression, var_testValue_4277, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testValue_4277, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 94)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 94)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_4277, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 95)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_4277, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 96)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_4652 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 100)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 101)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_instructionGenerationList_4652, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 102)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 117)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 120)), var_testInstructionGenerationList_3542, var_testValue_4277, var_instructionGenerationList_4652  COMMA_SOURCE_FILE ("instruction-while.galgas", 119))  COMMA_SOURCE_FILE ("instruction-while.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                extensionMethod_whileInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_analyze (defineExtensionMethod_whileInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@whileInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  GALGAS_string var_labelTest_6441 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  GALGAS_string var_labelLoop_6492 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  GALGAS_string var_labelEnd_6542 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6441, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6441.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 149)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (var_labelLoop_6492, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (var_labelEnd_6542, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6492.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6441, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6542.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                            extensionMethod_whileInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineExtensionMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@whileInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 164)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 165)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                                extensionMethod_whileInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_enterAccessibleEntities (defineExtensionMethod_whileInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                              extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@forInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                       const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                       const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedObjectPointer_4516 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_4464_2 ; // Joker input parameter
  GALGAS_bool joker_4464_1 ; // Joker input parameter
  GALGAS_bool joker_4522_2 ; // Joker input parameter
  GALGAS_bool joker_4522_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mIteratedObject, joker_4464_2, joker_4464_1, var_iteratedObjectPointer_4516, joker_4522_2, joker_4522_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
  }
  GALGAS_typeKind var_iteratedTypeKind_5122 = extensionGetter_type (var_iteratedObjectPointer_4516, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 121)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 121)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_iteratedElementType_5336 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_5122.objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_iteratedElementType_5336 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 126)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_iteratedTypeKind_5122.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 127)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_5546 ; // Joker input parameter
      GALGAS_bigint joker_5582_3 ; // Joker input parameter
      GALGAS_classConstantMap joker_5582_2 ; // Joker input parameter
      GALGAS_uint joker_5582_1 ; // Joker input parameter
      var_iteratedTypeKind_5122.method_arrayType (joker_5546, var_iteratedElementType_5336, joker_5582_3, joker_5582_2, joker_5582_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 128)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 130)), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 130)) ;
      var_iteratedElementType_5336.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_enumeratedVarLLVMName_5713 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 133))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)) ;
  ioArgument_ioGenerationStruct.mProperty_mAllocaList.addAssign_operation (var_enumeratedVarLLVMName_5713.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 135)), extensionGetter_llvmTypeName (var_iteratedElementType_5336.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 137)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_iteratedElementType_5336, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_iteratedElementType_5336, var_enumeratedVarLLVMName_5713  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 142)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_6380 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 147)) ;
  GALGAS_objectIR var_whileExpressionResult_6952 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 153)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_whileExpression_5F_GenerationList_6380, var_whileExpressionResult_6952, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 148)) ;
  const enumGalgasBool test_3 = extensionGetter_kind (var_whileExpressionResult_6952, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 165)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 165)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bool test_5 = object->mProperty_mStaticWhileExpression ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_isStatic (var_whileExpressionResult_6952, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)) ;
    }else if (kBoolFalse == test_6) {
      GALGAS_bool test_8 = extensionGetter_isStatic (var_whileExpressionResult_6952, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)) ;
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_7565 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 175)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_doInstructionList_5F_GenerationList_7565, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 191)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_5122.objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 193)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_enumeratedVarLLVMName_5713.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 195)), object->mProperty_mIteratedObject.mProperty_location, var_iteratedObjectPointer_4516, var_whileExpression_5F_GenerationList_6380, var_whileExpressionResult_6952, var_doInstructionList_5F_GenerationList_7565  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 194))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 194)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = var_iteratedTypeKind_5122.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_unifiedTypeMap_2D_proxy var_elementType_8677 ;
      GALGAS_bigint var_size_8692 ;
      GALGAS_lstring joker_8647 ; // Joker input parameter
      GALGAS_classConstantMap joker_8694_2 ; // Joker input parameter
      GALGAS_uint joker_8694_1 ; // Joker input parameter
      var_iteratedTypeKind_5122.method_arrayType (joker_8647, var_elementType_8677, var_size_8692, joker_8694_2, joker_8694_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 203)) ;
      GALGAS_stringset var_invokedFunctionSet_8731 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 204)) ;
      const enumGalgasBool test_13 = ioArgument_ioTemporaries.mProperty_mStaticArrayMap.getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 205)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 205)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_ioTemporaries.mProperty_mStaticArrayMap.method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_8731, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 206)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_enumeratedVarLLVMName_5713.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 209)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4516, var_whileExpression_5F_GenerationList_6380, var_whileExpressionResult_6952, var_doInstructionList_5F_GenerationList_7565, var_elementType_8677, var_size_8692.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 216)), var_invokedFunctionSet_8731  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 208))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 208)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                extensionMethod_forInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_analyze (defineExtensionMethod_forInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnArrayIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  GALGAS_string var_elementTypeLLVMName_11349 = extensionGetter_llvmTypeName (object->mProperty_mElementType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)) ;
  GALGAS_string var_listTypeLLVMName_11409 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (var_elementTypeLLVMName_11349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  GALGAS_string var_locationIndex_11484 = object->mProperty_mIteratedObjectName.mProperty_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  GALGAS_string var_startLabel_11560 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  GALGAS_string var_testLabel_11613 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)) ;
  GALGAS_string var_whileLabel_11666 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 281)) ;
  GALGAS_string var_nextLabel_11719 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  GALGAS_string var_loopVar_11769 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)) ;
  GALGAS_string var_loopLabel_11815 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  GALGAS_string var_endLabel_11866 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)) ;
  GALGAS_string var_indexVar_11919 = GALGAS_string ("for.index.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  GALGAS_string var_ptrVar_11964 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)) ;
  GALGAS_string var_currentValue_12013 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_11484, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_11560, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_11560.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_listTypeLLVMName_11409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_11409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_11613, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_11613.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)).add_operation (var_elementTypeLLVMName_11349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)).add_operation (var_ptrVar_11964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)).add_operation (var_startLabel_11560, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)).add_operation (var_ptrVar_11964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (var_nextLabel_11719, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11919, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (var_startLabel_11560, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (var_indexVar_11919, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (var_nextLabel_11719, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_11769, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (var_indexVar_11919, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_11769, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (var_whileLabel_11666, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (var_endLabel_11866, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_11666.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)).add_operation (var_loopLabel_11815, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)).add_operation (var_endLabel_11866, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_11815.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 322)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_12013, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)).add_operation (var_elementTypeLLVMName_11349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_11349.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 325)).add_operation (var_ptrVar_11964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 325)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 325)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_11349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (var_currentValue_12013, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (var_elementTypeLLVMName_11349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_11719, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_11719.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 332)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 334)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 334)).add_operation (var_elementTypeLLVMName_11349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 334)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 334)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_11349.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)).add_operation (var_ptrVar_11964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11919, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)).add_operation (var_indexVar_11919, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_11613, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_11866.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                            extensionMethod_forInstructionOnArrayIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                             GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)) ;
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mIteratedObjectName.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 353))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 353)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                                extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@forInstructionOnStringIR llvmInstructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnStringIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnStringIR * object = (const cPtr_forInstructionOnStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnStringIR) ;
  GALGAS_string var_startLabel_15810 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  GALGAS_string var_testLabel_15875 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)) ;
  GALGAS_string var_loopLabel_15939 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)) ;
  GALGAS_string var_whileLabel_16004 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  GALGAS_string var_nextLabel_16069 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)) ;
  GALGAS_string var_endLabel_16132 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  GALGAS_string var_ptrVar_16193 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  GALGAS_string var_currentVar_16254 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_15810, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 386)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15810.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_16193, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)).add_operation (GALGAS_string (".start = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15875, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_15875.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_16193, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (GALGAS_string (" = phi i8* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (var_ptrVar_16193, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15810.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (var_ptrVar_16193, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (var_nextLabel_16069, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_16254, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (var_ptrVar_16193, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_16254, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)).add_operation (var_currentVar_16254, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_16254, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).add_operation (var_endLabel_16132, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).add_operation (var_whileLabel_16004, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_16004.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 401)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 403)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 404)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 404)).add_operation (var_loopLabel_15939, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 404)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 404)).add_operation (var_endLabel_16132, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 404)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 404)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_15939.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 407)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_16254, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 412)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_16069, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_16069.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_16193, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 416)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 416)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_16193, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 417)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 417)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15875, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_16132.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnStringIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnStringIR.mSlotID,
                                            extensionMethod_forInstructionOnStringIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnStringIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnStringIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@forInstructionOnStringIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnStringIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnStringIR * object = (const cPtr_forInstructionOnStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnStringIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 431)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnStringIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnStringIR.mSlotID,
                                                extensionMethod_forInstructionOnStringIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnStringIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnStringIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@forLowerUpperBoundInstructionAST noteInstructionTypesInPrecedenceGraph'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2725 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2725 COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 61)) ;
    }
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 63)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                                              extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@forLowerUpperBoundInstructionAST analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                      GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_4201 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 87)) ;
  switch (var_type_4201.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 88)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 92)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 92)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8855 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4201.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 88)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8855->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8855->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8855->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8855->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResultPossibleReference_5703 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4201, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResultPossibleReference_5703, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5926 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResultPossibleReference_5703, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, var_lowerBoundExpressionResult_5926, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 124)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResultPossibleReference_6554 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4201, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResultPossibleReference_6554, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 130)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_6777 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResultPossibleReference_6554, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, var_upperBoundExpressionResult_6777, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 146)) ;
      }
      GALGAS_objectIR var_lowerBound_6834 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5926, var_type_4201, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 153)) ;
      GALGAS_objectIR var_upperBound_7058 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6777, var_type_4201, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 159)) ;
      GALGAS_lstring var_enumeratedVarLLVMName_7300 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 166)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 166)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 166))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 166)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 167)) ;
      ioArgument_ioGenerationStruct.mProperty_mAllocaList.addAssign_operation (var_enumeratedVarLLVMName_7300.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)), extensionGetter_llvmTypeName (var_type_4201.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)) ;
      {
      ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)) ;
      }
      {
      ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_type_4201, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_type_4201, var_enumeratedVarLLVMName_7300  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)) ;
      }
      GALGAS_instructionListIR var_instructionGenerationList_7913 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, var_instructionGenerationList_7913, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 180)) ;
      {
      ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 195)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName_7300.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 198)), var_type_4201, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_6834, var_upperBound_7058, var_instructionGenerationList_7913  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 197))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 197)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                extensionMethod_forLowerUpperBoundInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_analyze (defineExtensionMethod_forLowerUpperBoundInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@forLowerUpperBoundInstructionIR llvmInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  GALGAS_string var_llvmType_9932 = extensionGetter_llvmTypeName (object->mProperty_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  GALGAS_string var_llvmVarName_9980 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  GALGAS_string var_testLabel_10035 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  GALGAS_string var_loopLabel_10098 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  GALGAS_string var_endLabel_10160 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  GALGAS_string var_testResult_10224 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
  GALGAS_string var_loadedVarName_10299 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  GALGAS_string var_currentVarName_10377 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  GALGAS_string var_nextVarName_10453 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmVarName_9980, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10035, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10035.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_10299, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_llvmVarName_9980, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_10224, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (var_loadedVarName_10299, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_10224, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_loopLabel_10098, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_endLabel_10160, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10098.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_10377, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (var_llvmVarName_9980, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_10453, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (var_currentVarName_10377, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (var_nextVarName_10453, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (var_llvmType_9932, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (var_llvmVarName_9980, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10035, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 258)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10160.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                            extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@forLowerUpperBoundInstructionIR enterAccessibleEntities'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 269)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                                extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@callInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_callInstructionAST * object = (const cPtr_callInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_callInstructionAST) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 41)) ;
  cEnumerator_effectiveArgumentListAST enumerator_2342 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_2342.hasCurrentObject ()) {
    switch (enumerator_2342.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2572 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_2572->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 47)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 47)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2665 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_2665->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 49)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_2342.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_callInstructionAST.mSlotID,
                                                              extensionMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@callInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_callInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                        const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                        const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_mode constinArgument_inCurrentMode,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                        GALGAS_generationStruct & ioArgument_ioGenerationStruct,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_callInstructionAST * object = (const cPtr_callInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_callInstructionAST) ;
  GALGAS_objectIR var_currentObject_5317 ;
  GALGAS_string var_globalVariableReceiverName_5380 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_read (SOURCE_FILE ("instruction-procedure-call.galgas", 99)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, ioArgument_ioInstructionGenerationList, var_currentObject_5317, var_globalVariableReceiverName_5380, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 97)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_6084 ;
  {
  routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_5380, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioGenerationStruct, object->mProperty_mArguments, object->mProperty_mEndOfArguments, ioArgument_ioInstructionGenerationList, var_currentObject_5317, var_returnedType_6084, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 115)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType_6084.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 135)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfArguments, GALGAS_string ("the function cannot be called in instruction: lost return value"), fixItArray1  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 136)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_callInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_callInstructionAST.mSlotID,
                                extensionMethod_callInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_callInstructionAST_analyze (defineExtensionMethod_callInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 67)) ;
  cEnumerator_switchCaseList enumerator_2846 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_2846.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2846.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 69)) ;
    enumerator_2846.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                              extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

