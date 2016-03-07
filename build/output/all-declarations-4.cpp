#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'controlRegistersSemanticAnalysis'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_controlRegistersSemanticAnalysis (const GALGAS_controlRegisterDeclarationListAST constinArgument_inRegisterDeclarationListAST,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterDeclarationListAST enumerator_10216 (constinArgument_inRegisterDeclarationListAST, kEnumeration_up) ;
  while (enumerator_10216.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_registerType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_10216.current_mRegisterTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 268)) ;
    switch (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 269)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_0 (enumerator_10216.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 270)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_1 (enumerator_10216.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 271)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_11286 = (const cEnumAssociatedValues_typeKind_integer *) (var_registerType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 269)).unsafePointer ()) ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_11286->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_size = extractPtr_11286->mAssociatedValue3 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_10216.current_mRegisterBitSliceList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 273)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = extractedValue_unsigned.operator_not (SOURCE_FILE ("declaration-control-register.galgas", 274)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (enumerator_10216.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the register type should be unsigned in order to define bit slices")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 275)) ;
          }
          GALGAS_uint var_shiftCount = GALGAS_uint ((uint32_t) 0U) ;
          cEnumerator_controlRegisterBitSliceList enumerator_10853 (enumerator_10216.current_mRegisterBitSliceList (HERE), kEnumeration_down) ;
          while (enumerator_10853.hasCurrentObject ()) {
            switch (enumerator_10853.current_mRegisterBitSlice (HERE).enumValue ()) {
            case GALGAS_controlRegisterBitSlice::kNotBuilt:
              break ;
            case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
              {
                const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_10994 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_10853.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
                const GALGAS_lbigint extractedValue_count = extractPtr_10994->mAssociatedValue0 ;
                var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 281)) ;
              }
              break ;
            case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
              {
                const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_11097 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_10853.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
                const GALGAS_lbigint extractedValue_count = extractPtr_11097->mAssociatedValue1 ;
                var_shiftCount = var_shiftCount.add_operation (extractedValue_count.mAttribute_bigint.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)) ;
              }
              break ;
            }
            enumerator_10853.gotoNextObject () ;
          }
          const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, extractedValue_size.objectCompare (var_shiftCount)).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_location location_6 (enumerator_10216.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_6, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 287)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 287)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 287)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 287))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 287)) ;
          }
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_7 (enumerator_10216.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a literal string type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 290)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        GALGAS_location location_8 (enumerator_10216.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("a structure type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 291)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_9 (enumerator_10216.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_9, GALGAS_string ("an enumeration type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 292)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_location location_10 (enumerator_10216.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_10, GALGAS_string ("a literal integer type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 293)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        GALGAS_location location_11 (enumerator_10216.current_mRegisterTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_11, GALGAS_string ("an opaque type is not valid for a register")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 294)) ;
      }
      break ;
    }
    GALGAS_bigint var_maxAddress = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)).left_shift_operation (constinArgument_inContext.mAttribute_mPointerSize COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)) ;
    cEnumerator_controlRegisterNameList enumerator_11915 (enumerator_10216.current_mRegisterNameList (HERE), kEnumeration_up) ;
    while (enumerator_11915.hasCurrentObject ()) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, enumerator_11915.current_mRegisterAddress (HERE).mAttribute_bigint.objectCompare (var_maxAddress)).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_11915.current_mRegisterAddress (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_13, GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxAddress.getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 300))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 300)) ;
      }
      {
      ioArgument_ioIntermediateCodeStruct.mAttribute_mControlRegisterMap.setter_insertKey (enumerator_11915.current_mRegisterName (HERE), enumerator_10216.current_mRegisterTypeName (HERE).mAttribute_string, enumerator_11915.current_mRegisterAddress (HERE).mAttribute_bigint, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 303)) ;
      }
      enumerator_11915.gotoNextObject () ;
    }
    enumerator_10216.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath = constinArgument_inSourceFile.mAttribute_string.add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 321)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 323)) ;
    cEnumerator_controlRegisterMap enumerator_13078 (constinArgument_inControlRegisterMap, kEnumeration_up) ;
    while (enumerator_13078.hasCurrentObject ()) {
      var_firstLetterSet.addAssign_operation (enumerator_13078.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 325)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 325))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 325)) ;
      enumerator_13078.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_controlRegisterMap enumerator_13267 (constinArgument_inControlRegisterMap, kEnumeration_up) ;
    while (enumerator_13267.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter.objectCompare (enumerator_13267.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter = enumerator_13267.current_lkey (HERE).mAttribute_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
        var_tableOfTypeString.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 332)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 332)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 332)).add_operation (var_currentFirstLetter.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 332)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 332)) ;
      }
      var_tableOfTypeString.plusAssign_operation(function_linkForControlRegister (enumerator_13267.current_lkey (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 334)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 334)) ;
      enumerator_13267.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.mAttribute_string.getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 337)), constinArgument_inControlRegisterMap, var_firstLetterSet, var_tableOfTypeString COMMA_SOURCE_FILE ("declaration-control-register.galgas", 336))) ;
    GALGAS_bool joker_13916 ; // Joker input parameter
    var_typeDumpString.method_writeToFileWhenDifferentContents (var_typeDumpFilePath, joker_13916, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 342)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 344)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'controlRegisterDumpGenerationTemplate dump'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_PROJECT_5F_NAME,
                                                                              const GALGAS_controlRegisterMap & in_CONTROL_5F_REGISTER_5F_MAP,
                                                                              const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                              const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
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
    "table.fields {\n"
    "\xC2""\xA0""\xC2""\xA0""border-collapse: collapse ;\n"
    "  border-spacing: 1px 1px;\n"
    "}\n"
    "\n"
    "td.fields {\n"
    "  border: 1px solid #333333 ;\n"
    "  text-align: center ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "td.address {\n"
    "  font-family: Courier ;\n"
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
    "<h1>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_MAP.getter_count (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 68)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1211_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1211 (in_FIRST_5F_LETTER_5F_SET, kEnumeration_up) ;
    while (enumerator_1211.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1211.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_uint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 71)).stringValue () ;
      result << "\">" ;
      result << enumerator_1211.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1211.hasNextObject ()) {
        result << " - " ;
      }
      index_1211_.increment () ;
      enumerator_1211.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">PLM Type</td><td class=\"result_title\">Address</td><td class=\"result_ti"
    "tle\">Value</td></tr>\n" ;
  GALGAS_uint index_1588_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_MAP.isValid ()) {
    cEnumerator_controlRegisterMap enumerator_1588 (in_CONTROL_5F_REGISTER_5F_MAP, kEnumeration_up) ;
    while (enumerator_1588.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1588.current_lkey (HERE).mAttribute_string.stringValue () ;
      result << "\">" ;
      result << enumerator_1588.current_lkey (HERE).mAttribute_string.stringValue () ;
      result << "</a></td><td class=\"address\">$" ;
      result << enumerator_1588.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 81)).stringValue () ;
      result << "</td><td class=\"address\">" ;
      result << enumerator_1588.current_mAddress (HERE).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 81)).stringValue () ;
      result << "</td><td>" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_1588.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 82)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "<table class=\"fields\"><tr>" ;
        result << function_fieldIndexColumns (enumerator_1588.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 84)).stringValue () ;
        result << "</tr><tr>" ;
        GALGAS_uint index_1959_ (0) ;
        if (enumerator_1588.current_mControlRegisterFieldList (HERE).isValid ()) {
          cEnumerator_controlRegisterFieldList enumerator_1959 (enumerator_1588.current_mControlRegisterFieldList (HERE), kEnumeration_down) ;
          while (enumerator_1959.hasCurrentObject ()) {
            result << "<td class=\"fields\" colspan=\"" ;
            result << enumerator_1959.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 87)).stringValue () ;
            result << "\">" ;
            result << enumerator_1959.current_mFieldName (HERE).stringValue () ;
            result << "</td>" ;
            index_1959_.increment () ;
            enumerator_1959.gotoNextObject () ;
          }
        }
        result << "</tr></table>" ;
      }else if (kBoolFalse == test_0) {
      }
      result << "</td></tr>\n" ;
      index_1588_.increment () ;
      enumerator_1588.gotoNextObject () ;
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
//                                          Function 'linkForControlRegister'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForControlRegister (const GALGAS_string & constinArgument_inControlRegisterName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 363)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 363)).add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 363)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 363)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForControlRegister [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_linkForControlRegister (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* §§ inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForControlRegister (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForControlRegister ("linkForControlRegister",
                                                                        functionWithGenericHeader_linkForControlRegister,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_linkForControlRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_14967 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 370))), kEnumeration_down) ;
  while (enumerator_14967.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_14967.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 371)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 371)) ;
    enumerator_14967.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_fieldIndexColumns (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_fieldIndexColumns (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

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
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      const GALGAS_location constinArgument_inEndOfSourceFile,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredProcedureDeclarationListAST enumerator_1850 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
  while (enumerator_1850.hasCurrentObject ()) {
    GALGAS_lstring var_lkey = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (enumerator_1850.current (HERE).mAttribute_mRequiredProcedureName.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 42)), enumerator_1850.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 42)) ;
    const enumGalgasBool test_0 = constinArgument_inSemanticContext.mAttribute_mRoutineMapForContext.getter_hasKey (var_lkey.mAttribute_string COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 43)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 43)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s = GALGAS_string ("the '").add_operation (enumerator_1850.current (HERE).mAttribute_mRequiredProcedureName.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 44)).add_operation (GALGAS_string ("' should be defined as: proc"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 44)) ;
      cEnumerator_lstringlist enumerator_2195 (enumerator_1850.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
      while (enumerator_2195.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string (" `").add_operation (enumerator_2195.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 46)) ;
        enumerator_2195.gotoNextObject () ;
      }
      var_s.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_1850.current (HERE).mAttribute_mRequiredProcedureName.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 48)) ;
      cEnumerator_procFormalArgumentList enumerator_2340 (enumerator_1850.current (HERE).mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
      while (enumerator_2340.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 50)) ;
        switch (enumerator_2340.current (HERE).mAttribute_mFormalArgumentPassingMode.enumValue ()) {
        case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_input:
          {
            var_s.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 52)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_output:
          {
            var_s.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 53)) ;
          }
          break ;
        case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
          {
            var_s.plusAssign_operation(GALGAS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 54)) ;
          }
          break ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_2340.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_s.plusAssign_operation(enumerator_2340.current (HERE).mAttribute_mSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 57)) ;
        }
        var_s.plusAssign_operation(enumerator_2340.current (HERE).mAttribute_mFormalArgumentTypeName.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 59)) ;
        enumerator_2340.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_modeMap var_procModes ;
      GALGAS_bool joker_2779 ; // Joker input parameter
      GALGAS_procedureSignature joker_2797_3 ; // Joker input parameter
      GALGAS_routineKind joker_2797_2 ; // Joker input parameter
      GALGAS_bool joker_2797_1 ; // Joker input parameter
      constinArgument_inSemanticContext.mAttribute_mRoutineMapForContext.method_searchKey (var_lkey, joker_2779, var_procModes, joker_2797_3, joker_2797_2, joker_2797_1, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)) ;
      GALGAS_stringset var_actualProcModeSet = var_procModes.getter_keySet (SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      GALGAS_stringset var_requiredProcModeSet = GALGAS_stringset::constructor_setWithLStringList (enumerator_1850.current (HERE).mAttribute_mProcedureModeList  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 65)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_actualProcModeSet.objectCompare (var_requiredProcModeSet)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s = GALGAS_string ("required modes:") ;
        cEnumerator_stringset enumerator_3076 (var_requiredProcModeSet, kEnumeration_up) ;
        while (enumerator_3076.hasCurrentObject ()) {
          var_s.plusAssign_operation(GALGAS_string (" `").add_operation (enumerator_3076.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 69)) ;
          enumerator_3076.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (constinArgument_inSemanticContext.mAttribute_mRoutineMapForContext.getter_locationForKey (var_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 71)), var_s  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 71)) ;
      }
    }
    enumerator_1850.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap function_getInfixOperatorMap (const GALGAS_infixOperator & constinArgument_inOp,
                                                      const GALGAS_semanticContext & constinArgument_inContext,
                                                      const GALGAS_stringset & constinArgument_inModeSet,
                                                      const GALGAS_location & constinArgument_inOperatorLocation,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result_outOperatorMap ; // Returned variable
  switch (constinArgument_inOp.enumValue ()) {
  case GALGAS_infixOperator::kNotBuilt:
    break ;
  case GALGAS_infixOperator::kEnum_equal:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mNonEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mStrictInfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mInfEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mStrictSupOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mSupEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mBooleanXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 206)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 206)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 207)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 207))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 207)) ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_1) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mAddOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_2 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 217)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 217)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 218)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 218))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 218)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_3) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_3) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_4 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 228)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 228)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 229)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 229))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 229)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_5) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mMulOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_6 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 239)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 239)).boolEnum () ;
      if (kBoolTrue == test_6) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 240)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 240))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 240)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_7) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_7) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mDivOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_8 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 250)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 250)).boolEnum () ;
      if (kBoolTrue == test_8) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 251)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 251))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 251)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_9) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mModOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mLeftShiftOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mRightShiftOperatorMap ;
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
  & kTypeDescriptor_GALGAS_stringset,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_getInfixOperatorMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* §§ inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_infixOperator operand0 = GALGAS_infixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                             inCompiler
                                                                             COMMA_THERE) ;
  const GALGAS_semanticContext operand1 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  const GALGAS_stringset operand2 = GALGAS_stringset::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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
//                                            Function 'initialVariableMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap function_initialVariableMap (const GALGAS_string & constinArgument_inRoutineNameForInvocation,
                                                const GALGAS_semanticContext & constinArgument_inContext,
                                                const GALGAS_bool & constinArgument_inAcceptUserMode,
                                                GALGAS_bool inArgument_inGlobalsAreConstant,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_variableMap result_outVariableMap ; // Returned variable
  result_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 15)) ;
  GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("variable-map.galgas", 16)) ;
  cEnumerator_controlRegisterMap enumerator_1010 (constinArgument_inContext.mAttribute_mControlRegisterMap, kEnumeration_up) ;
  while (enumerator_1010.hasCurrentObject ()) {
    GALGAS_bool test_0 = constinArgument_inAcceptUserMode ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = enumerator_1010.current_mIsAccessibleInUserMode (HERE).operator_not (SOURCE_FILE ("variable-map.galgas", 18)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      result_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_1010.current_lkey (HERE), enumerator_1010.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_1010.current_mType (HERE), enumerator_1010.current_lkey (HERE), enumerator_1010.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 23)), GALGAS_bool (true), enumerator_1010.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 19)) ;
      }
    }else if (kBoolFalse == test_1) {
      GALGAS_bool test_2 = enumerator_1010.current_mIsReadOnly (HERE) ;
      if (kBoolTrue != test_2.boolEnum ()) {
        test_2 = inArgument_inGlobalsAreConstant ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        result_outVariableMap.setter_insertUsedLocalConstant (enumerator_1010.current_lkey (HERE), enumerator_1010.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_1010.current_mType (HERE), enumerator_1010.current_lkey (HERE), enumerator_1010.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 34)), GALGAS_bool (true), enumerator_1010.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 30)) ;
        }
      }else if (kBoolFalse == test_3) {
        {
        result_outVariableMap.setter_insertDefinedLocalVariable (enumerator_1010.current_lkey (HERE), enumerator_1010.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_1010.current_mType (HERE), enumerator_1010.current_lkey (HERE), enumerator_1010.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 45)), GALGAS_bool (true), enumerator_1010.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 41)) ;
        }
      }
    }
    enumerator_1010.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_2119 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_2119.hasCurrentObject ()) {
    {
    result_outVariableMap.setter_insertUsedLocalConstant (enumerator_2119.current_lkey (HERE), enumerator_2119.current_mValue (HERE).mAttribute_mType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_globalConstant (enumerator_2119.current_mValue (HERE), enumerator_2119.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("variable-map.galgas", 59)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 61)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 55)) ;
    }
    enumerator_2119.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_2540 (constinArgument_inContext.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
  while (enumerator_2540.hasCurrentObject ()) {
    GALGAS_bool var_writeAccess = GALGAS_bool (false) ;
    GALGAS_bool var_allowedAccess = enumerator_2540.current_mAllowedRoutineMap (HERE).getter_hasKey (constinArgument_inRoutineNameForInvocation COMMA_SOURCE_FILE ("variable-map.galgas", 69)) ;
    const enumGalgasBool test_4 = var_allowedAccess.boolEnum () ;
    if (kBoolTrue == test_4) {
      var_writeAccess = enumerator_2540.current_mAllowedRoutineMap (HERE).getter_mHasWriteAccessForKey (constinArgument_inRoutineNameForInvocation, inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 71)) ;
    }
    GALGAS_bool test_5 = inArgument_inGlobalsAreConstant ;
    if (kBoolTrue != test_5.boolEnum ()) {
      test_5 = var_writeAccess.operator_not (SOURCE_FILE ("variable-map.galgas", 73)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      result_outVariableMap.setter_insertUsedLocalConstant (enumerator_2540.current_lkey (HERE), enumerator_2540.current_mVariableType (HERE), var_allowedAccess, GALGAS_objectInMemoryIR::constructor_globalVariable (enumerator_2540.current_mVariableType (HERE), enumerator_2540.current_lkey (HERE).mAttribute_string, GALGAS_bool (kIsStrictSup, enumerator_2540.current_mExecutionModeSet (HERE).getter_count (SOURCE_FILE ("variable-map.galgas", 78)).objectCompare (GALGAS_uint ((uint32_t) 1U)))  COMMA_SOURCE_FILE ("variable-map.galgas", 78)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 80)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 74)) ;
      }
    }else if (kBoolFalse == test_6) {
      {
      result_outVariableMap.setter_insertGlobalVariable (enumerator_2540.current_lkey (HERE), enumerator_2540.current_mVariableType (HERE), var_allowedAccess, GALGAS_objectInMemoryIR::constructor_globalVariable (enumerator_2540.current_mVariableType (HERE), enumerator_2540.current_lkey (HERE).mAttribute_string, GALGAS_bool (kIsStrictSup, enumerator_2540.current_mExecutionModeSet (HERE).getter_count (SOURCE_FILE ("variable-map.galgas", 89)).objectCompare (GALGAS_uint ((uint32_t) 1U)))  COMMA_SOURCE_FILE ("variable-map.galgas", 89)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 91)), GALGAS_bool (false), enumerator_2540.current_mIsConstant (HERE), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 85)) ;
      }
    }
    enumerator_2540.gotoNextObject () ;
  }
//---
  return result_outVariableMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initialVariableMap [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticContext,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initialVariableMap (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* §§ inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_semanticContext operand1 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  const GALGAS_bool operand2 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_bool operand3 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_initialVariableMap (operand0,
                                      operand1,
                                      operand2,
                                      operand3,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initialVariableMap ("initialVariableMap",
                                                                    functionWithGenericHeader_initialVariableMap,
                                                                    & kTypeDescriptor_GALGAS_variableMap,
                                                                    4,
                                                                    functionArgs_initialVariableMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'initialVariableMapForTaskRoutine'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap function_initialVariableMapForTaskRoutine (const GALGAS_string & constinArgument_inTaskName,
                                                              const GALGAS_semanticContext & constinArgument_inContext,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_variableMap result_outVariableMap ; // Returned variable
  result_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 107)) ;
  GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("variable-map.galgas", 108)) ;
  cEnumerator_controlRegisterMap enumerator_3931 (constinArgument_inContext.mAttribute_mControlRegisterMap, kEnumeration_up) ;
  while (enumerator_3931.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_3931.current_mIsAccessibleInUserMode (HERE).operator_not (SOURCE_FILE ("variable-map.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      result_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_3931.current_lkey (HERE), enumerator_3931.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_3931.current_mType (HERE), enumerator_3931.current_lkey (HERE), enumerator_3931.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 115)), GALGAS_bool (true), enumerator_3931.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 111)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = enumerator_3931.current_mIsReadOnly (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        result_outVariableMap.setter_insertUsedLocalConstant (enumerator_3931.current_lkey (HERE), enumerator_3931.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_3931.current_mType (HERE), enumerator_3931.current_lkey (HERE), enumerator_3931.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 126)), GALGAS_bool (true), enumerator_3931.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 122)) ;
        }
      }else if (kBoolFalse == test_1) {
        {
        result_outVariableMap.setter_insertDefinedLocalVariable (enumerator_3931.current_lkey (HERE), enumerator_3931.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_register (enumerator_3931.current_mType (HERE), enumerator_3931.current_lkey (HERE), enumerator_3931.current_mAddress (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 137)), GALGAS_bool (true), enumerator_3931.current_mRegisterFieldAccessMap (HERE), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 133)) ;
        }
      }
    }
    enumerator_3931.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_4996 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_4996.hasCurrentObject ()) {
    {
    result_outVariableMap.setter_insertUsedLocalConstant (enumerator_4996.current_lkey (HERE), enumerator_4996.current_mValue (HERE).mAttribute_mType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_globalConstant (enumerator_4996.current_mValue (HERE), enumerator_4996.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("variable-map.galgas", 151)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 153)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 147)) ;
    }
    enumerator_4996.gotoNextObject () ;
  }
  cEnumerator_taskVariableMap enumerator_5356 (constinArgument_inContext.mAttribute_mTaskVariableMap, kEnumeration_up) ;
  while (enumerator_5356.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inTaskName.objectCompare (enumerator_5356.current_lkey (HERE).mAttribute_string.getter_stringByDeletingPathExtension (SOURCE_FILE ("variable-map.galgas", 160)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      result_outVariableMap.setter_insertDefinedLocalVariable (GALGAS_lstring::constructor_new (enumerator_5356.current_lkey (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("variable-map.galgas", 162)), enumerator_5356.current_lkey (HERE).mAttribute_location  COMMA_SOURCE_FILE ("variable-map.galgas", 162)), enumerator_5356.current_mType (HERE), GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_taskVariable (enumerator_5356.current_mType (HERE), constinArgument_inTaskName, enumerator_5356.current_lkey (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("variable-map.galgas", 165))  COMMA_SOURCE_FILE ("variable-map.galgas", 165)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 167)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 161)) ;
      }
    }
    enumerator_5356.gotoNextObject () ;
  }
//---
  return result_outVariableMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initialVariableMapForTaskRoutine [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initialVariableMapForTaskRoutine (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_semanticContext operand1 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_initialVariableMapForTaskRoutine (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initialVariableMapForTaskRoutine ("initialVariableMapForTaskRoutine",
                                                                                  functionWithGenericHeader_initialVariableMapForTaskRoutine,
                                                                                  & kTypeDescriptor_GALGAS_variableMap,
                                                                                  2,
                                                                                  functionArgs_initialVariableMapForTaskRoutine) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'variableMapWithConstants'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap function_variableMapWithConstants (const GALGAS_semanticContext & constinArgument_inContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_variableMap result_outVariableMap ; // Returned variable
  result_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 181)) ;
  cEnumerator_globalConstantMap enumerator_6138 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_6138.hasCurrentObject ()) {
    {
    result_outVariableMap.setter_insertUsedLocalConstant (enumerator_6138.current_lkey (HERE), enumerator_6138.current_mValue (HERE).mAttribute_mType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_globalConstant (enumerator_6138.current_mValue (HERE), enumerator_6138.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("variable-map.galgas", 188)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 190)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 184)) ;
    }
    enumerator_6138.gotoNextObject () ;
  }
//---
  return result_outVariableMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_variableMapWithConstants [2] = {
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_variableMapWithConstants (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* §§ inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_semanticContext operand0 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_variableMapWithConstants (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_variableMapWithConstants ("variableMapWithConstants",
                                                                          functionWithGenericHeader_variableMapWithConstants,
                                                                          & kTypeDescriptor_GALGAS_variableMap,
                                                                          1,
                                                                          functionArgs_variableMapWithConstants) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempVariable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempVariable (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                 GALGAS_operandIR & outArgument_outTempVariable,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  outArgument_outTempVariable = GALGAS_operandIR::constructor_new (constinArgument_inType, GALGAS_valueIR::constructor_llvmLocalObject (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("variable-map.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 204))  COMMA_SOURCE_FILE ("variable-map.galgas", 204))  COMMA_SOURCE_FILE ("variable-map.galgas", 204)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 205)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'getNewTempObjectInMemory'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempObjectInMemory (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_objectInMemoryIR & outArgument_outTempVariable,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  outArgument_outTempVariable = GALGAS_objectInMemoryIR::constructor_localValue (constinArgument_inType, GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("variable-map.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 215))  COMMA_SOURCE_FILE ("variable-map.galgas", 215)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 216)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedDeclarationList (const GALGAS_ast constinArgument_inAST,
                                          const GALGAS_string constinArgument_inSourceFile,
                                          const GALGAS_location constinArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 28)) ;
  cEnumerator_declarationListAST enumerator_1683 (constinArgument_inAST.mAttribute_mDeclarationList, kEnumeration_up) ;
  while (enumerator_1683.hasCurrentObject ()) {
    callCategoryMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclaration *) enumerator_1683.current_mDeclaration (HERE).ptr (), var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 30)) ;
    enumerator_1683.gotoNextObject () ;
  }
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mBootList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mInitList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 33)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mExceptionClauses, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 34)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mProcedureListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mExternProcList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 36)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mFunctionListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mSectionListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mServiceListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  categoryMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mTaskList, var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 42)) ;
  cEnumerator_stringlist enumerator_2677 (var_precedenceGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 44)), kEnumeration_up) ;
  while (enumerator_2677.hasCurrentObject ()) {
    GALGAS_stringlist var_split = enumerator_2677.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 46)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 46)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n = var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)) ;
        GALGAS_integerDeclaration var_declaration = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (false), var_n  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
        callCategoryMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration.ptr (), var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n = var_split.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
          GALGAS_integerDeclaration var_declaration = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (true), var_n  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
          callCategoryMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration.ptr (), var_precedenceGraph, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)) ;
        }
      }
    }
    enumerator_2677.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 59)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeTypeDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s = var_precedenceGraph.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 60)) ;
    GALGAS_string var_filePath = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
    GALGAS_bool joker_3649 ; // Joker input parameter
    var_s.method_writeToFileWhenDifferentContents (var_filePath, joker_3649, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 62)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 65)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3871 (var_precedenceGraph.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 67)), kEnumeration_up) ;
    while (enumerator_3871.hasCurrentObject ()) {
      GALGAS_location location_7 (enumerator_3871.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, enumerator_3871.current_mValue (HERE).mAttribute_string.add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 68))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 68)) ;
      enumerator_3871.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST ;
    GALGAS_lstringlist joker_4018 ; // Joker input parameter
    GALGAS_lstringlist joker_4093 ; // Joker input parameter
    var_precedenceGraph.method_topologicalSort (outArgument_outDeclarationListAST, joker_4018, var_unsortedSemanticDeclarationListAST, joker_4093, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 71)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 77)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 79)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 78)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)) ;
      cEnumerator_declarationListAST enumerator_4387 (var_unsortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_4387.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callCategoryGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4387.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 82)) ;
        enumerator_4387.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 84)) ;
      cEnumerator_declarationListAST enumerator_4559 (var_unsortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_4559.hasCurrentObject ()) {
        inCompiler->emitSemanticError (callCategoryGetter_location ((const cPtr_abstractDeclaration *) enumerator_4559.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)), GALGAS_string ("the ").add_operation (callCategoryGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4559.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)) ;
        enumerator_4559.gotoNextObject () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Routine 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkMode (const GALGAS_stringset constinArgument_inRequiredModes,
                        const GALGAS_stringset constinArgument_inPossibleModes,
                        const GALGAS_location constinArgument_inErrorLocation,
                        C_Compiler * inCompiler
                        COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inPossibleModes.operator_and (constinArgument_inRequiredModes COMMA_SOURCE_FILE ("context.galgas", 89)).objectCompare (constinArgument_inRequiredModes)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_missingModes = constinArgument_inRequiredModes.substract_operation (constinArgument_inPossibleModes, inCompiler COMMA_SOURCE_FILE ("context.galgas", 90)) ;
    GALGAS_string var_s = GALGAS_string ("cannot be accessed in mode") ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_missingModes.getter_count (SOURCE_FILE ("context.galgas", 92)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    var_s.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 92)) ;
    var_s.plusAssign_operation(GALGAS_string (": "), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 93)) ;
    cEnumerator_stringset enumerator_3922 (var_missingModes, kEnumeration_up) ;
    while (enumerator_3922.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("`").add_operation (enumerator_3922.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 95)) ;
      if (enumerator_3922.hasNextObject ()) {
        var_s.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 96)) ;
      }
      enumerator_3922.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, var_s  COMMA_SOURCE_FILE ("context.galgas", 98)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const GALGAS_declarationListAST constinArgument_inDeclarationListAST,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 219)) ;
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.setter_insertKey (function_bootModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 221)).getter_nowhere (SOURCE_FILE ("context.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 221)) ;
  }
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.setter_insertKey (function_initModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 222)).getter_nowhere (SOURCE_FILE ("context.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 222)) ;
  }
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.setter_insertKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 223)).getter_nowhere (SOURCE_FILE ("context.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 223)) ;
  }
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.setter_insertKey (function_sectionModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 224)).getter_nowhere (SOURCE_FILE ("context.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 224)) ;
  }
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.setter_insertKey (function_kernelModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 225)).getter_nowhere (SOURCE_FILE ("context.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 225)) ;
  }
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.setter_insertKey (function_isrModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 226)).getter_nowhere (SOURCE_FILE ("context.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 226)) ;
  }
  {
  outArgument_outSemanticContext.mAttribute_mModeMap.setter_insertKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 227)).getter_nowhere (SOURCE_FILE ("context.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 227)) ;
  }
  cEnumerator_initList enumerator_9347 (constinArgument_inAST.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_9347.hasCurrentObject ()) {
    categoryMethod_enterInContext (enumerator_9347.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 230)) ;
    enumerator_9347.gotoNextObject () ;
  }
  cEnumerator_exceptionClauseListAST enumerator_9498 (constinArgument_inAST.mAttribute_mExceptionClauses, kEnumeration_up) ;
  while (enumerator_9498.hasCurrentObject ()) {
    categoryMethod_enterInContext (enumerator_9498.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 234)) ;
    enumerator_9498.gotoNextObject () ;
  }
  cEnumerator_declarationListAST enumerator_9623 (constinArgument_inDeclarationListAST, kEnumeration_up) ;
  while (enumerator_9623.hasCurrentObject ()) {
    callCategoryMethod_enterInContext ((const cPtr_abstractDeclaration *) enumerator_9623.current_mDeclaration (HERE).ptr (), constinArgument_inAST.mAttribute_mProcedureListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 238)) ;
    enumerator_9623.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inAST.mAttribute_mExceptionTypes.getter_length (SOURCE_FILE ("context.galgas", 245)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 246)).getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("exactly one exception type declaration should be provided (found:").add_operation (constinArgument_inAST.mAttribute_mExceptionTypes.getter_length (SOURCE_FILE ("context.galgas", 247)).getter_string (SOURCE_FILE ("context.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 247)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 247))  COMMA_SOURCE_FILE ("context.galgas", 246)) ;
    cEnumerator_exceptionTypesAST enumerator_10055 (constinArgument_inAST.mAttribute_mExceptionTypes, kEnumeration_up) ;
    while (enumerator_10055.hasCurrentObject ()) {
      GALGAS_location location_2 (enumerator_10055.current_mExceptionCodeTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("exception type declaration is here")  COMMA_SOURCE_FILE ("context.galgas", 249)) ;
      enumerator_10055.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_lstring var_exceptionCodeTypeName ;
    GALGAS_lstring var_exceptionLineTypeName ;
    constinArgument_inAST.mAttribute_mExceptionTypes.method_first (var_exceptionCodeTypeName, var_exceptionLineTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 252)) ;
    outArgument_outSemanticContext.mAttribute_mExceptionCodeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.mAttribute_mTypeMap, var_exceptionCodeTypeName, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 253)) ;
    outArgument_outSemanticContext.mAttribute_mExceptionLineType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.mAttribute_mTypeMap, var_exceptionLineTypeName, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 257)) ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.mAttribute_mGlobalConstantMap, constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 263)) ;
  }
  {
  routine_enterControlRegistersInContext (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, outArgument_outSemanticContext, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 269)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.mAttribute_mControlRegisterMap, constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 273)) ;
  }
  categoryMethod_enterInContext (constinArgument_inAST.mAttribute_mProcedureListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 278)) ;
  categoryMethod_enterExternProcInContext (constinArgument_inAST.mAttribute_mExternProcList, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 279)) ;
  categoryMethod_enterInContext (constinArgument_inAST.mAttribute_mSectionListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 280)) ;
  categoryMethod_enterInContext (constinArgument_inAST.mAttribute_mFunctionListAST, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 281)) ;
  categoryMethod_enterInContext (constinArgument_inAST.mAttribute_mServiceListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 282)) ;
  categoryMethod_enterInContext (constinArgument_inAST.mAttribute_mTaskList, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 284)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 286)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    cEnumerator_requiredProcedureDeclarationListAST enumerator_11705 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
    while (enumerator_11705.hasCurrentObject ()) {
      cEnumerator_lstringlist enumerator_11760 (enumerator_11705.current (HERE).mAttribute_mProcedureModeList, kEnumeration_up) ;
      while (enumerator_11760.hasCurrentObject ()) {
        outArgument_outSemanticContext.mAttribute_mModeMap.method_searchKey (enumerator_11760.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 289)) ;
        enumerator_11760.gotoNextObject () ;
      }
      enumerator_11705.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 294)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    cEnumerator_globalVarDeclarationList enumerator_11960 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, kEnumeration_up) ;
    while (enumerator_11960.hasCurrentObject ()) {
      categoryMethod_enterInContext (enumerator_11960.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 296)) ;
      enumerator_11960.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'solveInferredType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy function_solveInferredType (const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inTargetType,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inSourceType,
                                                           const GALGAS_location & constinArgument_inErrorLocation,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result_outType ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSourceType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("context.galgas", 312)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("context.galgas", 313)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("context.galgas", 314)) ;
      result_outType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      result_outType = constinArgument_inTargetType ;
    }
  }else if (kBoolFalse == test_0) {
    result_outType = constinArgument_inSourceType ;
  }
//---
  return result_outType ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_solveInferredType [4] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_solveInferredType (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_solveInferredType (operand0,
                                     operand1,
                                     operand2,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_solveInferredType ("solveInferredType",
                                                                   functionWithGenericHeader_solveInferredType,
                                                                   & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
                                                                   3,
                                                                   functionArgs_solveInferredType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_combineTypeNamesForInfixOperator (const GALGAS_string & constinArgument_inLeftTypeName,
                                                          const GALGAS_string & constinArgument_inRightTypeName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 326)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 326)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 326)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 326)).getter_nowhere (SOURCE_FILE ("context.galgas", 326)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_combineTypeNamesForInfixOperator [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_combineTypeNamesForInfixOperator (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* §§ inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_combineTypeNamesForInfixOperator (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_combineTypeNamesForInfixOperator ("combineTypeNamesForInfixOperator",
                                                                                  functionWithGenericHeader_combineTypeNamesForInfixOperator,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_combineTypeNamesForInfixOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR function_checkAssignmentCompatibility (const GALGAS_operandIR & constinArgument_inSourceValue,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inTargetAnnotationType,
                                                        const GALGAS_location & constinArgument_inErrorLocation,
                                                        const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIR result_outResult ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inTargetAnnotationType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 14)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = constinArgument_inSourceValue ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetAnnotationType.objectCompare (constinArgument_inSourceValue.mAttribute_mType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool test_2 = constinArgument_inSourceValue.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 17)).getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 17)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inTargetAnnotationType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 17)).getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 17)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value ;
        constinArgument_inSourceValue.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
        GALGAS_bigint var_minTarget ;
        GALGAS_bigint var_maxTarget ;
        GALGAS_bool joker_1264 ; // Joker input parameter
        GALGAS_uint joker_1276 ; // Joker input parameter
        constinArgument_inTargetAnnotationType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 19)).method_integer (var_minTarget, var_maxTarget, joker_1264, joker_1276, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (var_minTarget)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget.objectCompare (var_value)) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large")  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
          result_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          result_outResult = GALGAS_operandIR::constructor_new (constinArgument_inTargetAnnotationType, constinArgument_inSourceValue.mAttribute_mValue  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)) ;
        }
      }else if (kBoolFalse == test_3) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (constinArgument_inTargetAnnotationType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)).add_operation (constinArgument_inSourceValue.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      result_outResult = constinArgument_inSourceValue ;
    }
  }
  const enumGalgasBool test_6 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, result_outResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the $").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [5] = {
  & kTypeDescriptor_GALGAS_operandIR,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkAssignmentCompatibility (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* §§ inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_operandIR operand0 = GALGAS_operandIR::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                     inCompiler
                                                                     COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_bool operand3 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_checkAssignmentCompatibility (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_operandIR,
                                                                              4,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const GALGAS_string constinArgument_inSourceFile,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticStringMap constinArgument_inGlobalLiteralStringMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 68)) ;
  outArgument_outIntermediateCodeStruct.mAttribute_mTaskVariableMap = constinArgument_inSemanticContext.mAttribute_mTaskVariableMap ;
  outArgument_outIntermediateCodeStruct.mAttribute_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_3455 (constinArgument_inAST.mAttribute_mRequiredProcList, kEnumeration_up) ;
  while (enumerator_3455.hasCurrentObject ()) {
    outArgument_outIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.addAssign_operation (GALGAS_string (".").add_operation (enumerator_3455.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 72))  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 72)) ;
    enumerator_3455.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_3643 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationList, kEnumeration_up) ;
  while (enumerator_3643.hasCurrentObject ()) {
    categoryMethod_semanticAnalysis (enumerator_3643.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 76)) ;
    enumerator_3643.gotoNextObject () ;
  }
  {
  routine_controlRegistersSemanticAnalysis (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 82)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 88)) ;
  cEnumerator_declarationListAST enumerator_4068 (constinArgument_inAST.mAttribute_mDeclarationList, kEnumeration_up) ;
  while (enumerator_4068.hasCurrentObject ()) {
    callCategoryMethod_semanticAnalysis ((const cPtr_abstractDeclaration *) enumerator_4068.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 90)) ;
    enumerator_4068.gotoNextObject () ;
  }
  categoryMethod_procedureSemanticAnalysis (constinArgument_inAST.mAttribute_mProcedureListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 97)), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 96)) ;
  categoryMethod_semanticAnalysis (constinArgument_inAST.mAttribute_mTaskList, constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 102)) ;
  categoryMethod_sectionSemanticAnalysis (constinArgument_inAST.mAttribute_mSectionListAST, constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 107)) ;
  categoryMethod_serviceSemanticAnalysis (constinArgument_inAST.mAttribute_mServiceListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 113)), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 112)) ;
  categoryMethod_externProcedureSemanticAnalysis (constinArgument_inAST.mAttribute_mExternProcList, constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 118)) ;
  cEnumerator_functionDeclarationListAST enumerator_5125 (constinArgument_inAST.mAttribute_mFunctionListAST, kEnumeration_up) ;
  while (enumerator_5125.hasCurrentObject ()) {
    categoryMethod_functionSemanticAnalysis (enumerator_5125.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 124)) ;
    enumerator_5125.gotoNextObject () ;
  }
  cEnumerator_bootList enumerator_5323 (constinArgument_inAST.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_5323.hasCurrentObject ()) {
    categoryMethod_bootSemanticAnalysis (enumerator_5323.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 131)) ;
    enumerator_5323.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_5513 (constinArgument_inAST.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_5513.hasCurrentObject ()) {
    categoryMethod_initSemanticAnalysis (enumerator_5513.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 138)) ;
    enumerator_5513.gotoNextObject () ;
  }
  cEnumerator_exceptionClauseListAST enumerator_5744 (constinArgument_inAST.mAttribute_mExceptionClauses, kEnumeration_up) ;
  while (enumerator_5744.hasCurrentObject ()) {
    categoryMethod_exceptionSemanticAnalysis (enumerator_5744.current (HERE), constinArgument_inSemanticContext, var_temporaries, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 146)) ;
    enumerator_5744.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 153)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 159)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s = var_temporaries.mAttribute_mSubprogramInvocationGraph.getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 160)) ;
    GALGAS_string var_filePath = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 161)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 161)) ;
    GALGAS_bool joker_6412 ; // Joker input parameter
    var_s.method_writeToFileWhenDifferentContents (var_filePath, joker_6412, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 162)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 165)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList = var_temporaries.mAttribute_mSubprogramInvocationGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 166)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_6803 (var_undefinedNodeKeyList, kEnumeration_up) ;
      while (enumerator_6803.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_6803.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 170)) ;
        enumerator_6803.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 172)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList ;
      GALGAS_lstringlist var_unsortedLKeyList ;
      var_temporaries.mAttribute_mSubprogramInvocationGraph.method_circularities (var_unsortedInformationList, var_unsortedLKeyList COMMA_SOURCE_FILE ("semantic-analysis.galgas", 174)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 178)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_s = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7200 (var_unsortedLKeyList, kEnumeration_up) ;
        while (enumerator_7200.hasCurrentObject ()) {
          var_s.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7200.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 181)) ;
          enumerator_7200.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 183)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterFormalArguments'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterFormalArguments (const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_procFormalArgumentList constinArgument_inFormalArgumentPassingMode,
                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                   GALGAS_procFormalArgumentListForGeneration & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_procFormalArgumentList enumerator_1234 (constinArgument_inFormalArgumentPassingMode, kEnumeration_up) ;
  while (enumerator_1234.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_1234.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)) ;
    switch (enumerator_1234.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_1234.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 33)), var_typeProxy.getter_copiable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 34)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("semantic-routines.galgas", 35)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 29)) ;
        }
        ioArgument_ioFormalArguments.addAssign_operation (enumerator_1234.current_mFormalArgumentPassingMode (HERE), var_typeProxy, function_llvmNameForLocalVariable (enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 39))  COMMA_SOURCE_FILE ("semantic-routines.galgas", 39)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_1234.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 45)), var_typeProxy.getter_copiable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 46)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("semantic-routines.galgas", 47)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 41)) ;
        }
        ioArgument_ioFormalArguments.addAssign_operation (enumerator_1234.current_mFormalArgumentPassingMode (HERE), var_typeProxy, function_llvmNameForLocalVariable (enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 51))  COMMA_SOURCE_FILE ("semantic-routines.galgas", 51)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_1234.current_mFormalArgumentName (HERE), var_typeProxy, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_typeProxy, enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 57)), var_typeProxy.getter_copiable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 58)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("semantic-routines.galgas", 59)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 53)) ;
        }
        ioArgument_ioFormalArguments.addAssign_operation (enumerator_1234.current_mFormalArgumentPassingMode (HERE), var_typeProxy, function_llvmNameForLocalVariable (enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 63))  COMMA_SOURCE_FILE ("semantic-routines.galgas", 63)) ;
      }
      break ;
    }
    enumerator_1234.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'routineSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSemanticAnalysis (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inReceiverType,
                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                      const GALGAS_lstringlist constinArgument_inRoutineModeList,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_procFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                      const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                      const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                      const GALGAS_bool constinArgument_inWarnIfUnused,
                                      const GALGAS_bool constinArgument_inGlobalProcedure,
                                      const GALGAS_bool constinArgument_inWeakProcedure,
                                      const GALGAS_bool constinArgument_inNullOnNoException,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_procedureModeSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semantic-routines.galgas", 87)) ;
  cEnumerator_lstringlist enumerator_3498 (constinArgument_inRoutineModeList, kEnumeration_up) ;
  while (enumerator_3498.hasCurrentObject ()) {
    constinArgument_inContext.mAttribute_mModeMap.method_searchKey (enumerator_3498.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 89)) ;
    var_procedureModeSet.addAssign_operation (enumerator_3498.current (HERE).mAttribute_mValue.mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 90)) ;
    enumerator_3498.gotoNextObject () ;
  }
  GALGAS_variableMap var_variableMap = function_initialVariableMap (function_procNameForInvocationGraph (constinArgument_inReceiverType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 94)).mAttribute_string, constinArgument_inContext, var_procedureModeSet.getter_hasKey (function_userModeName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 96)) COMMA_SOURCE_FILE ("semantic-routines.galgas", 96)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 93)) ;
  GALGAS_procFormalArgumentListForGeneration var_formalArguments = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 100)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap, var_formalArguments, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 101)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_procedure:
    {
      var_routineNameForInvocationGraph = function_procNameForInvocationGraph (constinArgument_inReceiverType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 110)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineNameForInvocationGraph = function_sectionNameForInvocationGraph (constinArgument_inReceiverType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 111)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineNameForInvocationGraph = function_serviceNameForInvocationGraph (constinArgument_inReceiverType, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 114)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 114)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 115)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 121)) ;
  categoryMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, var_routineNameForInvocationGraph, constinArgument_inContext, var_procedureModeSet, var_procedureModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 126)) COMMA_SOURCE_FILE ("semantic-routines.galgas", 126)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 126)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 122)) ;
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 133)) ;
  GALGAS_lstring temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 135)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("semantic-routines.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 136)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("semantic-routines.galgas", 136)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 138)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 138)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("semantic-routines.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 138)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("semantic-routines.galgas", 138)) ;
  }
  GALGAS_lstring var_routineMangledName = temp_1 ;
  const enumGalgasBool test_3 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_hasKey (var_routineMangledName.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 140)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_bool var_weak = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_mWeakForKey (var_routineMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 141)) ;
    GALGAS_bool test_4 = constinArgument_inWeakProcedure ;
    if (kBoolTrue == test_4.boolEnum ()) {
      test_4 = var_weak.operator_not (SOURCE_FILE ("semantic-routines.galgas", 142)) ;
    }
    const enumGalgasBool test_5 = test_4.boolEnum () ;
    if (kBoolTrue == test_5) {
    }else if (kBoolFalse == test_5) {
      GALGAS_bool test_6 = constinArgument_inWeakProcedure ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = var_weak ;
      }
      const enumGalgasBool test_7 = test_6.boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (var_routineMangledName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("this weak procedure overrides a weak procedure")  COMMA_SOURCE_FILE ("semantic-routines.galgas", 145)) ;
      }else if (kBoolFalse == test_7) {
        GALGAS_bool test_9 = constinArgument_inWeakProcedure.operator_not (SOURCE_FILE ("semantic-routines.galgas", 146)) ;
        if (kBoolTrue == test_9.boolEnum ()) {
          test_9 = var_weak ;
        }
        const enumGalgasBool test_10 = test_9.boolEnum () ;
        if (kBoolTrue == test_10) {
          {
          GALGAS_procFormalArgumentListForGeneration joker_6099_8 ; // Joker input parameter
          GALGAS_instructionListIR joker_6099_7 ; // Joker input parameter
          GALGAS_bool joker_6099_6 ; // Joker input parameter
          GALGAS_bool joker_6099_5 ; // Joker input parameter
          GALGAS_bool joker_6099_4 ; // Joker input parameter
          GALGAS_bool joker_6099_3 ; // Joker input parameter
          GALGAS_bool joker_6099_2 ; // Joker input parameter
          GALGAS_routineKind joker_6099_1 ; // Joker input parameter
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_removeKey (var_routineMangledName, joker_6099_8, joker_6099_7, joker_6099_6, joker_6099_5, joker_6099_4, joker_6099_3, joker_6099_2, joker_6099_1, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 147)) ;
          }
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName, var_formalArguments, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 152)), constinArgument_inWarnIfUnused, constinArgument_inWeakProcedure, constinArgument_inNullOnNoException, constinArgument_inGlobalProcedure, constinArgument_inRoutineKind, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 148)) ;
          }
        }else if (kBoolFalse == test_10) {
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName, var_formalArguments, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 164)), constinArgument_inWarnIfUnused, constinArgument_inWeakProcedure, constinArgument_inNullOnNoException, constinArgument_inGlobalProcedure, constinArgument_inRoutineKind, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 160)) ;
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName, var_formalArguments, var_instructionGenerationList, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 177)), constinArgument_inWarnIfUnused, constinArgument_inWeakProcedure, constinArgument_inNullOnNoException, constinArgument_inGlobalProcedure, constinArgument_inRoutineKind, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 173)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'bootModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_bootModeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("boot") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_bootModeName = false ;
static GALGAS_string gOnceFunctionResult_bootModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_bootModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_bootModeName) {
    gOnceFunctionResult_bootModeName = onceFunction_bootModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_bootModeName = true ;
  }
  return gOnceFunctionResult_bootModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_bootModeName (void) {
  gOnceFunctionResult_bootModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_bootModeName (NULL,
                                                          releaseOnceFunctionResult_bootModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_bootModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_bootModeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_bootModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_bootModeName ("bootModeName",
                                                              functionWithGenericHeader_bootModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_bootModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'initModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_initModeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("init") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_initModeName = false ;
static GALGAS_string gOnceFunctionResult_initModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_initModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_initModeName) {
    gOnceFunctionResult_initModeName = onceFunction_initModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_initModeName = true ;
  }
  return gOnceFunctionResult_initModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_initModeName (void) {
  gOnceFunctionResult_initModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_initModeName (NULL,
                                                          releaseOnceFunctionResult_initModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initModeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_initModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initModeName ("initModeName",
                                                              functionWithGenericHeader_initModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_initModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'sectionModeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_sectionModeName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("section") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_sectionModeName = false ;
static GALGAS_string gOnceFunctionResult_sectionModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_sectionModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_sectionModeName) {
    gOnceFunctionResult_sectionModeName = onceFunction_sectionModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_sectionModeName = true ;
  }
  return gOnceFunctionResult_sectionModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_sectionModeName (void) {
  gOnceFunctionResult_sectionModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_sectionModeName (NULL,
                                                             releaseOnceFunctionResult_sectionModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_sectionModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_sectionModeName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_sectionModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_sectionModeName ("sectionModeName",
                                                                 functionWithGenericHeader_sectionModeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_sectionModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'userModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_userModeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("user") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_userModeName = false ;
static GALGAS_string gOnceFunctionResult_userModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_userModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userModeName) {
    gOnceFunctionResult_userModeName = onceFunction_userModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userModeName = true ;
  }
  return gOnceFunctionResult_userModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_userModeName (void) {
  gOnceFunctionResult_userModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_userModeName (NULL,
                                                          releaseOnceFunctionResult_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_userModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_userModeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_userModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_userModeName ("userModeName",
                                                              functionWithGenericHeader_userModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'kernelModeName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_kernelModeName (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("kernel") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_kernelModeName = false ;
static GALGAS_string gOnceFunctionResult_kernelModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_kernelModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_kernelModeName) {
    gOnceFunctionResult_kernelModeName = onceFunction_kernelModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_kernelModeName = true ;
  }
  return gOnceFunctionResult_kernelModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_kernelModeName (void) {
  gOnceFunctionResult_kernelModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_kernelModeName (NULL,
                                                            releaseOnceFunctionResult_kernelModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_kernelModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_kernelModeName (C_Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_kernelModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_kernelModeName ("kernelModeName",
                                                                functionWithGenericHeader_kernelModeName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                0,
                                                                functionArgs_kernelModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Once function 'isrModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_isrModeName (C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("isr") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_isrModeName = false ;
static GALGAS_string gOnceFunctionResult_isrModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_isrModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrModeName) {
    gOnceFunctionResult_isrModeName = onceFunction_isrModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrModeName = true ;
  }
  return gOnceFunctionResult_isrModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_isrModeName (void) {
  gOnceFunctionResult_isrModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_isrModeName (NULL,
                                                         releaseOnceFunctionResult_isrModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_isrModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_isrModeName (C_Compiler * inCompiler,
                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                            const GALGAS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  return function_isrModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_isrModeName ("isrModeName",
                                                             functionWithGenericHeader_isrModeName,
                                                             & kTypeDescriptor_GALGAS_string,
                                                             0,
                                                             functionArgs_isrModeName) ;

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
  GALGAS_string var_s = GALGAS_string ("taskproc ").add_operation (inArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 44)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 44)).add_operation (inArgument_inProcName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 44)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inProcName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 45)) ;
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
//                                        Function 'procNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_procNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                    GALGAS_lstring inArgument_inName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("proc") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 52)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 53)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 55)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 56)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_procNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_procNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* §§ inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_procNameForInvocationGraph (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_procNameForInvocationGraph ("procNameForInvocationGraph",
                                                                            functionWithGenericHeader_procNameForInvocationGraph,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            2,
                                                                            functionArgs_procNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'sectionNameForInvocationGraph'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_sectionNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                       GALGAS_lstring inArgument_inName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("section") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 63)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 64)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 67)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_sectionNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_sectionNameForInvocationGraph (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* §§ inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_sectionNameForInvocationGraph (operand0,
                                                 operand1,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_sectionNameForInvocationGraph ("sectionNameForInvocationGraph",
                                                                               functionWithGenericHeader_sectionNameForInvocationGraph,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               2,
                                                                               functionArgs_sectionNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'serviceNameForInvocationGraph'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_serviceNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                       GALGAS_lstring inArgument_inName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("service") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 74)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 75)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 77)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 78)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_serviceNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_serviceNameForInvocationGraph (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* §§ inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_serviceNameForInvocationGraph (operand0,
                                                 operand1,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_serviceNameForInvocationGraph ("serviceNameForInvocationGraph",
                                                                               functionWithGenericHeader_serviceNameForInvocationGraph,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               2,
                                                                               functionArgs_serviceNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'funcNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_funcNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy inArgument_inReceiverType,
                                                    GALGAS_lstring inArgument_inName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("func") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 85)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s.plusAssign_operation(GALGAS_string (" $").add_operation (inArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 86)) ;
  }
  var_s.plusAssign_operation(GALGAS_string (" ").add_operation (inArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 88)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inName.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 89)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_funcNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_funcNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* §§ inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_funcNameForInvocationGraph (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_funcNameForInvocationGraph ("funcNameForInvocationGraph",
                                                                            functionWithGenericHeader_funcNameForInvocationGraph,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            2,
                                                                            functionArgs_funcNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_initNameForInvocationGraph (GALGAS_lbigint inArgument_inPriority,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("init ").add_operation (inArgument_inPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 95)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inPriority.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 96)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initNameForInvocationGraph [2] = {
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* §§ inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_lbigint operand0 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_initNameForInvocationGraph (operand0,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initNameForInvocationGraph ("initNameForInvocationGraph",
                                                                            functionWithGenericHeader_initNameForInvocationGraph,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            1,
                                                                            functionArgs_initNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'exceptionNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_exceptionNameForInvocationGraph (GALGAS_string inArgument_inName,
                                                         GALGAS_lbigint inArgument_inPriority,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outName ; // Returned variable
  GALGAS_string var_s = GALGAS_string ("exception . ").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 102)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 102)).add_operation (inArgument_inPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 102)) ;
  result_outName = GALGAS_lstring::constructor_new (var_s, inArgument_inPriority.mAttribute_location  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 103)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_exceptionNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_exceptionNameForInvocationGraph (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* §§ inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lbigint operand1 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_exceptionNameForInvocationGraph (operand0,
                                                   operand1,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_exceptionNameForInvocationGraph ("exceptionNameForInvocationGraph",
                                                                                 functionWithGenericHeader_exceptionNameForInvocationGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 2,
                                                                                 functionArgs_exceptionNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'mangledNameForType'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mangledNameForType (GALGAS_string inArgument_inName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outPrefix ; // Returned variable
  result_outPrefix = GALGAS_string ("type.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 109)) ;
//---
  return result_outPrefix ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mangledNameForType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mangledNameForType (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* §§ inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mangledNameForType (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mangledNameForType ("mangledNameForType",
                                                                    functionWithGenericHeader_mangledNameForType,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_mangledNameForType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'literalStringName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalStringName (const GALGAS_uint & constinArgument_inIndex,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalStringName (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_literalStringName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'literalCharacterArrayName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalCharacterArrayName (const GALGAS_uint & constinArgument_inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 121)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalCharacterArrayName (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_literalCharacterArrayName (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'staticStringTypeName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticStringTypeName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("staticString") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticStringTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (NULL,
                                                                  releaseOnceFunctionResult_staticStringTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticStringTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticStringTypeName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'boolTypeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_boolTypeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("bool") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'staticIntegerTypeName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticIntegerTypeName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("staticInt") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticIntegerTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticIntegerTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticIntegerTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticIntegerTypeName) {
    gOnceFunctionResult_staticIntegerTypeName = onceFunction_staticIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticIntegerTypeName = true ;
  }
  return gOnceFunctionResult_staticIntegerTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticIntegerTypeName (void) {
  gOnceFunctionResult_staticIntegerTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticIntegerTypeName (NULL,
                                                                   releaseOnceFunctionResult_staticIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticIntegerTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticIntegerTypeName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_staticIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticIntegerTypeName ("staticIntegerTypeName",
                                                                       functionWithGenericHeader_staticIntegerTypeName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_staticIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForFunction'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForFunction (GALGAS_string inArgument_inName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("func.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 145)) ;
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
//                                           Function 'llvmNameForProcedure'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForProcedure (GALGAS_string inArgument_inName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("proc.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 151)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForProcedure [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForProcedure (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* §§ inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForProcedure (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForProcedure ("llvmNameForProcedure",
                                                                      functionWithGenericHeader_llvmNameForProcedure,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_llvmNameForProcedure) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForSectionCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionCall (GALGAS_string inArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("section.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 157)) ;
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
  result_outName = GALGAS_string ("section.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 163)) ;
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
//                                     Function 'llvmNameForServiceImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForServiceImplementation (GALGAS_string inArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("service.implementation.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 169)) ;
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
//                                          Function 'llvmNameForServiceCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForServiceCall (GALGAS_string inArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("service.call.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 175)) ;
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
//                                         Function 'llvmNameForLocalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForLocalVariable (GALGAS_string inArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("var.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 181)) ;
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
  result_outName = GALGAS_string ("gvar.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 187)) ;
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
  result_outName = GALGAS_string ("register.").add_operation (inArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 193)) ;
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
//                                     Once function 'noWarningIfUnusedAttribute'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_noWarningIfUnusedAttribute (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("noWarningIfUnused") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_noWarningIfUnusedAttribute = false ;
static GALGAS_string gOnceFunctionResult_noWarningIfUnusedAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_noWarningIfUnusedAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noWarningIfUnusedAttribute) {
    gOnceFunctionResult_noWarningIfUnusedAttribute = onceFunction_noWarningIfUnusedAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noWarningIfUnusedAttribute = true ;
  }
  return gOnceFunctionResult_noWarningIfUnusedAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_noWarningIfUnusedAttribute (void) {
  gOnceFunctionResult_noWarningIfUnusedAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_noWarningIfUnusedAttribute (NULL,
                                                                        releaseOnceFunctionResult_noWarningIfUnusedAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_noWarningIfUnusedAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_noWarningIfUnusedAttribute (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_noWarningIfUnusedAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_noWarningIfUnusedAttribute ("noWarningIfUnusedAttribute",
                                                                            functionWithGenericHeader_noWarningIfUnusedAttribute,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_noWarningIfUnusedAttribute) ;

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
//                                   Once function 'nullWhenPanicDisabledAttribute'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_nullWhenPanicDisabledAttribute (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("nullWhenPanicDisabled") ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_nullWhenPanicDisabledAttribute = false ;
static GALGAS_string gOnceFunctionResult_nullWhenPanicDisabledAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_nullWhenPanicDisabledAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_nullWhenPanicDisabledAttribute) {
    gOnceFunctionResult_nullWhenPanicDisabledAttribute = onceFunction_nullWhenPanicDisabledAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_nullWhenPanicDisabledAttribute = true ;
  }
  return gOnceFunctionResult_nullWhenPanicDisabledAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_nullWhenPanicDisabledAttribute (void) {
  gOnceFunctionResult_nullWhenPanicDisabledAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_nullWhenPanicDisabledAttribute (NULL,
                                                                            releaseOnceFunctionResult_nullWhenPanicDisabledAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_nullWhenPanicDisabledAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_nullWhenPanicDisabledAttribute (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_nullWhenPanicDisabledAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_nullWhenPanicDisabledAttribute ("nullWhenPanicDisabledAttribute",
                                                                                functionWithGenericHeader_nullWhenPanicDisabledAttribute,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                0,
                                                                                functionArgs_nullWhenPanicDisabledAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'stackNameForTask'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_stackNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("@task.stack.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 223)) ;
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
//                                           Function 'stackAddressForTask'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_stackAddressForTask (const GALGAS_string & constinArgument_inTaskName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("%task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 229)) ;
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
  result_outResult = GALGAS_string ("@task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 235)) ;
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
//                                            Function 'taskProcedureName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_taskProcedureName (const GALGAS_string & constinArgument_inTaskName,
                                          const GALGAS_string & constinArgument_inProcName,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("@task.proc.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 241)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 241)).add_operation (constinArgument_inProcName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 241)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_taskProcedureName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_taskProcedureName (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_taskProcedureName (operand0,
                                     operand1,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_taskProcedureName ("taskProcedureName",
                                                                   functionWithGenericHeader_taskProcedureName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   2,
                                                                   functionArgs_taskProcedureName) ;

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
  result_outName = GALGAS_string ("task.var.").add_operation (inArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 247)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 247)).add_operation (inArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 247)) ;
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
//                                             Routine 'codeOptimisation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeOptimisation (GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR var_initialProcedureMap = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR ;
  GALGAS_functionMapIR var_initialFunctionMap = ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR ;
  GALGAS_uint var_pass = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_bool var_optimizing = GALGAS_bool (true) ;
  if (ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 88)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 88)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 88)).isValid ()) {
    uint32_t variant_4218 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 88)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 88)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 88)).uintValue () ;
    bool loop_4218 = true ;
    while (loop_4218) {
      loop_4218 = var_optimizing.isValid () ;
      if (loop_4218) {
        loop_4218 = var_optimizing.boolValue () ;
      }
      if (loop_4218 && (0 == variant_4218)) {
        loop_4218 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 88)) ;
      }
      if (loop_4218) {
        variant_4218 -- ;
        var_optimizing = GALGAS_bool (false) ;
        var_pass.increment_operation (inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 91)) ;
        const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_optimization_5F_displayDeadCodeElimination.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_string var_s = GALGAS_string ("Optimisation pass ").add_operation (var_pass.getter_string (SOURCE_FILE ("code-optimisation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)) ;
          var_s.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mControlRegisterMap.getter_count (SOURCE_FILE ("code-optimisation.galgas", 95)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 95)).add_operation (GALGAS_string (" registers\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 95)) ;
          var_s.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap.getter_count (SOURCE_FILE ("code-optimisation.galgas", 96)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 96)).add_operation (GALGAS_string (" static strings\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 96)) ;
          var_s.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap.getter_count (SOURCE_FILE ("code-optimisation.galgas", 97)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 97)).add_operation (GALGAS_string (" global constants\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 97)) ;
          var_s.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap.getter_count (SOURCE_FILE ("code-optimisation.galgas", 98)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 98)).add_operation (GALGAS_string (" global variables\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 98)) ;
          var_s.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 99)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 99)).add_operation (GALGAS_string (" routines\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 99)) ;
          var_s.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 100)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)).add_operation (GALGAS_string (" functions\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)) ;
          inCompiler->printMessage (var_s  COMMA_SOURCE_FILE ("code-optimisation.galgas", 101)) ;
        }
        GALGAS_accessibleEntities var_accessibleEntities ;
        {
        routine_suppressInaccessibleSubprograms (ioArgument_ioIntermediateCodeStruct, var_accessibleEntities, var_optimizing, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 104)) ;
        }
        GALGAS_controlRegisterMapIR var_usedRegisterMap = GALGAS_controlRegisterMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 110)) ;
        cEnumerator_controlRegisterMapIR enumerator_5508 (ioArgument_ioIntermediateCodeStruct.mAttribute_mControlRegisterMap, kEnumeration_up) ;
        while (enumerator_5508.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_accessibleEntities.mAttribute_mAccessibleRegisterSet.getter_hasKey (enumerator_5508.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 112)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            var_usedRegisterMap.setter_insertKey (enumerator_5508.current_lkey (HERE), enumerator_5508.current_mRegisterTypeName (HERE), enumerator_5508.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 113)) ;
            }
          }else if (kBoolFalse == test_1) {
            var_optimizing = GALGAS_bool (true) ;
          }
          enumerator_5508.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mAttribute_mControlRegisterMap = var_usedRegisterMap ;
        GALGAS_globalConstantMapIR var_globalConstantMap = GALGAS_globalConstantMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 120)) ;
        cEnumerator_globalConstantMapIR enumerator_5934 (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
        while (enumerator_5934.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_accessibleEntities.mAttribute_mGlobalVariableSet.getter_hasKey (enumerator_5934.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 122)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_globalConstantMap.setter_insertKey (enumerator_5934.current (HERE).mAttribute_lkey, enumerator_5934.current (HERE).mAttribute_mType, enumerator_5934.current (HERE).mAttribute_mSourceExpression, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 123)) ;
            }
          }else if (kBoolFalse == test_2) {
            var_optimizing = GALGAS_bool (true) ;
          }
          enumerator_5934.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalConstantMap = var_globalConstantMap ;
        GALGAS_globalVariableMapIR var_globalVariableMap = GALGAS_globalVariableMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 130)) ;
        cEnumerator_globalVariableMapIR enumerator_6400 (ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
        while (enumerator_6400.hasCurrentObject ()) {
          const enumGalgasBool test_3 = var_accessibleEntities.mAttribute_mGlobalVariableSet.getter_hasKey (enumerator_6400.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 132)).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            var_globalVariableMap.setter_insertKey (enumerator_6400.current (HERE).mAttribute_lkey, enumerator_6400.current (HERE).mAttribute_mType, enumerator_6400.current (HERE).mAttribute_mGenerateVolatile, enumerator_6400.current (HERE).mAttribute_mInitialValue, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 133)) ;
            }
          }else if (kBoolFalse == test_3) {
            var_optimizing = GALGAS_bool (true) ;
          }
          enumerator_6400.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mAttribute_mGlobalVariableMap = var_globalVariableMap ;
      }
    }
  }
  cEnumerator_routineMapIR enumerator_6880 (var_initialProcedureMap, kEnumeration_up) ;
  while (enumerator_6880.hasCurrentObject ()) {
    GALGAS_bool test_4 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_hasKey (enumerator_6880.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 147)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 147)) ;
    if (kBoolTrue == test_4.boolEnum ()) {
      test_4 = enumerator_6880.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_5 = test_4.boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_6880.current_lkey (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_6, GALGAS_string ("unused procedure; use @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 148)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 148))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 148)) ;
    }
    enumerator_6880.gotoNextObject () ;
  }
  cEnumerator_functionMapIR enumerator_7172 (var_initialFunctionMap, kEnumeration_up) ;
  while (enumerator_7172.hasCurrentObject ()) {
    GALGAS_bool test_7 = ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.getter_hasKey (enumerator_7172.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 153)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 153)) ;
    if (kBoolTrue == test_7.boolEnum ()) {
      test_7 = enumerator_7172.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_8 = test_7.boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_location location_9 (enumerator_7172.current_lkey (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_9, GALGAS_string ("unused function; use @").add_operation (function_noWarningIfUnusedAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 154)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 154))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 154)) ;
    }
    enumerator_7172.gotoNextObject () ;
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
  outArgument_outAccessibleEntities = GALGAS_accessibleEntities::constructor_default (SOURCE_FILE ("code-optimisation.galgas", 166)) ;
  GALGAS_routineMapIR var_accessibleProcedureMap = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 167)) ;
  GALGAS_routineMapIR var_nonExploredProcedureMap = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 168)) ;
  cEnumerator_routineMapIR enumerator_7928 (ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR, kEnumeration_up) ;
  while (enumerator_7928.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_7928.current (HERE).mAttribute_mIsRequired.boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_accessibleProcedureMap.setter_insertKey (enumerator_7928.current (HERE).mAttribute_lkey, enumerator_7928.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_7928.current (HERE).mAttribute_mInstructionGenerationList, enumerator_7928.current (HERE).mAttribute_mIsRequired, enumerator_7928.current (HERE).mAttribute_mWarnIfUnused, enumerator_7928.current (HERE).mAttribute_mWeak, enumerator_7928.current (HERE).mAttribute_mNullOnNoException, enumerator_7928.current (HERE).mAttribute_mGlobal, enumerator_7928.current (HERE).mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)) ;
      }
      categoryMethod_enterAccessibleEntities (enumerator_7928.current (HERE), outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 183)) ;
      outArgument_outAccessibleEntities.mAttribute_mRoutineSet.addAssign_operation (enumerator_7928.current (HERE).mAttribute_lkey.mAttribute_string  COMMA_SOURCE_FILE ("code-optimisation.galgas", 184)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_nonExploredProcedureMap.setter_insertKey (enumerator_7928.current (HERE).mAttribute_lkey, enumerator_7928.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_7928.current (HERE).mAttribute_mInstructionGenerationList, enumerator_7928.current (HERE).mAttribute_mIsRequired, enumerator_7928.current (HERE).mAttribute_mWarnIfUnused, enumerator_7928.current (HERE).mAttribute_mWeak, enumerator_7928.current (HERE).mAttribute_mNullOnNoException, enumerator_7928.current (HERE).mAttribute_mGlobal, enumerator_7928.current (HERE).mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 186)) ;
      }
    }
    enumerator_7928.gotoNextObject () ;
  }
  cEnumerator_bootListIR enumerator_8921 (ioArgument_ioIntermediateCodeStruct.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_8921.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_8921.current (HERE).mAttribute_mInstructionListIR, outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 201)) ;
    enumerator_8921.gotoNextObject () ;
  }
  cEnumerator_initListIR enumerator_9057 (ioArgument_ioIntermediateCodeStruct.mAttribute_mInitList, kEnumeration_up) ;
  while (enumerator_9057.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_9057.current (HERE).mAttribute_mInstructionListIR, outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 204)) ;
    enumerator_9057.gotoNextObject () ;
  }
  cEnumerator_taskMapIR enumerator_9222 (ioArgument_ioIntermediateCodeStruct.mAttribute_mTaskMapIR, kEnumeration_up) ;
  while (enumerator_9222.hasCurrentObject ()) {
    outArgument_outAccessibleEntities.mAttribute_mTaskProcedureSet.addAssign_operation (enumerator_9222.current (HERE).mAttribute_lkey.mAttribute_string.add_operation (GALGAS_string (".setup"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 208))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 208)) ;
    outArgument_outAccessibleEntities.mAttribute_mTaskProcedureSet.addAssign_operation (enumerator_9222.current (HERE).mAttribute_lkey.mAttribute_string.add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 209))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 209)) ;
    enumerator_9222.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-optimisation.galgas", 212)).boolEnum () ;
  if (kBoolTrue == test_1) {
    categoryMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicSetupInstructionListIR, outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 213)) ;
    categoryMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.mAttribute_mPanicLoopInstructionListIR, outArgument_outAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 214)) ;
  }
  GALGAS_functionMapIR var_accessibleFunctionMap = GALGAS_functionMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 217)) ;
  GALGAS_functionMapIR var_nonExploredFunctionMap = ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR ;
  GALGAS_sectionMapIR var_accessibleSectionMap = GALGAS_sectionMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 219)) ;
  GALGAS_sectionMapIR var_nonExploredSectionMap = ioArgument_ioIntermediateCodeStruct.mAttribute_mSectionMapIR ;
  GALGAS_taskProcedureMapIR var_accessibleTaskProcMap = GALGAS_taskProcedureMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 223)) ;
  GALGAS_taskProcedureMapIR var_nonExploredTaskProcMap = ioArgument_ioIntermediateCodeStruct.mAttribute_mTaskProcedureMap ;
  GALGAS_bool var_continues = GALGAS_bool (true) ;
  GALGAS_uint var_bound = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 226)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 226)).add_operation (ioArgument_ioIntermediateCodeStruct.mAttribute_mSectionMapIR.getter_count (SOURCE_FILE ("code-optimisation.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 227)) ;
  if (var_bound.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 230)).isValid ()) {
    uint32_t variant_10513 = var_bound.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 230)).uintValue () ;
    bool loop_10513 = true ;
    while (loop_10513) {
      loop_10513 = var_continues.isValid () ;
      if (loop_10513) {
        loop_10513 = var_continues.boolValue () ;
      }
      if (loop_10513 && (0 == variant_10513)) {
        loop_10513 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 230)) ;
      }
      if (loop_10513) {
        variant_10513 -- ;
        var_continues = GALGAS_bool (false) ;
        {
        routine_exploreProcs (var_accessibleProcedureMap, outArgument_outAccessibleEntities, var_nonExploredProcedureMap, var_continues, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 232)) ;
        }
        {
        routine_exploreFunctions (var_accessibleFunctionMap, outArgument_outAccessibleEntities, var_nonExploredFunctionMap, var_continues, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 233)) ;
        }
        {
        routine_exploreSections (var_accessibleSectionMap, outArgument_outAccessibleEntities, var_nonExploredSectionMap, var_continues, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 234)) ;
        }
        {
        routine_exploreTaskProcs (var_accessibleTaskProcMap, outArgument_outAccessibleEntities, var_nonExploredTaskProcMap, var_continues, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 236)) ;
        }
      }
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.objectCompare (var_accessibleProcedureMap)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR = var_accessibleProcedureMap ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR.objectCompare (var_accessibleFunctionMap)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mFunctionMapIR = var_accessibleFunctionMap ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.mAttribute_mSectionMapIR.objectCompare (var_accessibleSectionMap)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mSectionMapIR = var_accessibleSectionMap ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.mAttribute_mTaskProcedureMap.objectCompare (var_accessibleTaskProcMap)).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mTaskProcedureMap = var_accessibleTaskProcMap ;
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
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR var_exNonExploredProcedureMap = ioArgument_ioNonExploredProcedureMap ;
  ioArgument_ioNonExploredProcedureMap = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 269)) ;
  cEnumerator_routineMapIR enumerator_12445 (var_exNonExploredProcedureMap, kEnumeration_up) ;
  while (enumerator_12445.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.mAttribute_mRoutineSet.getter_hasKey (enumerator_12445.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 271)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleProcedureMap.setter_insertKey (enumerator_12445.current (HERE).mAttribute_lkey, enumerator_12445.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_12445.current (HERE).mAttribute_mInstructionGenerationList, enumerator_12445.current (HERE).mAttribute_mIsRequired, enumerator_12445.current (HERE).mAttribute_mWarnIfUnused, enumerator_12445.current (HERE).mAttribute_mWeak, enumerator_12445.current (HERE).mAttribute_mNullOnNoException, enumerator_12445.current (HERE).mAttribute_mGlobal, enumerator_12445.current (HERE).mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 272)) ;
      }
      categoryMethod_enterAccessibleEntities (enumerator_12445.current (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 283)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredProcedureMap.setter_insertKey (enumerator_12445.current (HERE).mAttribute_lkey, enumerator_12445.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_12445.current (HERE).mAttribute_mInstructionGenerationList, enumerator_12445.current (HERE).mAttribute_mIsRequired, enumerator_12445.current (HERE).mAttribute_mWarnIfUnused, enumerator_12445.current (HERE).mAttribute_mWeak, enumerator_12445.current (HERE).mAttribute_mNullOnNoException, enumerator_12445.current (HERE).mAttribute_mGlobal, enumerator_12445.current (HERE).mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 286)) ;
      }
    }
    enumerator_12445.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'exploreFunctions'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreFunctions (GALGAS_functionMapIR & ioArgument_ioAccessibleFunctionMap,
                               GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                               GALGAS_functionMapIR & ioArgument_ioNonExploredFunctionMap,
                               GALGAS_bool & ioArgument_ioContinueExploreRoutines,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionMapIR var_exNonExploredFunctionMap = ioArgument_ioNonExploredFunctionMap ;
  ioArgument_ioNonExploredFunctionMap = GALGAS_functionMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 310)) ;
  cEnumerator_functionMapIR enumerator_13845 (var_exNonExploredFunctionMap, kEnumeration_up) ;
  while (enumerator_13845.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.mAttribute_mFunctionSet.getter_hasKey (enumerator_13845.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 312)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleFunctionMap.setter_insertKey (enumerator_13845.current (HERE).mAttribute_lkey, enumerator_13845.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_13845.current (HERE).mAttribute_mInstructionGenerationList, enumerator_13845.current (HERE).mAttribute_mResultType, enumerator_13845.current (HERE).mAttribute_mResultVarName, enumerator_13845.current (HERE).mAttribute_mWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 313)) ;
      }
      categoryMethod_enterAccessibleEntities (enumerator_13845.current (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 321)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredFunctionMap.setter_insertKey (enumerator_13845.current (HERE).mAttribute_lkey, enumerator_13845.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_13845.current (HERE).mAttribute_mInstructionGenerationList, enumerator_13845.current (HERE).mAttribute_mResultType, enumerator_13845.current (HERE).mAttribute_mResultVarName, enumerator_13845.current (HERE).mAttribute_mWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 324)) ;
      }
    }
    enumerator_13845.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'exploreSections'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreSections (GALGAS_sectionMapIR & ioArgument_ioAccessibleSectionMap,
                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                              GALGAS_sectionMapIR & ioArgument_ioNonExploredSectionMap,
                              GALGAS_bool & ioArgument_ioContinueExploreRoutines,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sectionMapIR var_exNonExploredServiceMap = ioArgument_ioNonExploredSectionMap ;
  ioArgument_ioNonExploredSectionMap = GALGAS_sectionMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 345)) ;
  cEnumerator_sectionMapIR enumerator_15060 (var_exNonExploredServiceMap, kEnumeration_up) ;
  while (enumerator_15060.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.mAttribute_mSectionSet.getter_hasKey (enumerator_15060.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 347)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleSectionMap.setter_insertKey (enumerator_15060.current (HERE).mAttribute_lkey, enumerator_15060.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_15060.current (HERE).mAttribute_mInstructionGenerationList, enumerator_15060.current (HERE).mAttribute_mWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 348)) ;
      }
      categoryMethod_enterAccessibleEntities (enumerator_15060.current (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 354)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredSectionMap.setter_insertKey (enumerator_15060.current (HERE).mAttribute_lkey, enumerator_15060.current (HERE).mAttribute_mFormalArgumentListForGeneration, enumerator_15060.current (HERE).mAttribute_mInstructionGenerationList, enumerator_15060.current (HERE).mAttribute_mWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 357)) ;
      }
    }
    enumerator_15060.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'exploreTaskProcs'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreTaskProcs (GALGAS_taskProcedureMapIR & ioArgument_ioAccessibleTaskProcMap,
                               GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                               GALGAS_taskProcedureMapIR & ioArgument_ioNonExploredTaskProcMap,
                               GALGAS_bool & ioArgument_ioContinueExploreRoutines,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskProcedureMapIR var_exNonExploredTaskProcMap = ioArgument_ioNonExploredTaskProcMap ;
  ioArgument_ioNonExploredTaskProcMap = GALGAS_taskProcedureMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 407)) ;
  cEnumerator_taskProcedureMapIR enumerator_17266 (var_exNonExploredTaskProcMap, kEnumeration_up) ;
  while (enumerator_17266.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.mAttribute_mTaskProcedureSet.getter_hasKey (enumerator_17266.current (HERE).mAttribute_lkey.mAttribute_string COMMA_SOURCE_FILE ("code-optimisation.galgas", 409)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleTaskProcMap.setter_insertKey (enumerator_17266.current (HERE).mAttribute_lkey, enumerator_17266.current (HERE).mAttribute_mInstructionGenerationList, enumerator_17266.current (HERE).mAttribute_mWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 410)) ;
      }
      categoryMethod_enterAccessibleEntities (enumerator_17266.current (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 415)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredTaskProcMap.setter_insertKey (enumerator_17266.current (HERE).mAttribute_lkey, enumerator_17266.current (HERE).mAttribute_mInstructionGenerationList, enumerator_17266.current (HERE).mAttribute_mWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 418)) ;
      }
    }
    enumerator_17266.gotoNextObject () ;
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
  result_outResult.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 71)) ;
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
  result_outTitle = function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 77)) ;
  result_outTitle.plusAssign_operation(GALGAS_string (";    ").add_operation (inArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 78)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 78)) ;
  result_outTitle.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 79)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 79)) ;
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
  result_outResult.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 86)) ;
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
  result_outTitle = function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 92)) ;
  result_outTitle.plusAssign_operation(GALGAS_string ("@    ").add_operation (inArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 93)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 93)) ;
  result_outTitle.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 94)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 94)) ;
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
                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inExceptionCodeType,
                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inExceptionLineType,
                             const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                             const GALGAS_stringset constinArgument_inProceduresThatShouldNotBeGenerated,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_homeDir = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("code-generation.galgas", 112)).add_operation (GALGAS_string ("/plm-products/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 112)) ;
  GALGAS_string var_productDirectory = var_homeDir.add_operation (constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 114)).getter_stringByReplacingStringByString (GALGAS_string ("/"), GALGAS_string ("+"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 114)) ;
  GALGAS_string var_sourceDirectory = var_productDirectory.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 115)) ;
  var_sourceDirectory.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 116)) ;
  {
  routine_generateTarget (constinArgument_inCurrentDirectory, var_productDirectory, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 118)) ;
  }
  {
  routine_generateLLVMfile (constinArgument_inCurrentDirectory, var_productDirectory, constinArgument_inEndOfSourceFileLocation, constinArgument_inIntermediateCodeStruct, constinArgument_inTypeMap, constinArgument_inTargetName, constinArgument_inExceptionCodeType, constinArgument_inExceptionLineType, constinArgument_inSourceFileAbsolutePathSet, constinArgument_inProceduresThatShouldNotBeGenerated, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 124)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateLLVMfile'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateLLVMfile (const GALGAS_string constinArgument_inCurrentDirectory,
                               const GALGAS_string constinArgument_inProductDirectory,
                               const GALGAS_location constinArgument_inEndOfSourceFileLocation,
                               const GALGAS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                               const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                               const GALGAS_lstring constinArgument_inTargetName,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inExceptionCodeType,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inExceptionLineType,
                               const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                               const GALGAS_stringset constinArgument_inProceduresThatShouldNotBeGenerated,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds var_generationAdds = GALGAS_generationAdds::constructor_default (SOURCE_FILE ("code-generation.galgas", 164)) ;
  var_generationAdds.mAttribute_mStaticStringMap = constinArgument_inIntermediateCodeStruct.mAttribute_mStaticStringMap ;
  GALGAS_generationContext var_generationContext = GALGAS_generationContext::constructor_new (constinArgument_inExceptionCodeType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 167)), constinArgument_inExceptionLineType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 168)), constinArgument_inProceduresThatShouldNotBeGenerated, constinArgument_inIntermediateCodeStruct.mAttribute_mTaskVariableMap, constinArgument_inIntermediateCodeStruct.mAttribute_mTaskProcedureMap  COMMA_SOURCE_FILE ("code-generation.galgas", 166)) ;
  GALGAS_string var_sourceDirectory = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 173)) ;
  GALGAS_string var_llvmCode = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_asCode = GALGAS_string::makeEmptyString () ;
  var_asCode.plusAssign_operation(function_asTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 177)) ;
  var_asCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 178)) ;
  var_asCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 182)) ;
  var_llvmCode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 184)) ;
  GALGAS_string var_targetLLVMcode = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 185)) ;
  var_llvmCode.plusAssign_operation(var_targetLLVMcode.getter_stringByReplacingStringByString (GALGAS_string ("!PROC!"), function_llvmNameForProcedure (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 189)) ;
  var_llvmCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 190)) ;
  {
  routine_declareLLVMTypes (constinArgument_inTypeMap, var_llvmCode, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 192)) ;
  }
  cEnumerator_globalVariableMapIR enumerator_8798 (constinArgument_inIntermediateCodeStruct.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
  const bool bool_0 = true ;
  if (enumerator_8798.hasCurrentObject () && bool_0) {
    var_llvmCode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Global variables"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 195)) ;
    while (enumerator_8798.hasCurrentObject () && bool_0) {
      categoryMethod_generateLLVM (enumerator_8798.current (HERE), var_llvmCode, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 196)) ;
      enumerator_8798.gotoNextObject () ;
    }
    var_llvmCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 197)) ;
  }
  var_llvmCode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Boot"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 200)) ;
  var_llvmCode.plusAssign_operation(GALGAS_string ("define internal void @boot () nounwind {\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 201)) ;
  cEnumerator_bootListIR enumerator_9138 (constinArgument_inIntermediateCodeStruct.mAttribute_mBootList, kEnumeration_up) ;
  while (enumerator_9138.hasCurrentObject ()) {
    categoryMethod_instructionListLLVMCode (enumerator_9138.current (HERE).mAttribute_mInstructionListIR, var_llvmCode, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 203)) ;
    enumerator_9138.gotoNextObject () ;
  }
  var_llvmCode.plusAssign_operation(GALGAS_string (";---\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 205)) ;
  var_llvmCode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 206)) ;
  var_llvmCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 207)) ;
  categoryMethod_generateLLVMinitCode (constinArgument_inIntermediateCodeStruct.mAttribute_mInitList, var_llvmCode, constinArgument_inIntermediateCodeStruct.mAttribute_mRoutineMapIR, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 209)) ;
  categoryMethod_llvmCodeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mRoutineMapIR, var_llvmCode, var_asCode, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 216)) ;
  categoryMethod_llvmPrototypeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mExternProcedureMapIR, var_llvmCode, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 218)) ;
  categoryMethod_llvmCodeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mSectionMapIR, constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string, var_llvmCode, var_asCode, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 220)) ;
  categoryMethod_serviceCodeGeneration (constinArgument_inIntermediateCodeStruct.mAttribute_mRoutineMapIR, constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string, var_llvmCode, var_asCode, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 229)) ;
  cEnumerator_functionMapIR enumerator_10401 (constinArgument_inIntermediateCodeStruct.mAttribute_mFunctionMapIR, kEnumeration_up) ;
  while (enumerator_10401.hasCurrentObject ()) {
    categoryMethod_implementationCodeGeneration (enumerator_10401.current (HERE), var_llvmCode, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 237)) ;
    enumerator_10401.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 240)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_llvmCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target-exception.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 241)) ;
    var_llvmCode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 245)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("define internal void @raise_exception_internal ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 246)) ;
    var_llvmCode.plusAssign_operation(var_generationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 247)) ;
    var_llvmCode.plusAssign_operation(var_generationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 248)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("i8* %in.FILE) nounwind noreturn {\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 249)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 251)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 251)) ;
    var_llvmCode.plusAssign_operation(var_generationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 252)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_generationContext.mAttribute_mExceptionLineLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 253)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 253)) ;
    var_llvmCode.plusAssign_operation(var_generationContext.mAttribute_mExceptionLineLLVMType.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 254)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 254)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 254)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 256)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string (" = alloca ").add_operation (var_generationContext.mAttribute_mExceptionCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 257)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_generationContext.mAttribute_mExceptionCodeLLVMType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 258)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 258)) ;
    var_llvmCode.plusAssign_operation(var_generationContext.mAttribute_mExceptionCodeLLVMType.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 259)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 259)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 261)).add_operation (GALGAS_string (" = alloca i8*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 261)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("  store i8* %in.FILE, i8** %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 262)) ;
    categoryMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.mAttribute_mPanicSetupInstructionListIR, var_llvmCode, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 263)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("  br label %exception.loop\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 268)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("exception.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 269)) ;
    categoryMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.mAttribute_mPanicLoopInstructionListIR, var_llvmCode, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 270)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("  br label %exception.loop\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 275)) ;
    var_llvmCode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 276)) ;
    cEnumerator_stringset enumerator_12543 (constinArgument_inSourceFileAbsolutePathSet, kEnumeration_up) ;
    while (enumerator_12543.hasCurrentObject ()) {
      GALGAS_uint var_staticStringIndex ;
      {
      categoryModifier_findOrAddStaticString (var_generationAdds.mAttribute_mStaticStringMap, enumerator_12543.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas", 280)).getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 280)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 279)) ;
      }
      GALGAS_string var_routineName = GALGAS_string ("@raise_exception.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("code-generation.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 283)) ;
      var_llvmCode.plusAssign_operation(function_llvmTitleComment (var_routineName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 284)).add_operation (enumerator_12543.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 284)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 284)) ;
      var_llvmCode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (var_routineName, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 285)).add_operation (GALGAS_string (" (i32 %inSourceLine, i32 %inCode) nounwind noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 285)) ;
      var_llvmCode.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** @string.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("code-generation.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 286)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 286)) ;
      var_llvmCode.plusAssign_operation(GALGAS_string ("  call void @raise_exception (i32 %inSourceLine, i32 %inCode, i8* %str.FILE)\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 287)) ;
      var_llvmCode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 288)) ;
      var_llvmCode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 289)) ;
      enumerator_12543.gotoNextObject () ;
    }
  }
  categoryMethod_generateCode (constinArgument_inIntermediateCodeStruct.mAttribute_mTaskMapIR, var_llvmCode, var_generationContext, var_generationAdds, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 293)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_generationAdds.mAttribute_mIntrinsicsDeclarationSet.getter_count (SOURCE_FILE ("code-generation.galgas", 295)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_llvmCode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("LLVM intrinsics"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 296)) ;
    cEnumerator_stringset enumerator_13628 (var_generationAdds.mAttribute_mIntrinsicsDeclarationSet, kEnumeration_up) ;
    while (enumerator_13628.hasCurrentObject ()) {
      var_llvmCode.plusAssign_operation(enumerator_13628.current_key (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 298)) ;
      enumerator_13628.gotoNextObject () ;
    }
    var_llvmCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 300)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_generationAdds.mAttribute_mStaticStringMap.getter_count (SOURCE_FILE ("code-generation.galgas", 303)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    var_llvmCode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 304)) ;
    cEnumerator_staticStringMap enumerator_13904 (var_generationAdds.mAttribute_mStaticStringMap, kEnumeration_up) ;
    while (enumerator_13904.hasCurrentObject ()) {
      GALGAS_string var_lgStr = enumerator_13904.current_lkey (HERE).mAttribute_string.getter_length (SOURCE_FILE ("code-generation.galgas", 306)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 306)).getter_string (SOURCE_FILE ("code-generation.galgas", 306)) ;
      var_llvmCode.plusAssign_operation(function_literalCharacterArrayName (enumerator_13904.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 307)) ;
      var_llvmCode.plusAssign_operation(var_lgStr.add_operation (GALGAS_string (" x i8] c\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 308)) ;
      var_llvmCode.plusAssign_operation(enumerator_13904.current_lkey (HERE).mAttribute_string.getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("code-generation.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 309)) ;
      var_llvmCode.plusAssign_operation(GALGAS_string ("\\00\", align 1\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 310)) ;
      var_llvmCode.plusAssign_operation(function_literalStringName (enumerator_13904.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 311)).add_operation (GALGAS_string (" = private constant i8* getelementptr inbounds (["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 311)) ;
      var_llvmCode.plusAssign_operation(var_lgStr.add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 312)).add_operation (var_lgStr, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 312)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 312)) ;
      var_llvmCode.plusAssign_operation(function_literalCharacterArrayName (enumerator_13904.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 313)).add_operation (GALGAS_string (", i32 0, i32 0), align 4\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 313)) ;
      enumerator_13904.gotoNextObject () ;
    }
  }
  var_llvmCode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 317)) ;
  GALGAS_bool joker_14627 ; // Joker input parameter
  var_llvmCode.method_writeToFileWhenDifferentContents (var_sourceDirectory.add_operation (GALGAS_string ("/src.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 318)), joker_14627, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 318)) ;
  var_asCode.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 320)) ;
  GALGAS_bool joker_14798 ; // Joker input parameter
  var_asCode.method_writeToFileWhenDifferentContents (var_sourceDirectory.add_operation (GALGAS_string ("/src.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 321)), joker_14798, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 321)) ;
  GALGAS_string var_cCode = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/target.c"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 323)) ;
  GALGAS_string var_s = var_cCode.getter_stringByReplacingStringByString (GALGAS_string ("!TASKCOUNT!"), constinArgument_inIntermediateCodeStruct.mAttribute_mTaskMapIR.getter_count (SOURCE_FILE ("code-generation.galgas", 327)).getter_string (SOURCE_FILE ("code-generation.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 327)) ;
  GALGAS_bool joker_15161 ; // Joker input parameter
  var_s.method_writeToFileWhenDifferentContents (var_sourceDirectory.add_operation (GALGAS_string ("/src.c"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)), joker_15161, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("code-generation.galgas", 330)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_performFlashing.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string ("run") ;
    }else if (kBoolFalse == test_6) {
      temp_5 = GALGAS_string ("build") ;
    }
    GALGAS_string var_script = temp_5 ;
    GALGAS_string var_fullScript = GALGAS_string ("python ").add_operation (constinArgument_inProductDirectory, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)).add_operation (var_script, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)).add_operation (GALGAS_string (".py"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)) ;
    GALGAS_sint var_result = var_fullScript.getter_system (SOURCE_FILE ("code-generation.galgas", 333)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_result.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
    if (kBoolTrue == test_7) {
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFileLocation, GALGAS_string ("error during LLVM compilation or flashing")  COMMA_SOURCE_FILE ("code-generation.galgas", 335)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Types"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 343)) ;
  cEnumerator_unifiedTypeMap enumerator_15908 (constinArgument_inTypeMap, kEnumeration_up) ;
  while (enumerator_15908.hasCurrentObject ()) {
    switch (enumerator_15908.current_kind (HERE).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
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
        const cEnumAssociatedValues_typeKind_structure * extractPtr_16252 = (const cEnumAssociatedValues_typeKind_structure *) (enumerator_15908.current_kind (HERE).unsafePointer ()) ;
        const GALGAS_propertyList extractedValue_propertyList = extractPtr_16252->mAssociatedValue1 ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%$").add_operation (enumerator_15908.current_lkey (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)).add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 351)) ;
        cEnumerator_propertyList enumerator_16135 (extractedValue_propertyList, kEnumeration_up) ;
        while (enumerator_16135.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(enumerator_16135.current_mType (HERE).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 353)) ;
          if (enumerator_16135.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 354)) ;
          }
          enumerator_16135.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 356)) ;
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
    }
    enumerator_15908.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 362)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Filewrapper 'targetTemplates'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- File '/makefile.py'

const char * gWrapperFileContent_0_targetTemplates = "#! /usr/bin/env python\n"
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
  "  def run (self, displayLock, terminationSemaphore, showCommand):\n"
  "    displayLock.acquire ()\n"
  "    if self.mTitle != \"\":\n"
  "      print BOLD_BLUE () + self.mTitle + ENDC ()\n"
  "    if (self.mTitle == \"\") or showCommand :\n"
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
  "                #--- Run job\n"
  "                job.run (displayLock, terminationSemaphore, showCommand)\n"
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

const cRegularFileWrapper gWrapperFile_0_targetTemplates (
  "makefile.py",
  "py",
  true, // Text file
  39656, // Text length
  gWrapperFileContent_0_targetTemplates
) ;

//--- File '/plm.py'

const char * gWrapperFileContent_1_targetTemplates = "#! /usr/bin/env python\n"
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
  "                 productDir, linker, linkerLibraries, objcopy, \\\n"
  "                 dumpObjectCode, displayObjectSize, runExecutableOnTarget, \\\n"
  "                 CLANGcompiler, CsourceList, LLVMLinkerCompiler, \\\n"
  "                 currentFile) :\n"
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
  "  productELF = productDir + \"/product.elf\"\n"
  "  rule = makefile.Rule ([productELF], \"Linking \" + productELF)\n"
  "  rule.mDependences += objectList\n"
  "  rule.mCommand += linker\n"
  "  rule.mCommand += objectList\n"
  "  for library in linkerLibraries:\n"
  "    rule.mCommand += [toolDirectory + \"/lib/\" + library]\n"
  "  rule.mCommand += [\"-o\", productELF]\n"
  "  rule.mCommand += [\"-Tsources/linker.ld\"]\n"
  "  rule.mCommand += [\"-Map=\" + productELF + \".map\"]\n"
  "  make.addRule (rule)\n"
  "  #--- Add objcopy rule\n"
  "  productHEX = productDir + \"/product.ihex\"\n"
  "  rule = makefile.Rule ([productHEX], \"Hexing \" + productHEX)\n"
  "  rule.mDependences += [productELF]\n"
  "  rule.mCommand += objcopy\n"
  "  rule.mCommand += [\"-O\", \"ihex\"]\n"
  "  rule.mCommand += [productELF]\n"
  "  rule.mCommand += [productHEX]\n"
  "  make.addRule (rule)\n"
  "  #--- Add goals\n"
  "  make.addGoal (\"run\", [productHEX], \"Building all and run\")\n"
  "  make.addGoal (\"all\", [productHEX], \"Building all\")\n"
  "  make.addGoal (\"display-object-size\", [productHEX], \"Display Object Size\")\n"
  "  make.addGoal (\"object-dump\", [productHEX], \"Dump Object Code\")\n"
  "  #--- Build\n"
  "  #make.printRules ()\n"
  "  make.runGoal (maxParallelJobs, maxParallelJobs == 1)\n"
  "  #--- Build Ok \?\n"
  "  make.printErrorCountAndExitOnError ()\n"
  "  #--- Run or all \? Display size\n"
  "  if (goal == \"run\") or (goal == \"all\") :\n"
  "    s = runProcessAndGetOutput (displayObjectSize + [productELF])\n"
  "    secondLine = s.split('\\n')[1]\n"
  "    numbers = [int(s) for s in secondLine.split() if s.isdigit()]\n"
  "    print \"Code:        \" + str (numbers [0]) + \" bytes\"\n"
  "    print \"ROM data:    \" + str (numbers [1]) + \" bytes\"\n"
  "    print \"RAM + STACK: \" + str (numbers [2]) + \" bytes\"\n"
  "  #--- Run \?\n"
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

const cRegularFileWrapper gWrapperFile_1_targetTemplates (
  "plm.py",
  "py",
  true, // Text file
  11292, // Text length
  gWrapperFileContent_1_targetTemplates
) ;

//--- File '/teensy-3-1-tp.plm-target'

const char * gWrapperFileContent_2_targetTemplates = "\n"
  "pointerSize 32\n"
  "\n"
  "panic proc : $int32 $uint32\n"
  "\n"
  "import \"files/mk20dx256.plm\"\n"
  "import \"files/teensy-3-1-boot.plm\"\n"
  "import \"files/teensy-3-1-default-isr.plm\"\n"
  "import \"files/teensy-3-1-xtr.plm\"\n"
  "import \"files/teensy-3-1-leds.plm\"\n"
  "import \"files/teensy-3-1-lcd.plm\"\n" ;

const cRegularFileWrapper gWrapperFile_2_targetTemplates (
  "teensy-3-1-tp.plm-target",
  "plm-target",
  true, // Text file
  255, // Text length
  gWrapperFileContent_2_targetTemplates
) ;

//--- File 'files/mk20dx256.plm'

const char * gWrapperFileContent_3_targetTemplates = "\n"
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
  "  7, isf, 4, irqc[4], lk, 4, mux[3], 1, dse, ode, pfe, 1, sre, pe, ps\n"
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

const cRegularFileWrapper gWrapperFile_3_targetTemplates (
  "mk20dx256.plm",
  "plm",
  true, // Text file
  134360, // Text length
  gWrapperFileContent_3_targetTemplates
) ;

//--- File 'files/teensy-3-1-boot.plm'

const char * gWrapperFileContent_4_targetTemplates = "//-----------------------------------------------------------------------------*\n"
  "\n"
  "boot 0 {\n"
  "//---------1- Inhiber le chien de garde\n"
  "  WDOG_UNLOCK = WDOG_UNLOCK_SEQ1\n"
  "  WDOG_UNLOCK = WDOG_UNLOCK_SEQ2\n"
  "  WDOG_STCTRLH = 0x0010\n"
  "//--- Enable clocks to always-used peripherals\n"
  "  SIM_SCGC3 = SIM_SCGC3_ADC1 | SIM_SCGC3_FTM2\n"
  "  SIM_SCGC5 = 0x00043F82    // clocks active to all GPIO\n"
  "  SIM_SCGC6 = SIM_SCGC6_RTC | SIM_SCGC6_FTM0 | SIM_SCGC6_FTM1 | SIM_SCGC6_ADC0 | SIM_SCGC6_FTFL\n"
  "//--- If the RTC oscillator isn't enabled, get it started early\n"
  "  if not RTC_CR.OSCE.bool then\n"
  "    RTC_SR = 0\n"
  "    RTC_CR = RTC_CR::SC16P | RTC_CR::SC4P | RTC_CR::OSCE\n"
  "  end\n"
  "//--- Release I/O pins hold, if we woke up from VLLS mode\n"
  "  if PMC_REGSC.ACKISO != 0 then\n"
  "    PMC_REGSC |= PMC_REGSC::ACKISO\n"
  "  end\n"
  "// TODO: do this while the PLL is waiting to lock....\n"
  "  VTOR = 0  // use vector table in flash\n"
  "//  // default all interrupts to medium priority level\n"
  "////  for (int32_t i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);\n"
  "//---------2- Initialisation de la PLL\n"
  "// start in FEI mode\n"
  "//--- Enable capacitors for crystal\n"
  "  OSC_CR = OSC_CR::SC8P | OSC_CR::SC2P\n"
  "//--- Enable osc, 8-32 MHz range, low power mode\n"
  "  MCG_C2 = MCG_C2::RANGE0(2) | MCG_C2::EREFS\n"
  "//--- Switch to crystal as clock source, FLL input = 16 MHz / 512\n"
  "  MCG_C1 = MCG_C1::CLKS(2) | MCG_C1::FRDIV(4)\n"
  "//--- Wait for crystal oscillator to begin\n"
  "  while MCG_S.OSCINIT0 == 0 do\n"
  "  end\n"
  "//--- Wait for FLL to use oscillator\n"
  "  while MCG_S.IREFST != 0 do\n"
  "  end\n"
  "//--- Wait for MCGOUT to use oscillator\n"
  "  while MCG_S.CLKST != MCG_S::CLKST(2) do\n"
  "  end\n"
  "//--- Now we're in FBE mode\n"
  "//    Config PLL input for 16 MHz Crystal / 4 = 4 MHz\n"
  "  MCG_C5 = MCG_C5::PRDIV0(3)\n"
  "//--- Config PLL for 96 MHz output\n"
  "  MCG_C6 = MCG_C6::PLLS | MCG_C6::VDIV0(0)\n"
  "//--- Wait for PLL to start using xtal as its input\n"
  "  while MCG_S.PLLST == 0 do\n"
  "  end\n"
  "//--- Wait for PLL to lock\n"
  "  while MCG_S.LOCK0 == 0 do\n"
  "  end\n"
  "//--- Now we're in PBE mode\n"
  "//    Config divisors: 96 MHz core, 48 MHz bus, 24 MHz flash\n"
  "  SIM_CLKDIV1 = SIM_CLKDIV1::OUTDIV1(0) | SIM_CLKDIV1::OUTDIV2(1) | SIM_CLKDIV1::OUTDIV4(3)\n"
  "//--- Switch to PLL as clock source, FLL input = 16 MHz / 512\n"
  "  MCG_C1 = MCG_C1::CLKS(0) | MCG_C1::FRDIV(4)\n"
  "//--- Wait for PLL clock to be used\n"
  "  while MCG_S.CLKST != MCG_S::CLKST(3) do\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_4_targetTemplates (
  "teensy-3-1-boot.plm",
  "plm",
  true, // Text file
  2377, // Text length
  gWrapperFileContent_4_targetTemplates
) ;

//--- File 'files/teensy-3-1-default-isr.plm'

const char * gWrapperFileContent_5_targetTemplates = "\n"
  "required proc NMIHandler `isr ()\n"
  "\n"
  "proc NMIHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 2\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc HardFaultHandler `isr ()\n"
  "\n"
  "proc HardFaultHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 3\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc MemManageHandler `isr ()\n"
  "\n"
  "proc MemManageHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 4\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc BusFaultHandler `isr ()\n"
  "\n"
  "proc BusFaultHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 5\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UsageFaultHandler `isr ()\n"
  "\n"
  "proc UsageFaultHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 6\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//required proc svcHandler `isr ()\n"
  "//\n"
  "//proc svcHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "//  panic 11\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DebugMonitorHandler `isr ()\n"
  "\n"
  "proc DebugMonitorHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 12\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PendSVHandler `isr ()\n"
  "\n"
  "proc PendSVHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 14\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel0TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel0TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 16\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel1TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel1TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 17\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel2TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel2TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 18\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel3TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel3TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 19\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel4TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel4TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 20\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel5TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel5TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 21\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel6TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel6TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 22\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel7TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel7TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 23\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel8TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel8TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 24\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel9TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel9TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 25\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel10TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel10TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 26\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel11TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel11TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 27\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel12TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel12TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 28\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel13TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel13TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 29\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel14TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel14TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 30\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAChannel15TranfertCompleteHandler `isr ()\n"
  "\n"
  "proc DMAChannel15TranfertCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 31\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DMAErrorHandler `isr ()\n"
  "\n"
  "proc DMAErrorHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 32\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc flashMemoryCommandCompleteHandler `isr ()\n"
  "\n"
  "proc flashMemoryCommandCompleteHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 34\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc flashMemoryReadCollisionHandler `isr ()\n"
  "\n"
  "proc flashMemoryReadCollisionHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 35\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc modeControllerHandler `isr ()\n"
  "\n"
  "proc modeControllerHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 36\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc LLWUHandler `isr ()\n"
  "\n"
  "proc LLWUHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 37\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc WDOGEWMHandler `isr ()\n"
  "\n"
  "proc WDOGEWMHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 38\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc I2C0Handler `isr ()\n"
  "\n"
  "proc I2C0Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 40\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc I2C1Handler `isr ()\n"
  "\n"
  "proc I2C1Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 41\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc SPI0Handler `isr ()\n"
  "\n"
  "proc SPI0Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 42\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc SPI1Handler `isr ()\n"
  "\n"
  "proc SPI1Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 43\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0MessageBufferHandler `isr ()\n"
  "\n"
  "proc CAN0MessageBufferHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 45\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0BusOffHandler `isr ()\n"
  "\n"
  "proc CAN0BusOffHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 46\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0ErrorHandler `isr ()\n"
  "\n"
  "proc CAN0ErrorHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 47\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0TransmitWarningHandler `isr ()\n"
  "\n"
  "proc CAN0TransmitWarningHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 48\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0ReceiveWarningHandler `isr ()\n"
  "\n"
  "proc CAN0ReceiveWarningHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 49\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CAN0WakeUpHandler `isr ()\n"
  "\n"
  "proc CAN0WakeUpHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 50\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc I2S0TransmitHandler `isr ()\n"
  "\n"
  "proc I2S0TransmitHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 51\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc I2S0ReceiveHandler `isr ()\n"
  "\n"
  "proc I2S0ReceiveHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 52\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART0LONHandler `isr ()\n"
  "\n"
  "proc UART0LONHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 60\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART0StatusHandler `isr ()\n"
  "\n"
  "proc UART0StatusHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 61\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART0ErrorHandler `isr ()\n"
  "\n"
  "proc UART0ErrorHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 62\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART1StatusHandler `isr ()\n"
  "\n"
  "proc UART1StatusHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 63\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART1ErrorHandler `isr ()\n"
  "\n"
  "proc UART1ErrorHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 64\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART2StatusHandler `isr ()\n"
  "\n"
  "proc UART2StatusHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 64\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc UART2ErrorHandler `isr ()\n"
  "\n"
  "proc UART2ErrorHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 65\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc ADC0Handler `isr ()\n"
  "\n"
  "proc ADC0Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 73\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc ADC1Handler `isr ()\n"
  "\n"
  "proc ADC1Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 74\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CMP0Handler `isr ()\n"
  "\n"
  "proc CMP0Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 75\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CMP1Handler `isr ()\n"
  "\n"
  "proc CMP1Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 76\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CMP2Handler `isr ()\n"
  "\n"
  "proc CMP2Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 77\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc FMT0Handler `isr ()\n"
  "\n"
  "proc FMT0Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 78\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc FMT1Handler `isr ()\n"
  "\n"
  "proc FMT1Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 79\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc FMT2Handler `isr ()\n"
  "\n"
  "proc FMT2Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 80\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc CMTHandler `isr ()\n"
  "\n"
  "proc CMTHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 81\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc RTCAlarmHandler `isr ()\n"
  "\n"
  "proc RTCAlarmHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 82\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc RTCSecondHandler `isr ()\n"
  "\n"
  "proc RTCSecondHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 83\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PITChannel0Handler `isr ()\n"
  "\n"
  "proc PITChannel0Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 84\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PITChannel1Handler `isr ()\n"
  "\n"
  "proc PITChannel1Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 85\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PITChannel2Handler `isr ()\n"
  "\n"
  "proc PITChannel2Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 86\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PITChannel3Handler `isr ()\n"
  "\n"
  "proc PITChannel3Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 87\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc PDBHandler `isr ()\n"
  "\n"
  "proc PDBHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 88\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc USBOTGHandler `isr ()\n"
  "\n"
  "proc USBOTGHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 89\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc USBChargerDetectHandler `isr ()\n"
  "\n"
  "proc USBChargerDetectHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 90\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc DAC0Handler `isr ()\n"
  "\n"
  "proc DAC0Handler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 97\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc TSIHandler `isr ()\n"
  "\n"
  "proc TSIHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 99\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc MCGHandler `isr ()\n"
  "\n"
  "proc MCGHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 100\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc lowPowerTimerHandler `isr ()\n"
  "\n"
  "proc lowPowerTimerHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 101\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortAHandler `isr ()\n"
  "\n"
  "proc pinDetectPortAHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 103\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortBHandler `isr ()\n"
  "\n"
  "proc pinDetectPortBHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 104\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortCHandler `isr ()\n"
  "\n"
  "proc pinDetectPortCHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 105\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortDHandler `isr ()\n"
  "\n"
  "proc pinDetectPortDHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 106\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc pinDetectPortEHandler `isr ()\n"
  "\n"
  "proc pinDetectPortEHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 107\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc softwareInterruptHandler `isr ()\n"
  "\n"
  "proc softwareInterruptHandler `isr @nullWhenPanicDisabled @weak () {\n"
  "  panic 110\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_5_targetTemplates (
  "teensy-3-1-default-isr.plm",
  "plm",
  true, // Text file
  15806, // Text length
  gWrapperFileContent_5_targetTemplates
) ;

//--- File 'files/teensy-3-1-lcd.plm'

const char * gWrapperFileContent_6_targetTemplates = "\n"
  "// http://esd.cs.ucr.edu/labs/interface/interface.html\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   PORT CONFIGURATION                                                        *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//   D4 : PTB0\n"
  "//   D5 : PTC0\n"
  "//   D6 : PTD1\n"
  "//   D7 : PTB2\n"
  "//   RS : PTB3\n"
  "//   E  : PTB1\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc configurePorts `init @noWarningIfUnused () {\n"
  "//--- D4 (PTB0) is a GPIO (input by default)\n"
  "  PORTB_PCR0 = (1 << 8) ;\n"
  "  GPIOB_PDDR |= (1 << 0) ; // Program D4 as output (PTB0)\n"
  "//--- D5 (PTC0) is a GPIO (input by default)\n"
  "  PORTC_PCR0 = (1 << 8) ;\n"
  "  GPIOC_PDDR |= (1 << 0) ; // Program D5 as output (PTC0)\n"
  "//--- D6 (PTD1) is a GPIO (input by default)\n"
  "  PORTD_PCR1 = (1 << 8) ;\n"
  "  GPIOD_PDDR |= (1 << 1) ; // Program D6 as output (PTD1)\n"
  "//--- D7 (PTB2) is a GPIO (input by default)\n"
  "  PORTB_PCR2 = (1 << 8) ;\n"
  "  GPIOB_PDDR |= (1 << 2) ; // Program D7 as output (PTB2)\n"
  "//--- RS (PTB3) is an output\n"
  "  PORTB_PCR3 = (1 << 8) ;\n"
  "  GPIOB_PDDR |= (1 << 3) ;\n"
  "//--- E (PTB1) is an output\n"
  "  PORTB_PCR1 = (1 << 8) ;\n"
  "  GPIOB_PDDR |= (1 << 1) ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc driveHighE `init `panic `user @noWarningIfUnused () {\n"
  "  GPIOB_PSOR = 1 << 1 ; // E is PTB1\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "\n"
  "proc driveLowE `init `panic `user @noWarningIfUnused () {\n"
  "  GPIOB_PCOR = 1 << 1 ; // E is PTB1\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "\n"
  "proc driveHighRS `init `panic `user @noWarningIfUnused () {\n"
  "  GPIOB_PSOR = 1 << 3 ; // RS is PTB3\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "\n"
  "proc driveLowRS `init `panic `user @noWarningIfUnused () {\n"
  "  GPIOB_PCOR = 1 << 3 ; // RS is PTB3\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc setD4 `init `panic `user @noWarningIfUnused (\?inValue $bool) { // PTB0\n"
  "  if inValue then\n"
  "    GPIOB_PSOR = 1 << 0 ;\n"
  "  else\n"
  "    GPIOB_PCOR = 1 << 0 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc setD5 `init `panic `user @noWarningIfUnused (\?inValue $bool) { // PTC0\n"
  "  if inValue then\n"
  "    GPIOC_PSOR = 1 << 0 ;\n"
  "  else\n"
  "    GPIOC_PCOR = 1 << 0 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc setD6 `init `panic `user @noWarningIfUnused (\?inValue $bool) { // PTD1\n"
  "  if inValue then\n"
  "    GPIOD_PSOR = 1 << 1 ;\n"
  "  else\n"
  "    GPIOD_PCOR = 1 << 1 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc setD7 `init `panic `user @noWarningIfUnused (\?inValue $bool) { // PTB2\n"
  "  if inValue then\n"
  "    GPIOB_PSOR = 1 << 2 ;\n"
  "  else\n"
  "    GPIOB_PCOR = 1 << 2 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   UTILITY ROUTINES                                                          *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc programLcd4BitDataBusOutput `init @noWarningIfUnused (\?inValue $uint8) {\n"
  "  setD4 (!(inValue & 0x01) != 0)\n"
  "  setD5 (!(inValue & 0x02) != 0)\n"
  "  setD6 (!(inValue & 0x04) != 0)\n"
  "  setD7 (!(inValue & 0x08) != 0)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc write4BitCommand `init @noWarningIfUnused (\?inValue $uint8) {\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowRS () ;\n"
  "  programLcd4BitDataBusOutput (!inValue) ;\n"
  "  driveHighE () ;\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc write8bitCommand `init @noWarningIfUnused (\?inCommand $uint8) {\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowRS () ;\n"
  "  programLcd4BitDataBusOutput (!inCommand >> 4) ;\n"
  "  driveHighE () ;\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowE () ;\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  programLcd4BitDataBusOutput (!inCommand) ;\n"
  "  driveHighE () ;\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   LCD INIT                                                                  *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 10 requiredBy\n"
  "writeData_inUserMode (\?data $uint8),\n"
  "write8bitCommand_inUserMode (\?data $uint8),\n"
  "writeDataInExceptionMode (\?data $uint8),\n"
  "write8bitCommandInExceptionMode (\?data $uint8)\n"
  "{\n"
  "  configurePorts () ;\n"
  "//--- \xC3""\x89""tape 1 : attendre 15 ms\n"
  "  busyWaitingDuringMS (!15) ;\n"
  "//--- \xC3""\x89""tape 2 : \xC3""\xA9""crire la commande 0x30\n"
  "  write4BitCommand (!0x3) ;\n"
  "//--- \xC3""\x89""tape 3 : attendre 4,1 ms (en fait 5 ms)\n"
  "  busyWaitingDuringMS (!5) ;\n"
  "//--- \xC3""\x89""tape 4 : \xC3""\xA9""crire la commande 0x30 une 2e fois\n"
  "  write4BitCommand (!0x3) ;\n"
  "//--- \xC3""\x89""tape 5 : attendre 100 \xC2""\xB5""s\n"
  "  busyWaitingDuringMS (!1) ;\n"
  "//--- \xC3""\x89""tape 6 : \xC3""\xA9""crire la commande 0x30 une 3e fois\n"
  "  write4BitCommand (!0x3) ;\n"
  "//--- \xC3""\x89""tape 7 : \xC3""\xA9""crire la commande 0x20 pour passer en 4 bits\n"
  "  write4BitCommand (!0x2) ;\n"
  "//--- \xC3""\x89""tape 8 : \xC3""\xA9""crire la commande 'Set Interface Length' : 0 0 1 DL N F * *\n"
  "//    DL : Data interface length : 0 (4 bits)\n"
  "//    N : Number of Display lines : 1 (2 lignes)\n"
  "//    F : Character Font : 0 (5x7)\n"
  "  write8bitCommand (!0x28) ;\n"
  "//--- \xC3""\x89""tape 9 : \xC3""\xA9""crire la commande 'Display Off'\n"
  "  write8bitCommand (!0x08) ;\n"
  "//--- \xC3""\x89""tape 10 : \xC3""\xA9""crire la commande 'Clear Display'\n"
  "  write8bitCommand (!0x01) ;\n"
  "//--- \xC3""\x89""tape 11 : \xC3""\xA9""crire la commande 'Set Cursor Move Direction' : 0 0 0 0 0 1 ID S\n"
  "//    ID : Increment Cursor after Each Byte Written to Display : 1 (oui)\n"
  "//    S : Shift Display When Byte Written : 0 (non)\n"
  "  write8bitCommand (!0x06) ;\n"
  "//--- \xC3""\x89""tape 12 : \xC3""\xA9""crire la commande 'Move Cursor / Shift Display' : 0 0 0 1 SC RL * *\n"
  "//    SC : Display Shift On : 1 (oui)\n"
  "//    RL : Direction of Shift : 1 (vers la droite)\n"
  "  write8bitCommand (!0x1C) ;\n"
  "//--- \xC3""\x89""tape 13 : \xC3""\xA9""crire la commande 'Return Cursor and LCD to Home Position'\n"
  "  write8bitCommand (!0x02) ;\n"
  "//--- \xC3""\x89""tape 14 : \xC3""\xA9""crire la commande 'Enable Display / Cursor' : 0 0 0 0 1 D C B\n"
  "//    D : Turn Display On : 1 (oui)\n"
  "//    C : Turn Cursor On : 0 (non)\n"
  "//    B : Cursor Blink On : 0 (non)\n"
  "  write8bitCommand (!0x0C) ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   PRINT ROUTINES IN USER MODE                                               *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc programLcd4BitDataBusOutput_inUserMode `user @noWarningIfUnused (\?inValue $uint8) {\n"
  "  setD4 (!(inValue & 0x01) != 0)\n"
  "  setD5 (!(inValue & 0x02) != 0)\n"
  "  setD6 (!(inValue & 0x04) != 0)\n"
  "  setD7 (!(inValue & 0x08) != 0)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc write8bitCommand_inUserMode `user @noWarningIfUnused (\?inCommand $uint8) {\n"
  "  waitDuringMS (!delay:1) ;\n"
  "  driveLowRS () ;\n"
  "  programLcd4BitDataBusOutput_inUserMode (!inCommand >> 4) ;\n"
  "  driveHighE () ;\n"
  "  waitDuringMS (!delay:1) ;\n"
  "  driveLowE () ;\n"
  "  waitDuringMS (!delay:1) ;\n"
  "  programLcd4BitDataBusOutput_inUserMode (!inCommand) ;\n"
  "  driveHighE () ;\n"
  "  waitDuringMS (!delay:1) ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc writeData_inUserMode `user @noWarningIfUnused (\?inData $uint8) {\n"
  "  waitDuringMS (!delay:1) ;\n"
  "  driveHighRS () ;\n"
  "  programLcd4BitDataBusOutput_inUserMode (!inData >> 4) ;\n"
  "  driveHighE () ;\n"
  "  waitDuringMS (!delay:1) ;\n"
  "  driveLowE () ;\n"
  "  waitDuringMS (!delay:1) ;\n"
  "  programLcd4BitDataBusOutput_inUserMode (!inData) ;\n"
  "  driveHighE () ;\n"
  "  waitDuringMS (!delay:1) ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "// Line 0 : 00 -> 19\n"
  "// Line 1 : 64 -> 83\n"
  "// Line 2 : 20 -> 39\n"
  "// Line 3 : 84 -> 103\n"
  "\n"
  "proc goto `user @noWarningIfUnused (\?line:inLine $uint32 \?column:inColumn $uint8) {\n"
  "  if inColumn < 20 then\n"
  "    if inLine == 0 then\n"
  "      write8bitCommand_inUserMode (!0x80 + 0 + inColumn) ;\n"
  "    elsif inLine == 1 then\n"
  "      write8bitCommand_inUserMode (!0x80 + 64 + inColumn) ;\n"
  "    elsif inLine == 2 then\n"
  "      write8bitCommand_inUserMode (!0x80 + 20 + inColumn) ;\n"
  "    elsif inLine == 3 then\n"
  "      write8bitCommand_inUserMode (!0x80 + 84 + inColumn) ;\n"
  "    end\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc clearScreen `user @noWarningIfUnused () {\n"
  "  write8bitCommand_inUserMode (!0x01)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printSpaces `user @noWarningIfUnused (\?inCount $uint32) {\n"
  "  var count = inCount\n"
  "  while (count > 0) do\n"
  "    writeData_inUserMode (!0x20)\n"
  "    count -= 1\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printUnsigned `user @noWarningIfUnused (\?inValue $uint32) {\n"
  "  var divisor $uint32 = 1_000_000_000\n"
  "  var value = inValue\n"
  "  var isPrinting = false\n"
  "  while divisor > 0 do\n"
  "    if isPrinting or (value >= divisor) then\n"
  "      let quotient = value / divisor\n"
  "      let remainder = value - quotient * divisor\n"
  "      writeData_inUserMode (!0x30 + convert quotient : $uint8)\n"
  "      value = remainder\n"
  "      isPrinting = true\n"
  "    end\n"
  "    divisor = divisor / 10\n"
  "  end\n"
  "  if not isPrinting then\n"
  "    writeData_inUserMode (!0x30)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printSigned `user @noWarningIfUnused (\?inValue $int32) {\n"
  "  if inValue >= 0 then\n"
  "    printUnsigned (!truncate inValue : $uint32)\n"
  "  else\n"
  "    writeData_inUserMode (!0x2D) // Signe -\n"
  "    printUnsigned (!truncate - inValue : $uint32)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printString `user @noWarningIfUnused (\?inString $staticString) {\n"
  "  for c in inString do\n"
  "    writeData_inUserMode (!c)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printSigned (const int32_t inValue) {\n"
  "//  if (inValue < 0) {\n"
  "//    printChar ('-') ;\n"
  "//    printUnsigned (($uint32_t) -inValue) ;\n"
  "//  }else{\n"
  "//    printUnsigned (($uint32_t) inValue) ;\n"
  "//  }\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printHex1 (const $uint32_t inValue) {\n"
  "//  const $uint32_t v = inValue & 0xF ;\n"
  "//  if (v < 10) {\n"
  "//    printChar ('0' + v) ;\n"
  "//  }else{\n"
  "//    printChar ('A' + v - 10) ;\n"
  "//  }  \n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printHex2 (const $uint32_t inValue) {\n"
  "//  printHex1 (inValue >> 4) ;\n"
  "//  printHex1 (inValue) ;\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printHex4 (const $uint32_t inValue) {\n"
  "//  printHex2 (inValue >> 8) ;\n"
  "//  printHex2 (inValue) ;\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "\n"
  "//void printHex8 (const $uint32_t inValue) {\n"
  "//  printHex4 (inValue >> 16) ;\n"
  "//  printHex4 (inValue) ;\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//void printHex16 (const $uint64_t inValue) {\n"
  "//  printHex8 (($uint32_t) (inValue >> 32)) ;\n"
  "//  printHex8 (($uint32_t) inValue) ;\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "//   EXCEPTION                                                                 *\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc programLcd4BitDataBusOutput_inExceptionMode `panic @noWarningIfUnused (\?inValue $uint8) {\n"
  "  setD4 (!(inValue & 0x01) != 0)\n"
  "  setD5 (!(inValue & 0x02) != 0)\n"
  "  setD6 (!(inValue & 0x04) != 0)\n"
  "  setD7 (!(inValue & 0x08) != 0)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc waitOneMillisecondInExceptionMode `panic @noWarningIfUnused () {\n"
  "  while not SYST_CSR.COUNTFLAG.bool do\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc waitMSInExceptionMode `panic @noWarningIfUnused (\?duration: inDuration $uint32) {\n"
  "  var duration = inDuration\n"
  "  while duration > 0 do\n"
  "    waitOneMillisecondInExceptionMode ()\n"
  "    duration -%= 1\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc writeDataInExceptionMode `panic @noWarningIfUnused (\?inData $uint8) {\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveHighRS () ;\n"
  "  programLcd4BitDataBusOutput_inExceptionMode (!inData >> 4) ;\n"
  "  driveHighE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  programLcd4BitDataBusOutput_inExceptionMode (!inData) ;\n"
  "  driveHighE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printUnsignedInExceptionMode `panic @noWarningIfUnused (\?inValue $uint32) {\n"
  "  var divisor $uint32 = 1_000_000_000\n"
  "  var value = inValue\n"
  "  var isPrinting = false\n"
  "  while divisor > 0 do\n"
  "    if isPrinting or (value >= divisor) then\n"
  "      let quotient = value !/ divisor\n"
  "      let remainder = value -% quotient *% divisor\n"
  "      writeDataInExceptionMode (!0x30 +% truncate quotient : $uint8)\n"
  "      value = remainder\n"
  "      isPrinting = true\n"
  "    end\n"
  "    divisor = divisor !/ 10\n"
  "  end\n"
  "  if not isPrinting then\n"
  "    writeDataInExceptionMode (!0x30)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printSignedInExceptionMode `panic @noWarningIfUnused (\?inValue $int32) {\n"
  "  if inValue >= 0 then\n"
  "    printUnsignedInExceptionMode (!truncate inValue : $uint32)\n"
  "  else\n"
  "    writeDataInExceptionMode (!0x2D) // Signe -\n"
  "    printUnsignedInExceptionMode (!truncate -% inValue : $uint32)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc write8bitCommandInExceptionMode `panic @noWarningIfUnused (\?inCommand $uint8) {\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowRS () ;\n"
  "  programLcd4BitDataBusOutput_inExceptionMode (!inCommand >> 4) ;\n"
  "  driveHighE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  programLcd4BitDataBusOutput_inExceptionMode (!inCommand) ;\n"
  "  driveHighE () ;\n"
  "  waitOneMillisecondInExceptionMode () ;\n"
  "  driveLowE () ;\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc gotoInExceptionMode `panic @noWarningIfUnused (\?line:inLine $uint32 \?column:inColumn $uint8) {\n"
  "  if inColumn < 20 then\n"
  "    if inLine == 0 then\n"
  "      write8bitCommandInExceptionMode (!0x80 +% 0 +% inColumn) ;\n"
  "    elsif inLine == 1 then\n"
  "      write8bitCommandInExceptionMode (!0x80 +% 64 +% inColumn) ;\n"
  "    elsif inLine == 2 then\n"
  "      write8bitCommandInExceptionMode (!0x80 +% 20 +% inColumn) ;\n"
  "    elsif inLine == 3 then\n"
  "      write8bitCommandInExceptionMode (!0x80 +% 84 +% inColumn) ;\n"
  "    end\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc clearScreenInExceptionMode `panic @noWarningIfUnused () {\n"
  "  write8bitCommandInExceptionMode (!0x01)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc printStringInExceptionMode `panic @noWarningIfUnused (\?inString $staticString) {\n"
  "  for c in inString do\n"
  "    writeDataInExceptionMode (!c)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "panic proc setup 0 {\n"
  "  clearScreenInExceptionMode ()\n"
  "  waitMSInExceptionMode (!duration:4)\n"
  "  gotoInExceptionMode (!line:0 !column:0)\n"
  "  printStringInExceptionMode (!FILE)\n"
  "  gotoInExceptionMode (!line:1 !column:0)\n"
  "  printStringInExceptionMode (!\"Line:\")\n"
  "  printUnsignedInExceptionMode (!LINE)\n"
  "  gotoInExceptionMode (!line:2 !column:0)\n"
  "  printStringInExceptionMode (!\"Code:\")\n"
  "  printSignedInExceptionMode (!CODE)\n"
  "}\n"
  "\n"
  "panic proc loop 0 {\n"
  "  waitMSInExceptionMode (!duration:50)\n"
  "  ledOn (!LED_L0 | LED_L1 | LED_L2 | LED_L3 | LED_L4)\n"
  "  waitMSInExceptionMode (!duration:50)\n"
  "  ledOff (!LED_L0 | LED_L1 | LED_L2 | LED_L3 | LED_L4)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_6_targetTemplates (
  "teensy-3-1-lcd.plm",
  "plm",
  true, // Text file
  16076, // Text length
  gWrapperFileContent_6_targetTemplates
) ;

//--- File 'files/teensy-3-1-leds.plm'

const char * gWrapperFileContent_7_targetTemplates = "//-----------------------------------------------------------------------------*\n"
  "//   Led L0 : PTA12\n"
  "//   Led L1 : PTA13\n"
  "//   Led L2 : PTD7\n"
  "//   Led L3 : PTD4\n"
  "//   Led L4 : PTD2\n"
  "//   Led sur carte Teensy : PTC5\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 100 requiredBy ledOn (\?inLeds $uint32), ledOff (\?inLeds $uint32) {\n"
  "//--- Led L0 : PTA12\n"
  "  PORTA_PCR12 = (1 << 8)\n"
  "  GPIOA_PDDR |= (1 << 12)\n"
  "//--- Led L1 : PTA13\n"
  "  PORTA_PCR13 = (1 << 8)\n"
  "  GPIOA_PDDR |= (1 << 13)\n"
  "//--- Led L2 : PTD13\n"
  "  PORTD_PCR7 = (1 << 8)\n"
  "  GPIOD_PDDR |= (1 << 7)\n"
  "//--- Led L3 : PTD4\n"
  "  PORTD_PCR4 = (1 << 8)\n"
  "  GPIOD_PDDR |= (1 << 4)\n"
  "//--- Led L4 : PTD2\n"
  "  PORTD_PCR2 = (1 << 8)\n"
  "  GPIOD_PDDR |= (1 << 2)\n"
  "//--- Led Teensy\n"
  "  PORTC_PCR5 = (1 << 8)\n"
  "  GPIOC_PDDR |= (1 << 5)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let LED_L0 $uint32 = (1 << 0)\n"
  "let LED_L1 $uint32 = (1 << 1)\n"
  "let LED_L2 $uint32 = (1 << 2)\n"
  "let LED_L3 $uint32 = (1 << 3)\n"
  "let LED_L4 $uint32 = (1 << 4)\n"
  "\n"
  "let ALL_LEDS = LED_L0 | LED_L1 | LED_L2 | LED_L3 | LED_L4\n"
  " \n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc ledOn `user `panic `isr @noWarningIfUnused (\?inLeds $uint32) {\n"
  "//--- Led L0\n"
  "  if ((inLeds & LED_L0) != 0) then\n"
  "    GPIOA_PSOR = 1 << 12 ;\n"
  "  end\n"
  "//--- Led L1\n"
  "  if ((inLeds & LED_L1) != 0) then\n"
  "    GPIOA_PSOR = 1 << 13 ;\n"
  "  end\n"
  "//--- Led L2\n"
  "  if ((inLeds & LED_L2) != 0) then\n"
  "    GPIOD_PSOR = 1 << 7 ;\n"
  "  end\n"
  "//--- Led L3\n"
  "  if ((inLeds & LED_L3) != 0) then\n"
  "    GPIOD_PSOR = 1 << 4 ;\n"
  "  end\n"
  "//--- Led L4\n"
  "  if ((inLeds & LED_L4) != 0) then\n"
  "    GPIOD_PSOR = 1 << 2 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc ledOff `user `panic `isr @noWarningIfUnused (\?inLeds $uint32) {\n"
  "//--- Led L0\n"
  "  if ((inLeds & LED_L0) != 0) then\n"
  "    GPIOA_PCOR = 1 << 12 ;\n"
  "  end\n"
  "//--- Led L1\n"
  "  if ((inLeds & LED_L1) != 0) then\n"
  "    GPIOA_PCOR = 1 << 13 ;\n"
  "  end\n"
  "//--- Led L2\n"
  "  if ((inLeds & LED_L2) != 0) then\n"
  "    GPIOD_PCOR = 1 << 7 ;\n"
  "  end\n"
  "//--- Led L3\n"
  "  if ((inLeds & LED_L3) != 0) then\n"
  "    GPIOD_PCOR = 1 << 4 ;\n"
  "  end\n"
  "//--- Led L4\n"
  "  if ((inLeds & LED_L4) != 0) then\n"
  "    GPIOD_PCOR = 1 << 2 ;\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_7_targetTemplates (
  "teensy-3-1-leds.plm",
  "plm",
  true, // Text file
  2271, // Text length
  gWrapperFileContent_7_targetTemplates
) ;

//--- File 'files/teensy-3-1-xtr.plm'

const char * gWrapperFileContent_8_targetTemplates = "\n"
  "opaqueType $taskList : 32\n"
  "\n"
  "//--- Block running task\n"
  "extern proc kernel_blockRunningTaskInList `kernel (\?!ioWaitingList $taskList)\n"
  "\n"
  "extern proc kernel_blockRunningTaskInDeadlineList `kernel (\?inDeadlineMS $uint32) \n"
  "\n"
  "extern proc kernel_blockRunningTaskInListAndDeadlineList `kernel (\n"
  "  \?!ioWaitingList $taskList\n"
  "  \?inDeadlineMS $uint32)\n"
  "\n"
  "//--- Make task Ready\n"
  "extern proc kernel_makeTaskReadyFromWaitingList `isr (\?!ioWaitingList $taskList)\n"
  "\n"
  "extern proc kernel_tasksWithEarlierDateBecomeReady `isr (\?inCurrentDate $uint32)\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 0 { // Configure Systick interrupt every ms\n"
  "  SYST_RVR = 96000 - 1 // Interrupt every 96000 core clocks, i.e. every ms\n"
  "  SYST_CVR = 0\n"
  "  SYST_CSR = SYST_CSR::CLKSOURCE | SYST_CSR::TICKINT | SYST_CSR::ENABLE\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "var gUptimeMS $uint32 = 0 {\n"
  "  @rw proc systickHandler\n"
  "  proc busyWaitingDuringMS\n"
  "  func millis\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc busyWaitingDuringMS `init @noWarningIfUnused (\?inDuration $uint32) {\n"
  "  let deadline = gUptimeMS + inDuration\n"
  "  while gUptimeMS < deadline do\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "required proc systickHandler `isr ()\n"
  "\n"
  "proc systickHandler `isr @global () {\n"
  "  gUptimeMS +%= 1\n"
  "  kernel_tasksWithEarlierDateBecomeReady (!millis ())\n"
  "  userSystickHandler ()\n"
  "}\n"
  "\n"
  "proc userSystickHandler `isr @weak () {\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "service waitUntilMS `kernel @noWarningIfUnused (\?deadline: inDate $uint32) {\n"
  "  if inDate > millis () then\n"
  "    kernel_blockRunningTaskInDeadlineList (!inDate)\n"
  "  end\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "proc waitDuringMS `user @noWarningIfUnused (\?delay: inDelay $uint32) {\n"
  "  waitUntilMS (!deadline:millis () + inDelay)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "func millis `isr `kernel `user @noWarningIfUnused () -> $uint32 {\n"
  "  result = gUptimeMS\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "//proc waitMS `user `init @noWarningIfUnused (\?inDuration $uint32) {\n"
  "//  let deadline = gUptimeMS + inDuration\n"
  "//  while gUptimeMS < deadline do\n"
  "//  end\n"
  "//}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_8_targetTemplates (
  "teensy-3-1-xtr.plm",
  "plm",
  true, // Text file
  2480, // Text length
  gWrapperFileContent_8_targetTemplates
) ;

//--- All files of 'files' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_1 [7] = {
  & gWrapperFile_3_targetTemplates,
  & gWrapperFile_4_targetTemplates,
  & gWrapperFile_5_targetTemplates,
  & gWrapperFile_6_targetTemplates,
  & gWrapperFile_7_targetTemplates,
  & gWrapperFile_8_targetTemplates,
  NULL
} ;

//--- All sub-directories of 'files' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_1 [1] = {
  NULL
} ;

//--- Directory 'files'

const cDirectoryWrapper gWrapperDirectory_1_targetTemplates (
  "files",
  6,
  gWrapperAllFiles_targetTemplates_1,
  0,
  gWrapperAllDirectories_targetTemplates_1
) ;

//--- File 'teensy-3-1-tp/build-verbose.py'

const char * gWrapperFileContent_9_targetTemplates = "#! /usr/bin/env python\n"
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

const cRegularFileWrapper gWrapperFile_9_targetTemplates (
  "build-verbose.py",
  "py",
  true, // Text file
  1002, // Text length
  gWrapperFileContent_9_targetTemplates
) ;

//--- File 'teensy-3-1-tp/build.py'

const char * gWrapperFileContent_10_targetTemplates = "#! /usr/bin/env python\n"
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
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#                         Object files directories                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def archiveBaseURL ():\n"
  "  return \"http://crossgcc.rts-software.org/downloads/plm-tools/\"\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Tool dir                                                                                                           *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def toolDir ():\n"
  "  (SYSTEM_NAME, MODE_NAME, RELEASE, VERSION, MACHINE) = os.uname ()\n"
  "  if SYSTEM_NAME == \"Darwin\":\n"
  "    MACHINE = \"i386\"\n"
  "  return os.path.expanduser (\"~/plm-tools/plm-\" + SYSTEM_NAME + \"-\" + MACHINE + \"-llvm-3.7.1-binutils-2.26-libusb-1.0.19\")\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM optimizer invocation                                                                                          *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def llvmOptimizerCompiler ():\n"
  "  return [toolDir () + \"/bin/opt\", \"-<<OPT_OPTIMIZATION_OPTION>>\", \"-disable-simplify-libcalls\", \"-S\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLC Compiler invocation                                                                                            *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLCcompiler ():\n"
  "  return [toolDir () + \"/bin/llc\", \"-function-sections\", \"-data-sections\", \"-<<LLC_OPTIMIZATION_OPTION>>\"]\n"
  "#  return [toolDir () + \"/bin/llc\", \"-<<LLC_OPTIMIZATION_OPTION>>\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   LLVM Linker invocation                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def LLVMLinkercompiler ():\n"
  "  return [toolDir () + \"/bin/llvm-link\", \"-S\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   CLANG Compiler invocation                                                                                          *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def CLANGcompiler ():\n"
  "  return [toolDir () + \"/bin/clang\", \"--target=armv7-none--eabi\", \"-mcpu=cortex-m4\", \"-Oz\", \"-fomit-frame-pointer\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   AS assembler invocation                                                                                            *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def asAssembler ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-as\", \"-mthumb\", \"-mcpu=cortex-m4\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Display object size invocation                                                                                     *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def displayObjectSize ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-size\", \"-t\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Object Dump invocation                                                                                             *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def dumpObjectCode ():\n"
  "  return [toolDir () + \"/bin/arm-eabi-objdump\", \"-Sdh\", \"-Mforce-thumb\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   Linker invocation                                                                                                  *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "def linker ():\n"
  "  result = [toolDir () + \"/bin/arm-eabi-ld\"]\n"
  "  result.append (\"-nostartfiles\")\n"
  "  result.append (\"--fatal-warnings\")\n"
  "  result.append (\"--warn-common\")\n"
  "  result.append (\"--no-undefined\")\n"
  "  result.append (\"--cref\")\n"
  "  result.append (\"-static\")\n"
  "  result.append (\"-s\")\n"
  "  result.append (\"--gc-sections\")\n"
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
  "  return [toolDir () + \"/bin/arm-eabi-objcopy\"]\n"
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
  "  return [toolDir () + \"/bin/teensy-loader-cli\", \"-w\", \"-v\", \"-mmcu=mk20dx256\"]\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "#                                                                                                                      *\n"
  "#   MAIN                                                                                                               *\n"
  "#                                                                                                                      *\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "currentFile = os.path.abspath (sys.argv [0])\n"
  "plm.runMakefile (toolDir (), archiveBaseURL (), LLVMsourceList (), assemblerSourceList (), objectDir (), \\\n"
  "                 LLCcompiler (), llvmOptimizerCompiler (), \\\n"
  "                 asAssembler (), productDir (), \\\n"
  "                 linker (), linkerLibraries (), \\\n"
  "                 objcopy (), dumpObjectCode (), displayObjectSize (), runExecutableOnTarget (), \\\n"
  "                 CLANGcompiler (), CsourceList (), LLVMLinkercompiler (), \\\n"
  "                 currentFile)\n"
  "\n"
  "#----------------------------------------------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_10_targetTemplates (
  "build.py",
  "py",
  true, // Text file
  14503, // Text length
  gWrapperFileContent_10_targetTemplates
) ;

//--- File 'teensy-3-1-tp/clean.py'

const char * gWrapperFileContent_11_targetTemplates = "#! /usr/bin/env python\n"
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

const cRegularFileWrapper gWrapperFile_11_targetTemplates (
  "clean.py",
  "py",
  true, // Text file
  1264, // Text length
  gWrapperFileContent_11_targetTemplates
) ;

//--- File 'teensy-3-1-tp/linker.ld'

const char * gWrapperFileContent_12_targetTemplates = "/*----------------------------------------------------------------------------*/\n"
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
  "  } > flash\n"
  "\n"
  "  .ARM.exidx : {\n"
  "    *(.ARM.exidx* .gnu.linkonce.armexidx.*);\n"
  "    __code_end = . ;\n"
  "  } > flash\n"
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
  "    . += 1k ;\n"
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

const cRegularFileWrapper gWrapperFile_12_targetTemplates (
  "linker.ld",
  "ld",
  true, // Text file
  5218, // Text length
  gWrapperFileContent_12_targetTemplates
) ;

//--- File 'teensy-3-1-tp/objdump.py'

const char * gWrapperFileContent_13_targetTemplates = "#! /usr/bin/env python\n"
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

const cRegularFileWrapper gWrapperFile_13_targetTemplates (
  "objdump.py",
  "py",
  true, // Text file
  1005, // Text length
  gWrapperFileContent_13_targetTemplates
) ;

//--- File 'teensy-3-1-tp/objsize.py'

const char * gWrapperFileContent_14_targetTemplates = "#! /usr/bin/env python\n"
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

const cRegularFileWrapper gWrapperFile_14_targetTemplates (
  "objsize.py",
  "py",
  true, // Text file
  1013, // Text length
  gWrapperFileContent_14_targetTemplates
) ;

//--- File 'teensy-3-1-tp/run.py'

const char * gWrapperFileContent_15_targetTemplates = "#! /usr/bin/env python\n"
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
  "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"run\"])\n"
  "#--- Wait for subprocess termination\n"
  "try:\n"
  "  if childProcess.poll () == None :\n"
  "    childProcess.wait ()\n"
  "  if childProcess.returncode != 0 :\n"
  "    sys.exit (childProcess.returncode)\n"
  "except :\n"
  "    sys.exit (1)\n"
  "\n"
  "#------------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_15_targetTemplates (
  "run.py",
  "py",
  true, // Text file
  1036, // Text length
  gWrapperFileContent_15_targetTemplates
) ;

//--- File 'teensy-3-1-tp/section-code.s'

const char * gWrapperFileContent_16_targetTemplates = "\n"
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
  "  .global !PROC!HardFaultHandler\n"
  "  .type !PROC!HardFaultHandler, %function\n"
  "\n"
  "!PROC!HardFaultHandler:\n"
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

const cRegularFileWrapper gWrapperFile_16_targetTemplates (
  "section-code.s",
  "s",
  true, // Text file
  3361, // Text length
  gWrapperFileContent_16_targetTemplates
) ;

//--- File 'teensy-3-1-tp/section-dispatcher-entry.s'

const char * gWrapperFileContent_17_targetTemplates = "  .word  !ENTRY! @ !IDX!\n" ;

const cRegularFileWrapper gWrapperFile_17_targetTemplates (
  "section-dispatcher-entry.s",
  "s",
  true, // Text file
  25, // Text length
  gWrapperFileContent_17_targetTemplates
) ;

//--- File 'teensy-3-1-tp/section-dispatcher-header.s'

const char * gWrapperFileContent_18_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 S E C T I O N   T A B L E                                                                            *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "__udf_dispatcher_table:\n" ;

const cRegularFileWrapper gWrapperFile_18_targetTemplates (
  "section-dispatcher-header.s",
  "s",
  true, // Text file
  630, // Text length
  gWrapperFileContent_18_targetTemplates
) ;

//--- File 'teensy-3-1-tp/section-entry.s'

const char * gWrapperFileContent_19_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  Section !ENTRY!\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global !ENTRY!\n"
  "  .type !ENTRY!, %function\n"
  "\n"
  "!ENTRY!:\n"
  "    udf !IDX!\n"
  "    bx  lr\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_19_targetTemplates (
  "section-entry.s",
  "s",
  true, // Text file
  343, // Text length
  gWrapperFileContent_19_targetTemplates
) ;

//--- File 'teensy-3-1-tp/service-dispatcher-entry.s'

const char * gWrapperFileContent_20_targetTemplates = "  .word  !ENTRY! @ !IDX! + 1\n" ;

const cRegularFileWrapper gWrapperFile_20_targetTemplates (
  "service-dispatcher-entry.s",
  "s",
  true, // Text file
  29, // Text length
  gWrapperFileContent_20_targetTemplates
) ;

//--- File 'teensy-3-1-tp/service-dispatcher-header.s'

const char * gWrapperFileContent_21_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@                                                                                                                      *\n"
  "@                 S V C    D I S P A T C H E R    T A B L E                                                            *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .type __direct_return_for_null_service, %function\n"
  "\n"
  "__svc_dispatcher_table:\n"
  "  .word __direct_return_for_null_service @ 0\n" ;

const cRegularFileWrapper gWrapperFile_21_targetTemplates (
  "service-dispatcher-header.s",
  "s",
  true, // Text file
  728, // Text length
  gWrapperFileContent_21_targetTemplates
) ;

//--- File 'teensy-3-1-tp/service-entry.s'

const char * gWrapperFileContent_22_targetTemplates = "@----------------------------------------------------------------------------------------------------------------------*\n"
  "@  Service !ENTRY!\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global !ENTRY!\n"
  "  .type !ENTRY!, %function\n"
  "\n"
  "!ENTRY!:\n"
  "    svc #!IDX! + 1\n"
  "    bx  lr\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_22_targetTemplates (
  "service-entry.s",
  "s",
  true, // Text file
  348, // Text length
  gWrapperFileContent_22_targetTemplates
) ;

//--- File 'teensy-3-1-tp/target-exception.ll'

const char * gWrapperFileContent_23_targetTemplates = ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "define internal void @raise_exception (i32 %inSourceLine, i32 %inCode, i8* %inSourceFile) nounwind noreturn naked {\n"
  ";--- Mask interrupt: write 1 into FAULTMASK register\n"
  "  call void asm sideeffect \"msr FAULTMASK, $0\", \"r\"(i32 1) nounwind\n"
  ";--- Goto user code\n"
  "  call void @raise_exception_internal (i32 %inSourceLine, i32 %inCode, i8* %inSourceFile)\n"
  "  unreachable\n"
  "}\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_23_targetTemplates (
  "target-exception.ll",
  "ll",
  true, // Text file
  486, // Text length
  gWrapperFileContent_23_targetTemplates
) ;

//--- File 'teensy-3-1-tp/target.c'

const char * gWrapperFileContent_24_targetTemplates = "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "#define TASK_COUNT (!TASKCOUNT!)\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef unsigned task_list ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//                                                                                                                     *\n"
  "//   T A S K    R O U T I N E    T Y P E                                                                               *\n"
  "//                                                                                                                     *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef void (* routineTaskType) (void) ;\n"
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
  "//                   |                            |                                                                    *\n"
  "//         PSP+32 -> |----------------------------| \\                                                                  *\n"
  "//                   | xPSR                       |  |                                                                 *\n"
  "//         PSP+28 -> |----------------------------|  |                                                                 *\n"
  "//                   | PC (after SVC instruction) |  |                                                                 *\n"
  "//         PSP+24 -> |----------------------------|  |                                                                 *\n"
  "//                   | LR                         |  |                                                                 *\n"
  "//         PSP+20 -> |----------------------------|  |                                                                 *\n"
  "//                   | R12                        |  |  Saved by interrupt response                                    *\n"
  "//         PSP+16 -> |----------------------------|  |                                                                 *\n"
  "//                   | R3                         |  |                                                                 *\n"
  "//         PSP+12 -> |----------------------------|  |                                                                 *\n"
  "//                   | R2                         |  |                                                                 *\n"
  "//         PSP+8  -> |----------------------------|  |                                                                 *\n"
  "//                   | R1                         |  |                                                                 *\n"
  "//         PSP+4  -> |----------------------------|  |                                                                 *\n"
  "//                   | R0                         |  |                                                                 *\n"
  "//         PSP    -> |----------------------------| /                                                                  *\n"
  "//                                                                                                                     *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  "  unsigned mSP_USR ;\n"
  "  unsigned mLR_RETURN_CODE ;\n"
  "} task_context ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_set_return_code (task_context * inTaskContext,\n"
  "                                    const unsigned inReturnCode) {\n"
  "  unsigned * ptr = (unsigned *) inTaskContext->mSP_USR ;\n"
  "  *ptr = inReturnCode ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static void kernel_set_task_context (task_context * inTaskContext,\n"
  "                                     const unsigned inStackPointerInitialValue,\n"
  "                                     routineTaskType inTaskRoutine) {\n"
  "//--- Initialize LR\n"
  "  inTaskContext->mLR_RETURN_CODE = 0xFFFFFFFD ;\n"
  "//--- Initialize SP\n"
  "  inTaskContext->mSP_USR = inStackPointerInitialValue - 32 ; // 8 stacked registers\n"
  "  unsigned * ptr = (unsigned *) inTaskContext->mSP_USR ;\n"
  "//--- Initialize PC\n"
  "  ptr += 6 ; // +24\n"
  "  *ptr = (unsigned) inTaskRoutine ;\n"
  "//--- Initialize CPSR\n"
  "  ptr ++ ; // +28\n"
  "  *ptr = 1 << 24 ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   T A S K    C O N T R O L    B L O C K                                                                             *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "typedef struct task_control_block {\n"
  "//--- Context buffer\n"
  "  task_context mTaskContext ;\n"
  "//--- This field is used for deadline waiting\n"
  "  unsigned mDate ;\n"
  "//---\n"
  "  task_list * mWaitingList ;\n"
  "//--- Stack buffer parameters\n"
  "  unsigned * mStackBufferAddress ;\n"
  "  unsigned mStackBufferSize ; // In bytes\n"
  "} task_control_block ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static task_control_block gTaskDescriptorArray [TASK_COUNT] ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   S C H E D U L E R                                                                                                 *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "task_context * gRunningTaskContextSaveAddress ; // Shared with assembly code (arm_context.s)\n"
  "static unsigned gRunningTaskIndex ; // Not significant if gRunningTaskContextSaveAddress == NULL\n"
  "static task_list gReadyTaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static unsigned kernel_runningTaskIndex (void) {\n"
  "  return gRunningTaskIndex ;\n"
  "}\n"
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
  "  gRunningTaskContextSaveAddress = (task_context *) 0 ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_selectTaskToRun (void) ;\n"
  "\n"
  "void kernel_selectTaskToRun (void) {\n"
  "  if (((task_context *) 0) != gRunningTaskContextSaveAddress) {\n"
  "    gReadyTaskList |= 1 << gRunningTaskIndex ;\n"
  "    gRunningTaskContextSaveAddress = (task_context *) 0 ;\n"
  "  }\n"
  "  if (gReadyTaskList != 0) {\n"
  "    gRunningTaskIndex = countTrainingZeros (gReadyTaskList) ;\n"
  "    gReadyTaskList &= ~ (1 << gRunningTaskIndex) ;\n"
  "    gRunningTaskContextSaveAddress = & (gTaskDescriptorArray [gRunningTaskIndex].mTaskContext) ;\n"
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
  "                         routineTaskType inTaskRoutine) ;\n"
  "\n"
  "void kernel_create_task (const unsigned inTaskIndex,\n"
  "                         unsigned * inStackBufferAddress,\n"
  "                         unsigned inStackBufferSize,\n"
  "                         routineTaskType inTaskRoutine) {\n"
  "  task_control_block * taskDescriptorPtr = & gTaskDescriptorArray [inTaskIndex] ;\n"
  "  taskDescriptorPtr->mWaitingList = (task_list *) 0 ;\n"
  "//--- Store stack parameters\n"
  "  taskDescriptorPtr->mStackBufferAddress = inStackBufferAddress ;\n"
  "  taskDescriptorPtr->mStackBufferSize = inStackBufferSize ;\n"
  "//--- Stack Pointer initial value\n"
  "  const unsigned spInitialValue = ((unsigned) taskDescriptorPtr->mStackBufferAddress) + taskDescriptorPtr->mStackBufferSize ;\n"
  "//--- Initialize Context\n"
  "  kernel_set_task_context (& (taskDescriptorPtr->mTaskContext),\n"
  "                           spInitialValue,\n"
  "                           inTaskRoutine) ;\n"
  "//--- Make task ready\n"
  "  kernel_makeTaskReady (inTaskIndex) ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//   L I S T    M A N A G E M E N T                                                                                    *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "static task_list gDeadlineWaitingTaskList ;\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//  B L O C K I N G    R U N N I N G    T A S K                                                                        *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_blockRunningTaskInList (task_list * ioWaitingList) asm (\"proc..kernel_blockRunningTaskInList\") ;\n"
  "void kernel_blockRunningTaskInList (task_list * ioWaitingList) {\n"
  "  const unsigned currentTaskIndex = kernel_runningTaskIndex () ;\n"
  "  *ioWaitingList |= 1 << currentTaskIndex ;\n"
  "  task_control_block * taskDescriptorPtr = & gTaskDescriptorArray [currentTaskIndex] ;\n"
  "  taskDescriptorPtr->mWaitingList = ioWaitingList ;\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_blockRunningTaskInDeadlineList (const unsigned inDeadlineMS) asm (\"proc..kernel_blockRunningTaskInDeadlineList\") ;\n"
  "void kernel_blockRunningTaskInDeadlineList (const unsigned inDeadlineMS) {\n"
  "  const unsigned currentTaskIndex = kernel_runningTaskIndex () ;\n"
  "  task_control_block * taskDescriptorPtr = & gTaskDescriptorArray [currentTaskIndex] ;\n"
  "  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;\n"
  "  taskDescriptorPtr->mDate = inDeadlineMS ;\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_blockRunningTaskInListAndDeadlineList (task_list * ioWaitingList, const unsigned inDeadlineMS)\n"
  "  asm (\"proc..kernel_blockRunningTaskInListAndDeadlineList\") ;\n"
  "\n"
  "void kernel_blockRunningTaskInListAndDeadlineList (task_list * ioWaitingList, const unsigned inDeadlineMS) {\n"
  "  const unsigned currentTaskIndex = kernel_runningTaskIndex () ;\n"
  "  task_control_block * taskDescriptorPtr = & gTaskDescriptorArray [currentTaskIndex] ;\n"
  "  *ioWaitingList |= 1 << currentTaskIndex ;\n"
  "  taskDescriptorPtr->mWaitingList = ioWaitingList ;\n"
  "  gDeadlineWaitingTaskList |= 1 << currentTaskIndex ;\n"
  "  taskDescriptorPtr->mDate = inDeadlineMS ;\n"
  "  kernel_makeNoTaskRunning () ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "//  M A K E    T A S K    R E A D Y                                                                                    *\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_makeTaskReadyFromWaitingList (task_list * ioWaitingList) asm (\"proc..kernel_makeTaskReadyFromWaitingList\") ;\n"
  "void kernel_makeTaskReadyFromWaitingList (task_list * ioWaitingList) {\n"
  "  const unsigned taskIndex = countTrainingZeros (* ioWaitingList) ;\n"
  "  task_control_block * taskDescriptorPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "  kernel_set_return_code (& taskDescriptorPtr->mTaskContext, 1) ;\n"
  "  gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;\n"
  "  *(taskDescriptorPtr->mWaitingList) &= ~ (1 << taskIndex) ;\n"
  "  taskDescriptorPtr->mWaitingList = (task_list *) 0 ;\n"
  "  kernel_makeTaskReady (taskIndex) ;\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "void kernel_tasksWithEarlierDateBecomeReady (const unsigned inCurrentDate) asm (\"proc..kernel_tasksWithEarlierDateBecomeReady\") ;\n"
  "void kernel_tasksWithEarlierDateBecomeReady (const unsigned inCurrentDate) {\n"
  "  unsigned w = gDeadlineWaitingTaskList ;\n"
  "  while (w > 0) {\n"
  "    const unsigned taskIndex = countTrainingZeros (w) ;\n"
  "    w &= ~ (1 << taskIndex) ;\n"
  "    task_control_block * taskDescriptorPtr = & gTaskDescriptorArray [taskIndex] ;\n"
  "    if (inCurrentDate >= taskDescriptorPtr->mDate) {\n"
  "      gDeadlineWaitingTaskList &= ~ (1 << taskIndex) ;\n"
  "      if (taskDescriptorPtr->mWaitingList != (task_list *) 0) {\n"
  "        *(taskDescriptorPtr->mWaitingList) &= ~ (1 << taskIndex) ;\n"
  "        taskDescriptorPtr->mWaitingList = (task_list *) 0 ;\n"
  "      }\n"
  "      kernel_set_return_code (& taskDescriptorPtr->mTaskContext, 0) ;\n"
  "      kernel_makeTaskReady (taskIndex) ;\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//---------------------------------------------------------------------------------------------------------------------*\n"
  "\n" ;

const cRegularFileWrapper gWrapperFile_24_targetTemplates (
  "target.c",
  "c",
  true, // Text file
  14647, // Text length
  gWrapperFileContent_24_targetTemplates
) ;

//--- File 'teensy-3-1-tp/target.ll'

const char * gWrapperFileContent_25_targetTemplates = "target datalayout = \"e-m:e-p:32:32-i64:64-v128:64:128-a:0:32-n32-S64\"\n"
  "target triple = \"thumbv7em-none--eabi\"\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  ";    ISR Vector                                                                                                        *\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "%vectorStructSeq = type {\n"
  "  i32*,            ; unsigned * mStackPointer\n"
  "  [15  x void()*], ; void (* mCoreSystemHandlerVector [15]) (void) ;\n"
  "  [240 x void()*], ; void (* mNonCoreHandlerVector [240]) (void) ;\n"
  "  [4   x i32]      ; int mFlash [4] ;\n"
  "} \n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "@__system_stack_end = external global i32\n"
  "\n"
  ";----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "declare void @as_resetHandler () nounwind\n"
  "declare void @as_svcHandler () nounwind\n"
  "declare void @as_systickHandler () nounwind\n"
  "\n"
  "@startup = constant %vectorStructSeq {\n"
  "  i32* @__system_stack_end,\n"
  ";--- ARM Core System Handler Vectors\n"
  "  [15  x void()*] [\n"
  "    void()* @as_resetHandler, ; 1\n"
  "    void()* @!PROC!NMIHandler, ; 2\n"
  "    void()* @!PROC!HardFaultHandler, ; 3\n"
  "    void()* @!PROC!MemManageHandler, ; 4\n"
  "    void()* @!PROC!BusFaultHandler, ; 5\n"
  "    void()* @!PROC!UsageFaultHandler, ; 6\n"
  "    void()* null, ; 7, reserved\n"
  "    void()* null, ; 8, reserved\n"
  "    void()* null, ; 9, reserved\n"
  "    void()* null, ; 10, reserved\n"
  "    void()* @as_svcHandler, ; 11\n"
  "    void()* @!PROC!DebugMonitorHandler, ; 12\n"
  "    void()* null, ; 13, reserved\n"
  "    void()* @!PROC!PendSVHandler, ; 14\n"
  "    void()* @as_systickHandler  ; 15\n"
  "  ],\n"
  ";--- Non-Core Vectors\n"
  "  [240  x void()*] [\n"
  "    void()* @!PROC!DMAChannel0TranfertCompleteHandler, ; 16\n"
  "    void()* @!PROC!DMAChannel1TranfertCompleteHandler, ; 17\n"
  "    void()* @!PROC!DMAChannel2TranfertCompleteHandler, ; 18\n"
  "    void()* @!PROC!DMAChannel3TranfertCompleteHandler, ; 19\n"
  "    void()* @!PROC!DMAChannel4TranfertCompleteHandler, ; 20\n"
  "    void()* @!PROC!DMAChannel5TranfertCompleteHandler, ; 21\n"
  "    void()* @!PROC!DMAChannel6TranfertCompleteHandler, ; 22\n"
  "    void()* @!PROC!DMAChannel7TranfertCompleteHandler, ; 23\n"
  "    void()* @!PROC!DMAChannel8TranfertCompleteHandler, ; 24\n"
  "    void()* @!PROC!DMAChannel9TranfertCompleteHandler, ; 25\n"
  "    void()* @!PROC!DMAChannel10TranfertCompleteHandler, ; 26\n"
  "    void()* @!PROC!DMAChannel11TranfertCompleteHandler, ; 27\n"
  "    void()* @!PROC!DMAChannel12TranfertCompleteHandler, ; 28\n"
  "    void()* @!PROC!DMAChannel13TranfertCompleteHandler, ; 29\n"
  "    void()* @!PROC!DMAChannel14TranfertCompleteHandler, ; 30\n"
  "    void()* @!PROC!DMAChannel15TranfertCompleteHandler, ; 31\n"
  "    void()* @!PROC!DMAErrorHandler, ; 32\n"
  "    void()* null, ; 33\n"
  "    void()* @!PROC!flashMemoryCommandCompleteHandler, ; 34\n"
  "    void()* @!PROC!flashMemoryReadCollisionHandler, ; 35\n"
  "    void()* @!PROC!modeControllerHandler, ; 36\n"
  "    void()* @!PROC!LLWUHandler, ; 37\n"
  "    void()* @!PROC!WDOGEWMHandler, ; 38\n"
  "    void()* null, ; 39\n"
  "    void()* @!PROC!I2C0Handler, ; 40\n"
  "    void()* @!PROC!I2C1Handler, ; 41\n"
  "    void()* @!PROC!SPI0Handler, ; 42\n"
  "    void()* @!PROC!SPI1Handler, ; 43\n"
  "    void()* null, ; 44\n"
  "    void()* @!PROC!CAN0MessageBufferHandler, ; 45\n"
  "    void()* @!PROC!CAN0BusOffHandler, ; 46\n"
  "    void()* @!PROC!CAN0ErrorHandler, ; 47\n"
  "    void()* @!PROC!CAN0TransmitWarningHandler, ; 48\n"
  "    void()* @!PROC!CAN0ReceiveWarningHandler, ; 49\n"
  "    void()* @!PROC!CAN0WakeUpHandler, ; 50\n"
  "    void()* @!PROC!I2S0TransmitHandler, ; 51\n"
  "    void()* @!PROC!I2S0ReceiveHandler, ; 52\n"
  "    void()* null, ; 53\n"
  "    void()* null, ; 54\n"
  "    void()* null, ; 55\n"
  "    void()* null, ; 56\n"
  "    void()* null, ; 57\n"
  "    void()* null, ; 58\n"
  "    void()* null, ; 59\n"
  "    void()* @!PROC!UART0LONHandler, ; 60\n"
  "    void()* @!PROC!UART0StatusHandler, ; 61\n"
  "    void()* @!PROC!UART0ErrorHandler, ; 62\n"
  "    void()* @!PROC!UART1StatusHandler, ; 63\n"
  "    void()* @!PROC!UART1ErrorHandler, ; 64\n"
  "    void()* @!PROC!UART2StatusHandler, ; 65\n"
  "    void()* @!PROC!UART2ErrorHandler, ; 66\n"
  "    void()* null, ; 67\n"
  "    void()* null, ; 68\n"
  "    void()* null, ; 69\n"
  "    void()* null, ; 70\n"
  "    void()* null, ; 71\n"
  "    void()* null, ; 72\n"
  "    void()* @!PROC!ADC0Handler, ; 73\n"
  "    void()* @!PROC!ADC1Handler, ; 74\n"
  "    void()* @!PROC!CMP0Handler, ; 75\n"
  "    void()* @!PROC!CMP1Handler, ; 76\n"
  "    void()* @!PROC!CMP2Handler, ; 77\n"
  "    void()* @!PROC!FMT0Handler, ; 78\n"
  "    void()* @!PROC!FMT1Handler, ; 79\n"
  "    void()* @!PROC!FMT2Handler, ; 80\n"
  "    void()* @!PROC!CMTHandler, ; 81\n"
  "    void()* @!PROC!RTCAlarmHandler, ; 82\n"
  "    void()* @!PROC!RTCSecondHandler, ; 83\n"
  "    void()* @!PROC!PITChannel0Handler, ; 84\n"
  "    void()* @!PROC!PITChannel1Handler, ; 85\n"
  "    void()* @!PROC!PITChannel2Handler, ; 86\n"
  "    void()* @!PROC!PITChannel3Handler, ; 87\n"
  "    void()* @!PROC!PDBHandler, ; 88\n"
  "    void()* @!PROC!USBOTGHandler, ; 89\n"
  "    void()* @!PROC!USBChargerDetectHandler, ; 90\n"
  "    void()* null, ; 91\n"
  "    void()* null, ; 92\n"
  "    void()* null, ; 93\n"
  "    void()* null, ; 94\n"
  "    void()* null, ; 95\n"
  "    void()* null, ; 96\n"
  "    void()* @!PROC!DAC0Handler, ; 97\n"
  "    void()* null, ; 98\n"
  "    void()* @!PROC!TSIHandler, ; 99\n"
  "    void()* @!PROC!MCGHandler, ; 100\n"
  "    void()* @!PROC!lowPowerTimerHandler, ; 101\n"
  "    void()* null, ; 102\n"
  "    void()* @!PROC!pinDetectPortAHandler, ; 103\n"
  "    void()* @!PROC!pinDetectPortBHandler, ; 104\n"
  "    void()* @!PROC!pinDetectPortCHandler, ; 105\n"
  "    void()* @!PROC!pinDetectPortDHandler, ; 106\n"
  "    void()* @!PROC!pinDetectPortEHandler, ; 107\n"
  "    void()* null, ; 108\n"
  "    void()* null, ; 109\n"
  "    void()* @!PROC!softwareInterruptHandler, ; 110\n"
  "    void()* null, ; 111\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 112 \xC3""\xA0"" 119\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 120 \xC3""\xA0"" 127\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 128 \xC3""\xA0"" 135\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 136 \xC3""\xA0"" 143\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 144 \xC3""\xA0"" 151\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 152 \xC3""\xA0"" 159\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 160 \xC3""\xA0"" 167\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 168 \xC3""\xA0"" 175\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 176 \xC3""\xA0"" 183\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 184 \xC3""\xA0"" 191\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 192 \xC3""\xA0"" 199\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 200 \xC3""\xA0"" 207\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 208 \xC3""\xA0"" 215\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 216 \xC3""\xA0"" 223\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 224 \xC3""\xA0"" 231\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 232 \xC3""\xA0"" 239\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, ; 240 \xC3""\xA0"" 247\n"
  "    void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null, void()* null  ; 248 \xC3""\xA0"" 255\n"
  "  ],\n"
  ";--- Flash magic values\n"
  "  [4   x i32] [i32 -1, i32 -1, i32 -1, i32 -2]\n"
  "}, section \".isr_vector\"\n"
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
  "define internal void @clearBSS () nounwind {\n"
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
  "define internal void @copyData () nounwind {\n"
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
  "define void @configuration.on.boot () nounwind {\n"
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

const cRegularFileWrapper gWrapperFile_25_targetTemplates (
  "target.ll",
  "ll",
  true, // Text file
  12514, // Text length
  gWrapperFileContent_25_targetTemplates
) ;

//--- File 'teensy-3-1-tp/target.s'

const char * gWrapperFileContent_26_targetTemplates = "\t.syntax unified\n"
  "\t.cpu cortex-m4\n"
  "\t.thumb\n"
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
  "@                    |                            |                                                                    *\n"
  "@          PSP+32 -> |----------------------------| \\ \n"
  "@                    | xPSR                       |  |\n"
  "@          PSP+28 -> |----------------------------|  |\n"
  "@                    | PC (after SVC instruction) |  |\n"
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
  "@                                                                                                                      *\n"
  "@                                            *---------------------*\n"
  "@                                            | LR return code      | +36 [ 9]\n"
  "@                                            *---------------------*\n"
  "@                                            | R13 (PSP)           | +32 [ 8]\n"
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
  "@  | gRunningTaskContextSaveAddress +------> | R4                  | + 0 [ 0]\n"
  "@  *--------------------------------*        *---------------------*\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  ".global backgroundTaskContext\n"
  ".lcomm backgroundTaskContext, 4\n"
  "\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global as_svcHandler\n"
  "  .type as_svcHandler, %function\n"
  "\n"
  "as_svcHandler:\n"
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
  "  ldr   r4, =gRunningTaskContextSaveAddress\n"
  "  ldr   r4, [r4]\n"
  "@----------------------------------------- Call service routine\n"
  "  blx   r12         @ R4:calling task context address, R5:thread PSP\n"
  "@----------------------------------------- Set return code (from R0 to R3) in stacked registers\n"
  "  stmia r5!, {r0, r1, r2, r3}\n"
  "@--- Continues in sequence to _handle_context_switch\n"
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
  "_handle_context_switch:\n"
  "@----------------------------------------- Select task to run\n"
  "  bl    kernel_selectTaskToRun\n"
  "@----------------------------------------- R0 <- calling task context, R1 <- new task context\n"
  "  ldr   r1, =gRunningTaskContextSaveAddress\n"
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
  "@                 S Y S T I C K    H A N D L E R    ( D O U B L E    S T A C K    M O D E )                            *\n"
  "@                                                                                                                      *\n"
  "@----------------------------------------------------------------------------------------------------------------------*\n"
  "\n"
  "  .global as_systickHandler\n"
  "  .type as_systickHandler, %function\n"
  "\n"
  "as_systickHandler:\n"
  "@----------------------------------------- Save preserved registers\n"
  "  push  {r4, r5, lr}\n"
  "@----------------------------------------- Activity led On (macro that uses only R4 and R5)\n"
  "  ACTIVITY_LED_ON\n"
  "@----------------------------------------- R4 <- running task context\n"
  "  ldr   r4, =gRunningTaskContextSaveAddress\n"
  "  ldr   r4, [r4]\n"
  "@----------------------------------------- Call Systick handler (C routine)\n"
  "  bl    proc..systickHandler\n"
  "@----------------------------------------- Test backgroundTaskContext to check if init passed\n"
  "  ldr   r5, =backgroundTaskContext\n"
  "  ldr   r5, [r5]\n"
  "  cmp   r5, #0\n"
  "  bne   _handle_context_switch\n"
  "@----------------------------------------- Still in init : return\n"
  "  pop   {r4, r5, pc}\n"
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
  "  .global as_resetHandler\n"
  "  .type as_resetHandler, %function\n"
  "\n"
  "as_resetHandler:\n"
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
  "  b  infiniteLoop\n" ;

const cRegularFileWrapper gWrapperFile_26_targetTemplates (
  "target.s",
  "s",
  true, // Text file
  12489, // Text length
  gWrapperFileContent_26_targetTemplates
) ;

//--- All files of 'teensy-3-1-tp' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_2 [19] = {
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
  & gWrapperFile_26_targetTemplates,
  NULL
} ;

//--- All sub-directories of 'teensy-3-1-tp' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_2 [1] = {
  NULL
} ;

//--- Directory 'teensy-3-1-tp'

const cDirectoryWrapper gWrapperDirectory_2_targetTemplates (
  "teensy-3-1-tp",
  18,
  gWrapperAllFiles_targetTemplates_2,
  0,
  gWrapperAllDirectories_targetTemplates_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetTemplates_0 [4] = {
  & gWrapperFile_0_targetTemplates,
  & gWrapperFile_1_targetTemplates,
  & gWrapperFile_2_targetTemplates,
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetTemplates_0 [3] = {
  & gWrapperDirectory_1_targetTemplates,
  & gWrapperDirectory_2_targetTemplates,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_targetTemplates (
  "",
  3,
  gWrapperAllFiles_targetTemplates_0,
  2,
  gWrapperAllDirectories_targetTemplates_0
) ;


