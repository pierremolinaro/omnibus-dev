#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateTarget (const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_string constinArgument_inProductDirectory,
                             const GALGAS_lstring constinArgument_inTargetName,
                             const GALGAS_targetParameters constinArgument_inTargetParameters,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_lstringlist enumerator_3615 (constinArgument_inTargetParameters.readProperty_mPython_5F_utilityToolList (), kENUMERATION_UP) ;
  while (enumerator_3615.hasCurrentObject ()) {
    {
    routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 85)).add_operation (enumerator_3615.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 85)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 86)).add_operation (enumerator_3615.current_mValue_31_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 83)) ;
    }
    enumerator_3615.gotoNextObject () ;
  }
  {
  GALGAS__32_stringlist temp_0 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("target-generation.galgas", 94)) ;
  temp_0.addAssign_operation (GALGAS_string ("!SYSTEMSTACKSIZE!"), constinArgument_inTargetParameters.readProperty_mSystemStackSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("target-generation.galgas", 94))  COMMA_SOURCE_FILE ("target-generation.galgas", 94)) ;
  routine_copyFileWithSubstitutions (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 92)).add_operation (constinArgument_inTargetParameters.readProperty_mLinkerScript ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 92)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 93)), temp_0, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 90)) ;
  }
  GALGAS_string var_opt_5F_optimizationOption_4184 = GALGAS_string ("disable-opt") ;
  GALGAS_string var_llc_5F_optimizationOption_4229 = GALGAS_string ("O0") ;
  GALGAS_bigint var_optimizationOptionCount_4266 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 99)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (gOption_omnibus_5F_options_optimization_31_.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_opt_5F_optimizationOption_4184 = GALGAS_string ("O1") ;
      var_llc_5F_optimizationOption_4229 = GALGAS_string ("O1") ;
      var_optimizationOptionCount_4266.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 103)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (gOption_omnibus_5F_options_optimization_32_.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_opt_5F_optimizationOption_4184 = GALGAS_string ("O2") ;
      var_llc_5F_optimizationOption_4229 = GALGAS_string ("O2") ;
      var_optimizationOptionCount_4266.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 108)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (gOption_omnibus_5F_options_optimizationS.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_opt_5F_optimizationOption_4184 = GALGAS_string ("Os") ;
      var_llc_5F_optimizationOption_4229 = GALGAS_string ("O2") ;
      var_optimizationOptionCount_4266.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 113)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (gOption_omnibus_5F_options_optimizationZ.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_opt_5F_optimizationOption_4184 = GALGAS_string ("Oz") ;
      var_llc_5F_optimizationOption_4229 = GALGAS_string ("O2") ;
      var_optimizationOptionCount_4266.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 118)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (gOption_omnibus_5F_options_optimizationZ_33_.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_opt_5F_optimizationOption_4184 = GALGAS_string ("O3") ;
      var_llc_5F_optimizationOption_4229 = GALGAS_string ("O3") ;
      var_optimizationOptionCount_4266.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 123)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsStrictSup, var_optimizationOptionCount_4266.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 125)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("target-generation.galgas", 126)), GALGAS_string ("several optimization options: --").add_operation (var_opt_5F_optimizationOption_4184, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 126)).add_operation (GALGAS_string (" is used"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 126)), fixItArray7  COMMA_SOURCE_FILE ("target-generation.galgas", 126)) ;
    }
  }
  {
  GALGAS__32_stringlist temp_8 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("target-generation.galgas", 132)) ;
  temp_8.addAssign_operation (GALGAS_string ("<<OPT_OPTIMIZATION_OPTION>>"), var_opt_5F_optimizationOption_4184  COMMA_SOURCE_FILE ("target-generation.galgas", 132)) ;
  temp_8.addAssign_operation (GALGAS_string ("<<LLC_OPTIMIZATION_OPTION>>"), var_llc_5F_optimizationOption_4229  COMMA_SOURCE_FILE ("target-generation.galgas", 132)) ;
  routine_copyExecutableFileWithSubstitutions (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 130)).add_operation (constinArgument_inTargetParameters.readProperty_mPython_5F_build ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 130)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 131)), temp_8, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 128)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'copyExecutableFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_copyExecutableFile (const GALGAS_string constinArgument_inCurrentDirectory,
                                 const GALGAS_string constinArgument_inSourceFileNamePath,
                                 const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_filewrapper var_fw_5921 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      GALGAS_string var_s_5963 = var_fw_5921.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 145)) ;
      GALGAS_bool joker_6098 ; // Joker input parameter
      var_s_5963.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6098, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 146)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir_6135 = GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 148)) ;
    GALGAS_string var_s_6239 = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir_6135.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 149)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 149)) ;
    GALGAS_bool joker_6409 ; // Joker input parameter
    var_s_6239.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6409, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 150)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'copyExecutableFileWithSubstitutions'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_copyExecutableFileWithSubstitutions (const GALGAS_string constinArgument_inCurrentDirectory,
                                                  const GALGAS_string constinArgument_inSourceFileNamePath,
                                                  const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                                                  const GALGAS__32_stringlist constinArgument_inSubstitutions,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_6779 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_filewrapper var_fw_6876 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      var_s_6779 = var_fw_6876.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 165)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir_7001 = GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 167)) ;
    var_s_6779 = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir_7001.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 168)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 168)) ;
  }
  cEnumerator__32_stringlist enumerator_7234 (constinArgument_inSubstitutions, kENUMERATION_UP) ;
  while (enumerator_7234.hasCurrentObject ()) {
    var_s_6779 = var_s_6779.getter_stringByReplacingStringByString (enumerator_7234.current_mValue_30_ (HERE), enumerator_7234.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 171)) ;
    enumerator_7234.gotoNextObject () ;
  }
  GALGAS_bool joker_7423 ; // Joker input parameter
  var_s_6779.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_7423, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 173)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'copyFileWithSubstitutions'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_copyFileWithSubstitutions (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inSourceFileNamePath,
                                        const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                                        const GALGAS__32_stringlist constinArgument_inSubstitutions,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_7777 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_filewrapper var_fw_7874 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      var_s_7777 = var_fw_7874.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 187)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir_7999 = GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 189)) ;
    var_s_7777 = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir_7999.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 190)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 190)) ;
  }
  cEnumerator__32_stringlist enumerator_8232 (constinArgument_inSubstitutions, kENUMERATION_UP) ;
  while (enumerator_8232.hasCurrentObject ()) {
    var_s_7777 = var_s_7777.getter_stringByReplacingStringByString (enumerator_8232.current_mValue_30_ (HERE), enumerator_8232.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 193)) ;
    enumerator_8232.gotoNextObject () ;
  }
  GALGAS_bool joker_8411 ; // Joker input parameter
  var_s_7777.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_8411, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 195)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'getTargetTextFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_getTargetTextFile (const GALGAS_string & constinArgument_inCurrentDirectory,
                                          const GALGAS_string & constinArgument_inTargetFile,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outContents ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_filewrapper var_fw_8763 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      result_outContents = var_fw_8763.getter_textFileContentsAtPath (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 207)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir_8890 = GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 209)) ;
    result_outContents = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir_8890.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 210)).add_operation (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 210)) ;
  }
//---
  return result_outContents ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getTargetTextFile [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_getTargetTextFile (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_getTargetTextFile (operand0,
                                     operand1,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getTargetTextFile ("getTargetTextFile",
                                                                   functionWithGenericHeader_getTargetTextFile,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   2,
                                                                   functionArgs_getTargetTextFile) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'importFilesAndCompile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_importFilesAndCompile (const GALGAS_lstring constinArgument_inSourceFile,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast_1227 = GALGAS_ast::constructor_default (SOURCE_FILE ("program.galgas", 33)) ;
  GALGAS_lstringlist var_importedFileList_1319 ;
  GALGAS_location var_endOfSourceFile_1360 ;
  var_importedFileList_1319.drop () ;
  var_endOfSourceFile_1360.drop () ;
  cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_1227, var_importedFileList_1319, var_endOfSourceFile_1360  COMMA_SOURCE_FILE ("program.galgas", 34)) ;
  GALGAS_stringset var_importedFileAbsolutePathSet_1455 = GALGAS_stringset::constructor_setWithString (constinArgument_inSourceFile.readProperty_string ()  COMMA_SOURCE_FILE ("program.galgas", 40)) ;
  GALGAS_string var_currentDirectory_1518 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 41)) ;
  {
  routine_recursiveImportFiles (var_ast_1227, var_currentDirectory_1518, var_importedFileList_1319, var_importedFileAbsolutePathSet_1455, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 42)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 49)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_targetNameSet_1852 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("program.galgas", 50)) ;
      cEnumerator_lstringlist enumerator_1877 (var_ast_1227.readProperty_mTargetListAST (), kENUMERATION_UP) ;
      while (enumerator_1877.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_targetNameSet_1852.getter_hasKey (enumerator_1877.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("program.galgas", 52)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_1877.current_mValue (HERE).readProperty_location (), GALGAS_string ("Duplicated target"), fixItArray2  COMMA_SOURCE_FILE ("program.galgas", 53)) ;
          }
        }
        var_targetNameSet_1852.addAssign_operation (enumerator_1877.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("program.galgas", 55)) ;
        enumerator_1877.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 59)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_ast_1227.readProperty_mTargetListAST ().getter_length (SOURCE_FILE ("program.galgas", 60)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (var_endOfSourceFile_1360, GALGAS_string ("no target: only syntax analysis is performed"), fixItArray5  COMMA_SOURCE_FILE ("program.galgas", 61)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsStrictSup, var_ast_1227.readProperty_mTargetListAST ().getter_length (SOURCE_FILE ("program.galgas", 62)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (var_endOfSourceFile_1360, var_ast_1227.readProperty_mTargetListAST ().getter_length (SOURCE_FILE ("program.galgas", 63)).getter_string (SOURCE_FILE ("program.galgas", 63)).add_operation (GALGAS_string (" targets: only syntax analysis is performed"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 63)), fixItArray7  COMMA_SOURCE_FILE ("program.galgas", 63)) ;
          }
        }
        if (kBoolFalse == test_6) {
          cEnumerator_lstringlist enumerator_2461 (var_ast_1227.readProperty_mTargetListAST (), kENUMERATION_UP) ;
          while (enumerator_2461.hasCurrentObject ()) {
            {
            routine_compileProject (constinArgument_inSourceFile, var_ast_1227, enumerator_2461.current_mValue (HERE), var_endOfSourceFile_1360, var_currentDirectory_1518, var_importedFileAbsolutePathSet_1455, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 66)) ;
            }
            enumerator_2461.gotoNextObject () ;
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileProject'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileProject (const GALGAS_lstring constinArgument_inSourceFile,
                             const GALGAS_ast constinArgument_inAST,
                             const GALGAS_lstring constinArgument_inTargetName,
                             const GALGAS_location constinArgument_inEndOfSourceFile,
                             const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_stringset constinArgument_inImportedFileAbsolutePathSet,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_timer var_parsingTime_3230 = GALGAS_timer::constructor_start (SOURCE_FILE ("program.galgas", 89)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("** Parsing\n")  COMMA_SOURCE_FILE ("program.galgas", 91)) ;
    }
  }
  GALGAS_ast var_ast_3342 = constinArgument_inAST ;
  GALGAS_stringset var_sourceFileAbsolutePathSet_3393 = constinArgument_inImportedFileAbsolutePathSet ;
  var_ast_3342.setter_setMDeclarationListAST (GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("program.galgas", 96)) COMMA_SOURCE_FILE ("program.galgas", 96)) ;
  cEnumerator_declarationListAST enumerator_3554 (constinArgument_inAST.readProperty_mDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_3554.hasCurrentObject ()) {
    GALGAS_abstractDeclarationAST var_newDeclaration_3690 ;
    callExtensionMethod_enterExtension ((cPtr_abstractDeclarationAST *) enumerator_3554.current_mDeclaration (HERE).ptr (), var_ast_3342.mProperty_mExtendStaticArrayDeclarationAST, var_newDeclaration_3690, inCompiler COMMA_SOURCE_FILE ("program.galgas", 98)) ;
    var_ast_3342.mProperty_mDeclarationListAST.addAssign_operation (var_newDeclaration_3690  COMMA_SOURCE_FILE ("program.galgas", 102)) ;
    enumerator_3554.gotoNextObject () ;
  }
  cEnumerator__5B_string_3A_staticListValueListAST_5D_ enumerator_3783 (var_ast_3342.readProperty_mExtendStaticArrayDeclarationAST (), kENUMERATION_UP) ;
  while (enumerator_3783.hasCurrentObject ()) {
    cEnumerator_staticListValueListAST enumerator_3852 (enumerator_3783.current_value (HERE), kENUMERATION_UP) ;
    while (enumerator_3852.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_3852.current_mLocation (HERE), GALGAS_string ("'").add_operation (enumerator_3783.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 106)).add_operation (GALGAS_string ("' static list is not defined"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 106)), fixItArray1  COMMA_SOURCE_FILE ("program.galgas", 106)) ;
      enumerator_3852.gotoNextObject () ;
    }
    enumerator_3783.gotoNextObject () ;
  }
  {
  routine_enter_5F_NOP_5F_function (var_ast_3342.mProperty_mDeclarationListAST, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 110)) ;
  }
  {
  routine_addTargetSpecificFiles (constinArgument_inTargetName, var_ast_3342, constinArgument_inCurrentDirectory, var_sourceFileAbsolutePathSet_3393, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 112)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 118)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_ast_3342.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_compiletimeBoolAST::constructor_new (SOURCE_FILE ("program.galgas", 121))  COMMA_SOURCE_FILE ("program.galgas", 121)) ;
      var_ast_3342.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_compileTimeIntAST::constructor_new (SOURCE_FILE ("program.galgas", 123))  COMMA_SOURCE_FILE ("program.galgas", 123)) ;
      var_ast_3342.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_boolTypeAST::constructor_new (SOURCE_FILE ("program.galgas", 125))  COMMA_SOURCE_FILE ("program.galgas", 125)) ;
      var_ast_3342.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_literalStringDeclarationAST::constructor_new (SOURCE_FILE ("program.galgas", 127))  COMMA_SOURCE_FILE ("program.galgas", 127)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 130)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      routine_retainRequiredDrivers (var_ast_3342, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 131)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 134)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("program.galgas", 134)).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->printMessage (GALGAS_string ("    ").add_operation (var_ast_3342.readProperty_mDeclarationListAST ().getter_length (SOURCE_FILE ("program.galgas", 135)).getter_string (SOURCE_FILE ("program.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 135)).add_operation (GALGAS_string (" declarations\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 135))  COMMA_SOURCE_FILE ("program.galgas", 135)) ;
      inCompiler->printMessage (GALGAS_string ("    Duration: ").add_operation (var_parsingTime_3230.getter_string (SOURCE_FILE ("program.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 136)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 136))  COMMA_SOURCE_FILE ("program.galgas", 136)) ;
    }
  }
  GALGAS_declarationListAST var_orderedDeclarationListAST_5409 = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("program.galgas", 139)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 140)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_timer var_t_5469 = GALGAS_timer::constructor_start (SOURCE_FILE ("program.galgas", 141)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_6) {
          inCompiler->printMessage (GALGAS_string ("** Declaration sorting\n")  COMMA_SOURCE_FILE ("program.galgas", 143)) ;
        }
      }
      {
      routine_buildOrderedDeclarationList (var_ast_3342, constinArgument_inSourceFile.readProperty_string (), constinArgument_inEndOfSourceFile, var_orderedDeclarationListAST_5409, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 145)) ;
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_7) {
          inCompiler->printMessage (GALGAS_string ("    Duration: ").add_operation (var_t_5469.getter_string (SOURCE_FILE ("program.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 152))  COMMA_SOURCE_FILE ("program.galgas", 152)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      cEnumerator_checkTargetListAST enumerator_6068 (var_ast_3342.readProperty_mCheckTargetListAST (), kENUMERATION_UP) ;
      while (enumerator_6068.hasCurrentObject ()) {
        GALGAS_bool var_accepted_6118 = GALGAS_bool (false) ;
        cEnumerator_lstringlist enumerator_6152 (enumerator_6068.current_mAcceptedTargetList (HERE), kENUMERATION_UP) ;
        bool bool_9 = var_accepted_6118.operator_not (SOURCE_FILE ("program.galgas", 159)).isValidAndTrue () ;
        if (enumerator_6152.hasCurrentObject () && bool_9) {
          while (enumerator_6152.hasCurrentObject () && bool_9) {
            var_accepted_6118 = GALGAS_bool (kIsEqual, enumerator_6152.current_mValue (HERE).readProperty_string ().objectCompare (constinArgument_inTargetName.readProperty_string ())) ;
            enumerator_6152.gotoNextObject () ;
            if (enumerator_6152.hasCurrentObject ()) {
              bool_9 = var_accepted_6118.operator_not (SOURCE_FILE ("program.galgas", 159)).isValidAndTrue () ;
            }
          }
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = var_accepted_6118.operator_not (SOURCE_FILE ("program.galgas", 162)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_6068.current_mTargetConstructLocation (HERE), GALGAS_string ("invalid target"), fixItArray11  COMMA_SOURCE_FILE ("program.galgas", 163)) ;
          }
        }
        enumerator_6068.gotoNextObject () ;
      }
    }
  }
  GALGAS_semanticContext var_semanticContext_6481 = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("program.galgas", 168)) ;
  GALGAS_staticEntityMap var_globalLiteralStringMap_6538 = GALGAS_staticEntityMap::constructor_default (SOURCE_FILE ("program.galgas", 169)) ;
  GALGAS_staticListInitializationMap var_staticListValueMap_6603 = GALGAS_staticListInitializationMap::constructor_emptyMap (SOURCE_FILE ("program.galgas", 170)) ;
  var_ast_3342.setter_setMDeclarationListAST (var_orderedDeclarationListAST_5409 COMMA_SOURCE_FILE ("program.galgas", 171)) ;
  GALGAS_declarationDecorationList var_decoratedDeclarationList_6720 = GALGAS_declarationDecorationList::constructor_emptyList (SOURCE_FILE ("program.galgas", 172)) ;
  GALGAS_decoratedRegularRoutineList var_decoratedRoutineList_6781 = GALGAS_decoratedRegularRoutineList::constructor_emptyList (SOURCE_FILE ("program.galgas", 173)) ;
  GALGAS_routineListIR var_routineListIR_6821 = GALGAS_routineListIR::constructor_emptyList (SOURCE_FILE ("program.galgas", 174)) ;
  GALGAS_userLLVMTypeDefinitionListIR var_userLLVMTypeDefinitionListIR_6891 = GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (SOURCE_FILE ("program.galgas", 175)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 176)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_timer var_t_6945 = GALGAS_timer::constructor_start (SOURCE_FILE ("program.galgas", 177)) ;
      {
      routine_buildSemanticContext (constinArgument_inSourceFile, var_ast_3342, var_globalLiteralStringMap_6538, var_staticListValueMap_6603, var_semanticContext_6481, var_decoratedDeclarationList_6720, var_decoratedRoutineList_6781, var_routineListIR_6821, var_userLLVMTypeDefinitionListIR_6891, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 178)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_13) {
          inCompiler->printMessage (GALGAS_string ("** Context: ").add_operation (var_t_6945.getter_string (SOURCE_FILE ("program.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 190)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 190))  COMMA_SOURCE_FILE ("program.galgas", 190)) ;
        }
      }
    }
  }
  GALGAS_intermediateCodeStruct var_intermediateCodeStruct_7525 = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("program.galgas", 194)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 195)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_timer var_t_7585 = GALGAS_timer::constructor_start (SOURCE_FILE ("program.galgas", 196)) ;
      {
      routine_semanticAnalysis (constinArgument_inSourceFile.readProperty_string (), var_ast_3342, var_sourceFileAbsolutePathSet_3393, var_decoratedDeclarationList_6720, var_decoratedRoutineList_6781, var_routineListIR_6821, var_semanticContext_6481, constinArgument_inEndOfSourceFile, var_globalLiteralStringMap_6538, var_intermediateCodeStruct_7525, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 197)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_15) {
          inCompiler->printMessage (GALGAS_string ("** Semantic: ").add_operation (var_t_7585.getter_string (SOURCE_FILE ("program.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 210))  COMMA_SOURCE_FILE ("program.galgas", 210)) ;
        }
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 214)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_timer var_tOpt_8288 = GALGAS_timer::constructor_start (SOURCE_FILE ("program.galgas", 215)) ;
      {
      routine_codeOptimization (constinArgument_inSourceFile.readProperty_string (), var_intermediateCodeStruct_7525, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 216)) ;
      }
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_17) {
          inCompiler->printMessage (GALGAS_string ("    Duration: ").add_operation (var_tOpt_8288.getter_string (SOURCE_FILE ("program.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 218)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 218))  COMMA_SOURCE_FILE ("program.galgas", 218)) ;
        }
      }
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 222)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_18) {
      {
      routine_codeGeneration (constinArgument_inCurrentDirectory, constinArgument_inSourceFile.readProperty_string (), constinArgument_inEndOfSourceFile, var_intermediateCodeStruct_7525, var_userLLVMTypeDefinitionListIR_6891, constinArgument_inTargetName, var_semanticContext_6481.readProperty_mPanicCodeType (), var_semanticContext_6481.readProperty_mPanicLineType (), var_semanticContext_6481.readProperty_mAvailableInterruptMap (), var_staticListValueMap_6603, var_semanticContext_6481.readProperty_mTargetParameters (), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 223)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addTargetSpecificFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addTargetSpecificFiles (const GALGAS_lstring constinArgument_inTargetName,
                                     GALGAS_ast & ioArgument_ioAST,
                                     const GALGAS_string constinArgument_inCurrentDirectory,
                                     GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_targetDirectory_9602 = GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 248)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_targetDirectory_9602.getter_directoryExists (SOURCE_FILE ("program.galgas", 249)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_targetDefinitionFullPath_9777 = var_targetDirectory_9602.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 250)).add_operation (constinArgument_inTargetName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 250)).add_operation (GALGAS_string ("/+config.omnibus-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 250)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_targetDefinitionFullPath_9777.getter_fileExists (SOURCE_FILE ("program.galgas", 251)).boolEnum () ;
            if (kBoolTrue == test_2) {
              GALGAS_lstringlist var_importedFileList_10011 ;
              var_importedFileList_10011.drop () ;
              GALGAS_location joker_10039 ; // Joker input parameter
              cGrammar_omnibus_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, var_targetDefinitionFullPath_9777.getter_nowhere (SOURCE_FILE ("program.galgas", 256)), ioArgument_ioAST, var_importedFileList_10011, joker_10039  COMMA_SOURCE_FILE ("program.galgas", 252)) ;
              {
              routine_recursiveImportFileSystemTargetFiles (ioArgument_ioAST, var_targetDirectory_9602.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 259)).add_operation (constinArgument_inTargetName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 259)), var_importedFileList_10011, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 257)) ;
              }
            }
          }
          if (kBoolFalse == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inTargetName.readProperty_location (), GALGAS_string ("This target is not defined in '").add_operation (GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()), inCompiler COMMA_SOURCE_FILE ("program.galgas", 265)).add_operation (GALGAS_string ("' directory"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 265)), fixItArray3  COMMA_SOURCE_FILE ("program.galgas", 264)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("program.galgas", 268)).readProperty_location (), GALGAS_string ("the '").add_operation (GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()), inCompiler COMMA_SOURCE_FILE ("program.galgas", 268)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 268)), fixItArray4  COMMA_SOURCE_FILE ("program.galgas", 268)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_filewrapper var_fw_10744 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_fw_10744.getter_fileExistsAtPath (constinArgument_inTargetName.readProperty_string ().add_operation (GALGAS_string ("/+config.omnibus-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 273)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_source_10876 = var_fw_10744.getter_textFileContentsAtPath (constinArgument_inTargetName.readProperty_string ().add_operation (GALGAS_string ("/+config.omnibus-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 274)) ;
        GALGAS_lstringlist var_importedFileList_11057 ;
        var_importedFileList_11057.drop () ;
        GALGAS_location joker_11083 ; // Joker input parameter
        cGrammar_omnibus_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_source_10876, constinArgument_inTargetName.readProperty_string (), ioArgument_ioAST, var_importedFileList_11057, joker_11083  COMMA_SOURCE_FILE ("program.galgas", 275)) ;
        {
        routine_recursiveImportEmbeddedTargetFiles (ioArgument_ioAST, constinArgument_inTargetName.readProperty_string (), var_importedFileList_11057, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 280)) ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inTargetName.readProperty_location (), GALGAS_string ("This target is not defined in embedded targets"), fixItArray6  COMMA_SOURCE_FILE ("program.galgas", 287)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursiveImportFileSystemTargetFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_recursiveImportFileSystemTargetFiles (GALGAS_ast & ioArgument_ioAST,
                                                   const GALGAS_string constinArgument_inTargetDirectory,
                                                   GALGAS_lstringlist inArgument_inImportedClauseList,
                                                   GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_11825 (inArgument_inImportedClauseList, kENUMERATION_UP) ;
  while (enumerator_11825.hasCurrentObject ()) {
    GALGAS_string var_absolutePath_11874 = constinArgument_inTargetDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 302)).add_operation (enumerator_11825.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 302)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_absolutePath_11874.getter_fileExists (SOURCE_FILE ("program.galgas", 303)).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath_11874 COMMA_SOURCE_FILE ("program.galgas", 304)).operator_not (SOURCE_FILE ("program.galgas", 304)).boolEnum () ;
          if (kBoolTrue == test_1) {
            ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath_11874  COMMA_SOURCE_FILE ("program.galgas", 305)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsEqual, var_absolutePath_11874.getter_pathExtension (SOURCE_FILE ("program.galgas", 306)).objectCompare (GALGAS_string ("omnibus-import"))).boolEnum () ;
              if (kBoolTrue == test_2) {
                GALGAS_lstringlist var_importedFileList_12249 ;
                var_importedFileList_12249.drop () ;
                GALGAS_location joker_12279 ; // Joker input parameter
                cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_11874, enumerator_11825.current_mValue (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("program.galgas", 310)), ioArgument_ioAST, var_importedFileList_12249, joker_12279  COMMA_SOURCE_FILE ("program.galgas", 307)) ;
                {
                routine_recursiveImportFileSystemTargetFiles (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList_12249, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 311)) ;
                }
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = GALGAS_bool (kIsEqual, var_absolutePath_11874.getter_pathExtension (SOURCE_FILE ("program.galgas", 317)).objectCompare (GALGAS_string ("omnibus-target"))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  GALGAS_lstringlist var_importedFileList_12764 ;
                  var_importedFileList_12764.drop () ;
                  GALGAS_location joker_12794 ; // Joker input parameter
                  cGrammar_omnibus_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_11874, enumerator_11825.current_mValue (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("program.galgas", 322)), ioArgument_ioAST, var_importedFileList_12764, joker_12794  COMMA_SOURCE_FILE ("program.galgas", 318)) ;
                  {
                  routine_recursiveImportFileSystemTargetFiles (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList_12764, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 323)) ;
                  }
                }
              }
              if (kBoolFalse == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (enumerator_11825.current_mValue (HERE).readProperty_location (), GALGAS_string ("invalid extension (should be .omnibus-import or .omnibus-target)"), fixItArray4  COMMA_SOURCE_FILE ("program.galgas", 330)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_11825.current_mValue (HERE).readProperty_location (), GALGAS_string ("file does not exist in file system target definition"), fixItArray5  COMMA_SOURCE_FILE ("program.galgas", 334)) ;
    }
    enumerator_11825.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursiveImportEmbeddedTargetFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_recursiveImportEmbeddedTargetFiles (GALGAS_ast & ioArgument_ioAST,
                                                 const GALGAS_string constinArgument_inCurrentDirectory,
                                                 GALGAS_lstringlist inArgument_inImportedClauseList,
                                                 GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_13695 (inArgument_inImportedClauseList, kENUMERATION_UP) ;
  while (enumerator_13695.hasCurrentObject ()) {
    GALGAS_string var_fullPath_13740 = constinArgument_inCurrentDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 348)).add_operation (enumerator_13695.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 348)) ;
    GALGAS_filewrapper var_fw_13798 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_fw_13798.getter_fileExistsAtPath (var_fullPath_13740, inCompiler COMMA_SOURCE_FILE ("program.galgas", 350)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_embeddedPath_13897 = GALGAS_string (":").add_operation (var_fullPath_13740, inCompiler COMMA_SOURCE_FILE ("program.galgas", 351)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath_13897 COMMA_SOURCE_FILE ("program.galgas", 352)).operator_not (SOURCE_FILE ("program.galgas", 352)).boolEnum () ;
          if (kBoolTrue == test_1) {
            ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath_13897  COMMA_SOURCE_FILE ("program.galgas", 353)) ;
            GALGAS_lstringlist var_importedFileList_14141 ;
            var_importedFileList_14141.drop () ;
            GALGAS_location joker_14169 ; // Joker input parameter
            cGrammar_omnibus_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_13798.getter_textFileContentsAtPath (var_fullPath_13740, inCompiler COMMA_SOURCE_FILE ("program.galgas", 358)), enumerator_13695.current_mValue (HERE).readProperty_string (), ioArgument_ioAST, var_importedFileList_14141, joker_14169  COMMA_SOURCE_FILE ("program.galgas", 354)) ;
            {
            routine_recursiveImportEmbeddedTargetFiles (ioArgument_ioAST, var_fullPath_13740.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 361)), var_importedFileList_14141, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 359)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("program.galgas", 367)), GALGAS_string ("cannot find '").add_operation (enumerator_13695.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 367)).add_operation (GALGAS_string ("' file in embedded files"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 367)), fixItArray2  COMMA_SOURCE_FILE ("program.galgas", 367)) ;
    }
    enumerator_13695.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursiveImportFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_recursiveImportFiles (GALGAS_ast & ioArgument_ioAST,
                                   GALGAS_string inArgument_inCurrentDirectory,
                                   GALGAS_lstringlist inArgument_inImportedClauseList,
                                   GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_14956 (inArgument_inImportedClauseList, kENUMERATION_UP) ;
  while (enumerator_14956.hasCurrentObject ()) {
    GALGAS_string var_absolutePath_15005 = enumerator_14956.current_mValue (HERE).readProperty_string ().getter_absolutePathFromPath (inArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 381)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_absolutePath_15005.getter_fileExists (SOURCE_FILE ("program.galgas", 382)).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath_15005 COMMA_SOURCE_FILE ("program.galgas", 383)).operator_not (SOURCE_FILE ("program.galgas", 383)).boolEnum () ;
          if (kBoolTrue == test_1) {
            ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath_15005  COMMA_SOURCE_FILE ("program.galgas", 384)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsEqual, var_absolutePath_15005.getter_pathExtension (SOURCE_FILE ("program.galgas", 385)).objectCompare (GALGAS_string ("omnibus-import"))).boolEnum () ;
              if (kBoolTrue == test_2) {
                GALGAS_lstringlist var_importedFileList_15424 ;
                var_importedFileList_15424.drop () ;
                GALGAS_location joker_15454 ; // Joker input parameter
                cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_15005, enumerator_14956.current_mValue (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("program.galgas", 390)), ioArgument_ioAST, var_importedFileList_15424, joker_15454  COMMA_SOURCE_FILE ("program.galgas", 386)) ;
                {
                routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_15424, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 391)) ;
                }
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = GALGAS_bool (kIsEqual, var_absolutePath_15005.getter_pathExtension (SOURCE_FILE ("program.galgas", 397)).objectCompare (GALGAS_string ("omnibus-target"))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  GALGAS_lstringlist var_importedFileList_15925 ;
                  var_importedFileList_15925.drop () ;
                  GALGAS_location joker_15955 ; // Joker input parameter
                  cGrammar_omnibus_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_15005, enumerator_14956.current_mValue (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("program.galgas", 402)), ioArgument_ioAST, var_importedFileList_15925, joker_15955  COMMA_SOURCE_FILE ("program.galgas", 398)) ;
                  {
                  routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_15925, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 403)) ;
                  }
                }
              }
              if (kBoolFalse == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (enumerator_14956.current_mValue (HERE).readProperty_location (), GALGAS_string ("invalid extension (should be .omnibus-import or .omnibus-target)"), fixItArray4  COMMA_SOURCE_FILE ("program.galgas", 410)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_filewrapper var_fw_16404 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_fw_16404.getter_fileExistsAtPath (enumerator_14956.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 415)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string var_embeddedPath_16510 = GALGAS_string (":").add_operation (enumerator_14956.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 416)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath_16510 COMMA_SOURCE_FILE ("program.galgas", 417)).operator_not (SOURCE_FILE ("program.galgas", 417)).boolEnum () ;
            if (kBoolTrue == test_6) {
              ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath_16510  COMMA_SOURCE_FILE ("program.galgas", 418)) ;
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GALGAS_bool (kIsEqual, enumerator_14956.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("program.galgas", 419)).objectCompare (GALGAS_string ("omnibus-import"))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  GALGAS_lstringlist var_importedFileList_16825 ;
                  var_importedFileList_16825.drop () ;
                  GALGAS_location joker_16857 ; // Joker input parameter
                  cGrammar_omnibus_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_16404.getter_textFileContentsAtPath (enumerator_14956.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 424)), enumerator_14956.current_mValue (HERE).readProperty_string (), ioArgument_ioAST, var_importedFileList_16825, joker_16857  COMMA_SOURCE_FILE ("program.galgas", 420)) ;
                  {
                  routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_16825, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 425)) ;
                  }
                }
              }
              if (kBoolFalse == test_7) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GALGAS_bool (kIsEqual, enumerator_14956.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("program.galgas", 431)).objectCompare (GALGAS_string ("omnibus-target"))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    GALGAS_lstringlist var_importedFileList_17353 ;
                    var_importedFileList_17353.drop () ;
                    GALGAS_location joker_17385 ; // Joker input parameter
                    cGrammar_omnibus_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_16404.getter_textFileContentsAtPath (enumerator_14956.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 436)), enumerator_14956.current_mValue (HERE).readProperty_string (), ioArgument_ioAST, var_importedFileList_17353, joker_17385  COMMA_SOURCE_FILE ("program.galgas", 432)) ;
                    {
                    routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_17353, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 437)) ;
                    }
                  }
                }
                if (kBoolFalse == test_8) {
                  TC_Array <C_FixItDescription> fixItArray9 ;
                  inCompiler->emitSemanticError (enumerator_14956.current_mValue (HERE).readProperty_location (), GALGAS_string ("invalid extension (should be .omnibus-import or .omnibus-target)"), fixItArray9  COMMA_SOURCE_FILE ("program.galgas", 444)) ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_14956.current_mValue (HERE).readProperty_location (), GALGAS_string ("cannot find this file in file system and in embedded files"), fixItArray10  COMMA_SOURCE_FILE ("program.galgas", 448)) ;
      }
    }
    enumerator_14956.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'embeddedSampleCode'
//
//----------------------------------------------------------------------------------------------------------------------

//--- File 'LPC-L2294/01-blinkleds.omnibus'

const char * gWrapperFileContent_0_embeddedSampleCode = "target \"LPC-L2294\"\n\n//------------------------------------------------*\n\nsection ledOn () {\n  ©IO1.CLR  = 1 << 23 // Led On\n}\n\n//------------------------------------------------*\n\nsection ledOff () {\n  ©IO1.SET  = 1 << 23 // Led Off\n}\n\n//------------------------------------------------*\n\ntask T1 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  while event time.wait (!until:self.compteur) {\n    ledOn ()\n    self.compteur +%= 500\n    time.wait (!until:self.compteur)\n    ledOff ()\n    self.compteur +%= 500\n  }\n}\n\n//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_0_embeddedSampleCode (
  "01-blinkleds.omnibus",
  "omnibus",
  true, // Text file
  574, // Text length
  gWrapperFileContent_0_embeddedSampleCode
) ;

//--- All files of 'LPC-L2294' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_1 [2] = {
  & gWrapperFile_0_embeddedSampleCode,
  NULL
} ;

//--- All sub-directories of 'LPC-L2294' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_1 [1] = {
  NULL
} ;

//--- Directory 'LPC-L2294'

const cDirectoryWrapper gWrapperDirectory_1_embeddedSampleCode (
  "LPC-L2294",
  1,
  gWrapperAllFiles_embeddedSampleCode_1,
  0,
  gWrapperAllDirectories_embeddedSampleCode_1
) ;

//--- File 'teensy-3-1/00-structure-example.omnibus'

const char * gWrapperFileContent_4_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//-----------------------------------------------------------------------------*\n\nstruct $B {\n  var a $u32 = 0\n  var b $u32 = 0\n}\n\nstruct $C {\n  var c = $B ()\n}\n\nstruct $Toto {\n  var a $u16 = 0\n  var c = no\n  var b = no\n}\n\n//-----------------------------------------------------------------------------*\n\ntask T @stacksize 512 @autostart {\n  var deadline $u32 = 0\n  var acc = $C ()\n\n  event @onSetup first {\n    digital.set (!mode: $DigitalMode.output !toPort:.D13)\n    digital.set (!mode: $DigitalMode.output !toPort: LED_L1)\n  }\n\n  while event time.wait (!until:self.deadline) {\n    self.deadline +%= 1000\n    digital.toggle (!port:LED_L1)\n    let n = self.acc.c.a +% self.deadline\n    self.acc.c.a = n\n    let x $u32 = 0x1234_5678\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!hex8:x.byteSwapped)\n    lcd.goto (!line:1 !column:0)\n    let y $u15 = 0x1234\n    lcd.print (!hex4:extend (y.bitReversed))\n  }\n}\n\n//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_4_embeddedSampleCode (
  "00-structure-example.omnibus",
  "omnibus",
  true, // Text file
  1043, // Text length
  gWrapperFileContent_4_embeddedSampleCode
) ;

//--- File 'teensy-3-1/01-blink-led.omnibus'

const char * gWrapperFileContent_12_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask Tâche @stacksize 512 @autostart {\n  var compteur $u32 = 0\n  var continue = yes\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n    digital.set (!mode:.output !toPort:LED_L0)\n  }\n\n  while self.continue event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L0)\n    self.compteur +%= 500\n    time.wait (!until: self.compteur)\n    digital.write (!no !toPort:LED_L0)\n    self.compteur +%= 500\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32:time.now ())\n    self.continue = time.now () < 10_000\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_12_embeddedSampleCode (
  "01-blink-led.omnibus",
  "omnibus",
  true, // Text file
  809, // Text length
  gWrapperFileContent_12_embeddedSampleCode
) ;

//--- File 'teensy-3-1/02-blink-leds.omnibus'

const char * gWrapperFileContent_11_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T1 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n    digital.set (!mode:.output !toPort:LED_L3)\n    digital.set (!mode:.output !toPort:LED_L4)\n    digital.set (!mode:.output !toPort:.D13)\n  }\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L0)\n    self.compteur +%= 500\n    time.wait (!until:self.compteur)\n    digital.write (!no !toPort:LED_L0)\n    self.compteur +%= 500\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32:time.now ())\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T2 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L1)\n    self.compteur +%= 499\n    time.wait (!until:self.compteur)\n    digital.write (!no !toPort:LED_L1)\n    self.compteur +%= 499\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T3 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L2)\n    self.compteur +%= 498\n    time.wait (!until:self.compteur)\n    digital.write (!no !toPort:LED_L2)\n    self.compteur +%= 498\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T4 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L3)\n    self.compteur +%= 497\n    time.wait (!until:self.compteur)\n    digital.write (!no !toPort:LED_L3)\n    self.compteur +%= 497\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T5 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L4)\n    self.compteur +%= 496\n    time.wait (!until:self.compteur)\n    digital.write (!no !toPort:LED_L4)\n    self.compteur +%= 496\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_11_embeddedSampleCode (
  "02-blink-leds.omnibus",
  "omnibus",
  true, // Text file
  2371, // Text length
  gWrapperFileContent_11_embeddedSampleCode
) ;

//--- File 'teensy-3-1/03-push-buttons.omnibus'

const char * gWrapperFileContent_2_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n    digital.set (!mode:.output !toPort:LED_L3)\n    digital.set (!mode:.output !toPort:LED_L4)\n    digital.set (!mode:.output !toPort:.D13)\n    digital.set (!mode:.inputPullUp !toPort:BUTTON_P0)\n    digital.set (!mode:.inputPullUp !toPort:BUTTON_P1)\n    digital.set (!mode:.inputPullUp !toPort:BUTTON_P2)\n    digital.set (!mode:.inputPullUp !toPort:BUTTON_P3)\n    digital.set (!mode:.inputPullUp !toPort:BUTTON_P4)\n  }\n\n  //············································································\n\n  while event time.wait (!until:self.compteur) {\n    self.compteur +%= 50\n    digital.write (!not digital.read (!port:BUTTON_P0) !toPort:LED_L0)\n    digital.write (!not digital.read (!port:BUTTON_P1) !toPort:LED_L1)\n    digital.write (!not digital.read (!port:BUTTON_P2) !toPort:LED_L2)\n    digital.write (!not digital.read (!port:BUTTON_P3) !toPort:LED_L3)\n    digital.write (!not digital.read (!port:BUTTON_P4) !toPort:LED_L4)\n  }\n\n\n  //············································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_2_embeddedSampleCode (
  "03-push-buttons.omnibus",
  "omnibus",
  true, // Text file
  1489, // Text length
  gWrapperFileContent_2_embeddedSampleCode
) ;

//--- File 'teensy-3-1/04-section-service-duration.omnibus'

const char * gWrapperFileContent_13_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————\n\nsection emptySection () {\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\nservice emptyService () {\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\nsection getSysTick () -> $u32 {\n  result = ©SYST.CVR\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\nlet ITERATIONS = 7\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T @stacksize 512 @autostart {\n\n  //············································································\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:.D13)\n    var cumul $u32 = 0\n  //--- Compute getSysTick duration\n    for _ $u32 in 0 ..< ITERATIONS {\n      time.wait (!during:1)\n      let t0 = getSysTick ()\n      let t1 = getSysTick ()\n      cumul += t0 - t1\n      lcd.print (!u32:t0 - t1)\n      lcd.print (!spaces:1)\n    }\n    let systickDuration = cumul / ITERATIONS\n  //--- Compute emptySection duration\n    lcd.goto (!line:1 !column:0)\n    for _ $u32 in 0 ..< ITERATIONS {\n      time.wait (!during:1)\n      let t0 = getSysTick ()\n      emptySection ()\n      let t1 = getSysTick ()\n      lcd.print (!u32:t0 - t1 - systickDuration)\n      lcd.print (!spaces:1)\n    }\n  //--- Compute emptyService duration\n    lcd.goto (!line:2 !column:0)\n    for _ $u32 in 0 ..< 4 {\n      time.wait (!during:1)\n      let t0 = getSysTick ()\n      emptyService ()\n      let t1 = getSysTick ()\n      lcd.print (!u32:t0 - t1 - systickDuration)\n      lcd.print (!spaces:1)\n    }\n  }\n\n\n  //············································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_13_embeddedSampleCode (
  "04-section-service-duration.omnibus",
  "omnibus",
  true, // Text file
  1887, // Text length
  gWrapperFileContent_13_embeddedSampleCode
) ;

//--- File 'teensy-3-1/05-semaphore.omnibus'

const char * gWrapperFileContent_3_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\ntypealias $Sémaphore = $Semaphore\n\n//——————————————————————————————————————————————————————————————————————————————\n\nsync sémaphore = $Sémaphore (!value:0)\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T1 @stacksize 512 @autostart {\n  var top $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode: .output !toPort: .D13)\n    digital.set (!mode: .output !toPort: LED_L1)\n    digital.set (!mode: .output !toPort: LED_L2)\n  }\n\n  while event time.wait (!until: self.top) {\n    sémaphore.signal ()\n    self.top += 250\n    digital.write (!yes !toPort: LED_L1)\n    let constanteAccentuée = self.top\n    time.wait (!until: constanteAccentuée)\n    sémaphore.signal ()\n    self.top += 250\n    digital.write (!no !toPort: LED_L1)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T2 @stacksize 512 @autostart {\n\n  while event sémaphore.wait () {\n    digital.write (!yes !toPort: LED_L2)\n    sémaphore.wait ()\n    digital.write (!no !toPort: LED_L2)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_3_embeddedSampleCode (
  "05-semaphore.omnibus",
  "omnibus",
  true, // Text file
  1195, // Text length
  gWrapperFileContent_3_embeddedSampleCode
) ;

//--- File 'teensy-3-1/06-integer-slices.omnibus'

const char * gWrapperFileContent_8_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet N = 12\nlet slice = N [1 ... 3]\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche1 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n  var test = yes\n\n  event @onSetup first {\n    var toto = yes\n    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n    let b = {$u8 !b:self.test !1:0 !6:12}\n    lcd.print (!hex2:extend (b))\n    lcd.print (!spaces:1)\n    {$u8 \?b:var b7 \?2:var b2 \?5:var b3} = 0xAC\n    let bb = {$u8 !b:b7 !2:b2 !5:b3}\n    lcd.print (!hex2:extend (bb))\n  }\n\n  while event time.wait (!until:self.compteur) {\n    self.compteur +%= 500\n    digital.toggle (!port:LED_L3)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_8_embeddedSampleCode (
  "06-integer-slices.omnibus",
  "omnibus",
  true, // Text file
  1005, // Text length
  gWrapperFileContent_8_embeddedSampleCode
) ;

//--- File 'teensy-3-1/07-static-list-example.omnibus'

const char * gWrapperFileContent_15_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//-----------------------------------------------------------------------------*\n\nstaticArray maListeStatique {\n  let a $u32\n  let b $u32\n  let p func user (\?!par: y $u32)\n  let f func user (\?arg: x $u32) -> $u32\n}\n\nfunc toggleL2 user (\?!par: y $u32) {\n  digital.toggle (!port:LED_L2)\n  y += 1\n}\n\nfunc p2 user (\?arg: x $u32) -> $u32 {\n  result = 10 + x\n}\n\nfunc toggleL3 user (\?!par: y $u32) {\n  digital.toggle (!port:LED_L3)\n  y += 1\n}\n\nfunc p3 user (\?arg: x $u32) -> $u32 {\n  result = 15 + x\n}\n\nextend staticArray maListeStatique (\n  !5 !9 !func toggleL2 (\?!par: y $u32) !func p2 (\?arg: x $u32),\n  !15 !29 !func toggleL3 (\?!par: y $u32) !func p3 (\?arg: x $u32)\n)\n\n//-----------------------------------------------------------------------------*\n\ntask T @stacksize 512 @autostart {\n  var deadline $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:.D13)\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n    digital.set (!mode:.output !toPort:LED_L3)\n  }\n\n  while event time.wait (!until:self.deadline) {\n    self.deadline +%= 250\n    digital.toggle (!port:LED_L1)\n    var total $u32 = 0\n    for élément in maListeStatique {\n      total = total + élément.a\n      total += élément.a\n      total += élément.b\n      total += élément.f (!arg: 1)\n      élément.p (!\?par: total)\n    }\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32:total)\n  }\n}\n\n//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_15_embeddedSampleCode (
  "07-static-list-example.omnibus",
  "omnibus",
  true, // Text file
  1544, // Text length
  gWrapperFileContent_15_embeddedSampleCode
) ;

//--- File 'teensy-3-1/08-guarded-semaphore2.omnibus'

const char * gWrapperFileContent_9_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//-----------------------------------------------------------------------------*\n\nsync s0 = $Semaphore (!value:0)\nsync s1 = $Semaphore (!value:0)\n\n//-----------------------------------------------------------------------------*\n\ntask T0 @stacksize 512 @autostart {\n  var top $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:.D13)\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n    digital.set (!mode:.output !toPort:LED_L3)\n    digital.set (!mode:.output !toPort:LED_L4)\n  }\n\n  while event time.wait (!until:self.top) {\n    s0.signal ()\n    self.top += 250\n    digital.write (!yes !toPort:LED_L0)\n    time.wait (!until:self.top)\n    s0.signal ()\n    self.top += 250\n    digital.write (!no !toPort:LED_L0)\n  }\n}\n\n//-----------------------------------------------------------------------------*\n\ntask T1 @stacksize 512 @autostart {\n  var top $u32 = 0\n\n  while event time.wait (!until:self.top) {\n    s1.signal ()\n    self.top += 249\n    digital.write (!yes !toPort:LED_L4)\n    time.wait (!until:self.top)\n    s1.signal ()\n    self.top += 249\n    digital.write (!no !toPort:LED_L4)\n  }\n}\n\n//-----------------------------------------------------------------------------*\n\ntask T2 @stacksize 512 @autostart {\n  var deadline $u32 = 0\n  var toggleD3 = no\n\n  while event s0.wait () {\n    self.toggleD3 = yes // Just for having a boolean guard\n  }\n\n  while self.toggleD3 {\n    digital.toggle (!port:LED_L1)\n    self.toggleD3 = no\n  }\n\n  while event s1.wait () {\n    digital.toggle (!port:LED_L3)\n  }\n\n  while event time.wait (!until:self.deadline) {\n    self.deadline += 200\n    digital.toggle (!port:LED_L2)\n  }\n}\n\n//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_9_embeddedSampleCode (
  "08-guarded-semaphore2.omnibus",
  "omnibus",
  true, // Text file
  1886, // Text length
  gWrapperFileContent_9_embeddedSampleCode
) ;

//--- File 'teensy-3-1/09-rendez-vous.omnibus'

const char * gWrapperFileContent_14_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//-----------------------------------------------------------------------------*\n\nsync $RendezVous {\n  var inputWaitList = $TaskList ()\n  var outputWaitList = $TaskList ()\n  var inputGuardList = $GuardList ()\n  var outputGuardList = $GuardList ()\n\n  public primitive input @mutating () {\n    makeTaskReady (!\?fromList:self.outputWaitList \?found:let found)\n    if not found {\n      notifyChange (!\?forGuard:self.outputGuardList)\n      block (!\?inList:self.inputWaitList)\n    }\n  }\n\n  public primitive output @mutating () {\n    makeTaskReady (!\?fromList:self.inputWaitList \?found:let found)\n    if not found {\n      notifyChange (!\?forGuard:self.inputGuardList)\n      block (!\?inList:self.outputWaitList)\n    }\n  }\n\n  public guard input @noUnusedWarning () {\n    makeTaskReady (!\?fromList:self.outputWaitList \?found:accept)\n    if not accept {\n      handle (!\?guard:self.inputGuardList)\n    }\n  }\n\n  guard output @noUnusedWarning () {\n    makeTaskReady (!\?fromList:self.inputWaitList \?found:accept)\n    if not accept {\n      handle (!\?guard:self.outputGuardList)\n    }\n  }\n\n}\n\n//-----------------------------------------------------------------------------*\n\nsync rdvs = $RendezVous ()\n\n//-----------------------------------------------------------------------------*\n\ntask T0 @stacksize 512 @autostart {\n  var top $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:.D13)\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n    digital.set (!mode:.output !toPort:LED_L3)\n    digital.set (!mode:.output !toPort:LED_L4)\n  }\n\n\n  while event time.wait (!until:self.top) {\n    rdvs.output ()\n    self.top += 250\n    digital.write (!yes !toPort:LED_L0)\n    time.wait (!until:self.top)\n    rdvs.output ()\n    self.top += 250\n    digital.write (!no !toPort:LED_L0)\n  }\n}\n\n//-----------------------------------------------------------------------------*\n\ntask T1 @stacksize 512 @autostart {\n\n  while event rdvs.input () {\n    digital.write (!yes !toPort:LED_L1)\n    rdvs.input ()\n    digital.write (!no !toPort:LED_L1)\n  }\n}\n\n//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_14_embeddedSampleCode (
  "09-rendez-vous.omnibus",
  "omnibus",
  true, // Text file
  2287, // Text length
  gWrapperFileContent_14_embeddedSampleCode
) ;

//--- File 'teensy-3-1/10-rendez-vous-data.omnibus'

const char * gWrapperFileContent_10_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//-----------------------------------------------------------------------------*\n\nsync $RendezVousData {\n  var readBarrier  = $Semaphore (!value:0)\n  var writeBarrier = $Semaphore (!value:1)\n  var data $u32 = 0\n\n  public func output user @mutating @noUnusedWarning (\?data:inData $u32) {\n    self.writeBarrier.wait ()\n    self.data = inData\n    self.readBarrier.signal ()\n  }\n\n  public guard output @noUnusedWarning (\?data:inData $u32) : self.writeBarrier.wait () {\n    self.data = inData\n    self.readBarrier.signal ()\n  }\n\n  public func input user @mutating @noUnusedWarning (!data:outData $u32) {\n    self.readBarrier.wait ()\n    outData = self.data\n    self.writeBarrier.signal ()\n  }\n\n  public guard input @noUnusedWarning (!data:outData $u32) : self.readBarrier.wait () {\n    outData = self.data\n    self.writeBarrier.signal ()\n  }\n\n}\n\n//-----------------------------------------------------------------------------*\n\nsync s = $Semaphore (!value:1)\nsync rdvs = $RendezVousData ()\nsync rdvs2 = $RendezVousData ()\n\n//-----------------------------------------------------------------------------*\n\ntask T0 @stacksize 512 @autostart {\n  var top $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:.D13)\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n    digital.set (!mode:.output !toPort:LED_L4)\n  }\n\n  while event time.wait (!until:self.top) {\n    rdvs2.input (\?data:let n)\n    rdvs.output (!data:n)\n    digital.toggle (!port:LED_L0)\n    self.top += 500\n  }\n}\n\n//-----------------------------------------------------------------------------*\n\ntask T1 @stacksize 1024 @autostart {\n  while event rdvs.input (\?data:let x) {\n    digital.toggle (!port:LED_L1)\n    s.wait ()\n      lcd.goto (!line:0 !column:0)\n      lcd.print (!u32:x)\n    s.signal ()\n  }\n}\n\n//-----------------------------------------------------------------------------*\n\ntask T2 @stacksize 1024 @autostart {\n  var deadline $u32 = 0\n  var n $u32 = 0\n\n  while event rdvs2.output (!data:self.n) {\n    digital.toggle (!port:LED_L2)\n    s.wait ()\n      lcd.goto (!line:1 !column:0)\n      lcd.print (!u32:self.n)\n    s.signal ()\n    self.n += 1\n  }\n\n  while event time.wait (!until:self.deadline) {\n    self.deadline += 200\n    digital.toggle (!port:LED_L4)\n  }\n}\n\n//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_10_embeddedSampleCode (
  "10-rendez-vous-data.omnibus",
  "omnibus",
  true, // Text file
  2501, // Text length
  gWrapperFileContent_10_embeddedSampleCode
) ;

//--- File 'teensy-3-1/11-pit-unprivileged-mode-it.omnibus'

const char * gWrapperFileContent_6_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//-----------------------------------------------------------------------------*\n\nsection setupPIT () {\n  ©PIT.MCR = 0\n  ©PIT.LDVAL [0] = 200000\n  ©PIT.TCTRL [0] = {©PIT.TCTRL !TIE:1 !TEN:1} // $interrupt, enabled\n  enable (!interrupt: .PITChannel0)\n}\n\n//------------------------------------------------*\n\ndriver pit > digital {\n  var gPITValue $u32 = 0\n\n  startup {\n    digital.set (!mode:.output !toPort:.D13)\n    digital.set (!mode:.output !toPort:LED_L1)\n    ©SIM.SCGC6 |= {©SIM.SCGC6 !PIT:1}\n  }\n\n  section getPITValue (!outValue $u32) {\n    outValue = self.gPITValue\n  }\n\n  interrupt section PITChannel0 {\n  //--- Acquitter l'interruption\n    ©PIT.TFLG [0] = {©PIT.TFLG !TIF:1}\n  //--- Incrémenter le compteur\n    self.gPITValue += 1\n  }\n}\n\ndriver pit ()\n\n//------------------------------------------------*\n\ntask T @stacksize 512 @autostart {\n  var deadline $u32 = 0\n\n  event @onSetup first {\n    setupPIT ()\n  }\n\n  while event time.wait (!until:self.deadline) {\n    self.deadline +%= 250\n    digital.write (!yes !toPort:LED_L1) // Allumer la led\n    time.wait (!until:self.deadline)\n    self.deadline +%= 250\n    digital.write (!no !toPort:LED_L1)  // Éteindre la led\n    lcd.goto (!line:1 !column:0)\n    lcd.print (!spaces:10)\n    lcd.goto (!line:1 !column:0)\n    var value $u32\n    pit.getPITValue (\?value)\n    lcd.print (!u32:value)\n  }\n}\n\n//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_6_embeddedSampleCode (
  "11-pit-unprivileged-mode-it.omnibus",
  "omnibus",
  true, // Text file
  1482, // Text length
  gWrapperFileContent_6_embeddedSampleCode
) ;

//--- File 'teensy-3-1/12-array-example.omnibus'

const char * gWrapperFileContent_7_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//-----------------------------------------------------------------------------*\n\nlet SIZE = 3\n\ntypealias $A = [SIZE : $u32]\n\nstruct $B {\n  var a $u32 = 0\n  var b $u32 = 0\n}\n\nstruct $C {\n  var c = $B ()\n}\n\nlet array = $A (!1 !2 !3)\n\n//------------------------------------------------*\n\ntask T @stacksize 512 @autostart {\n  var deadline $u32 = 0\n  var array = $A (!repeated:0)\n  var array2 = $A (!repeated:1)\n  var index $i32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:.D13)\n    digital.set (!mode:.output !toPort:LED_L1)\n  }\n\n  while event time.wait (!until:self.deadline) {\n    self.deadline +%= 1000\n//    digital.toggle (!port:LED_L1)\n    self.array [self.index] = 0\n    self.index +%= 1\n    if self.index == SIZE {\n      self.index = 0\n    }\n    for i $u32 in 0 ..< $A.count {\n      self.array [i] +%= 1\n    }\n    self.array2 = self.array\n    lcd.goto (!line:0 !column:0)\n    for i $u32 in 0 ..< $A.count {\n      lcd.print (!u32:self.array2 [i])\n      lcd.print (!spaces:1)\n    }\n\n  //--- Init from a repeated static value\n    var a = $A (!repeated:5)\n  //--- Init from a repeated dynamic value\n    var e $u32 = 5\n    var b = $A (!repeated:e)\n  //--- Init from a static values\n    var c = $A (!0 !1 !2)\n  //--- Init from a dynamic values\n    var d = $A (!0 !e !2)\n  //---\n    var x $u32 = 0\n    for i $u32 in 0 ..< $A.count {\n      a [i] = 9\n      a [i] += 9\n      x += a [i]\n    }\n\n    var s = $B ()\n    var aa = s.a\n    var bb = s.b\n    s.a = aa\n    var s2 = $C ()\n    s2.c.a = aa\n  }\n}\n\n//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_7_embeddedSampleCode (
  "12-array-example.omnibus",
  "omnibus",
  true, // Text file
  1651, // Text length
  gWrapperFileContent_7_embeddedSampleCode
) ;

//--- File 'teensy-3-1/13-usb-device.omnibus'

const char * gWrapperFileContent_5_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n\nimport \"carte-tp-teensy-3-1.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n// USB DEVICE DRIVER\n// Kevin Cuzner wrote a simpler version, and a great blog article:\n//   http://kevincuzner.com/2014/12/12/teensy-3-1-bare-metal-writing-a-usb-driver/\n//   https://github.com/kcuzner/teensy-oscilloscope/blob/master/scope-teensy/src/usb.c\n//---\n//   https://github.com/prof7bit/frdm-kl25z-minimal-usb-hid\n//   http://www.beyondlogic.org/usbnutshell/usb1.shtml\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet NUM_ENDPOINTS = 4\n\n//······················································································································\n\nstruct $BDT @copyable {\n var desc $u32 = 0\n var addr $u32 = 0\n}\n\n\nlet BDT_OWN   = 0x80\nlet BDT_DATA1 = 0x40\nlet BDT_DATA0 = 0x00\nlet BDT_DTS   = 0x08\nlet BDT_STALL = 0x04\n//let BDT_PID(n) (((n) >> 2) & 15)\n\nlet EP0_SIZE = 64\n\nfunc BDT_DESC section (\?count $u32 \?data $u1) -> $u32 {\n  result = BDT_OWN | BDT_DTS | (count << 16) | if data ≠ 0 {BDT_DATA1} else {BDT_DATA0}\n}\n\nlet TX   = 1\nlet RX   = 0\nlet ODD  = 1\nlet EVEN = 0\nlet DATA0 = 0\nlet DATA1 = 1\n\nfunc index section (\? endpoint $u32 \?tx $u32 \?odd $u32) -> $u32 {\n  result = (endpoint << 2) | (tx << 1) | odd\n}\n\nlet TRACE_SIZE = 10\n\n//······················································································································\n\ndriver usb_device > digital {\n// Descriptor table should be aligned on a 512 byte-boudary\n  var descriptorTable @align 512 =  [(NUM_ENDPOINTS+1)*4 : $BDT] (!repeated: $BDT ())\n\n  var ep0_rx0_buf @align 4 = [EP0_SIZE : $u8] (!repeated:0)\n  var ep0_rx1_buf @align 4 = [EP0_SIZE : $u8] (!repeated:0)\n  var ep0_tx_bdt_bank $u32 = 0\n\n  var état = [TRACE_SIZE : $u4] (!repeated:0)\n  var indexÉtat $u32 = 0\n\n  public section lireÉtat (\?index $u32) -> $u32 {\n    result = extend (self.état [index])\n  }\n\n  var trace $u32 = 0\n\n  public section lireAddresseUSB () -> $u32 {\n    result = extend (©USB0.ADDR)\n  }\n\n  //····················································································································\n\n  startup {\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n    digital.set (!mode:.output !toPort:LED_L3)\n    digital.set (!mode:.output !toPort:LED_L4)\n  // This basically follows the flowchart in the Kinetis Quick Reference User Guide, Rev. 3, 05/2014, page 134\n  //-- Assume 48 MHz clock already running\n    ©SIM.SCGC4 |= {©SIM.SCGC4 !USBOTG:1} // SIM - enable clock\n//    MPU:RGDAAC [0] |= {MPU:RGDAAC !M4RE:1 !M4WE:1)\n  //--- If using IRC48M, turn on the USB clock recovery hardware\n//    if @static (F_CPU_MHZ == 180) || (F_CPU_MHZ == 216) {\n//      USB0:CLK_RECOVER_IRC_EN = {USB0:CLK_RECOVER_IRC_EN !IRC_EN:1 !REG_EN:1)\n//      USB0:CLK_RECOVER_CTRL = {USB0:CLK_RECOVER_CTRL !CLOCK_RECOVER_EN:1 !RESTART_IFRTRIM_EN:1)\n//    }\n  //--- Reset USB module (SB0:USBTRC0:USBRESET is always read as 0. Wait 2 USB clock cycles after setting this bit)\n    ©USB0.USBTRC0 |= {©USB0.USBTRC0 !USBRESET:1} // Page 1516\n    while ©USB0.USBTRC0.USBRESET ≠ 0 {} // wait for reset to end\n  //-- Set descriptor table base address\n    let descriptorTableBaseAddress = addressof (self.descriptorTable)\n    ©USB0.BDTPAGE1 = descriptorTableBaseAddress [08...15]\n    ©USB0.BDTPAGE2 = descriptorTableBaseAddress [16...23]\n    ©USB0.BDTPAGE3 = descriptorTableBaseAddress [24...31]\n  //--- Clear all ISR flags\n    ©USB0.ISTAT = 0xFF\n    ©USB0.ERRSTAT = 0xFF\n    ©USB0.OTGISTAT = 0xFF\n    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1} // | 0x40\n  //-- Enable USB\n    ©USB0.CTL = {©USB0.CTL !USBENSOFEN:1}\n    ©USB0.USBCTRL = 0\n  //-- Enable reset interrupt\n    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1}\n  //-- Enable interrupt in NVIC\n    enable (!interrupt: .USBOTG)\n  //--- Enable d+ pullup\n    ©USB0.CONTROL = {©USB0.CONTROL !DPPULLUPNONOTG:1} // Page 1515\n  }\n\n  //····················································································································\n\n  interrupt section USBOTG {\n    let status = ©USB0.ISTAT\n\n  //-------------------- RESET: configure Endpoint 0\n    if (status & {©USB0.ISTAT !USBRST:1}) ≠ 0 {\n//      self.état [self.indexÉtat] = 1\n//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n      self.configureEndPoint0OnReset ()\n  //    USB0:ISTAT = {USB0:ISTAT !USBRST:1) // Ack\n    }else{\n    //-------------------- START OF FRAME\n      if (status & {©USB0.ISTAT !SOFTOK:1}) ≠ 0 {\n  //        self.état [self.indexÉtat] = 2\n  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        ©USB0.ISTAT = {©USB0.ISTAT !SOFTOK:1} // Ack\n      }\n\n    //-------------------- TOKEN COMPLETED\n      if (status & {©USB0.ISTAT !TOKDNE:1}) ≠ 0 { // Page 1502\n  //        digital.write (!yes !toPort:LED_L2)\n  //        self.état [self.indexÉtat] = 3\n  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        self.tokenCompleted ()\n        ©USB0.ISTAT = {©USB0.ISTAT !TOKDNE:1} // Ack\n      }\n\n    //-------------------- STALL\n      if (status & {©USB0.ISTAT !STALL:1}) ≠ 0 {\n        self.état [self.indexÉtat] = 4\n        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        ©USB0.ISTAT = {©USB0.ISTAT !STALL:1} // Ack\n      }\n\n    //-------------------- ERROR\n      if (status & {©USB0.ISTAT !ERROR:1}) ≠ 0 {\n        self.état [self.indexÉtat] = 5\n        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        let err = ©USB0.ERRSTAT\n        ©USB0.ERRSTAT = err\n        ©USB0.ISTAT = {©USB0.ISTAT !ERROR:1} // Ack\n      }\n\n    //-------------------- SLEEP\n      if (status & {©USB0.ISTAT !SLEEP:1}) ≠ 0 {\n        self.état [self.indexÉtat] = 6\n        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        ©USB0.ISTAT = {©USB0.ISTAT !SLEEP:1} // Ack\n      }\n    }\n  }\n\n  //····················································································································\n\n  func  configureEndPoint0OnReset section @mutating () {\n//      self.état [self.indexÉtat] = 1\n//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n      ©USB0.CTL |= {©USB0.CTL !ODDRST:1}\n      self.ep0_tx_bdt_bank = 0\n   //--- Set up buffers to receive Setup and OUT packets\n      self.descriptorTable [index(!0 !RX !EVEN)].desc = BDT_DESC (!EP0_SIZE  !0)\n      self.descriptorTable [index(!0 !RX !EVEN)].addr = addressof (self.ep0_rx0_buf)\n      self.descriptorTable [index(!0 !RX !ODD) ].desc = BDT_DESC (!EP0_SIZE !0)\n      self.descriptorTable [index(!0 !RX !ODD) ].addr = addressof (self.ep0_rx1_buf)\n      self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n      self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n    //--- Activate endpoint 0\n      ©USB0.ENDPT [0] = {©USB0.ENDPT !EPRXEN:1 !EPTXEN:1 !EPHSHK:1}\n    //--- Clear all ending interrupts\n      ©USB0.ERRSTAT = 0xFF\n      ©USB0.ISTAT = 0xFF\n    //--- Set the address to zero during enumeration\n      ©USB0.ADDR = 0\n    //--- Enable other interrupts\n      ©USB0.ERREN = 0xFF\n      ©USB0.INTEN = {©USB0.INTEN !STALLEN:1 !SLEEPEN:1 !TOKDNEEN:1 !SOFTOKEN:1 !ERROREN:1 !USBRSTEN:1}\n    //--- is this necessary\?\n   //   USB0.CTL = {USB0.CTL !USBENSOFEN:1) // Page 1507\n  }\n\n  //····················································································································\n  // This means a transaction has completed, we receive this interrupt\n  // after data was transferred and the handshake has been completed:\n  //\n  //   host:TOK_IN    -> device:DATA ->   host:ACK/NAK -> $interrupt\n  //   host:TOK_OUT   ->   host:DATA -> device:ACK/NAK -> $interrupt\n  //   host:TOK_SETUP ->   host:DATA -> device:ACK/NAK -> $interrupt\n  //\n  // The handler can then process the received data or queue more\n  // data to be sent during the next transaction. When there is a\n  // TOK_IN transaction and no data has been placed in the TX buffer\n  // then the hardware will automatically send a NAK:\n  //\n  //   host:TOK_IN -> device:NAK -> NO $interrupt!\n  //\n  // There will be no interrupt in this case! This means as long\n  // as there is no data to be sent there will also be no TOK_IN\n  // calls to the handler anymore. Something else has to prepare\n  // a new TX buffer for that endpoint when data becomes available\n  // again, the handler will only be called AFTER the transmission!\n\n  func tokenCompleted section @mutating () {\n    let transactionStatus = ©USB0.STAT\n    let endPoint $u4 = transactionStatus [4...7]\n//    let TX_transitionStatus = transactionStatus [3...3]\n//    let ODD_transitionStatus = transactionStatus [2...2]\n//    let index = index (!extend (endPoint) !extend (TX_transitionStatus) !extend (ODD_transitionStatus))\n    if endPoint == 0 {\n      self.endpoint_0_handler (!transactionStatus: transactionStatus)\n    }else{\n\n    }\n//    let index = transactionStatus >> 2\n//    let pid = (self.descriptorTable [index].desc >> 2) & 15\n//    if pid == 0x0D { // Setup received from host\n//      self.usb_setup ()\n//    //--- Unfreeze the USB, now that we're ready\n//      USB0:CTL = {USB0:CTL !USBENSOFEN:1)// clear TXSUSPENDTOKENBUSY bit\n//    }else if pid == 0x09 { // IN transaction completed to host\n//    }else if (pid == 0x01) || (pid == 0x02) { // OUT transaction received from host\n//\n//    }\n\n//    if endPoint == 0 {\n//      self.configure\n//    }else{\n//\n//    }\n  }\n\n  //····················································································································\n\n  func endpoint_0_handler section @mutating (\?transactionStatus: _ $u8) {\n  }\n\n  //····················································································································\n\n//  func section usb_setup @mutating () {\n//  //---\n//    let index $u32 = 0\n//    self.descriptorTable [index].desc = BDT_DESC (!EP0_SIZE !DATA1)\n//    self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n//    self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n//  //--- Grab the 8 byte setup info\n//    let bmRequestType = self.ep0_rx0_buf [0] & 0x1F\n//    let bRequest = self.ep0_rx0_buf [1]\n//    if bmRequestType == 0 { // Setup device\n//      digital.write (!yes !toPort:LED_L2)\n//      self.usb_setup_device (!bRequest)\n//    }else if bmRequestType == 1 { // Setup interface\n//      digital.write (!yes !toPort:LED_L3)\n//\n//    }else if bmRequestType == 2 { // Setup endpoint\n//      digital.write (!yes !toPort:LED_L4)\n//\n//    }\n//////    let wValue  = {UInt16 !8:self.ep0_rx0_buf [3] !8:self.ep0_rx0_buf [2]}\n//////    let wIndex  = {UInt16 !8:self.ep0_rx0_buf [5] !8:self.ep0_rx0_buf [4]}\n//////    let wLength = {UInt16 !8:self.ep0_rx0_buf [7] !8:self.ep0_rx0_buf [6]}\n////  //--- Build uint16 requestAndType\n////    let requestAndType = {UInt16 !8:bRequest !8:bmRequestType}\n////  //---\n////    if requestAndType == 0x0500 { // Set address, nothing to do\n////        digital.write (!yes !toPort:LED_L2)\n////    }else if requestAndType == 0x0900 { // Set configuration\n////        digital.write (!yes !toPort:LED_L1)\n////\n////\n////    }else if requestAndType == 0x0880 { // Get configuration\n////    }else if requestAndType == 0x0080 { // Get status (device)\n////    }else if requestAndType == 0x0082 { // Get status (endpoint)\n////    }else if requestAndType == 0x0102 { // Clear feature (device)\n////    }else if requestAndType == 0x0302 { // Clear feature (endpoint)\n////    }else if (requestAndType == 0x0680) || (requestAndType == 0x0681) { // Get descriptor\n////        digital.write (!yes !toPort:LED_L3)\n////    }\n//  }\n//\n////#define mGET_STATUS           0\n////#define mCLR_FEATURE          1\n////#define mSET_FEATURE          3\n////#define mSET_ADDRESS          5\n////#define mGET_DESC             6\n////#define mSET_DESC             7\n////#define mGET_CONFIG           8\n////#define mSET_CONFIG           9\n////#define mGET_INTF             10\n////#define mSET_INTF             11\n////#define mSYNC_FRAME           12\n//\n//  func section usb_setup_device @mutating (\?bRequest $u8) {\n//    self.trace = extend (bRequest)\n////    const usb_descriptor_list_t *p;\n////    int len;\n////\n////    switch (setup->bRequest) {\n////        case mGET_DESC:\n////            p = usb_descriptor_list;                    // Find entry in table\n////            while(p->wValue) {\n////                if(p->wValue == setup->wValue) {\n////                    if(p->length == 0)\n////                        len = p->addr[0];               // Use structure length\n////                    else\n////                        len = p->length;\n////\n////                    iprintf(\"sending 0x%04x %d\\r\\n\",setup->wValue, len);\n////                    usb_queue_tx(ep, p->addr, min(len, setup->wLength));\n////                    return;\n////                }\n////                p++;\n////            }\n////            iprintf(\"NOT IMPLEMENTED! 0x%04x\\r\\n\", setup->wValue);\n////            break;\n////\n////        case mSET_ADDRESS:\n////            device_state = ADDRESS;\n////            device_address = setup->wValue & 0x7f;\n////            usb_tx(ep,0,0);                         // Send handshake\n////            break;\n////\n////        case mSET_CONFIG:\n////            iprintf(\"setconfig: %d\\r\\n\", setup->wValue);\n////            device_state = ENUMERATED;\n////            usb_set_config(setup->wValue);\n////            usb_tx(ep,0,0);                         // Send handshake\n////            break;\n////\n////        default:\n////            iprintf(\"NOT IMPLEMENTED! %d\\r\\n\", setup->bRequest);\n////            break;\n////      }\n//  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver usb_device ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n// TASK\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T @stacksize 512 @autostart {\n  var tick $u32 = 0\n  var état $u32 = 0\n\n  //····················································································································\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n    digital.set (!mode:.output !toPort:LED_L0)\n  }\n\n  //····················································································································\n\n  while event time.wait (!until:self.tick) {\n    digital.toggle (!port:LED_L0)\n    self.tick +%= 500\n    lcd.goto (!line:0 !column:0)\n    for i $u32 in 0 ..< TRACE_SIZE {\n      let e = usb_device.lireÉtat (!i)\n      lcd.print (!hex2:e)\n    }\n    lcd.goto (!line:1 !column:0)\n    lcd.print (!hex8:usb_device.lireAddresseUSB ())\n\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_5_embeddedSampleCode (
  "13-usb-device.omnibus",
  "omnibus",
  true, // Text file
  15177, // Text length
  gWrapperFileContent_5_embeddedSampleCode
) ;

//--- File 'teensy-3-1/carte-tp-teensy-3-1.omnibus-import'

const char * gWrapperFileContent_1_embeddedSampleCode = "ctAssert target \"teensy-3-1/unprivileged\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver lcd (!DB4:.D16 !DB5:.D15 !DB6:.D14 !DB7:.D19 !RS:.D18 !ENABLE:.D17)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//   ACTIVITY LED\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver ActivityLed > digital {\n  startup {\n    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n  }\n}\n\ndriver ActivityLed ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\npublic func activityLedOn safe section @exported () {\n  digital.write (!yes !toPort:.D13)\n}\n\npublic func activityLedOff safe section @exported () {\n  digital.write (!no !toPort:.D13)\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet LED_L0 = $DigitalPort.D3\nlet LED_L1 = $DigitalPort.D4\nlet LED_L2 = $DigitalPort.D5\nlet LED_L3 = $DigitalPort.D6\nlet LED_L4 = $DigitalPort.D7\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet BUTTON_P0 = $DigitalPort.D8\nlet BUTTON_P1 = $DigitalPort.D9\nlet BUTTON_P2 = $DigitalPort.D10\nlet BUTTON_P3 = $DigitalPort.D11\nlet BUTTON_P4 = $DigitalPort.D12\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\npanic @setup 0 {\n  digital.set (!mode:.output !toPort:LED_L0)\n  digital.set (!mode:.output !toPort:LED_L1)\n  digital.set (!mode:.output !toPort:LED_L2)\n  digital.set (!mode:.output !toPort:LED_L3)\n  digital.set (!mode:.output !toPort:LED_L4)\n  lcd.clearScreenInPanicMode ()\n  lcd.gotoInPanicMode (!line:0 !column:0)\n  if LINE == 0 { // ISR Panic\n    lcd.printStringInPanicMode (!\"ISR PANIC\")\n  }else{\n    lcd.printStringInPanicMode (!FILE)\n    lcd.gotoInPanicMode (!line:2 !column:0)\n    lcd.printStringInPanicMode (!\"Line:\")\n    lcd.printUnsignedInPanicMode (!LINE)\n  }\n  lcd.gotoInPanicMode (!line:3 !column:0)\n  lcd.printStringInPanicMode (!\"Code:\")\n  lcd.printUnsignedInPanicMode (!CODE)\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\npanic @loop 0 {\n  time.panicBusyWaitingDuringMS (!50)\n  digital.toggle (!port:LED_L0)\n  digital.toggle (!port:LED_L1)\n  digital.toggle (!port:LED_L2)\n  digital.toggle (!port:LED_L3)\n  digital.toggle (!port:LED_L4)\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_1_embeddedSampleCode (
  "carte-tp-teensy-3-1.omnibus-import",
  "omnibus-import",
  true, // Text file
  2773, // Text length
  gWrapperFileContent_1_embeddedSampleCode
) ;

//--- All files of 'teensy-3-1' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_2 [16] = {
  & gWrapperFile_4_embeddedSampleCode,
  & gWrapperFile_12_embeddedSampleCode,
  & gWrapperFile_11_embeddedSampleCode,
  & gWrapperFile_2_embeddedSampleCode,
  & gWrapperFile_13_embeddedSampleCode,
  & gWrapperFile_3_embeddedSampleCode,
  & gWrapperFile_8_embeddedSampleCode,
  & gWrapperFile_15_embeddedSampleCode,
  & gWrapperFile_9_embeddedSampleCode,
  & gWrapperFile_14_embeddedSampleCode,
  & gWrapperFile_10_embeddedSampleCode,
  & gWrapperFile_6_embeddedSampleCode,
  & gWrapperFile_7_embeddedSampleCode,
  & gWrapperFile_5_embeddedSampleCode,
  & gWrapperFile_1_embeddedSampleCode,
  NULL
} ;

//--- All sub-directories of 'teensy-3-1' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_2 [1] = {
  NULL
} ;

//--- Directory 'teensy-3-1'

const cDirectoryWrapper gWrapperDirectory_2_embeddedSampleCode (
  "teensy-3-1",
  15,
  gWrapperAllFiles_embeddedSampleCode_2,
  0,
  gWrapperAllDirectories_embeddedSampleCode_2
) ;

//--- File 'teensy-3-6/01-blink-led.omnibus'

const char * gWrapperFileContent_27_embeddedSampleCode = "target \"teensy-3-6/xtr64\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver RegisterRead > root {\n\n  public section SIM_CLKDIV1 () -> $u32 {\n    result = ©SIM.CLKDIV1\n  }\n\n  public section MCG_C5 () -> $u8 {\n    result = ©MCG.C5\n  }\n\n  public section MCG_C6 () -> $u8 {\n    result = ©MCG.C6\n  }\n}\n\ndriver RegisterRead ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L0)\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!string:\"OUTDIV: \")\n    lcd.print (!hex4: RegisterRead.SIM_CLKDIV1 ()>> 16)\n    lcd.goto (!line:1 !column:0)\n    lcd.print (!string:\"PRDIV: \")\n    lcd.print (!u32:extend (RegisterRead.MCG_C5 () & 7))\n    lcd.goto (!line:2 !column:0)\n    lcd.print (!string:\"VDIV: \")\n    lcd.print (!u32:extend (RegisterRead.MCG_C6 () & 0x1F))\n  }\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L0)\n    self.compteur +%= 500\n    time.wait (!until: self.compteur)\n    digital.write (!no !toPort:LED_L0)\n    self.compteur +%= 500\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_27_embeddedSampleCode (
  "01-blink-led.omnibus",
  "omnibus",
  true, // Text file
  1450, // Text length
  gWrapperFileContent_27_embeddedSampleCode
) ;

//--- File 'teensy-3-6/02-blink-leds.omnibus'

const char * gWrapperFileContent_26_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T1 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode: .output !toPort: LED_L0)\n    digital.set (!mode: .output !toPort: LED_L1)\n    digital.set (!mode: .output !toPort: LED_L2)\n    digital.set (!mode: .output !toPort: LED_L3)\n    digital.set (!mode: .output !toPort: LED_L4)\n    lcd.print (!string: \"Hello\")\n  }\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort: LED_L0)\n    self.compteur +%= 500\n    time.wait (!until: self.compteur)\n    digital.write (!no !toPort: LED_L0)\n    self.compteur +%= 500\n    lcd.goto (!line: 1 !column: 0)\n    lcd.print (!u32: time.now ())\n    lcd.goto (!line:2 !column: 0)\n    lcd.print (!u32: freeStackSize ())\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T2 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L1)\n    self.compteur +%= 499\n    time.wait (!until:self.compteur)\n    digital.write (!no !toPort:LED_L1)\n    self.compteur +%= 499\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T3 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L2)\n    self.compteur +%= 498\n    time.wait (!until:self.compteur)\n    digital.write (!no !toPort:LED_L2)\n    self.compteur +%= 498\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T4 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L3)\n    self.compteur +%= 497\n    time.wait (!until:self.compteur)\n    digital.write (!no !toPort:LED_L3)\n    self.compteur +%= 497\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T5 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L4)\n    self.compteur +%= 496\n    time.wait (!until:self.compteur)\n    digital.write (!no !toPort:LED_L4)\n    self.compteur +%= 496\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_26_embeddedSampleCode (
  "02-blink-leds.omnibus",
  "omnibus",
  true, // Text file
  2461, // Text length
  gWrapperFileContent_26_embeddedSampleCode
) ;

//--- File 'teensy-3-6/03-pit-dma.omnibus'

const char * gWrapperFileContent_33_embeddedSampleCode = "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  This eDMA demo shows how using DMA for outputing periodic signal\n//  The output port is D13 (LED_BUILTIN), i.e. PTC5\n//  Port D3 is toggled at #PIT0 frequency\n//  Port D4 is toggled at the end of PATTERN_LENGTH (major loop count) transfers\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n// This code works on Teensy 3.6\n// It has not been tested on Teensy 3.5\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n// IT DOES NOT WORK ON TEENSY 3.1, THE MICRO-CONTROLLER IS BUGGY\n//    The symptom is D4 blinks at 150 kHz, independantly from PATTERN_FREQUENCY\n//    See Mask Set Errata for Mask 1N36B: https://www.nxp.com/docs/en/errata/KINETIS_K_1N36B.pdf\n//    Erratum ID e4588: Instead of sending a single DMA request every time the PIT expires, the first\n//    time the PIT triggers a DMA transfer the “always enabled” source will not negate its request.\n//    This results in the DMA request remaining asserted continuously after the first trigger.\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntarget \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet PATTERN_FREQUENCY = 5 // In Hertz\n// So LED_L3 frequency is PATTERN_FREQUENCY / 2\n// So D4 frequency is PATTERN_FREQUENCY / 2 / PATTERN_LENGTH\n\nstaticArray kPATTERN { let x $bool }\n\nextend staticArray kPATTERN ( // Morse code example: output \"S S S ...\"\n  !yes, !no, !yes, !no, !yes, // 3 dots : letter S\n  !no, !no, !no, !no, !no, !no, !no // Medium gap betwween words\n)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————\n// eDMA module cannot access GPIO from aliased bit-band regions.\n// eDMA module can access:\n//    - GPIOx_PDOR (but it changes all bits of the given GPIO x)\n//    - GPIOx_PSOR (it sets selected bits of the given GPIO x, but cannot reset them)\n//    - GPIOx_PCOR (it resets selected bits of the given GPIO x, but cannot set them)\n//    - GPIOx_PTOR (it toggles selected bits of the given GPIO x)\n// So we use GPIOx_PTOR\n\n// The output port is D7: PTD2\n// For toggling D7, without any change on other GPIOC bits: \"GPIOD_PTOR = (1 << 2)\"\n// \"GPIOD_PTOR = 0  ::\" is a nop\n// So we need to transform the kPATTERN boolean array to the gOutputPattern uint32_t array, that will\n// contains (1 << 2) for toggling PTD2 port, and 0 for not changing it: the values\n// are not the kPATTERN values, but the toggles we need to output the given pattern.\n// Building the gOutputPattern array is done at the beginning of the setup function.\n\nlet PATTERN_LENGTH = kPATTERN.count\n\ntypealias $PatternArray = [PATTERN_LENGTH : $u32]\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver pit > root {\n\n  //····················································································································\n\n  section initializeDMA (\?!pattern $PatternArray) {\n  //--- Transform pattern for encoding level changes\n    var current = no\n    var index $u32 = 0\n    for élément in kPATTERN {\n      let b = élément.x\n      pattern [index] = if current ≠ b { 0 } else { 1 << 2 }\n      index += 1\n      current = b\n    }\n  //--- Set up LED_BUILTIN digital output at LOW level\n    digital.set (!mode:.output !toPort:LED_L4)\n    digital.write (!no !toPort:LED_L4)\n\n  //--- Power on DMA:MUX, PIT, DMA\n    ©SIM.SCGC6 |= {©SIM.SCGC6 !DMAMUX:1 !PIT:1}\n    ©SIM.SCGC7 |= {©SIM.SCGC7 !DMA:1}\n\n  //--- Unmask PIT0 interrupt\n    enable (!interrupt:.PITChannel3)\n\n  //--- Unmask DMAChannel0TransferComplete interrupt\n    enable (!interrupt:.DMAChannel0TransferComplete)\n\n  //--- Enable PIT module\n    ©PIT.MCR = 0\n\n  //--- Disable #PIT3\n    ©PIT.TCTRL [3] = 0\n\n  //--- #PIT0 clock frequency is BUS (in Hertz): #PIT:LDVAL3 sets the request period of DMA 0\n    ©PIT.LDVAL [3] = ((BUS_MHZ * 1_000_000) / PATTERN_FREQUENCY) - 1\n\n  //--- Clear #PIT3 interrupt flag\n    ©PIT.TFLG [3] = 1\n\n  //--- Disable DMA Channel 0: it is required for configuring it\n    ©DMAMUX.CHCFG [3] = 0\n\n  //--- Initial source address: the pattern array address\n    ©DMA.TCD_SADDR [3] = addressof (pattern)\n\n  //--- After every request, source address is incremented by 4\n    ©DMA.TCD_SOFF [3] = 4\n\n  //--- At the end of a major loop, source address is decremented to pattern array address\n    ©DMA.TCD_SLAST [3] = - 4 * PATTERN_LENGTH // - transfert_size * major_loop_count\n\n  //--- Destination address: the address of the GPIOC_PTOR control register\n    ©DMA.TCD_DADDR [3] = addressof ©GPIOD.PTOR\n\n  //--- After every request, destination address is not modified\n    ©DMA.TCD_DOFF [3] = 0\n\n  //--- At the end of a major loop, destination address is not modified\n    ©DMA.TCD_DLASTSGA [3] = 0\n\n  //--- Set major loop count\n    ©DMA.TCD_CITER_ELINKNO [3] = PATTERN_LENGTH\n    ©DMA.TCD_BITER_ELINKNO [3] = PATTERN_LENGTH\n\n  //--- Source and destination are 32-bit\n    ©DMA.TCD_ATTR [3] = {©DMA.TCD_ATTR\n      !SSIZE: DMA_TCD_ATTR_SIZE_32BIT // Transfer source size is 32-bit\n      !DSIZE: DMA_TCD_ATTR_SIZE_32BIT // Transfer destination size is 32-bit\n    }\n\n  //--- Number of bytes to transfer per request: 4\n    ©DMA.TCD_NBYTES_MLNO [3] = 4\n\n  //--- Set repetition and DMA interrupt\n  // if DREQ bit is set, the DMA performs PATTERN_LENGTH transfers and stops)\n  // Otherwise, the DMA performs PATTERN_LENGTH transfers repetitively\n    ©DMA.TCD_CSR [3] = {©DMA.TCD_CSR\n      !INTMAJOR:1 // Generate an interrupt at the end of major loop count transfert (for toggling D4)\n    }\n\n  //--- Configure DMA Channel\n    ©DMAMUX.CHCFG [3] = {©DMAMUX.CHCFG\n      !ENBL: 1 // DMA Channel 0 is enabled\n      !TRIG: 1 // DMA Channel 0 is triggered by #PIT 0\n      !SOURCE: DMAMUX_SOURCE_ALWAYS0 // Trigger is always active\n    }\n\n  //--- Start DMA Channel 0\n    ©DMA.SERQ = 3\n\n  //--- Enable #PIT 0 : it starts counting, enable interrupt\n    ©PIT.TCTRL [3] = {©PIT.TCTRL !TEN:1 !TIE:1}\n  }\n\n  //····················································································································\n\n  interrupt section PITChannel3 {\n  //--- Acquitter l'interruption\n    ©PIT.TFLG [3] = {©PIT.TFLG !TIF:1}\n  //--- Toggle LED_L3\n    digital.toggle (!port:LED_L3)\n  }\n\n  //····················································································································\n\n  interrupt section DMAChannel0TransferComplete {\n  //--- Acquitter l'interruption\n    ©DMA.CINT = 0\n  //--- Toggle LED_L2\n    digital.toggle (!port:LED_L2)\n  }\n\n  //····················································································································\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver pit ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche @stacksize 512 @autostart {\n  var compteur $u32 = 0\n  var pattern = $PatternArray (!repeated:0)\n\n  event @onSetup first {\n    pit.initializeDMA (!\?self.pattern)\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L3)\n    digital.set (!mode:.output !toPort:LED_L2)\n  }\n\n  while event time.wait (!until:self.compteur) {\n    digital.write (!yes !toPort:LED_L0)\n    self.compteur +%= 500\n    time.wait (!until: self.compteur)\n    digital.write (!no !toPort:LED_L0)\n    self.compteur +%= 500\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32: self.pattern.count)\n    lcd.print (!string:\" \")\n    let cc = $ISRSlot.PITChannel3.u7\n    lcd.print (!u32: extend (cc))\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_33_embeddedSampleCode (
  "03-pit-dma.omnibus",
  "omnibus",
  true, // Text file
  8138, // Text length
  gWrapperFileContent_33_embeddedSampleCode
) ;

//--- File 'teensy-3-6/04-large-structure.omnibus'

const char * gWrapperFileContent_21_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet PATTERN_LENGTH = 1000\n\ntypealias $PatternArray = [PATTERN_LENGTH : $u32]\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche @stacksize 5512 @autostart {\n  var compteur $u32 = 0\n  var x = $PatternArray (!repeated:0)\n  var y = $PatternArray (!repeated:0)\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L0)\n  }\n\n  while event time.wait (!until:self.compteur) {\n    self.y = self.x\n    for i $u32 in 0 ..< self.x.count {\n      self.y [i] += self.compteur\n    }\n    digital.write (!yes !toPort:LED_L0)\n    self.compteur +%= 500\n    time.wait (!until: self.compteur)\n    digital.write (!no !toPort:LED_L0)\n    self.compteur +%= 500\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32: $PatternArray.count)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_21_embeddedSampleCode (
  "04-large-structure.omnibus",
  "omnibus",
  true, // Text file
  1152, // Text length
  gWrapperFileContent_21_embeddedSampleCode
) ;

//--- File 'teensy-3-6/05-periodic-timer.omnibus'

const char * gWrapperFileContent_30_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————\n\nsync $PeriodicTimer {\n  var deadline $u32 = 0\n  let period $u32\n  var guardList = $GuardList ()\n\n  //············································································\n\n  public primitive wait @noUnusedWarning @mutating () {\n    if self.deadline ≤ time.now () {\n      block (!onDeadline:self.deadline)\n    }\n    self.deadline += self.period\n  }\n\n  //············································································\n\n  public guard wait @noUnusedWarning () {\n    accept = self.deadline ≤ time.now ()\n    if accept {\n      self.deadline += self.period\n    }else{\n      handle (!\?guard:self.guardList)\n    }\n  }\n\n  public section deadline @noUnusedWarning () -> $u32 {\n    result = self.deadline\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask Tâche @stacksize 512 @autostart {\n  var compteur $u32 = 0\n  var deadline = $PeriodicTimer (!period:500)\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n  }\n\n  while event time.wait (!until:self.compteur) {\n    digital.toggle (!port:LED_L0)\n    self.compteur +%= 500\n  }\n\n  while event self.deadline.wait () {\n    digital.toggle (!port: LED_L1)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_30_embeddedSampleCode (
  "05-periodic-timer.omnibus",
  "omnibus",
  true, // Text file
  1487, // Text length
  gWrapperFileContent_30_embeddedSampleCode
) ;

//--- File 'teensy-3-6/06-chained-pit-0-1.omnibus'

const char * gWrapperFileContent_19_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 192\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\ndriver chronomètre ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver chronomètre > root {\n\n  startup {\n  //--- Power on DMA_MUX, #PIT, DMA\n    ©SIM.SCGC6 |= {©SIM.SCGC6 !PIT:1}\n   //--- Enable #PIT module\n    ©PIT.MCR = 0\n  //--- Disable #PIT0 and #PIT1\n    ©PIT.TCTRL [0] = 0\n    ©PIT.TCTRL [1] = 0\n  //--- #PIT0 clock frequency is F_BUS (in Hertz)\n    ©PIT.LDVAL [0] = $u32.max\n    ©PIT.LDVAL [1] = $u32.max\n  //--- Enable #PIT0 and #PIT1 : start counting, no interrupt\n    ©PIT.TCTRL [1] = {©PIT.TCTRL !CHN:1 !TEN:1}\n    ©PIT.TCTRL [0] = {©PIT.TCTRL !TEN:1}\n  }\n\n  public section now @noUnusedWarning () -> $Uptime {\n    var r $u64 = extend (©PIT.LTMR64H)\n    r <<= 32\n    r |= extend (©PIT.LTMR64L)\n    r = ~ r\n    r +%= 1\n    result = $Uptime (!rawValue: r)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nstruct $Uptime @copyable {\n  let rawValue $u64\n\n  public func raw @noUnusedWarning () -> $u64 {\n    result = self.rawValue\n  }\n\n  public func µs @noUnusedWarning () -> $u32 {\n    let r = (self.rawValue / BUS_MHZ) % 1_000\n    result = truncate (r)\n  }\n\n  public func ms @noUnusedWarning () -> $u32 {\n    let r = (self.rawValue / (BUS_MHZ * 1_000)) % 1_000\n    result = truncate (r)\n  }\n\n  public func s @noUnusedWarning () -> $u32 {\n    let r = self.rawValue / (BUS_MHZ * 1_000_000)\n    result = truncate (r)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L0)\n  }\n\n  while event time.wait (!until:self.compteur) {\n    let tick = chronomètre.now ()\n    digital.toggle (!port:LED_L0)\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32:self.compteur)\n    lcd.goto (!line:1 !column:0)\n    lcd.print (!u64:tick.raw () / BUS_MHZ)\n    lcd.goto (!line:2 !column:0)\n    lcd.print (!u32:tick.s ())\n    lcd.print (!string:\" \")\n    lcd.print (!u32:tick.ms ())\n    lcd.print (!string:\" \")\n    lcd.print (!u32:tick.µs ())\n    self.compteur +%= 1_001\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_19_embeddedSampleCode (
  "06-chained-pit-0-1.omnibus",
  "omnibus",
  true, // Text file
  2445, // Text length
  gWrapperFileContent_19_embeddedSampleCode
) ;

//--- File 'teensy-3-6/07-synchronization-gate.omnibus'

const char * gWrapperFileContent_37_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nsync $SynchronizationGate {\n  var isOpen $bool\n  var taskList = $TaskList ()\n  var guardList = $GuardList ()\n\n  //············································································\n\n  public service close @noUnusedWarning @mutating () {\n    self.isOpen = no\n  }\n\n  //············································································\n\n  public service open @noUnusedWarning @mutating () {\n    if not self.isOpen {\n      self.isOpen = yes\n      var continue = yes\n      while continue {\n        makeTaskReady (!\?fromList:self.taskList \?found:continue)\n      }\n      notifyChange (!\?forGuard: self.guardList)\n    }\n  }\n\n  //············································································\n\n  public primitive wait @noUnusedWarning @mutating () {\n    if not self.isOpen {\n      block (!\?inList:self.taskList)\n    }\n  }\n\n   //············································································\n\n  public guard wait @noUnusedWarning () {\n    accept = self.isOpen\n    if not accept {\n      handle (!\?guard:self.guardList)\n    }\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nsync s1 = $Semaphore (!value:0)\nsync s2 = $Semaphore (!value:0)\nsync gate = $SynchronizationGate (!isOpen:no)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche1 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n  }\n\n  while event time.wait (!until:self.compteur) {\n    digital.toggle (!port:LED_L0)\n    self.compteur +%= 500\n    gate.open ()\n    s1.wait ()\n    s1.wait ()\n    gate.close ()\n    s2.signal ()\n    s2.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche2 @stacksize 512 @autostart {\n\n  while event gate.wait () {\n    digital.toggle (!port:LED_L1)\n    s1.signal ()\n    s2.wait ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche3 @stacksize 512 @autostart {\n\n  while event gate.wait () {\n    digital.toggle (!port:LED_L2)\n    s1.signal ()\n    s2.wait ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_37_embeddedSampleCode (
  "07-synchronization-gate.omnibus",
  "omnibus",
  true, // Text file
  2800, // Text length
  gWrapperFileContent_37_embeddedSampleCode
) ;

//--- File 'teensy-3-6/08-synchronization-buffer.omnibus'

const char * gWrapperFileContent_36_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet SIZE = 10\n\nsync $SynchronizationBuffer {\n  var data = [SIZE : $u32] (!repeated:$u32 ())\n  var readIndex $u32 = 0\n  var writeIndex $u32 = 0\n  var readSemaphore = $Semaphore (!value:0)\n  var writeSemaphore = $Semaphore (!value:SIZE)\n\n  //············································································\n\n  public func write user @mutating @noUnusedWarning (\? value $u32) {\n    self.writeSemaphore.wait ()\n    self.data [self.writeIndex] = value\n    self.writeIndex += 1\n    if self.writeIndex == SIZE {\n      self.writeIndex = 0\n    }\n    self.readSemaphore.signal ()\n  }\n\n  //············································································\n\n  public func read user @mutating @noUnusedWarning (! value $u32) {\n    self.readSemaphore.wait ()\n    value = self.data [self.readIndex]\n    self.readIndex += 1\n    if self.readIndex == SIZE {\n      self.readIndex = 0\n    }\n    self.writeSemaphore.signal ()\n  }\n\n  //············································································\n\n  public guard read @noUnusedWarning (! value $u32) : self.readSemaphore.wait () {\n    value = self.data [self.readIndex]\n    self.readIndex += 1\n    if self.readIndex == SIZE {\n      self.readIndex = 0\n    }\n    self.writeSemaphore.signal ()\n  }\n\n  //············································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nsync buffer = $SynchronizationBuffer ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche1 @stacksize 512 {\n  var compteur $u32 = 0\n  var index $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n  }\n\n  while event time.wait (!until:self.compteur) {\n    digital.toggle (!port:LED_L0)\n    self.compteur +%= 500\n    self.index += 1\n    buffer.write (!self.index)\n  }\n}\n\ntask Tâche2 @stacksize 512 @autostart {\n\n  while event buffer.read (\?var value $u32) {\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32:value)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_36_embeddedSampleCode (
  "08-synchronization-buffer.omnibus",
  "omnibus",
  true, // Text file
  2535, // Text length
  gWrapperFileContent_36_embeddedSampleCode
) ;

//--- File 'teensy-3-6/09-PWM-with-PTM-module.omnibus'

const char * gWrapperFileContent_38_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver PWMOutput > root {\n\n  //····················································································································\n\n  startup {\n  //--- Activate #TPM1 and #TPM2 modules\n    ©SIM.SCGC2 |= {©SIM.SCGC2 !TPM1:1 !TPM2:1}\n  //--- Use the OSCERCLK 16 MHz clock for TPM Module OSC_DIV.ERPS = 0 (--> divide by 1)\n  // TPMSRC --> 0:disabled, 1:see PLLFLLSEL, 2:OSCERCLK, 3:MCGIRCCLK\n  // PLLFLLSEL --> 0:MCGFLLCLK, 1:MCGPLLCLK, 2:USB1 PFD clock, 3:IRC48 clock (48 MHz)\n    ©SIM.SOPT2 |= {©SIM.SOPT2 !TPMSRC:2}\n  //------------------- #TPM1:channel 0 is 32 kHz square wave\n  //--- Set counter value to 0\n    ©TPM1.CNT = {©TPM1.CNT !COUNT:0}\n  //--- Set counter period --> 32 kHz\n    ©TPM1.MOD = {©TPM1.MOD !MOD:125 - 1}\n  //--- Configure channel 0 as single PWM output\n    ©TPM1.C0SC = {©TPM1.C0SC !MSB:1 !ELSB:1}\n  //--- Channel 0 match value --> Square wave\n    ©TPM1.C0V = {©TPM1.C0V !VAL: 125 / 2}\n  //--- Use PTA12 (#3) as #TPM1_CH0 output (ALT7)\n    ©PORTA.PCR [12] = {©PORTA.PCR !MUX:7}\n  //--- Configure #TPM1 (COMD=1 --> comptage, PS=2 --> prescaler = 4)\n    ©TPM1.SC = {©TPM1.SC !CMOD:1 !PS:2}\n  //------------------- #TPM2:channel 0 is 100 Hz wave\n  //--- Set counter value to 0\n    ©TPM2.CNT = {©TPM2.CNT !COUNT:0}\n  //--- Set counter period --> 100 Hz\n    ©TPM2.MOD = {©TPM2.MOD !MOD:40_000 - 1}\n  //--- Configure channel 0 as single PWM output\n    ©TPM2.C0SC = {©TPM2.C0SC !MSB:1 !ELSB:1}\n  //--- Channel 0 match value\n    ©TPM2.C0V = {©TPM2.C0V !VAL: 125 - 1}\n  //--- Channel 0 polarity\n    ©TPM2.POL = {©TPM2.POL !POL0:1}\n  //--- Use PTB18 (#29) as #TPM2_CH0 output (ALT6)\n    ©PORTB.PCR [18] = {©PORTB.PCR !MUX:6}\n  //--- Configure #TPM1 (COMD=1 --> comptage, PS=2 --> prescaler = 4)\n    ©TPM2.SC = {©TPM2.SC !CMOD:1 !PS:2}\n  }\n\n  //····················································································································\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver PWMOutput ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche1 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L4)\n  }\n\n  while event time.wait (!until:self.compteur) {\n    digital.toggle (!port:LED_L4)\n    self.compteur +%= 500\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_38_embeddedSampleCode (
  "09-PWM-with-PTM-module.omnibus",
  "omnibus",
  true, // Text file
  2750, // Text length
  gWrapperFileContent_38_embeddedSampleCode
) ;

//--- File 'teensy-3-6/10-integer-slices.omnibus'

const char * gWrapperFileContent_29_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche1 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n  var test = yes\n\n  event @onSetup first {\n    let b = {$u8 !b:self.test !1:0 !6:12}\n    lcd.print (!hex2:extend (b))\n    lcd.print (!spaces:1)\n    var b7 $bool\n    {$u8 \?b:b7 \?2:let b2 \?5:let b3} = 0xAC\n    let bb = {$u8 !b:b7 !2:b2 !5:b3}\n    lcd.print (!hex2:extend (bb))\n  }\n\n  while event time.wait (!until:self.compteur) {\n    self.compteur +%= 500\n    digital.toggle (!port:LED_L3)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_29_embeddedSampleCode (
  "10-integer-slices.omnibus",
  "omnibus",
  true, // Text file
  795, // Text length
  gWrapperFileContent_29_embeddedSampleCode
) ;

//--- File 'teensy-3-6/11-heap.omnibus'

const char * gWrapperFileContent_40_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\noption \"task-strict-priority-order\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver project > digital {\n  startup {\n    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n    digital.set (!mode:.output !toPort:LED_L4)\n    digital.set (!mode:.output !toPort:LED_L3)\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.inputPullUp !toPort:BUTTON_P0)\n  }\n}\n\ndriver project ()\n\ntypealias $Array8 = [$u8]\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nstruct $StructWithARC {\n  public var unEntierQuelconque $u32 = 0\n  public var donnée = $Array8 ()\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nstruct $AutreStructWithARC {\n  public var autreEntierQuelconque $u32 = 0\n  public var structure = $StructWithARC ()\n  public var autreDonnée = $Array8 ()\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T1 > T2 @stacksize 512 @autostart {\n  var échéance $u32 = 0\n  var freeRam $u32 = 0\n  var start $u32 = 0\n  var maxAllocationParSeconde $u32 = 0\n  var alloc $u32 = 0\n  var current $u32 = 0\n\n  event @onSetup first {\n    lcd.print (!string:\"Free:\")\n    lcd.goto (!line:1 !column:0)\n    lcd.print (!string:\"Start:\")\n    lcd.goto (!line:2 !column:0)\n    lcd.print (!string:\"Max:\")\n  }\n\n  while event time.wait (!until:self.échéance) {\n    self.échéance +%= 1_000\n    digital.toggle (!port:LED_L3)\n    let freeRam = freeByteCount ()\n    if self.freeRam ≠ freeRam {\n      self.freeRam = freeRam\n      lcd.goto (!line:0 !column:6)\n      lcd.print (!u32:freeRam !width:6)\n    }\n    let start = heapStartAddress ()\n    if self.start ≠ start {\n      self.start = start\n      lcd.goto (!line:1 !column:6)\n      lcd.print (!hex8:start)\n    }\n    let alloc = totalAllocationObjectCount ()\n    let allocationParSecondes = alloc - self.alloc\n    if allocationParSecondes > self.maxAllocationParSeconde {\n      self.maxAllocationParSeconde = allocationParSecondes\n      lcd.goto (!line:2 !column:6)\n      lcd.print (!u32:allocationParSecondes !width:7)\n    }\n    if self.alloc ≠ alloc {\n      self.alloc = alloc\n      lcd.goto (!line:3 !column:0)\n      lcd.print (!u32:alloc !width:10)\n    }\n    let current = currentlyAllocatedObjectCount ()\n    if self.current ≠ current {\n      self.current = current\n      lcd.goto (!line:3 !column:17)\n      lcd.print (!u32:current !width:3)\n    }\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T2 > backgroundTask @stacksize 512 @autostart {\n  var échéance1 $u32 = 2001\n  var échéance2 $u32 = 2001\n  var échéance3 $u32 = 2001\n  var data1 = $Array8 ()\n  var data2 = $Array8 ()\n  var structure = $AutreStructWithARC ()\n  var b $u8 = 0\n\n  while event time.wait (!until:self.échéance1) {\n    self.échéance1 +%= 71\n    digital.toggle (!port:LED_L4)\n    if digital.read (!port:BUTTON_P0) {\n      if self.data1.length () < 500 {\n        self.data1.append (!self.b)\n        self.b +%= 1\n        // assert (self.b < 25) // For checking assert instruction\n      }else{\n        self.data1.removeAll ()\n      }\n    }else{\n      self.data1.removeAll ()\n    }\n  }\n\n  while event time.wait (!until:self.échéance2) {\n    self.échéance2 +%= 97\n    self.data2 = self.data1\n  }\n\n  while event time.wait (!until:self.échéance3) {\n    self.échéance3 +%= 511\n    self.structure.structure.donnée = self.data2\n    self.testReleaseLocalVar (!in:self.structure.structure.donnée)\n  }\n\n  func testReleaseLocalVar (\?in: inData $Array8) {\n    var d = $StructWithARC ()\n    d.donnée = inData\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask backgroundTask @stacksize 512 @autostart {\n  var data = $Array8 ()\n\n  while event time.wait (!until:0) {\n    digital.toggle (!port:LED_L0)\n    if digital.read (!port:BUTTON_P0) {\n      if self.data.length () == 0 {\n        self.data.append (!0)\n        self.testReleaseLocalVar (!in:self.data)\n      }else{\n        self.data.removeAll ()\n      }\n    }else{\n      self.data.removeAll ()\n    }\n  }\n\n  func testReleaseLocalVar (\?in: inData $Array8) {\n    externalSection (!in:inData)\n    var d $u32 = 143\n    var x $u3 = d [3 ... 5]\n  }\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nsection externalSection (\?in: inData $Array8) {\n  var d = inData\n  d.append (!0)\n  var xxxx = [$bool] ()\n  xxxx.append (!yes)\n  var lg = xxxx.length ()\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_40_embeddedSampleCode (
  "11-heap.omnibus",
  "omnibus",
  true, // Text file
  5013, // Text length
  gWrapperFileContent_40_embeddedSampleCode
) ;

//--- File 'teensy-3-6/12-section-service-duration.omnibus'

const char * gWrapperFileContent_20_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————\n\nsection emptySection () {\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\nservice emptyService () {\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\nsection getSysTick () -> $u32 {\n  result = ©SYST.CVR\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\nlet ITERATIONS = 7\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask T @stacksize 512 @autostart {\n\n  //············································································\n\n  event @onSetup first {\n    var cumul $u32 = 0\n  //--- Compute getSysTick duration\n    for _ $u32 in 0 ..< ITERATIONS {\n      time.wait (!during:1)\n      let t0 = getSysTick ()\n      let t1 = getSysTick ()\n      cumul += t0 - t1\n      lcd.print (!u32:t0 - t1)\n      lcd.print (!spaces:1)\n    }\n    let systickDuration = cumul / ITERATIONS\n  //--- Compute emptySection duration\n    lcd.goto (!line:1 !column:0)\n    for _ $u32 in 0 ..< ITERATIONS {\n      time.wait (!during:1)\n      let t0 = getSysTick ()\n      emptySection ()\n      let t1 = getSysTick ()\n      lcd.print (!u32:t0 - t1 - systickDuration)\n      lcd.print (!spaces:1)\n    }\n  //--- Compute emptyService duration\n    lcd.goto (!line:2 !column:0)\n    for _ $u32 in 0 ..< 4 {\n      time.wait (!during:1)\n      let t0 = getSysTick ()\n      emptyService ()\n      let t1 = getSysTick ()\n      lcd.print (!u32:t0 - t1 - systickDuration)\n      lcd.print (!spaces:1)\n    }\n  }\n\n\n  //············································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_20_embeddedSampleCode (
  "12-section-service-duration.omnibus",
  "omnibus",
  true, // Text file
  1855, // Text length
  gWrapperFileContent_20_embeddedSampleCode
) ;

//--- File 'teensy-3-6/13-usb-device.omnibus'

const char * gWrapperFileContent_22_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//   Display clock settings\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n//let myBUS_MHZ @display = BUS_MHZ\n//let myFLEXBUS_MHZ @display = FLEXBUS_MHZ\n//let myFLASH_KHZ @display = FLASH_KHZ\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n// USB DEVICE DRIVER\n// Kevin Cuzner wrote a simpler version, and a great blog article:\n//   http://kevincuzner.com/2014/12/12/teensy-3-1-bare-metal-writing-a-usb-driver/\n//   https://github.com/kcuzner/teensy-oscilloscope/blob/master/scope-teensy/src/usb.c\n//---\n//   https://github.com/prof7bit/frdm-kl25z-minimal-usb-hid\n//   http://www.beyondlogic.org/usbnutshell/usb1.shtml\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n// 1. La routine init du pilote est exécutée. Elle se termine par l'activation du pull-up sur D+. Ceci a pour\n//    conséquence que le host lance une commande d'initialisation qui déclenche une interruption\n// 2. L'interruption est du type 'RESET', et la routine configureEndPoint0OnReset effectue la configuration.\n// 3. Nouvelle interruption, du type 'TOKEN COMPLETED' -> on lance tokenCompleted (). Cette routine lit l'endPoint\n//    concerné, il s'agit du n°0. On exécute alors endpoint_0_handler ().\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet DEVICE_DESCRIPTOR = [18 : $u8] (\n  !18 // Descriptor size in bytes\n  !1  // DEVICE constant\n  !0x00 !0x02 // USB specification release (BCD): 0x0200\n  !0x02 // Class code (2 -> communication)\n  !0    // Subclass code\n  !0    // Protocol code\n  !8    // Maximum packet size for endpoint0 (low-speed: 8, full-speed: 8, 16, 32, 64)\n  !0xAD !0xDE // Vendor ID:   0xDEAD\n  !0xAF !0xBE // Product ID : 0xBEAF\n  !0 !0 // Device release number (BCD)\n  !0 // Index of string descriptor for the manufacturer (0 -> no string)\n  !0 // Index of string descriptor for the product (0 -> no string)\n  !0 // Index of string descriptor for the serial umber (0 -> no string)\n  !1 // Number of possible configurations\n)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet CONFIG_DESCRIPTOR = [32 : $u8] (\n//--- Configuration descriptor\n  !9  // Configuration descriptor size in bytes\n  !2  // CONFIGURATION constant\n  !32 !0 // The number of bytes in the configuration descriptor and all its subordinate descriptors\n  !1 // Number of interfaces in the configuration (should be ≥ 1)\n  !1 // Identifier for Set_Configuration and Get_Configuration (should be ≥ 1)\n  !0 // Index of string descriptor for the configuration (0 -> no string)\n  !0 // Device is bus-powered (bit 6=1 --> self powered)\n  !100 / 2 // Half of bus current required, in milli-amperes (50 --> 100 mA)\n//--- Subordinate descriptor: INTERFACE association\n  !9  // $interface descriptor size in bytes\n  !4  // INTERFACE constant\n  !0  // Number identifying this interface\n  !0  // Value used to select an alternate setting (0: no alternate setting)\n  !2  // Number of endpoints supported (not counting endpoint 0)\n  !0x0A // Class code (0x0A --> Data $interface of Communication Device Class)\n  !0x00 // Subclass code\n  !0  // $interface Protocol\n  !0  // Index of string descriptor for the interface (0 --> no string)\n//--- Subordinate descriptor: ENDPOINT association\n  !7  // Endpoint descriptor size in bytes\n  !5  // ENDPOINT constant\n  !1  // ENDPOINT number and direction (bit 7=0 --> OUT)\n  !0x02 // Transfer type (0x02 --> BULK)\n  !64 !0 // Maximum packet size (0 à 1024); here: 64\n  !0  // Maximum latency / polling interval / NAK rate [ignored for bulk and control transfers]\n//--- Subordinate descriptor: ENDPOINT association\n  !7  // Endpoint descriptor size in bytes\n  !5  // ENDPOINT constant\n  !1 | 0x80  // ENDPOINT number and direction (bit 7=1 --> IN)\n  !0x02 // Transfer type (0x02 --> BULK)\n  !64 !0 // Maximum packet size (0 à 1024); here: 64\n  !0  // Maximulm latency / polling interval / NAK rate [ignored for bulk and control transfers]\n)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet NUM_ENDPOINTS = 4\n\n//······················································································································\n\nstruct $BDT @copyable {\n var desc $u32 = 0\n var addr $u32 = 0\n}\n\n\nlet BDT_OWN   = 0x80\nlet BDT_DATA1 = 0x40\nlet BDT_DATA0 = 0x00\nlet BDT_DTS   = 0x08\nlet BDT_STALL = 0x04\n//let BDT_PID(n) (((n) >> 2) & 15)\n\nlet EP0_RX_SIZE = 8\n\nfunc BDT_DESC safe section (\?count $u32 \?data $u1) -> $u32 {\n  result = BDT_OWN | BDT_DTS | (count << 16) | if data ≠ 0 {BDT_DATA1} else {BDT_DATA0}\n}\n\nlet TX   = 1\nlet RX   = 0\nlet ODD  = 1\nlet EVEN = 0\nlet DATA0 = 0\nlet DATA1 = 1\n\nfunc index safe section (\? endpoint $u32 \?tx $u32 \?odd $u32) -> $u32 {\n  result = (endpoint << 2) | (tx << 1) | odd\n}\n\nlet TRACE_SIZE = 10\n\n//······················································································································\n\ndriver usb_device > digital {\n// Descriptor table should be aligned on a 512 byte-boudary\n  var descriptorTable @align 512 = [(NUM_ENDPOINTS+1)*4 : $BDT] (!repeated: $BDT ())\n\n  var ep0_rx0_buf @align 4 = [EP0_RX_SIZE : $u8] (!repeated:0)\n  var ep0_rx1_buf @align 4 = [EP0_RX_SIZE : $u8] (!repeated:0)\n  var ep0_tx_bdt_bank $u32 = 0\n\n  var état = [TRACE_SIZE : $u4] (!repeated:0)\n  var indexÉtat $u32 = 0\n\n  public section lireÉtat (\?index $u32) -> $u32 {\n    result = extend (self.état [index])\n  }\n\n  var trace $u32 = 0\n\n  public section lireTrace () -> $u32 {\n    result = self.trace\n  }\n\n  public section lireAddresseUSB () -> $u32 {\n    result = extend (©USB0.ADDR)\n  }\n\n  //····················································································································\n\n  startup {\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L2)\n    digital.set (!mode:.output !toPort:LED_L3)\n    digital.set (!mode:.output !toPort:LED_L4)\n  // This basically follows the flowchart in the Kinetis Quick Reference User Guide, Rev. 3, 05/2014, page 134\n  //-- Assume 48 MHz clock already running\n    ©SIM.SCGC4 |= {©SIM.SCGC4 !USBOTG:1} // SIM - enable clock\n    ©MPU.RGDAAC [0] |= {©MPU.RGDAAC !M4RE:1 !M4WE:1}\n  //--- If using IRC48M, turn on the USB clock recovery hardware\n    if @static (F_CPU_MHZ == 180) || (F_CPU_MHZ == 216) {\n      ©USB0.CLK_RECOVER_IRC_EN = {©USB0.CLK_RECOVER_IRC_EN !IRC_EN:1 !REG_EN:1}\n      ©USB0.CLK_RECOVER_CTRL = {©USB0.CLK_RECOVER_CTRL !CLOCK_RECOVER_EN:1 !RESTART_IFRTRIM_EN:1}\n    }\n  //--- Reset USB module (SB0:USBTRC0:USBRESET is always read as 0. Wait 2 USB clock cycles after setting this bit)\n    ©USB0.USBTRC0 |= {©USB0.USBTRC0 !USBRESET:1} // Page 1516\n    while ©USB0.USBTRC0.USBRESET ≠ 0 {} // wait for reset to end\n  //-- Set descriptor table base address\n    let descriptorTableBaseAddress = addressof (self.descriptorTable)\n    ©USB0.BDTPAGE1 = descriptorTableBaseAddress [08...15]\n    ©USB0.BDTPAGE2 = descriptorTableBaseAddress [16...23]\n    ©USB0.BDTPAGE3 = descriptorTableBaseAddress [24...31]\n  //--- Clear all ISR flags\n    ©USB0.ISTAT = 0xFF\n    ©USB0.ERRSTAT = 0xFF\n    ©USB0.OTGISTAT = 0xFF\n    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1} // | 0x40\n  //-- Enable USB\n    ©USB0.CTL = {©USB0.CTL !USBENSOFEN:1}\n    ©USB0.USBCTRL = 0\n  //-- Enable reset interrupt\n    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1}\n  //-- Enable interrupt in NVIC\n    enable (!interrupt: .USBFS_OTG)\n  //--- Enable d+ pullup\n    ©USB0.CONTROL = {©USB0.CONTROL !DPPULLUPNONOTG:1} // Page 1515\n  }\n\n  //····················································································································\n\n  interrupt section USBFS_OTG {\n    let status = ©USB0.ISTAT\n\n  //-------------------- RESET: configure Endpoint 0\n    if (status & {©USB0.ISTAT !USBRST:1}) ≠ 0 {\n      self.trace |= 1\n//      self.état [self.indexÉtat] = 1\n//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n      self.configureEndPoint0OnReset ()\n  //    ©USB0.ISTAT = ©USB0.ISTAT !USBRST:1) // Ack\n    }else{\n    //-------------------- START OF FRAME\n      if (status & {©USB0.ISTAT !SOFTOK:1}) ≠ 0 {\n  //        self.état [self.indexÉtat] = 2\n  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        ©USB0.ISTAT = {©USB0.ISTAT !SOFTOK:1} // Ack\n      }\n\n    //-------------------- TOKEN COMPLETED\n      if (status & {©USB0.ISTAT !TOKDNE:1}) ≠ 0 { // Page 1502\n        self.trace |= 2\n  //        digital.write (!yes !toPort:LED_L2)\n  //        self.état [self.indexÉtat] = 3\n  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        self.tokenCompleted ()\n        ©USB0.ISTAT = {©USB0.ISTAT !TOKDNE:1} // Ack\n      }\n\n    //-------------------- STALL\n      if (status & {©USB0.ISTAT !STALL:1}) ≠ 0 {\n        self.état [self.indexÉtat] = 4\n        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        ©USB0.ISTAT = {©USB0.ISTAT !STALL:1} // Ack\n      }\n\n    //-------------------- ERROR\n      if (status & {©USB0.ISTAT !ERROR:1}) ≠ 0 {\n        self.état [self.indexÉtat] = 5\n        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        let err = ©USB0.ERRSTAT\n        ©USB0.ERRSTAT = err\n        ©USB0.ISTAT = {©USB0.ISTAT !ERROR:1} // Ack\n      }\n\n    //-------------------- SLEEP\n      if (status & {©USB0.ISTAT !SLEEP:1}) ≠ 0 {\n        self.état [self.indexÉtat] = 6\n        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n        ©USB0.ISTAT = {©USB0.ISTAT !SLEEP:1} // Ack\n      }\n    }\n  }\n\n  //····················································································································\n\n  func configureEndPoint0OnReset section @mutating () {\n//      self.état [self.indexÉtat] = 1\n//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n      ©USB0.CTL |= {©USB0.CTL !ODDRST:1}\n      self.ep0_tx_bdt_bank = 0\n   //--- Set up buffers to receive Setup and OUT packets\n      self.descriptorTable [index(!0 !RX !EVEN)].desc = BDT_DESC (!EP0_RX_SIZE  !0)\n      self.descriptorTable [index(!0 !RX !EVEN)].addr = addressof (self.ep0_rx0_buf)\n      self.descriptorTable [index(!0 !RX !ODD) ].desc = BDT_DESC (!EP0_RX_SIZE !0)\n      self.descriptorTable [index(!0 !RX !ODD) ].addr = addressof (self.ep0_rx1_buf)\n      self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n      self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n    //--- Activate endpoint 0\n      ©USB0.ENDPT [0] = {©USB0.ENDPT !EPRXEN:1 !EPTXEN:1 !EPHSHK:1}\n    //--- Clear all ending interrupts\n      ©USB0.ERRSTAT = 0xFF\n      ©USB0.ISTAT = 0xFF\n    //--- Set the address to zero during enumeration\n      ©USB0.ADDR = 0\n    //--- Enable other interrupts\n      ©USB0.ERREN = 0xFF\n      ©USB0.INTEN = {©USB0.INTEN !STALLEN:1 !SLEEPEN:1 !TOKDNEEN:1 !SOFTOKEN:1 !ERROREN:1 !USBRSTEN:1}\n    //--- is this necessary\?\n   //   ©USB0.CTL = ©USB0.CTL !USBENOFEN:1) // Page 1507\n  }\n\n  //····················································································································\n  // This means a transaction has completed, we receive this interrupt\n  // after data was transferred and the handshake has been completed:\n  //\n  //   host:TOK_IN    -> device:DATA ->   host:ACK/NAK -> $interrupt\n  //   host:TOK_OUT   ->   host:DATA -> device:ACK/NAK -> $interrupt\n  //   host:TOK_SETUP ->   host:DATA -> device:ACK/NAK -> $interrupt\n  //\n  // The handler can then process the received data or queue more\n  // data to be sent during the next transaction. When there is a\n  // TOK_IN transaction and no data has been placed in the TX buffer\n  // then the hardware will automatically send a NAK:\n  //\n  //   host:TOK_IN -> device:NAK -> NO $interrupt!\n  //\n  // There will be no interrupt in this case! This means as long\n  // as there is no data to be sent there will also be no TOK_IN\n  // calls to the handler anymore. Something else has to prepare\n  // a new TX buffer for that endpoint when data becomes available\n  // again, the handler will only be called AFTER the transmission!\n\n  func tokenCompleted section @mutating () {\n    let transactionStatus = ©USB0.STAT\n    let endPoint $u4 = transactionStatus [4...7]\n    let TX_transitionStatus = transactionStatus [3...3]\n    let ODD_transitionStatus = transactionStatus [2...2]\n    let index = index (!extend (endPoint) !extend (TX_transitionStatus) !extend (ODD_transitionStatus))\n   //--- Get TOK_PID\n     let TOK_PID = self.descriptorTable [index].desc [2...5]\n//     let TOK_PID = self.ep0_rx0_buf [0] [2...5]\n     self.trace |= (extend $u32 (TOK_PID)) << 8\n   //---\n     if TOK_PID == 0x09 { // IN_TOKEN: transfer device --> host\n     }else if TOK_PID == 0x01 { // OUT_TOKEN: transfer host --> device\n     }else if TOK_PID == 0x0D { // SETUP_TOKEN: transfer host --> device\n       let bmRequestType = self.ep0_rx0_buf [0]\n       self.trace |= (extend $u32 (bmRequestType)) << 12\n       if bmRequestType == 0 { // setup device\n         self.setupDevice ()\n       }else if bmRequestType == 1 { // setup interface\n\n       }else if bmRequestType == 2 { // setup end point\n\n       }\n       ©USB0.CTL = {©USB0.CTL !USBENSOFEN:1}\n     }\n   //---\n    if endPoint == 0 {\n      self.endpoint_0_handler (!transactionStatus: transactionStatus)\n    }else{\n\n    }\n//    let index = transactionStatus >> 2\n//    let pid = (self.descriptorTable [index].desc >> 2) & 15\n//    if pid == 0x0D { // Setup received from host\n//      self.usb_setup ()\n//    //--- Unfreeze the USB, now that we're ready\n//      ©USB0.CTL) = ©USB0.CTL !USBENOFEN:1) // clear TXSUSPENDTOKENBUSY bit\n//    }else if pid == 0x09 { // IN transaction completed to host\n//    }else if (pid == 0x01) || (pid == 0x02) { // OUT transaction received from host\n//\n//    }\n\n//    if endPoint == 0 {\n//      self.configure\n//    }else{\n//\n//    }\n  }\n\n  //····················································································································\n\n  func setupDevice section @mutating () {\n    self.trace |= 8\n    let bRequest = self.ep0_rx0_buf [1]\n    if bRequest == 6 { // mGET_DESC\n\n    }else if bRequest == 5 { // mSET_ADDRESS\n\n    }else if bRequest == 9 { // mSET_CONFIG\n\n    }\n  }\n\n  //····················································································································\n\n  func endpoint_0_handler section @mutating (\?transactionStatus: _ $u8) {\n    self.trace |= 4\n  }\n\n  //····················································································································\n\n//  func section usb_setup @mutating () {\n//  //---\n//    let index $u32 = 0\n//    self.descriptorTable [index].desc = BDT_DESC (!EP0_SIZE !DATA1)\n//    self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n//    self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n//  //--- Grab the 8 byte setup info\n//    let bmRequestType = self.ep0_rx0_buf [0] & 0x1F\n//    let bRequest = self.ep0_rx0_buf [1]\n//    if bmRequestType == 0 { // Setup device\n//      digital.write (!yes !toPort:LED_L2)\n//      self.usb_setup_device (!bRequest)\n//    }else if bmRequestType == 1 { // Setup interface\n//      digital.write (!yes !toPort:LED_L3)\n//\n//    }else if bmRequestType == 2 { // Setup endpoint\n//      digital.write (!yes !toPort:LED_L4)\n//\n//    }\n//////    let wValue  = {UInt16 !8:self.ep0_rx0_buf [3] !8:self.ep0_rx0_buf [2]}\n//////    let wIndex  = {UInt16 !8:self.ep0_rx0_buf [5] !8:self.ep0_rx0_buf [4]}\n//////    let wLength = {UInt16 !8:self.ep0_rx0_buf [7] !8:self.ep0_rx0_buf [6]}\n////  //--- Build uint16 requestAndType\n////    let requestAndType = {UInt16 !8:bRequest !8:bmRequestType}\n////  //---\n////    if requestAndType == 0x0500 { // Set address, nothing to do\n////        digital.write (!yes !toPort:LED_L2)\n////    }else if requestAndType == 0x0900 { // Set configuration\n////        digital.write (!yes !toPort:LED_L1)\n////\n////\n////    }else if requestAndType == 0x0880 { // Get configuration\n////    }else if requestAndType == 0x0080 { // Get status (device)\n////    }else if requestAndType == 0x0082 { // Get status (endpoint)\n////    }else if requestAndType == 0x0102 { // Clear feature (device)\n////    }else if requestAndType == 0x0302 { // Clear feature (endpoint)\n////    }else if (requestAndType == 0x0680) || (requestAndType == 0x0681) { // Get descriptor\n////        digital.write (!yes !toPort:LED_L3)\n////    }\n//  }\n//\n////#define mGET_STATUS           0\n////#define mCLR_FEATURE          1\n////#define mSET_FEATURE          3\n////#define mSET_ADDRESS          5\n////#define mGET_DESC             6\n////#define mSET_DESC             7\n////#define mGET_CONFIG           8\n////#define mSET_CONFIG           9\n////#define mGET_INTF             10\n////#define mSET_INTF             11\n////#define mSYNC_FRAME           12\n//\n//  func section usb_setup_device @mutating (\?bRequest $u8) {\n//    self.trace = extend (bRequest)\n////    const usb_descriptor_list_t *p;\n////    int len;\n////\n////    switch (setup->bRequest) {\n////        case mGET_DESC:\n////            p = usb_descriptor_list;                    // Find entry in table\n////            while(p->wValue) {\n////                if(p->wValue == setup->wValue) {\n////                    if(p->length == 0)\n////                        len = p->addr[0];               // Use structure length\n////                    else\n////                        len = p->length;\n////\n////                    iprintf(\"sending 0x%04x %d\\r\\n\",setup->wValue, len);\n////                    usb_queue_tx(ep, p->addr, min(len, setup->wLength));\n////                    return;\n////                }\n////                p++;\n////            }\n////            iprintf(\"NOT IMPLEMENTED! 0x%04x\\r\\n\", setup->wValue);\n////            break;\n////\n////        case mSET_ADDRESS:\n////            device_state = ADDRESS;\n////            device_address = setup->wValue & 0x7f;\n////            usb_tx(ep,0,0);                         // Send handshake\n////            break;\n////\n////        case mSET_CONFIG:\n////            iprintf(\"setconfig: %d\\r\\n\", setup->wValue);\n////            device_state = ENUMERATED;\n////            usb_set_config(setup->wValue);\n////            usb_tx(ep,0,0);                         // Send handshake\n////            break;\n////\n////        default:\n////            iprintf(\"NOT IMPLEMENTED! %d\\r\\n\", setup->bRequest);\n////            break;\n////      }\n//  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver usb_device ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n// TASK\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T @stacksize 512 @autostart {\n  var tick $u32 = 0\n  var état $u32 = 0\n\n  //····················································································································\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L0)\n  }\n\n  //····················································································································\n\n  while event time.wait (!until:self.tick) {\n    digital.toggle (!port:LED_L0)\n    self.tick +%= 500\n    lcd.goto (!line:0 !column:0)\n    for i $u32 in 0 ..< TRACE_SIZE {\n      let e = usb_device.lireÉtat (!i)\n      lcd.print (!hex2:e)\n    }\n    lcd.goto (!line:1 !column:0)\n    lcd.print (!hex8:usb_device.lireAddresseUSB ())\n    lcd.goto (!line:2 !column:0)\n    lcd.print (!hex8:usb_device.lireTrace ())\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_22_embeddedSampleCode (
  "13-usb-device.omnibus",
  "omnibus",
  true, // Text file
  20317, // Text length
  gWrapperFileContent_22_embeddedSampleCode
) ;

//--- File 'teensy-3-6/14-task-activation-duration-64-bit-timer.omnibus'

const char * gWrapperFileContent_16_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 240\nlet @display BUS_MHZ2 = BUS_MHZ\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\ndriver timer ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver timer > root {\n  var tick = $u64 ()\n\n  startup {\n  //--- Power on PIT\n    ©SIM.SCGC6 |= {©SIM.SCGC6 !PIT:1}\n   //--- Enable PIT module\n    ©PIT.MCR = 0\n  //--- Disable PIT0 and PIT1\n    ©PIT.TCTRL [0] = 0\n    ©PIT.TCTRL [1] = 0\n  //--- PIT0 clock frequency is BUS_MHZ (in MHz)\n    ©PIT.LDVAL [0] = $u32.max\n    ©PIT.LDVAL [1] = $u32.max\n  //--- Enable PIT0 and PIT1 : start counting, no interrupt\n    ©PIT.TCTRL [1] = {©PIT.TCTRL !CHN:1 !TEN:1}\n    ©PIT.TCTRL [0] = {©PIT.TCTRL !TEN:1}\n  }\n\n  public section setTick () {\n    self.tick = self.now ()\n  }\n\n  public section getTick () -> $u64 {\n    result = self.tick\n  }\n\n  public section now () -> $u64 {\n    result = extend (©PIT.LTMR64H)\n    result <<= 32\n    result |= extend (©PIT.LTMR64L)\n    result = ~ result\n    result +%= 1\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nsync s = $Semaphore (!value:0)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche0 @stacksize 512 @autostart {\n  var compteur $u32 = 0\n\n  event @onSetup first {\n    s.wait ()\n    let duration = ((timer.now () - timer.getTick ()) * 1000) / BUS_MHZ\n    lcd.print (!u64:duration)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche1 @stacksize 512 @autostart {\n\n  event @onSetup first {\n    timer.setTick ()\n    s.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_16_embeddedSampleCode (
  "14-task-activation-duration-64-bit-timer.omnibus",
  "omnibus",
  true, // Text file
  1900, // Text length
  gWrapperFileContent_16_embeddedSampleCode
) ;

//--- File 'teensy-3-6/15-task-activation-duration-systick.omnibus'

const char * gWrapperFileContent_28_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\ndriver myDriver ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//\ndriver myDriver > time {\n  var tick $u32 = 0\n\n  public section noteTick () {\n    self.tick = ©SYST.CVR\n  }\n\n  public section getDuration () -> $u32 {\n    result = self.tick - ©SYST.CVR\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nsync s = $Semaphore (!value:0)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask TâcheA > TâcheB @stacksize 512 @autostart {\n\n  event @onSetup first {\n    s.wait ()\n    let duration = myDriver.getDuration ()\n    lcd.print (!u32:duration)\n    lcd.goto (!line:1 !column:0)\n    lcd.print (!hex8: currentStackPointer ())\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask TâcheB @stacksize 512 @autostart {\n\n  event @onSetup first {\n    myDriver.noteTick ()\n    s.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_28_embeddedSampleCode (
  "15-task-activation-duration-systick.omnibus",
  "omnibus",
  true, // Text file
  1309, // Text length
  gWrapperFileContent_28_embeddedSampleCode
) ;

//--- File 'teensy-3-6/16-clock-out-pin.omnibus'

const char * gWrapperFileContent_31_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n// Le champ CLKOUTSEL de SIM_SOPT2 permet de sélectionner le signal qui sera sorti :\n// 000  FlexBus CLKOUT : signal faible…\n// 001  Reserved\n// 010  Flash clock : signal faible…\n// 011  LPO clock (1 kHz) : testé ok\n// 100  MCGIRCLK : pas de signal \?\n// 101  RTC 32.768kHz clock : testé ok\n// 110  OSCERCLK0 : pas de signal \?\n// 111  IRC 48 MHz clock : attention, cette horloge n'est pas toujours activée\n// Il y a deux possibilités d'association à un port :\n//  - PTA6, ALT 5 : inaccessible sur la Teensy 3.6\n//  - PTC3, ALT 5 : PORT #9 sur le Teensy 3.6\n\ndriver myDriver > digital {\n  startup {\n    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n    ©SIM.SOPT2 |= {©SIM.SOPT2 !CLKOUTSEL:3}\n    ©PORTC.PCR [3] = {©PORTC.PCR !MUX:5}\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_31_embeddedSampleCode (
  "16-clock-out-pin.omnibus",
  "omnibus",
  true, // Text file
  1224, // Text length
  gWrapperFileContent_31_embeddedSampleCode
) ;

//--- File 'teensy-3-6/17-flextimer-as-pwm.omnibus'

const char * gWrapperFileContent_34_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 24\n//let myBUS_MHZ @display = BUS_MHZ\n//let myFLEXBUS_MHZ @display = FLEXBUS_MHZ\n//let myFLASH_KHZ @display = FLASH_KHZ\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver > digital {\n\n  //····················································································································\n  //--- Clock source is set by the CLKS field of FTM0:SC :\n  //   00  No clock selected. This in effect disables the FTM counter. \n  //   01  System clock, frequency given by BUS_MHZ\n  //   10  Fixed frequency clock, is MCGFFCLK \?\?\?\?\?\n  //   11  External clock \n  //--- Clock prescaler is set by the PS field of FTM0:SC :\n  //   000  Divide by 1 \n  //   001  Divide by 2 \n  //   010  Divide by 4 \n  //   011  Divide by 8 \n  //   100  Divide by 16 \n  //   101  Divide by 32 \n  //   110  Divide by 64 \n  //   111  Divide by 128\n  //  The overflow frequency is : BUS_MHZ / (prescaler * (FTM0:MOD - FTM0:CNTIN + 1))\n  //---- Examples for BUS_MHZ = 60 MHz (F_CPU_MHZ = 240)\n  //    prescaler   FTM0:CNTIN   FTM0:MOD   Resulting frequency\n  //      /16                0     0xFFFF   57,22 Hz\n  //      /1                 0         14   4 MHz\n  //····················································································································\n\n  startup {\n    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n    digital.set (!mode:.output !toPort:.D3) // Led L0\n    digital.set (!mode:.output !toPort:.D8) // Led L0\n  //--- Enable clock\n    ©SIM.SCGC6 |= {©SIM.SCGC6 !FTM0:1}\n  //--- Set counter min value\n    ©FTM[0].CNTIN = {©FTM.CNTIN !INIT:0}\n  //--- Set counter max value\n    ©FTM[0].MOD = {©FTM.MOD !MOD:0xFFFF}\n  //--- Set prescaler\n    ©FTM[0].SC = {©FTM.SC !CLKS:1 !PS:4}\n  //--- Enable NVIC interrupt\n    enable (!interrupt:.FTM0)\n  //--- Enable FTM interrupt\n    ©FTM[0].SC |= {©FTM.SC !TOIE:1}\n  }\n\n  //····················································································································\n\n  interrupt section FTM0 {\n  //--- Set by hardware when the FTM counter passes the value in the MOD register.\n  //    The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit\n    ©FTM[0].SC &= ~ {©FTM.SC !TOF:1}\n    digital.toggle (!port:.D3)\n    digital.toggle (!port:.D8)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_34_embeddedSampleCode (
  "17-flextimer-as-pwm.omnibus",
  "omnibus",
  true, // Text file
  2720, // Text length
  gWrapperFileContent_34_embeddedSampleCode
) ;

//--- File 'teensy-3-6/18-flextimer-external-clock.omnibus'

const char * gWrapperFileContent_41_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver > digital {\n\n  //····················································································································\n  //--- Two external clocks are available for the Flexi timers : FTM_CLKIN0 and FTM_CKLIN1\n  //  Input ports for FTM_CLKIN0\n  //    PTA18 ALT 4: not available, used by 16 MHz quartz\n  //    PTB16 ALT 4: pin #0\n  //    PTC12 ALT 4: not available on Teensy\n  //  Input ports for FTM_CLKIN1\n  //    PTA19 ALT 4: not available, used by 16 MHz quartz\n  //    PTB17 ALT 4: pin #1\n  //    PTC13 ALT 4: not available on Teensy\n  //  For selecting external clock for FTM: CLKS field of FTM0:SC set to 3.\n  //  The FTMiCLKSEL fields of the SIM:SOPT4 register select FTM_CLKIN0 or FTM_CKLIN1 :\n  //    0 for FTM_CLKIN0\n  //    1 for FTM_CLKIN0\n  //····················································································································\n\n  startup {\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n  //--- Enable clock\n    ©SIM.SCGC6 |= {©SIM.SCGC6 !FTM0:1 !FTM1:1}\n    ©SIM.SOPT4 = 0 // |= ©SIM.SOPT4 !FTM1CLKSEL:1)\n  //-- Configure PTB16 as FTM_CLKIN0 (with pullup)\n//    ©PORTB.PCR[16] = ©PORTB.PCR !MUX:4 !PE:1 !PS:1)\n    ©PORTB.PCR[17] = {©PORTB.PCR !MUX:4 !PE:1 !PS:1}\n  //--- Set counter min value\n//    ©FTM[1].CONF = ©FTM.CONF !NUMTOF:31)\n    ©FTM[0].MODE = 0x05\n    ©FTM[0].SC = 0\n    ©FTM[0].CNTIN = {©FTM.CNTIN !INIT:0}\n    ©FTM[0].CNT = {©FTM.CNT !COUNT:0}\n    ©FTM[0].MOD = {©FTM.MOD !MOD:1}\n    ©FTM[0].C0SC = 0x14\n    ©PORTB.PCR[16] = {©PORTB.PCR !MUX:4 !PE:1 !PS:1}\n    ©FTM[0].C0V = 0\n    ©FTM[0].SC = 0x58\n\n//    ©FTM[0].CNTIN = ©FTM.CNTIN !INIT:0)\n    ©FTM[1].CNTIN = {©FTM.CNTIN !INIT:0}\n  //--- Set counter current value\n//    ©FTM[0].CNT = ©FTM.CNT !COUNT:0)\n    ©FTM[1].CNT = {©FTM.CNT !COUNT:0}\n  //--- Set counter max value\n//    ©FTM[0].MOD = ©FTM.MOD !MOD:1)\n    ©FTM[1].MOD = {©FTM.MOD !MOD:0xFFFF}\n\n//    ©FTM[0].CONF = ©FTM.CONF !BDMMODE:3)\n//    ©FTM[1].CONF = ©FTM.CONF !BDMMODE:3)\n//    ©FTM[0].MODE = ©FTM.MODE !FTMEN:1)\n//    ©FTM[1].MODE- = ©FTM.MODE !FTMEN:1)\n  //--- Set prescaler (0 -> divide by 1) and clock source (3 --> external source)\n//    ©FTM[0].C0V = 0  //compare value = 0\n//    ©FTM[0].SC = ©FTM.SC !CLKS:3 !PS:0)\n    ©FTM[1].SC = {©FTM.SC !CLKS:1 !PS:6}\n  //--- Enable NVIC interrupt\n    enable (!interrupt:.FTM0)\n  //--- Enable FTM interrupt\n//    ©FTM[0].SC |= ©FTM.SC !TOIE:1)\n  //--- Enable NVIC interrupt\n    enable (!interrupt:.FTM1)\n  //--- Enable FTM interrupt\n    ©FTM[1].SC |= {©FTM.SC !TOIE:1}\n  }\n\n  //····················································································································\n\n   section readCounter0 () -> $u32 {\n    result = ©FTM[0].CNT\n  }\n  //····················································································································\n\n   section readCounter1 () -> $u32 {\n    result = ©FTM[1].CNT\n  }\n\n  //····················································································································\n\n  interrupt section FTM0 {\n  //--- Set by hardware when the FTM counter passes the value in the MOD register.\n  //    The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit\n    ©FTM[0].SC &= ~ {©FTM.SC !TOF:1}\n    digital.toggle (!port:LED_L0)\n  }\n  //····················································································································\n\n  interrupt section FTM1 {\n  //--- Set by hardware when the FTM counter passes the value in the MOD register.\n  //    The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit\n    ©FTM[1].SC &= ~ {©FTM.SC !TOF:1}\n    digital.toggle (!port:LED_L1)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T1 @stacksize 512 @autostart {\n  var échéance $u32 = 0\n  var counter0 $u32 = 0\n  var counter1 $u32 = 0\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L3)\n    lcd.print (!string:\"FTM0:\")\n    lcd.goto (!line:1 !column:0)\n    lcd.print (!string:\"FTM1:\")\n  }\n\n  while event time.wait (!until:self.échéance) {\n    self.échéance +%= 1_000\n    digital.toggle (!port:LED_L3)\n    let counter0 = myDriver.readCounter0 ()\n    if self.counter0 ≠ counter0 {\n      self.counter0 = counter0\n      lcd.goto (!line:0 !column:6)\n      lcd.print (!u32:counter0)\n    }\n    let counter1 = myDriver.readCounter1 ()\n    if self.counter1 ≠ counter1 {\n      self.counter1 = counter1\n      lcd.goto (!line:1 !column:6)\n      lcd.print (!u32:counter1)\n    }\n  }\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_41_embeddedSampleCode (
  "18-flextimer-external-clock.omnibus",
  "omnibus",
  true, // Text file
  5148, // Text length
  gWrapperFileContent_41_embeddedSampleCode
) ;

//--- File 'teensy-3-6/19-external-interrupt.omnibus'

const char * gWrapperFileContent_32_embeddedSampleCode = "target \"teensy-3-6/xtr64\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver > digital {\n\n  //····················································································································\n  //--- LED_L0 is port #3: PTA12\n  //    PORTA_PCR12 is configured to generate an interrupt on falling edge\n  // So: when LED_L0 is swichted off, LED_L1 toggles\n  //--- Port #12 is PTC7\n  //    PORTC_PCR7 is configured to generate an interrupt on falling edge\n  // So: when push button P4 is pressed, LED_L4 toggles\n  //····················································································································\n\n  startup {\n    digital.set (!mode:.output !toPort:LED_L0)\n    digital.set (!mode:.output !toPort:LED_L1)\n    digital.set (!mode:.output !toPort:LED_L4)\n    digital.set (!mode:.inputPullUp !toPort:BUTTON_P4)\n  //--- Generate an interrupt on falling edge of port #3 (PTA12)\n    ©PORTA.PCR[12] |= {©PORTA.PCR !IRQC:0xA}\n  //--- Enable NVIC interrupt\n    enable (!interrupt:.pinDetectPortA)\n  //--- Enable NVIC interrupt\n    enable (!interrupt:.pinDetectPortA)\n  //--- Digital filters are clocked by the LPO clock\n    ©PORTC.DFCR = 1\n  //--- Setr digital filter length\n    ©PORTC.DFWR = 31\n  //--- Enable digital filter ou PTC7\n    ©PORTC.DFER = 1 << 7\n  //--- Generate an interrupt on falling edge of port #12 (PTC7)\n    ©PORTC.PCR[7] |= {©PORTC.PCR !IRQC:0xA}\n  //--- Enable NVIC interrupt\n    enable (!interrupt:.pinDetectPortC)\n  //--- Enable NVIC interrupt\n    enable (!interrupt:.pinDetectPortC)\n  }\n\n  //····················································································································\n\n  interrupt section pinDetectPortA {\n  //--- Acknowledge interrupt (several ways to do)\n //   #PORTA:PCR[12 |= ©PORTA.PCR !ISF:1) // Setting bit ISF clears interrupt\n    ©PORTA.PCR[12] @bit 24 = 1 // The same, using bit banding\n //   ©PORTA.ISFR = 1 << 12 // Setting bit 12 clears interrupt\n  //--- Toggle LED_L1\n    digital.toggle (!port:LED_L1)\n  }\n\n  //····················································································································\n\n  interrupt section pinDetectPortC {\n  //--- Acknowledge interrupt (several ways to do)\n //   ©PORTC.PCR[7] |= ©PORTC.PCR !ISF:1) // Setting bit ISF clears interrupt\n    ©PORTC.PCR[7] @bit 24 = 1 // The same, using bit banding\n //   ©PORTC.ISFR = 1 << 7 // Setting bit 7 clears interrupt\n  //--- Toggle LED_L4\n    digital.toggle (!port:LED_L4)\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T1 @stacksize 512 @autostart {\n  var échéance $u32 = 0\n\n  while event time.wait (!until:self.échéance) {\n    self.échéance +%= 1_000\n    digital.toggle (!port:LED_L0)\n  }\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_32_embeddedSampleCode (
  "19-external-interrupt.omnibus",
  "omnibus",
  true, // Text file
  3341, // Text length
  gWrapperFileContent_32_embeddedSampleCode
) ;

//--- File 'teensy-3-6/20-round-robin-32-tasks.omnibus'

const char * gWrapperFileContent_25_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver > digital {\n\n  //····················································································································\n  //--- LED_L0 is port #3: PTA12\n  //    PORTA_PCR12 is configured to generate an interrupt on falling edge\n  // So: when LED_L0 is swichted off, LED_L1 toggles\n  //--- Port #12 is PTC7\n  //    PORTC_PCR7 is configured to generate an interrupt on falling edge\n  // So: when push button P4 is pressed, LED_L4 toggles\n  //····················································································································\n\n  startup {\n    digital.set (!mode:.output !toPort:LED_L0)\n  }\n\n  var tick = $u32 ()\n\n  public section noteTick () {\n    self.tick = ©SYST.CVR\n  }\n\n  public section getDuration () -> $u32 {\n    result = self.tick - ©SYST.CVR\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nsync sémaphore0 = $Semaphore (!value:0)\nsync sémaphore1 = $Semaphore (!value:0)\nsync sémaphore2 = $Semaphore (!value:0)\nsync sémaphore3 = $Semaphore (!value:0)\nsync sémaphore4 = $Semaphore (!value:0)\nsync sémaphore5 = $Semaphore (!value:0)\nsync sémaphore6 = $Semaphore (!value:0)\nsync sémaphore7 = $Semaphore (!value:0)\nsync sémaphore8 = $Semaphore (!value:0)\nsync sémaphore9 = $Semaphore (!value:0)\nsync sémaphore10 = $Semaphore (!value:0)\nsync sémaphore11 = $Semaphore (!value:0)\nsync sémaphore12 = $Semaphore (!value:0)\nsync sémaphore13 = $Semaphore (!value:0)\nsync sémaphore14 = $Semaphore (!value:0)\nsync sémaphore15 = $Semaphore (!value:0)\nsync sémaphore16 = $Semaphore (!value:0)\nsync sémaphore17 = $Semaphore (!value:0)\nsync sémaphore18 = $Semaphore (!value:0)\nsync sémaphore19 = $Semaphore (!value:0)\nsync sémaphore20 = $Semaphore (!value:0)\nsync sémaphore21 = $Semaphore (!value:0)\nsync sémaphore22 = $Semaphore (!value:0)\nsync sémaphore23 = $Semaphore (!value:0)\nsync sémaphore24 = $Semaphore (!value:0)\nsync sémaphore25 = $Semaphore (!value:0)\nsync sémaphore26 = $Semaphore (!value:0)\nsync sémaphore27 = $Semaphore (!value:0)\nsync sémaphore28 = $Semaphore (!value:0)\nsync sémaphore29 = $Semaphore (!value:0)\nsync sémaphore30 = $Semaphore (!value:0)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T0 @stacksize 512 @autostart {\n  var échéance $u32 = 0\n\n  while event time.wait (!until:self.échéance) {\n    self.échéance +%= 500\n    myDriver.noteTick ()\n    sémaphore0.signal ()\n  }\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T1 @stacksize 512 @autostart {\n  while event sémaphore0.wait () {\n    sémaphore1.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T2 @stacksize 512 @autostart {\n  while event sémaphore1.wait () {\n    sémaphore2.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T3 @stacksize 512 @autostart {\n  while event sémaphore2.wait () {\n    sémaphore3.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T4 @stacksize 512 @autostart {\n  while event sémaphore3.wait () {\n    sémaphore4.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T5 @stacksize 512 @autostart {\n  while event sémaphore4.wait () {\n    sémaphore5.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T6 @stacksize 512 @autostart {\n  while event sémaphore5.wait () {\n    sémaphore6.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T7 @stacksize 512 @autostart {\n  while event sémaphore6.wait () {\n    sémaphore7.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T8 @stacksize 512 @autostart {\n  while event sémaphore7.wait () {\n    sémaphore8.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T9 @stacksize 512 @autostart {\n  while event sémaphore8.wait () {\n    sémaphore10.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T10 @stacksize 512 @autostart {\n  while event sémaphore9.wait () {\n    sémaphore10.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T11 @stacksize 512 @autostart {\n  while event sémaphore10.wait () {\n    sémaphore11.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T12 @stacksize 512 @autostart {\n  while event sémaphore11.wait () {\n    sémaphore12.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T13 @stacksize 512 @autostart {\n  while event sémaphore12.wait () {\n    sémaphore13.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T14 @stacksize 512 @autostart {\n  while event sémaphore13.wait () {\n    sémaphore14.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T15 @stacksize 512 @autostart {\n  while event sémaphore14.wait () {\n    sémaphore15.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T16 @stacksize 512 @autostart {\n  while event sémaphore15.wait () {\n    sémaphore16.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T17 @stacksize 512 @autostart {\n  while event sémaphore16.wait () {\n    sémaphore17.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T18 @stacksize 512 @autostart {\n  while event sémaphore17.wait () {\n    sémaphore18.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T19 @stacksize 512 @autostart {\n  while event sémaphore18.wait () {\n    sémaphore19.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T20 @stacksize 512 @autostart {\n  while event sémaphore19.wait () {\n    sémaphore20.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T21 @stacksize 512 @autostart {\n  while event sémaphore20.wait () {\n    sémaphore21.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T22 @stacksize 512 @autostart {\n  while event sémaphore21.wait () {\n    sémaphore22.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T23 @stacksize 512 @autostart {\n  while event sémaphore22.wait () {\n    sémaphore23.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T24 @stacksize 512 @autostart {\n  while event sémaphore23.wait () {\n    sémaphore24.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T25 @stacksize 512 @autostart {\n  while event sémaphore24.wait () {\n    sémaphore25.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T26 @stacksize 512 @autostart {\n  while event sémaphore25.wait () {\n    sémaphore26.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T27 @stacksize 512 @autostart {\n  while event sémaphore26.wait () {\n    sémaphore27.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T28 @stacksize 512 @autostart {\n  while event sémaphore27.wait () {\n    sémaphore28.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T29 @stacksize 512 @autostart {\n  while event sémaphore28.wait () {\n    sémaphore29.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T30 @stacksize 512 @autostart {\n  while event sémaphore29.wait () {\n    sémaphore30.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T31 @stacksize 512 @autostart {\n  while event sémaphore30.wait () {\n    let duration = myDriver.getDuration ()\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32:duration)\n    digital.toggle (!port:LED_L0)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_25_embeddedSampleCode (
  "20-round-robin-32-tasks.omnibus",
  "omnibus",
  true, // Text file
  10275, // Text length
  gWrapperFileContent_25_embeddedSampleCode
) ;

//--- File 'teensy-3-6/21-round-robin-64-tasks.omnibus'

const char * gWrapperFileContent_18_embeddedSampleCode = "target \"teensy-3-6/xtr64\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver > digital {\n\n  startup {\n    digital.set (!mode:.output !toPort:LED_L0)\n  }\n\n  var tick = $u32 ()\n\n  public section noteTick () {\n    self.tick = ©SYST.CVR\n  }\n\n  public section getDuration () -> $u32 {\n    result = self.tick - ©SYST.CVR\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver myDriver ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nsync sémaphore0 = $Semaphore (!value:0)\nsync sémaphore1 = $Semaphore (!value:0)\nsync sémaphore2 = $Semaphore (!value:0)\nsync sémaphore3 = $Semaphore (!value:0)\nsync sémaphore4 = $Semaphore (!value:0)\nsync sémaphore5 = $Semaphore (!value:0)\nsync sémaphore6 = $Semaphore (!value:0)\nsync sémaphore7 = $Semaphore (!value:0)\nsync sémaphore8 = $Semaphore (!value:0)\nsync sémaphore9 = $Semaphore (!value:0)\nsync sémaphore10 = $Semaphore (!value:0)\nsync sémaphore11 = $Semaphore (!value:0)\nsync sémaphore12 = $Semaphore (!value:0)\nsync sémaphore13 = $Semaphore (!value:0)\nsync sémaphore14 = $Semaphore (!value:0)\nsync sémaphore15 = $Semaphore (!value:0)\nsync sémaphore16 = $Semaphore (!value:0)\nsync sémaphore17 = $Semaphore (!value:0)\nsync sémaphore18 = $Semaphore (!value:0)\nsync sémaphore19 = $Semaphore (!value:0)\nsync sémaphore20 = $Semaphore (!value:0)\nsync sémaphore21 = $Semaphore (!value:0)\nsync sémaphore22 = $Semaphore (!value:0)\nsync sémaphore23 = $Semaphore (!value:0)\nsync sémaphore24 = $Semaphore (!value:0)\nsync sémaphore25 = $Semaphore (!value:0)\nsync sémaphore26 = $Semaphore (!value:0)\nsync sémaphore27 = $Semaphore (!value:0)\nsync sémaphore28 = $Semaphore (!value:0)\nsync sémaphore29 = $Semaphore (!value:0)\nsync sémaphore30 = $Semaphore (!value:0)\nsync sémaphore31 = $Semaphore (!value:0)\nsync sémaphore32 = $Semaphore (!value:0)\nsync sémaphore33 = $Semaphore (!value:0)\nsync sémaphore34 = $Semaphore (!value:0)\nsync sémaphore35 = $Semaphore (!value:0)\nsync sémaphore36 = $Semaphore (!value:0)\nsync sémaphore37 = $Semaphore (!value:0)\nsync sémaphore38 = $Semaphore (!value:0)\nsync sémaphore39 = $Semaphore (!value:0)\nsync sémaphore40 = $Semaphore (!value:0)\nsync sémaphore41 = $Semaphore (!value:0)\nsync sémaphore42 = $Semaphore (!value:0)\nsync sémaphore43 = $Semaphore (!value:0)\nsync sémaphore44 = $Semaphore (!value:0)\nsync sémaphore45 = $Semaphore (!value:0)\nsync sémaphore46 = $Semaphore (!value:0)\nsync sémaphore47 = $Semaphore (!value:0)\nsync sémaphore48 = $Semaphore (!value:0)\nsync sémaphore49 = $Semaphore (!value:0)\nsync sémaphore50 = $Semaphore (!value:0)\nsync sémaphore51 = $Semaphore (!value:0)\nsync sémaphore52 = $Semaphore (!value:0)\nsync sémaphore53 = $Semaphore (!value:0)\nsync sémaphore54 = $Semaphore (!value:0)\nsync sémaphore55 = $Semaphore (!value:0)\nsync sémaphore56 = $Semaphore (!value:0)\nsync sémaphore57 = $Semaphore (!value:0)\nsync sémaphore58 = $Semaphore (!value:0)\nsync sémaphore59 = $Semaphore (!value:0)\nsync sémaphore60 = $Semaphore (!value:0)\nsync sémaphore61 = $Semaphore (!value:0)\nsync sémaphore62 = $Semaphore (!value:0)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T0 @stacksize 512 @autostart {\n  var échéance $u32 = 0\n\n  while event time.wait (!until:self.échéance) {\n    self.échéance +%= 500\n    myDriver.noteTick ()\n    sémaphore0.signal ()\n  }\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T1 @stacksize 512 @autostart {\n  while event sémaphore0.wait () {\n    sémaphore1.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T2 @stacksize 512 @autostart {\n  while event sémaphore1.wait () {\n    sémaphore2.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T3 @stacksize 512 @autostart {\n  while event sémaphore2.wait () {\n    sémaphore3.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T4 @stacksize 512 @autostart {\n  while event sémaphore3.wait () {\n    sémaphore4.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T5 @stacksize 512 @autostart {\n  while event sémaphore4.wait () {\n    sémaphore5.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T6 @stacksize 512 @autostart {\n  while event sémaphore5.wait () {\n    sémaphore6.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T7 @stacksize 512 @autostart {\n  while event sémaphore6.wait () {\n    sémaphore7.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T8 @stacksize 512 @autostart {\n  while event sémaphore7.wait () {\n    sémaphore8.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T9 @stacksize 512 @autostart {\n  while event sémaphore8.wait () {\n    sémaphore9.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T10 @stacksize 512 @autostart {\n  while event sémaphore9.wait () {\n    sémaphore10.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T11 @stacksize 512 @autostart {\n  while event sémaphore10.wait () {\n    sémaphore11.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T12 @stacksize 512 @autostart {\n  while event sémaphore11.wait () {\n    sémaphore12.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T13 @stacksize 512 @autostart {\n  while event sémaphore12.wait () {\n    sémaphore13.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T14 @stacksize 512 @autostart {\n  while event sémaphore13.wait () {\n    sémaphore14.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T15 @stacksize 512 @autostart {\n  while event sémaphore14.wait () {\n    sémaphore15.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T16 @stacksize 512 @autostart {\n  while event sémaphore15.wait () {\n    sémaphore16.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T17 @stacksize 512 @autostart {\n  while event sémaphore16.wait () {\n    sémaphore17.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T18 @stacksize 512 @autostart {\n  while event sémaphore17.wait () {\n    sémaphore18.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T19 @stacksize 512 @autostart {\n  while event sémaphore18.wait () {\n    sémaphore19.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T20 @stacksize 512 @autostart {\n  while event sémaphore19.wait () {\n    sémaphore20.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T21 @stacksize 512 @autostart {\n  while event sémaphore20.wait () {\n    sémaphore21.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T22 @stacksize 512 @autostart {\n  while event sémaphore21.wait () {\n    sémaphore22.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T23 @stacksize 512 @autostart {\n  while event sémaphore22.wait () {\n    sémaphore23.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T24 @stacksize 512 @autostart {\n  while event sémaphore23.wait () {\n    sémaphore24.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T25 @stacksize 512 @autostart {\n  while event sémaphore24.wait () {\n    sémaphore25.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T26 @stacksize 512 @autostart {\n  while event sémaphore25.wait () {\n    sémaphore26.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T27 @stacksize 512 @autostart {\n  while event sémaphore26.wait () {\n    sémaphore27.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T28 @stacksize 512 @autostart {\n  while event sémaphore27.wait () {\n    sémaphore28.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T29 @stacksize 512 @autostart {\n  while event sémaphore28.wait () {\n    sémaphore29.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T30 @stacksize 512 @autostart {\n  while event sémaphore29.wait () {\n    sémaphore30.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T31 @stacksize 512 @autostart {\n  while event sémaphore30.wait () {\n    sémaphore31.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T32 @stacksize 512 @autostart {\n  while event sémaphore31.wait () {\n    sémaphore32.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T33 @stacksize 512 @autostart {\n  while event sémaphore32.wait () {\n    sémaphore33.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T34 @stacksize 512 @autostart {\n  while event sémaphore33.wait () {\n    sémaphore34.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T35 @stacksize 512 @autostart {\n  while event sémaphore34.wait () {\n    sémaphore35.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T36 @stacksize 512 @autostart {\n  while event sémaphore35.wait () {\n    sémaphore36.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T37 @stacksize 512 @autostart {\n  while event sémaphore36.wait () {\n    sémaphore37.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T38 @stacksize 512 @autostart {\n  while event sémaphore37.wait () {\n    sémaphore38.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T39 @stacksize 512 @autostart {\n  while event sémaphore38.wait () {\n    sémaphore39.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T40 @stacksize 512 @autostart {\n  while event sémaphore39.wait () {\n    sémaphore40.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T41 @stacksize 512 @autostart {\n  while event sémaphore40.wait () {\n    sémaphore41.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T42 @stacksize 512 @autostart {\n  while event sémaphore41.wait () {\n    sémaphore42.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T43 @stacksize 512 @autostart {\n  while event sémaphore42.wait () {\n    sémaphore43.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T44 @stacksize 512 @autostart {\n  while event sémaphore43.wait () {\n    sémaphore44.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T45 @stacksize 512 @autostart {\n  while event sémaphore44.wait () {\n    sémaphore45.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T46 @stacksize 512 @autostart {\n  while event sémaphore45.wait () {\n    sémaphore46.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T47 @stacksize 512 @autostart {\n  while event sémaphore46.wait () {\n    sémaphore47.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T48 @stacksize 512 @autostart {\n  while event sémaphore47.wait () {\n    sémaphore48.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T49 @stacksize 512 @autostart {\n  while event sémaphore48.wait () {\n    sémaphore49.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T50 @stacksize 512 @autostart {\n  while event sémaphore49.wait () {\n    sémaphore50.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T51 @stacksize 512 @autostart {\n  while event sémaphore50.wait () {\n    sémaphore51.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T52 @stacksize 512 @autostart {\n  while event sémaphore51.wait () {\n    sémaphore52.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T53 @stacksize 512 @autostart {\n  while event sémaphore52.wait () {\n    sémaphore53.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T54 @stacksize 512 @autostart {\n  while event sémaphore53.wait () {\n    sémaphore54.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T55 @stacksize 512 @autostart {\n  while event sémaphore54.wait () {\n    sémaphore55.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T56 @stacksize 512 @autostart {\n  while event sémaphore55.wait () {\n    sémaphore56.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T57 @stacksize 512 @autostart {\n  while event sémaphore56.wait () {\n    sémaphore57.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T58 @stacksize 512 @autostart {\n  while event sémaphore57.wait () {\n    sémaphore58.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T59 @stacksize 512 @autostart {\n  while event sémaphore58.wait () {\n    sémaphore59.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T60 @stacksize 512 @autostart {\n  while event sémaphore59.wait () {\n    sémaphore60.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T61 @stacksize 512 @autostart {\n  while event sémaphore60.wait () {\n    sémaphore61.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T62 @stacksize 512 @autostart {\n  while event sémaphore61.wait () {\n    sémaphore62.signal ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask T63 @stacksize 512 @autostart {\n  while event sémaphore62.wait () {\n    let duration = myDriver.getDuration ()\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32:duration)\n    digital.toggle (!port: LED_L0)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_18_embeddedSampleCode (
  "21-round-robin-64-tasks.omnibus",
  "omnibus",
  true, // Text file
  18324, // Text length
  gWrapperFileContent_18_embeddedSampleCode
) ;

//--- File 'teensy-3-6/22-task-activate.omnibus'

const char * gWrapperFileContent_24_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche0 @stacksize 512 @autostart {\n  var tick $u32 = 0\n\n  while event time.wait (!until: self.tick) {\n    self.tick += 500\n    Tâche1.activate ()\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche1 @stacksize 512 { // Do not activate\n\n  event @onSetup first {\n    digital.set (!mode:.output !toPort:LED_L0)\n  }\n\n  event @onStart first {\n    digital.toggle (!port:LED_L0)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_24_embeddedSampleCode (
  "22-task-activate.omnibus",
  "omnibus",
  true, // Text file
  807, // Text length
  gWrapperFileContent_24_embeddedSampleCode
) ;

//--- File 'teensy-3-6/23-large-integer.omnibus'

const char * gWrapperFileContent_35_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 240\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\nlet largeConstant = 123_456_789_123_456_789_123_456_789_123\n\ntypealias $LargeInt = $u97\n\nfunc getLargeConstant () -> $LargeInt {\n  result = largeConstant\n}\n\nfunc getLargeAddition (\? inA $LargeInt \?inB $LargeInt) -> $LargeInt {\n  result = inA + inB\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche0 @stacksize 512 @autostart {\n  var tick = $u32 ()\n  var largeInteger = $LargeInt ()\n  var otherLargeInteger = $LargeInt ()\n\n  while event time.wait (!until: self.tick) {\n    self.otherLargeInteger += self.largeInteger\n    self.tick += 500\n    self.largeInteger = getLargeAddition (!self.largeInteger !getLargeConstant ())\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_35_embeddedSampleCode (
  "23-large-integer.omnibus",
  "omnibus",
  true, // Text file
  926, // Text length
  gWrapperFileContent_35_embeddedSampleCode
) ;

//--- File 'teensy-3-6/24-computed-properties.omnibus'

const char * gWrapperFileContent_39_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntask Tâche0 @stacksize 512 @autostart {\n  var tick = $u32 ()\n\n  var readComputedProperty $u32 { result = self.tick }\n\n  var readWriteComputedProperty $u32 {\n    @set { self.tick = newValue }\n    @get { result = self.tick }\n  }\n\n  while event time.wait (!until: self.tick) {\n    self.readWriteComputedProperty += 500\n//    self.tick += 500\n    digital.toggle (!port:LED_L0)\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32:self.readComputedProperty)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_39_embeddedSampleCode (
  "24-computed-properties.omnibus",
  "omnibus",
  true, // Text file
  795, // Text length
  gWrapperFileContent_39_embeddedSampleCode
) ;

//--- File 'teensy-3-6/25-enumeration.omnibus'

const char * gWrapperFileContent_23_embeddedSampleCode = "target \"teensy-3-6/xtr32\"\nlet F_CPU_MHZ = 180\n\nimport \"carte-tp-teensy-3-6.omnibus-import\"\n\n//——————————————————————————————————————————————————————————————————————————————\n\nenum $monEnum {\n  case zéro\n  case un\n  case deux\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n\ntask Tâche0 @stacksize 512 @autostart {\n  var tick = $u32 ()\n  var énumération = $monEnum.zéro\n\n  while event time.wait (!until: self.tick) {\n    self.tick += 500\n    self.énumération = .un\n    var autre2num = self.énumération\n    self.énumération = .deux\n    digital.toggle (!port:LED_L0)\n    lcd.goto (!line:0 !column:0)\n    lcd.print (!u32: self.tick)\n  }\n}\n\n//——————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_23_embeddedSampleCode (
  "25-enumeration.omnibus",
  "omnibus",
  true, // Text file
  752, // Text length
  gWrapperFileContent_23_embeddedSampleCode
) ;

//--- File 'teensy-3-6/carte-tp-teensy-3-6.omnibus-import'

const char * gWrapperFileContent_17_embeddedSampleCode = "ctAssert target \"teensy-3-6/xtr32\", \"teensy-3-6/xtr64\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver lcd (!DB4:.D16 !DB5:.D15 !DB6:.D14 !DB7:.D19 !RS:.D18 !ENABLE:.D17)\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//   ACTIVITY LED\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ndriver ActivityLed > digital {\n  startup {\n    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n  }\n}\n\ndriver ActivityLed ()\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\npublic func activityLedOn safe section @exported () {\n  digital.write (!yes !toPort:.D13)\n}\n\npublic func activityLedOff safe section @exported () {\n  digital.write (!no !toPort:.D13)\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet LED_L0 = $DigitalPort.D3\nlet LED_L1 = $DigitalPort.D4\nlet LED_L2 = $DigitalPort.D5\nlet LED_L3 = $DigitalPort.D6\nlet LED_L4 = $DigitalPort.D7\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet BUTTON_P0 = $DigitalPort.D8\nlet BUTTON_P1 = $DigitalPort.D9\nlet BUTTON_P2 = $DigitalPort.D10\nlet BUTTON_P3 = $DigitalPort.D11\nlet BUTTON_P4 = $DigitalPort.D12\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\npanic @setup 0 {\n  digital.set (!mode:.output !toPort:LED_L0)\n  digital.set (!mode:.output !toPort:LED_L1)\n  digital.set (!mode:.output !toPort:LED_L2)\n  digital.set (!mode:.output !toPort:LED_L3)\n  digital.set (!mode:.output !toPort:LED_L4)\n  lcd.clearScreenInPanicMode ()\n  lcd.gotoInPanicMode (!line:0 !column:0)\n  if LINE == 0 { // ISR Panic\n    lcd.printStringInPanicMode (!\"ISR PANIC\")\n  }else{\n    lcd.printStringInPanicMode (!FILE)\n    lcd.gotoInPanicMode (!line:2 !column:0)\n    lcd.printStringInPanicMode (!\"Line:\")\n    lcd.printUnsignedInPanicMode (!LINE)\n  }\n  lcd.gotoInPanicMode (!line:3 !column:0)\n  lcd.printStringInPanicMode (!\"Code:\")\n  lcd.printUnsignedInPanicMode (!CODE)\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\npanic @loop 0 {\n  time.panicBusyWaitingDuringMS (!50)\n  digital.toggle (!port:LED_L0)\n  digital.toggle (!port:LED_L1)\n  digital.toggle (!port:LED_L2)\n  digital.toggle (!port:LED_L3)\n  digital.toggle (!port:LED_L4)\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;

const cRegularFileWrapper gWrapperFile_17_embeddedSampleCode (
  "carte-tp-teensy-3-6.omnibus-import",
  "omnibus-import",
  true, // Text file
  2786, // Text length
  gWrapperFileContent_17_embeddedSampleCode
) ;

//--- All files of 'teensy-3-6' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_3 [27] = {
  & gWrapperFile_27_embeddedSampleCode,
  & gWrapperFile_26_embeddedSampleCode,
  & gWrapperFile_33_embeddedSampleCode,
  & gWrapperFile_21_embeddedSampleCode,
  & gWrapperFile_30_embeddedSampleCode,
  & gWrapperFile_19_embeddedSampleCode,
  & gWrapperFile_37_embeddedSampleCode,
  & gWrapperFile_36_embeddedSampleCode,
  & gWrapperFile_38_embeddedSampleCode,
  & gWrapperFile_29_embeddedSampleCode,
  & gWrapperFile_40_embeddedSampleCode,
  & gWrapperFile_20_embeddedSampleCode,
  & gWrapperFile_22_embeddedSampleCode,
  & gWrapperFile_16_embeddedSampleCode,
  & gWrapperFile_28_embeddedSampleCode,
  & gWrapperFile_31_embeddedSampleCode,
  & gWrapperFile_34_embeddedSampleCode,
  & gWrapperFile_41_embeddedSampleCode,
  & gWrapperFile_32_embeddedSampleCode,
  & gWrapperFile_25_embeddedSampleCode,
  & gWrapperFile_18_embeddedSampleCode,
  & gWrapperFile_24_embeddedSampleCode,
  & gWrapperFile_35_embeddedSampleCode,
  & gWrapperFile_39_embeddedSampleCode,
  & gWrapperFile_23_embeddedSampleCode,
  & gWrapperFile_17_embeddedSampleCode,
  NULL
} ;

//--- All sub-directories of 'teensy-3-6' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_3 [1] = {
  NULL
} ;

//--- Directory 'teensy-3-6'

const cDirectoryWrapper gWrapperDirectory_3_embeddedSampleCode (
  "teensy-3-6",
  26,
  gWrapperAllFiles_embeddedSampleCode_3,
  0,
  gWrapperAllDirectories_embeddedSampleCode_3
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_0 [4] = {
  & gWrapperDirectory_1_embeddedSampleCode,
  & gWrapperDirectory_2_embeddedSampleCode,
  & gWrapperDirectory_3_embeddedSampleCode,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_embeddedSampleCode (
  "",
  0,
  gWrapperAllFiles_embeddedSampleCode_0,
  3,
  gWrapperAllDirectories_embeddedSampleCode_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctInfixExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::method_checkCompileTimeExpression (const GALGAS_ctCheckMap constinArgument_inMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ctInfixExpressionAST temp_0 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 418)) ;
  const GALGAS_ctInfixExpressionAST temp_1 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 419)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctPrefixExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::method_checkCompileTimeExpression (const GALGAS_ctCheckMap constinArgument_inMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ctPrefixExpressionAST temp_0 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 425)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctTrueExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::method_checkCompileTimeExpression (const GALGAS_ctCheckMap /* constinArgument_inMap */,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctFalseExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::method_checkCompileTimeExpression (const GALGAS_ctCheckMap /* constinArgument_inMap */,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIntExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::method_checkCompileTimeExpression (const GALGAS_ctCheckMap /* constinArgument_inMap */,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIdentifierExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::method_checkCompileTimeExpression (const GALGAS_ctCheckMap constinArgument_inMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ctIdentifierExpressionAST temp_0 = this ;
  constinArgument_inMap.method_searchKey (temp_0.readProperty_mIdentifier (), inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 446)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctInfixExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::method_computeCompileTimeExpression (const GALGAS_ctMap constinArgument_inMap,
                                                                     GALGAS_bigint & outArgument_outValue,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_left_16228 ;
  const GALGAS_ctInfixExpressionAST temp_0 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inMap, var_left_16228, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 471)) ;
  GALGAS_bigint var_right_16309 ;
  const GALGAS_ctInfixExpressionAST temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inMap, var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 472)) ;
  const GALGAS_ctInfixExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mInfixOperator ().enumValue ()) {
  case GALGAS_compileTimeInfixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_equal:
    {
      GALGAS_bigint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_left_16228.objectCompare (var_right_16309)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 474)) ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 474)) ;
      }
      outArgument_outValue = temp_3 ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_lessThan:
    {
      GALGAS_bigint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_left_16228.objectCompare (var_right_16309)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 475)) ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 475)) ;
      }
      outArgument_outValue = temp_5 ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseAndOp:
    {
      outArgument_outValue = var_left_16228.operator_and (var_right_16309 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 476)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseOrOp:
    {
      outArgument_outValue = var_left_16228.operator_or (var_right_16309 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 477)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseXorOp:
    {
      outArgument_outValue = var_left_16228.operator_xor (var_right_16309 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 478)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_addOp:
    {
      outArgument_outValue = var_left_16228.add_operation (var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 479)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_subOp:
    {
      outArgument_outValue = var_left_16228.substract_operation (var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 480)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_mulOp:
    {
      outArgument_outValue = var_left_16228.multiply_operation (var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 481)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_divOp:
    {
      outArgument_outValue = var_left_16228.divide_operation (var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 482)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_divNoOvf:
    {
      outArgument_outValue = var_left_16228.divide_operation (var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 483)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_modOp:
    {
      outArgument_outValue = var_left_16228.modulo_operation (var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 484)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_moduloNoOvf:
    {
      outArgument_outValue = var_left_16228.modulo_operation (var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 485)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_leftShift:
    {
      outArgument_outValue = var_left_16228.left_shift_operation (var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 486)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_rightShift:
    {
      outArgument_outValue = var_left_16228.right_shift_operation (var_right_16309, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 487)) ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctPrefixExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::method_computeCompileTimeExpression (const GALGAS_ctMap constinArgument_inMap,
                                                                      GALGAS_bigint & outArgument_outValue,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_exp_17335 ;
  const GALGAS_ctPrefixExpressionAST temp_0 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inMap, var_exp_17335, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 497)) ;
  const GALGAS_ctPrefixExpressionAST temp_1 = this ;
  switch (temp_1.readProperty_mPrefixOperator ().enumValue ()) {
  case GALGAS_compileTimePrefixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_compileTimePrefixOperatorEnumeration::kEnum_minusOp:
    {
      outArgument_outValue = var_exp_17335.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 499)) ;
    }
    break ;
  case GALGAS_compileTimePrefixOperatorEnumeration::kEnum_notOp:
    {
      GALGAS_bigint temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_exp_17335.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)) ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)) ;
      }
      outArgument_outValue = temp_2 ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctTrueExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::method_computeCompileTimeExpression (const GALGAS_ctMap /* constinArgument_inMap */,
                                                                    GALGAS_bigint & outArgument_outValue,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 510)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctFalseExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::method_computeCompileTimeExpression (const GALGAS_ctMap /* constinArgument_inMap */,
                                                                     GALGAS_bigint & outArgument_outValue,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 519)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIntExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::method_computeCompileTimeExpression (const GALGAS_ctMap /* constinArgument_inMap */,
                                                                   GALGAS_bigint & outArgument_outValue,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ctIntExpressionAST temp_0 = this ;
  outArgument_outValue = temp_0.readProperty_mValue ().readProperty_bigint () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIdentifierExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::method_computeCompileTimeExpression (const GALGAS_ctMap constinArgument_inMap,
                                                                          GALGAS_bigint & outArgument_outValue,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ctIdentifierExpressionAST temp_0 = this ;
  constinArgument_inMap.method_searchKey (temp_0.readProperty_mIdentifier (), outArgument_outValue, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 537)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmGenericType locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_llvmGenericType::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_llvmGenericType temp_0 = this ;
  result_outLocation = temp_0.readProperty_mTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenericType enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmGenericType::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_llvmGenericType temp_0 = this ;
  GALGAS_lstring var_nodeName_5864 = temp_0.readProperty_mTypeName () ;
  {
  const GALGAS_llvmGenericType temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5864, temp_1, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 169)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmGenericType keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_llvmGenericType::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_llvmGenericType temp_0 = this ;
  result_outRepresentation = GALGAS_string ("Generic type ").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 175)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenericType enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmGenericType::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                  GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                  GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                  GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                  GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                  GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                  GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctCheckMap var_formalGenericConstantParameterMap_7971 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("llvm-generic-type.galgas", 217)) ;
  const GALGAS_llvmGenericType temp_0 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_0.readProperty_mGenericFormalParameterList (), var_formalGenericConstantParameterMap_7971, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 218)) ;
  const GALGAS_llvmGenericType temp_1 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mWhereClause ().ptr (), var_formalGenericConstantParameterMap_7971, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 220)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_llvmGenericType temp_3 = this ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.readProperty_mGenericFormalParameterList ().getter_length (SOURCE_FILE ("llvm-generic-type.galgas", 224)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_llvmGenericType temp_4 = this ;
      const GALGAS_llvmGenericType temp_5 = this ;
      const GALGAS_llvmGenericType temp_6 = this ;
      GALGAS_omnibusType var_llvmType_8398 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("llvm-generic-type.galgas", 226)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("llvm-generic-type.galgas", 227)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("llvm-generic-type.galgas", 227)) COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 227)), temp_4.readProperty_mTypeName ().readProperty_string (), GALGAS_typeKind::constructor_llvmType (temp_5.readProperty_mBitSize ()  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 229)), GALGAS_string ("i").add_operation (temp_6.readProperty_mBitSize ().getter_string (SOURCE_FILE ("llvm-generic-type.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 230))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 225)) ;
      {
      const GALGAS_llvmGenericType temp_7 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_7.readProperty_mTypeName (), var_llvmType_8398, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 232)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmAssignmentOperatorDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_llvmAssignmentOperatorDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmAssignmentOperatorDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_2 = this ;
  GALGAS_lstring var_nodeName_6430 = GALGAS_lstring::constructor_new (temp_0.readProperty_mTargetTypeName ().readProperty_string ().add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 148)).add_operation (temp_1.readProperty_mSourceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 148)), temp_2.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 148)) ;
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6430, temp_3, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 149)) ;
  }
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6430, temp_4.readProperty_mTargetTypeName () COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 150)) ;
  }
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6430, temp_5.readProperty_mSourceTypeName () COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 151)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmAssignmentOperatorDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_llvmAssignmentOperatorDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  result_outRepresentation = GALGAS_string ("Assignment ").add_operation (temp_0.readProperty_mTargetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)).add_operation (temp_1.readProperty_mSourceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorFuncName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_assignmentOperatorFuncName (const GALGAS_omnibusType & constinArgument_inTargetType,
                                                   const GALGAS_omnibusType & constinArgument_inSourceType,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("assign.").add_operation (constinArgument_inTargetType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)).add_operation (GALGAS_string (".ref.from."), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)).add_operation (constinArgument_inSourceType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)).add_operation (GALGAS_string (".ref"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_assignmentOperatorFuncName [3] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_assignmentOperatorFuncName (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_omnibusType operand1 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_assignmentOperatorFuncName (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignmentOperatorFuncName ("assignmentOperatorFuncName",
                                                                            functionWithGenericHeader_assignmentOperatorFuncName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            2,
                                                                            functionArgs_assignmentOperatorFuncName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_assignmentOperatorKey (const GALGAS_omnibusType & constinArgument_inTargetType,
                                               const GALGAS_location & constinArgument_inErrorLocation,
                                               const GALGAS_omnibusType & constinArgument_inSourceType,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (constinArgument_inTargetType.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 174)).add_operation (constinArgument_inSourceType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 174)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 173)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_assignmentOperatorKey [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_assignmentOperatorKey (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand1 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_assignmentOperatorKey (operand0,
                                         operand1,
                                         operand2,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignmentOperatorKey ("assignmentOperatorKey",
                                                                       functionWithGenericHeader_assignmentOperatorKey,
                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                       3,
                                                                       functionArgs_assignmentOperatorKey) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmAssignmentOperatorDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                                       GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                       GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                       GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                       GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                       GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                       GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                       GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctCheckMap var_formalGenericConstantParameterMap_10075 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 219)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_0.readProperty_mTargetGenericFormalParameterList (), var_formalGenericConstantParameterMap_10075, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 220)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_1.readProperty_mSourceGenericFormalParameterList (), var_formalGenericConstantParameterMap_10075, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 221)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_2 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mWhereClause ().ptr (), var_formalGenericConstantParameterMap_10075, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 223)) ;
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_3 = this ;
  var_formalGenericConstantParameterMap_10075.setter_insertKey (temp_3.readProperty_mTargetVariableName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 225)) ;
  }
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_4 = this ;
  var_formalGenericConstantParameterMap_10075.setter_insertKey (temp_4.readProperty_mSourceVariableName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 226)) ;
  }
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_5 = this ;
  extensionMethod_checkInstructionList (temp_5.readProperty_mLLVMInstructionList (), var_formalGenericConstantParameterMap_10075, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 227)) ;
  GALGAS_unifiedTypeMapEntry var_targetTypeProxy_10760 ;
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_6 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_6.readProperty_mTargetTypeName (), var_targetTypeProxy_10760, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 229)) ;
  }
  GALGAS_omnibusType var_targetType_10778 = extensionGetter_type (var_targetTypeProxy_10760, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 230)) ;
  GALGAS_unifiedTypeMapEntry var_sourceTypeProxy_10880 ;
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_7 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_7.readProperty_mSourceTypeName (), var_sourceTypeProxy_10880, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 231)) ;
  }
  GALGAS_omnibusType var_sourceType_10898 = extensionGetter_type (var_sourceTypeProxy_10880, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 232)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_8 = this ;
  GALGAS_lstring var_key_10938 = function_assignmentOperatorKey (var_targetType_10778, temp_8.readProperty_mOperatorLocation (), var_sourceType_10898, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 234)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_9 = this ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_10 = this ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_11 = this ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_12 = this ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_13 = this ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_14 = this ;
  GALGAS_llvmAssignmentOperatorUsage var_operatorUsage_11032 = GALGAS_llvmAssignmentOperatorUsage::constructor_new (var_targetType_10778, temp_9.readProperty_mTargetVariableName (), temp_10.readProperty_mTargetGenericFormalParameterList (), var_sourceType_10898, temp_11.readProperty_mSourceVariableName (), temp_12.readProperty_mSourceGenericFormalParameterList (), temp_13.readProperty_mWhereClause (), temp_14.readProperty_mLLVMInstructionList ()  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 235)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_10938, var_operatorUsage_11032, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 245)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GALGAS_llvmAssignmentOperatorDeclarationAST temp_16 = this ;
    GALGAS_bool test_17 = GALGAS_bool (kIsEqual, temp_16.readProperty_mTargetGenericFormalParameterList ().getter_length (SOURCE_FILE ("assignment-operator-definition.galgas", 252)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_17.boolEnum ()) {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_18 = this ;
      test_17 = GALGAS_bool (kIsEqual, temp_18.readProperty_mSourceGenericFormalParameterList ().getter_length (SOURCE_FILE ("assignment-operator-definition.galgas", 253)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
    GALGAS_bool test_19 = test_17 ;
    if (kBoolTrue == test_19.boolEnum ()) {
      test_19 = var_sourceType_10898.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas", 254)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 254)) ;
    }
    GALGAS_bool test_20 = test_19 ;
    if (kBoolTrue == test_20.boolEnum ()) {
      test_20 = var_sourceType_10898.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas", 255)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 255)) ;
    }
    test_15 = test_20.boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_assignmentGenerationVarMap var_varMap_11758 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 256)) ;
      {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_21 = this ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_22 = this ;
      var_varMap_11758.setter_insertKey (temp_21.readProperty_mTargetVariableName (), GALGAS_string ("%").add_operation (temp_22.readProperty_mTargetVariableName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 257)) ;
      }
      {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_23 = this ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_24 = this ;
      var_varMap_11758.setter_insertKey (temp_23.readProperty_mSourceVariableName (), GALGAS_string ("%").add_operation (temp_24.readProperty_mSourceVariableName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 258)) ;
      }
      GALGAS_assignmentGenerationVarMap var_typeMap_11973 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 259)) ;
      {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_25 = this ;
      var_typeMap_11973.setter_insertKey (temp_25.readProperty_mTargetVariableName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_targetType_10778.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 260)) ;
      }
      {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_26 = this ;
      var_typeMap_11973.setter_insertKey (temp_26.readProperty_mSourceVariableName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_10898.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 261)) ;
      }
      GALGAS_stringlist var_generatedInstructions_12178 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("assignment-operator-definition.galgas", 262)) ;
      GALGAS_allocaList var_allocaList_12214 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("assignment-operator-definition.galgas", 263)) ;
      GALGAS_uint var_temporaryIndex_12248 = GALGAS_uint (uint32_t (0U)) ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_27 = this ;
      extensionMethod_generateIRCode (temp_27.readProperty_mLLVMInstructionList (), var_varMap_11758, var_typeMap_11973, var_generatedInstructions_12178, var_temporaryIndex_12248, var_allocaList_12214, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 265)) ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_28 = this ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_29 = this ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_30 = this ;
      GALGAS_assignmentRoutineIR var_routine_12386 = GALGAS_assignmentRoutineIR::constructor_new (GALGAS_lstring::constructor_new (function_assignmentOperatorFuncName (var_targetType_10778, var_sourceType_10898, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 267)), temp_28.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 267)), GALGAS_bool (false), GALGAS_bool (false), var_targetType_10778, temp_29.readProperty_mTargetVariableName ().readProperty_string (), var_sourceType_10898, temp_30.readProperty_mSourceVariableName ().readProperty_string (), var_generatedInstructions_12178, var_allocaList_12214  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 266)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (var_routine_12386  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 277)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorUsage::method_generateCode (GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            const GALGAS_omnibusType constinArgument_inTargetType,
                                                            const GALGAS_string constinArgument_inTargetLLVMName,
                                                            const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                            const GALGAS_location /* constinArgument_inErrorLocation */,
                                                            const GALGAS_bool /* constinArgument_inTargetIsInitialized */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_llvmAssignmentOperatorUsage temp_1 = this ;
    GALGAS_bool test_2 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTargetGenericFormalParameterList ().getter_length (SOURCE_FILE ("assignment-operator-definition.galgas", 308)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      const GALGAS_llvmAssignmentOperatorUsage temp_3 = this ;
      test_2 = GALGAS_bool (kIsEqual, temp_3.readProperty_mSourceGenericFormalParameterList ().getter_length (SOURCE_FILE ("assignment-operator-definition.galgas", 309)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
    GALGAS_bool test_4 = test_2 ;
    if (kBoolTrue == test_4.boolEnum ()) {
      test_4 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 310)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas", 310)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 310)) ;
    }
    GALGAS_bool test_5 = test_4 ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 311)).readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas", 311)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 311)) ;
    }
    test_0 = test_5.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_llvmRoutineName_14330 = function_assignmentOperatorFuncName (constinArgument_inTargetType, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 312)) ;
      GALGAS_string var_s_14421 = GALGAS_string ("call void @").add_operation (var_llvmRoutineName_14330.getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 313)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 313)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)) ;
      {
      GALGAS_stringset temp_6 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
      temp_6.addAssign_operation (var_llvmRoutineName_14330  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_14421, temp_6, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_omnibusType var_sourceType_14831 ;
    GALGAS_string var_srcLLVMName_14858 ;
    constinArgument_inSourcePossibleReference.method_reference (var_sourceType_14831, var_srcLLVMName_14858, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 318)) ;
    GALGAS_assignmentGenerationVarMap var_varMap_14902 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 319)) ;
    {
    const GALGAS_llvmAssignmentOperatorUsage temp_7 = this ;
    var_varMap_14902.setter_insertKey (temp_7.readProperty_mTargetVarName (), constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 320)) ;
    }
    {
    const GALGAS_llvmAssignmentOperatorUsage temp_8 = this ;
    var_varMap_14902.setter_insertKey (temp_8.readProperty_mSourceVarName (), var_srcLLVMName_14858, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 321)) ;
    }
    GALGAS_assignmentGenerationVarMap var_typeMap_15074 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 322)) ;
    {
    const GALGAS_llvmAssignmentOperatorUsage temp_9 = this ;
    var_typeMap_15074.setter_insertKey (temp_9.readProperty_mTargetVarName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 323)) ;
    }
    {
    const GALGAS_llvmAssignmentOperatorUsage temp_10 = this ;
    var_typeMap_15074.setter_insertKey (temp_10.readProperty_mSourceVarName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_14831.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 324)) ;
    }
    GALGAS_stringlist var_generatedInstructions_15272 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("assignment-operator-definition.galgas", 325)) ;
    const GALGAS_llvmAssignmentOperatorUsage temp_11 = this ;
    extensionMethod_generateIRCode (temp_11.readProperty_mInstructionList (), var_varMap_14902, var_typeMap_15074, var_generatedInstructions_15272, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 326)) ;
    cEnumerator_stringlist enumerator_15421 (var_generatedInstructions_15272, kENUMERATION_UP) ;
    while (enumerator_15421.hasCurrentObject ()) {
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, enumerator_15421.current_mValue (HERE), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("assignment-operator-definition.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 328)) ;
      }
      enumerator_15421.gotoNextObject () ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_assignmentRoutineIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 379)) ;
  const GALGAS_assignmentRoutineIR temp_1 = this ;
  const GALGAS_assignmentRoutineIR temp_2 = this ;
  const GALGAS_assignmentRoutineIR temp_3 = this ;
  const GALGAS_assignmentRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (temp_2.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_3.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)).add_operation (temp_4.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)) ;
  const GALGAS_assignmentRoutineIR temp_5 = this ;
  extensionMethod_generateAllocaList (temp_5.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 382)) ;
  const GALGAS_assignmentRoutineIR temp_6 = this ;
  cEnumerator_stringlist enumerator_17571 (temp_6.readProperty_mGeneratedInstructions (), kENUMERATION_UP) ;
  while (enumerator_17571.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_17571.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 384)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 384)) ;
    enumerator_17571.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 387)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@simpleAssignmentCopyRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_simpleAssignmentCopyRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_simpleAssignmentCopyRoutineIR temp_0 = this ;
  GALGAS_string var_typeName_18266 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 403)) ;
  GALGAS_string var_targetVarName_18320 = GALGAS_string ("%targetPtr") ;
  GALGAS_string var_sourceVarName_18355 = GALGAS_string ("%sourcePtr") ;
  const GALGAS_simpleAssignmentCopyRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_typeName_18266, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (var_targetVarName_18320, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (var_typeName_18266, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)).add_operation (var_sourceVarName_18355, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (var_typeName_18266, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (var_typeName_18266, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (var_sourceVarName_18355, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_typeName_18266, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (var_typeName_18266, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (var_targetVarName_18320, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 411)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 412)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@simpleCopyAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_simpleCopyAssignmentOperatorUsage::method_generateCode (GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                  GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                  const GALGAS_omnibusType constinArgument_inTargetType,
                                                                  const GALGAS_string constinArgument_inTargetLLVMName,
                                                                  const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                  const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                  const GALGAS_bool /* constinArgument_inTargetIsInitialized */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_sourceValue_19650 = constinArgument_inSourcePossibleReference ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inSourcePossibleReference.getter_isReference (SOURCE_FILE ("assignment-operator-definition.galgas", 434)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_getNewTempValue (constinArgument_inTargetType, ioArgument_ioTemporaries, var_sourceValue_19650, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 435)) ;
      }
      GALGAS_string var_s_19803 = extensionGetter_llvmName (var_sourceValue_19650, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)) ;
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_19803, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("assignment-operator-definition.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 438)) ;
      }
    }
  }
  GALGAS_string var_s_20061 = GALGAS_string ("store ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (extensionGetter_llvmName (var_sourceValue_19650, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_20061, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("assignment-operator-definition.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 443)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmVarInstruction checkInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmVarInstruction::method_checkInstructionList (GALGAS_ctCheckMap & ioArgument_ioMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_llvmVarInstruction temp_0 = this ;
  ioArgument_ioMap.setter_insertKey (temp_0.readProperty_mVariableName (), inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 120)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenerationInstruction checkInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmGenerationInstruction::method_checkInstructionList (GALGAS_ctCheckMap & ioArgument_ioMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_llvmGenerationInstruction temp_0 = this ;
  cEnumerator_llvmGenerationInstructionElementList enumerator_5155 (temp_0.readProperty_mGenerationList (), kENUMERATION_UP) ;
  while (enumerator_5155.hasCurrentObject ()) {
    switch (enumerator_5155.current_mElement (HERE).enumValue ()) {
    case GALGAS_llvmGenerationInstructionElement::kNotBuilt:
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_string:
      {
      }
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_symbol:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol * extractPtr_5279 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol *) (enumerator_5155.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_5246_name = extractPtr_5279->mAssociatedValue0 ;
        ioArgument_ioMap.method_searchKey (extractedValue_5246_name, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 130)) ;
      }
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_type:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_type * extractPtr_5332 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_type *) (enumerator_5155.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_5299_name = extractPtr_5332->mAssociatedValue0 ;
        ioArgument_ioMap.method_searchKey (extractedValue_5299_name, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 132)) ;
      }
      break ;
    }
    enumerator_5155.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenerationInstruction generateIRCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmGenerationInstruction::method_generateIRCode (GALGAS_assignmentGenerationVarMap & ioArgument_ioVarMap,
                                                            GALGAS_assignmentGenerationVarMap & ioArgument_ioTypeMap,
                                                            GALGAS_stringlist & ioArgument_ioInstructionAsStringListIR,
                                                            GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_7136 = GALGAS_string::makeEmptyString () ;
  const GALGAS_llvmGenerationInstruction temp_0 = this ;
  cEnumerator_llvmGenerationInstructionElementList enumerator_7157 (temp_0.readProperty_mGenerationList (), kENUMERATION_UP) ;
  while (enumerator_7157.hasCurrentObject ()) {
    switch (enumerator_7157.current_mElement (HERE).enumValue ()) {
    case GALGAS_llvmGenerationInstructionElement::kNotBuilt:
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_string:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_string * extractPtr_7251 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_string *) (enumerator_7157.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_7230_value = extractPtr_7251->mAssociatedValue0 ;
        var_s_7136.plusAssign_operation(extractedValue_7230_value, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 185)) ;
      }
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_symbol:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol * extractPtr_7340 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol *) (enumerator_7157.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7274_name = extractPtr_7340->mAssociatedValue0 ;
        GALGAS_string var_value_7321 ;
        ioArgument_ioVarMap.method_searchKey (extractedValue_7274_name, var_value_7321, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 187)) ;
        var_s_7136.plusAssign_operation(var_value_7321, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 188)) ;
      }
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_type:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_type * extractPtr_7428 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_type *) (enumerator_7157.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7361_name = extractPtr_7428->mAssociatedValue0 ;
        GALGAS_string var_value_7409 ;
        ioArgument_ioTypeMap.method_searchKey (extractedValue_7361_name, var_value_7409, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 190)) ;
        var_s_7136.plusAssign_operation(var_value_7409, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 191)) ;
      }
      break ;
    }
    enumerator_7157.gotoNextObject () ;
  }
  ioArgument_ioInstructionAsStringListIR.addAssign_operation (var_s_7136  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 194)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmVarInstruction generateIRCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmVarInstruction::method_generateIRCode (GALGAS_assignmentGenerationVarMap & ioArgument_ioVarMap,
                                                     GALGAS_assignmentGenerationVarMap & /* ioArgument_ioTypeMap */,
                                                     GALGAS_stringlist & /* ioArgument_ioInstructionAsStringListIR */,
                                                     GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                     GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_newTemporaryVariable_7900 = GALGAS_string ("%temp").add_operation (ioArgument_ioTemporaryIndex.getter_string (SOURCE_FILE ("llvm-instructions.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 206)) ;
  ioArgument_ioTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 207)) ;
  {
  const GALGAS_llvmVarInstruction temp_0 = this ;
  ioArgument_ioVarMap.setter_insertKey (temp_0.readProperty_mVariableName (), var_newTemporaryVariable_7900, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 208)) ;
  }
}
#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "omnibus-target",
  "omnibus-import",
  "omnibus",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a target definition text file with the .omnibus-target extension",
  "an imported text file with the .omnibus-import extension",
  "a source text file with the .omnibus extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "1.0.0" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_filewrapper var_fw_1182 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_omnibus_5F_options_listTargets.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_targetDirectoryOption_1297 = GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, var_targetDirectoryOption_1297.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_stringlist var_embeddedFiles_1412 = var_fw_1182.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 29)) ;
            inCompiler->printMessage (GALGAS_string ("Embedded targets:\n")  COMMA_SOURCE_FILE ("target-generation.galgas", 30)) ;
            cEnumerator_stringlist enumerator_1486 (var_embeddedFiles_1412, kENUMERATION_UP) ;
            while (enumerator_1486.hasCurrentObject ()) {
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GALGAS_bool (kIsEqual, enumerator_1486.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 32)).objectCompare (GALGAS_string ("+config.omnibus-target"))).boolEnum () ;
                if (kBoolTrue == test_2) {
                  GALGAS_string var_targetName_1598 = enumerator_1486.current_mValue (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 33)).getter_subStringFromIndex (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("target-generation.galgas", 33)) ;
                  inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_targetName_1598, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34))  COMMA_SOURCE_FILE ("target-generation.galgas", 34)) ;
                }
              }
              enumerator_1486.gotoNextObject () ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_string var_targetDirectory_1762 = var_targetDirectoryOption_1297.getter_absolutePathFromPath (GALGAS_string::constructor_stringWithCurrentDirectory (SOURCE_FILE ("target-generation.galgas", 38)) COMMA_SOURCE_FILE ("target-generation.galgas", 38)) ;
          inCompiler->printMessage (GALGAS_string ("Targets in '").add_operation (var_targetDirectory_1762, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)).add_operation (GALGAS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39))  COMMA_SOURCE_FILE ("target-generation.galgas", 39)) ;
          GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("target-generation.galgas", 40)) ;
          temp_3.addAssign_operation (GALGAS_string ("omnibus-target")  COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          GALGAS_stringlist var_allConfigFiles_1928 = var_targetDirectory_1762.getter_regularFilesWithExtensions (GALGAS_bool (true), temp_3 COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          cEnumerator_stringlist enumerator_2015 (var_allConfigFiles_1928, kENUMERATION_UP) ;
          while (enumerator_2015.hasCurrentObject ()) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, enumerator_2015.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 42)).objectCompare (GALGAS_string ("+config.omnibus-target"))).boolEnum () ;
              if (kBoolTrue == test_4) {
                inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_2015.current_mValue (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43))  COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
              }
            }
            enumerator_2015.gotoNextObject () ;
          }
        }
      }
    }
    GALGAS_string var_path_2250 = GALGAS_string (gOption_omnibus_5F_options_extractEmbeddedTargets.readProperty_value ()) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_path_2250.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_stringlist var_embeddedFiles_2349 = var_fw_1182.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 51)) ;
        cEnumerator_stringlist enumerator_2385 (var_embeddedFiles_2349, kENUMERATION_UP) ;
        while (enumerator_2385.hasCurrentObject ()) {
          GALGAS_string var_filePath_2425 = var_path_2250.add_operation (enumerator_2385.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 53)) ;
          inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_filePath_2425, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54))  COMMA_SOURCE_FILE ("target-generation.galgas", 54)) ;
          GALGAS_string var_dir_2487 = var_filePath_2425.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 55)) ;
          var_dir_2487.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 56)) ;
          GALGAS_string var_text_2575 = var_fw_1182.getter_textFileContentsAtPath (enumerator_2385.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 57)) ;
          GALGAS_bool joker_2665 ; // Joker input parameter
          var_text_2575.method_writeToFileWhenDifferentContents (var_filePath_2425, joker_2665, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 58)) ;
          enumerator_2385.gotoNextObject () ;
        }
      }
    }
  }
  {
    GALGAS_filewrapper var_fw_624 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (gOption_omnibus_5F_options_listEmbeddedSampleFiles.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_stringlist var_files_738 = var_fw_624.getter_allTextFilePathes (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
        inCompiler->printMessage (GALGAS_string ("Embedded sample code:\n")  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
        cEnumerator_stringlist enumerator_812 (var_files_738, kENUMERATION_UP) ;
        while (enumerator_812.hasCurrentObject ()) {
          inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_812.current_mValue (HERE).getter_subStringFromIndex (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
          enumerator_812.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_path_904 = GALGAS_string (gOption_omnibus_5F_options_extractEmbeddedSampleFile.readProperty_value ()) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsNotEqual, var_path_904.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_fw_624.getter_fileExistsAtPath (var_path_904, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 24)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_string var_text_1039 = var_fw_624.getter_textFileContentsAtPath (var_path_904, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 25)) ;
            GALGAS_string var_sourceName_1096 = var_path_904.getter_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas", 26)) ;
            GALGAS_bool joker_1182 ; // Joker input parameter
            var_text_1039.method_writeToFileWhenDifferentContents (var_sourceName_1096, joker_1182, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 27)) ;
          }
        }
        if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).readProperty_location (), GALGAS_string ("there is no '").add_operation (var_path_904, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GALGAS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)), fixItArray9  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring /* constinArgument_inSourceFile */,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GALGAS_lstring /* constinArgument_inSourceFile */,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_galgas_5F_builtin_5F_options_mode.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.readProperty_value ()).operator_not (SOURCE_FILE ("program.galgas", 24)) COMMA_SOURCE_FILE ("program.galgas", 24)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_importFilesAndCompile (constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 25)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "omnibus-target") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_omnibus_5F_target_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "omnibus-import") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_omnibus_5F_target_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "omnibus") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_omnibus_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_omnibus_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_omnibus_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_omnibus_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

