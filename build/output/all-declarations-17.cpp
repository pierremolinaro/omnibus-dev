#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateTarget?currentDir?productDirectory?targetName?targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_generateTarget_3F_currentDir_3F_productDirectory_3F_targetName_3F_targetParameters (const GGS_string constinArgument_inCurrentDirectory,
                                                                                                 const GGS_string constinArgument_inProductDirectory,
                                                                                                 const GGS_lstring constinArgument_inTargetName,
                                                                                                 const GGS_targetParameters constinArgument_inTargetParameters,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator__32_lstringlist enumerator_3460 (constinArgument_inTargetParameters.readProperty_mPython_5F_utilityToolList (), EnumerationOrder::up) ;
  while (enumerator_3460.hasCurrentObject ()) {
    {
    routine_copyExecutableFile_3F_currentDir_3F_from_3F_to (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 85)).add_operation (enumerator_3460.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 85)), constinArgument_inProductDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 86)).add_operation (enumerator_3460.current_mValue_31_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 83)) ;
    }
    enumerator_3460.gotoNextObject () ;
  }
  {
  GGS__32_stringlist temp_0 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 94)) ;
  temp_0.enterElement (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string ("!SYSTEMSTACKSIZE!"), constinArgument_inTargetParameters.readProperty_mSystemStackSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("target-generation.galgas", 94)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 94)) ;
  routine_copyFileWithSubstitutions_3F_currentDir_3F_from_3F_to_3F_ (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 92)).add_operation (constinArgument_inTargetParameters.readProperty_mLinkerScript ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 92)), constinArgument_inProductDirectory.add_operation (GGS_string ("/sources/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 93)), temp_0, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 90)) ;
  }
  GGS_string var_opt_5F_optimizationOption_4030 = GGS_string ("disable-opt") ;
  GGS_string var_llc_5F_optimizationOption_4075 = GGS_string ("O0") ;
  GGS_bigint var_optimizationOptionCount_4111 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 99)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (gOption_omnibus_5F_options_optimization_31_.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_opt_5F_optimizationOption_4030 = GGS_string ("O1") ;
      var_llc_5F_optimizationOption_4075 = GGS_string ("O1") ;
      var_optimizationOptionCount_4111.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 103)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (gOption_omnibus_5F_options_optimization_32_.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_opt_5F_optimizationOption_4030 = GGS_string ("O2") ;
      var_llc_5F_optimizationOption_4075 = GGS_string ("O2") ;
      var_optimizationOptionCount_4111.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 108)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (gOption_omnibus_5F_options_optimizationS.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_opt_5F_optimizationOption_4030 = GGS_string ("Os") ;
      var_llc_5F_optimizationOption_4075 = GGS_string ("O2") ;
      var_optimizationOptionCount_4111.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 113)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (gOption_omnibus_5F_options_optimizationZ.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_opt_5F_optimizationOption_4030 = GGS_string ("Oz") ;
      var_llc_5F_optimizationOption_4075 = GGS_string ("O2") ;
      var_optimizationOptionCount_4111.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 118)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (gOption_omnibus_5F_options_optimizationZ_33_.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_opt_5F_optimizationOption_4030 = GGS_string ("O3") ;
      var_llc_5F_optimizationOption_4075 = GGS_string ("O3") ;
      var_optimizationOptionCount_4111.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 123)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterThan, var_optimizationOptionCount_4111.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 125)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("target-generation.galgas", 126)), GGS_string ("several optimization options: --").add_operation (var_opt_5F_optimizationOption_4030, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 126)).add_operation (GGS_string (" is used"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 126)), fixItArray7  COMMA_SOURCE_FILE ("target-generation.galgas", 126)) ;
    }
  }
  {
  GGS__32_stringlist temp_8 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 132)) ;
  temp_8.enterElement (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string ("<<OPT_OPTIMIZATION_OPTION>>"), var_opt_5F_optimizationOption_4030, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 132)) ;
  temp_8.enterElement (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string ("<<LLC_OPTIMIZATION_OPTION>>"), var_llc_5F_optimizationOption_4075, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 132)) ;
  routine_copyExecutableFileWithSubstitutions_3F_currentDir_3F_from_3F_to_3F_ (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 130)).add_operation (constinArgument_inTargetParameters.readProperty_mPython_5F_build ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 130)), constinArgument_inProductDirectory.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 131)), temp_8, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 128)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'copyExecutableFile?currentDir?from?to'
//
//--------------------------------------------------------------------------------------------------

void routine_copyExecutableFile_3F_currentDir_3F_from_3F_to (const GGS_string constinArgument_inCurrentDirectory,
                                                             const GGS_string constinArgument_inSourceFileNamePath,
                                                             const GGS_string constinArgument_inDestinationAbsoluteFilePath,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_filewrapper var_fw_5780 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      GGS_string var_s_5823 = var_fw_5780.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 145)) ;
      GGS_bool joker_5958 ; // Joker input parameter
      var_s_5823.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_5958, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 146)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_string var_targetDefinitionDir_5977 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 148)) ;
    GGS_string var_s_6099 = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_5977.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 149)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 149)) ;
    GGS_bool joker_6269 ; // Joker input parameter
    var_s_6099.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6269, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 150)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'copyExecutableFileWithSubstitutions?currentDir?from?to?'
//
//--------------------------------------------------------------------------------------------------

void routine_copyExecutableFileWithSubstitutions_3F_currentDir_3F_from_3F_to_3F_ (const GGS_string constinArgument_inCurrentDirectory,
                                                                                  const GGS_string constinArgument_inSourceFileNamePath,
                                                                                  const GGS_string constinArgument_inDestinationAbsoluteFilePath,
                                                                                  const GGS__32_stringlist constinArgument_inSubstitutions,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_6617 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_filewrapper var_fw_6713 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      var_s_6617 = var_fw_6713.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 165)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_string var_targetDefinitionDir_6821 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 167)) ;
    var_s_6617 = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_6821.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 168)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 168)) ;
  }
  cEnumerator__32_stringlist enumerator_7056 (constinArgument_inSubstitutions, EnumerationOrder::up) ;
  while (enumerator_7056.hasCurrentObject ()) {
    var_s_6617 = var_s_6617.getter_stringByReplacingStringByString (enumerator_7056.current_mValue_30_ (HERE), enumerator_7056.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 171)) ;
    enumerator_7056.gotoNextObject () ;
  }
  GGS_bool joker_7261 ; // Joker input parameter
  var_s_6617.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_7261, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 173)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'copyFileWithSubstitutions?currentDir?from?to?'
//
//--------------------------------------------------------------------------------------------------

void routine_copyFileWithSubstitutions_3F_currentDir_3F_from_3F_to_3F_ (const GGS_string constinArgument_inCurrentDirectory,
                                                                        const GGS_string constinArgument_inSourceFileNamePath,
                                                                        const GGS_string constinArgument_inDestinationAbsoluteFilePath,
                                                                        const GGS__32_stringlist constinArgument_inSubstitutions,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_7593 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_filewrapper var_fw_7689 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      var_s_7593 = var_fw_7689.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 187)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_string var_targetDefinitionDir_7797 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 189)) ;
    var_s_7593 = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_7797.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 190)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 190)) ;
  }
  cEnumerator__32_stringlist enumerator_8032 (constinArgument_inSubstitutions, EnumerationOrder::up) ;
  while (enumerator_8032.hasCurrentObject ()) {
    var_s_7593 = var_s_7593.getter_stringByReplacingStringByString (enumerator_8032.current_mValue_30_ (HERE), enumerator_8032.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 193)) ;
    enumerator_8032.gotoNextObject () ;
  }
  GGS_bool joker_8227 ; // Joker input parameter
  var_s_7593.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_8227, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 195)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'getTargetTextFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_getTargetTextFile (const GGS_string & constinArgument_inCurrentDirectory,
                                       const GGS_string & constinArgument_inTargetFile,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outContents ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_filewrapper var_fw_8556 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      result_outContents = var_fw_8556.getter_textFileContentsAtPath (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 207)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_string var_targetDefinitionDir_8666 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 209)) ;
    result_outContents = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_8666.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 210)).add_operation (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 210)) ;
  }
//---
  return result_outContents ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getTargetTextFile [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_getTargetTextFile (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_getTargetTextFile (operand0,
                                     operand1,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getTargetTextFile ("getTargetTextFile",
                                                                   functionWithGenericHeader_getTargetTextFile,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   2,
                                                                   functionArgs_getTargetTextFile) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'importFilesAndCompile?sourceFilePath'
//
//--------------------------------------------------------------------------------------------------

void routine_importFilesAndCompile_3F_sourceFilePath (const GGS_lstring constinArgument_inSourceFile,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ast var_ast_1137 = GGS_ast::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_importedFileList_1213 ;
  GGS_location var_endOfSourceFile_1255 ;
  var_importedFileList_1213.drop () ;
  var_endOfSourceFile_1255.drop () ;
  cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_1137, var_importedFileList_1213, var_endOfSourceFile_1255  COMMA_SOURCE_FILE ("program.galgas", 34)) ;
  GGS_stringset var_importedFileAbsolutePathSet_1338 = GGS_stringset::class_func_setWithString (constinArgument_inSourceFile.readProperty_string ()  COMMA_SOURCE_FILE ("program.galgas", 40)) ;
  GGS_string var_currentDirectory_1412 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 41)) ;
  {
  routine_recursiveImportFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (var_ast_1137, var_currentDirectory_1412, var_importedFileList_1213, var_importedFileAbsolutePathSet_1338, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 42)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 49)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("program.galgas", 50)) ;
      GGS_stringset var_targetNameSet_1749 = temp_1 ;
      cEnumerator_lstringlist enumerator_1778 (var_ast_1137.readProperty_mTargetListAST (), EnumerationOrder::up) ;
      while (enumerator_1778.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_targetNameSet_1749.getter_hasKey (enumerator_1778.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("program.galgas", 52)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_1778.current_mValue (HERE).readProperty_location (), GGS_string ("Duplicated target"), fixItArray3  COMMA_SOURCE_FILE ("program.galgas", 53)) ;
          }
        }
        var_targetNameSet_1749.addAssign_operation (enumerator_1778.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("program.galgas", 55)) ;
        enumerator_1778.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 59)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_ast_1137.readProperty_mTargetListAST ().getter_count (SOURCE_FILE ("program.galgas", 60)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (var_endOfSourceFile_1255, GGS_string ("no target: only syntax analysis is performed"), fixItArray6  COMMA_SOURCE_FILE ("program.galgas", 61)) ;
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::greaterThan, var_ast_1137.readProperty_mTargetListAST ().getter_count (SOURCE_FILE ("program.galgas", 62)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticWarning (var_endOfSourceFile_1255, var_ast_1137.readProperty_mTargetListAST ().getter_count (SOURCE_FILE ("program.galgas", 63)).getter_string (SOURCE_FILE ("program.galgas", 63)).add_operation (GGS_string (" targets: only syntax analysis is performed"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 63)), fixItArray8  COMMA_SOURCE_FILE ("program.galgas", 63)) ;
          }
        }
        if (kBoolFalse == test_7) {
          cEnumerator_lstringlist enumerator_2359 (var_ast_1137.readProperty_mTargetListAST (), EnumerationOrder::up) ;
          while (enumerator_2359.hasCurrentObject ()) {
            {
            routine_compileProject_3F_sourceFile_3F_ast_3F_forTarget_3F_endOfSourceFile_3F_currentDirectory_3F_importedFilePathSet (constinArgument_inSourceFile, var_ast_1137, enumerator_2359.current_mValue (HERE), var_endOfSourceFile_1255, var_currentDirectory_1412, var_importedFileAbsolutePathSet_1338, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 66)) ;
            }
            enumerator_2359.gotoNextObject () ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProject?sourceFile?ast?forTarget?endOfSourceFile?currentDirectory?importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProject_3F_sourceFile_3F_ast_3F_forTarget_3F_endOfSourceFile_3F_currentDirectory_3F_importedFilePathSet (const GGS_lstring constinArgument_inSourceFile,
                                                                                                                             const GGS_ast constinArgument_inAST,
                                                                                                                             const GGS_lstring constinArgument_inTargetName,
                                                                                                                             const GGS_location constinArgument_inEndOfSourceFile,
                                                                                                                             const GGS_string constinArgument_inCurrentDirectory,
                                                                                                                             const GGS_stringset constinArgument_inImportedFileAbsolutePathSet,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_timer var_parsingTime_3105 = GGS_timer::class_func_start (SOURCE_FILE ("program.galgas", 89)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("** Parsing\n"), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 91)) ;
      }
    }
  }
  GGS_ast var_ast_3225 = constinArgument_inAST ;
  GGS_stringset var_sourceFileAbsolutePathSet_3254 = constinArgument_inImportedFileAbsolutePathSet ;
  GGS_declarationListAST temp_1 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("program.galgas", 96)) ;
  var_ast_3225.mProperty_mDeclarationListAST = temp_1 ;
  cEnumerator_declarationListAST enumerator_3430 (constinArgument_inAST.readProperty_mDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_3430.hasCurrentObject ()) {
    GGS_abstractDeclarationAST var_newDeclaration_3563 ;
    callExtensionMethod_enterExtension ((cPtr_abstractDeclarationAST *) enumerator_3430.current_mDeclaration (HERE).ptr (), var_ast_3225.mProperty_mExtendStaticArrayDeclarationAST, var_newDeclaration_3563, inCompiler COMMA_SOURCE_FILE ("program.galgas", 98)) ;
    var_ast_3225.mProperty_mDeclarationListAST.addAssign_operation (var_newDeclaration_3563  COMMA_SOURCE_FILE ("program.galgas", 102)) ;
    enumerator_3430.gotoNextObject () ;
  }
  cEnumerator_extendStaticArrayDeclarationDictAST enumerator_3659 (var_ast_3225.readProperty_mExtendStaticArrayDeclarationAST (), EnumerationOrder::up) ;
  while (enumerator_3659.hasCurrentObject ()) {
    cEnumerator_staticListValueListAST enumerator_3726 (enumerator_3659.current_mStaticList (HERE), EnumerationOrder::up) ;
    while (enumerator_3726.hasCurrentObject ()) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_3726.current_mLocation (HERE), GGS_string ("'").add_operation (enumerator_3659.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 106)).add_operation (GGS_string ("' static list is not defined"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 106)), fixItArray2  COMMA_SOURCE_FILE ("program.galgas", 106)) ;
      enumerator_3726.gotoNextObject () ;
    }
    enumerator_3659.gotoNextObject () ;
  }
  {
  routine_enter_5F_NOP_5F_function_26_ (var_ast_3225.mProperty_mDeclarationListAST, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 110)) ;
  }
  {
  routine_addTargetSpecificFiles_3F_forTarget_26_toAST_3F_currentDirectory_26_importedFilePathSet (constinArgument_inTargetName, var_ast_3225, constinArgument_inCurrentDirectory, var_sourceFileAbsolutePathSet_3254, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 112)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 118)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_ast_3225.mProperty_mDeclarationListAST.addAssign_operation (GGS_compiletimeBoolAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("program.galgas", 121)) ;
      var_ast_3225.mProperty_mDeclarationListAST.addAssign_operation (GGS_compileTimeIntAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("program.galgas", 123)) ;
      var_ast_3225.mProperty_mDeclarationListAST.addAssign_operation (GGS_boolTypeAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("program.galgas", 125)) ;
      var_ast_3225.mProperty_mDeclarationListAST.addAssign_operation (GGS_literalStringDeclarationAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("program.galgas", 127)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 130)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_retainRequiredDrivers_26_ (var_ast_3225, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 131)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 134)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("program.galgas", 134)).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      routine_print_3F_ (GGS_string ("    ").add_operation (var_ast_3225.readProperty_mDeclarationListAST ().getter_count (SOURCE_FILE ("program.galgas", 135)).getter_string (SOURCE_FILE ("program.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 135)).add_operation (GGS_string (" declarations\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 135)) ;
      }
      {
      routine_print_3F_ (GGS_string ("    Duration: ").add_operation (var_parsingTime_3105.getter_string (SOURCE_FILE ("program.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 136)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 136)) ;
      }
    }
  }
  GGS_declarationListAST temp_6 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("program.galgas", 139)) ;
  GGS_declarationListAST var_orderedDeclarationListAST_5275 = temp_6 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 140)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      GGS_timer var_t_5354 = GGS_timer::class_func_start (SOURCE_FILE ("program.galgas", 141)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          routine_print_3F_ (GGS_string ("** Declaration sorting\n"), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 143)) ;
          }
        }
      }
      {
      routine_buildOrderedDeclarationList_3F_ast_3F_sourceFile_3F_endOfSourceFile_21_orderedDeclarationList (var_ast_3225, constinArgument_inSourceFile.readProperty_string (), constinArgument_inEndOfSourceFile, var_orderedDeclarationListAST_5275, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 145)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_9) {
          {
          routine_print_3F_ (GGS_string ("    Duration: ").add_operation (var_t_5354.getter_string (SOURCE_FILE ("program.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 152)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 152)) ;
          }
        }
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 156)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      cEnumerator_checkTargetListAST enumerator_5936 (var_ast_3225.readProperty_mCheckTargetListAST (), EnumerationOrder::up) ;
      while (enumerator_5936.hasCurrentObject ()) {
        GGS_bool var_accepted_5996 = GGS_bool (false) ;
        cEnumerator_lstringlist enumerator_6024 (enumerator_5936.current_mAcceptedTargetList (HERE), EnumerationOrder::up) ;
        bool bool_11 = var_accepted_5996.operator_not (SOURCE_FILE ("program.galgas", 159)).isValidAndTrue () ;
        if (enumerator_6024.hasCurrentObject () && bool_11) {
          while (enumerator_6024.hasCurrentObject () && bool_11) {
            var_accepted_5996 = GGS_bool (ComparisonKind::equal, enumerator_6024.current_mValue (HERE).readProperty_string ().objectCompare (constinArgument_inTargetName.readProperty_string ())) ;
            enumerator_6024.gotoNextObject () ;
            if (enumerator_6024.hasCurrentObject ()) {
              bool_11 = var_accepted_5996.operator_not (SOURCE_FILE ("program.galgas", 159)).isValidAndTrue () ;
            }
          }
        }
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = var_accepted_5996.operator_not (SOURCE_FILE ("program.galgas", 162)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_5936.current_mTargetConstructLocation (HERE), GGS_string ("invalid target"), fixItArray13  COMMA_SOURCE_FILE ("program.galgas", 163)) ;
          }
        }
        enumerator_5936.gotoNextObject () ;
      }
    }
  }
  GGS_semanticContext var_semanticContext_6352 = GGS_semanticContext::init (inCompiler COMMA_HERE) ;
  GGS_staticEntityMap var_globalLiteralStringMap_6399 = GGS_staticEntityMap::init (inCompiler COMMA_HERE) ;
  GGS_staticListInitializationMap temp_14 = GGS_staticListInitializationMap::init (inCompiler COMMA_SOURCE_FILE ("program.galgas", 170)) ;
  GGS_staticListInitializationMap var_staticListValueMap_6465 = temp_14 ;
  var_ast_3225.mProperty_mDeclarationListAST = var_orderedDeclarationListAST_5275 ;
  GGS_declarationDecorationList temp_15 = GGS_declarationDecorationList::init (inCompiler COMMA_SOURCE_FILE ("program.galgas", 172)) ;
  GGS_declarationDecorationList var_decoratedDeclarationList_6577 = temp_15 ;
  GGS_decoratedRegularRoutineList temp_16 = GGS_decoratedRegularRoutineList::init (inCompiler COMMA_SOURCE_FILE ("program.galgas", 173)) ;
  GGS_decoratedRegularRoutineList var_decoratedRoutineList_6643 = temp_16 ;
  GGS_routineListIR temp_17 = GGS_routineListIR::init (inCompiler COMMA_SOURCE_FILE ("program.galgas", 174)) ;
  GGS_routineListIR var_routineListIR_6691 = temp_17 ;
  GGS_userLLVMTypeDefinitionListIR temp_18 = GGS_userLLVMTypeDefinitionListIR::init (inCompiler COMMA_SOURCE_FILE ("program.galgas", 175)) ;
  GGS_userLLVMTypeDefinitionListIR var_userLLVMTypeDefinitionListIR_6747 = temp_18 ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 176)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GGS_timer var_t_6829 = GGS_timer::class_func_start (SOURCE_FILE ("program.galgas", 177)) ;
      {
      routine_buildSemanticContext_3F_sourceFile_3F_ast_26_staticEntityMap_26_staticlistValues_21_context_21__21__21__21_ (constinArgument_inSourceFile, var_ast_3225, var_globalLiteralStringMap_6399, var_staticListValueMap_6465, var_semanticContext_6352, var_decoratedDeclarationList_6577, var_decoratedRoutineList_6643, var_routineListIR_6691, var_userLLVMTypeDefinitionListIR_6747, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 178)) ;
      }
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_20) {
          {
          routine_print_3F_ (GGS_string ("** Context: ").add_operation (var_t_6829.getter_string (SOURCE_FILE ("program.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 190)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 190)) ;
          }
        }
      }
    }
  }
  GGS_intermediateCodeStruct var_intermediateCodeStruct_7388 = GGS_intermediateCodeStruct::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 195)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_21) {
      GGS_timer var_t_7466 = GGS_timer::class_func_start (SOURCE_FILE ("program.galgas", 196)) ;
      {
      routine_semanticAnalysis_3F_sourceFile_3F_ast_3F_allSourceFilePaths_3F_decoratedDeclarationList_3F_decoratedRoutineList_3F_routineListIR_3F_context_3F_endOfSourceFile_3F_staticEntityMap_21_intermediateCode (constinArgument_inSourceFile.readProperty_string (), var_ast_3225, var_sourceFileAbsolutePathSet_3254, var_decoratedDeclarationList_6577, var_decoratedRoutineList_6643, var_routineListIR_6691, var_semanticContext_6352, constinArgument_inEndOfSourceFile, var_globalLiteralStringMap_6399, var_intermediateCodeStruct_7388, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 197)) ;
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          routine_print_3F_ (GGS_string ("** Semantic: ").add_operation (var_t_7466.getter_string (SOURCE_FILE ("program.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 210)) ;
          }
        }
      }
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 214)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GGS_timer var_tOpt_8167 = GGS_timer::class_func_start (SOURCE_FILE ("program.galgas", 215)) ;
      {
      routine_codeOptimization_3F__26_intermediateCode (constinArgument_inSourceFile.readProperty_string (), var_intermediateCodeStruct_7388, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 216)) ;
      }
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_24) {
          {
          routine_print_3F_ (GGS_string ("    Duration: ").add_operation (var_tOpt_8167.getter_string (SOURCE_FILE ("program.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 218)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 218)) ;
          }
        }
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas", 222)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_codeGeneration_3F_currentDir_3F_outputFile_3F_eof_3F_intermediateCode_3F_userDefinedTypes_3F_target_3F_panicCodeType_3F_panicLineType_3F_interrupts_3F_staticlistValues_3F_targetParameters (constinArgument_inCurrentDirectory, constinArgument_inSourceFile.readProperty_string (), constinArgument_inEndOfSourceFile, var_intermediateCodeStruct_7388, var_userLLVMTypeDefinitionListIR_6747, constinArgument_inTargetName, var_semanticContext_6352.readProperty_mPanicCodeType (), var_semanticContext_6352.readProperty_mPanicLineType (), var_semanticContext_6352.readProperty_mAvailableInterruptMap (), var_staticListValueMap_6465, var_semanticContext_6352.readProperty_mTargetParameters (), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 223)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'addTargetSpecificFiles?forTarget&toAST?currentDirectory&importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_addTargetSpecificFiles_3F_forTarget_26_toAST_3F_currentDirectory_26_importedFilePathSet (const GGS_lstring constinArgument_inTargetName,
                                                                                                      GGS_ast & ioArgument_ioAST,
                                                                                                      const GGS_string constinArgument_inCurrentDirectory,
                                                                                                      GGS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_string var_targetDirectory_9448 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 248)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_targetDirectory_9448.getter_directoryExists (SOURCE_FILE ("program.galgas", 249)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GGS_string var_targetDefinitionFullPath_9614 = var_targetDirectory_9448.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 250)).add_operation (constinArgument_inTargetName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 250)).add_operation (GGS_string ("/+config.omnibus-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 250)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_targetDefinitionFullPath_9614.getter_fileExists (SOURCE_FILE ("program.galgas", 251)).boolEnum () ;
            if (kBoolTrue == test_2) {
              GGS_lstringlist var_importedFileList_9856 ;
              var_importedFileList_9856.drop () ;
              GGS_location joker_9883 ; // Joker input parameter
              cGrammar_omnibus_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, var_targetDefinitionFullPath_9614.getter_nowhere (SOURCE_FILE ("program.galgas", 256)), ioArgument_ioAST, var_importedFileList_9856, joker_9883  COMMA_SOURCE_FILE ("program.galgas", 252)) ;
              {
              routine_recursiveImportFileSystemTargetFiles_26_ast_3F_targetDirectory_3F_importClauseList_26_importedFilePathSet (ioArgument_ioAST, var_targetDirectory_9448.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 259)).add_operation (constinArgument_inTargetName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 259)), var_importedFileList_9856, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 257)) ;
              }
            }
          }
          if (kBoolFalse == test_2) {
            TC_Array <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inTargetName.readProperty_location (), GGS_string ("This target is not defined in '").add_operation (GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()), inCompiler COMMA_SOURCE_FILE ("program.galgas", 265)).add_operation (GGS_string ("' directory"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 265)), fixItArray3  COMMA_SOURCE_FILE ("program.galgas", 264)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("program.galgas", 268)).readProperty_location (), GGS_string ("the '").add_operation (GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()), inCompiler COMMA_SOURCE_FILE ("program.galgas", 268)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 268)), fixItArray4  COMMA_SOURCE_FILE ("program.galgas", 268)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_filewrapper var_fw_10603 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_fw_10603.getter_fileExistsAtPath (constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/+config.omnibus-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 273)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GGS_string var_source_10731 = var_fw_10603.getter_textFileContentsAtPath (constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/+config.omnibus-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 274)) ;
        GGS_lstringlist var_importedFileList_10902 ;
        var_importedFileList_10902.drop () ;
        GGS_location joker_10927 ; // Joker input parameter
        cGrammar_omnibus_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_source_10731, constinArgument_inTargetName.readProperty_string (), ioArgument_ioAST, var_importedFileList_10902, joker_10927  COMMA_SOURCE_FILE ("program.galgas", 275)) ;
        {
        routine_recursiveImportEmbeddedTargetFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (ioArgument_ioAST, constinArgument_inTargetName.readProperty_string (), var_importedFileList_10902, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 280)) ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inTargetName.readProperty_location (), GGS_string ("This target is not defined in embedded targets"), fixItArray6  COMMA_SOURCE_FILE ("program.galgas", 287)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursiveImportFileSystemTargetFiles&ast?targetDirectory?importClauseList&importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_recursiveImportFileSystemTargetFiles_26_ast_3F_targetDirectory_3F_importClauseList_26_importedFilePathSet (GGS_ast & ioArgument_ioAST,
                                                                                                                        const GGS_string constinArgument_inTargetDirectory,
                                                                                                                        const GGS_lstringlist constinArgument_inImportedClauseList,
                                                                                                                        GGS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_11660 (constinArgument_inImportedClauseList, EnumerationOrder::up) ;
  while (enumerator_11660.hasCurrentObject ()) {
    GGS_string var_absolutePath_11701 = constinArgument_inTargetDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 302)).add_operation (enumerator_11660.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 302)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_absolutePath_11701.getter_fileExists (SOURCE_FILE ("program.galgas", 303)).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath_11701 COMMA_SOURCE_FILE ("program.galgas", 304)).operator_not (SOURCE_FILE ("program.galgas", 304)).boolEnum () ;
          if (kBoolTrue == test_1) {
            ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath_11701  COMMA_SOURCE_FILE ("program.galgas", 305)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::equal, var_absolutePath_11701.getter_pathExtension (SOURCE_FILE ("program.galgas", 306)).objectCompare (GGS_string ("omnibus-import"))).boolEnum () ;
              if (kBoolTrue == test_2) {
                GGS_lstringlist var_importedFileList_12072 ;
                var_importedFileList_12072.drop () ;
                GGS_location joker_12101 ; // Joker input parameter
                cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absolutePath_11701, enumerator_11660.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE), ioArgument_ioAST, var_importedFileList_12072, joker_12101  COMMA_SOURCE_FILE ("program.galgas", 307)) ;
                {
                routine_recursiveImportFileSystemTargetFiles_26_ast_3F_targetDirectory_3F_importClauseList_26_importedFilePathSet (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList_12072, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 311)) ;
                }
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = GGS_bool (ComparisonKind::equal, var_absolutePath_11701.getter_pathExtension (SOURCE_FILE ("program.galgas", 317)).objectCompare (GGS_string ("omnibus-target"))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  GGS_lstringlist var_importedFileList_12588 ;
                  var_importedFileList_12588.drop () ;
                  GGS_location joker_12617 ; // Joker input parameter
                  cGrammar_omnibus_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absolutePath_11701, enumerator_11660.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE), ioArgument_ioAST, var_importedFileList_12588, joker_12617  COMMA_SOURCE_FILE ("program.galgas", 318)) ;
                  {
                  routine_recursiveImportFileSystemTargetFiles_26_ast_3F_targetDirectory_3F_importClauseList_26_importedFilePathSet (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList_12588, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 323)) ;
                  }
                }
              }
              if (kBoolFalse == test_3) {
                TC_Array <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (enumerator_11660.current_mValue (HERE).readProperty_location (), GGS_string ("invalid extension (should be .omnibus-import or .omnibus-target)"), fixItArray4  COMMA_SOURCE_FILE ("program.galgas", 330)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_11660.current_mValue (HERE).readProperty_location (), GGS_string ("file does not exist in file system target definition"), fixItArray5  COMMA_SOURCE_FILE ("program.galgas", 334)) ;
    }
    enumerator_11660.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursiveImportEmbeddedTargetFiles&ast?currentDirectory?importClauseList&importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_recursiveImportEmbeddedTargetFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (GGS_ast & ioArgument_ioAST,
                                                                                                                       const GGS_string constinArgument_inCurrentDirectory,
                                                                                                                       const GGS_lstringlist constinArgument_inImportedClauseList,
                                                                                                                       GGS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_13510 (constinArgument_inImportedClauseList, EnumerationOrder::up) ;
  while (enumerator_13510.hasCurrentObject ()) {
    GGS_string var_fullPath_13551 = constinArgument_inCurrentDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 348)).add_operation (enumerator_13510.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 348)) ;
    GGS_filewrapper var_fw_13615 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_fw_13615.getter_fileExistsAtPath (var_fullPath_13551, inCompiler COMMA_SOURCE_FILE ("program.galgas", 350)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_string var_embeddedPath_13704 = GGS_string (":").add_operation (var_fullPath_13551, inCompiler COMMA_SOURCE_FILE ("program.galgas", 351)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath_13704 COMMA_SOURCE_FILE ("program.galgas", 352)).operator_not (SOURCE_FILE ("program.galgas", 352)).boolEnum () ;
          if (kBoolTrue == test_1) {
            ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath_13704  COMMA_SOURCE_FILE ("program.galgas", 353)) ;
            GGS_lstringlist var_importedFileList_13944 ;
            var_importedFileList_13944.drop () ;
            GGS_location joker_13971 ; // Joker input parameter
            cGrammar_omnibus_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_13615.getter_textFileContentsAtPath (var_fullPath_13551, inCompiler COMMA_SOURCE_FILE ("program.galgas", 358)), enumerator_13510.current_mValue (HERE).readProperty_string (), ioArgument_ioAST, var_importedFileList_13944, joker_13971  COMMA_SOURCE_FILE ("program.galgas", 354)) ;
            {
            routine_recursiveImportEmbeddedTargetFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (ioArgument_ioAST, var_fullPath_13551.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 361)), var_importedFileList_13944, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 359)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("program.galgas", 367)), GGS_string ("cannot find '").add_operation (enumerator_13510.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 367)).add_operation (GGS_string ("' file in embedded files"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 367)), fixItArray2  COMMA_SOURCE_FILE ("program.galgas", 367)) ;
    }
    enumerator_13510.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursiveImportFiles&ast?currentDirectory?importClauseList&importedFilePathSet'
//
//--------------------------------------------------------------------------------------------------

void routine_recursiveImportFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (GGS_ast & ioArgument_ioAST,
                                                                                                         const GGS_string constinArgument_inCurrentDirectory,
                                                                                                         const GGS_lstringlist constinArgument_inImportedClauseList,
                                                                                                         GGS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_14749 (constinArgument_inImportedClauseList, EnumerationOrder::up) ;
  while (enumerator_14749.hasCurrentObject ()) {
    GGS_string var_absolutePath_14790 = enumerator_14749.current_mValue (HERE).readProperty_string ().getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 381)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_absolutePath_14790.getter_fileExists (SOURCE_FILE ("program.galgas", 382)).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath_14790 COMMA_SOURCE_FILE ("program.galgas", 383)).operator_not (SOURCE_FILE ("program.galgas", 383)).boolEnum () ;
          if (kBoolTrue == test_1) {
            ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath_14790  COMMA_SOURCE_FILE ("program.galgas", 384)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::equal, var_absolutePath_14790.getter_pathExtension (SOURCE_FILE ("program.galgas", 385)).objectCompare (GGS_string ("omnibus-import"))).boolEnum () ;
              if (kBoolTrue == test_2) {
                GGS_lstringlist var_importedFileList_15205 ;
                var_importedFileList_15205.drop () ;
                GGS_location joker_15234 ; // Joker input parameter
                cGrammar_omnibus_5F_grammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absolutePath_14790, enumerator_14749.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE), ioArgument_ioAST, var_importedFileList_15205, joker_15234  COMMA_SOURCE_FILE ("program.galgas", 386)) ;
                {
                routine_recursiveImportFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (ioArgument_ioAST, constinArgument_inCurrentDirectory, var_importedFileList_15205, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 391)) ;
                }
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = GGS_bool (ComparisonKind::equal, var_absolutePath_14790.getter_pathExtension (SOURCE_FILE ("program.galgas", 397)).objectCompare (GGS_string ("omnibus-target"))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  GGS_lstringlist var_importedFileList_15707 ;
                  var_importedFileList_15707.drop () ;
                  GGS_location joker_15736 ; // Joker input parameter
                  cGrammar_omnibus_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absolutePath_14790, enumerator_14749.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE), ioArgument_ioAST, var_importedFileList_15707, joker_15736  COMMA_SOURCE_FILE ("program.galgas", 398)) ;
                  {
                  routine_recursiveImportFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (ioArgument_ioAST, constinArgument_inCurrentDirectory, var_importedFileList_15707, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 403)) ;
                  }
                }
              }
              if (kBoolFalse == test_3) {
                TC_Array <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (enumerator_14749.current_mValue (HERE).readProperty_location (), GGS_string ("invalid extension (should be .omnibus-import or .omnibus-target)"), fixItArray4  COMMA_SOURCE_FILE ("program.galgas", 410)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      GGS_filewrapper var_fw_16201 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_fw_16201.getter_fileExistsAtPath (enumerator_14749.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 415)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GGS_string var_embeddedPath_16297 = GGS_string (":").add_operation (enumerator_14749.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 416)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath_16297 COMMA_SOURCE_FILE ("program.galgas", 417)).operator_not (SOURCE_FILE ("program.galgas", 417)).boolEnum () ;
            if (kBoolTrue == test_6) {
              ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath_16297  COMMA_SOURCE_FILE ("program.galgas", 418)) ;
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GGS_bool (ComparisonKind::equal, enumerator_14749.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("program.galgas", 419)).objectCompare (GGS_string ("omnibus-import"))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  GGS_lstringlist var_importedFileList_16608 ;
                  var_importedFileList_16608.drop () ;
                  GGS_location joker_16639 ; // Joker input parameter
                  cGrammar_omnibus_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_16201.getter_textFileContentsAtPath (enumerator_14749.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 424)), enumerator_14749.current_mValue (HERE).readProperty_string (), ioArgument_ioAST, var_importedFileList_16608, joker_16639  COMMA_SOURCE_FILE ("program.galgas", 420)) ;
                  {
                  routine_recursiveImportFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (ioArgument_ioAST, constinArgument_inCurrentDirectory, var_importedFileList_16608, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 425)) ;
                  }
                }
              }
              if (kBoolFalse == test_7) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, enumerator_14749.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("program.galgas", 431)).objectCompare (GGS_string ("omnibus-target"))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    GGS_lstringlist var_importedFileList_17136 ;
                    var_importedFileList_17136.drop () ;
                    GGS_location joker_17167 ; // Joker input parameter
                    cGrammar_omnibus_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_16201.getter_textFileContentsAtPath (enumerator_14749.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("program.galgas", 436)), enumerator_14749.current_mValue (HERE).readProperty_string (), ioArgument_ioAST, var_importedFileList_17136, joker_17167  COMMA_SOURCE_FILE ("program.galgas", 432)) ;
                    {
                    routine_recursiveImportFiles_26_ast_3F_currentDirectory_3F_importClauseList_26_importedFilePathSet (ioArgument_ioAST, constinArgument_inCurrentDirectory, var_importedFileList_17136, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 437)) ;
                    }
                  }
                }
                if (kBoolFalse == test_8) {
                  TC_Array <FixItDescription> fixItArray9 ;
                  inCompiler->emitSemanticError (enumerator_14749.current_mValue (HERE).readProperty_location (), GGS_string ("invalid extension (should be .omnibus-import or .omnibus-target)"), fixItArray9  COMMA_SOURCE_FILE ("program.galgas", 444)) ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_14749.current_mValue (HERE).readProperty_location (), GGS_string ("cannot find this file in file system and in embedded files"), fixItArray10  COMMA_SOURCE_FILE ("program.galgas", 448)) ;
      }
    }
    enumerator_14749.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'embeddedSampleCode'
//
//--------------------------------------------------------------------------------------------------

//--- File 'LPC-L2294/01-blinkleds.omnibus'

const char * gWrapperFileContent_0_embeddedSampleCode = 
  "target \"LPC-L2294\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section ledOn () {\n"
  "  ©IO1.CLR  = 1 << 23 // Led On\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section ledOff () {\n"
  "  ©IO1.SET  = 1 << 23 // Led Off\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    ledOn ()\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until:self.compteur)\n"
  "    ledOff ()\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

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
  nullptr
} ;

//--- All sub-directories of 'LPC-L2294' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_1 [1] = {
  nullptr
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

const char * gWrapperFileContent_4_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $B {\n"
  "  var a $u32 = 0\n"
  "  var b $u32 = 0\n"
  "}\n"
  "\n"
  "struct $C {\n"
  "  var c = $B ()\n"
  "}\n"
  "\n"
  "struct $Toto {\n"
  "  var a $u16 = 0\n"
  "  var c = no\n"
  "  var b = no\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "  var acc = $C ()\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode: $DigitalMode.output !toPort:.D13)\n"
  "    digital.set (!mode: $DigitalMode.output !toPort: LED_L1)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline +%= 1000\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    let n = self.acc.c.a +% self.deadline\n"
  "    self.acc.c.a = n\n"
  "    let x $u32 = 0x1234_5678\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!hex8:x.byteSwapped)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    let y $u15 = 0x1234\n"
  "    lcd.print (!hex4:extend (y.bitReversed))\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_4_embeddedSampleCode (
  "00-structure-example.omnibus",
  "omnibus",
  true, // Text file
 1043, // Text length
  gWrapperFileContent_4_embeddedSampleCode
) ;

//--- File 'teensy-3-1/01-blink-led.omnibus'

const char * gWrapperFileContent_12_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var continue = yes\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  while self.continue event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:time.now ())\n"
  "    self.continue = time.now () < 10_000\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_12_embeddedSampleCode (
  "01-blink-led.omnibus",
  "omnibus",
  true, // Text file
 809, // Text length
  gWrapperFileContent_12_embeddedSampleCode
) ;

//--- File 'teensy-3-1/02-blink-leds.omnibus'

const char * gWrapperFileContent_11_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:time.now ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T3 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T4 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T5 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_11_embeddedSampleCode (
  "02-blink-leds.omnibus",
  "omnibus",
  true, // Text file
 2371, // Text length
  gWrapperFileContent_11_embeddedSampleCode
) ;

//--- File 'teensy-3-1/03-push-buttons.omnibus'

const char * gWrapperFileContent_2_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P0)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P1)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P2)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P3)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P4)\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    self.compteur +%= 50\n"
  "    digital.write (!not digital.read (!port:BUTTON_P0) !toPort:LED_L0)\n"
  "    digital.write (!not digital.read (!port:BUTTON_P1) !toPort:LED_L1)\n"
  "    digital.write (!not digital.read (!port:BUTTON_P2) !toPort:LED_L2)\n"
  "    digital.write (!not digital.read (!port:BUTTON_P3) !toPort:LED_L3)\n"
  "    digital.write (!not digital.read (!port:BUTTON_P4) !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "\n"
  "  //············································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_2_embeddedSampleCode (
  "03-push-buttons.omnibus",
  "omnibus",
  true, // Text file
 1489, // Text length
  gWrapperFileContent_2_embeddedSampleCode
) ;

//--- File 'teensy-3-1/04-section-service-duration.omnibus'

const char * gWrapperFileContent_13_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section emptySection () {\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "service emptyService () {\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section getSysTick () -> $u32 {\n"
  "  result = ©SYST.CVR\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let ITERATIONS = 7\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    var cumul $u32 = 0\n"
  "  //--- Compute getSysTick duration\n"
  "    for _ $u32 in 0 ..< ITERATIONS {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      let t1 = getSysTick ()\n"
  "      cumul += t0 - t1\n"
  "      lcd.print (!u32:t0 - t1)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "    let systickDuration = cumul / ITERATIONS\n"
  "  //--- Compute emptySection duration\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    for _ $u32 in 0 ..< ITERATIONS {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptySection ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.print (!u32:t0 - t1 - systickDuration)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "  //--- Compute emptyService duration\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    for _ $u32 in 0 ..< 4 {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptyService ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.print (!u32:t0 - t1 - systickDuration)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "  }\n"
  "\n"
  "\n"
  "  //············································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_13_embeddedSampleCode (
  "04-section-service-duration.omnibus",
  "omnibus",
  true, // Text file
 1887, // Text length
  gWrapperFileContent_13_embeddedSampleCode
) ;

//--- File 'teensy-3-1/05-semaphore.omnibus'

const char * gWrapperFileContent_3_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "typealias $Sémaphore = $Semaphore\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync sémaphore = $Sémaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode: .output !toPort: .D13)\n"
  "    digital.set (!mode: .output !toPort: LED_L1)\n"
  "    digital.set (!mode: .output !toPort: LED_L2)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until: self.top) {\n"
  "    sémaphore.signal ()\n"
  "    self.top += 250\n"
  "    digital.write (!yes !toPort: LED_L1)\n"
  "    let constanteAccentuée = self.top\n"
  "    time.wait (!until: constanteAccentuée)\n"
  "    sémaphore.signal ()\n"
  "    self.top += 250\n"
  "    digital.write (!no !toPort: LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "\n"
  "  while event sémaphore.wait () {\n"
  "    digital.write (!yes !toPort: LED_L2)\n"
  "    sémaphore.wait ()\n"
  "    digital.write (!no !toPort: LED_L2)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_3_embeddedSampleCode (
  "05-semaphore.omnibus",
  "omnibus",
  true, // Text file
 1195, // Text length
  gWrapperFileContent_3_embeddedSampleCode
) ;

//--- File 'teensy-3-1/06-integer-slices.omnibus'

const char * gWrapperFileContent_8_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let N = 12\n"
  "let slice = N [1 ... 3]\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var test = yes\n"
  "\n"
  "  event @onSetup first {\n"
  "    var toto = yes\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    let b = {$u8 !b:self.test !1:0 !6:12}\n"
  "    lcd.print (!hex2:extend (b))\n"
  "    lcd.print (!spaces:1)\n"
  "    {$u8 \?b:var b7 \?2:var b2 \?5:var b3} = 0xAC\n"
  "    let bb = {$u8 !b:b7 !2:b2 !5:b3}\n"
  "    lcd.print (!hex2:extend (bb))\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    self.compteur +%= 500\n"
  "    digital.toggle (!port:LED_L3)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_8_embeddedSampleCode (
  "06-integer-slices.omnibus",
  "omnibus",
  true, // Text file
 1005, // Text length
  gWrapperFileContent_8_embeddedSampleCode
) ;

//--- File 'teensy-3-1/07-static-list-example.omnibus'

const char * gWrapperFileContent_15_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "staticArray maListeStatique {\n"
  "  let a $u32\n"
  "  let b $u32\n"
  "  let p func user (\?!par: y $u32)\n"
  "  let f func user (\?arg: x $u32) -> $u32\n"
  "}\n"
  "\n"
  "func toggleL2 user (\?!par: y $u32) {\n"
  "  digital.toggle (!port:LED_L2)\n"
  "  y += 1\n"
  "}\n"
  "\n"
  "func p2 user (\?arg: x $u32) -> $u32 {\n"
  "  result = 10 + x\n"
  "}\n"
  "\n"
  "func toggleL3 user (\?!par: y $u32) {\n"
  "  digital.toggle (!port:LED_L3)\n"
  "  y += 1\n"
  "}\n"
  "\n"
  "func p3 user (\?arg: x $u32) -> $u32 {\n"
  "  result = 15 + x\n"
  "}\n"
  "\n"
  "extend staticArray maListeStatique (\n"
  "  !5 !9 !func toggleL2 (\?!par: y $u32) !func p2 (\?arg: x $u32),\n"
  "  !15 !29 !func toggleL3 (\?!par: y $u32) !func p3 (\?arg: x $u32)\n"
  ")\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline +%= 250\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    var total $u32 = 0\n"
  "    for élément in maListeStatique {\n"
  "      total = total + élément.a\n"
  "      total += élément.a\n"
  "      total += élément.b\n"
  "      total += élément.f (!arg: 1)\n"
  "      élément.p (!\?par: total)\n"
  "    }\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:total)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_15_embeddedSampleCode (
  "07-static-list-example.omnibus",
  "omnibus",
  true, // Text file
 1544, // Text length
  gWrapperFileContent_15_embeddedSampleCode
) ;

//--- File 'teensy-3-1/08-guarded-semaphore2.omnibus'

const char * gWrapperFileContent_9_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync s0 = $Semaphore (!value:0)\n"
  "sync s1 = $Semaphore (!value:0)\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.top) {\n"
  "    s0.signal ()\n"
  "    self.top += 250\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    time.wait (!until:self.top)\n"
  "    s0.signal ()\n"
  "    self.top += 250\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.top) {\n"
  "    s1.signal ()\n"
  "    self.top += 249\n"
  "    digital.write (!yes !toPort:LED_L4)\n"
  "    time.wait (!until:self.top)\n"
  "    s1.signal ()\n"
  "    self.top += 249\n"
  "    digital.write (!no !toPort:LED_L4)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "  var toggleD3 = no\n"
  "\n"
  "  while event s0.wait () {\n"
  "    self.toggleD3 = yes // Just for having a boolean guard\n"
  "  }\n"
  "\n"
  "  while self.toggleD3 {\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    self.toggleD3 = no\n"
  "  }\n"
  "\n"
  "  while event s1.wait () {\n"
  "    digital.toggle (!port:LED_L3)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    digital.toggle (!port:LED_L2)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_9_embeddedSampleCode (
  "08-guarded-semaphore2.omnibus",
  "omnibus",
  true, // Text file
 1886, // Text length
  gWrapperFileContent_9_embeddedSampleCode
) ;

//--- File 'teensy-3-1/09-rendez-vous.omnibus'

const char * gWrapperFileContent_14_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync $RendezVous {\n"
  "  var inputWaitList = $TaskList ()\n"
  "  var outputWaitList = $TaskList ()\n"
  "  var inputGuardList = $GuardList ()\n"
  "  var outputGuardList = $GuardList ()\n"
  "\n"
  "  public primitive input @mutating () {\n"
  "    makeTaskReady (!\?fromList:self.outputWaitList \?found:let found)\n"
  "    if not found {\n"
  "      notifyChange (!\?forGuard:self.outputGuardList)\n"
  "      block (!\?inList:self.inputWaitList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public primitive output @mutating () {\n"
  "    makeTaskReady (!\?fromList:self.inputWaitList \?found:let found)\n"
  "    if not found {\n"
  "      notifyChange (!\?forGuard:self.inputGuardList)\n"
  "      block (!\?inList:self.outputWaitList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public guard input @noUnusedWarning () {\n"
  "    makeTaskReady (!\?fromList:self.outputWaitList \?found:accept)\n"
  "    if not accept {\n"
  "      handle (!\?guard:self.inputGuardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  guard output @noUnusedWarning () {\n"
  "    makeTaskReady (!\?fromList:self.inputWaitList \?found:accept)\n"
  "    if not accept {\n"
  "      handle (!\?guard:self.outputGuardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync rdvs = $RendezVous ()\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "\n"
  "  while event time.wait (!until:self.top) {\n"
  "    rdvs.output ()\n"
  "    self.top += 250\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    time.wait (!until:self.top)\n"
  "    rdvs.output ()\n"
  "    self.top += 250\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "\n"
  "  while event rdvs.input () {\n"
  "    digital.write (!yes !toPort:LED_L1)\n"
  "    rdvs.input ()\n"
  "    digital.write (!no !toPort:LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_14_embeddedSampleCode (
  "09-rendez-vous.omnibus",
  "omnibus",
  true, // Text file
 2287, // Text length
  gWrapperFileContent_14_embeddedSampleCode
) ;

//--- File 'teensy-3-1/10-rendez-vous-data.omnibus'

const char * gWrapperFileContent_10_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync $RendezVousData {\n"
  "  var readBarrier  = $Semaphore (!value:0)\n"
  "  var writeBarrier = $Semaphore (!value:1)\n"
  "  var data $u32 = 0\n"
  "\n"
  "  public func output user @mutating @noUnusedWarning (\?data:inData $u32) {\n"
  "    self.writeBarrier.wait ()\n"
  "    self.data = inData\n"
  "    self.readBarrier.signal ()\n"
  "  }\n"
  "\n"
  "  public guard output @noUnusedWarning (\?data:inData $u32) : self.writeBarrier.wait () {\n"
  "    self.data = inData\n"
  "    self.readBarrier.signal ()\n"
  "  }\n"
  "\n"
  "  public func input user @mutating @noUnusedWarning (!data:outData $u32) {\n"
  "    self.readBarrier.wait ()\n"
  "    outData = self.data\n"
  "    self.writeBarrier.signal ()\n"
  "  }\n"
  "\n"
  "  public guard input @noUnusedWarning (!data:outData $u32) : self.readBarrier.wait () {\n"
  "    outData = self.data\n"
  "    self.writeBarrier.signal ()\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync s = $Semaphore (!value:1)\n"
  "sync rdvs = $RendezVousData ()\n"
  "sync rdvs2 = $RendezVousData ()\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.top) {\n"
  "    rdvs2.input (\?data:let n)\n"
  "    rdvs.output (!data:n)\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.top += 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 @stacksize 1024 @autostart {\n"
  "  while event rdvs.input (\?data:let x) {\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    s.wait ()\n"
  "      lcd.goto (!line:0 !column:0)\n"
  "      lcd.print (!u32:x)\n"
  "    s.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 @stacksize 1024 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "  var n $u32 = 0\n"
  "\n"
  "  while event rdvs2.output (!data:self.n) {\n"
  "    digital.toggle (!port:LED_L2)\n"
  "    s.wait ()\n"
  "      lcd.goto (!line:1 !column:0)\n"
  "      lcd.print (!u32:self.n)\n"
  "    s.signal ()\n"
  "    self.n += 1\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    digital.toggle (!port:LED_L4)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_10_embeddedSampleCode (
  "10-rendez-vous-data.omnibus",
  "omnibus",
  true, // Text file
 2501, // Text length
  gWrapperFileContent_10_embeddedSampleCode
) ;

//--- File 'teensy-3-1/11-pit-unprivileged-mode-it.omnibus'

const char * gWrapperFileContent_6_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "section setupPIT () {\n"
  "  ©PIT.MCR = 0\n"
  "  ©PIT.LDVAL [0] = 200000\n"
  "  ©PIT.TCTRL [0] = {©PIT.TCTRL !TIE:1 !TEN:1} // $interrupt, enabled\n"
  "  enable (!interrupt: .PITChannel0)\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "driver pit > digital {\n"
  "  var gPITValue $u32 = 0\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !PIT:1}\n"
  "  }\n"
  "\n"
  "  section getPITValue (!outValue $u32) {\n"
  "    outValue = self.gPITValue\n"
  "  }\n"
  "\n"
  "  interrupt section PITChannel0 {\n"
  "  //--- Acquitter l'interruption\n"
  "    ©PIT.TFLG [0] = {©PIT.TFLG !TIF:1}\n"
  "  //--- Incrémenter le compteur\n"
  "    self.gPITValue += 1\n"
  "  }\n"
  "}\n"
  "\n"
  "driver pit ()\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    setupPIT ()\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline +%= 250\n"
  "    digital.write (!yes !toPort:LED_L1) // Allumer la led\n"
  "    time.wait (!until:self.deadline)\n"
  "    self.deadline +%= 250\n"
  "    digital.write (!no !toPort:LED_L1)  // Éteindre la led\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!spaces:10)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    var value $u32\n"
  "    pit.getPITValue (\?value)\n"
  "    lcd.print (!u32:value)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_6_embeddedSampleCode (
  "11-pit-unprivileged-mode-it.omnibus",
  "omnibus",
  true, // Text file
 1482, // Text length
  gWrapperFileContent_6_embeddedSampleCode
) ;

//--- File 'teensy-3-1/12-array-example.omnibus'

const char * gWrapperFileContent_7_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let SIZE = 3\n"
  "\n"
  "typealias $A = [SIZE : $u32]\n"
  "\n"
  "struct $B {\n"
  "  var a $u32 = 0\n"
  "  var b $u32 = 0\n"
  "}\n"
  "\n"
  "struct $C {\n"
  "  var c = $B ()\n"
  "}\n"
  "\n"
  "let array = $A (!1 !2 !3)\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "  var array = $A (!repeated:0)\n"
  "  var array2 = $A (!repeated:1)\n"
  "  var index $i32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline +%= 1000\n"
  "//    digital.toggle (!port:LED_L1)\n"
  "    self.array [self.index] = 0\n"
  "    self.index +%= 1\n"
  "    if self.index == SIZE {\n"
  "      self.index = 0\n"
  "    }\n"
  "    for i $u32 in 0 ..< $A.count {\n"
  "      self.array [i] +%= 1\n"
  "    }\n"
  "    self.array2 = self.array\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    for i $u32 in 0 ..< $A.count {\n"
  "      lcd.print (!u32:self.array2 [i])\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "\n"
  "  //--- Init from a repeated static value\n"
  "    var a = $A (!repeated:5)\n"
  "  //--- Init from a repeated dynamic value\n"
  "    var e $u32 = 5\n"
  "    var b = $A (!repeated:e)\n"
  "  //--- Init from a static values\n"
  "    var c = $A (!0 !1 !2)\n"
  "  //--- Init from a dynamic values\n"
  "    var d = $A (!0 !e !2)\n"
  "  //---\n"
  "    var x $u32 = 0\n"
  "    for i $u32 in 0 ..< $A.count {\n"
  "      a [i] = 9\n"
  "      a [i] += 9\n"
  "      x += a [i]\n"
  "    }\n"
  "\n"
  "    var s = $B ()\n"
  "    var aa = s.a\n"
  "    var bb = s.b\n"
  "    s.a = aa\n"
  "    var s2 = $C ()\n"
  "    s2.c.a = aa\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_7_embeddedSampleCode (
  "12-array-example.omnibus",
  "omnibus",
  true, // Text file
 1651, // Text length
  gWrapperFileContent_7_embeddedSampleCode
) ;

//--- File 'teensy-3-1/13-usb-device.omnibus'

const char * gWrapperFileContent_5_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// USB DEVICE DRIVER\n"
  "// Kevin Cuzner wrote a simpler version, and a great blog article:\n"
  "//   http://kevincuzner.com/2014/12/12/teensy-3-1-bare-metal-writing-a-usb-driver/\n"
  "//   https://github.com/kcuzner/teensy-oscilloscope/blob/master/scope-teensy/src/usb.c\n"
  "//---\n"
  "//   https://github.com/prof7bit/frdm-kl25z-minimal-usb-hid\n"
  "//   http://www.beyondlogic.org/usbnutshell/usb1.shtml\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let NUM_ENDPOINTS = 4\n"
  "\n"
  "//······················································································································\n"
  "\n"
  "struct $BDT @copyable {\n"
  " var desc $u32 = 0\n"
  " var addr $u32 = 0\n"
  "}\n"
  "\n"
  "\n"
  "let BDT_OWN   = 0x80\n"
  "let BDT_DATA1 = 0x40\n"
  "let BDT_DATA0 = 0x00\n"
  "let BDT_DTS   = 0x08\n"
  "let BDT_STALL = 0x04\n"
  "//let BDT_PID(n) (((n) >> 2) & 15)\n"
  "\n"
  "let EP0_SIZE = 64\n"
  "\n"
  "func BDT_DESC section (\?count $u32 \?data $u1) -> $u32 {\n"
  "  result = BDT_OWN | BDT_DTS | (count << 16) | if data ≠ 0 {BDT_DATA1} else {BDT_DATA0}\n"
  "}\n"
  "\n"
  "let TX   = 1\n"
  "let RX   = 0\n"
  "let ODD  = 1\n"
  "let EVEN = 0\n"
  "let DATA0 = 0\n"
  "let DATA1 = 1\n"
  "\n"
  "func index section (\? endpoint $u32 \?tx $u32 \?odd $u32) -> $u32 {\n"
  "  result = (endpoint << 2) | (tx << 1) | odd\n"
  "}\n"
  "\n"
  "let TRACE_SIZE = 10\n"
  "\n"
  "//······················································································································\n"
  "\n"
  "driver usb_device > digital {\n"
  "// Descriptor table should be aligned on a 512 byte-boudary\n"
  "  var descriptorTable @align 512 =  [(NUM_ENDPOINTS+1)*4 : $BDT] (!repeated: $BDT ())\n"
  "\n"
  "  var ep0_rx0_buf @align 4 = [EP0_SIZE : $u8] (!repeated:0)\n"
  "  var ep0_rx1_buf @align 4 = [EP0_SIZE : $u8] (!repeated:0)\n"
  "  var ep0_tx_bdt_bank $u32 = 0\n"
  "\n"
  "  var état = [TRACE_SIZE : $u4] (!repeated:0)\n"
  "  var indexÉtat $u32 = 0\n"
  "\n"
  "  public section lireÉtat (\?index $u32) -> $u32 {\n"
  "    result = extend (self.état [index])\n"
  "  }\n"
  "\n"
  "  var trace $u32 = 0\n"
  "\n"
  "  public section lireAddresseUSB () -> $u32 {\n"
  "    result = extend (©USB0.ADDR)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  // This basically follows the flowchart in the Kinetis Quick Reference User Guide, Rev. 3, 05/2014, page 134\n"
  "  //-- Assume 48 MHz clock already running\n"
  "    ©SIM.SCGC4 |= {©SIM.SCGC4 !USBOTG:1} // SIM - enable clock\n"
  "//    MPU:RGDAAC [0] |= {MPU:RGDAAC !M4RE:1 !M4WE:1)\n"
  "  //--- If using IRC48M, turn on the USB clock recovery hardware\n"
  "//    if @static (F_CPU_MHZ == 180) || (F_CPU_MHZ == 216) {\n"
  "//      USB0:CLK_RECOVER_IRC_EN = {USB0:CLK_RECOVER_IRC_EN !IRC_EN:1 !REG_EN:1)\n"
  "//      USB0:CLK_RECOVER_CTRL = {USB0:CLK_RECOVER_CTRL !CLOCK_RECOVER_EN:1 !RESTART_IFRTRIM_EN:1)\n"
  "//    }\n"
  "  //--- Reset USB module (SB0:USBTRC0:USBRESET is always read as 0. Wait 2 USB clock cycles after setting this bit)\n"
  "    ©USB0.USBTRC0 |= {©USB0.USBTRC0 !USBRESET:1} // Page 1516\n"
  "    while ©USB0.USBTRC0.USBRESET ≠ 0 {} // wait for reset to end\n"
  "  //-- Set descriptor table base address\n"
  "    let descriptorTableBaseAddress = addressof (self.descriptorTable)\n"
  "    ©USB0.BDTPAGE1 = descriptorTableBaseAddress [08...15]\n"
  "    ©USB0.BDTPAGE2 = descriptorTableBaseAddress [16...23]\n"
  "    ©USB0.BDTPAGE3 = descriptorTableBaseAddress [24...31]\n"
  "  //--- Clear all ISR flags\n"
  "    ©USB0.ISTAT = 0xFF\n"
  "    ©USB0.ERRSTAT = 0xFF\n"
  "    ©USB0.OTGISTAT = 0xFF\n"
  "    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1} // | 0x40\n"
  "  //-- Enable USB\n"
  "    ©USB0.CTL = {©USB0.CTL !USBENSOFEN:1}\n"
  "    ©USB0.USBCTRL = 0\n"
  "  //-- Enable reset interrupt\n"
  "    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1}\n"
  "  //-- Enable interrupt in NVIC\n"
  "    enable (!interrupt: .USBOTG)\n"
  "  //--- Enable d+ pullup\n"
  "    ©USB0.CONTROL = {©USB0.CONTROL !DPPULLUPNONOTG:1} // Page 1515\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section USBOTG {\n"
  "    let status = ©USB0.ISTAT\n"
  "\n"
  "  //-------------------- RESET: configure Endpoint 0\n"
  "    if (status & {©USB0.ISTAT !USBRST:1}) ≠ 0 {\n"
  "//      self.état [self.indexÉtat] = 1\n"
  "//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "      self.configureEndPoint0OnReset ()\n"
  "  //    USB0:ISTAT = {USB0:ISTAT !USBRST:1) // Ack\n"
  "    }else{\n"
  "    //-------------------- START OF FRAME\n"
  "      if (status & {©USB0.ISTAT !SOFTOK:1}) ≠ 0 {\n"
  "  //        self.état [self.indexÉtat] = 2\n"
  "  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !SOFTOK:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- TOKEN COMPLETED\n"
  "      if (status & {©USB0.ISTAT !TOKDNE:1}) ≠ 0 { // Page 1502\n"
  "  //        digital.write (!yes !toPort:LED_L2)\n"
  "  //        self.état [self.indexÉtat] = 3\n"
  "  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        self.tokenCompleted ()\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !TOKDNE:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- STALL\n"
  "      if (status & {©USB0.ISTAT !STALL:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 4\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !STALL:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- ERROR\n"
  "      if (status & {©USB0.ISTAT !ERROR:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 5\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        let err = ©USB0.ERRSTAT\n"
  "        ©USB0.ERRSTAT = err\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !ERROR:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- SLEEP\n"
  "      if (status & {©USB0.ISTAT !SLEEP:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 6\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !SLEEP:1} // Ack\n"
  "      }\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func  configureEndPoint0OnReset section @mutating () {\n"
  "//      self.état [self.indexÉtat] = 1\n"
  "//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "      ©USB0.CTL |= {©USB0.CTL !ODDRST:1}\n"
  "      self.ep0_tx_bdt_bank = 0\n"
  "   //--- Set up buffers to receive Setup and OUT packets\n"
  "      self.descriptorTable [index(!0 !RX !EVEN)].desc = BDT_DESC (!EP0_SIZE  !0)\n"
  "      self.descriptorTable [index(!0 !RX !EVEN)].addr = addressof (self.ep0_rx0_buf)\n"
  "      self.descriptorTable [index(!0 !RX !ODD) ].desc = BDT_DESC (!EP0_SIZE !0)\n"
  "      self.descriptorTable [index(!0 !RX !ODD) ].addr = addressof (self.ep0_rx1_buf)\n"
  "      self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n"
  "      self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n"
  "    //--- Activate endpoint 0\n"
  "      ©USB0.ENDPT [0] = {©USB0.ENDPT !EPRXEN:1 !EPTXEN:1 !EPHSHK:1}\n"
  "    //--- Clear all ending interrupts\n"
  "      ©USB0.ERRSTAT = 0xFF\n"
  "      ©USB0.ISTAT = 0xFF\n"
  "    //--- Set the address to zero during enumeration\n"
  "      ©USB0.ADDR = 0\n"
  "    //--- Enable other interrupts\n"
  "      ©USB0.ERREN = 0xFF\n"
  "      ©USB0.INTEN = {©USB0.INTEN !STALLEN:1 !SLEEPEN:1 !TOKDNEEN:1 !SOFTOKEN:1 !ERROREN:1 !USBRSTEN:1}\n"
  "    //--- is this necessary\?\n"
  "   //   USB0.CTL = {USB0.CTL !USBENSOFEN:1) // Page 1507\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "  // This means a transaction has completed, we receive this interrupt\n"
  "  // after data was transferred and the handshake has been completed:\n"
  "  //\n"
  "  //   host:TOK_IN    -> device:DATA ->   host:ACK/NAK -> $interrupt\n"
  "  //   host:TOK_OUT   ->   host:DATA -> device:ACK/NAK -> $interrupt\n"
  "  //   host:TOK_SETUP ->   host:DATA -> device:ACK/NAK -> $interrupt\n"
  "  //\n"
  "  // The handler can then process the received data or queue more\n"
  "  // data to be sent during the next transaction. When there is a\n"
  "  // TOK_IN transaction and no data has been placed in the TX buffer\n"
  "  // then the hardware will automatically send a NAK:\n"
  "  //\n"
  "  //   host:TOK_IN -> device:NAK -> NO $interrupt!\n"
  "  //\n"
  "  // There will be no interrupt in this case! This means as long\n"
  "  // as there is no data to be sent there will also be no TOK_IN\n"
  "  // calls to the handler anymore. Something else has to prepare\n"
  "  // a new TX buffer for that endpoint when data becomes available\n"
  "  // again, the handler will only be called AFTER the transmission!\n"
  "\n"
  "  func tokenCompleted section @mutating () {\n"
  "    let transactionStatus = ©USB0.STAT\n"
  "    let endPoint $u4 = transactionStatus [4...7]\n"
  "//    let TX_transitionStatus = transactionStatus [3...3]\n"
  "//    let ODD_transitionStatus = transactionStatus [2...2]\n"
  "//    let index = index (!extend (endPoint) !extend (TX_transitionStatus) !extend (ODD_transitionStatus))\n"
  "    if endPoint == 0 {\n"
  "      self.endpoint_0_handler (!transactionStatus: transactionStatus)\n"
  "    }else{\n"
  "\n"
  "    }\n"
  "//    let index = transactionStatus >> 2\n"
  "//    let pid = (self.descriptorTable [index].desc >> 2) & 15\n"
  "//    if pid == 0x0D { // Setup received from host\n"
  "//      self.usb_setup ()\n"
  "//    //--- Unfreeze the USB, now that we're ready\n"
  "//      USB0:CTL = {USB0:CTL !USBENSOFEN:1)// clear TXSUSPENDTOKENBUSY bit\n"
  "//    }else if pid == 0x09 { // IN transaction completed to host\n"
  "//    }else if (pid == 0x01) || (pid == 0x02) { // OUT transaction received from host\n"
  "//\n"
  "//    }\n"
  "\n"
  "//    if endPoint == 0 {\n"
  "//      self.configure\n"
  "//    }else{\n"
  "//\n"
  "//    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func endpoint_0_handler section @mutating (\?transactionStatus: _ $u8) {\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "//  func section usb_setup @mutating () {\n"
  "//  //---\n"
  "//    let index $u32 = 0\n"
  "//    self.descriptorTable [index].desc = BDT_DESC (!EP0_SIZE !DATA1)\n"
  "//    self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n"
  "//    self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n"
  "//  //--- Grab the 8 byte setup info\n"
  "//    let bmRequestType = self.ep0_rx0_buf [0] & 0x1F\n"
  "//    let bRequest = self.ep0_rx0_buf [1]\n"
  "//    if bmRequestType == 0 { // Setup device\n"
  "//      digital.write (!yes !toPort:LED_L2)\n"
  "//      self.usb_setup_device (!bRequest)\n"
  "//    }else if bmRequestType == 1 { // Setup interface\n"
  "//      digital.write (!yes !toPort:LED_L3)\n"
  "//\n"
  "//    }else if bmRequestType == 2 { // Setup endpoint\n"
  "//      digital.write (!yes !toPort:LED_L4)\n"
  "//\n"
  "//    }\n"
  "//////    let wValue  = {UInt16 !8:self.ep0_rx0_buf [3] !8:self.ep0_rx0_buf [2]}\n"
  "//////    let wIndex  = {UInt16 !8:self.ep0_rx0_buf [5] !8:self.ep0_rx0_buf [4]}\n"
  "//////    let wLength = {UInt16 !8:self.ep0_rx0_buf [7] !8:self.ep0_rx0_buf [6]}\n"
  "////  //--- Build uint16 requestAndType\n"
  "////    let requestAndType = {UInt16 !8:bRequest !8:bmRequestType}\n"
  "////  //---\n"
  "////    if requestAndType == 0x0500 { // Set address, nothing to do\n"
  "////        digital.write (!yes !toPort:LED_L2)\n"
  "////    }else if requestAndType == 0x0900 { // Set configuration\n"
  "////        digital.write (!yes !toPort:LED_L1)\n"
  "////\n"
  "////\n"
  "////    }else if requestAndType == 0x0880 { // Get configuration\n"
  "////    }else if requestAndType == 0x0080 { // Get status (device)\n"
  "////    }else if requestAndType == 0x0082 { // Get status (endpoint)\n"
  "////    }else if requestAndType == 0x0102 { // Clear feature (device)\n"
  "////    }else if requestAndType == 0x0302 { // Clear feature (endpoint)\n"
  "////    }else if (requestAndType == 0x0680) || (requestAndType == 0x0681) { // Get descriptor\n"
  "////        digital.write (!yes !toPort:LED_L3)\n"
  "////    }\n"
  "//  }\n"
  "//\n"
  "////#define mGET_STATUS           0\n"
  "////#define mCLR_FEATURE          1\n"
  "////#define mSET_FEATURE          3\n"
  "////#define mSET_ADDRESS          5\n"
  "////#define mGET_DESC             6\n"
  "////#define mSET_DESC             7\n"
  "////#define mGET_CONFIG           8\n"
  "////#define mSET_CONFIG           9\n"
  "////#define mGET_INTF             10\n"
  "////#define mSET_INTF             11\n"
  "////#define mSYNC_FRAME           12\n"
  "//\n"
  "//  func section usb_setup_device @mutating (\?bRequest $u8) {\n"
  "//    self.trace = extend (bRequest)\n"
  "////    const usb_descriptor_list_t *p;\n"
  "////    int len;\n"
  "////\n"
  "////    switch (setup->bRequest) {\n"
  "////        case mGET_DESC:\n"
  "////            p = usb_descriptor_list;                    // Find entry in table\n"
  "////            while(p->wValue) {\n"
  "////                if(p->wValue == setup->wValue) {\n"
  "////                    if(p->length == 0)\n"
  "////                        len = p->addr[0];               // Use structure length\n"
  "////                    else\n"
  "////                        len = p->length;\n"
  "////\n"
  "////                    iprintf(\"sending 0x%04x %d\\r\\n\",setup->wValue, len);\n"
  "////                    usb_queue_tx(ep, p->addr, min(len, setup->wLength));\n"
  "////                    return;\n"
  "////                }\n"
  "////                p++;\n"
  "////            }\n"
  "////            iprintf(\"NOT IMPLEMENTED! 0x%04x\\r\\n\", setup->wValue);\n"
  "////            break;\n"
  "////\n"
  "////        case mSET_ADDRESS:\n"
  "////            device_state = ADDRESS;\n"
  "////            device_address = setup->wValue & 0x7f;\n"
  "////            usb_tx(ep,0,0);                         // Send handshake\n"
  "////            break;\n"
  "////\n"
  "////        case mSET_CONFIG:\n"
  "////            iprintf(\"setconfig: %d\\r\\n\", setup->wValue);\n"
  "////            device_state = ENUMERATED;\n"
  "////            usb_set_config(setup->wValue);\n"
  "////            usb_tx(ep,0,0);                         // Send handshake\n"
  "////            break;\n"
  "////\n"
  "////        default:\n"
  "////            iprintf(\"NOT IMPLEMENTED! %d\\r\\n\", setup->bRequest);\n"
  "////            break;\n"
  "////      }\n"
  "//  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver usb_device ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// TASK\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var tick $u32 = 0\n"
  "  var état $u32 = 0\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  while event time.wait (!until:self.tick) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.tick +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    for i $u32 in 0 ..< TRACE_SIZE {\n"
  "      let e = usb_device.lireÉtat (!i)\n"
  "      lcd.print (!hex2:e)\n"
  "    }\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!hex8:usb_device.lireAddresseUSB ())\n"
  "\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_5_embeddedSampleCode (
  "13-usb-device.omnibus",
  "omnibus",
  true, // Text file
 15177, // Text length
  gWrapperFileContent_5_embeddedSampleCode
) ;

//--- File 'teensy-3-1/carte-tp-teensy-3-1.omnibus-import'

const char * gWrapperFileContent_1_embeddedSampleCode = 
  "ctAssert target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver lcd (!DB4:.D16 !DB5:.D15 !DB6:.D14 !DB7:.D19 !RS:.D18 !ENABLE:.D17)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//   ACTIVITY LED\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver ActivityLed > digital {\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "  }\n"
  "}\n"
  "\n"
  "driver ActivityLed ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "public func activityLedOn safe section @exported () {\n"
  "  digital.write (!yes !toPort:.D13)\n"
  "}\n"
  "\n"
  "public func activityLedOff safe section @exported () {\n"
  "  digital.write (!no !toPort:.D13)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let LED_L0 = $DigitalPort.D3\n"
  "let LED_L1 = $DigitalPort.D4\n"
  "let LED_L2 = $DigitalPort.D5\n"
  "let LED_L3 = $DigitalPort.D6\n"
  "let LED_L4 = $DigitalPort.D7\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let BUTTON_P0 = $DigitalPort.D8\n"
  "let BUTTON_P1 = $DigitalPort.D9\n"
  "let BUTTON_P2 = $DigitalPort.D10\n"
  "let BUTTON_P3 = $DigitalPort.D11\n"
  "let BUTTON_P4 = $DigitalPort.D12\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "panic @setup 0 {\n"
  "  digital.set (!mode:.output !toPort:LED_L0)\n"
  "  digital.set (!mode:.output !toPort:LED_L1)\n"
  "  digital.set (!mode:.output !toPort:LED_L2)\n"
  "  digital.set (!mode:.output !toPort:LED_L3)\n"
  "  digital.set (!mode:.output !toPort:LED_L4)\n"
  "  lcd.clearScreenInPanicMode ()\n"
  "  lcd.gotoInPanicMode (!line:0 !column:0)\n"
  "  if LINE == 0 { // ISR Panic\n"
  "    lcd.printStringInPanicMode (!\"ISR PANIC\")\n"
  "  }else{\n"
  "    lcd.printStringInPanicMode (!FILE)\n"
  "    lcd.gotoInPanicMode (!line:2 !column:0)\n"
  "    lcd.printStringInPanicMode (!\"Line:\")\n"
  "    lcd.printUnsignedInPanicMode (!LINE)\n"
  "  }\n"
  "  lcd.gotoInPanicMode (!line:3 !column:0)\n"
  "  lcd.printStringInPanicMode (!\"Code:\")\n"
  "  lcd.printUnsignedInPanicMode (!CODE)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "panic @loop 0 {\n"
  "  time.panicBusyWaitingDuringMS (!50)\n"
  "  digital.toggle (!port:LED_L0)\n"
  "  digital.toggle (!port:LED_L1)\n"
  "  digital.toggle (!port:LED_L2)\n"
  "  digital.toggle (!port:LED_L3)\n"
  "  digital.toggle (!port:LED_L4)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

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
  nullptr
} ;

//--- All sub-directories of 'teensy-3-1' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_2 [1] = {
  nullptr
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

const char * gWrapperFileContent_27_embeddedSampleCode = 
  "target \"teensy-3-6/xtr64\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver RegisterRead > root {\n"
  "\n"
  "  public section SIM_CLKDIV1 () -> $u32 {\n"
  "    result = ©SIM.CLKDIV1\n"
  "  }\n"
  "\n"
  "  public section MCG_C5 () -> $u8 {\n"
  "    result = ©MCG.C5\n"
  "  }\n"
  "\n"
  "  public section MCG_C6 () -> $u8 {\n"
  "    result = ©MCG.C6\n"
  "  }\n"
  "}\n"
  "\n"
  "driver RegisterRead ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!string:\"OUTDIV: \")\n"
  "    lcd.print (!hex4: RegisterRead.SIM_CLKDIV1 ()>> 16)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!string:\"PRDIV: \")\n"
  "    lcd.print (!u32:extend (RegisterRead.MCG_C5 () & 7))\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    lcd.print (!string:\"VDIV: \")\n"
  "    lcd.print (!u32:extend (RegisterRead.MCG_C6 () & 0x1F))\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_27_embeddedSampleCode (
  "01-blink-led.omnibus",
  "omnibus",
  true, // Text file
 1450, // Text length
  gWrapperFileContent_27_embeddedSampleCode
) ;

//--- File 'teensy-3-6/02-blink-leds.omnibus'

const char * gWrapperFileContent_26_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode: .output !toPort: LED_L0)\n"
  "    digital.set (!mode: .output !toPort: LED_L1)\n"
  "    digital.set (!mode: .output !toPort: LED_L2)\n"
  "    digital.set (!mode: .output !toPort: LED_L3)\n"
  "    digital.set (!mode: .output !toPort: LED_L4)\n"
  "    lcd.print (!string: \"Hello\")\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort: LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort: LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line: 1 !column: 0)\n"
  "    lcd.print (!u32: time.now ())\n"
  "    lcd.goto (!line:2 !column: 0)\n"
  "    lcd.print (!u32: freeStackSize ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T3 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T4 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T5 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_26_embeddedSampleCode (
  "02-blink-leds.omnibus",
  "omnibus",
  true, // Text file
 2461, // Text length
  gWrapperFileContent_26_embeddedSampleCode
) ;

//--- File 'teensy-3-6/03-pit-dma.omnibus'

const char * gWrapperFileContent_33_embeddedSampleCode = 
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//  This eDMA demo shows how using DMA for outputing periodic signal\n"
  "//  The output port is D13 (LED_BUILTIN), i.e. PTC5\n"
  "//  Port D3 is toggled at #PIT0 frequency\n"
  "//  Port D4 is toggled at the end of PATTERN_LENGTH (major loop count) transfers\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// This code works on Teensy 3.6\n"
  "// It has not been tested on Teensy 3.5\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// IT DOES NOT WORK ON TEENSY 3.1, THE MICRO-CONTROLLER IS BUGGY\n"
  "//    The symptom is D4 blinks at 150 kHz, independantly from PATTERN_FREQUENCY\n"
  "//    See Mask Set Errata for Mask 1N36B: https://www.nxp.com/docs/en/errata/KINETIS_K_1N36B.pdf\n"
  "//    Erratum ID e4588: Instead of sending a single DMA request every time the PIT expires, the first\n"
  "//    time the PIT triggers a DMA transfer the “always enabled” source will not negate its request.\n"
  "//    This results in the DMA request remaining asserted continuously after the first trigger.\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let PATTERN_FREQUENCY = 5 // In Hertz\n"
  "// So LED_L3 frequency is PATTERN_FREQUENCY / 2\n"
  "// So D4 frequency is PATTERN_FREQUENCY / 2 / PATTERN_LENGTH\n"
  "\n"
  "staticArray kPATTERN { let x $bool }\n"
  "\n"
  "extend staticArray kPATTERN ( // Morse code example: output \"S S S ...\"\n"
  "  !yes, !no, !yes, !no, !yes, // 3 dots : letter S\n"
  "  !no, !no, !no, !no, !no, !no, !no // Medium gap betwween words\n"
  ")\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// eDMA module cannot access GPIO from aliased bit-band regions.\n"
  "// eDMA module can access:\n"
  "//    - GPIOx_PDOR (but it changes all bits of the given GPIO x)\n"
  "//    - GPIOx_PSOR (it sets selected bits of the given GPIO x, but cannot reset them)\n"
  "//    - GPIOx_PCOR (it resets selected bits of the given GPIO x, but cannot set them)\n"
  "//    - GPIOx_PTOR (it toggles selected bits of the given GPIO x)\n"
  "// So we use GPIOx_PTOR\n"
  "\n"
  "// The output port is D7: PTD2\n"
  "// For toggling D7, without any change on other GPIOC bits: \"GPIOD_PTOR = (1 << 2)\"\n"
  "// \"GPIOD_PTOR = 0  ::\" is a nop\n"
  "// So we need to transform the kPATTERN boolean array to the gOutputPattern uint32_t array, that will\n"
  "// contains (1 << 2) for toggling PTD2 port, and 0 for not changing it: the values\n"
  "// are not the kPATTERN values, but the toggles we need to output the given pattern.\n"
  "// Building the gOutputPattern array is done at the beginning of the setup function.\n"
  "\n"
  "let PATTERN_LENGTH = kPATTERN.count\n"
  "\n"
  "typealias $PatternArray = [PATTERN_LENGTH : $u32]\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver pit > root {\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  section initializeDMA (\?!pattern $PatternArray) {\n"
  "  //--- Transform pattern for encoding level changes\n"
  "    var current = no\n"
  "    var index $u32 = 0\n"
  "    for élément in kPATTERN {\n"
  "      let b = élément.x\n"
  "      pattern [index] = if current ≠ b { 0 } else { 1 << 2 }\n"
  "      index += 1\n"
  "      current = b\n"
  "    }\n"
  "  //--- Set up LED_BUILTIN digital output at LOW level\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.write (!no !toPort:LED_L4)\n"
  "\n"
  "  //--- Power on DMA:MUX, PIT, DMA\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !DMAMUX:1 !PIT:1}\n"
  "    ©SIM.SCGC7 |= {©SIM.SCGC7 !DMA:1}\n"
  "\n"
  "  //--- Unmask PIT0 interrupt\n"
  "    enable (!interrupt:.PITChannel3)\n"
  "\n"
  "  //--- Unmask DMAChannel0TransferComplete interrupt\n"
  "    enable (!interrupt:.DMAChannel0TransferComplete)\n"
  "\n"
  "  //--- Enable PIT module\n"
  "    ©PIT.MCR = 0\n"
  "\n"
  "  //--- Disable #PIT3\n"
  "    ©PIT.TCTRL [3] = 0\n"
  "\n"
  "  //--- #PIT0 clock frequency is BUS (in Hertz): #PIT:LDVAL3 sets the request period of DMA 0\n"
  "    ©PIT.LDVAL [3] = ((BUS_MHZ * 1_000_000) / PATTERN_FREQUENCY) - 1\n"
  "\n"
  "  //--- Clear #PIT3 interrupt flag\n"
  "    ©PIT.TFLG [3] = 1\n"
  "\n"
  "  //--- Disable DMA Channel 0: it is required for configuring it\n"
  "    ©DMAMUX.CHCFG [3] = 0\n"
  "\n"
  "  //--- Initial source address: the pattern array address\n"
  "    ©DMA.TCD_SADDR [3] = addressof (pattern)\n"
  "\n"
  "  //--- After every request, source address is incremented by 4\n"
  "    ©DMA.TCD_SOFF [3] = 4\n"
  "\n"
  "  //--- At the end of a major loop, source address is decremented to pattern array address\n"
  "    ©DMA.TCD_SLAST [3] = - 4 * PATTERN_LENGTH // - transfert_size * major_loop_count\n"
  "\n"
  "  //--- Destination address: the address of the GPIOC_PTOR control register\n"
  "    ©DMA.TCD_DADDR [3] = addressof ©GPIOD.PTOR\n"
  "\n"
  "  //--- After every request, destination address is not modified\n"
  "    ©DMA.TCD_DOFF [3] = 0\n"
  "\n"
  "  //--- At the end of a major loop, destination address is not modified\n"
  "    ©DMA.TCD_DLASTSGA [3] = 0\n"
  "\n"
  "  //--- Set major loop count\n"
  "    ©DMA.TCD_CITER_ELINKNO [3] = PATTERN_LENGTH\n"
  "    ©DMA.TCD_BITER_ELINKNO [3] = PATTERN_LENGTH\n"
  "\n"
  "  //--- Source and destination are 32-bit\n"
  "    ©DMA.TCD_ATTR [3] = {©DMA.TCD_ATTR\n"
  "      !SSIZE: DMA_TCD_ATTR_SIZE_32BIT // Transfer source size is 32-bit\n"
  "      !DSIZE: DMA_TCD_ATTR_SIZE_32BIT // Transfer destination size is 32-bit\n"
  "    }\n"
  "\n"
  "  //--- Number of bytes to transfer per request: 4\n"
  "    ©DMA.TCD_NBYTES_MLNO [3] = 4\n"
  "\n"
  "  //--- Set repetition and DMA interrupt\n"
  "  // if DREQ bit is set, the DMA performs PATTERN_LENGTH transfers and stops)\n"
  "  // Otherwise, the DMA performs PATTERN_LENGTH transfers repetitively\n"
  "    ©DMA.TCD_CSR [3] = {©DMA.TCD_CSR\n"
  "      !INTMAJOR:1 // Generate an interrupt at the end of major loop count transfert (for toggling D4)\n"
  "    }\n"
  "\n"
  "  //--- Configure DMA Channel\n"
  "    ©DMAMUX.CHCFG [3] = {©DMAMUX.CHCFG\n"
  "      !ENBL: 1 // DMA Channel 0 is enabled\n"
  "      !TRIG: 1 // DMA Channel 0 is triggered by #PIT 0\n"
  "      !SOURCE: DMAMUX_SOURCE_ALWAYS0 // Trigger is always active\n"
  "    }\n"
  "\n"
  "  //--- Start DMA Channel 0\n"
  "    ©DMA.SERQ = 3\n"
  "\n"
  "  //--- Enable #PIT 0 : it starts counting, enable interrupt\n"
  "    ©PIT.TCTRL [3] = {©PIT.TCTRL !TEN:1 !TIE:1}\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section PITChannel3 {\n"
  "  //--- Acquitter l'interruption\n"
  "    ©PIT.TFLG [3] = {©PIT.TFLG !TIF:1}\n"
  "  //--- Toggle LED_L3\n"
  "    digital.toggle (!port:LED_L3)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section DMAChannel0TransferComplete {\n"
  "  //--- Acquitter l'interruption\n"
  "    ©DMA.CINT = 0\n"
  "  //--- Toggle LED_L2\n"
  "    digital.toggle (!port:LED_L2)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver pit ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var pattern = $PatternArray (!repeated:0)\n"
  "\n"
  "  event @onSetup first {\n"
  "    pit.initializeDMA (!\?self.pattern)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32: self.pattern.count)\n"
  "    lcd.print (!string:\" \")\n"
  "    let cc = $ISRSlot.PITChannel3.u7\n"
  "    lcd.print (!u32: extend (cc))\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_33_embeddedSampleCode (
  "03-pit-dma.omnibus",
  "omnibus",
  true, // Text file
 8138, // Text length
  gWrapperFileContent_33_embeddedSampleCode
) ;

//--- File 'teensy-3-6/04-large-structure.omnibus'

const char * gWrapperFileContent_21_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let PATTERN_LENGTH = 1000\n"
  "\n"
  "typealias $PatternArray = [PATTERN_LENGTH : $u32]\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 5512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var x = $PatternArray (!repeated:0)\n"
  "  var y = $PatternArray (!repeated:0)\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    self.y = self.x\n"
  "    for i $u32 in 0 ..< self.x.count {\n"
  "      self.y [i] += self.compteur\n"
  "    }\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32: $PatternArray.count)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_21_embeddedSampleCode (
  "04-large-structure.omnibus",
  "omnibus",
  true, // Text file
 1152, // Text length
  gWrapperFileContent_21_embeddedSampleCode
) ;

//--- File 'teensy-3-6/05-periodic-timer.omnibus'

const char * gWrapperFileContent_30_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync $PeriodicTimer {\n"
  "  var deadline $u32 = 0\n"
  "  let period $u32\n"
  "  var guardList = $GuardList ()\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public primitive wait @noUnusedWarning @mutating () {\n"
  "    if self.deadline ≤ time.now () {\n"
  "      block (!onDeadline:self.deadline)\n"
  "    }\n"
  "    self.deadline += self.period\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public guard wait @noUnusedWarning () {\n"
  "    accept = self.deadline ≤ time.now ()\n"
  "    if accept {\n"
  "      self.deadline += self.period\n"
  "    }else{\n"
  "      handle (!\?guard:self.guardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public section deadline @noUnusedWarning () -> $u32 {\n"
  "    result = self.deadline\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var deadline = $PeriodicTimer (!period:500)\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "\n"
  "  while event self.deadline.wait () {\n"
  "    digital.toggle (!port: LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_30_embeddedSampleCode (
  "05-periodic-timer.omnibus",
  "omnibus",
  true, // Text file
 1487, // Text length
  gWrapperFileContent_30_embeddedSampleCode
) ;

//--- File 'teensy-3-6/06-chained-pit-0-1.omnibus'

const char * gWrapperFileContent_19_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 192\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "driver chronomètre ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver chronomètre > root {\n"
  "\n"
  "  startup {\n"
  "  //--- Power on DMA_MUX, #PIT, DMA\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !PIT:1}\n"
  "   //--- Enable #PIT module\n"
  "    ©PIT.MCR = 0\n"
  "  //--- Disable #PIT0 and #PIT1\n"
  "    ©PIT.TCTRL [0] = 0\n"
  "    ©PIT.TCTRL [1] = 0\n"
  "  //--- #PIT0 clock frequency is F_BUS (in Hertz)\n"
  "    ©PIT.LDVAL [0] = $u32.max\n"
  "    ©PIT.LDVAL [1] = $u32.max\n"
  "  //--- Enable #PIT0 and #PIT1 : start counting, no interrupt\n"
  "    ©PIT.TCTRL [1] = {©PIT.TCTRL !CHN:1 !TEN:1}\n"
  "    ©PIT.TCTRL [0] = {©PIT.TCTRL !TEN:1}\n"
  "  }\n"
  "\n"
  "  public section now @noUnusedWarning () -> $Uptime {\n"
  "    var r $u64 = extend (©PIT.LTMR64H)\n"
  "    r <<= 32\n"
  "    r |= extend (©PIT.LTMR64L)\n"
  "    r = ~ r\n"
  "    r +%= 1\n"
  "    result = $Uptime (!rawValue: r)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "struct $Uptime @copyable {\n"
  "  let rawValue $u64\n"
  "\n"
  "  public func raw @noUnusedWarning () -> $u64 {\n"
  "    result = self.rawValue\n"
  "  }\n"
  "\n"
  "  public func µs @noUnusedWarning () -> $u32 {\n"
  "    let r = (self.rawValue / BUS_MHZ) % 1_000\n"
  "    result = truncate (r)\n"
  "  }\n"
  "\n"
  "  public func ms @noUnusedWarning () -> $u32 {\n"
  "    let r = (self.rawValue / (BUS_MHZ * 1_000)) % 1_000\n"
  "    result = truncate (r)\n"
  "  }\n"
  "\n"
  "  public func s @noUnusedWarning () -> $u32 {\n"
  "    let r = self.rawValue / (BUS_MHZ * 1_000_000)\n"
  "    result = truncate (r)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    let tick = chronomètre.now ()\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:self.compteur)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!u64:tick.raw () / BUS_MHZ)\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    lcd.print (!u32:tick.s ())\n"
  "    lcd.print (!string:\" \")\n"
  "    lcd.print (!u32:tick.ms ())\n"
  "    lcd.print (!string:\" \")\n"
  "    lcd.print (!u32:tick.µs ())\n"
  "    self.compteur +%= 1_001\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_19_embeddedSampleCode (
  "06-chained-pit-0-1.omnibus",
  "omnibus",
  true, // Text file
 2445, // Text length
  gWrapperFileContent_19_embeddedSampleCode
) ;

//--- File 'teensy-3-6/07-synchronization-gate.omnibus'

const char * gWrapperFileContent_37_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync $SynchronizationGate {\n"
  "  var isOpen $bool\n"
  "  var taskList = $TaskList ()\n"
  "  var guardList = $GuardList ()\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public service close @noUnusedWarning @mutating () {\n"
  "    self.isOpen = no\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public service open @noUnusedWarning @mutating () {\n"
  "    if not self.isOpen {\n"
  "      self.isOpen = yes\n"
  "      var continue = yes\n"
  "      while continue {\n"
  "        makeTaskReady (!\?fromList:self.taskList \?found:continue)\n"
  "      }\n"
  "      notifyChange (!\?forGuard: self.guardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public primitive wait @noUnusedWarning @mutating () {\n"
  "    if not self.isOpen {\n"
  "      block (!\?inList:self.taskList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "   //············································································\n"
  "\n"
  "  public guard wait @noUnusedWarning () {\n"
  "    accept = self.isOpen\n"
  "    if not accept {\n"
  "      handle (!\?guard:self.guardList)\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync s1 = $Semaphore (!value:0)\n"
  "sync s2 = $Semaphore (!value:0)\n"
  "sync gate = $SynchronizationGate (!isOpen:no)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    gate.open ()\n"
  "    s1.wait ()\n"
  "    s1.wait ()\n"
  "    gate.close ()\n"
  "    s2.signal ()\n"
  "    s2.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche2 @stacksize 512 @autostart {\n"
  "\n"
  "  while event gate.wait () {\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    s1.signal ()\n"
  "    s2.wait ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche3 @stacksize 512 @autostart {\n"
  "\n"
  "  while event gate.wait () {\n"
  "    digital.toggle (!port:LED_L2)\n"
  "    s1.signal ()\n"
  "    s2.wait ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_37_embeddedSampleCode (
  "07-synchronization-gate.omnibus",
  "omnibus",
  true, // Text file
 2800, // Text length
  gWrapperFileContent_37_embeddedSampleCode
) ;

//--- File 'teensy-3-6/08-synchronization-buffer.omnibus'

const char * gWrapperFileContent_36_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let SIZE = 10\n"
  "\n"
  "sync $SynchronizationBuffer {\n"
  "  var data = [SIZE : $u32] (!repeated:$u32 ())\n"
  "  var readIndex $u32 = 0\n"
  "  var writeIndex $u32 = 0\n"
  "  var readSemaphore = $Semaphore (!value:0)\n"
  "  var writeSemaphore = $Semaphore (!value:SIZE)\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public func write user @mutating @noUnusedWarning (\? value $u32) {\n"
  "    self.writeSemaphore.wait ()\n"
  "    self.data [self.writeIndex] = value\n"
  "    self.writeIndex += 1\n"
  "    if self.writeIndex == SIZE {\n"
  "      self.writeIndex = 0\n"
  "    }\n"
  "    self.readSemaphore.signal ()\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public func read user @mutating @noUnusedWarning (! value $u32) {\n"
  "    self.readSemaphore.wait ()\n"
  "    value = self.data [self.readIndex]\n"
  "    self.readIndex += 1\n"
  "    if self.readIndex == SIZE {\n"
  "      self.readIndex = 0\n"
  "    }\n"
  "    self.writeSemaphore.signal ()\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public guard read @noUnusedWarning (! value $u32) : self.readSemaphore.wait () {\n"
  "    value = self.data [self.readIndex]\n"
  "    self.readIndex += 1\n"
  "    if self.readIndex == SIZE {\n"
  "      self.readIndex = 0\n"
  "    }\n"
  "    self.writeSemaphore.signal ()\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync buffer = $SynchronizationBuffer ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 {\n"
  "  var compteur $u32 = 0\n"
  "  var index $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    self.index += 1\n"
  "    buffer.write (!self.index)\n"
  "  }\n"
  "}\n"
  "\n"
  "task Tâche2 @stacksize 512 @autostart {\n"
  "\n"
  "  while event buffer.read (\?var value $u32) {\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:value)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_36_embeddedSampleCode (
  "08-synchronization-buffer.omnibus",
  "omnibus",
  true, // Text file
 2535, // Text length
  gWrapperFileContent_36_embeddedSampleCode
) ;

//--- File 'teensy-3-6/09-PWM-with-PTM-module.omnibus'

const char * gWrapperFileContent_38_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver PWMOutput > root {\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "  //--- Activate #TPM1 and #TPM2 modules\n"
  "    ©SIM.SCGC2 |= {©SIM.SCGC2 !TPM1:1 !TPM2:1}\n"
  "  //--- Use the OSCERCLK 16 MHz clock for TPM Module OSC_DIV.ERPS = 0 (--> divide by 1)\n"
  "  // TPMSRC --> 0:disabled, 1:see PLLFLLSEL, 2:OSCERCLK, 3:MCGIRCCLK\n"
  "  // PLLFLLSEL --> 0:MCGFLLCLK, 1:MCGPLLCLK, 2:USB1 PFD clock, 3:IRC48 clock (48 MHz)\n"
  "    ©SIM.SOPT2 |= {©SIM.SOPT2 !TPMSRC:2}\n"
  "  //------------------- #TPM1:channel 0 is 32 kHz square wave\n"
  "  //--- Set counter value to 0\n"
  "    ©TPM1.CNT = {©TPM1.CNT !COUNT:0}\n"
  "  //--- Set counter period --> 32 kHz\n"
  "    ©TPM1.MOD = {©TPM1.MOD !MOD:125 - 1}\n"
  "  //--- Configure channel 0 as single PWM output\n"
  "    ©TPM1.C0SC = {©TPM1.C0SC !MSB:1 !ELSB:1}\n"
  "  //--- Channel 0 match value --> Square wave\n"
  "    ©TPM1.C0V = {©TPM1.C0V !VAL: 125 / 2}\n"
  "  //--- Use PTA12 (#3) as #TPM1_CH0 output (ALT7)\n"
  "    ©PORTA.PCR [12] = {©PORTA.PCR !MUX:7}\n"
  "  //--- Configure #TPM1 (COMD=1 --> comptage, PS=2 --> prescaler = 4)\n"
  "    ©TPM1.SC = {©TPM1.SC !CMOD:1 !PS:2}\n"
  "  //------------------- #TPM2:channel 0 is 100 Hz wave\n"
  "  //--- Set counter value to 0\n"
  "    ©TPM2.CNT = {©TPM2.CNT !COUNT:0}\n"
  "  //--- Set counter period --> 100 Hz\n"
  "    ©TPM2.MOD = {©TPM2.MOD !MOD:40_000 - 1}\n"
  "  //--- Configure channel 0 as single PWM output\n"
  "    ©TPM2.C0SC = {©TPM2.C0SC !MSB:1 !ELSB:1}\n"
  "  //--- Channel 0 match value\n"
  "    ©TPM2.C0V = {©TPM2.C0V !VAL: 125 - 1}\n"
  "  //--- Channel 0 polarity\n"
  "    ©TPM2.POL = {©TPM2.POL !POL0:1}\n"
  "  //--- Use PTB18 (#29) as #TPM2_CH0 output (ALT6)\n"
  "    ©PORTB.PCR [18] = {©PORTB.PCR !MUX:6}\n"
  "  //--- Configure #TPM1 (COMD=1 --> comptage, PS=2 --> prescaler = 4)\n"
  "    ©TPM2.SC = {©TPM2.SC !CMOD:1 !PS:2}\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver PWMOutput ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.toggle (!port:LED_L4)\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_38_embeddedSampleCode (
  "09-PWM-with-PTM-module.omnibus",
  "omnibus",
  true, // Text file
 2750, // Text length
  gWrapperFileContent_38_embeddedSampleCode
) ;

//--- File 'teensy-3-6/10-integer-slices.omnibus'

const char * gWrapperFileContent_29_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var test = yes\n"
  "\n"
  "  event @onSetup first {\n"
  "    let b = {$u8 !b:self.test !1:0 !6:12}\n"
  "    lcd.print (!hex2:extend (b))\n"
  "    lcd.print (!spaces:1)\n"
  "    var b7 $bool\n"
  "    {$u8 \?b:b7 \?2:let b2 \?5:let b3} = 0xAC\n"
  "    let bb = {$u8 !b:b7 !2:b2 !5:b3}\n"
  "    lcd.print (!hex2:extend (bb))\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    self.compteur +%= 500\n"
  "    digital.toggle (!port:LED_L3)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_29_embeddedSampleCode (
  "10-integer-slices.omnibus",
  "omnibus",
  true, // Text file
 795, // Text length
  gWrapperFileContent_29_embeddedSampleCode
) ;

//--- File 'teensy-3-6/11-heap.omnibus'

const char * gWrapperFileContent_40_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "option \"task-strict-priority-order\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver project > digital {\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P0)\n"
  "  }\n"
  "}\n"
  "\n"
  "driver project ()\n"
  "\n"
  "typealias $Array8 = [$u8]\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "struct $StructWithARC {\n"
  "  public var unEntierQuelconque $u32 = 0\n"
  "  public var donnée = $Array8 ()\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "struct $AutreStructWithARC {\n"
  "  public var autreEntierQuelconque $u32 = 0\n"
  "  public var structure = $StructWithARC ()\n"
  "  public var autreDonnée = $Array8 ()\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 > T2 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "  var freeRam $u32 = 0\n"
  "  var start $u32 = 0\n"
  "  var maxAllocationParSeconde $u32 = 0\n"
  "  var alloc $u32 = 0\n"
  "  var current $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    lcd.print (!string:\"Free:\")\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!string:\"Start:\")\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    lcd.print (!string:\"Max:\")\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 1_000\n"
  "    digital.toggle (!port:LED_L3)\n"
  "    let freeRam = freeByteCount ()\n"
  "    if self.freeRam ≠ freeRam {\n"
  "      self.freeRam = freeRam\n"
  "      lcd.goto (!line:0 !column:6)\n"
  "      lcd.print (!u32:freeRam !width:6)\n"
  "    }\n"
  "    let start = heapStartAddress ()\n"
  "    if self.start ≠ start {\n"
  "      self.start = start\n"
  "      lcd.goto (!line:1 !column:6)\n"
  "      lcd.print (!hex8:start)\n"
  "    }\n"
  "    let alloc = totalAllocationObjectCount ()\n"
  "    let allocationParSecondes = alloc - self.alloc\n"
  "    if allocationParSecondes > self.maxAllocationParSeconde {\n"
  "      self.maxAllocationParSeconde = allocationParSecondes\n"
  "      lcd.goto (!line:2 !column:6)\n"
  "      lcd.print (!u32:allocationParSecondes !width:7)\n"
  "    }\n"
  "    if self.alloc ≠ alloc {\n"
  "      self.alloc = alloc\n"
  "      lcd.goto (!line:3 !column:0)\n"
  "      lcd.print (!u32:alloc !width:10)\n"
  "    }\n"
  "    let current = currentlyAllocatedObjectCount ()\n"
  "    if self.current ≠ current {\n"
  "      self.current = current\n"
  "      lcd.goto (!line:3 !column:17)\n"
  "      lcd.print (!u32:current !width:3)\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 > backgroundTask @stacksize 512 @autostart {\n"
  "  var échéance1 $u32 = 2001\n"
  "  var échéance2 $u32 = 2001\n"
  "  var échéance3 $u32 = 2001\n"
  "  var data1 = $Array8 ()\n"
  "  var data2 = $Array8 ()\n"
  "  var structure = $AutreStructWithARC ()\n"
  "  var b $u8 = 0\n"
  "\n"
  "  while event time.wait (!until:self.échéance1) {\n"
  "    self.échéance1 +%= 71\n"
  "    digital.toggle (!port:LED_L4)\n"
  "    if digital.read (!port:BUTTON_P0) {\n"
  "      if self.data1.length () < 500 {\n"
  "        self.data1.append (!self.b)\n"
  "        self.b +%= 1\n"
  "        // assert (self.b < 25) // For checking assert instruction\n"
  "      }else{\n"
  "        self.data1.removeAll ()\n"
  "      }\n"
  "    }else{\n"
  "      self.data1.removeAll ()\n"
  "    }\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.échéance2) {\n"
  "    self.échéance2 +%= 97\n"
  "    self.data2 = self.data1\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.échéance3) {\n"
  "    self.échéance3 +%= 511\n"
  "    self.structure.structure.donnée = self.data2\n"
  "    self.testReleaseLocalVar (!in:self.structure.structure.donnée)\n"
  "  }\n"
  "\n"
  "  func testReleaseLocalVar (\?in: inData $Array8) {\n"
  "    var d = $StructWithARC ()\n"
  "    d.donnée = inData\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task backgroundTask @stacksize 512 @autostart {\n"
  "  var data = $Array8 ()\n"
  "\n"
  "  while event time.wait (!until:0) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    if digital.read (!port:BUTTON_P0) {\n"
  "      if self.data.length () == 0 {\n"
  "        self.data.append (!0)\n"
  "        self.testReleaseLocalVar (!in:self.data)\n"
  "      }else{\n"
  "        self.data.removeAll ()\n"
  "      }\n"
  "    }else{\n"
  "      self.data.removeAll ()\n"
  "    }\n"
  "  }\n"
  "\n"
  "  func testReleaseLocalVar (\?in: inData $Array8) {\n"
  "    externalSection (!in:inData)\n"
  "    var d $u32 = 143\n"
  "    var x $u3 = d [3 ... 5]\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section externalSection (\?in: inData $Array8) {\n"
  "  var d = inData\n"
  "  d.append (!0)\n"
  "  var xxxx = [$bool] ()\n"
  "  xxxx.append (!yes)\n"
  "  var lg = xxxx.length ()\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_40_embeddedSampleCode (
  "11-heap.omnibus",
  "omnibus",
  true, // Text file
 5013, // Text length
  gWrapperFileContent_40_embeddedSampleCode
) ;

//--- File 'teensy-3-6/12-section-service-duration.omnibus'

const char * gWrapperFileContent_20_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section emptySection () {\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "service emptyService () {\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section getSysTick () -> $u32 {\n"
  "  result = ©SYST.CVR\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let ITERATIONS = 7\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  event @onSetup first {\n"
  "    var cumul $u32 = 0\n"
  "  //--- Compute getSysTick duration\n"
  "    for _ $u32 in 0 ..< ITERATIONS {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      let t1 = getSysTick ()\n"
  "      cumul += t0 - t1\n"
  "      lcd.print (!u32:t0 - t1)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "    let systickDuration = cumul / ITERATIONS\n"
  "  //--- Compute emptySection duration\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    for _ $u32 in 0 ..< ITERATIONS {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptySection ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.print (!u32:t0 - t1 - systickDuration)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "  //--- Compute emptyService duration\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    for _ $u32 in 0 ..< 4 {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptyService ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.print (!u32:t0 - t1 - systickDuration)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "  }\n"
  "\n"
  "\n"
  "  //············································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_20_embeddedSampleCode (
  "12-section-service-duration.omnibus",
  "omnibus",
  true, // Text file
 1855, // Text length
  gWrapperFileContent_20_embeddedSampleCode
) ;

//--- File 'teensy-3-6/13-usb-device.omnibus'

const char * gWrapperFileContent_22_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//   Display clock settings\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "//let myBUS_MHZ @display = BUS_MHZ\n"
  "//let myFLEXBUS_MHZ @display = FLEXBUS_MHZ\n"
  "//let myFLASH_KHZ @display = FLASH_KHZ\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// USB DEVICE DRIVER\n"
  "// Kevin Cuzner wrote a simpler version, and a great blog article:\n"
  "//   http://kevincuzner.com/2014/12/12/teensy-3-1-bare-metal-writing-a-usb-driver/\n"
  "//   https://github.com/kcuzner/teensy-oscilloscope/blob/master/scope-teensy/src/usb.c\n"
  "//---\n"
  "//   https://github.com/prof7bit/frdm-kl25z-minimal-usb-hid\n"
  "//   http://www.beyondlogic.org/usbnutshell/usb1.shtml\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// 1. La routine init du pilote est exécutée. Elle se termine par l'activation du pull-up sur D+. Ceci a pour\n"
  "//    conséquence que le host lance une commande d'initialisation qui déclenche une interruption\n"
  "// 2. L'interruption est du type 'RESET', et la routine configureEndPoint0OnReset effectue la configuration.\n"
  "// 3. Nouvelle interruption, du type 'TOKEN COMPLETED' -> on lance tokenCompleted (). Cette routine lit l'endPoint\n"
  "//    concerné, il s'agit du n°0. On exécute alors endpoint_0_handler ().\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let DEVICE_DESCRIPTOR = [18 : $u8] (\n"
  "  !18 // Descriptor size in bytes\n"
  "  !1  // DEVICE constant\n"
  "  !0x00 !0x02 // USB specification release (BCD): 0x0200\n"
  "  !0x02 // Class code (2 -> communication)\n"
  "  !0    // Subclass code\n"
  "  !0    // Protocol code\n"
  "  !8    // Maximum packet size for endpoint0 (low-speed: 8, full-speed: 8, 16, 32, 64)\n"
  "  !0xAD !0xDE // Vendor ID:   0xDEAD\n"
  "  !0xAF !0xBE // Product ID : 0xBEAF\n"
  "  !0 !0 // Device release number (BCD)\n"
  "  !0 // Index of string descriptor for the manufacturer (0 -> no string)\n"
  "  !0 // Index of string descriptor for the product (0 -> no string)\n"
  "  !0 // Index of string descriptor for the serial umber (0 -> no string)\n"
  "  !1 // Number of possible configurations\n"
  ")\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let CONFIG_DESCRIPTOR = [32 : $u8] (\n"
  "//--- Configuration descriptor\n"
  "  !9  // Configuration descriptor size in bytes\n"
  "  !2  // CONFIGURATION constant\n"
  "  !32 !0 // The number of bytes in the configuration descriptor and all its subordinate descriptors\n"
  "  !1 // Number of interfaces in the configuration (should be ≥ 1)\n"
  "  !1 // Identifier for Set_Configuration and Get_Configuration (should be ≥ 1)\n"
  "  !0 // Index of string descriptor for the configuration (0 -> no string)\n"
  "  !0 // Device is bus-powered (bit 6=1 --> self powered)\n"
  "  !100 / 2 // Half of bus current required, in milli-amperes (50 --> 100 mA)\n"
  "//--- Subordinate descriptor: INTERFACE association\n"
  "  !9  // $interface descriptor size in bytes\n"
  "  !4  // INTERFACE constant\n"
  "  !0  // Number identifying this interface\n"
  "  !0  // Value used to select an alternate setting (0: no alternate setting)\n"
  "  !2  // Number of endpoints supported (not counting endpoint 0)\n"
  "  !0x0A // Class code (0x0A --> Data $interface of Communication Device Class)\n"
  "  !0x00 // Subclass code\n"
  "  !0  // $interface Protocol\n"
  "  !0  // Index of string descriptor for the interface (0 --> no string)\n"
  "//--- Subordinate descriptor: ENDPOINT association\n"
  "  !7  // Endpoint descriptor size in bytes\n"
  "  !5  // ENDPOINT constant\n"
  "  !1  // ENDPOINT number and direction (bit 7=0 --> OUT)\n"
  "  !0x02 // Transfer type (0x02 --> BULK)\n"
  "  !64 !0 // Maximum packet size (0 à 1024); here: 64\n"
  "  !0  // Maximum latency / polling interval / NAK rate [ignored for bulk and control transfers]\n"
  "//--- Subordinate descriptor: ENDPOINT association\n"
  "  !7  // Endpoint descriptor size in bytes\n"
  "  !5  // ENDPOINT constant\n"
  "  !1 | 0x80  // ENDPOINT number and direction (bit 7=1 --> IN)\n"
  "  !0x02 // Transfer type (0x02 --> BULK)\n"
  "  !64 !0 // Maximum packet size (0 à 1024); here: 64\n"
  "  !0  // Maximulm latency / polling interval / NAK rate [ignored for bulk and control transfers]\n"
  ")\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let NUM_ENDPOINTS = 4\n"
  "\n"
  "//······················································································································\n"
  "\n"
  "struct $BDT @copyable {\n"
  " var desc $u32 = 0\n"
  " var addr $u32 = 0\n"
  "}\n"
  "\n"
  "\n"
  "let BDT_OWN   = 0x80\n"
  "let BDT_DATA1 = 0x40\n"
  "let BDT_DATA0 = 0x00\n"
  "let BDT_DTS   = 0x08\n"
  "let BDT_STALL = 0x04\n"
  "//let BDT_PID(n) (((n) >> 2) & 15)\n"
  "\n"
  "let EP0_RX_SIZE = 8\n"
  "\n"
  "func BDT_DESC safe section (\?count $u32 \?data $u1) -> $u32 {\n"
  "  result = BDT_OWN | BDT_DTS | (count << 16) | if data ≠ 0 {BDT_DATA1} else {BDT_DATA0}\n"
  "}\n"
  "\n"
  "let TX   = 1\n"
  "let RX   = 0\n"
  "let ODD  = 1\n"
  "let EVEN = 0\n"
  "let DATA0 = 0\n"
  "let DATA1 = 1\n"
  "\n"
  "func index safe section (\? endpoint $u32 \?tx $u32 \?odd $u32) -> $u32 {\n"
  "  result = (endpoint << 2) | (tx << 1) | odd\n"
  "}\n"
  "\n"
  "let TRACE_SIZE = 10\n"
  "\n"
  "//······················································································································\n"
  "\n"
  "driver usb_device > digital {\n"
  "// Descriptor table should be aligned on a 512 byte-boudary\n"
  "  var descriptorTable @align 512 = [(NUM_ENDPOINTS+1)*4 : $BDT] (!repeated: $BDT ())\n"
  "\n"
  "  var ep0_rx0_buf @align 4 = [EP0_RX_SIZE : $u8] (!repeated:0)\n"
  "  var ep0_rx1_buf @align 4 = [EP0_RX_SIZE : $u8] (!repeated:0)\n"
  "  var ep0_tx_bdt_bank $u32 = 0\n"
  "\n"
  "  var état = [TRACE_SIZE : $u4] (!repeated:0)\n"
  "  var indexÉtat $u32 = 0\n"
  "\n"
  "  public section lireÉtat (\?index $u32) -> $u32 {\n"
  "    result = extend (self.état [index])\n"
  "  }\n"
  "\n"
  "  var trace $u32 = 0\n"
  "\n"
  "  public section lireTrace () -> $u32 {\n"
  "    result = self.trace\n"
  "  }\n"
  "\n"
  "  public section lireAddresseUSB () -> $u32 {\n"
  "    result = extend (©USB0.ADDR)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  // This basically follows the flowchart in the Kinetis Quick Reference User Guide, Rev. 3, 05/2014, page 134\n"
  "  //-- Assume 48 MHz clock already running\n"
  "    ©SIM.SCGC4 |= {©SIM.SCGC4 !USBOTG:1} // SIM - enable clock\n"
  "    ©MPU.RGDAAC [0] |= {©MPU.RGDAAC !M4RE:1 !M4WE:1}\n"
  "  //--- If using IRC48M, turn on the USB clock recovery hardware\n"
  "    if @static (F_CPU_MHZ == 180) || (F_CPU_MHZ == 216) {\n"
  "      ©USB0.CLK_RECOVER_IRC_EN = {©USB0.CLK_RECOVER_IRC_EN !IRC_EN:1 !REG_EN:1}\n"
  "      ©USB0.CLK_RECOVER_CTRL = {©USB0.CLK_RECOVER_CTRL !CLOCK_RECOVER_EN:1 !RESTART_IFRTRIM_EN:1}\n"
  "    }\n"
  "  //--- Reset USB module (SB0:USBTRC0:USBRESET is always read as 0. Wait 2 USB clock cycles after setting this bit)\n"
  "    ©USB0.USBTRC0 |= {©USB0.USBTRC0 !USBRESET:1} // Page 1516\n"
  "    while ©USB0.USBTRC0.USBRESET ≠ 0 {} // wait for reset to end\n"
  "  //-- Set descriptor table base address\n"
  "    let descriptorTableBaseAddress = addressof (self.descriptorTable)\n"
  "    ©USB0.BDTPAGE1 = descriptorTableBaseAddress [08...15]\n"
  "    ©USB0.BDTPAGE2 = descriptorTableBaseAddress [16...23]\n"
  "    ©USB0.BDTPAGE3 = descriptorTableBaseAddress [24...31]\n"
  "  //--- Clear all ISR flags\n"
  "    ©USB0.ISTAT = 0xFF\n"
  "    ©USB0.ERRSTAT = 0xFF\n"
  "    ©USB0.OTGISTAT = 0xFF\n"
  "    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1} // | 0x40\n"
  "  //-- Enable USB\n"
  "    ©USB0.CTL = {©USB0.CTL !USBENSOFEN:1}\n"
  "    ©USB0.USBCTRL = 0\n"
  "  //-- Enable reset interrupt\n"
  "    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1}\n"
  "  //-- Enable interrupt in NVIC\n"
  "    enable (!interrupt: .USBFS_OTG)\n"
  "  //--- Enable d+ pullup\n"
  "    ©USB0.CONTROL = {©USB0.CONTROL !DPPULLUPNONOTG:1} // Page 1515\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section USBFS_OTG {\n"
  "    let status = ©USB0.ISTAT\n"
  "\n"
  "  //-------------------- RESET: configure Endpoint 0\n"
  "    if (status & {©USB0.ISTAT !USBRST:1}) ≠ 0 {\n"
  "      self.trace |= 1\n"
  "//      self.état [self.indexÉtat] = 1\n"
  "//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "      self.configureEndPoint0OnReset ()\n"
  "  //    ©USB0.ISTAT = ©USB0.ISTAT !USBRST:1) // Ack\n"
  "    }else{\n"
  "    //-------------------- START OF FRAME\n"
  "      if (status & {©USB0.ISTAT !SOFTOK:1}) ≠ 0 {\n"
  "  //        self.état [self.indexÉtat] = 2\n"
  "  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !SOFTOK:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- TOKEN COMPLETED\n"
  "      if (status & {©USB0.ISTAT !TOKDNE:1}) ≠ 0 { // Page 1502\n"
  "        self.trace |= 2\n"
  "  //        digital.write (!yes !toPort:LED_L2)\n"
  "  //        self.état [self.indexÉtat] = 3\n"
  "  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        self.tokenCompleted ()\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !TOKDNE:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- STALL\n"
  "      if (status & {©USB0.ISTAT !STALL:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 4\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !STALL:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- ERROR\n"
  "      if (status & {©USB0.ISTAT !ERROR:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 5\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        let err = ©USB0.ERRSTAT\n"
  "        ©USB0.ERRSTAT = err\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !ERROR:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- SLEEP\n"
  "      if (status & {©USB0.ISTAT !SLEEP:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 6\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !SLEEP:1} // Ack\n"
  "      }\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func configureEndPoint0OnReset section @mutating () {\n"
  "//      self.état [self.indexÉtat] = 1\n"
  "//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "      ©USB0.CTL |= {©USB0.CTL !ODDRST:1}\n"
  "      self.ep0_tx_bdt_bank = 0\n"
  "   //--- Set up buffers to receive Setup and OUT packets\n"
  "      self.descriptorTable [index(!0 !RX !EVEN)].desc = BDT_DESC (!EP0_RX_SIZE  !0)\n"
  "      self.descriptorTable [index(!0 !RX !EVEN)].addr = addressof (self.ep0_rx0_buf)\n"
  "      self.descriptorTable [index(!0 !RX !ODD) ].desc = BDT_DESC (!EP0_RX_SIZE !0)\n"
  "      self.descriptorTable [index(!0 !RX !ODD) ].addr = addressof (self.ep0_rx1_buf)\n"
  "      self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n"
  "      self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n"
  "    //--- Activate endpoint 0\n"
  "      ©USB0.ENDPT [0] = {©USB0.ENDPT !EPRXEN:1 !EPTXEN:1 !EPHSHK:1}\n"
  "    //--- Clear all ending interrupts\n"
  "      ©USB0.ERRSTAT = 0xFF\n"
  "      ©USB0.ISTAT = 0xFF\n"
  "    //--- Set the address to zero during enumeration\n"
  "      ©USB0.ADDR = 0\n"
  "    //--- Enable other interrupts\n"
  "      ©USB0.ERREN = 0xFF\n"
  "      ©USB0.INTEN = {©USB0.INTEN !STALLEN:1 !SLEEPEN:1 !TOKDNEEN:1 !SOFTOKEN:1 !ERROREN:1 !USBRSTEN:1}\n"
  "    //--- is this necessary\?\n"
  "   //   ©USB0.CTL = ©USB0.CTL !USBENOFEN:1) // Page 1507\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "  // This means a transaction has completed, we receive this interrupt\n"
  "  // after data was transferred and the handshake has been completed:\n"
  "  //\n"
  "  //   host:TOK_IN    -> device:DATA ->   host:ACK/NAK -> $interrupt\n"
  "  //   host:TOK_OUT   ->   host:DATA -> device:ACK/NAK -> $interrupt\n"
  "  //   host:TOK_SETUP ->   host:DATA -> device:ACK/NAK -> $interrupt\n"
  "  //\n"
  "  // The handler can then process the received data or queue more\n"
  "  // data to be sent during the next transaction. When there is a\n"
  "  // TOK_IN transaction and no data has been placed in the TX buffer\n"
  "  // then the hardware will automatically send a NAK:\n"
  "  //\n"
  "  //   host:TOK_IN -> device:NAK -> NO $interrupt!\n"
  "  //\n"
  "  // There will be no interrupt in this case! This means as long\n"
  "  // as there is no data to be sent there will also be no TOK_IN\n"
  "  // calls to the handler anymore. Something else has to prepare\n"
  "  // a new TX buffer for that endpoint when data becomes available\n"
  "  // again, the handler will only be called AFTER the transmission!\n"
  "\n"
  "  func tokenCompleted section @mutating () {\n"
  "    let transactionStatus = ©USB0.STAT\n"
  "    let endPoint $u4 = transactionStatus [4...7]\n"
  "    let TX_transitionStatus = transactionStatus [3...3]\n"
  "    let ODD_transitionStatus = transactionStatus [2...2]\n"
  "    let index = index (!extend (endPoint) !extend (TX_transitionStatus) !extend (ODD_transitionStatus))\n"
  "   //--- Get TOK_PID\n"
  "     let TOK_PID = self.descriptorTable [index].desc [2...5]\n"
  "//     let TOK_PID = self.ep0_rx0_buf [0] [2...5]\n"
  "     self.trace |= (extend $u32 (TOK_PID)) << 8\n"
  "   //---\n"
  "     if TOK_PID == 0x09 { // IN_TOKEN: transfer device --> host\n"
  "     }else if TOK_PID == 0x01 { // OUT_TOKEN: transfer host --> device\n"
  "     }else if TOK_PID == 0x0D { // SETUP_TOKEN: transfer host --> device\n"
  "       let bmRequestType = self.ep0_rx0_buf [0]\n"
  "       self.trace |= (extend $u32 (bmRequestType)) << 12\n"
  "       if bmRequestType == 0 { // setup device\n"
  "         self.setupDevice ()\n"
  "       }else if bmRequestType == 1 { // setup interface\n"
  "\n"
  "       }else if bmRequestType == 2 { // setup end point\n"
  "\n"
  "       }\n"
  "       ©USB0.CTL = {©USB0.CTL !USBENSOFEN:1}\n"
  "     }\n"
  "   //---\n"
  "    if endPoint == 0 {\n"
  "      self.endpoint_0_handler (!transactionStatus: transactionStatus)\n"
  "    }else{\n"
  "\n"
  "    }\n"
  "//    let index = transactionStatus >> 2\n"
  "//    let pid = (self.descriptorTable [index].desc >> 2) & 15\n"
  "//    if pid == 0x0D { // Setup received from host\n"
  "//      self.usb_setup ()\n"
  "//    //--- Unfreeze the USB, now that we're ready\n"
  "//      ©USB0.CTL) = ©USB0.CTL !USBENOFEN:1) // clear TXSUSPENDTOKENBUSY bit\n"
  "//    }else if pid == 0x09 { // IN transaction completed to host\n"
  "//    }else if (pid == 0x01) || (pid == 0x02) { // OUT transaction received from host\n"
  "//\n"
  "//    }\n"
  "\n"
  "//    if endPoint == 0 {\n"
  "//      self.configure\n"
  "//    }else{\n"
  "//\n"
  "//    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func setupDevice section @mutating () {\n"
  "    self.trace |= 8\n"
  "    let bRequest = self.ep0_rx0_buf [1]\n"
  "    if bRequest == 6 { // mGET_DESC\n"
  "\n"
  "    }else if bRequest == 5 { // mSET_ADDRESS\n"
  "\n"
  "    }else if bRequest == 9 { // mSET_CONFIG\n"
  "\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func endpoint_0_handler section @mutating (\?transactionStatus: _ $u8) {\n"
  "    self.trace |= 4\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "//  func section usb_setup @mutating () {\n"
  "//  //---\n"
  "//    let index $u32 = 0\n"
  "//    self.descriptorTable [index].desc = BDT_DESC (!EP0_SIZE !DATA1)\n"
  "//    self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n"
  "//    self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n"
  "//  //--- Grab the 8 byte setup info\n"
  "//    let bmRequestType = self.ep0_rx0_buf [0] & 0x1F\n"
  "//    let bRequest = self.ep0_rx0_buf [1]\n"
  "//    if bmRequestType == 0 { // Setup device\n"
  "//      digital.write (!yes !toPort:LED_L2)\n"
  "//      self.usb_setup_device (!bRequest)\n"
  "//    }else if bmRequestType == 1 { // Setup interface\n"
  "//      digital.write (!yes !toPort:LED_L3)\n"
  "//\n"
  "//    }else if bmRequestType == 2 { // Setup endpoint\n"
  "//      digital.write (!yes !toPort:LED_L4)\n"
  "//\n"
  "//    }\n"
  "//////    let wValue  = {UInt16 !8:self.ep0_rx0_buf [3] !8:self.ep0_rx0_buf [2]}\n"
  "//////    let wIndex  = {UInt16 !8:self.ep0_rx0_buf [5] !8:self.ep0_rx0_buf [4]}\n"
  "//////    let wLength = {UInt16 !8:self.ep0_rx0_buf [7] !8:self.ep0_rx0_buf [6]}\n"
  "////  //--- Build uint16 requestAndType\n"
  "////    let requestAndType = {UInt16 !8:bRequest !8:bmRequestType}\n"
  "////  //---\n"
  "////    if requestAndType == 0x0500 { // Set address, nothing to do\n"
  "////        digital.write (!yes !toPort:LED_L2)\n"
  "////    }else if requestAndType == 0x0900 { // Set configuration\n"
  "////        digital.write (!yes !toPort:LED_L1)\n"
  "////\n"
  "////\n"
  "////    }else if requestAndType == 0x0880 { // Get configuration\n"
  "////    }else if requestAndType == 0x0080 { // Get status (device)\n"
  "////    }else if requestAndType == 0x0082 { // Get status (endpoint)\n"
  "////    }else if requestAndType == 0x0102 { // Clear feature (device)\n"
  "////    }else if requestAndType == 0x0302 { // Clear feature (endpoint)\n"
  "////    }else if (requestAndType == 0x0680) || (requestAndType == 0x0681) { // Get descriptor\n"
  "////        digital.write (!yes !toPort:LED_L3)\n"
  "////    }\n"
  "//  }\n"
  "//\n"
  "////#define mGET_STATUS           0\n"
  "////#define mCLR_FEATURE          1\n"
  "////#define mSET_FEATURE          3\n"
  "////#define mSET_ADDRESS          5\n"
  "////#define mGET_DESC             6\n"
  "////#define mSET_DESC             7\n"
  "////#define mGET_CONFIG           8\n"
  "////#define mSET_CONFIG           9\n"
  "////#define mGET_INTF             10\n"
  "////#define mSET_INTF             11\n"
  "////#define mSYNC_FRAME           12\n"
  "//\n"
  "//  func section usb_setup_device @mutating (\?bRequest $u8) {\n"
  "//    self.trace = extend (bRequest)\n"
  "////    const usb_descriptor_list_t *p;\n"
  "////    int len;\n"
  "////\n"
  "////    switch (setup->bRequest) {\n"
  "////        case mGET_DESC:\n"
  "////            p = usb_descriptor_list;                    // Find entry in table\n"
  "////            while(p->wValue) {\n"
  "////                if(p->wValue == setup->wValue) {\n"
  "////                    if(p->length == 0)\n"
  "////                        len = p->addr[0];               // Use structure length\n"
  "////                    else\n"
  "////                        len = p->length;\n"
  "////\n"
  "////                    iprintf(\"sending 0x%04x %d\\r\\n\",setup->wValue, len);\n"
  "////                    usb_queue_tx(ep, p->addr, min(len, setup->wLength));\n"
  "////                    return;\n"
  "////                }\n"
  "////                p++;\n"
  "////            }\n"
  "////            iprintf(\"NOT IMPLEMENTED! 0x%04x\\r\\n\", setup->wValue);\n"
  "////            break;\n"
  "////\n"
  "////        case mSET_ADDRESS:\n"
  "////            device_state = ADDRESS;\n"
  "////            device_address = setup->wValue & 0x7f;\n"
  "////            usb_tx(ep,0,0);                         // Send handshake\n"
  "////            break;\n"
  "////\n"
  "////        case mSET_CONFIG:\n"
  "////            iprintf(\"setconfig: %d\\r\\n\", setup->wValue);\n"
  "////            device_state = ENUMERATED;\n"
  "////            usb_set_config(setup->wValue);\n"
  "////            usb_tx(ep,0,0);                         // Send handshake\n"
  "////            break;\n"
  "////\n"
  "////        default:\n"
  "////            iprintf(\"NOT IMPLEMENTED! %d\\r\\n\", setup->bRequest);\n"
  "////            break;\n"
  "////      }\n"
  "//  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver usb_device ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// TASK\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var tick $u32 = 0\n"
  "  var état $u32 = 0\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  while event time.wait (!until:self.tick) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.tick +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    for i $u32 in 0 ..< TRACE_SIZE {\n"
  "      let e = usb_device.lireÉtat (!i)\n"
  "      lcd.print (!hex2:e)\n"
  "    }\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!hex8:usb_device.lireAddresseUSB ())\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    lcd.print (!hex8:usb_device.lireTrace ())\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_22_embeddedSampleCode (
  "13-usb-device.omnibus",
  "omnibus",
  true, // Text file
 20317, // Text length
  gWrapperFileContent_22_embeddedSampleCode
) ;

//--- File 'teensy-3-6/14-task-activation-duration-64-bit-timer.omnibus'

const char * gWrapperFileContent_16_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "let @display BUS_MHZ2 = BUS_MHZ\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "driver timer ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver timer > root {\n"
  "  var tick = $u64 ()\n"
  "\n"
  "  startup {\n"
  "  //--- Power on PIT\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !PIT:1}\n"
  "   //--- Enable PIT module\n"
  "    ©PIT.MCR = 0\n"
  "  //--- Disable PIT0 and PIT1\n"
  "    ©PIT.TCTRL [0] = 0\n"
  "    ©PIT.TCTRL [1] = 0\n"
  "  //--- PIT0 clock frequency is BUS_MHZ (in MHz)\n"
  "    ©PIT.LDVAL [0] = $u32.max\n"
  "    ©PIT.LDVAL [1] = $u32.max\n"
  "  //--- Enable PIT0 and PIT1 : start counting, no interrupt\n"
  "    ©PIT.TCTRL [1] = {©PIT.TCTRL !CHN:1 !TEN:1}\n"
  "    ©PIT.TCTRL [0] = {©PIT.TCTRL !TEN:1}\n"
  "  }\n"
  "\n"
  "  public section setTick () {\n"
  "    self.tick = self.now ()\n"
  "  }\n"
  "\n"
  "  public section getTick () -> $u64 {\n"
  "    result = self.tick\n"
  "  }\n"
  "\n"
  "  public section now () -> $u64 {\n"
  "    result = extend (©PIT.LTMR64H)\n"
  "    result <<= 32\n"
  "    result |= extend (©PIT.LTMR64L)\n"
  "    result = ~ result\n"
  "    result +%= 1\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync s = $Semaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    s.wait ()\n"
  "    let duration = ((timer.now () - timer.getTick ()) * 1000) / BUS_MHZ\n"
  "    lcd.print (!u64:duration)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "\n"
  "  event @onSetup first {\n"
  "    timer.setTick ()\n"
  "    s.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_16_embeddedSampleCode (
  "14-task-activation-duration-64-bit-timer.omnibus",
  "omnibus",
  true, // Text file
 1900, // Text length
  gWrapperFileContent_16_embeddedSampleCode
) ;

//--- File 'teensy-3-6/15-task-activation-duration-systick.omnibus'

const char * gWrapperFileContent_28_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//\n"
  "driver myDriver > time {\n"
  "  var tick $u32 = 0\n"
  "\n"
  "  public section noteTick () {\n"
  "    self.tick = ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  public section getDuration () -> $u32 {\n"
  "    result = self.tick - ©SYST.CVR\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync s = $Semaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task TâcheA > TâcheB @stacksize 512 @autostart {\n"
  "\n"
  "  event @onSetup first {\n"
  "    s.wait ()\n"
  "    let duration = myDriver.getDuration ()\n"
  "    lcd.print (!u32:duration)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!hex8: currentStackPointer ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task TâcheB @stacksize 512 @autostart {\n"
  "\n"
  "  event @onSetup first {\n"
  "    myDriver.noteTick ()\n"
  "    s.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_28_embeddedSampleCode (
  "15-task-activation-duration-systick.omnibus",
  "omnibus",
  true, // Text file
 1309, // Text length
  gWrapperFileContent_28_embeddedSampleCode
) ;

//--- File 'teensy-3-6/16-clock-out-pin.omnibus'

const char * gWrapperFileContent_31_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// Le champ CLKOUTSEL de SIM_SOPT2 permet de sélectionner le signal qui sera sorti :\n"
  "// 000  FlexBus CLKOUT : signal faible…\n"
  "// 001  Reserved\n"
  "// 010  Flash clock : signal faible…\n"
  "// 011  LPO clock (1 kHz) : testé ok\n"
  "// 100  MCGIRCLK : pas de signal \?\n"
  "// 101  RTC 32.768kHz clock : testé ok\n"
  "// 110  OSCERCLK0 : pas de signal \?\n"
  "// 111  IRC 48 MHz clock : attention, cette horloge n'est pas toujours activée\n"
  "// Il y a deux possibilités d'association à un port :\n"
  "//  - PTA6, ALT 5 : inaccessible sur la Teensy 3.6\n"
  "//  - PTC3, ALT 5 : PORT #9 sur le Teensy 3.6\n"
  "\n"
  "driver myDriver > digital {\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    ©SIM.SOPT2 |= {©SIM.SOPT2 !CLKOUTSEL:3}\n"
  "    ©PORTC.PCR [3] = {©PORTC.PCR !MUX:5}\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_31_embeddedSampleCode (
  "16-clock-out-pin.omnibus",
  "omnibus",
  true, // Text file
 1224, // Text length
  gWrapperFileContent_31_embeddedSampleCode
) ;

//--- File 'teensy-3-6/17-flextimer-as-pwm.omnibus'

const char * gWrapperFileContent_34_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 24\n"
  "//let myBUS_MHZ @display = BUS_MHZ\n"
  "//let myFLEXBUS_MHZ @display = FLEXBUS_MHZ\n"
  "//let myFLASH_KHZ @display = FLASH_KHZ\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  //····················································································································\n"
  "  //--- Clock source is set by the CLKS field of FTM0:SC :\n"
  "  //   00  No clock selected. This in effect disables the FTM counter. \n"
  "  //   01  System clock, frequency given by BUS_MHZ\n"
  "  //   10  Fixed frequency clock, is MCGFFCLK \?\?\?\?\?\n"
  "  //   11  External clock \n"
  "  //--- Clock prescaler is set by the PS field of FTM0:SC :\n"
  "  //   000  Divide by 1 \n"
  "  //   001  Divide by 2 \n"
  "  //   010  Divide by 4 \n"
  "  //   011  Divide by 8 \n"
  "  //   100  Divide by 16 \n"
  "  //   101  Divide by 32 \n"
  "  //   110  Divide by 64 \n"
  "  //   111  Divide by 128\n"
  "  //  The overflow frequency is : BUS_MHZ / (prescaler * (FTM0:MOD - FTM0:CNTIN + 1))\n"
  "  //---- Examples for BUS_MHZ = 60 MHz (F_CPU_MHZ = 240)\n"
  "  //    prescaler   FTM0:CNTIN   FTM0:MOD   Resulting frequency\n"
  "  //      /16                0     0xFFFF   57,22 Hz\n"
  "  //      /1                 0         14   4 MHz\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:.D3) // Led L0\n"
  "    digital.set (!mode:.output !toPort:.D8) // Led L0\n"
  "  //--- Enable clock\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !FTM0:1}\n"
  "  //--- Set counter min value\n"
  "    ©FTM[0].CNTIN = {©FTM.CNTIN !INIT:0}\n"
  "  //--- Set counter max value\n"
  "    ©FTM[0].MOD = {©FTM.MOD !MOD:0xFFFF}\n"
  "  //--- Set prescaler\n"
  "    ©FTM[0].SC = {©FTM.SC !CLKS:1 !PS:4}\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.FTM0)\n"
  "  //--- Enable FTM interrupt\n"
  "    ©FTM[0].SC |= {©FTM.SC !TOIE:1}\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section FTM0 {\n"
  "  //--- Set by hardware when the FTM counter passes the value in the MOD register.\n"
  "  //    The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit\n"
  "    ©FTM[0].SC &= ~ {©FTM.SC !TOF:1}\n"
  "    digital.toggle (!port:.D3)\n"
  "    digital.toggle (!port:.D8)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_34_embeddedSampleCode (
  "17-flextimer-as-pwm.omnibus",
  "omnibus",
  true, // Text file
 2720, // Text length
  gWrapperFileContent_34_embeddedSampleCode
) ;

//--- File 'teensy-3-6/18-flextimer-external-clock.omnibus'

const char * gWrapperFileContent_41_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  //····················································································································\n"
  "  //--- Two external clocks are available for the Flexi timers : FTM_CLKIN0 and FTM_CKLIN1\n"
  "  //  Input ports for FTM_CLKIN0\n"
  "  //    PTA18 ALT 4: not available, used by 16 MHz quartz\n"
  "  //    PTB16 ALT 4: pin #0\n"
  "  //    PTC12 ALT 4: not available on Teensy\n"
  "  //  Input ports for FTM_CLKIN1\n"
  "  //    PTA19 ALT 4: not available, used by 16 MHz quartz\n"
  "  //    PTB17 ALT 4: pin #1\n"
  "  //    PTC13 ALT 4: not available on Teensy\n"
  "  //  For selecting external clock for FTM: CLKS field of FTM0:SC set to 3.\n"
  "  //  The FTMiCLKSEL fields of the SIM:SOPT4 register select FTM_CLKIN0 or FTM_CKLIN1 :\n"
  "  //    0 for FTM_CLKIN0\n"
  "  //    1 for FTM_CLKIN0\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "  //--- Enable clock\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !FTM0:1 !FTM1:1}\n"
  "    ©SIM.SOPT4 = 0 // |= ©SIM.SOPT4 !FTM1CLKSEL:1)\n"
  "  //-- Configure PTB16 as FTM_CLKIN0 (with pullup)\n"
  "//    ©PORTB.PCR[16] = ©PORTB.PCR !MUX:4 !PE:1 !PS:1)\n"
  "    ©PORTB.PCR[17] = {©PORTB.PCR !MUX:4 !PE:1 !PS:1}\n"
  "  //--- Set counter min value\n"
  "//    ©FTM[1].CONF = ©FTM.CONF !NUMTOF:31)\n"
  "    ©FTM[0].MODE = 0x05\n"
  "    ©FTM[0].SC = 0\n"
  "    ©FTM[0].CNTIN = {©FTM.CNTIN !INIT:0}\n"
  "    ©FTM[0].CNT = {©FTM.CNT !COUNT:0}\n"
  "    ©FTM[0].MOD = {©FTM.MOD !MOD:1}\n"
  "    ©FTM[0].C0SC = 0x14\n"
  "    ©PORTB.PCR[16] = {©PORTB.PCR !MUX:4 !PE:1 !PS:1}\n"
  "    ©FTM[0].C0V = 0\n"
  "    ©FTM[0].SC = 0x58\n"
  "\n"
  "//    ©FTM[0].CNTIN = ©FTM.CNTIN !INIT:0)\n"
  "    ©FTM[1].CNTIN = {©FTM.CNTIN !INIT:0}\n"
  "  //--- Set counter current value\n"
  "//    ©FTM[0].CNT = ©FTM.CNT !COUNT:0)\n"
  "    ©FTM[1].CNT = {©FTM.CNT !COUNT:0}\n"
  "  //--- Set counter max value\n"
  "//    ©FTM[0].MOD = ©FTM.MOD !MOD:1)\n"
  "    ©FTM[1].MOD = {©FTM.MOD !MOD:0xFFFF}\n"
  "\n"
  "//    ©FTM[0].CONF = ©FTM.CONF !BDMMODE:3)\n"
  "//    ©FTM[1].CONF = ©FTM.CONF !BDMMODE:3)\n"
  "//    ©FTM[0].MODE = ©FTM.MODE !FTMEN:1)\n"
  "//    ©FTM[1].MODE- = ©FTM.MODE !FTMEN:1)\n"
  "  //--- Set prescaler (0 -> divide by 1) and clock source (3 --> external source)\n"
  "//    ©FTM[0].C0V = 0  //compare value = 0\n"
  "//    ©FTM[0].SC = ©FTM.SC !CLKS:3 !PS:0)\n"
  "    ©FTM[1].SC = {©FTM.SC !CLKS:1 !PS:6}\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.FTM0)\n"
  "  //--- Enable FTM interrupt\n"
  "//    ©FTM[0].SC |= ©FTM.SC !TOIE:1)\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.FTM1)\n"
  "  //--- Enable FTM interrupt\n"
  "    ©FTM[1].SC |= {©FTM.SC !TOIE:1}\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "   section readCounter0 () -> $u32 {\n"
  "    result = ©FTM[0].CNT\n"
  "  }\n"
  "  //····················································································································\n"
  "\n"
  "   section readCounter1 () -> $u32 {\n"
  "    result = ©FTM[1].CNT\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section FTM0 {\n"
  "  //--- Set by hardware when the FTM counter passes the value in the MOD register.\n"
  "  //    The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit\n"
  "    ©FTM[0].SC &= ~ {©FTM.SC !TOF:1}\n"
  "    digital.toggle (!port:LED_L0)\n"
  "  }\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section FTM1 {\n"
  "  //--- Set by hardware when the FTM counter passes the value in the MOD register.\n"
  "  //    The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit\n"
  "    ©FTM[1].SC &= ~ {©FTM.SC !TOF:1}\n"
  "    digital.toggle (!port:LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "  var counter0 $u32 = 0\n"
  "  var counter1 $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    lcd.print (!string:\"FTM0:\")\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!string:\"FTM1:\")\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 1_000\n"
  "    digital.toggle (!port:LED_L3)\n"
  "    let counter0 = myDriver.readCounter0 ()\n"
  "    if self.counter0 ≠ counter0 {\n"
  "      self.counter0 = counter0\n"
  "      lcd.goto (!line:0 !column:6)\n"
  "      lcd.print (!u32:counter0)\n"
  "    }\n"
  "    let counter1 = myDriver.readCounter1 ()\n"
  "    if self.counter1 ≠ counter1 {\n"
  "      self.counter1 = counter1\n"
  "      lcd.goto (!line:1 !column:6)\n"
  "      lcd.print (!u32:counter1)\n"
  "    }\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_41_embeddedSampleCode (
  "18-flextimer-external-clock.omnibus",
  "omnibus",
  true, // Text file
 5148, // Text length
  gWrapperFileContent_41_embeddedSampleCode
) ;

//--- File 'teensy-3-6/19-external-interrupt.omnibus'

const char * gWrapperFileContent_32_embeddedSampleCode = 
  "target \"teensy-3-6/xtr64\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  //····················································································································\n"
  "  //--- LED_L0 is port #3: PTA12\n"
  "  //    PORTA_PCR12 is configured to generate an interrupt on falling edge\n"
  "  // So: when LED_L0 is swichted off, LED_L1 toggles\n"
  "  //--- Port #12 is PTC7\n"
  "  //    PORTC_PCR7 is configured to generate an interrupt on falling edge\n"
  "  // So: when push button P4 is pressed, LED_L4 toggles\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P4)\n"
  "  //--- Generate an interrupt on falling edge of port #3 (PTA12)\n"
  "    ©PORTA.PCR[12] |= {©PORTA.PCR !IRQC:0xA}\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.pinDetectPortA)\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.pinDetectPortA)\n"
  "  //--- Digital filters are clocked by the LPO clock\n"
  "    ©PORTC.DFCR = 1\n"
  "  //--- Setr digital filter length\n"
  "    ©PORTC.DFWR = 31\n"
  "  //--- Enable digital filter ou PTC7\n"
  "    ©PORTC.DFER = 1 << 7\n"
  "  //--- Generate an interrupt on falling edge of port #12 (PTC7)\n"
  "    ©PORTC.PCR[7] |= {©PORTC.PCR !IRQC:0xA}\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.pinDetectPortC)\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.pinDetectPortC)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section pinDetectPortA {\n"
  "  //--- Acknowledge interrupt (several ways to do)\n"
  " //   #PORTA:PCR[12 |= ©PORTA.PCR !ISF:1) // Setting bit ISF clears interrupt\n"
  "    ©PORTA.PCR[12] @bit 24 = 1 // The same, using bit banding\n"
  " //   ©PORTA.ISFR = 1 << 12 // Setting bit 12 clears interrupt\n"
  "  //--- Toggle LED_L1\n"
  "    digital.toggle (!port:LED_L1)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section pinDetectPortC {\n"
  "  //--- Acknowledge interrupt (several ways to do)\n"
  " //   ©PORTC.PCR[7] |= ©PORTC.PCR !ISF:1) // Setting bit ISF clears interrupt\n"
  "    ©PORTC.PCR[7] @bit 24 = 1 // The same, using bit banding\n"
  " //   ©PORTC.ISFR = 1 << 7 // Setting bit 7 clears interrupt\n"
  "  //--- Toggle LED_L4\n"
  "    digital.toggle (!port:LED_L4)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 1_000\n"
  "    digital.toggle (!port:LED_L0)\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_32_embeddedSampleCode (
  "19-external-interrupt.omnibus",
  "omnibus",
  true, // Text file
 3341, // Text length
  gWrapperFileContent_32_embeddedSampleCode
) ;

//--- File 'teensy-3-6/20-round-robin-32-tasks.omnibus'

const char * gWrapperFileContent_25_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  //····················································································································\n"
  "  //--- LED_L0 is port #3: PTA12\n"
  "  //    PORTA_PCR12 is configured to generate an interrupt on falling edge\n"
  "  // So: when LED_L0 is swichted off, LED_L1 toggles\n"
  "  //--- Port #12 is PTC7\n"
  "  //    PORTC_PCR7 is configured to generate an interrupt on falling edge\n"
  "  // So: when push button P4 is pressed, LED_L4 toggles\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  var tick = $u32 ()\n"
  "\n"
  "  public section noteTick () {\n"
  "    self.tick = ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  public section getDuration () -> $u32 {\n"
  "    result = self.tick - ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync sémaphore0 = $Semaphore (!value:0)\n"
  "sync sémaphore1 = $Semaphore (!value:0)\n"
  "sync sémaphore2 = $Semaphore (!value:0)\n"
  "sync sémaphore3 = $Semaphore (!value:0)\n"
  "sync sémaphore4 = $Semaphore (!value:0)\n"
  "sync sémaphore5 = $Semaphore (!value:0)\n"
  "sync sémaphore6 = $Semaphore (!value:0)\n"
  "sync sémaphore7 = $Semaphore (!value:0)\n"
  "sync sémaphore8 = $Semaphore (!value:0)\n"
  "sync sémaphore9 = $Semaphore (!value:0)\n"
  "sync sémaphore10 = $Semaphore (!value:0)\n"
  "sync sémaphore11 = $Semaphore (!value:0)\n"
  "sync sémaphore12 = $Semaphore (!value:0)\n"
  "sync sémaphore13 = $Semaphore (!value:0)\n"
  "sync sémaphore14 = $Semaphore (!value:0)\n"
  "sync sémaphore15 = $Semaphore (!value:0)\n"
  "sync sémaphore16 = $Semaphore (!value:0)\n"
  "sync sémaphore17 = $Semaphore (!value:0)\n"
  "sync sémaphore18 = $Semaphore (!value:0)\n"
  "sync sémaphore19 = $Semaphore (!value:0)\n"
  "sync sémaphore20 = $Semaphore (!value:0)\n"
  "sync sémaphore21 = $Semaphore (!value:0)\n"
  "sync sémaphore22 = $Semaphore (!value:0)\n"
  "sync sémaphore23 = $Semaphore (!value:0)\n"
  "sync sémaphore24 = $Semaphore (!value:0)\n"
  "sync sémaphore25 = $Semaphore (!value:0)\n"
  "sync sémaphore26 = $Semaphore (!value:0)\n"
  "sync sémaphore27 = $Semaphore (!value:0)\n"
  "sync sémaphore28 = $Semaphore (!value:0)\n"
  "sync sémaphore29 = $Semaphore (!value:0)\n"
  "sync sémaphore30 = $Semaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 500\n"
  "    myDriver.noteTick ()\n"
  "    sémaphore0.signal ()\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  while event sémaphore0.wait () {\n"
  "    sémaphore1.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  while event sémaphore1.wait () {\n"
  "    sémaphore2.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T3 @stacksize 512 @autostart {\n"
  "  while event sémaphore2.wait () {\n"
  "    sémaphore3.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T4 @stacksize 512 @autostart {\n"
  "  while event sémaphore3.wait () {\n"
  "    sémaphore4.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T5 @stacksize 512 @autostart {\n"
  "  while event sémaphore4.wait () {\n"
  "    sémaphore5.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T6 @stacksize 512 @autostart {\n"
  "  while event sémaphore5.wait () {\n"
  "    sémaphore6.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T7 @stacksize 512 @autostart {\n"
  "  while event sémaphore6.wait () {\n"
  "    sémaphore7.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T8 @stacksize 512 @autostart {\n"
  "  while event sémaphore7.wait () {\n"
  "    sémaphore8.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T9 @stacksize 512 @autostart {\n"
  "  while event sémaphore8.wait () {\n"
  "    sémaphore10.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T10 @stacksize 512 @autostart {\n"
  "  while event sémaphore9.wait () {\n"
  "    sémaphore10.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T11 @stacksize 512 @autostart {\n"
  "  while event sémaphore10.wait () {\n"
  "    sémaphore11.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T12 @stacksize 512 @autostart {\n"
  "  while event sémaphore11.wait () {\n"
  "    sémaphore12.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T13 @stacksize 512 @autostart {\n"
  "  while event sémaphore12.wait () {\n"
  "    sémaphore13.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T14 @stacksize 512 @autostart {\n"
  "  while event sémaphore13.wait () {\n"
  "    sémaphore14.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T15 @stacksize 512 @autostart {\n"
  "  while event sémaphore14.wait () {\n"
  "    sémaphore15.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T16 @stacksize 512 @autostart {\n"
  "  while event sémaphore15.wait () {\n"
  "    sémaphore16.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T17 @stacksize 512 @autostart {\n"
  "  while event sémaphore16.wait () {\n"
  "    sémaphore17.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T18 @stacksize 512 @autostart {\n"
  "  while event sémaphore17.wait () {\n"
  "    sémaphore18.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T19 @stacksize 512 @autostart {\n"
  "  while event sémaphore18.wait () {\n"
  "    sémaphore19.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T20 @stacksize 512 @autostart {\n"
  "  while event sémaphore19.wait () {\n"
  "    sémaphore20.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T21 @stacksize 512 @autostart {\n"
  "  while event sémaphore20.wait () {\n"
  "    sémaphore21.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T22 @stacksize 512 @autostart {\n"
  "  while event sémaphore21.wait () {\n"
  "    sémaphore22.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T23 @stacksize 512 @autostart {\n"
  "  while event sémaphore22.wait () {\n"
  "    sémaphore23.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T24 @stacksize 512 @autostart {\n"
  "  while event sémaphore23.wait () {\n"
  "    sémaphore24.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T25 @stacksize 512 @autostart {\n"
  "  while event sémaphore24.wait () {\n"
  "    sémaphore25.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T26 @stacksize 512 @autostart {\n"
  "  while event sémaphore25.wait () {\n"
  "    sémaphore26.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T27 @stacksize 512 @autostart {\n"
  "  while event sémaphore26.wait () {\n"
  "    sémaphore27.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T28 @stacksize 512 @autostart {\n"
  "  while event sémaphore27.wait () {\n"
  "    sémaphore28.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T29 @stacksize 512 @autostart {\n"
  "  while event sémaphore28.wait () {\n"
  "    sémaphore29.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T30 @stacksize 512 @autostart {\n"
  "  while event sémaphore29.wait () {\n"
  "    sémaphore30.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T31 @stacksize 512 @autostart {\n"
  "  while event sémaphore30.wait () {\n"
  "    let duration = myDriver.getDuration ()\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:duration)\n"
  "    digital.toggle (!port:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_25_embeddedSampleCode (
  "20-round-robin-32-tasks.omnibus",
  "omnibus",
  true, // Text file
 10275, // Text length
  gWrapperFileContent_25_embeddedSampleCode
) ;

//--- File 'teensy-3-6/21-round-robin-64-tasks.omnibus'

const char * gWrapperFileContent_18_embeddedSampleCode = 
  "target \"teensy-3-6/xtr64\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  var tick = $u32 ()\n"
  "\n"
  "  public section noteTick () {\n"
  "    self.tick = ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  public section getDuration () -> $u32 {\n"
  "    result = self.tick - ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync sémaphore0 = $Semaphore (!value:0)\n"
  "sync sémaphore1 = $Semaphore (!value:0)\n"
  "sync sémaphore2 = $Semaphore (!value:0)\n"
  "sync sémaphore3 = $Semaphore (!value:0)\n"
  "sync sémaphore4 = $Semaphore (!value:0)\n"
  "sync sémaphore5 = $Semaphore (!value:0)\n"
  "sync sémaphore6 = $Semaphore (!value:0)\n"
  "sync sémaphore7 = $Semaphore (!value:0)\n"
  "sync sémaphore8 = $Semaphore (!value:0)\n"
  "sync sémaphore9 = $Semaphore (!value:0)\n"
  "sync sémaphore10 = $Semaphore (!value:0)\n"
  "sync sémaphore11 = $Semaphore (!value:0)\n"
  "sync sémaphore12 = $Semaphore (!value:0)\n"
  "sync sémaphore13 = $Semaphore (!value:0)\n"
  "sync sémaphore14 = $Semaphore (!value:0)\n"
  "sync sémaphore15 = $Semaphore (!value:0)\n"
  "sync sémaphore16 = $Semaphore (!value:0)\n"
  "sync sémaphore17 = $Semaphore (!value:0)\n"
  "sync sémaphore18 = $Semaphore (!value:0)\n"
  "sync sémaphore19 = $Semaphore (!value:0)\n"
  "sync sémaphore20 = $Semaphore (!value:0)\n"
  "sync sémaphore21 = $Semaphore (!value:0)\n"
  "sync sémaphore22 = $Semaphore (!value:0)\n"
  "sync sémaphore23 = $Semaphore (!value:0)\n"
  "sync sémaphore24 = $Semaphore (!value:0)\n"
  "sync sémaphore25 = $Semaphore (!value:0)\n"
  "sync sémaphore26 = $Semaphore (!value:0)\n"
  "sync sémaphore27 = $Semaphore (!value:0)\n"
  "sync sémaphore28 = $Semaphore (!value:0)\n"
  "sync sémaphore29 = $Semaphore (!value:0)\n"
  "sync sémaphore30 = $Semaphore (!value:0)\n"
  "sync sémaphore31 = $Semaphore (!value:0)\n"
  "sync sémaphore32 = $Semaphore (!value:0)\n"
  "sync sémaphore33 = $Semaphore (!value:0)\n"
  "sync sémaphore34 = $Semaphore (!value:0)\n"
  "sync sémaphore35 = $Semaphore (!value:0)\n"
  "sync sémaphore36 = $Semaphore (!value:0)\n"
  "sync sémaphore37 = $Semaphore (!value:0)\n"
  "sync sémaphore38 = $Semaphore (!value:0)\n"
  "sync sémaphore39 = $Semaphore (!value:0)\n"
  "sync sémaphore40 = $Semaphore (!value:0)\n"
  "sync sémaphore41 = $Semaphore (!value:0)\n"
  "sync sémaphore42 = $Semaphore (!value:0)\n"
  "sync sémaphore43 = $Semaphore (!value:0)\n"
  "sync sémaphore44 = $Semaphore (!value:0)\n"
  "sync sémaphore45 = $Semaphore (!value:0)\n"
  "sync sémaphore46 = $Semaphore (!value:0)\n"
  "sync sémaphore47 = $Semaphore (!value:0)\n"
  "sync sémaphore48 = $Semaphore (!value:0)\n"
  "sync sémaphore49 = $Semaphore (!value:0)\n"
  "sync sémaphore50 = $Semaphore (!value:0)\n"
  "sync sémaphore51 = $Semaphore (!value:0)\n"
  "sync sémaphore52 = $Semaphore (!value:0)\n"
  "sync sémaphore53 = $Semaphore (!value:0)\n"
  "sync sémaphore54 = $Semaphore (!value:0)\n"
  "sync sémaphore55 = $Semaphore (!value:0)\n"
  "sync sémaphore56 = $Semaphore (!value:0)\n"
  "sync sémaphore57 = $Semaphore (!value:0)\n"
  "sync sémaphore58 = $Semaphore (!value:0)\n"
  "sync sémaphore59 = $Semaphore (!value:0)\n"
  "sync sémaphore60 = $Semaphore (!value:0)\n"
  "sync sémaphore61 = $Semaphore (!value:0)\n"
  "sync sémaphore62 = $Semaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 500\n"
  "    myDriver.noteTick ()\n"
  "    sémaphore0.signal ()\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  while event sémaphore0.wait () {\n"
  "    sémaphore1.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  while event sémaphore1.wait () {\n"
  "    sémaphore2.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T3 @stacksize 512 @autostart {\n"
  "  while event sémaphore2.wait () {\n"
  "    sémaphore3.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T4 @stacksize 512 @autostart {\n"
  "  while event sémaphore3.wait () {\n"
  "    sémaphore4.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T5 @stacksize 512 @autostart {\n"
  "  while event sémaphore4.wait () {\n"
  "    sémaphore5.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T6 @stacksize 512 @autostart {\n"
  "  while event sémaphore5.wait () {\n"
  "    sémaphore6.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T7 @stacksize 512 @autostart {\n"
  "  while event sémaphore6.wait () {\n"
  "    sémaphore7.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T8 @stacksize 512 @autostart {\n"
  "  while event sémaphore7.wait () {\n"
  "    sémaphore8.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T9 @stacksize 512 @autostart {\n"
  "  while event sémaphore8.wait () {\n"
  "    sémaphore9.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T10 @stacksize 512 @autostart {\n"
  "  while event sémaphore9.wait () {\n"
  "    sémaphore10.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T11 @stacksize 512 @autostart {\n"
  "  while event sémaphore10.wait () {\n"
  "    sémaphore11.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T12 @stacksize 512 @autostart {\n"
  "  while event sémaphore11.wait () {\n"
  "    sémaphore12.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T13 @stacksize 512 @autostart {\n"
  "  while event sémaphore12.wait () {\n"
  "    sémaphore13.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T14 @stacksize 512 @autostart {\n"
  "  while event sémaphore13.wait () {\n"
  "    sémaphore14.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T15 @stacksize 512 @autostart {\n"
  "  while event sémaphore14.wait () {\n"
  "    sémaphore15.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T16 @stacksize 512 @autostart {\n"
  "  while event sémaphore15.wait () {\n"
  "    sémaphore16.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T17 @stacksize 512 @autostart {\n"
  "  while event sémaphore16.wait () {\n"
  "    sémaphore17.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T18 @stacksize 512 @autostart {\n"
  "  while event sémaphore17.wait () {\n"
  "    sémaphore18.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T19 @stacksize 512 @autostart {\n"
  "  while event sémaphore18.wait () {\n"
  "    sémaphore19.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T20 @stacksize 512 @autostart {\n"
  "  while event sémaphore19.wait () {\n"
  "    sémaphore20.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T21 @stacksize 512 @autostart {\n"
  "  while event sémaphore20.wait () {\n"
  "    sémaphore21.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T22 @stacksize 512 @autostart {\n"
  "  while event sémaphore21.wait () {\n"
  "    sémaphore22.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T23 @stacksize 512 @autostart {\n"
  "  while event sémaphore22.wait () {\n"
  "    sémaphore23.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T24 @stacksize 512 @autostart {\n"
  "  while event sémaphore23.wait () {\n"
  "    sémaphore24.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T25 @stacksize 512 @autostart {\n"
  "  while event sémaphore24.wait () {\n"
  "    sémaphore25.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T26 @stacksize 512 @autostart {\n"
  "  while event sémaphore25.wait () {\n"
  "    sémaphore26.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T27 @stacksize 512 @autostart {\n"
  "  while event sémaphore26.wait () {\n"
  "    sémaphore27.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T28 @stacksize 512 @autostart {\n"
  "  while event sémaphore27.wait () {\n"
  "    sémaphore28.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T29 @stacksize 512 @autostart {\n"
  "  while event sémaphore28.wait () {\n"
  "    sémaphore29.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T30 @stacksize 512 @autostart {\n"
  "  while event sémaphore29.wait () {\n"
  "    sémaphore30.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T31 @stacksize 512 @autostart {\n"
  "  while event sémaphore30.wait () {\n"
  "    sémaphore31.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T32 @stacksize 512 @autostart {\n"
  "  while event sémaphore31.wait () {\n"
  "    sémaphore32.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T33 @stacksize 512 @autostart {\n"
  "  while event sémaphore32.wait () {\n"
  "    sémaphore33.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T34 @stacksize 512 @autostart {\n"
  "  while event sémaphore33.wait () {\n"
  "    sémaphore34.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T35 @stacksize 512 @autostart {\n"
  "  while event sémaphore34.wait () {\n"
  "    sémaphore35.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T36 @stacksize 512 @autostart {\n"
  "  while event sémaphore35.wait () {\n"
  "    sémaphore36.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T37 @stacksize 512 @autostart {\n"
  "  while event sémaphore36.wait () {\n"
  "    sémaphore37.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T38 @stacksize 512 @autostart {\n"
  "  while event sémaphore37.wait () {\n"
  "    sémaphore38.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T39 @stacksize 512 @autostart {\n"
  "  while event sémaphore38.wait () {\n"
  "    sémaphore39.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T40 @stacksize 512 @autostart {\n"
  "  while event sémaphore39.wait () {\n"
  "    sémaphore40.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T41 @stacksize 512 @autostart {\n"
  "  while event sémaphore40.wait () {\n"
  "    sémaphore41.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T42 @stacksize 512 @autostart {\n"
  "  while event sémaphore41.wait () {\n"
  "    sémaphore42.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T43 @stacksize 512 @autostart {\n"
  "  while event sémaphore42.wait () {\n"
  "    sémaphore43.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T44 @stacksize 512 @autostart {\n"
  "  while event sémaphore43.wait () {\n"
  "    sémaphore44.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T45 @stacksize 512 @autostart {\n"
  "  while event sémaphore44.wait () {\n"
  "    sémaphore45.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T46 @stacksize 512 @autostart {\n"
  "  while event sémaphore45.wait () {\n"
  "    sémaphore46.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T47 @stacksize 512 @autostart {\n"
  "  while event sémaphore46.wait () {\n"
  "    sémaphore47.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T48 @stacksize 512 @autostart {\n"
  "  while event sémaphore47.wait () {\n"
  "    sémaphore48.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T49 @stacksize 512 @autostart {\n"
  "  while event sémaphore48.wait () {\n"
  "    sémaphore49.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T50 @stacksize 512 @autostart {\n"
  "  while event sémaphore49.wait () {\n"
  "    sémaphore50.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T51 @stacksize 512 @autostart {\n"
  "  while event sémaphore50.wait () {\n"
  "    sémaphore51.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T52 @stacksize 512 @autostart {\n"
  "  while event sémaphore51.wait () {\n"
  "    sémaphore52.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T53 @stacksize 512 @autostart {\n"
  "  while event sémaphore52.wait () {\n"
  "    sémaphore53.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T54 @stacksize 512 @autostart {\n"
  "  while event sémaphore53.wait () {\n"
  "    sémaphore54.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T55 @stacksize 512 @autostart {\n"
  "  while event sémaphore54.wait () {\n"
  "    sémaphore55.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T56 @stacksize 512 @autostart {\n"
  "  while event sémaphore55.wait () {\n"
  "    sémaphore56.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T57 @stacksize 512 @autostart {\n"
  "  while event sémaphore56.wait () {\n"
  "    sémaphore57.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T58 @stacksize 512 @autostart {\n"
  "  while event sémaphore57.wait () {\n"
  "    sémaphore58.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T59 @stacksize 512 @autostart {\n"
  "  while event sémaphore58.wait () {\n"
  "    sémaphore59.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T60 @stacksize 512 @autostart {\n"
  "  while event sémaphore59.wait () {\n"
  "    sémaphore60.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T61 @stacksize 512 @autostart {\n"
  "  while event sémaphore60.wait () {\n"
  "    sémaphore61.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T62 @stacksize 512 @autostart {\n"
  "  while event sémaphore61.wait () {\n"
  "    sémaphore62.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T63 @stacksize 512 @autostart {\n"
  "  while event sémaphore62.wait () {\n"
  "    let duration = myDriver.getDuration ()\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:duration)\n"
  "    digital.toggle (!port: LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_18_embeddedSampleCode (
  "21-round-robin-64-tasks.omnibus",
  "omnibus",
  true, // Text file
 18324, // Text length
  gWrapperFileContent_18_embeddedSampleCode
) ;

//--- File 'teensy-3-6/22-task-activate.omnibus'

const char * gWrapperFileContent_24_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var tick $u32 = 0\n"
  "\n"
  "  while event time.wait (!until: self.tick) {\n"
  "    self.tick += 500\n"
  "    Tâche1.activate ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 { // Do not activate\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  event @onStart first {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_24_embeddedSampleCode (
  "22-task-activate.omnibus",
  "omnibus",
  true, // Text file
 807, // Text length
  gWrapperFileContent_24_embeddedSampleCode
) ;

//--- File 'teensy-3-6/23-large-integer.omnibus'

const char * gWrapperFileContent_35_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "let largeConstant = 123_456_789_123_456_789_123_456_789_123\n"
  "\n"
  "typealias $LargeInt = $u97\n"
  "\n"
  "func getLargeConstant () -> $LargeInt {\n"
  "  result = largeConstant\n"
  "}\n"
  "\n"
  "func getLargeAddition (\? inA $LargeInt \?inB $LargeInt) -> $LargeInt {\n"
  "  result = inA + inB\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var tick = $u32 ()\n"
  "  var largeInteger = $LargeInt ()\n"
  "  var otherLargeInteger = $LargeInt ()\n"
  "\n"
  "  while event time.wait (!until: self.tick) {\n"
  "    self.otherLargeInteger += self.largeInteger\n"
  "    self.tick += 500\n"
  "    self.largeInteger = getLargeAddition (!self.largeInteger !getLargeConstant ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_35_embeddedSampleCode (
  "23-large-integer.omnibus",
  "omnibus",
  true, // Text file
 926, // Text length
  gWrapperFileContent_35_embeddedSampleCode
) ;

//--- File 'teensy-3-6/24-computed-properties.omnibus'

const char * gWrapperFileContent_39_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var tick = $u32 ()\n"
  "\n"
  "  var readComputedProperty $u32 { result = self.tick }\n"
  "\n"
  "  var readWriteComputedProperty $u32 {\n"
  "    @set { self.tick = newValue }\n"
  "    @get { result = self.tick }\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until: self.tick) {\n"
  "    self.readWriteComputedProperty += 500\n"
  "//    self.tick += 500\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:self.readComputedProperty)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_39_embeddedSampleCode (
  "24-computed-properties.omnibus",
  "omnibus",
  true, // Text file
 795, // Text length
  gWrapperFileContent_39_embeddedSampleCode
) ;

//--- File 'teensy-3-6/25-enumeration.omnibus'

const char * gWrapperFileContent_23_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "enum $monEnum {\n"
  "  case zéro\n"
  "  case un\n"
  "  case deux\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var tick = $u32 ()\n"
  "  var énumération = $monEnum.zéro\n"
  "\n"
  "  while event time.wait (!until: self.tick) {\n"
  "    self.tick += 500\n"
  "    self.énumération = .un\n"
  "    var autre2num = self.énumération\n"
  "    self.énumération = .deux\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32: self.tick)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_23_embeddedSampleCode (
  "25-enumeration.omnibus",
  "omnibus",
  true, // Text file
 752, // Text length
  gWrapperFileContent_23_embeddedSampleCode
) ;

//--- File 'teensy-3-6/carte-tp-teensy-3-6.omnibus-import'

const char * gWrapperFileContent_17_embeddedSampleCode = 
  "ctAssert target \"teensy-3-6/xtr32\", \"teensy-3-6/xtr64\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver lcd (!DB4:.D16 !DB5:.D15 !DB6:.D14 !DB7:.D19 !RS:.D18 !ENABLE:.D17)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//   ACTIVITY LED\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver ActivityLed > digital {\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "  }\n"
  "}\n"
  "\n"
  "driver ActivityLed ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "public func activityLedOn safe section @exported () {\n"
  "  digital.write (!yes !toPort:.D13)\n"
  "}\n"
  "\n"
  "public func activityLedOff safe section @exported () {\n"
  "  digital.write (!no !toPort:.D13)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let LED_L0 = $DigitalPort.D3\n"
  "let LED_L1 = $DigitalPort.D4\n"
  "let LED_L2 = $DigitalPort.D5\n"
  "let LED_L3 = $DigitalPort.D6\n"
  "let LED_L4 = $DigitalPort.D7\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let BUTTON_P0 = $DigitalPort.D8\n"
  "let BUTTON_P1 = $DigitalPort.D9\n"
  "let BUTTON_P2 = $DigitalPort.D10\n"
  "let BUTTON_P3 = $DigitalPort.D11\n"
  "let BUTTON_P4 = $DigitalPort.D12\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "panic @setup 0 {\n"
  "  digital.set (!mode:.output !toPort:LED_L0)\n"
  "  digital.set (!mode:.output !toPort:LED_L1)\n"
  "  digital.set (!mode:.output !toPort:LED_L2)\n"
  "  digital.set (!mode:.output !toPort:LED_L3)\n"
  "  digital.set (!mode:.output !toPort:LED_L4)\n"
  "  lcd.clearScreenInPanicMode ()\n"
  "  lcd.gotoInPanicMode (!line:0 !column:0)\n"
  "  if LINE == 0 { // ISR Panic\n"
  "    lcd.printStringInPanicMode (!\"ISR PANIC\")\n"
  "  }else{\n"
  "    lcd.printStringInPanicMode (!FILE)\n"
  "    lcd.gotoInPanicMode (!line:2 !column:0)\n"
  "    lcd.printStringInPanicMode (!\"Line:\")\n"
  "    lcd.printUnsignedInPanicMode (!LINE)\n"
  "  }\n"
  "  lcd.gotoInPanicMode (!line:3 !column:0)\n"
  "  lcd.printStringInPanicMode (!\"Code:\")\n"
  "  lcd.printUnsignedInPanicMode (!CODE)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "panic @loop 0 {\n"
  "  time.panicBusyWaitingDuringMS (!50)\n"
  "  digital.toggle (!port:LED_L0)\n"
  "  digital.toggle (!port:LED_L1)\n"
  "  digital.toggle (!port:LED_L2)\n"
  "  digital.toggle (!port:LED_L3)\n"
  "  digital.toggle (!port:LED_L4)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

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
  nullptr
} ;

//--- All sub-directories of 'teensy-3-6' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_3 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_0 [4] = {
  & gWrapperDirectory_1_embeddedSampleCode,
  & gWrapperDirectory_2_embeddedSampleCode,
  & gWrapperDirectory_3_embeddedSampleCode,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_embeddedSampleCode (
  "",
  0,
  gWrapperAllFiles_embeddedSampleCode_0,
  3,
  gWrapperAllDirectories_embeddedSampleCode_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctInfixExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap constinArgument_inMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctInfixExpressionAST temp_0 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 418)) ;
  const GGS_ctInfixExpressionAST temp_1 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 419)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctPrefixExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap constinArgument_inMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctPrefixExpressionAST temp_0 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 425)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctTrueExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap /* constinArgument_inMap */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctFalseExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap /* constinArgument_inMap */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIntExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap /* constinArgument_inMap */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIdentifierExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap constinArgument_inMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctIdentifierExpressionAST temp_0 = this ;
  constinArgument_inMap.method_searchKey (temp_0.readProperty_mIdentifier (), inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 446)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctInfixExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap constinArgument_inMap,
                                                                     GGS_bigint & outArgument_outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_left_16060 ;
  const GGS_ctInfixExpressionAST temp_0 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inMap, var_left_16060, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 471)) ;
  GGS_bigint var_right_16140 ;
  const GGS_ctInfixExpressionAST temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inMap, var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 472)) ;
  const GGS_ctInfixExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mInfixOperator ().enumValue ()) {
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_equal:
    {
      GGS_bigint temp_3 ;
      const enumGalgasBool test_4 = GGS_bool (ComparisonKind::equal, var_left_16060.objectCompare (var_right_16140)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 474)) ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 474)) ;
      }
      outArgument_outValue = temp_3 ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_lessThan:
    {
      GGS_bigint temp_5 ;
      const enumGalgasBool test_6 = GGS_bool (ComparisonKind::lowerThan, var_left_16060.objectCompare (var_right_16140)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 475)) ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 475)) ;
      }
      outArgument_outValue = temp_5 ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseAndOp:
    {
      outArgument_outValue = var_left_16060.operator_and (var_right_16140 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 476)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseOrOp:
    {
      outArgument_outValue = var_left_16060.operator_or (var_right_16140 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 477)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseXorOp:
    {
      outArgument_outValue = var_left_16060.operator_xor (var_right_16140 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 478)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_addOp:
    {
      outArgument_outValue = var_left_16060.add_operation (var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 479)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_subOp:
    {
      outArgument_outValue = var_left_16060.substract_operation (var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 480)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_mulOp:
    {
      outArgument_outValue = var_left_16060.multiply_operation (var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 481)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divOp:
    {
      outArgument_outValue = var_left_16060.divide_operation (var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 482)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divNoOvf:
    {
      outArgument_outValue = var_left_16060.divide_operation (var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 483)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_modOp:
    {
      outArgument_outValue = var_left_16060.modulo_operation (var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 484)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_moduloNoOvf:
    {
      outArgument_outValue = var_left_16060.modulo_operation (var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 485)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_leftShift:
    {
      outArgument_outValue = var_left_16060.left_shift_operation (var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 486)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_rightShift:
    {
      outArgument_outValue = var_left_16060.right_shift_operation (var_right_16140, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 487)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctPrefixExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap constinArgument_inMap,
                                                                      GGS_bigint & outArgument_outValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_exp_17168 ;
  const GGS_ctPrefixExpressionAST temp_0 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inMap, var_exp_17168, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 497)) ;
  const GGS_ctPrefixExpressionAST temp_1 = this ;
  switch (temp_1.readProperty_mPrefixOperator ().enumValue ()) {
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      outArgument_outValue = var_exp_17168.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 499)) ;
    }
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      GGS_bigint temp_2 ;
      const enumGalgasBool test_3 = GGS_bool (ComparisonKind::equal, var_exp_17168.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)) ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)) ;
      }
      outArgument_outValue = temp_2 ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctTrueExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap /* constinArgument_inMap */,
                                                                    GGS_bigint & outArgument_outValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 510)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctFalseExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap /* constinArgument_inMap */,
                                                                     GGS_bigint & outArgument_outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 519)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIntExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap /* constinArgument_inMap */,
                                                                   GGS_bigint & outArgument_outValue,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctIntExpressionAST temp_0 = this ;
  outArgument_outValue = temp_0.readProperty_mValue ().readProperty_bigint () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIdentifierExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap constinArgument_inMap,
                                                                          GGS_bigint & outArgument_outValue,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctIdentifierExpressionAST temp_0 = this ;
  constinArgument_inMap.method_searchKey (temp_0.readProperty_mIdentifier (), outArgument_outValue, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 537)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmGenericType locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmGenericType::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmGenericType temp_0 = this ;
  result_outLocation = temp_0.readProperty_mTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenericType enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenericType::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmGenericType temp_0 = this ;
  GGS_lstring var_nodeName_4992 = temp_0.readProperty_mTypeName () ;
  {
  const GGS_llvmGenericType temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4992, temp_1, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 146)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmGenericType keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmGenericType::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmGenericType temp_0 = this ;
  result_outRepresentation = GGS_string ("Generic type ").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 152)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenericType enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenericType::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                  GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                  GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                  GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                  GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                  GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                  GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                  GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctCheckMap temp_0 = GGS_ctCheckMap::init (inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 194)) ;
  GGS_ctCheckMap var_formalGenericConstantParameterMap_7030 = temp_0 ;
  const GGS_llvmGenericType temp_1 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_1.readProperty_mGenericFormalParameterList (), var_formalGenericConstantParameterMap_7030, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 195)) ;
  const GGS_llvmGenericType temp_2 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mWhereClause ().ptr (), var_formalGenericConstantParameterMap_7030, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 197)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_llvmGenericType temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mGenericFormalParameterList ().getter_count (SOURCE_FILE ("llvm-generic-type.galgas", 201)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_llvmGenericType temp_5 = this ;
      const GGS_llvmGenericType temp_6 = this ;
      const GGS_llvmGenericType temp_7 = this ;
      GGS_omnibusType var_llvmType_7482 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("llvm-generic-type.galgas", 203)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("llvm-generic-type.galgas", 204)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("llvm-generic-type.galgas", 204)) COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 204)), temp_5.readProperty_mTypeName ().readProperty_string (), GGS_typeKind::class_func_llvmType (temp_6.readProperty_mBitSize ()  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 206)), GGS_string ("i").add_operation (temp_7.readProperty_mBitSize ().getter_string (SOURCE_FILE ("llvm-generic-type.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 207)), inCompiler COMMA_HERE) ;
      {
      const GGS_llvmGenericType temp_8 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_8.readProperty_mTypeName (), var_llvmType_7482, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 209)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmAssignmentOperatorDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmAssignmentOperatorDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmAssignmentOperatorDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_2 = this ;
  GGS_lstring var_nodeName_6254 = GGS_lstring::init_21__21_ (temp_0.readProperty_mTargetTypeName ().readProperty_string ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 148)).add_operation (temp_1.readProperty_mSourceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 148)), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6254, temp_3, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 149)) ;
  }
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6254, temp_4.readProperty_mTargetTypeName () COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 150)) ;
  }
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6254, temp_5.readProperty_mSourceTypeName () COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 151)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmAssignmentOperatorDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmAssignmentOperatorDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  result_outRepresentation = GGS_string ("Assignment ").add_operation (temp_0.readProperty_mTargetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)).add_operation (temp_1.readProperty_mSourceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorFuncName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_assignmentOperatorFuncName (const GGS_omnibusType & constinArgument_inTargetType,
                                                const GGS_omnibusType & constinArgument_inSourceType,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("assign.").add_operation (constinArgument_inTargetType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)).add_operation (GGS_string (".ref.from."), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)).add_operation (constinArgument_inSourceType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)).add_operation (GGS_string (".ref"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_assignmentOperatorFuncName [3] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_assignmentOperatorFuncName (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_omnibusType operand1 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_assignmentOperatorFuncName (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignmentOperatorFuncName ("assignmentOperatorFuncName",
                                                                            functionWithGenericHeader_assignmentOperatorFuncName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            2,
                                                                            functionArgs_assignmentOperatorFuncName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_assignmentOperatorKey (const GGS_omnibusType & constinArgument_inTargetType,
                                            const GGS_location & constinArgument_inErrorLocation,
                                            const GGS_omnibusType & constinArgument_inSourceType,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (constinArgument_inTargetType.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 174)).add_operation (constinArgument_inSourceType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 174)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_assignmentOperatorKey [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_assignmentOperatorKey (Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_location operand1 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_omnibusType operand2 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_assignmentOperatorKey (operand0,
                                         operand1,
                                         operand2,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignmentOperatorKey ("assignmentOperatorKey",
                                                                       functionWithGenericHeader_assignmentOperatorKey,
                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                       3,
                                                                       functionArgs_assignmentOperatorKey) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmAssignmentOperatorDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                       GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                       GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                       GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                                       GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                       GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                       GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                       GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctCheckMap temp_0 = GGS_ctCheckMap::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 219)) ;
  GGS_ctCheckMap var_formalGenericConstantParameterMap_9785 = temp_0 ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_1.readProperty_mTargetGenericFormalParameterList (), var_formalGenericConstantParameterMap_9785, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 220)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_2 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_2.readProperty_mSourceGenericFormalParameterList (), var_formalGenericConstantParameterMap_9785, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 221)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_3 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_3.readProperty_mWhereClause ().ptr (), var_formalGenericConstantParameterMap_9785, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 223)) ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_4 = this ;
  var_formalGenericConstantParameterMap_9785.setter_insertKey (temp_4.readProperty_mTargetVariableName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 225)) ;
  }
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_5 = this ;
  var_formalGenericConstantParameterMap_9785.setter_insertKey (temp_5.readProperty_mSourceVariableName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 226)) ;
  }
  const GGS_llvmAssignmentOperatorDeclarationAST temp_6 = this ;
  extensionMethod_checkInstructionList (temp_6.readProperty_mLLVMInstructionList (), var_formalGenericConstantParameterMap_9785, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 227)) ;
  GGS_unifiedTypeMapEntry var_targetTypeProxy_10489 ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_7 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_7.readProperty_mTargetTypeName (), var_targetTypeProxy_10489, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 229)) ;
  }
  GGS_omnibusType var_targetType_10512 = extensionGetter_type (var_targetTypeProxy_10489, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 230)) ;
  GGS_unifiedTypeMapEntry var_sourceTypeProxy_10609 ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_8 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_8.readProperty_mSourceTypeName (), var_sourceTypeProxy_10609, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 231)) ;
  }
  GGS_omnibusType var_sourceType_10645 = extensionGetter_type (var_sourceTypeProxy_10609, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 232)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_9 = this ;
  GGS_lstring var_key_10692 = function_assignmentOperatorKey (var_targetType_10512, temp_9.readProperty_mOperatorLocation (), var_sourceType_10645, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 234)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_10 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_11 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_12 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_13 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_14 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_15 = this ;
  GGS_llvmAssignmentOperatorUsage var_operatorUsage_10776 = GGS_llvmAssignmentOperatorUsage::init_21__21__21__21__21__21__21__21_ (var_targetType_10512, temp_10.readProperty_mTargetVariableName (), temp_11.readProperty_mTargetGenericFormalParameterList (), var_sourceType_10645, temp_12.readProperty_mSourceVariableName (), temp_13.readProperty_mSourceGenericFormalParameterList (), temp_14.readProperty_mWhereClause (), temp_15.readProperty_mLLVMInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_10692, var_operatorUsage_10776, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 245)) ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GGS_llvmAssignmentOperatorDeclarationAST temp_17 = this ;
    GGS_bool test_18 = GGS_bool (ComparisonKind::equal, temp_17.readProperty_mTargetGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas", 252)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_18.boolEnum ()) {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_19 = this ;
      test_18 = GGS_bool (ComparisonKind::equal, temp_19.readProperty_mSourceGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas", 253)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
    GGS_bool test_20 = test_18 ;
    if (kBoolTrue == test_20.boolEnum ()) {
      test_20 = var_sourceType_10645.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas", 254)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 254)) ;
    }
    GGS_bool test_21 = test_20 ;
    if (kBoolTrue == test_21.boolEnum ()) {
      test_21 = var_sourceType_10645.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas", 255)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 255)) ;
    }
    test_16 = test_21.boolEnum () ;
    if (kBoolTrue == test_16) {
      GGS_assignmentGenerationVarMap temp_22 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 256)) ;
      GGS_assignmentGenerationVarMap var_varMap_11508 = temp_22 ;
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_23 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_24 = this ;
      var_varMap_11508.setter_insertKey (temp_23.readProperty_mTargetVariableName (), GGS_string ("%").add_operation (temp_24.readProperty_mTargetVariableName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 257)) ;
      }
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_25 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_26 = this ;
      var_varMap_11508.setter_insertKey (temp_25.readProperty_mSourceVariableName (), GGS_string ("%").add_operation (temp_26.readProperty_mSourceVariableName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 258)) ;
      }
      GGS_assignmentGenerationVarMap temp_27 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 259)) ;
      GGS_assignmentGenerationVarMap var_typeMap_11723 = temp_27 ;
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_28 = this ;
      var_typeMap_11723.setter_insertKey (temp_28.readProperty_mTargetVariableName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_targetType_10512.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 260)) ;
      }
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_29 = this ;
      var_typeMap_11723.setter_insertKey (temp_29.readProperty_mSourceVariableName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_10645.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 261)) ;
      }
      GGS_stringlist temp_30 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 262)) ;
      GGS_stringlist var_generatedInstructions_11915 = temp_30 ;
      GGS_allocaList temp_31 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 263)) ;
      GGS_allocaList var_allocaList_11963 = temp_31 ;
      GGS_uint var_temporaryIndex_11994 = GGS_uint (uint32_t (0U)) ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_32 = this ;
      extensionMethod_generateIRCode (temp_32.readProperty_mLLVMInstructionList (), var_varMap_11508, var_typeMap_11723, var_generatedInstructions_11915, var_temporaryIndex_11994, var_allocaList_11963, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 265)) ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_33 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_34 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_35 = this ;
      GGS_assignmentRoutineIR var_routine_12139 = GGS_assignmentRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (GGS_lstring::init_21__21_ (function_assignmentOperatorFuncName (var_targetType_10512, var_sourceType_10645, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 267)), temp_33.readProperty_mOperatorLocation (), inCompiler COMMA_HERE), GGS_bool (false), GGS_bool (false), var_targetType_10512, temp_34.readProperty_mTargetVariableName ().readProperty_string (), var_sourceType_10645, temp_35.readProperty_mSourceVariableName ().readProperty_string (), var_generatedInstructions_11915, var_allocaList_11963, inCompiler COMMA_HERE) ;
      ioArgument_ioRoutineListIR.addAssign_operation (var_routine_12139  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 277)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmAssignmentOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                            const GGS_omnibusType constinArgument_inTargetType,
                                                            const GGS_string constinArgument_inTargetLLVMName,
                                                            const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                            const GGS_location /* constinArgument_inErrorLocation */,
                                                            const GGS_bool /* constinArgument_inTargetIsInitialized */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_llvmAssignmentOperatorUsage temp_1 = this ;
    GGS_bool test_2 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas", 308)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      const GGS_llvmAssignmentOperatorUsage temp_3 = this ;
      test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mSourceGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas", 309)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
    GGS_bool test_4 = test_2 ;
    if (kBoolTrue == test_4.boolEnum ()) {
      test_4 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 310)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas", 310)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 310)) ;
    }
    GGS_bool test_5 = test_4 ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 311)).readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas", 311)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 311)) ;
    }
    test_0 = test_5.boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_string var_llvmRoutineName_14028 = function_assignmentOperatorFuncName (constinArgument_inTargetType, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 312)) ;
      GGS_string var_s_14133 = GGS_string ("call void @").add_operation (var_llvmRoutineName_14028.getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 313)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 313)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)) ;
      {
      GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
      temp_6.enterElement (var_llvmRoutineName_14028, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_14133, temp_6, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_omnibusType var_sourceType_14541 ;
    GGS_string var_srcLLVMName_14567 ;
    constinArgument_inSourcePossibleReference.method_extractReference (var_sourceType_14541, var_srcLLVMName_14567, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 318)) ;
    GGS_assignmentGenerationVarMap temp_7 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 319)) ;
    GGS_assignmentGenerationVarMap var_varMap_14616 = temp_7 ;
    {
    const GGS_llvmAssignmentOperatorUsage temp_8 = this ;
    var_varMap_14616.setter_insertKey (temp_8.readProperty_mTargetVarName (), constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 320)) ;
    }
    {
    const GGS_llvmAssignmentOperatorUsage temp_9 = this ;
    var_varMap_14616.setter_insertKey (temp_9.readProperty_mSourceVarName (), var_srcLLVMName_14567, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 321)) ;
    }
    GGS_assignmentGenerationVarMap temp_10 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 322)) ;
    GGS_assignmentGenerationVarMap var_typeMap_14788 = temp_10 ;
    {
    const GGS_llvmAssignmentOperatorUsage temp_11 = this ;
    var_typeMap_14788.setter_insertKey (temp_11.readProperty_mTargetVarName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 323)) ;
    }
    {
    const GGS_llvmAssignmentOperatorUsage temp_12 = this ;
    var_typeMap_14788.setter_insertKey (temp_12.readProperty_mSourceVarName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_14541.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 324)) ;
    }
    GGS_stringlist temp_13 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 325)) ;
    GGS_stringlist var_generatedInstructions_14973 = temp_13 ;
    const GGS_llvmAssignmentOperatorUsage temp_14 = this ;
    extensionMethod_generateIRCode (temp_14.readProperty_mInstructionList (), var_varMap_14616, var_typeMap_14788, var_generatedInstructions_14973, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 326)) ;
    cEnumerator_stringlist enumerator_15141 (var_generatedInstructions_14973, EnumerationOrder::up) ;
    while (enumerator_15141.hasCurrentObject ()) {
      {
      GGS_stringset temp_15 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 328)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, enumerator_15141.current_mValue (HERE), temp_15, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 328)) ;
      }
      enumerator_15141.gotoNextObject () ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentRoutineIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 379)) ;
  const GGS_assignmentRoutineIR temp_1 = this ;
  const GGS_assignmentRoutineIR temp_2 = this ;
  const GGS_assignmentRoutineIR temp_3 = this ;
  const GGS_assignmentRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (GGS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (temp_2.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_3.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)).add_operation (GGS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)).add_operation (temp_4.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)) ;
  const GGS_assignmentRoutineIR temp_5 = this ;
  extensionMethod_generateAllocaList (temp_5.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 382)) ;
  const GGS_assignmentRoutineIR temp_6 = this ;
  cEnumerator_stringlist enumerator_17260 (temp_6.readProperty_mGeneratedInstructions (), EnumerationOrder::up) ;
  while (enumerator_17260.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_17260.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 384)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 384)) ;
    enumerator_17260.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 387)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@simpleAssignmentCopyRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_simpleAssignmentCopyRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_simpleAssignmentCopyRoutineIR temp_0 = this ;
  GGS_string var_typeName_17933 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 403)) ;
  GGS_string var_targetVarName_17982 = GGS_string ("%targetPtr") ;
  GGS_string var_sourceVarName_18017 = GGS_string ("%sourcePtr") ;
  const GGS_simpleAssignmentCopyRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("define internal void @").add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string (" (").add_operation (var_typeName_17933, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (var_targetVarName_17982, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (var_typeName_17933, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)).add_operation (var_sourceVarName_18017, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  %value = load ").add_operation (var_typeName_17933, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (var_typeName_17933, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (var_sourceVarName_18017, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  store ").add_operation (var_typeName_17933, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (GGS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (var_typeName_17933, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (var_targetVarName_17982, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 411)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 412)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@simpleCopyAssignmentOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_simpleCopyAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                  GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                  const GGS_omnibusType constinArgument_inTargetType,
                                                                  const GGS_string constinArgument_inTargetLLVMName,
                                                                  const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                                  const GGS_location /* constinArgument_inErrorLocation */,
                                                                  const GGS_bool /* constinArgument_inTargetIsInitialized */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_sourceValue_19289 = constinArgument_inSourcePossibleReference ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inSourcePossibleReference.getter_isReference (SOURCE_FILE ("assignment-operator-definition.galgas", 434)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_getNewTempValue_3F__26__21_ (constinArgument_inTargetType, ioArgument_ioTemporaries, var_sourceValue_19289, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 435)) ;
      }
      GGS_string var_s_19452 = extensionGetter_llvmName (var_sourceValue_19289, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)) ;
      {
      GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 438)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_19452, temp_1, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 438)) ;
      }
    }
  }
  GGS_string var_s_19711 = GGS_string ("store ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (extensionGetter_llvmName (var_sourceValue_19289, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)) ;
  {
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 443)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_19711, temp_2, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 443)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmVarInstruction checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmVarInstruction::method_checkInstructionList (GGS_ctCheckMap & ioArgument_ioMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_llvmVarInstruction temp_0 = this ;
  ioArgument_ioMap.setter_insertKey (temp_0.readProperty_mVariableName (), inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 120)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenerationInstruction checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenerationInstruction::method_checkInstructionList (GGS_ctCheckMap & ioArgument_ioMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmGenerationInstruction temp_0 = this ;
  cEnumerator_llvmGenerationInstructionElementList enumerator_5014 (temp_0.readProperty_mGenerationList (), EnumerationOrder::up) ;
  while (enumerator_5014.hasCurrentObject ()) {
    switch (enumerator_5014.current_mElement (HERE).enumValue ()) {
    case GGS_llvmGenerationInstructionElement::Enumeration::invalid:
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_string:
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_symbol:
      {
        GGS_lstring extractedValue_5108_name_0 ;
        enumerator_5014.current_mElement (HERE).getAssociatedValuesFor_symbol (extractedValue_5108_name_0) ;
        ioArgument_ioMap.method_searchKey (extractedValue_5108_name_0, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 130)) ;
      }
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_type:
      {
        GGS_lstring extractedValue_5161_name_0 ;
        enumerator_5014.current_mElement (HERE).getAssociatedValuesFor_type (extractedValue_5161_name_0) ;
        ioArgument_ioMap.method_searchKey (extractedValue_5161_name_0, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 132)) ;
      }
      break ;
    }
    enumerator_5014.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenerationInstruction generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenerationInstruction::method_generateIRCode (GGS_assignmentGenerationVarMap & ioArgument_ioVarMap,
                                                            GGS_assignmentGenerationVarMap & ioArgument_ioTypeMap,
                                                            GGS_stringlist & ioArgument_ioInstructionAsStringListIR,
                                                            GGS_uint & /* ioArgument_ioTemporaryIndex */,
                                                            GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_6957 = GGS_string::makeEmptyString () ;
  const GGS_llvmGenerationInstruction temp_0 = this ;
  cEnumerator_llvmGenerationInstructionElementList enumerator_6972 (temp_0.readProperty_mGenerationList (), EnumerationOrder::up) ;
  while (enumerator_6972.hasCurrentObject ()) {
    switch (enumerator_6972.current_mElement (HERE).enumValue ()) {
    case GGS_llvmGenerationInstructionElement::Enumeration::invalid:
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_string:
      {
        GGS_string extractedValue_7047_value_0 ;
        enumerator_6972.current_mElement (HERE).getAssociatedValuesFor_string (extractedValue_7047_value_0) ;
        var_s_6957.plusAssign_operation(extractedValue_7047_value_0, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 185)) ;
      }
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_symbol:
      {
        GGS_lstring extractedValue_7092_name_0 ;
        enumerator_6972.current_mElement (HERE).getAssociatedValuesFor_symbol (extractedValue_7092_name_0) ;
        GGS_string var_value_7138 ;
        ioArgument_ioVarMap.method_searchKey (extractedValue_7092_name_0, var_value_7138, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 187)) ;
        var_s_6957.plusAssign_operation(var_value_7138, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 188)) ;
      }
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_type:
      {
        GGS_lstring extractedValue_7179_name_0 ;
        enumerator_6972.current_mElement (HERE).getAssociatedValuesFor_type (extractedValue_7179_name_0) ;
        GGS_string var_value_7226 ;
        ioArgument_ioTypeMap.method_searchKey (extractedValue_7179_name_0, var_value_7226, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 190)) ;
        var_s_6957.plusAssign_operation(var_value_7226, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 191)) ;
      }
      break ;
    }
    enumerator_6972.gotoNextObject () ;
  }
  ioArgument_ioInstructionAsStringListIR.addAssign_operation (var_s_6957  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 194)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmVarInstruction generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_llvmVarInstruction::method_generateIRCode (GGS_assignmentGenerationVarMap & ioArgument_ioVarMap,
                                                     GGS_assignmentGenerationVarMap & /* ioArgument_ioTypeMap */,
                                                     GGS_stringlist & /* ioArgument_ioInstructionAsStringListIR */,
                                                     GGS_uint & ioArgument_ioTemporaryIndex,
                                                     GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_newTemporaryVariable_7702 = GGS_string ("%temp").add_operation (ioArgument_ioTemporaryIndex.getter_string (SOURCE_FILE ("llvm-instructions.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 206)) ;
  ioArgument_ioTemporaryIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 207)) ;
  {
  const GGS_llvmVarInstruction temp_0 = this ;
  ioArgument_ioVarMap.setter_insertKey (temp_0.readProperty_mVariableName (), var_newTemporaryVariable_7702, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 208)) ;
  }
}
#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "cLexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "omnibus-target",
  "omnibus-import",
  "omnibus",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a target definition text file with the .omnibus-target extension",
  "an imported text file with the .omnibus-import extension",
  "a source text file with the .omnibus extension",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "1.0.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GGS_filewrapper var_fw_1093 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (gOption_omnibus_5F_options_listTargets.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_string var_targetDirectoryOption_1189 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, var_targetDirectoryOption_1189.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            GGS_stringlist var_embeddedFiles_1312 = var_fw_1093.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 29)) ;
            {
            routine_print_3F_ (GGS_string ("Embedded targets:\n"), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 30)) ;
            }
            cEnumerator_stringlist enumerator_1399 (var_embeddedFiles_1312, EnumerationOrder::up) ;
            while (enumerator_1399.hasCurrentObject ()) {
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::equal, enumerator_1399.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 32)).objectCompare (GGS_string ("+config.omnibus-target"))).boolEnum () ;
                if (kBoolTrue == test_2) {
                  GGS_string var_targetName_1502 = enumerator_1399.current_mValue (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 33)).getter_subStringFromIndex (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("target-generation.galgas", 33)) ;
                  {
                  routine_print_3F_ (GGS_string ("  ").add_operation (var_targetName_1502, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34)).add_operation (GGS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 34)) ;
                  }
                }
              }
              enumerator_1399.gotoNextObject () ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          GGS_string var_targetDirectory_1662 = var_targetDirectoryOption_1189.getter_absolutePathFromPath (GGS_string::class_func_stringWithCurrentDirectory (SOURCE_FILE ("target-generation.galgas", 38)) COMMA_SOURCE_FILE ("target-generation.galgas", 38)) ;
          {
          routine_print_3F_ (GGS_string ("Targets in '").add_operation (var_targetDirectory_1662, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)).add_operation (GGS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 39)) ;
          }
          GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          temp_3.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("omnibus-target"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          GGS_stringlist var_allConfigFiles_1830 = var_targetDirectory_1662.getter_regularFilesWithExtensions (GGS_bool (true), temp_3 COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          cEnumerator_stringlist enumerator_1938 (var_allConfigFiles_1830, EnumerationOrder::up) ;
          while (enumerator_1938.hasCurrentObject ()) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, enumerator_1938.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 42)).objectCompare (GGS_string ("+config.omnibus-target"))).boolEnum () ;
              if (kBoolTrue == test_4) {
                {
                routine_print_3F_ (GGS_string ("  ").add_operation (enumerator_1938.current_mValue (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)).add_operation (GGS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
                }
              }
            }
            enumerator_1938.gotoNextObject () ;
          }
        }
      }
    }
    GGS_string var_path_2171 = GGS_string (gOption_omnibus_5F_options_extractEmbeddedTargets.readProperty_value ()) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, var_path_2171.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        GGS_stringlist var_embeddedFiles_2261 = var_fw_1093.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 51)) ;
        cEnumerator_stringlist enumerator_2309 (var_embeddedFiles_2261, EnumerationOrder::up) ;
        while (enumerator_2309.hasCurrentObject ()) {
          GGS_string var_filePath_2342 = var_path_2171.add_operation (enumerator_2309.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 53)) ;
          {
          routine_print_3F_ (GGS_string ("  ").add_operation (var_filePath_2342, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54)).add_operation (GGS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 54)) ;
          }
          GGS_string var_dir_2410 = var_filePath_2342.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 55)) ;
          var_dir_2410.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 56)) ;
          GGS_string var_text_2497 = var_fw_1093.getter_textFileContentsAtPath (enumerator_2309.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 57)) ;
          GGS_bool joker_2590 ; // Joker input parameter
          var_text_2497.method_writeToFileWhenDifferentContents (var_filePath_2342, joker_2590, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 58)) ;
          enumerator_2309.gotoNextObject () ;
        }
      }
    }
  }
  {
    GGS_filewrapper var_fw_557 = GGS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GGS_bool (gOption_omnibus_5F_options_listEmbeddedSampleFiles.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_6) {
        GGS_stringlist var_files_668 = var_fw_557.getter_allTextFilePathes (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
        {
        routine_print_3F_ (GGS_string ("Embedded sample code:\n"), inCompiler  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
        }
        cEnumerator_stringlist enumerator_747 (var_files_668, EnumerationOrder::up) ;
        while (enumerator_747.hasCurrentObject ()) {
          {
          routine_print_3F_ (GGS_string ("  ").add_operation (enumerator_747.current_mValue (HERE).getter_subStringFromIndex (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GGS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
          }
          enumerator_747.gotoNextObject () ;
        }
      }
    }
    GGS_string var_path_837 = GGS_string (gOption_omnibus_5F_options_extractEmbeddedSampleFile.readProperty_value ()) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, var_path_837.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_fw_557.getter_fileExistsAtPath (var_path_837, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 24)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GGS_string var_text_972 = var_fw_557.getter_textFileContentsAtPath (var_path_837, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 25)) ;
            GGS_string var_sourceName_1023 = var_path_837.getter_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas", 26)) ;
            GGS_bool joker_1118 ; // Joker input parameter
            var_text_972.method_writeToFileWhenDifferentContents (var_sourceName_1023, joker_1118, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 27)) ;
          }
        }
        if (kBoolFalse == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).readProperty_location (), GGS_string ("there is no '").add_operation (var_path_837, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GGS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)), fixItArray9  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring /* constinArgument_inSourceFile */,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GGS_lstring /* constinArgument_inSourceFile */,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_galgas_5F_builtin_5F_options_mode.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.readProperty_value ()).operator_not (SOURCE_FILE ("program.galgas", 24)) COMMA_SOURCE_FILE ("program.galgas", 24)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_importFilesAndCompile_3F_sourceFilePath (constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 25)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
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
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
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
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
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

