#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

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
  UpEnumerator__32_lstringlist enumerator_3470 (constinArgument_inTargetParameters.readProperty_mPython_5F_utilityToolList ()) ;
  while (enumerator_3470.hasCurrentObject ()) {
    {
    routine_copyExecutableFile_3F_currentDir_3F_from_3F_to (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 85)).add_operation (enumerator_3470.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 85)), constinArgument_inProductDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 86)).add_operation (enumerator_3470.current_mValue_31_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 83)) ;
    }
    enumerator_3470.gotoNextObject () ;
  }
  {
  GGS__32_stringlist temp_0 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 94)) ;
  temp_0.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string ("!SYSTEMSTACKSIZE!"), constinArgument_inTargetParameters.readProperty_mSystemStackSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("target-generation.galgas", 94)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("target-generation.galgas", 94)) ;
  routine_copyFileWithSubstitutions_3F_currentDir_3F_from_3F_to_3F_ (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 92)).add_operation (constinArgument_inTargetParameters.readProperty_mLinkerScript ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 92)), constinArgument_inProductDirectory.add_operation (GGS_string ("/sources/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 93)), temp_0, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 90)) ;
  }
  GGS_string var_opt_5F_optimizationOption_4037 = GGS_string ("disable-opt") ;
  GGS_string var_llc_5F_optimizationOption_4082 = GGS_string ("O0") ;
  GGS_bigint var_optimizationOptionCount_4118 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 99)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (gOption_omnibus_5F_options_optimization_31_.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_opt_5F_optimizationOption_4037 = GGS_string ("O1") ;
      var_llc_5F_optimizationOption_4082 = GGS_string ("O1") ;
      var_optimizationOptionCount_4118.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 103)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (gOption_omnibus_5F_options_optimization_32_.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_opt_5F_optimizationOption_4037 = GGS_string ("O2") ;
      var_llc_5F_optimizationOption_4082 = GGS_string ("O2") ;
      var_optimizationOptionCount_4118.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 108)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (gOption_omnibus_5F_options_optimizationS.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_opt_5F_optimizationOption_4037 = GGS_string ("Os") ;
      var_llc_5F_optimizationOption_4082 = GGS_string ("O2") ;
      var_optimizationOptionCount_4118.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 113)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (gOption_omnibus_5F_options_optimizationZ.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_opt_5F_optimizationOption_4037 = GGS_string ("Oz") ;
      var_llc_5F_optimizationOption_4082 = GGS_string ("O2") ;
      var_optimizationOptionCount_4118.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 118)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (gOption_omnibus_5F_options_optimizationZ_33_.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      var_opt_5F_optimizationOption_4037 = GGS_string ("O3") ;
      var_llc_5F_optimizationOption_4082 = GGS_string ("O3") ;
      var_optimizationOptionCount_4118.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 123)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterThan, var_optimizationOptionCount_4118.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 125)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("target-generation.galgas", 126)), GGS_string ("several optimization options: --").add_operation (var_opt_5F_optimizationOption_4037, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 126)).add_operation (GGS_string (" is used"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 126)), fixItArray7  COMMA_SOURCE_FILE ("target-generation.galgas", 126)) ;
    }
  }
  {
  GGS__32_stringlist temp_8 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 132)) ;
  temp_8.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string ("<<OPT_OPTIMIZATION_OPTION>>"), var_opt_5F_optimizationOption_4037, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("target-generation.galgas", 132)) ;
  temp_8.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string ("<<LLC_OPTIMIZATION_OPTION>>"), var_llc_5F_optimizationOption_4082, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("target-generation.galgas", 132)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_filewrapper var_fw_5779 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      GGS_string var_s_5822 = var_fw_5779.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 145)) ;
      GGS_bool joker_5957 ; // Joker input parameter
      var_s_5822.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_5957, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 146)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_targetDefinitionDir_5976 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 148)) ;
    GGS_string var_s_6098 = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_5976.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 149)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 149)) ;
    GGS_bool joker_6268 ; // Joker input parameter
    var_s_6098.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6268, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 150)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_filewrapper var_fw_6714 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      var_s_6617 = var_fw_6714.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 165)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_targetDefinitionDir_6822 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 167)) ;
    var_s_6617 = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_6822.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 168)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 168)) ;
  }
  UpEnumerator__32_stringlist enumerator_7057 (constinArgument_inSubstitutions) ;
  while (enumerator_7057.hasCurrentObject ()) {
    var_s_6617 = var_s_6617.getter_stringByReplacingStringByString (enumerator_7057.current_mValue_30_ (HERE), enumerator_7057.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 171)) ;
    enumerator_7057.gotoNextObject () ;
  }
  GGS_bool joker_7262 ; // Joker input parameter
  var_s_6617.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_7262, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 173)) ;
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
  GGS_string var_s_7595 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_filewrapper var_fw_7692 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      var_s_7595 = var_fw_7692.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 187)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_targetDefinitionDir_7800 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 189)) ;
    var_s_7595 = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_7800.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 190)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 190)) ;
  }
  UpEnumerator__32_stringlist enumerator_8035 (constinArgument_inSubstitutions) ;
  while (enumerator_8035.hasCurrentObject ()) {
    var_s_7595 = var_s_7595.getter_stringByReplacingStringByString (enumerator_8035.current_mValue_30_ (HERE), enumerator_8035.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 193)) ;
    enumerator_8035.gotoNextObject () ;
  }
  GGS_bool joker_8230 ; // Joker input parameter
  var_s_7595.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_8230, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 195)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_filewrapper var_fw_8561 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      result_outContents = var_fw_8561.getter_textFileContentsAtPath (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 207)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_targetDefinitionDir_8671 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 209)) ;
    result_outContents = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_8671.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 210)).add_operation (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 210)) ;
  }
//---
  return result_outContents ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_getTargetTextFile [3] = {
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
//Overriding extension method '@panicAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicAST temp_0 = this ;
  GGS_string temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_string ("setup") ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_string ("loop") ;
  }
  const GGS_panicAST temp_3 = this ;
  const GGS_panicAST temp_4 = this ;
  GGS_lstring var_nodeName_2476 = GGS_lstring::init_21__21_ (GGS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)), temp_4.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_panicAST temp_5 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2476, temp_5, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 63)) ;
  }
  const GGS_panicAST temp_6 = this ;
  GGS_lstring var_configNode_2663 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 64)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2476, var_configNode_2663 COMMA_SOURCE_FILE ("panic.galgas", 65)) ;
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
  const GalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_string ("setup") ;
  }else if (GalgasBool::boolFalse == test_2) {
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inLocation.getter_isNowhere (SOURCE_FILE ("panic.galgas", 85)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("raise.panic.nofile") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("raise.panic.file.").add_operation (constinArgument_inLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)).getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 88)).getter_deletingPathExtension (SOURCE_FILE ("panic.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicRoutineNameForLocationFile [2] = {
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFilePath.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("raise.panic.nofile") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("raise.panic.file.").add_operation (constinArgument_inFilePath.getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 98)).getter_deletingPathExtension (SOURCE_FILE ("panic.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 98)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicRoutineNameForFilePath [2] = {
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
//Overriding extension method '@panicAST enterInContext'
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_panicAST temp_1 = this ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_panicAST temp_2 = this ;
      const GGS_panicAST temp_3 = this ;
      ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GGS_lstring::init_21__21_ (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 126)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 126)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_panicAST temp_4 = this ;
    const GGS_panicAST temp_5 = this ;
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GGS_lstring::init_21__21_ (temp_4.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 128)), temp_5.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 128)) ;
    }
  }
  const GGS_panicAST temp_6 = this ;
  const GGS_panicAST temp_7 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedPanicRoutine::init_21__21_ (temp_6.readProperty_mIsSetup (), temp_7.readProperty_mPriority (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 131)) ;
  GGS_routineFormalArgumentListAST temp_8 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 136)) ;
  GGS_routineFormalArgumentListAST var_arguments_6231 = temp_8 ;
  var_arguments_6231.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 138)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 139)), ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 140)), GGS_string ("LINE").getter_nowhere (SOURCE_FILE ("panic.galgas", 141))  COMMA_SOURCE_FILE ("panic.galgas", 137)) ;
  var_arguments_6231.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 143)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 144)), ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 145)), GGS_string ("CODE").getter_nowhere (SOURCE_FILE ("panic.galgas", 146))  COMMA_SOURCE_FILE ("panic.galgas", 142)) ;
  var_arguments_6231.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 148)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 149)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 150)).getter_nowhere (SOURCE_FILE ("panic.galgas", 150)), GGS_string ("FILE").getter_nowhere (SOURCE_FILE ("panic.galgas", 151))  COMMA_SOURCE_FILE ("panic.galgas", 147)) ;
  const GGS_panicAST temp_9 = this ;
  GGS_string temp_10 ;
  const GalgasBool test_11 = temp_9.readProperty_mIsSetup ().boolEnum () ;
  if (GalgasBool::boolTrue == test_11) {
    temp_10 = GGS_string ("setup") ;
  }else if (GalgasBool::boolFalse == test_11) {
    temp_10 = GGS_string ("loop") ;
  }
  const GGS_panicAST temp_12 = this ;
  const GGS_panicAST temp_13 = this ;
  GGS_lstring var_routineMangledName_6607 = GGS_lstring::init_21__21_ (GGS_string ("panic.").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (temp_12.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)), temp_13.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_panicAST temp_14 = this ;
  const GGS_panicAST temp_15 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 157)), GGS_mode::class_func_panicMode (SOURCE_FILE ("panic.galgas", 158)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("panic.galgas", 160)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_routineMangledName_6607, var_arguments_6231, GGS_bool (false), temp_14.readProperty_mPanicInstructionList (), temp_15.readProperty_mEndOfPanicInstructions (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 169))  COMMA_SOURCE_FILE ("panic.galgas", 156)) ;
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
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_universalModePanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused (GGS_string ("section.user.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 181)), GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 180)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_sectionModePanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (GGS_string ("section.implementation.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 187)), GGS_bool (false), GGS_bool (false), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicSetupListIR (), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicLoopListIR (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 186)) ;
  UpEnumerator_stringset enumerator_8294 (constinArgument_inSourceFileAbsolutePathSet) ;
  while (enumerator_8294.hasCurrentObject ()) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_fileSpecificPanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (function_panicRoutineNameForFilePath (enumerator_8294.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 196)).getter_nowhere (SOURCE_FILE ("panic.galgas", 196)), GGS_bool (false), GGS_bool (false), enumerator_8294.current_key (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 195)) ;
    enumerator_8294.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_fileSpecificPanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (function_panicRoutineNameForFilePath (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 203)).getter_nowhere (SOURCE_FILE ("panic.galgas", 203)), GGS_bool (false), GGS_bool (false), GGS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 202)) ;
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

static const GALGAS_TypeDescriptor * functionArgs_panicModeName [1] = {
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
//Overriding extension method '@decoratedPanicRoutine semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedPanicRoutine::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_decoratedPanicRoutine temp_1 = this ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_decoratedPanicRoutine temp_2 = this ;
      const GGS_decoratedPanicRoutine temp_3 = this ;
      ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GGS_lstring::init_21__21_ (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 234)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 234)) ;
      }
      const GGS_decoratedPanicRoutine temp_4 = this ;
      ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupListIR.addAssignOperation (temp_4.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 235)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_decoratedPanicRoutine temp_5 = this ;
    const GGS_decoratedPanicRoutine temp_6 = this ;
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GGS_lstring::init_21__21_ (temp_5.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 237)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 237)) ;
    }
    const GGS_decoratedPanicRoutine temp_7 = this ;
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopListIR.addAssignOperation (temp_7.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 238)) ;
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
  GGS_uint var_emptyStringIndex_11002 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, GGS_string::makeEmptyString (), var_emptyStringIndex_11002, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 260)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GGS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_11002, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)).add_operation (GGS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 270)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@fileSpecificPanicRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                 const GGS_generationContext constinArgument_inGenerationContext,
                                                                 GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arguments_12386 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 288)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)) ;
  const GGS_fileSpecificPanicRoutineIR temp_0 = this ;
  GGS_string var_fileBaseName_12583 = temp_0.readProperty_inFilePath ().getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 292)).getter_deletingPathExtension (SOURCE_FILE ("panic.galgas", 292)) ;
  GGS_uint var_staticStringIndex_12749 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, var_fileBaseName_12583, var_staticStringIndex_12749, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 294)) ;
  }
  const GGS_fileSpecificPanicRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (temp_1.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 298)) ;
  const GGS_fileSpecificPanicRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("panic.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GGS_string (" %in.CODE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %in.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_staticStringIndex_12749, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (var_arguments_12386, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 305)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@fileSpecificPanicRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314))  COMMA_SOURCE_FILE ("panic.galgas", 314)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@universalModePanicRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext constinArgument_inGenerationContext,
                                                                  GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arguments_14379 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 331)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_arguments_14379, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)).add_operation (GGS_string ("noreturn\n\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 339)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@universalModePanicRoutineIR svcDeclarationGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_svcDeclarationGeneration (GGS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                                        GGS_sectionIRlist & ioArgument_ioSectionList,
                                                                        GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioSectionList.addAssignOperation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), GGS_bool (true)  COMMA_SOURCE_FILE ("panic.galgas", 349)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@universalModePanicRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361))  COMMA_SOURCE_FILE ("panic.galgas", 361)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sectionModePanicRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                const GGS_generationContext constinArgument_inGenerationContext,
                                                                GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Raise Panic internal (section mode)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 380)) ;
  GGS_string var_arguments_16459 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 382)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_arguments_16459.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 388)) ;
  const GGS_sectionModePanicRoutineIR temp_0 = this ;
  UpEnumerator_panicSortedListIR enumerator_16826 (temp_0.readProperty_mPanicSetupListIR ()) ;
  while (enumerator_16826.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @panic.setup.").add_operation (enumerator_16826.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (var_arguments_16459, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 391)) ;
    enumerator_16826.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %panic.loop\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 394)) ;
  const GGS_sectionModePanicRoutineIR temp_1 = this ;
  UpEnumerator_panicSortedListIR enumerator_17031 (temp_1.readProperty_mPanicLoopListIR ()) ;
  while (enumerator_17031.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @panic.loop.").add_operation (enumerator_17031.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (var_arguments_16459, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 396)) ;
    enumerator_17031.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 399)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sectionModePanicRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                     GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sectionModePanicRoutineIR temp_0 = this ;
  UpEnumerator_panicSortedListIR enumerator_17501 (temp_0.readProperty_mPanicSetupListIR ()) ;
  while (enumerator_17501.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (GGS_string ("panic.setup.").add_operation (enumerator_17501.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 409))  COMMA_SOURCE_FILE ("panic.galgas", 409)) ;
    enumerator_17501.gotoNextObject () ;
  }
  const GGS_sectionModePanicRoutineIR temp_1 = this ;
  UpEnumerator_panicSortedListIR enumerator_17607 (temp_1.readProperty_mPanicLoopListIR ()) ;
  while (enumerator_17607.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (GGS_string ("panic.loop.").add_operation (enumerator_17607.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 412))  COMMA_SOURCE_FILE ("panic.galgas", 412)) ;
    enumerator_17607.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'checkAssignmentCompatibility'
//
//--------------------------------------------------------------------------------------------------

GGS_objectIR function_checkAssignmentCompatibility (const GGS_assignmentOperatorMap & constinArgument_inAssignmentOperatorMap,
                                                    const GGS_objectIR & constinArgument_inSourceValue,
                                                    const GGS_omnibusType & constinArgument_inOptionalTargetAnnotationType,
                                                    const GGS_location & constinArgument_inErrorLocation,
                                                    const GGS_bool & constinArgument_inStaticTypeAllowed,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inOptionalTargetAnnotationType.readProperty_kind ().getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 15)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inSourceValue ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inStaticTypeAllowed.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GGS_lstring var_key_1080 = function_assignmentOperatorKey (constinArgument_inOptionalTargetAnnotationType, GGS_location::class_func_nowhere (SOURCE_FILE ("semantic-analysis.galgas", 20)), extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
      GGS_abstractAssignmentOperatorUsage joker_1218 ; // Joker input parameter
      constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_1080, joker_1218, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
      result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 22)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 25)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 26)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the ").add_operation (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)).add_operation (GGS_string (" compile time type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)), fixItArray4  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::equal, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)).objectCompare (function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            result_result = extensionGetter_withType (constinArgument_inSourceValue, function_boolType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)) ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_checkAssignmentCompatibility [6] = {
  & kTypeDescriptor_GALGAS_assignmentOperatorMap,
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_checkAssignmentCompatibility (Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GGS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_assignmentOperatorMap operand0 = GGS_assignmentOperatorMap::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                       inCompiler
                                                                                       COMMA_THERE) ;
  const GGS_objectIR operand1 = GGS_objectIR::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_omnibusType operand2 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_location operand3 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_bool operand4 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_checkAssignmentCompatibility (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                operand4,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_objectIR,
                                                                              5,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempValue?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempValue_3F__26__21_ (const GGS_omnibusType constinArgument_inType,
                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GGS_objectIR & outArgument_outTempVariable,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 65)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outTempVariable = GGS_objectIR::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 66)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_llvmName_3032 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3032, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 68)) ;
    }
    outArgument_outTempVariable = GGS_objectIR::class_func_llvmNamedValue (constinArgument_inType, var_llvmName_3032  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 69)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempReference?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempReference_3F__26__21_ (const GGS_omnibusType constinArgument_inType,
                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GGS_objectIR & outArgument_outTempVariable,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 80)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outTempVariable = GGS_objectIR::class_func_void (SOURCE_FILE ("semantic-analysis.galgas", 81)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_llvmName_3460 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3460, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 83)) ;
    }
    outArgument_outTempVariable = GGS_objectIR::class_func_reference (constinArgument_inType, var_llvmName_3460  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 84)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysis?sourceFile?ast?allSourceFilePaths?decoratedDeclarationList?decoratedRoutineList?routineListIR?context?endOfSourceFile?staticEntityMap!intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysis_3F_sourceFile_3F_ast_3F_allSourceFilePaths_3F_decoratedDeclarationList_3F_decoratedRoutineList_3F_routineListIR_3F_context_3F_endOfSourceFile_3F_staticEntityMap_21_intermediateCode (const GGS_string /* constinArgument_inSourceFile */,
                                                                                                                                                                                                                    const GGS_ast constinArgument_inAST,
                                                                                                                                                                                                                    const GGS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                                                                                                                                                                                                    const GGS_declarationDecorationList constinArgument_inDecoratedDeclarationList,
                                                                                                                                                                                                                    const GGS_decoratedRegularRoutineList constinArgument_inDecoratedRoutineList,
                                                                                                                                                                                                                    const GGS_routineListIR constinArgument_inRoutineListIR,
                                                                                                                                                                                                                    const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                                                                                                                                    const GGS_location constinArgument_inEndOfSourceFile,
                                                                                                                                                                                                                    const GGS_staticEntityMap constinArgument_inStaticEntityMap,
                                                                                                                                                                                                                    GGS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                                                                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GGS_intermediateCodeStruct::init (inCompiler COMMA_HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mRoutineListIR = constinArgument_inRoutineListIR ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.readProperty_mTargetParameters () ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticEntityMap = constinArgument_inStaticEntityMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.readProperty_mGlobalTaskVariableList () ;
  GGS_semanticTemporariesStruct var_temporaries_4632 = GGS_semanticTemporariesStruct::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationDecorationList enumerator_4657 (constinArgument_inDecoratedDeclarationList) ;
  while (enumerator_4657.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((cPtr_abstractDecoratedDeclaration *) enumerator_4657.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4632, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 110)) ;
    enumerator_4657.gotoNextObject () ;
  }
  extensionMethod_routineSemanticAnalysis (constinArgument_inDecoratedRoutineList, constinArgument_inSemanticContext, var_temporaries_4632, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 117)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.readProperty_mExternFunctionListAST (), constinArgument_inSemanticContext, var_temporaries_4632, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 122)) ;
  {
  routine_appendPanicRoutines_3F_allSourceFilePaths_26_intermediateCode (constinArgument_inSourceFileAbsolutePathSet, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 128)) ;
  }
  {
  routine_checkRequiredProcedures_3F_ast_3F_context_3F_endOfSourceFile (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 133)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'
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
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mReceiverName () COMMA_SOURCE_FILE ("expression-primary.galgas", 106)) ;
      }
    }
  }
  const GGS_primaryInExpressionAST temp_3 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_4289 (temp_3.readProperty_mAccessList ()) ;
  while (enumerator_4289.hasCurrentObject ()) {
    switch (enumerator_4289.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_4428_indexExpression_0 ;
        GGS_location extractedValue_4445__1 ;
        GGS_bool extractedValue_4445__2 ;
        enumerator_4289.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_4428_indexExpression_0, extractedValue_4445__1, extractedValue_4445__2) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4428_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 113)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_4556__0 ;
        GGS_effectiveArgumentListAST extractedValue_4584_arguments_1 ;
        GGS_location extractedValue_4594__2 ;
        enumerator_4289.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_4556__0, extractedValue_4584_arguments_1, extractedValue_4594__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_4634 (extractedValue_4584_arguments_1) ;
        while (enumerator_4634.hasCurrentObject ()) {
          switch (enumerator_4634.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_4744__0 ;
              GGS_lstring extractedValue_4755_typeName_1 ;
              GGS_lstring extractedValue_4764__2 ;
              enumerator_4634.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_4744__0, extractedValue_4755_typeName_1, extractedValue_4764__2) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_4755_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_4755_typeName_1 COMMA_SOURCE_FILE ("expression-primary.galgas", 120)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_4887_expression_0 ;
              GGS_location extractedValue_4898__1 ;
              enumerator_4634.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4887_expression_0, extractedValue_4898__1) ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4887_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 122)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_4634.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4289.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_primaryInExpressionAST temp_0 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_5541 (temp_0.readProperty_mAccessList ()) ;
  while (enumerator_5541.hasCurrentObject ()) {
    switch (enumerator_5541.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_5622_low_0 ;
        GGS_lbigint extractedValue_5635_high_1 ;
        enumerator_5541.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_5622_low_0, extractedValue_5635_high_1) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterOrEqual, extractedValue_5635_high_1.readProperty_bigint ().objectCompare (extractedValue_5622_low_0.readProperty_bigint ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_5635_high_1.readProperty_bigint ().substract_operation (extractedValue_5622_low_0.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), extractedValue_5622_low_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)) ;
            }
          }
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_5838_indexExpression_0 ;
        GGS_location extractedValue_5855__1 ;
        GGS_bool extractedValue_5855__2 ;
        enumerator_5541.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_5838_indexExpression_0, extractedValue_5855__1, extractedValue_5855__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5838_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 144)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_5950__0 ;
        GGS_effectiveArgumentListAST extractedValue_5978_arguments_1 ;
        GGS_location extractedValue_5988__2 ;
        enumerator_5541.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_5950__0, extractedValue_5978_arguments_1, extractedValue_5988__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_6028 (extractedValue_5978_arguments_1) ;
        while (enumerator_6028.hasCurrentObject ()) {
          switch (enumerator_6028.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_6138__0 ;
              GGS_lstring extractedValue_6149_typeName_1 ;
              GGS_lstring extractedValue_6158__2 ;
              enumerator_6028.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_6138__0, extractedValue_6149_typeName_1, extractedValue_6158__2) ;
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_6149_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_2) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_6149_typeName_1 COMMA_SOURCE_FILE ("expression-primary.galgas", 151)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_6281_expression_0 ;
              GGS_location extractedValue_6292__1 ;
              enumerator_6028.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_6281_expression_0, extractedValue_6292__1) ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_6281_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 153)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_6028.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_5541.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@primaryInExpressionAST analyzeExpression'
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
        test_2 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas", 181)) COMMA_SOURCE_FILE ("expression-primary.galgas", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_primaryInExpressionAST temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mReceiverName ().readProperty_location (), GGS_string ("in guard, only 'self' properties may be accessed"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 182)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_primaryInExpressionAST temp_5 = this ;
        callExtensionMethod_analyzePrimaryExpressionNoSelf ((cPtr_primaryInExpressionAST *) temp_5.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 184)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-primary.galgas", 198)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_primaryInExpressionAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mReceiverName ().readProperty_location (), GGS_string ("'self' is not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
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
  UpEnumerator_primaryInExpressionAccessListAST enumerator_14008 (constinArgument_inAccessList) ;
  while (enumerator_14008.hasCurrentObject ()) {
    switch (enumerator_14008.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_14085_low_0 ;
        GGS_lbigint extractedValue_14098_high_1 ;
        enumerator_14008.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_14085_low_0, extractedValue_14098_high_1) ;
        {
        routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (constinArgument_inContext, ioArgument_ioResult, extractedValue_14085_low_0, extractedValue_14098_high_1, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_14340_propertyName_0 ;
        enumerator_14008.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_14340_propertyName_0) ;
        {
        routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, ioArgument_ioResult, extractedValue_14340_propertyName_0, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_14648_indexExpression_0 ;
        GGS_location extractedValue_14674_endOfIndex_1 ;
        GGS_bool extractedValue_14685_checkIndexExpression_2 ;
        enumerator_14008.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_14648_indexExpression_0, extractedValue_14674_endOfIndex_1, extractedValue_14685_checkIndexExpression_2) ;
        {
        routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (ioArgument_ioResult, extractedValue_14648_indexExpression_0, extractedValue_14674_endOfIndex_1, extractedValue_14685_checkIndexExpression_2, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 377)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_15247_methodName_0 ;
        GGS_effectiveArgumentListAST extractedValue_15284_arguments_1 ;
        GGS_location extractedValue_15304_errorLocation_2 ;
        enumerator_14008.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_15247_methodName_0, extractedValue_15284_arguments_1, extractedValue_15304_errorLocation_2) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas", 394)) COMMA_SOURCE_FILE ("expression-primary.galgas", 394)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GenericArray <FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_15304_errorLocation_2, GGS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 395)) ;
            ioArgument_ioResult.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (extractedValue_15247_methodName_0, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_15284_arguments_1, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 397)) ;
          }
        }
      }
      break ;
    }
    enumerator_14008.gotoNextObject () ;
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
      inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GGS_string ("low bound should be lower or equal to high bound"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 506)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_bool test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      if (GalgasBool::boolTrue != test_3.boolEnum ()) {
        test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      }
      test_2 = test_3.operator_not (SOURCE_FILE ("expression-primary.galgas", 507)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GGS_string ("Invalid, receiver is not an integer"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 508)) ;
        ioArgument_ioResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      {
      extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, ioArgument_ioResult, constinArgument_inLow.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
      }
      GGS_lstring var_resultIntegerName_19559 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (constinArgument_inHigh.readProperty_bigint ().substract_operation (constinArgument_inLow.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).getter_string (SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), constinArgument_inLow.readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_sliceType_19717 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_resultIntegerName_19559, var_sliceType_19717, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 514)) ;
      {
      extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_19717, ioArgument_ioResult, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 515)) ;
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
  GGS_omnibusType var_type_20268 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 530)) ;
  GGS_propertyGetterMap var_propertyGetterMap_20396 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_type_20268, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
  GGS_propertyGetterKind var_accessKind_20527 ;
  GGS_propertyVisibility joker_20499 ; // Joker input parameter
  var_propertyGetterMap_20396.method_searchKey (constinArgument_inPropertyName, joker_20499, var_accessKind_20527, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 533)) ;
  switch (var_accessKind_20527.enumValue ()) {
  case GGS_propertyGetterKind::Enumeration::invalid:
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
    {
      GGS_objectIR extractedValue_20594_value_0 ;
      var_accessKind_20527.getAssociatedValuesFor_constantProperty (extractedValue_20594_value_0) ;
      ioArgument_ioResult = extractedValue_20594_value_0 ;
    }
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
    {
      GGS_omnibusType extractedValue_20660_propertyType_0 ;
      GGS_uint extractedValue_20679_propertyIndex_1 ;
      var_accessKind_20527.getAssociatedValuesFor_storedProperty (extractedValue_20660_propertyType_0, extractedValue_20679_propertyIndex_1) ;
      GGS_string var_property_5F_llvmName_20736 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_20736, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 541)), var_property_5F_llvmName_20736, extractedValue_20679_propertyIndex_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 539)) ;
      }
      ioArgument_ioResult = GGS_objectIR::class_func_reference (extractedValue_20660_propertyType_0, var_property_5F_llvmName_20736  COMMA_SOURCE_FILE ("expression-primary.galgas", 546)) ;
    }
    break ;
  case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
    {
      GGS_unifiedTypeMapEntry extractedValue_21050_propertyTypeProxy_0 ;
      GGS_routineLLVMNameDict extractedValue_21068_modeDictionary_1 ;
      var_accessKind_20527.getAssociatedValuesFor_computedProperty (extractedValue_21050_propertyTypeProxy_0, extractedValue_21068_modeDictionary_1) ;
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)) ;
      }
      GGS_string var_routineLLVMName_21199 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_21068_modeDictionary_1, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
      GGS_objectIR var_resultValueIR_21464 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, var_routineLLVMName_21199, extensionGetter_type (extractedValue_21050_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 554)), var_resultValueIR_21464, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 550)) ;
      }
      ioArgument_ioResult = var_resultValueIR_21464 ;
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
      GenericArray <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is ").add_operation (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).add_operation (GGS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 582)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is literal string (dynamic array) and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 584)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_22729_elementType_0 ;
      GGS_bigint extractedValue_22749_arraySize_1 ;
      extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_22729_elementType_0, extractedValue_22749_arraySize_1) ;
      GGS_objectIR var_indexIR_23238 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_22749_arraySize_1, extractedValue_22729_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_23238, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 587)) ;
      }
      GGS_objectIR var_result_23457 ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, extractedValue_22729_elementType_0, var_indexIR_23238, var_result_23457, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
      }
      ioArgument_ioResult = var_result_23457 ;
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
  GGS_omnibusType var_receiverType_24203 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 631)) ;
  GGS_lstring var_methodMangledName_24292 = extensionGetter_mangledName (constinArgument_inArguments, var_receiverType_24203.readProperty_omnibusTypeDescriptionName (), constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 633)) ;
  GGS_bool var_implementedPublic_24544 ;
  GGS_routineTypedSignature var_formalSignature_24571 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_24596 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_24656 ;
  GGS_bool var_implementedIsExported_24698 ;
  GGS_mode var_implementedMode_24736 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_24292, var_implementedPublic_24544, var_formalSignature_24571, var_formalReturnTypeProxy_24596, var_implementedModeDictionary_24656, var_implementedIsExported_24698, var_implementedMode_24736, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 636)) ;
  GGS_string var_functionLLVMName_24780 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_24656, constinArgument_inMode, constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 646)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_formalReturnTypeProxy_24596, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 648)).readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-primary.galgas", 648)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.readProperty_location (), GGS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 649)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 652)) ;
    }
    GGS_procCallEffectiveParameterListIR temp_2 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 654)) ;
    GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_25302 = temp_2 ;
    var_effectiveParameterListIR_25302.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("expression-primary.galgas", 655)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 655)) ;
    {
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_24571, constinArgument_inArguments, constinArgument_inMethodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_25302, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 657)) ;
    }
    GGS_objectIR var_callReturnedResult_26082 ;
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_formalReturnTypeProxy_24596, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 673)), ioArgument_ioTemporaries, var_callReturnedResult_26082, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 673)) ;
    }
    GGS_lstring var_routineMangledName_26132 = function_routineMangledNameFromCall (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)).readProperty_llvmBaseTypeName (), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)) ;
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (var_callReturnedResult_26082, var_routineMangledName_26132, var_functionLLVMName_24780, var_effectiveParameterListIR_25302, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 676)) ;
    ioArgument_ioObjectIR = var_callReturnedResult_26082 ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extendIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_extendIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extendIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)) ;
  const GGS_extendIR temp_1 = this ;
  GGS_typeKind var_kind_679 = extensionGetter_type (temp_1.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).readProperty_kind () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_kind_679.getter_isLlvmType (SOURCE_FILE ("intermediate-extend.galgas", 25)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("zext"), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GGS_bool var_sourceIsUnsigned_814 ;
    GGS_bigint joker_796_2 ; // Joker input parameter
    GGS_bigint joker_796_1 ; // Joker input parameter
    GGS_uint joker_831_1 ; // Joker input parameter
    var_kind_679.method_extractInteger (joker_796_2, joker_796_1, var_sourceIsUnsigned_814, joker_831_1, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 28)) ;
    GGS_string temp_3 ;
    const GalgasBool test_4 = var_sourceIsUnsigned_814.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      temp_3 = GGS_string ("zext") ;
    }else if (GalgasBool::boolFalse == test_4) {
      temp_3 = GGS_string ("sext") ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(temp_3, inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 29)) ;
  }
  const GGS_extendIR temp_5 = this ;
  const GGS_extendIR temp_6 = this ;
  const GGS_extendIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_llvmTypeName (temp_5.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (extensionGetter_llvmTypeName (temp_7.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standaloneRoutineCallIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneRoutineCallIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 17)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_standaloneRoutineCallIR temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mResult ().objectCompare (GGS_objectIR::class_func_void (SOURCE_FILE ("intermediate-static-routine-call.galgas", 18)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("call void"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 19)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_standaloneRoutineCallIR temp_2 = this ;
    const GGS_standaloneRoutineCallIR temp_3 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmName (temp_2.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)).add_operation (GGS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)) ;
  }
  const GGS_standaloneRoutineCallIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_4.readProperty_mFunctionNameForGeneration ().getter_assemblerRepresentation (SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)) ;
  const GGS_standaloneRoutineCallIR temp_5 = this ;
  UpEnumerator_procCallEffectiveParameterListIR enumerator_936 (temp_5.readProperty_mArgumentList ()) ;
  while (enumerator_936.hasCurrentObject ()) {
    switch (enumerator_936.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GGS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
      break ;
    case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_936.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)).add_operation (extensionGetter_llvmName (enumerator_936.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)) ;
      }
      break ;
    case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_936.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)).add_operation (extensionGetter_llvmName (enumerator_936.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)) ;
      }
      break ;
    case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_936.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)).add_operation (extensionGetter_llvmName (enumerator_936.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)) ;
      }
      break ;
    }
    enumerator_936.gotoNextObject () ;
    if (enumerator_936.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 34)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 36)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standaloneRoutineCallIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneRoutineCallIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                   GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_standaloneRoutineCallIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mFunctionNameForGeneration ()  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 45)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                               GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addressofExpressionAST temp_0 = this ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_0.readProperty_mLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 46)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofExpressionAST analyzeExpression'
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
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-addressof-regular-var.galgas", 66)) COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 66)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_addressofExpressionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GGS_string ("addressof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 67)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_LValueRepresentation var_lvalueIR_3694 ;
    const GGS_addressofExpressionAST temp_3 = this ;
    extensionMethod_analyzeLValue (temp_3.readProperty_mLValue (), constinArgument_inSelfType, GGS_bool (true), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_3694, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 70)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_3717 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)).getter_nowhere (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 83)) ;
    GGS_omnibusType var_resultType_3852 = extensionGetter_type (var_resultTypeProxy_3717, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 86)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_3852, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 87)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_addressofInstructionIR::init_21__21_ (outArgument_outResult, var_lvalueIR_3694, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 88)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofInstructionIR llvmInstructionCode'
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
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GGS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mLValue ().readProperty_type ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (temp_2.readProperty_mLValue ().readProperty_llvmName (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (GGS_string (" ; addressof\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmPrefixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmPrefixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_minus?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_minus_3F__26_ (const GGS_string constinArgument_inOmnibusReceiverTypeName,
                                                               GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 58)) ;
  GGS_llvmGenerationInstructionList var_llvmInstructionList_2217 = temp_0 ;
  GGS_llvmGenerationInstructionElementList temp_1 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 59)) ;
  GGS_llvmGenerationInstructionElementList var_instructionElements_2287 = temp_1 ;
  var_instructionElements_2287.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60)) ;
  var_instructionElements_2287.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = sub ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61)) ;
  var_instructionElements_2287.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62)) ;
  var_instructionElements_2287.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" 0, ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63)) ;
  var_instructionElements_2287.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64)) ;
  var_llvmInstructionList_2217.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_2287, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  GGS_abstractDeclarationAST var_declaration_2705 = GGS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (GGS_llvmPrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 67)), GGS_location::class_func_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 68)), GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 69)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 70)), var_llvmInstructionList_2217, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 72)), inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2705.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 74)) ;
  var_declaration_2705 = GGS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (GGS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 76)), GGS_location::class_func_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 77)), GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 78)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 79)), var_llvmInstructionList_2217, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 81)), inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2705.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 83)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_bitWiseComplement?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement_3F__26_ (const GGS_string constinArgument_inOmnibusReceiverTypeName,
                                                                           GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 93)) ;
  GGS_llvmGenerationInstructionList var_llvmInstructionList_3546 = temp_0 ;
  GGS_llvmGenerationInstructionElementList temp_1 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 94)) ;
  GGS_llvmGenerationInstructionElementList var_instructionElements_3616 = temp_1 ;
  var_instructionElements_3616.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95)) ;
  var_instructionElements_3616.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = xor ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96)) ;
  var_instructionElements_3616.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97)) ;
  var_instructionElements_3616.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98)) ;
  var_instructionElements_3616.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99)) ;
  var_instructionElements_3616.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", -1")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100)) ;
  var_llvmInstructionList_3546.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_3616, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  GGS_abstractDeclarationAST var_declaration_4083 = GGS_llvmPrefixOperatorAST::init_21__21__21__21__21__21_ (GGS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 103)), GGS_location::class_func_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 104)), GGS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 105)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 106)), var_llvmInstructionList_3546, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 108)), inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_4083.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 110)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmPrefixOperatorAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmPrefixOperatorAST temp_0 = this ;
  const GGS_llvmPrefixOperatorAST temp_1 = this ;
  const GGS_llvmPrefixOperatorAST temp_2 = this ;
  GGS_lstring var_nodeName_6342 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)), temp_2.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmPrefixOperatorAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6342, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 175)) ;
  }
  {
  const GGS_llvmPrefixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6342, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 176)) ;
  }
  {
  const GGS_llvmPrefixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6342, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 177)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmPrefixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmPrefixOperatorAST temp_0 = this ;
  const GGS_llvmPrefixOperatorAST temp_1 = this ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmPrefixOperatorAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                        GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_7928 ;
  {
  const GGS_llvmPrefixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_7928, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 201)) ;
  }
  GGS_omnibusType var_receiverType_7953 = extensionGetter_type (var_receiverTypeProxy_7928, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 202)) ;
  const GGS_llvmPrefixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_receiverType_7953.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 203)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_8130 ;
  {
  const GGS_llvmPrefixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8130, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 204)) ;
  }
  GGS_omnibusType var_resultType_8153 = extensionGetter_type (var_resultTypeProxy_8130, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 205)) ;
  const GGS_llvmPrefixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_resultType_8153.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 206)) ;
  const GGS_llvmPrefixOperatorAST temp_4 = this ;
  GGS_string var_prefixMangledFunctionName_8301 = function_prefixOperatorFunctionName (var_receiverType_7953, extensionGetter_prefixOperator (temp_4.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)) ;
  const GGS_llvmPrefixOperatorAST temp_5 = this ;
  const GGS_llvmPrefixOperatorAST temp_6 = this ;
  GGS_lstring var_key_8400 = function_prefixOperatorMapKey (var_receiverType_7953, extensionGetter_prefixOperator (temp_5.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)), temp_6.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)) ;
  const GGS_llvmPrefixOperatorAST temp_7 = this ;
  const GGS_llvmPrefixOperatorAST temp_8 = this ;
  GGS_llvmPrefixOperatorUsage var_definition_8501 = GGS_llvmPrefixOperatorUsage::init_21__21__21_ (var_prefixMangledFunctionName_8301, temp_7.readProperty_mReceiverName (), temp_8.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_8400, var_receiverType_7953, var_resultType_8153, var_definition_8501, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 215)) ;
  }
  GGS_assignmentGenerationVarMap var_varMap_8774 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_llvmPrefixOperatorAST temp_9 = this ;
  const GGS_llvmPrefixOperatorAST temp_10 = this ;
  var_varMap_8774.setter_insertKey (temp_9.readProperty_mReceiverName (), GGS_string ("%").add_operation (temp_10.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)) ;
  }
  GGS_assignmentGenerationVarMap var_typeMap_8890 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_llvmPrefixOperatorAST temp_11 = this ;
  var_typeMap_8890.setter_insertKey (temp_11.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_receiverType_7953.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)) ;
  }
  {
  var_typeMap_8890.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8153.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)) ;
  }
  GGS_llvmGenerationInstructionList temp_12 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 222)) ;
  GGS_llvmGenerationInstructionList var_instructionList_9085 = temp_12 ;
  var_instructionList_9085.addAssignOperation (GGS_llvmVarInstruction::init_21_ (GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 223)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 223)) ;
  const GGS_llvmPrefixOperatorAST temp_13 = this ;
  var_instructionList_9085.plusAssignOperation(temp_13.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 224)) ;
  {
  extensionSetter_appendReturn (var_instructionList_9085, GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), GGS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 225)) ;
  }
  GGS_stringlist temp_14 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 226)) ;
  GGS_stringlist var_generatedInstructions_9307 = temp_14 ;
  GGS_allocaList temp_15 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 227)) ;
  GGS_allocaList var_allocaList_9353 = temp_15 ;
  GGS_uint var_temporaryIndex_9382 = GGS_uint (uint32_t (0U)) ;
  extensionMethod_generateIRCode (var_instructionList_9085, var_varMap_8774, var_typeMap_8890, var_generatedInstructions_9307, var_temporaryIndex_9382, var_allocaList_9353, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 229)) ;
  const GGS_llvmPrefixOperatorAST temp_16 = this ;
  const GGS_llvmPrefixOperatorAST temp_17 = this ;
  GGS_prefixOperatorRoutineIR var_routine_9513 = GGS_prefixOperatorRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (GGS_lstring::init_21__21_ (var_prefixMangledFunctionName_8301, temp_16.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE), GGS_bool (true), GGS_bool (false), var_receiverType_7953, temp_17.readProperty_mReceiverName ().readProperty_string (), var_resultType_8153, var_generatedInstructions_9307, var_allocaList_9353, inCompiler COMMA_HERE) ;
  ioArgument_ioRoutineListIR.addAssignOperation (var_routine_9513  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 240)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmPrefixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                        const GGS_location constinArgument_inOperatorLocation,
                                                        const GGS_omnibusType constinArgument_inResultType,
                                                        const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                        const GGS_bool /* constinArgument_inSafeMode */,
                                                        GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        GGS_objectIR & outArgument_outResultValue,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_receiverOperand_10785 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_10785, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 267)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 272)) ;
  }
  GGS_procCallEffectiveParameterListIR temp_0 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 273)) ;
  GGS_procCallEffectiveParameterListIR var_argumentList_11067 = temp_0 ;
  var_argumentList_11067.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("prefix-operator-llvm.galgas", 274)), var_receiverOperand_10785  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 274)) ;
  const GGS_llvmPrefixOperatorUsage temp_1 = this ;
  const GGS_llvmPrefixOperatorUsage temp_2 = this ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outResultValue, GGS_lstring::init_21__21_ (temp_1.readProperty_mPrefixMangledFunctionName (), constinArgument_inOperatorLocation, inCompiler COMMA_HERE), temp_2.readProperty_mPrefixMangledFunctionName (), var_argumentList_11067, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 275)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefixOperatorRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefixOperatorRoutineIR temp_0 = this ;
  const GGS_prefixOperatorRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)) ;
  const GGS_prefixOperatorRoutineIR temp_2 = this ;
  const GGS_prefixOperatorRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (temp_3.readProperty_mReceiverVarName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)) ;
  const GGS_prefixOperatorRoutineIR temp_4 = this ;
  extensionMethod_generateAllocaList (temp_4.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 304)) ;
  const GGS_prefixOperatorRoutineIR temp_5 = this ;
  UpEnumerator_stringlist enumerator_12417 (temp_5.readProperty_mGeneratedInstructions ()) ;
  while (enumerator_12417.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_12417.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)) ;
    enumerator_12417.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 308)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@shortCircuitAndOperationIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_shortCircuitAndOperationIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_shortCircuitAndOperationIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mLeftInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 38)) ;
  const GGS_shortCircuitAndOperationIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mRightInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 39)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@shortCircuitAndOperationIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_shortCircuitAndOperationIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext constinArgument_inGenerationContext,
                                                                  GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_shortCircuitAndOperationIR temp_0 = this ;
  GGS_string var_startLabel_1757 = GGS_string ("and.").add_operation (temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GGS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  const GGS_shortCircuitAndOperationIR temp_1 = this ;
  GGS_string var_trueLabel_1831 = GGS_string ("and.").add_operation (temp_1.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).add_operation (GGS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  const GGS_shortCircuitAndOperationIR temp_2 = this ;
  GGS_string var_falseLabel_1903 = GGS_string ("and.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).add_operation (GGS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_1757, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_1757.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  const GGS_shortCircuitAndOperationIR temp_3 = this ;
  extensionMethod_instructionListLLVMCode (temp_3.readProperty_mLeftInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  const GGS_shortCircuitAndOperationIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (temp_4.readProperty_mLeftOperandLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_trueLabel_1831, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_falseLabel_1903, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_trueLabel_1831.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  const GGS_shortCircuitAndOperationIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mRightInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_falseLabel_1903, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_falseLabel_1903.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)) ;
  const GGS_shortCircuitAndOperationIR temp_6 = this ;
  const GGS_shortCircuitAndOperationIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTargetOperand (), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GGS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (temp_7.readProperty_mRightOperandLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (var_trueLabel_1831, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (GGS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (var_startLabel_1757, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@guardDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3145 = GGS_string ("guard.") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_guardDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_guardDeclarationAST temp_2 = this ;
      var_s_3145.plusAssignOperation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)) ;
    }
  }
  const GGS_guardDeclarationAST temp_3 = this ;
  var_s_3145.plusAssignOperation(temp_3.readProperty_mGuardName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)) ;
  const GGS_guardDeclarationAST temp_4 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_3335 (temp_4.readProperty_mGuardFormalArgumentList ()) ;
  while (enumerator_3335.hasCurrentObject ()) {
    var_s_3145.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_3335.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (enumerator_3335.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)) ;
    enumerator_3335.gotoNextObject () ;
  }
  var_s_3145.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 93)) ;
  {
  const GGS_guardDeclarationAST temp_5 = this ;
  const GGS_guardDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_3145, temp_5.readProperty_mGuardName ().readProperty_location (), inCompiler COMMA_HERE), temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)) ;
  }
  const GGS_guardDeclarationAST temp_7 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_3571 (temp_7.readProperty_mGuardFormalArgumentList ()) ;
  while (enumerator_3571.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_3571.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 97)) ;
    }
    enumerator_3571.gotoNextObject () ;
  }
  const GGS_guardDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mGuardInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 99)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_guardDeclarationAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
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
//Overriding extension method '@guardDeclarationAST enterInContext'
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
  GGS_routineTypedSignature var_signature_5329 ;
  {
  const GGS_guardDeclarationAST temp_0 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mGuardFormalArgumentList (), var_signature_5329, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 132)) ;
  }
  const GGS_guardDeclarationAST temp_1 = this ;
  const GGS_guardDeclarationAST temp_2 = this ;
  GGS_lstring var_guardMangledName_5371 = extensionGetter_mangledName (var_signature_5329, temp_1.readProperty_mReceiverTypeName ().readProperty_string (), temp_2.readProperty_mGuardName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 134)) ;
  const GGS_guardDeclarationAST temp_3 = this ;
  const GGS_guardDeclarationAST temp_4 = this ;
  const GGS_guardDeclarationAST temp_5 = this ;
  GGS_lstring var_guardUserLLVMName_5528 = function_guardUserLLVMName (temp_3.readProperty_mReceiverLLVMBaseTypeName (), temp_4.readProperty_mGuardName (), temp_5.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 136)) ;
  const GGS_guardDeclarationAST temp_6 = this ;
  const GGS_guardDeclarationAST temp_7 = this ;
  const GGS_guardDeclarationAST temp_8 = this ;
  GGS_lstring var_guardImplementationLLVMName_5715 = function_guardImplementationLLVMName (temp_6.readProperty_mReceiverLLVMBaseTypeName (), temp_7.readProperty_mGuardName (), temp_8.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 142)) ;
  {
  const GGS_guardDeclarationAST temp_9 = this ;
  ioArgument_ioContext.mProperty_mGuardMap.setter_insertKey (var_guardMangledName_5371, temp_9.readProperty_mIsPublic (), var_signature_5329, var_guardUserLLVMName_5528, var_guardImplementationLLVMName_5715, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 147)) ;
  }
  const GGS_guardDeclarationAST temp_10 = this ;
  const GGS_guardDeclarationAST temp_11 = this ;
  const GGS_guardDeclarationAST temp_12 = this ;
  const GGS_guardDeclarationAST temp_13 = this ;
  const GGS_guardDeclarationAST temp_14 = this ;
  const GGS_guardDeclarationAST temp_15 = this ;
  const GGS_guardDeclarationAST temp_16 = this ;
  const GGS_guardDeclarationAST temp_17 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedGuardDeclaration::init_21__21__21__21__21__21__21__21_ (temp_10.readProperty_mReceiverTypeName (), temp_11.readProperty_mGuardName (), temp_12.readProperty_mIsPublic (), temp_13.readProperty_mGuardAttributeList (), temp_14.readProperty_mGuardFormalArgumentList (), temp_15.readProperty_mGuardKind (), temp_16.readProperty_mGuardInstructionList (), temp_17.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154)) ;
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
  GGS_string var_s_6872 = GGS_string ("guard.user.") ;
  var_s_6872.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
  var_s_6872.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 176)) ;
  var_s_6872.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 177)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_7011 (constinArgument_inFormalArgumentList) ;
  while (enumerator_7011.hasCurrentObject ()) {
    var_s_6872.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_7011.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (enumerator_7011.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)) ;
    enumerator_7011.gotoNextObject () ;
  }
  var_s_6872.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_6872, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_guardUserLLVMName [4] = {
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
  GGS_string var_s_7566 = GGS_string ("guard.implementation.") ;
  var_s_7566.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  var_s_7566.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 193)) ;
  var_s_7566.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 194)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_7715 (constinArgument_inFormalArgumentList) ;
  while (enumerator_7715.hasCurrentObject ()) {
    var_s_7566.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_7715.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (enumerator_7715.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
    enumerator_7715.gotoNextObject () ;
  }
  var_s_7566.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_7566, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_guardImplementationLLVMName [4] = {
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
//Overriding extension method '@decoratedGuardDeclaration semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedGuardDeclaration::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                              GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedGuardDeclaration temp_0 = this ;
  GGS_omnibusType var_receiverType_9645 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mReceiverTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)) ;
  GGS_bool var_warnIfUnused_9743 = GGS_bool (true) ;
  const GGS_decoratedGuardDeclaration temp_1 = this ;
  UpEnumerator_lstringlist enumerator_9770 (temp_1.readProperty_mGuardAttributeList ()) ;
  while (enumerator_9770.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_9770.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 242)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_warnIfUnused_9743.operator_not (SOURCE_FILE ("declaration-guard.galgas", 243)).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9770.current_mValue (HERE).readProperty_location (), GGS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)) ;
          }
        }
        var_warnIfUnused_9743 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_9770.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)) ;
    }
    enumerator_9770.gotoNextObject () ;
  }
  GGS_universalValuedObjectMap var_universalMap_10177 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_10177, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 253)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_10177, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 254)) ;
  }
  GGS_routineFormalArgumentListIR temp_6 = GGS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 255)) ;
  GGS_routineFormalArgumentListIR var_formalArguments_10330 = temp_6 ;
  GGS_guardKindGenerationIR var_convenienceGuardGenerationIR_10381 ;
  GGS_allocaList temp_7 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 257)) ;
  GGS_allocaList var_allocaList_10428 = temp_7 ;
  GGS_instructionListIR temp_8 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 258)) ;
  GGS_instructionListIR var_instructionGenerationList_10470 = temp_8 ;
  const GGS_decoratedGuardDeclaration temp_9 = this ;
  switch (temp_9.readProperty_mGuardKind ().enumValue ()) {
  case GGS_guardKind::Enumeration::invalid:
    break ;
  case GGS_guardKind::Enumeration::enum_baseGuard:
    {
      const GGS_decoratedGuardDeclaration temp_10 = this ;
      GGS_lstring var_resultVarName_10591 = GGS_lstring::init_21__21_ (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)), temp_10.readProperty_mGuardName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_resultType_10794 = extensionGetter_booleanType (constinArgument_inContext, var_resultVarName_10591.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 264)) ;
      var_allocaList_10428.addAssignOperation (function_llvmNameForLocalVariable (var_resultVarName_10591.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)), var_resultType_10794, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_10177, var_resultVarName_10591, var_resultType_10794, var_resultVarName_10591, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("declaration-guard.galgas", 278)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 274)) ;
      }
      {
      const GGS_decoratedGuardDeclaration temp_11 = this ;
      routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_11.readProperty_mGuardFormalArgumentList (), var_universalMap_10177, var_formalArguments_10330, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 282)) ;
      }
      var_convenienceGuardGenerationIR_10381 = GGS_guardKindGenerationIR::class_func_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 289)) ;
      const GGS_decoratedGuardDeclaration temp_12 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_12.readProperty_mGuardInstructionList (), var_receiverType_9645, GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 293)), constinArgument_inContext, GGS_mode::class_func_guardMode (SOURCE_FILE ("declaration-guard.galgas", 295)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10177, var_allocaList_10428, var_instructionGenerationList_10470, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 291)) ;
    }
    break ;
  case GGS_guardKind::Enumeration::enum_convenienceGuard:
    {
      GGS_callInstructionAST extractedValue_12240_baseGuardInstruction_0 ;
      temp_9.readProperty_mGuardKind ().getAssociatedValuesFor_convenienceGuard (extractedValue_12240_baseGuardInstruction_0) ;
      {
      const GGS_decoratedGuardDeclaration temp_13 = this ;
      routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_13.readProperty_mGuardFormalArgumentList (), var_universalMap_10177, var_formalArguments_10330, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 304)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((cPtr_callInstructionAST *) extractedValue_12240_baseGuardInstruction_0.ptr (), var_receiverType_9645, GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 314)), constinArgument_inContext, GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 316)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10177, var_convenienceGuardGenerationIR_10381, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 312)) ;
      const GGS_decoratedGuardDeclaration temp_14 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_14.readProperty_mGuardInstructionList (), var_receiverType_9645, GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 325)), constinArgument_inContext, GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 327)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10177, var_allocaList_10428, var_instructionGenerationList_10470, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 323)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_10177, var_instructionGenerationList_10470, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 336)) ;
  {
  const GGS_decoratedGuardDeclaration temp_15 = this ;
  extensionSetter_closeBranch (var_universalMap_10177, temp_15.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 337)) ;
  }
  {
  const GGS_decoratedGuardDeclaration temp_16 = this ;
  extensionSetter_closeOverride (var_universalMap_10177, temp_16.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 338)) ;
  }
  const GGS_decoratedGuardDeclaration temp_17 = this ;
  const GGS_decoratedGuardDeclaration temp_18 = this ;
  GGS_lstring var_guardUserLLVMName_13641 = function_guardUserLLVMName (var_receiverType_9645.readProperty_llvmBaseTypeName (), temp_17.readProperty_mGuardName (), temp_18.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 340)) ;
  const GGS_decoratedGuardDeclaration temp_19 = this ;
  const GGS_decoratedGuardDeclaration temp_20 = this ;
  GGS_lstring var_guardImplementationLLVMName_13782 = function_guardImplementationLLVMName (var_receiverType_9645.readProperty_llvmBaseTypeName (), temp_19.readProperty_mGuardName (), temp_20.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 345)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_guardUserRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (var_guardUserLLVMName_13641, GGS_bool (false), var_warnIfUnused_9743, var_guardImplementationLLVMName_13782.readProperty_string (), var_formalArguments_10330, var_receiverType_9645, var_convenienceGuardGenerationIR_10381, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 351)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_guardImplementationRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (var_guardImplementationLLVMName_13782, GGS_bool (false), var_warnIfUnused_9743, var_formalArguments_10330, var_receiverType_9645, var_convenienceGuardGenerationIR_10381, var_allocaList_10428, var_instructionGenerationList_10470, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 360)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'
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
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mSandAloneRoutineName ().readProperty_location (), GGS_string ("NOT HANDLED YET"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 398)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procedureCallInstructionAST baseGuardAnalyze'
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
  GGS_allocaList var_baseGuardAllocaList_16589 = temp_0 ;
  GGS_instructionListIR temp_1 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 414)) ;
  GGS_instructionListIR var_baseGuardInstructionGenerationList_16640 = temp_1 ;
  GGS_objectIR var_currentObject_16798 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_procedureCallInstructionAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("declaration-guard.galgas", 418)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_procedureCallInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mIdentifier ().readProperty_location (), GGS_string ("self is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("declaration-guard.galgas", 419)) ;
          var_currentObject_16798.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        var_currentObject_16798 = GGS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 421))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 421)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_procedureCallInstructionAST temp_7 = this ;
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, temp_7.readProperty_mIdentifier (), constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObject_16798, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 424)) ;
  }
  const GGS_procedureCallInstructionAST temp_8 = this ;
  GGS_accessInAssignmentListAST var_accessList_17287 = temp_8.readProperty_mAccessList () ;
  GGS_accessInAssignmentAST var_lastAccess_17346 ;
  {
  var_accessList_17287.setter_popLast (var_lastAccess_17346, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
  }
  UpEnumerator_accessInAssignmentListAST enumerator_17392 (var_accessList_17287) ;
  while (enumerator_17392.hasCurrentObject ()) {
    GGS_omnibusType var_currentType_17425 = extensionGetter_type (var_currentObject_16798, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 436)) ;
    switch (enumerator_17392.current_mAccess (HERE).enumValue ()) {
    case GGS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_17506_propertyName_0 ;
        enumerator_17392.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_17506_propertyName_0) ;
        GGS_propertyGetterMap var_propertyGetterMap_17640 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_17425, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 440)) ;
        GGS_propertyGetterKind var_propertyAccess_17842 ;
        GGS_propertyVisibility joker_17834 ; // Joker input parameter
        var_propertyGetterMap_17640.method_searchKey (extractedValue_17506_propertyName_0, joker_17834, var_propertyAccess_17842, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 442)) ;
        switch (var_propertyAccess_17842.enumValue ()) {
        case GGS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GGS_objectIR extractedValue_17915__0 ;
            var_propertyAccess_17842.getAssociatedValuesFor_constantProperty (extractedValue_17915__0) ;
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_17506_propertyName_0.readProperty_location (), GGS_string ("a constant property not available in this context"), fixItArray9  COMMA_SOURCE_FILE ("declaration-guard.galgas", 445)) ;
            var_currentObject_16798.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GGS_omnibusType extractedValue_18056_propertyType_0 ;
            GGS_uint extractedValue_18075_propertyIndex_1 ;
            var_propertyAccess_17842.getAssociatedValuesFor_storedProperty (extractedValue_18056_propertyType_0, extractedValue_18075_propertyIndex_1) ;
            GGS_string var_property_5F_llvmName_18137 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_18137, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 447)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_16640, var_currentType_17425, extensionGetter_llvmName (var_currentObject_16798, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 450)), var_property_5F_llvmName_18137, extractedValue_18075_propertyIndex_1, extractedValue_17506_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 448)) ;
            }
            var_currentObject_16798 = GGS_objectIR::class_func_reference (extractedValue_18056_propertyType_0, var_property_5F_llvmName_18137  COMMA_SOURCE_FILE ("declaration-guard.galgas", 455)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GGS_unifiedTypeMapEntry extractedValue_18499__0 ;
            GGS_routineLLVMNameDict extractedValue_18499__1 ;
            var_propertyAccess_17842.getAssociatedValuesFor_computedProperty (extractedValue_18499__0, extractedValue_18499__1) ;
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_17506_propertyName_0.readProperty_location (), GGS_string ("a computed property cannot be named in guard"), fixItArray10  COMMA_SOURCE_FILE ("declaration-guard.galgas", 457)) ;
            var_currentObject_16798.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_18628__0 ;
        GGS_location extractedValue_18640_endOfIndex_1 ;
        GGS_bool extractedValue_18651__2 ;
        enumerator_17392.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_18628__0, extractedValue_18640_endOfIndex_1, extractedValue_18651__2) ;
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (extractedValue_18640_endOfIndex_1, GGS_string ("not handled yet"), fixItArray11  COMMA_SOURCE_FILE ("declaration-guard.galgas", 460)) ;
        var_currentObject_16798.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_17392.gotoNextObject () ;
  }
  switch (var_lastAccess_17346.enumValue ()) {
  case GGS_accessInAssignmentAST::Enumeration::invalid:
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_18800_methodName_0 ;
      var_lastAccess_17346.getAssociatedValuesFor_property (extractedValue_18800_methodName_0) ;
      GGS_omnibusType var_currentType_18822 = extensionGetter_type (var_currentObject_16798, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 466)) ;
      const GGS_procedureCallInstructionAST temp_12 = this ;
      GGS_lstring var_guardMangledName_18865 = extensionGetter_mangledName (temp_12.readProperty_mArguments (), var_currentType_18822.readProperty_omnibusTypeDescriptionName (), extractedValue_18800_methodName_0, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 467)) ;
      GGS_routineTypedSignature var_formalSignature_19059 ;
      GGS_lstring var_guardRoutineImplentationLLVMName_19083 ;
      GGS_bool joker_19051 ; // Joker input parameter
      GGS_lstring joker_19075 ; // Joker input parameter
      constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_18865, joker_19051, var_formalSignature_19059, joker_19075, var_guardRoutineImplentationLLVMName_19083, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 468)) ;
      GGS_procCallEffectiveParameterListIR temp_13 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)) ;
      temp_13.plusPlusAssignOperation (GGS_procCallEffectiveParameterListIR_2E_element::init_21__21_ (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("declaration-guard.galgas", 471)), GGS_objectIR::class_func_reference (var_currentType_18822, extensionGetter_llvmName (var_currentObject_16798, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)) ;
      GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_19199 = temp_13 ;
      {
      const GGS_procedureCallInstructionAST temp_14 = this ;
      routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_19059, temp_14.readProperty_mArguments (), extractedValue_18800_methodName_0.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_16589, var_baseGuardInstructionGenerationList_16640, var_effectiveParameterListIR_19199, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 474)) ;
      }
      outArgument_outConvenienceGuardGenerationIR = GGS_guardKindGenerationIR::class_func_convenienceGuard (var_baseGuardAllocaList_16589, var_baseGuardInstructionGenerationList_16640, var_guardRoutineImplentationLLVMName_19083.readProperty_string (), var_effectiveParameterListIR_19199  COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)) ;
    }
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_20238__0 ;
      GGS_location extractedValue_20250_endOfIndex_1 ;
      GGS_bool extractedValue_20261__2 ;
      var_lastAccess_17346.getAssociatedValuesFor_arrayAccess (extractedValue_20238__0, extractedValue_20250_endOfIndex_1, extractedValue_20261__2) ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (extractedValue_20250_endOfIndex_1, GGS_string ("a property access is required here"), fixItArray15  COMMA_SOURCE_FILE ("declaration-guard.galgas", 497)) ;
      outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@guardUserRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_guardUserRoutineIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mMangledImplementationGuardName ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 528)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@guardUserRoutineIR svcDeclarationGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_svcDeclarationGeneration (GGS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                               GGS_sectionIRlist & ioArgument_ioSectionList,
                                                               GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_guardUserRoutineIR temp_0 = this ;
  GGS_string var_userMangledName_22086 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 538)) ;
  const GGS_guardUserRoutineIR temp_1 = this ;
  GGS_string var_implementationMangledName_22161 = temp_1.readProperty_mMangledImplementationGuardName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 539)) ;
  const GGS_guardUserRoutineIR temp_2 = this ;
  switch (temp_2.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GGS_guardKindGenerationIR::Enumeration::invalid:
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_convenienceGuard:
    {
      GGS_allocaList extractedValue_22314__0 ;
      GGS_instructionListIR extractedValue_22316__1 ;
      GGS_string extractedValue_22318__2 ;
      GGS_procCallEffectiveParameterListIR extractedValue_22320__3 ;
      temp_2.readProperty_mGuardKindGenerationIR ().getAssociatedValuesFor_convenienceGuard (extractedValue_22314__0, extractedValue_22316__1, extractedValue_22318__2, extractedValue_22320__3) ;
      ioArgument_ioPrimitiveAndServiceList.addAssignOperation (var_userMangledName_22086, var_implementationMangledName_22161, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)) ;
    }
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_baseGuard:
    {
      ioArgument_ioSectionList.addAssignOperation (var_userMangledName_22086, var_implementationMangledName_22161, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@guardUserRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                         const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                         GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_guardUserRoutineIR temp_0 = this ;
  const GGS_guardUserRoutineIR temp_1 = this ;
  const GGS_guardUserRoutineIR temp_2 = this ;
  GGS_string var_prototype_22857 = function_llvmFunctionPrototype (GGS_string ("i1"), temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 560)), temp_1.readProperty_mReceiverType (), temp_2.readProperty_mFormalArgumentListForGeneration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 558)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare ").add_operation (var_prototype_22857, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@guardImplementationRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                   const GGS_generationContext constinArgument_inGenerationContext,
                                                                   GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_guardImplementationRoutineIR temp_0 = this ;
  GGS_string var_guardRoutineName_23828 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 584)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define i1 @").add_operation (var_guardRoutineName_23828, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)) ;
  const GGS_guardImplementationRoutineIR temp_1 = this ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("declaration-guard.galgas", 586)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_3) {
    const GGS_guardImplementationRoutineIR temp_4 = this ;
    temp_2 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)) ;
  }
  GGS_string var_receiverLLVMTypeName_23960 = temp_2 ;
  GGS_bool var_first_24088 = GGS_bool (true) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_23960.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssignOperation(var_receiverLLVMTypeName_23960.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)) ;
      var_first_24088 = GGS_bool (false) ;
    }
  }
  const GGS_guardImplementationRoutineIR temp_6 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_24276 (temp_6.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_24276.hasCurrentObject ()) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = var_first_24088.boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        var_first_24088 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)) ;
    }
    switch (enumerator_24276.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24276.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (enumerator_24276.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24276.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (function_llvmNameForLocalVariable (enumerator_24276.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24276.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)).add_operation (function_llvmNameForLocalVariable (enumerator_24276.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      }
      break ;
    }
    enumerator_24276.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
  const GGS_guardImplementationRoutineIR temp_8 = this ;
  GGS_allocaList var_allocaList_24927 = temp_8.readProperty_mAllocaList () ;
  const GGS_guardImplementationRoutineIR temp_9 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_25042 (temp_9.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_25042.hasCurrentObject ()) {
    switch (enumerator_25042.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_allocaList_24927.addAssignOperation (function_llvmNameForLocalVariable (enumerator_25042.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)), enumerator_25042.current_mFormalArgumentType (HERE), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_25042.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_24927, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)) ;
  const GGS_guardImplementationRoutineIR temp_10 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_25428 (temp_10.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_25428.hasCurrentObject ()) {
    switch (enumerator_25428.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        GGS_string var_llvmType_25551 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25428.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 628)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_25551, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (enumerator_25428.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (var_llvmType_25551, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (function_llvmNameForLocalVariable (enumerator_25428.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_25428.gotoNextObject () ;
  }
  GGS_string var_accepted_5F_llvmName_25847 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)) ;
  GGS_string var_accepted_5F_llvmName_5F_loaded_25930 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)).add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
  const GGS_guardImplementationRoutineIR temp_11 = this ;
  switch (temp_11.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GGS_guardKindGenerationIR::Enumeration::invalid:
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_baseGuard:
    {
      GGS_string var_accepted_5F_label_26130 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 640)).add_operation (GGS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 640)) ;
      GGS_string var_rejected_5F_label_26204 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)).add_operation (GGS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)) ;
      const GGS_guardImplementationRoutineIR temp_12 = this ;
      extensionMethod_instructionListLLVMCode (temp_12.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 642)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_25930, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (GGS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (var_accepted_5F_llvmName_25847, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_25930, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_accepted_5F_label_26130, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_rejected_5F_label_26204, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_accepted_5F_label_26130.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret i1 true\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 647)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_rejected_5F_label_26204.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 649)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 650)) ;
    }
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_convenienceGuard:
    {
      GGS_allocaList extractedValue_26869_baseGuardAllocaList_0 ;
      GGS_instructionListIR extractedValue_26889_baseGuardInstructionGenerationList_1 ;
      GGS_string extractedValue_26924_baseGuardMangledName_2 ;
      GGS_procCallEffectiveParameterListIR extractedValue_26945_baseGuardEffectiveParameterList_3 ;
      temp_11.readProperty_mGuardKindGenerationIR ().getAssociatedValuesFor_convenienceGuard (extractedValue_26869_baseGuardAllocaList_0, extractedValue_26889_baseGuardInstructionGenerationList_1, extractedValue_26924_baseGuardMangledName_2, extractedValue_26945_baseGuardEffectiveParameterList_3) ;
      extensionMethod_generateAllocaList (extractedValue_26869_baseGuardAllocaList_0, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 652)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_26889_baseGuardInstructionGenerationList_1, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 653)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_26924_baseGuardMangledName_2.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 655)) ;
      UpEnumerator_procCallEffectiveParameterListIR enumerator_27324 (extractedValue_26945_baseGuardEffectiveParameterList_3) ;
      while (enumerator_27324.hasCurrentObject ()) {
        switch (enumerator_27324.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
          break ;
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
          {
            ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_27324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)).add_operation (extensionGetter_llvmName (enumerator_27324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)) ;
          }
          break ;
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
          {
            ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_27324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)).add_operation (extensionGetter_llvmName (enumerator_27324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)) ;
          }
          break ;
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_27324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)).add_operation (extensionGetter_llvmName (enumerator_27324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)) ;
          }
          break ;
        }
        enumerator_27324.gotoNextObject () ;
        if (enumerator_27324.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 666)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 668)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 669)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 670)) ;
      const GGS_guardImplementationRoutineIR temp_13 = this ;
      extensionMethod_instructionListLLVMCode (temp_13.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 671)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret i1 true\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 672)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 673)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 674)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 675)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 677)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 678)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@guardImplementationRoutineIR enterAccessibleEntities'
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
      GGS_allocaList extractedValue_28851__0 ;
      GGS_instructionListIR extractedValue_28853_baseGuardInstructionGenerationList_1 ;
      GGS_string extractedValue_28888_baseGuardImplementationMangledName_2 ;
      GGS_procCallEffectiveParameterListIR extractedValue_28923__3 ;
      temp_1.readProperty_mGuardKindGenerationIR ().getAssociatedValuesFor_convenienceGuard (extractedValue_28851__0, extractedValue_28853_baseGuardInstructionGenerationList_1, extractedValue_28888_baseGuardImplementationMangledName_2, extractedValue_28923__3) ;
      ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (extractedValue_28888_baseGuardImplementationMangledName_2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 691)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_28853_baseGuardInstructionGenerationList_1, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 692)) ;
    }
    break ;
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
  GGS_omnibusType var_annotationType_699 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inOptionalTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_annotationType_699 = function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 16)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inOptionalTypeName, var_annotationType_699, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 18)) ;
  }
  GGS_semanticTemporariesStruct var_unusedSemanticTemporariesStruct_923 = GGS_semanticTemporariesStruct::init (inCompiler COMMA_HERE) ;
  GGS_allocaList temp_1 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 22)) ;
  GGS_allocaList var_unusedAllocaList_979 = temp_1 ;
  GGS_instructionListIR temp_2 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 23)) ;
  GGS_instructionListIR var_unusedInstructionListIR_1027 = temp_2 ;
  GGS_objectIR var_expressionIR_1464 ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) constinArgument_inExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 25)), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_annotationType_699, ioArgument_ioContext, GGS_mode::class_func_bootMode (SOURCE_FILE ("compute-static-expression.galgas", 29)), var_unusedSemanticTemporariesStruct_923, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, var_unusedAllocaList_979, var_unusedInstructionListIR_1027, var_expressionIR_1464, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 24)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = extensionGetter_isStatic (var_expressionIR_1464, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 37)).operator_not (SOURCE_FILE ("compute-static-expression.galgas", 37)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("compute-static-expression.galgas", 38)) ;
      outArgument_outStaticExpressionIR.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outStaticExpressionIR = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionIR_1464, var_annotationType_699, constinArgument_inErrorLocation, GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 41)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@omnibusInfixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                          GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 68)) ;
  const GGS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 69)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@omnibusInfixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 77)) ;
  const GGS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 78)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@omnibusInfixOperatorExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_objectIR var_leftOperand_4454 ;
  const GGS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand_4454, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 99)) ;
  GGS_objectIR var_rightOperand_4915 ;
  const GGS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_4454, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 116)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand_4915, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 113)) ;
  const GGS_omnibusInfixOperatorExpressionAST temp_2 = this ;
  const GGS_omnibusInfixOperatorExpressionAST temp_3 = this ;
  extensionMethod_generateInfixOperatorCode (constinArgument_inContext.readProperty_mInfixOperatorMap (), var_leftOperand_4454, temp_2.readProperty_mInfixOperator (), temp_3.readProperty_mOperatorLocation (), var_rightOperand_4915, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 127)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@convertExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                             GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 50)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_convertExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_convertExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-convert.galgas", 52)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 61)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_convertExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_convertExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-convert.galgas", 63)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@convertExpressionAST analyzeExpression'
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
  GGS_objectIR var_expressionResult_4191 ;
  const GGS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4191, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4191, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 100)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_convertExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GGS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)).add_operation (GGS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
    }
  }
  const GGS_convertExpressionAST temp_4 = this ;
  GGS_omnibusType temp_5 ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = constinArgument_inOptionalTargetType ;
  }else if (GalgasBool::boolFalse == test_6) {
    const GGS_convertExpressionAST temp_7 = this ;
    temp_5 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_7.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)) ;
  }
  GGS_omnibusType var_resultType_4508 = temp_5 ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_resultType_4508.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 114)).operator_not (SOURCE_FILE ("expression-convert.galgas", 114)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_convertExpressionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-convert.galgas", 115)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = extensionGetter_type (var_expressionResult_4191, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 116)).operator_not (SOURCE_FILE ("expression-convert.galgas", 116)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_convertExpressionAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray13  COMMA_SOURCE_FILE ("expression-convert.galgas", 117)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GGS_bigint var_minSource_4995 ;
      GGS_bigint var_maxSource_5014 ;
      GGS_bool joker_5024_2 ; // Joker input parameter
      GGS_uint joker_5024_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4191, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)).readProperty_kind ().method_extractInteger (var_minSource_4995, var_maxSource_5014, joker_5024_2, joker_5024_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)) ;
      GGS_bigint var_minTarget_5074 ;
      GGS_bigint var_maxTarget_5093 ;
      GGS_bool joker_5103_2 ; // Joker input parameter
      GGS_uint joker_5103_1 ; // Joker input parameter
      var_resultType_4508.readProperty_kind ().method_extractInteger (var_minTarget_5074, var_maxTarget_5093, joker_5103_2, joker_5103_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      GGS_bool test_14 = GGS_bool (ComparisonKind::lowerOrEqual, var_minTarget_5074.objectCompare (var_minSource_4995)) ;
      if (GalgasBool::boolTrue == test_14.boolEnum ()) {
        test_14 = GGS_bool (ComparisonKind::greaterOrEqual, var_maxTarget_5093.objectCompare (var_maxSource_5014)) ;
      }
      GGS_bool var_alwaysPossible_5116 = test_14 ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = var_alwaysPossible_5116.boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_convertExpressionAST temp_16 = this ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless explicit conversion"), fixItArray17  COMMA_SOURCE_FILE ("expression-convert.galgas", 123)) ;
        }
      }
      {
      routine_getNewTempValue_3F__26__21_ (var_resultType_4508, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 125)) ;
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_truncateInstructionIR::init_21__21_ (outArgument_outResult, var_expressionResult_4191, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 127)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        const GGS_convertExpressionAST temp_19 = this ;
        ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_convertInstructionIR::init_21__21__21_ (outArgument_outResult, var_expressionResult_4191, temp_19.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 132)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@convertInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_convertInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_convertInstructionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 159))  COMMA_SOURCE_FILE ("expression-convert.galgas", 159)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@convertInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_convertInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                            const GGS_generationContext constinArgument_inGenerationContext,
                                                            GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_convertInstructionIR temp_0 = this ;
  GGS_string var_lbl_6897 = temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).getter_string (SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GGS_string var_convertMinOkLabel_6952 = GGS_string ("min.").add_operation (var_lbl_6897, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GGS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GGS_string var_convertMaxOkLabel_6999 = GGS_string ("max.").add_operation (var_lbl_6897, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GGS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GGS_string var_convertFailLabel_7046 = GGS_string ("fail.").add_operation (var_lbl_6897, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GGS_string var_compareMinVar_7086 = GGS_string ("cmp.").add_operation (var_lbl_6897, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GGS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  GGS_string var_compareMaxVar_7134 = GGS_string ("cmp.").add_operation (var_lbl_6897, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GGS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  GGS_bigint var_minTarget_7228 ;
  GGS_bigint var_maxTarget_7247 ;
  const GGS_convertInstructionIR temp_1 = this ;
  GGS_bool joker_7257_2 ; // Joker input parameter
  GGS_uint joker_7257_1 ; // Joker input parameter
  extensionGetter_type (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).readProperty_kind ().method_extractInteger (var_minTarget_7228, var_maxTarget_7247, joker_7257_2, joker_7257_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  GGS_bigint var_minSource_7315 ;
  GGS_bool var_operandIsUnsigned_7346 ;
  const GGS_convertInstructionIR temp_2 = this ;
  GGS_bigint joker_7325 ; // Joker input parameter
  GGS_uint joker_7364_1 ; // Joker input parameter
  extensionGetter_type (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).readProperty_kind ().method_extractInteger (var_minSource_7315, joker_7325, var_operandIsUnsigned_7346, joker_7364_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  const GGS_convertInstructionIR temp_3 = this ;
  GGS_string var_operandType_7375 = extensionGetter_llvmTypeName (temp_3.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_minTarget_7228.objectCompare (var_minSource_7315)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_compareMinVar_7086, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
      GGS_string temp_5 ;
      const GalgasBool test_6 = var_operandIsUnsigned_7346.boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("uge") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string ("sge") ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
      const GGS_convertInstructionIR temp_7 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (var_operandType_7375, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_minTarget_7228.getter_string (SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %").add_operation (var_compareMinVar_7086, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertMinOkLabel_6952, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertFailLabel_7046, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_convertMinOkLabel_6952.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_compareMaxVar_7134, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  GGS_string temp_8 ;
  const GalgasBool test_9 = var_operandIsUnsigned_7346.boolEnum () ;
  if (GalgasBool::boolTrue == test_9) {
    temp_8 = GGS_string ("ule") ;
  }else if (GalgasBool::boolFalse == test_9) {
    temp_8 = GGS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(temp_8, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  const GGS_convertInstructionIR temp_10 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (var_operandType_7375, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_maxTarget_7247.getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %").add_operation (var_compareMaxVar_7134, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertMaxOkLabel_6999, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertFailLabel_7046, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_convertFailLabel_7046.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  const GGS_convertInstructionIR temp_11 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_11.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).getter_assemblerRepresentation (SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  const GGS_convertInstructionIR temp_12 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (temp_12.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  const GGS_convertInstructionIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_string (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GGS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (temp_13.readProperty_mLocation ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_convertMaxOkLabel_6999.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  const GGS_convertInstructionIR temp_14 = this ;
  const GGS_convertInstructionIR temp_15 = this ;
  const GGS_convertInstructionIR temp_16 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_14.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_operandType_7375, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (temp_15.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmTypeName (temp_16.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_controlRegisterGroupDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  result_outRepresentation = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_controlRegisterGroupDeclarationAST::getter_locationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 311)).readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterGroupDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  GGS_lstring var_nodeName_12495 = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
  {
  const GGS_controlRegisterGroupDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12495, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  }
  const GGS_controlRegisterGroupDeclarationAST temp_2 = this ;
  UpEnumerator_controlRegisterDeclarationList enumerator_12703 (temp_2.readProperty_mRegisters ()) ;
  while (enumerator_12703.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12495, enumerator_12703.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 323)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12495, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
    }
    GGS_stringlist var_split_12988 = enumerator_12703.current (HERE).readProperty_mRegisterTypeName ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("u") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_bool test_4 = GGS_bool (ComparisonKind::equal, var_split_12988.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GGS_uint (uint32_t (2U)))) ;
      if (GalgasBool::boolTrue == test_4.boolEnum ()) {
        test_4 = GGS_bool (ComparisonKind::equal, var_split_12988.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GGS_string::makeEmptyString ())) ;
      }
      GGS_bool test_5 = test_4 ;
      if (GalgasBool::boolTrue == test_5.boolEnum ()) {
        test_5 = var_split_12988.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
      }
      test_3 = test_5.boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_uint var_n_13186 = var_split_12988.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::greaterThan, var_n_13186.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_lstring var_bitSizeTypeName_13271 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_n_13186.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)), enumerator_12703.current (HERE).readProperty_mRegisterTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12495, var_bitSizeTypeName_13271 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
            }
          }
        }
      }
    }
    UpEnumerator_controlRegisterBitSliceList enumerator_13497 (enumerator_12703.current (HERE).readProperty_mRegisterBitSliceList ()) ;
    while (enumerator_13497.hasCurrentObject ()) {
      switch (enumerator_13497.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GGS_controlRegisterBitSlice::Enumeration::invalid:
        break ;
      case GGS_controlRegisterBitSlice::Enumeration::enum_unusedBits:
        break ;
      case GGS_controlRegisterBitSlice::Enumeration::enum_namedBit:
        {
          GGS_lstring extractedValue_13604__0 ;
          GGS_lbigint extractedValue_13615_count_1 ;
          enumerator_13497.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_namedBit (extractedValue_13604__0, extractedValue_13615_count_1) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::greaterOrEqual, extractedValue_13615_count_1.readProperty_bigint ().objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_13615_count_1.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)), extractedValue_13615_count_1.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13497.gotoNextObject () ;
    }
    GGS_lstring var_rootNode_13808 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)), var_nodeName_12495.readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12495, var_rootNode_13808 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 346)) ;
    }
    UpEnumerator_controlRegisterNameListAST enumerator_14018 (enumerator_12703.current (HERE).readProperty_mRegisterArrayList ()) ;
    while (enumerator_14018.hasCurrentObject ()) {
      switch (enumerator_14018.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
      case GGS_controlRegisterKind::Enumeration::invalid:
        break ;
      case GGS_controlRegisterKind::Enumeration::enum_scalar:
        break ;
      case GGS_controlRegisterKind::Enumeration::enum_registerArray:
        {
          GGS_expressionAST extractedValue_14144_arraySize_0 ;
          GGS_location extractedValue_14154__1 ;
          GGS_expressionAST extractedValue_14171_arrayElementSize_2 ;
          GGS_location extractedValue_14188__3 ;
          enumerator_14018.current (HERE).readProperty_mControlRegisterKind ().getAssociatedValuesFor_registerArray (extractedValue_14144_arraySize_0, extractedValue_14154__1, extractedValue_14171_arrayElementSize_2, extractedValue_14188__3) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14144_arraySize_0.ptr (), var_nodeName_12495, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 352)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14171_arrayElementSize_2.ptr (), var_nodeName_12495, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 353)) ;
        }
        break ;
      }
      enumerator_14018.gotoNextObject () ;
    }
    enumerator_12703.gotoNextObject () ;
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
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inRegisterTypeName, outArgument_outRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
  switch (outArgument_outRegisterType.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_16340__0 ;
      GGS_bigint extractedValue_16342__1 ;
      GGS_bool extractedValue_16344__2 ;
      GGS_uint extractedValue_16346_bitCount_3 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_16340__0, extractedValue_16342__1, extractedValue_16344__2, extractedValue_16346_bitCount_3) ;
      outArgument_outRegisterBitCount = extractedValue_16346_bitCount_3 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
  case GGS_typeKind::Enumeration::enum_void:
    {
      GenericArray <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 407)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    {
      GGS_uint extractedValue_16529__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_16529__0) ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
    {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_17004__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_17004__0) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_17230__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_17230__0) ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_17353__0 ;
      GGS_bigint extractedValue_17355__1 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_17353__0, extractedValue_17355__1) ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 423)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_17479__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_17479__0) ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 425)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_17596__0 ;
      GGS_routineTypedSignature extractedValue_17596__1 ;
      GGS_unifiedTypeMapEntry extractedValue_17596__2 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_17596__0, extractedValue_17596__1, extractedValue_17596__2) ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 427)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_17712__0 ;
      GGS_ctExpressionAST extractedValue_17712__1 ;
      GGS_llvmStringDefinition extractedValue_17712__2 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_17712__0, extractedValue_17712__1, extractedValue_17712__2) ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_17828__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_17828__0) ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 431)) ;
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
  GGS_controlRegisterFieldList temp_0 = GGS_controlRegisterFieldList::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)) ;
  outArgument_outControlRegisterFieldList = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inRegisterBitSliceList.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 451)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_uint var_shiftCount_18682 = GGS_uint (uint32_t (0U)) ;
      DownEnumerator_controlRegisterBitSliceList enumerator_18708 (constinArgument_inRegisterBitSliceList) ;
      while (enumerator_18708.hasCurrentObject ()) {
        switch (enumerator_18708.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GGS_controlRegisterBitSlice::Enumeration::invalid:
          break ;
        case GGS_controlRegisterBitSlice::Enumeration::enum_unusedBits:
          {
            GGS_lbigint extractedValue_18819_count_0 ;
            enumerator_18708.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_unusedBits (extractedValue_18819_count_0) ;
            var_shiftCount_18682 = var_shiftCount_18682.add_operation (extractedValue_18819_count_0.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)) ;
            outArgument_outControlRegisterFieldList.addAssignOperation (extractedValue_18819_count_0.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)), GGS_string ("—")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
          }
          break ;
        case GGS_controlRegisterBitSlice::Enumeration::enum_namedBit:
          {
            GGS_lstring extractedValue_18978_name_0 ;
            GGS_lbigint extractedValue_18992_count_1 ;
            enumerator_18708.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_namedBit (extractedValue_18978_name_0, extractedValue_18992_count_1) ;
            GGS_uint var_bitCount_19013 = extractedValue_18992_count_1.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)) ;
            outArgument_outControlRegisterFieldList.addAssignOperation (var_bitCount_19013, extractedValue_18978_name_0.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_18978_name_0, var_shiftCount_18682, var_bitCount_19013, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
            }
            GGS_bigint var_mask_19254 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_bitCount_19013, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_shiftCount_18682, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_18978_name_0, GGS_llvmBinaryOperation::class_func_and (SOURCE_FILE ("declaration-control-register.galgas", 470)), var_mask_19254, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)) ;
            }
            var_shiftCount_18682 = var_shiftCount_18682.add_operation (var_bitCount_19013, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          }
          break ;
        }
        enumerator_18708.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_18682)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GGS_string ("total bit slice count is ").add_operation (var_shiftCount_18682.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GGS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 479)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'
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
  GGS_controlRegisterMap var_regMap_24311 = GGS_controlRegisterMap::init (inCompiler COMMA_HERE) ;
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  UpEnumerator_controlRegisterDeclarationList enumerator_24342 (temp_0.readProperty_mRegisters ()) ;
  while (enumerator_24342.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_24342.current (HERE), ioArgument_ioContext, var_regMap_24311, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 598)) ;
    enumerator_24342.gotoNextObject () ;
  }
  const GGS_controlRegisterGroupDeclarationAST temp_1 = this ;
  UpEnumerator_registerGroupListAST enumerator_24512 (temp_1.readProperty_mRegisterGroupList ()) ;
  while (enumerator_24512.hasCurrentObject ()) {
    GGS_controlRegisterMap var_registerMap_24562 = var_regMap_24311 ;
    UpEnumerator_controlRegisterMap enumerator_24641 (var_regMap_24311) ;
    while (enumerator_24641.hasCurrentObject ()) {
      GGS_string var_key_24661 = GGS_string ("#").add_operation (enumerator_24512.current (HERE).readProperty_mRegisterGroupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (enumerator_24641.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_24661 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          var_registerMap_24562.setter_setMUserAccessForKey (GGS_bool (true), enumerator_24641.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 610)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_24661.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611)) ;
          }
        }
      }
      enumerator_24641.gotoNextObject () ;
    }
    switch (enumerator_24512.current (HERE).readProperty_mControlRegisterGroupKind ().enumValue ()) {
    case GGS_controlRegisterGroupKindAST::Enumeration::invalid:
      break ;
    case GGS_controlRegisterGroupKindAST::Enumeration::enum_single:
      {
        GGS_lbigint extractedValue_25005_baseAddress_0 ;
        enumerator_24512.current (HERE).readProperty_mControlRegisterGroupKind ().getAssociatedValuesFor_single (extractedValue_25005_baseAddress_0) ;
        GGS_registerGroupKind var_groupKind_25030 = GGS_registerGroupKind::class_func_single (extractedValue_25005_baseAddress_0.readProperty_bigint ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 617)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24512.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_25030, var_registerMap_24562, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 618)) ;
        }
      }
      break ;
    case GGS_controlRegisterGroupKindAST::Enumeration::enum_groupArray:
      {
        GGS_expressionAST extractedValue_25221_groupSizeExpression_0 ;
        GGS_location extractedValue_25241_groupSizeExpressionLocation_1 ;
        GGS_lbigintlist extractedValue_25269_baseAddresses_2 ;
        enumerator_24512.current (HERE).readProperty_mControlRegisterGroupKind ().getAssociatedValuesFor_groupArray (extractedValue_25221_groupSizeExpression_0, extractedValue_25241_groupSizeExpressionLocation_1, extractedValue_25269_baseAddresses_2) ;
        GGS_objectIR var_groupArraySizeExpressionResult_25561 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_25221_groupSizeExpression_0, extractedValue_25241_groupSizeExpressionLocation_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 625)), var_groupArraySizeExpressionResult_25561, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)) ;
        }
        GGS_bigint var_groupSize_25618 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_groupArraySizeExpressionResult_25561.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 629)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 629)).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_25241_groupSizeExpressionLocation_1, GGS_string ("control register group size is not a static integer expression"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
            var_groupSize_25618.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GGS_omnibusType joker_25910_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_25561.method_extractLiteralInteger (joker_25910_1, var_groupSize_25618, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, var_groupSize_25618.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)).objectCompare (extractedValue_25269_baseAddresses_2.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 636)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_25241_groupSizeExpressionLocation_1, GGS_string ("the group size is ").add_operation (var_groupSize_25618.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GGS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (extractedValue_25269_baseAddresses_2.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 638)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GGS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 637)) ;
          }
        }
        GGS_registerGroupKind var_groupKind_26170 = GGS_registerGroupKind::class_func_arrayGroup (extractedValue_25269_baseAddresses_2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24512.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_26170, var_registerMap_24562, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedControlRegisterArrayGroupDeclaration::init_21__21_ (enumerator_24512.current (HERE).readProperty_mRegisterGroupName (), extractedValue_25269_baseAddresses_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642)) ;
      }
      break ;
    }
    enumerator_24512.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedControlRegisterArrayGroupDeclaration::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                                                  GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                  GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedControlRegisterArrayGroupDeclaration temp_0 = this ;
  const GGS_decoratedControlRegisterArrayGroupDeclaration temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssignOperation (temp_0.readProperty_mGroupName (), temp_1.readProperty_mBaseAddresses ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 666)) ;
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
  GGS_string var_byAddressFilePath_29725 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 727)) ;
  GGS_string var_byNameFilePath_29817 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 728)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_controlRegisterByAddress temp_1 = GGS_controlRegisterByAddress::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 730)) ;
      GGS_controlRegisterByAddress var_controlRegisterByAddress_30004 = temp_1 ;
      GGS_controlRegisterByName temp_2 = GGS_controlRegisterByName::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 731)) ;
      GGS_controlRegisterByName var_controlRegisterByName_30066 = temp_2 ;
      GGS_uint var_controlRegisterCount_30108 = GGS_uint (uint32_t (0U)) ;
      UpEnumerator_controlRegisterGroupMap enumerator_30170 (constinArgument_inControlRegisterGroupMap) ;
      while (enumerator_30170.hasCurrentObject ()) {
        switch (enumerator_30170.current_mGroupKind (HERE).enumValue ()) {
        case GGS_registerGroupKind::Enumeration::invalid:
          break ;
        case GGS_registerGroupKind::Enumeration::enum_single:
          {
            GGS_bigint extractedValue_30278_groupBaseAddress_0 ;
            enumerator_30170.current_mGroupKind (HERE).getAssociatedValuesFor_single (extractedValue_30278_groupBaseAddress_0) ;
            {
            routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_30170.current_mControlRegisterMap (HERE), extractedValue_30278_groupBaseAddress_0, enumerator_30170.current_lkey (HERE).readProperty_string (), var_controlRegisterByAddress_30004, var_controlRegisterByName_30066, var_controlRegisterCount_30108, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 736)) ;
            }
          }
          break ;
        case GGS_registerGroupKind::Enumeration::enum_arrayGroup:
          {
            GGS_lbigintlist extractedValue_30577_baseAddresses_0 ;
            enumerator_30170.current_mGroupKind (HERE).getAssociatedValuesFor_arrayGroup (extractedValue_30577_baseAddresses_0) ;
            UpEnumerator_lbigintlist enumerator_30607 (extractedValue_30577_baseAddresses_0) ;
            GGS_uint index_30602 (uint32_t (0)) ;
            while (enumerator_30607.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_30170.current_mControlRegisterMap (HERE), enumerator_30607.current_mValue (HERE).readProperty_bigint (), enumerator_30170.current_lkey (HERE).readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (index_30602.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)), var_controlRegisterByAddress_30004, var_controlRegisterByName_30066, var_controlRegisterCount_30108, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 746)) ;
              }
              enumerator_30607.gotoNextObject () ;
              index_30602.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)) ;
            }
          }
          break ;
        }
        enumerator_30170.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_30957 = GGS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 758)), var_controlRegisterCount_30108, var_controlRegisterByAddress_30004 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757))) ;
      GGS_bool joker_31217 ; // Joker input parameter
      var_typeDumpString_30957.method_writeToFileWhenDifferentContents (var_byAddressFilePath_29725, joker_31217, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
      var_typeDumpString_30957 = GGS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 764)), var_controlRegisterCount_30108, var_controlRegisterByName_30066 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763))) ;
      GGS_bool joker_31476 ; // Joker input parameter
      var_typeDumpString_30957.method_writeToFileWhenDifferentContents (var_byNameFilePath_29817, joker_31476, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_byAddressFilePath_29725, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)) ;
    }
    {
    GGS_string::class_method_deleteFileIfExists (var_byNameFilePath_29817, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
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
  UpEnumerator_controlRegisterMap enumerator_32130 (constinArgument_inControlRegisterMap) ;
  while (enumerator_32130.hasCurrentObject ()) {
    GGS_bigint var_registerAddress_32188 = constinArgument_inGroupBaseAddress.add_operation (enumerator_32130.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_32130.current_mArraySize (HERE).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
        GGS_string var_registerName_32346 = constinArgument_inGroupName.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (enumerator_32130.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
        GGS_string var_s_32400 = GGS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32346, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 790)).add_operation (GGS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 791)).add_operation (enumerator_32130.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GGS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (var_registerAddress_32188.getter_hexStringSeparatedBy (GGS_char (utf32 (95)), GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GGS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_32130.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 794)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_s_32400.plusAssignOperation(GGS_string ("<table class=\"fields\">").add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)).add_operation (function_fieldIndexColumns (enumerator_32130.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GGS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)) ;
            DownEnumerator_controlRegisterFieldList enumerator_32874 (enumerator_32130.current_mControlRegisterFieldList (HERE)) ;
            while (enumerator_32874.hasCurrentObject ()) {
              var_s_32400.plusAssignOperation(GGS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_32874.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (enumerator_32874.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)) ;
              enumerator_32874.gotoNextObject () ;
            }
            var_s_32400.plusAssignOperation(GGS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 801)) ;
          }
        }
        var_s_32400.plusAssignOperation(GGS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)) ;
        ioArgument_ioControlRegisterByAddress.addAssignOperation (var_registerAddress_32188, var_s_32400  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804)) ;
        ioArgument_ioControlRegisterByName.addAssignOperation (var_registerAddress_32188, var_s_32400, var_registerName_32346  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_32130.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)) ;
      UpEnumerator_uintlist enumerator_33321 (function_arrayIndexListFor (enumerator_32130.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 808))) ;
      while (enumerator_33321.hasCurrentObject ()) {
        GGS_bigint var_address_33388 = var_registerAddress_32188.add_operation (enumerator_33321.current_mValue (HERE).multiply_operation (enumerator_32130.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)) ;
        GGS_string var_registerName_33459 = constinArgument_inGroupName.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_32130.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_33321.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)) ;
        GGS_string var_s_33545 = GGS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_33459, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)).add_operation (GGS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 812)).add_operation (enumerator_32130.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GGS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (var_address_33388.getter_hexStringSeparatedBy (GGS_char (utf32 (95)), GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GGS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_32130.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 816)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_s_33545.plusAssignOperation(GGS_string ("<table class=\"fields\">").add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)).add_operation (function_fieldIndexColumns (enumerator_32130.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)).add_operation (GGS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
            DownEnumerator_controlRegisterFieldList enumerator_34018 (enumerator_32130.current_mControlRegisterFieldList (HERE)) ;
            while (enumerator_34018.hasCurrentObject ()) {
              var_s_33545.plusAssignOperation(GGS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_34018.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (enumerator_34018.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)) ;
              enumerator_34018.gotoNextObject () ;
            }
            var_s_33545.plusAssignOperation(GGS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 822)) ;
          }
        }
        var_s_33545.plusAssignOperation(GGS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 824)) ;
        ioArgument_ioControlRegisterByAddress.addAssignOperation (var_registerAddress_32188, var_s_33545  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 825)) ;
        ioArgument_ioControlRegisterByName.addAssignOperation (var_registerAddress_32188, var_s_33545, var_registerName_33459  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 826)) ;
        enumerator_33321.gotoNextObject () ;
      }
    }
    enumerator_32130.gotoNextObject () ;
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
  DownEnumerator_range enumerator_35237 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 852)))) ;
  while (enumerator_35237.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("<td class=\"fields\">").add_operation (enumerator_35237.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)) ;
    enumerator_35237.gotoNextObject () ;
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
  UpEnumerator_range enumerator_35528 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inSize.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 861)))) ;
  while (enumerator_35528.hasCurrentObject ()) {
    result_result.addAssignOperation (enumerator_35528.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 862)) ;
    enumerator_35528.gotoNextObject () ;
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
//Routine 'enter_NOP_function&'
//
//--------------------------------------------------------------------------------------------------

void routine_enter_5F_NOP_5F_function_26_ (GGS_declarationListAST & ioArgument_ioDeclarationListAST,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  temp_0.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)).getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 14)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  GGS_lstringlist var_attributeList_809 = temp_0 ;
  GGS_instructionListAST temp_1 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  temp_1.plusPlusAssignOperation (GGS_instructionListAST_2E_element::init_21_ (GGS_instructionNOP::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("instruction-nop.galgas", 15)), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  GGS_instructionListAST var_instructionList_875 = temp_1 ;
  GGS_routineFormalArgumentListAST temp_2 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 23)) ;
  ioArgument_ioDeclarationListAST.addAssignOperation (GGS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (GGS_mode::class_func_anySafeMode (SOURCE_FILE ("instruction-nop.galgas", 18)), GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 20)), GGS_string ("nop").getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 21)), var_attributeList_809, temp_2, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 24)), var_instructionList_875, GGS_location::class_func_nowhere (SOURCE_FILE ("instruction-nop.galgas", 26)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@instructionNOP noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@instructionNOP instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::method_instructionSemanticAnalysis (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                              const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                              const GGS_semanticContext /* constinArgument_inContext */,
                                                              const GGS_mode /* constinArgument_inMode */,
                                                              GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                              GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                              GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 52)) ;
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
//Overriding extension method '@llvmAssignmentOperatorDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmAssignmentOperatorDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_2 = this ;
  GGS_lstring var_nodeName_3455 = GGS_lstring::init_21__21_ (temp_0.readProperty_mTargetTypeName ().readProperty_string ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 84)).add_operation (temp_1.readProperty_mSourceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 84)), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3455, temp_3, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 85)) ;
  }
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3455, temp_4.readProperty_mTargetTypeName () COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 86)) ;
  }
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3455, temp_5.readProperty_mSourceTypeName () COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 87)) ;
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
  result_outRepresentation = GGS_string ("Assignment ").add_operation (temp_0.readProperty_mTargetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 93)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 93)).add_operation (temp_1.readProperty_mSourceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 93)) ;
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
  result_result = GGS_string ("assign.").add_operation (constinArgument_inTargetType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)).add_operation (GGS_string (".ref.from."), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)).add_operation (constinArgument_inSourceType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)).add_operation (GGS_string (".ref"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 101)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_assignmentOperatorFuncName [3] = {
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
  result_result = GGS_lstring::init_21__21_ (constinArgument_inTargetType.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 110)).add_operation (constinArgument_inSourceType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 110)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_assignmentOperatorKey [4] = {
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
//Overriding extension method '@llvmAssignmentOperatorDeclarationAST enterInContext'
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
  GGS_ctCheckMap var_formalGenericConstantParameterMap_7008 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_0 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_0.readProperty_mTargetGenericFormalParameterList (), var_formalGenericConstantParameterMap_7008, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 156)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_1 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_1.readProperty_mSourceGenericFormalParameterList (), var_formalGenericConstantParameterMap_7008, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_2 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_2.readProperty_mWhereClause ().ptr (), var_formalGenericConstantParameterMap_7008, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 159)) ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_3 = this ;
  var_formalGenericConstantParameterMap_7008.setter_insertKey (temp_3.readProperty_mTargetVariableName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 161)) ;
  }
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_4 = this ;
  var_formalGenericConstantParameterMap_7008.setter_insertKey (temp_4.readProperty_mSourceVariableName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 162)) ;
  }
  const GGS_llvmAssignmentOperatorDeclarationAST temp_5 = this ;
  extensionMethod_checkInstructionList (temp_5.readProperty_mLLVMInstructionList (), var_formalGenericConstantParameterMap_7008, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 163)) ;
  GGS_unifiedTypeMapEntry var_targetTypeProxy_7715 ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_6 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_6.readProperty_mTargetTypeName (), var_targetTypeProxy_7715, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)) ;
  }
  GGS_omnibusType var_targetType_7738 = extensionGetter_type (var_targetTypeProxy_7715, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 166)) ;
  GGS_unifiedTypeMapEntry var_sourceTypeProxy_7835 ;
  {
  const GGS_llvmAssignmentOperatorDeclarationAST temp_7 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_7.readProperty_mSourceTypeName (), var_sourceTypeProxy_7835, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 167)) ;
  }
  GGS_omnibusType var_sourceType_7871 = extensionGetter_type (var_sourceTypeProxy_7835, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 168)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_8 = this ;
  GGS_lstring var_key_7919 = function_assignmentOperatorKey (var_targetType_7738, temp_8.readProperty_mOperatorLocation (), var_sourceType_7871, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 170)) ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_9 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_10 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_11 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_12 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_13 = this ;
  const GGS_llvmAssignmentOperatorDeclarationAST temp_14 = this ;
  GGS_llvmAssignmentOperatorUsage var_operatorUsage_8003 = GGS_llvmAssignmentOperatorUsage::init_21__21__21__21__21__21__21__21_ (var_targetType_7738, temp_9.readProperty_mTargetVariableName (), temp_10.readProperty_mTargetGenericFormalParameterList (), var_sourceType_7871, temp_11.readProperty_mSourceVariableName (), temp_12.readProperty_mSourceGenericFormalParameterList (), temp_13.readProperty_mWhereClause (), temp_14.readProperty_mLLVMInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_7919, var_operatorUsage_8003, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 181)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_llvmAssignmentOperatorDeclarationAST temp_16 = this ;
    GGS_bool test_17 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mTargetGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas", 188)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_17.boolEnum ()) {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_18 = this ;
      test_17 = GGS_bool (ComparisonKind::equal, temp_18.readProperty_mSourceGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas", 189)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
    GGS_bool test_19 = test_17 ;
    if (GalgasBool::boolTrue == test_19.boolEnum ()) {
      test_19 = var_sourceType_7871.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas", 190)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 190)) ;
    }
    GGS_bool test_20 = test_19 ;
    if (GalgasBool::boolTrue == test_20.boolEnum ()) {
      test_20 = var_sourceType_7871.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas", 191)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 191)) ;
    }
    test_15 = test_20.boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_assignmentGenerationVarMap var_varMap_8733 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_21 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_22 = this ;
      var_varMap_8733.setter_insertKey (temp_21.readProperty_mTargetVariableName (), GGS_string ("%").add_operation (temp_22.readProperty_mTargetVariableName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 193)) ;
      }
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_23 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_24 = this ;
      var_varMap_8733.setter_insertKey (temp_23.readProperty_mSourceVariableName (), GGS_string ("%").add_operation (temp_24.readProperty_mSourceVariableName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 194)) ;
      }
      GGS_assignmentGenerationVarMap var_typeMap_8948 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_25 = this ;
      var_typeMap_8948.setter_insertKey (temp_25.readProperty_mTargetVariableName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_targetType_7738.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 196)) ;
      }
      {
      const GGS_llvmAssignmentOperatorDeclarationAST temp_26 = this ;
      var_typeMap_8948.setter_insertKey (temp_26.readProperty_mSourceVariableName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_7871.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 197)) ;
      }
      GGS_stringlist var_generatedInstructions_9140 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_allocaList var_allocaList_9188 = GGS_allocaList::init (inCompiler COMMA_HERE) ;
      GGS_uint var_temporaryIndex_9219 = GGS_uint (uint32_t (0U)) ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_27 = this ;
      extensionMethod_generateIRCode (temp_27.readProperty_mLLVMInstructionList (), var_varMap_8733, var_typeMap_8948, var_generatedInstructions_9140, var_temporaryIndex_9219, var_allocaList_9188, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 201)) ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_28 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_29 = this ;
      const GGS_llvmAssignmentOperatorDeclarationAST temp_30 = this ;
      GGS_assignmentRoutineIR var_routine_9364 = GGS_assignmentRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (GGS_lstring::init_21__21_ (function_assignmentOperatorFuncName (var_targetType_7738, var_sourceType_7871, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 203)), temp_28.readProperty_mOperatorLocation (), inCompiler COMMA_HERE), GGS_bool (false), GGS_bool (false), var_targetType_7738, temp_29.readProperty_mTargetVariableName ().readProperty_string (), var_sourceType_7871, temp_30.readProperty_mSourceVariableName ().readProperty_string (), var_generatedInstructions_9140, var_allocaList_9188, inCompiler COMMA_HERE) ;
      ioArgument_ioRoutineListIR.addAssignOperation (var_routine_9364  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 213)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmAssignmentOperatorUsage generateCode'
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_llvmAssignmentOperatorUsage temp_1 = this ;
    GGS_bool test_2 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas", 244)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      const GGS_llvmAssignmentOperatorUsage temp_3 = this ;
      test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mSourceGenericFormalParameterList ().getter_count (SOURCE_FILE ("assignment-operator-definition.galgas", 245)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
    GGS_bool test_4 = test_2 ;
    if (GalgasBool::boolTrue == test_4.boolEnum ()) {
      test_4 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 246)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas", 246)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 246)) ;
    }
    GGS_bool test_5 = test_4 ;
    if (GalgasBool::boolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 247)).readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas", 247)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 247)) ;
    }
    test_0 = test_5.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_llvmRoutineName_11248 = function_assignmentOperatorFuncName (constinArgument_inTargetType, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 248)) ;
      GGS_string var_s_11353 = GGS_string ("call void @").add_operation (var_llvmRoutineName_11248.getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 249)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 249)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 250)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 250)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 250)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 250)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 251)).ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 251)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 251)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 251)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 251)) ;
      {
      GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 252)) ;
      temp_6.plusPlusAssignOperation (var_llvmRoutineName_11248  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 252)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11353, temp_6, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 252)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_omnibusType var_sourceType_11761 ;
    GGS_string var_srcLLVMName_11787 ;
    constinArgument_inSourcePossibleReference.method_extractReference (var_sourceType_11761, var_srcLLVMName_11787, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 254)) ;
    GGS_assignmentGenerationVarMap var_varMap_11836 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmAssignmentOperatorUsage temp_7 = this ;
    var_varMap_11836.setter_insertKey (temp_7.readProperty_mTargetVarName (), constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 256)) ;
    }
    {
    const GGS_llvmAssignmentOperatorUsage temp_8 = this ;
    var_varMap_11836.setter_insertKey (temp_8.readProperty_mSourceVarName (), var_srcLLVMName_11787, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 257)) ;
    }
    GGS_assignmentGenerationVarMap var_typeMap_12008 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmAssignmentOperatorUsage temp_9 = this ;
    var_typeMap_12008.setter_insertKey (temp_9.readProperty_mTargetVarName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 259)) ;
    }
    {
    const GGS_llvmAssignmentOperatorUsage temp_10 = this ;
    var_typeMap_12008.setter_insertKey (temp_10.readProperty_mSourceVarName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_11761.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 260)) ;
    }
    GGS_stringlist var_generatedInstructions_12193 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    const GGS_llvmAssignmentOperatorUsage temp_11 = this ;
    extensionMethod_generateIRCode (temp_11.readProperty_mInstructionList (), var_varMap_11836, var_typeMap_12008, var_generatedInstructions_12193, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 262)) ;
    UpEnumerator_stringlist enumerator_12361 (var_generatedInstructions_12193) ;
    while (enumerator_12361.hasCurrentObject ()) {
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, enumerator_12361.current_mValue (HERE), GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 264)) ;
      }
      enumerator_12361.gotoNextObject () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignmentRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentRoutineIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)) ;
  const GGS_assignmentRoutineIR temp_1 = this ;
  const GGS_assignmentRoutineIR temp_2 = this ;
  const GGS_assignmentRoutineIR temp_3 = this ;
  const GGS_assignmentRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)).add_operation (GGS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)).add_operation (temp_2.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_3.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 317)).add_operation (GGS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 317)).add_operation (temp_4.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 317)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
  const GGS_assignmentRoutineIR temp_5 = this ;
  extensionMethod_generateAllocaList (temp_5.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 318)) ;
  const GGS_assignmentRoutineIR temp_6 = this ;
  UpEnumerator_stringlist enumerator_14483 (temp_6.readProperty_mGeneratedInstructions ()) ;
  while (enumerator_14483.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_14483.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 320)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 320)) ;
    enumerator_14483.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 322)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 323)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@simpleAssignmentCopyRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_simpleAssignmentCopyRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_simpleAssignmentCopyRoutineIR temp_0 = this ;
  GGS_string var_typeName_15158 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 339)) ;
  GGS_string var_targetVarName_15207 = GGS_string ("%targetPtr") ;
  GGS_string var_sourceVarName_15242 = GGS_string ("%sourcePtr") ;
  const GGS_simpleAssignmentCopyRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 342)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_typeName_15158, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 343)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 343)).add_operation (var_targetVarName_15207, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 343)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 343)).add_operation (var_typeName_15158, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 344)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 344)).add_operation (var_sourceVarName_15242, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 344)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 343)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %value = load ").add_operation (var_typeName_15158, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)).add_operation (var_typeName_15158, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)).add_operation (var_sourceVarName_15242, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 345)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_typeName_15158, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)).add_operation (GGS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)).add_operation (var_typeName_15158, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)).add_operation (var_targetVarName_15207, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 346)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 347)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 348)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@simpleCopyAssignmentOperatorUsage generateCode'
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
  GGS_objectIR var_sourceValue_16517 = constinArgument_inSourcePossibleReference ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inSourcePossibleReference.getter_isReference (SOURCE_FILE ("assignment-operator-definition.galgas", 370)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_getNewTempValue_3F__26__21_ (constinArgument_inTargetType, ioArgument_ioTemporaries, var_sourceValue_16517, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 371)) ;
      }
      GGS_string var_s_16680 = extensionGetter_llvmName (var_sourceValue_16517, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 372)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 372)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 372)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 373)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 373)) ;
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_16680, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 374)) ;
      }
    }
  }
  GGS_string var_s_16940 = GGS_string ("store ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 377)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 377)).add_operation (extensionGetter_llvmName (var_sourceValue_16517, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 377)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 377)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 378)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 378)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 378)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_16940, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 379)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeOpaqueDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  const GGS_typeOpaqueDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mOpaqueTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 58)) ;
  }
  const GGS_typeOpaqueDeclarationAST temp_2 = this ;
  const GGS_typeOpaqueDeclarationAST temp_3 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_2.readProperty_mSizeExpression ().ptr (), temp_3.readProperty_mOpaqueTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typeOpaqueDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("opaque ").add_operation (temp_0.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_typeOpaqueDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mOpaqueTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeOpaqueDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                           GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                           GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                           GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                           GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                           GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                           GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                           GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusTypeAttributes var_opaqueTypeAttributes_4140 = GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE) ;
  GGS_bool var_copyable_4173 = GGS_bool (false) ;
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4197 (temp_0.readProperty_mAttributeList ()) ;
  while (enumerator_4197.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_4197.current_mValue (HERE).readProperty_string ().objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_opaqueTypeAttributes_4140.getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4197.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_opaqueTypeAttributes_4140 = var_opaqueTypeAttributes_4140.operator_or (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, enumerator_4197.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_copyable_4173.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4197.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_copyable_4173 = GGS_bool (true) ;
            var_opaqueTypeAttributes_4140 = var_opaqueTypeAttributes_4140.operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_4197.current_mValue (HERE).readProperty_location (), GGS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GGS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GGS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), fixItArray7  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
      }
    }
    enumerator_4197.gotoNextObject () ;
  }
  GGS_objectIR var_sizeExpressionIR_5171 ;
  {
  const GGS_typeOpaqueDeclarationAST temp_8 = this ;
  const GGS_typeOpaqueDeclarationAST temp_9 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_8.readProperty_mSizeExpression (), temp_9.readProperty_mSizeExpressionLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 117)), var_sizeExpressionIR_5171, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_sizeExpressionIR_5171.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_typeOpaqueDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mSizeExpressionLocation (), GGS_string ("array size expression is not a literal integer"), fixItArray12  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GGS_constructorMap var_constructorMap_5363 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = var_opaqueTypeAttributes_4140.getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 124)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 124)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        {
        GGS_constructorSignature temp_14 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        var_constructorMap_5363.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), temp_14, GGS_constructorValue::class_func_simple (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        }
        {
        const GGS_typeOpaqueDeclarationAST temp_15 = this ;
        ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_15.readProperty_mOpaqueTypeName (), var_constructorMap_5363, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)) ;
        }
      }
    }
    GGS_bigint var_bitSize_5674 ;
    GGS_omnibusType joker_5659_1 ; // Joker input parameter
    var_sizeExpressionIR_5171.method_extractLiteralInteger (joker_5659_1, var_bitSize_5674, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    const GGS_typeOpaqueDeclarationAST temp_16 = this ;
    const GGS_typeOpaqueDeclarationAST temp_17 = this ;
    GGS_omnibusType var_opaqueType_5691 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), var_opaqueTypeAttributes_4140, temp_16.readProperty_mOpaqueTypeName ().readProperty_string (), GGS_typeKind::class_func_opaque (var_bitSize_5674  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)), temp_17.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    {
    const GGS_typeOpaqueDeclarationAST temp_18 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_18.readProperty_mOpaqueTypeName (), var_opaqueType_5691, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 136)) ;
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = var_copyable_4173.boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      const GGS_typeOpaqueDeclarationAST temp_20 = this ;
      routine_print_3F_ (GGS_string ("OPAQUE ").add_operation (temp_20.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)).add_operation (GGS_string (" is copyable\n"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bitbandInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bitbandInstructionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 51)) ;
  {
  ioArgument_ioGraph.setter_noteNode (GGS_string ("u1").getter_nowhere (SOURCE_FILE ("instruction-bit-banding.galgas", 52)) COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 52)) ;
  }
  const GGS_bitbandInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mBitExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 53)) ;
  const GGS_bitbandInstructionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bitbandInstructionAST instructionSemanticAnalysis'
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
  GGS_omnibusType var_requiredSourceExpressionType_3632 ;
  const GGS_bitbandInstructionAST temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u1"), temp_0.readProperty_mSourceExpressionLocation (), inCompiler COMMA_HERE), var_requiredSourceExpressionType_3632, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 74)) ;
  GGS_objectIR var_sourceExpressionOperand_4101 ;
  const GGS_bitbandInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredSourceExpressionType_3632, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceExpressionOperand_4101, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 79)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceExpressionOperand_4101, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 93)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_sourceExpressionOperand_4101, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)))) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = var_sourceExpressionOperand_4101.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 98)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_bigint var_value_4594 ;
      GGS_omnibusType joker_4571_1 ; // Joker input parameter
      var_sourceExpressionOperand_4101.method_extractLiteralInteger (joker_4571_1, var_value_4594, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 99)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_bool test_5 = GGS_bool (ComparisonKind::lowerThan, var_value_4594.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        if (GalgasBool::boolTrue != test_5.boolEnum ()) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_value_4594.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        }
        test_4 = test_5.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_bitbandInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSourceExpressionLocation (), GGS_string ("static value should be 0 or 1"), fixItArray7  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 101)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        var_sourceExpressionOperand_4101 = GGS_objectIR::class_func_literalInteger (var_requiredSourceExpressionType_3632, var_value_4594  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 103)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_sourceExpressionOperand_4101, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 105)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredSourceExpressionType_3632.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_bitbandInstructionAST temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mSourceExpressionLocation (), GGS_string ("bit expression type should be $").add_operation (var_requiredSourceExpressionType_3632.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)), fixItArray10  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)) ;
      }
    }
  }
  GGS_uint var_registerBitCount_5582 ;
  GGS_string var_llvmRegisterAddressName_5648 ;
  const GGS_bitbandInstructionAST temp_11 = this ;
  GGS_omnibusType joker_5540 ; // Joker input parameter
  GGS_sliceMap joker_5603 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_11.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_5540, var_registerBitCount_5582, joker_5603, var_llvmRegisterAddressName_5648, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 109)) ;
  GGS_omnibusType var_requiredBitExpressionType_5888 ;
  const GGS_bitbandInstructionAST temp_12 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_registerBitCount_5582.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_significantBitCount (SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)), temp_12.readProperty_mBitExpressionLocation (), inCompiler COMMA_HERE), var_requiredBitExpressionType_5888, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 128)) ;
  GGS_objectIR var_bitExpressionOperand_6345 ;
  const GGS_bitbandInstructionAST temp_13 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_13.readProperty_mBitExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredBitExpressionType_5888, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_bitExpressionOperand_6345, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_bitExpressionOperand_6345, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 147)) ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = GGS_bool (ComparisonKind::equal, extensionGetter_type (var_bitExpressionOperand_6345, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)))) ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = var_bitExpressionOperand_6345.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 152)) ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS_bigint var_value_6817 ;
      GGS_omnibusType joker_6794_1 ; // Joker input parameter
      var_bitExpressionOperand_6345.method_extractLiteralInteger (joker_6794_1, var_value_6817, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 153)) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        GGS_bool test_17 = GGS_bool (ComparisonKind::lowerThan, var_value_6817.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        if (GalgasBool::boolTrue != test_17.boolEnum ()) {
          test_17 = GGS_bool (ComparisonKind::greaterOrEqual, var_value_6817.objectCompare (var_registerBitCount_5582.getter_bigint (SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        }
        test_16 = test_17.boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_bitbandInstructionAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mBitExpressionLocation (), GGS_string ("static value should be >= 0 and <").add_operation (var_registerBitCount_5582.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)), fixItArray19  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)) ;
        }
      }
      if (GalgasBool::boolFalse == test_16) {
        var_bitExpressionOperand_6345 = GGS_objectIR::class_func_literalInteger (var_requiredBitExpressionType_5888, var_value_6817  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 157)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_bitExpressionOperand_6345, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 159)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredBitExpressionType_5888.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_bitbandInstructionAST temp_21 = this ;
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mBitExpressionLocation (), GGS_string ("bit expression type should be $").add_operation (var_requiredBitExpressionType_5888.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)), fixItArray22  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)) ;
      }
    }
  }
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_bitbandInstructionIR::init_21__21__21__21__21__21__21_ (var_llvmRegisterAddressName_5648, var_bitExpressionOperand_6345, var_sourceExpressionOperand_4101, constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBaseAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterRelocationAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterOffsetMultiplier ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBitMultiplier ().readProperty_bigint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 163)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bitbandInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                            const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                            GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_idx_9453 = ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 205)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 207)) ;
  const GGS_bitbandInstructionIR temp_0 = this ;
  const GGS_bitbandInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byte.offset.").add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GGS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_0.readProperty_mRegisterAddressLLVMname (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_1.readProperty_mBitbandRegisterBaseAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)) ;
  const GGS_bitbandInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byte.offset.").add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GGS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (temp_2.readProperty_mBitbandRegisterOffsetMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)) ;
  const GGS_bitbandInstructionIR temp_3 = this ;
  const GGS_bitbandInstructionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %bit.offset.").add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GGS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mBitExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (temp_4.readProperty_mBitbandRegisterBitMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %offset.").add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GGS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GGS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GGS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)) ;
  const GGS_bitbandInstructionIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %bit.word.addr.").add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GGS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (temp_5.readProperty_mBitbandRegisterRelocationAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %ptr.").add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GGS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GGS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)) ;
  const GGS_bitbandInstructionIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %value.").add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GGS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mSourceExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GGS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i32 %value.").add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GGS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (var_idx_9453, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@storeFromTemporaryReferenceIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_storeFromTemporaryReferenceIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                     const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeFromTemporaryReferenceIR temp_0 = this ;
  GGS_string var_llvmType_924 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetVarType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 26)) ;
  const GGS_storeFromTemporaryReferenceIR temp_1 = this ;
  const GGS_storeFromTemporaryReferenceIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_924, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (extensionGetter_llvmName (temp_1.readProperty_mSourceValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (var_llvmType_924, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (temp_2.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@systemRoutineDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_5006 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_systemRoutineDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_systemRoutineDeclarationAST temp_2 = this ;
      var_s_5006.plusAssignOperation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)) ;
    }
  }
  const GGS_systemRoutineDeclarationAST temp_3 = this ;
  var_s_5006.plusAssignOperation(temp_3.readProperty_mSystemRoutineName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)) ;
  const GGS_systemRoutineDeclarationAST temp_4 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_5198 (temp_4.readProperty_mFormalArgumentList ()) ;
  while (enumerator_5198.hasCurrentObject ()) {
    var_s_5006.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_5198.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (enumerator_5198.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)) ;
    enumerator_5198.gotoNextObject () ;
  }
  var_s_5006.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 175)) ;
  const GGS_systemRoutineDeclarationAST temp_5 = this ;
  GGS_lstring var_nodeKey_5333 = GGS_lstring::init_21__21_ (var_s_5006, temp_5.readProperty_mSystemRoutineName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_systemRoutineDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeKey_5333, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 177)) ;
  }
  const GGS_systemRoutineDeclarationAST temp_7 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_5463 (temp_7.readProperty_mFormalArgumentList ()) ;
  while (enumerator_5463.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5463.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 180)) ;
    }
    enumerator_5463.gotoNextObject () ;
  }
  const GGS_systemRoutineDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 182)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_systemRoutineDeclarationAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      {
      const GGS_systemRoutineDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 184)) ;
      }
      {
      const GGS_systemRoutineDeclarationAST temp_12 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5333, temp_12.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 185)) ;
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
      ioArgument_ioGraph.setter_noteNode (temp_15.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 188)) ;
      }
      {
      const GGS_systemRoutineDeclarationAST temp_16 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5333, temp_16.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 189)) ;
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
  GGS_string var_s_7140 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_section:
    {
      var_s_7140 = GGS_string ("section") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_service:
    {
      var_s_7140 = GGS_string ("service") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_primitive:
    {
      var_s_7140 = GGS_string ("primitive") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_function:
    {
      var_s_7140 = GGS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_7140.plusAssignOperation(GGS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 225)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_7140.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)) ;
    }
  }
  var_s_7140.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 229)) ;
  var_s_7140.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_7494 (constinArgument_inFormalArgumentList) ;
  while (enumerator_7494.hasCurrentObject ()) {
    var_s_7140.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_7494.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (enumerator_7494.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)) ;
    enumerator_7494.gotoNextObject () ;
  }
  var_s_7140.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_7140, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  GGS_string var_s_8113 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_section:
    {
      var_s_8113 = GGS_string ("section") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_service:
    {
      var_s_8113 = GGS_string ("service") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_primitive:
    {
      var_s_8113 = GGS_string ("primitive") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_function:
    {
      var_s_8113 = GGS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_8113.plusAssignOperation(GGS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 256)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_8113.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)) ;
    }
  }
  var_s_8113.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 260)) ;
  var_s_8113.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_8477 (constinArgument_inFormalArgumentList) ;
  while (enumerator_8477.hasCurrentObject ()) {
    var_s_8113.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_8477.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (enumerator_8477.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
    enumerator_8477.gotoNextObject () ;
  }
  var_s_8113.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_8113, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
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
//Overriding extension method '@systemRoutineDeclarationAST enterInContext'
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
  GGS_unifiedTypeMapEntry var_selfTypeProxy_9678 ;
  {
  const GGS_systemRoutineDeclarationAST temp_0 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_selfTypeProxy_9678, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
  }
  GGS_string temp_1 ;
  const GalgasBool test_2 = var_selfTypeProxy_9678.getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 286)).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = extensionGetter_type (var_selfTypeProxy_9678, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)).readProperty_llvmBaseTypeName () ;
  }
  GGS_string var_receiverLLVMBaseTypeName_9725 = temp_1 ;
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  GGS_stringset var_attributeSet_9867 = temp_3 ;
  const GGS_systemRoutineDeclarationAST temp_4 = this ;
  UpEnumerator_lstringlist enumerator_9910 (temp_4.readProperty_mAttributeList ()) ;
  while (enumerator_9910.hasCurrentObject ()) {
    var_attributeSet_9867.plusPlusAssignOperation (enumerator_9910.current (HERE).readProperty_mValue ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)) ;
    enumerator_9910.gotoNextObject () ;
  }
  GGS_routineKind var_routineKind_10004 ;
  const GGS_systemRoutineDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mMode ().enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      var_routineKind_10004 = GGS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas", 296)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      var_routineKind_10004 = GGS_routineKind::class_func_service (SOURCE_FILE ("declaration-svc.galgas", 298)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_primitiveMode:
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      var_routineKind_10004 = GGS_routineKind::class_func_primitive (SOURCE_FILE ("declaration-svc.galgas", 300)) ;
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
      inCompiler->emitSemanticError (temp_6.readProperty_mSystemRoutineName ().readProperty_location (), GGS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("declaration-svc.galgas", 302)) ;
      var_routineKind_10004.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_systemRoutineDeclarationAST temp_8 = this ;
  const GGS_systemRoutineDeclarationAST temp_9 = this ;
  GGS_lstring var_userRoutineMangledName_10458 = function_systemUserMangledNameFromAST (var_receiverLLVMBaseTypeName_9725, var_routineKind_10004, temp_8.readProperty_mSystemRoutineName (), temp_9.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
  const GGS_systemRoutineDeclarationAST temp_10 = this ;
  const GGS_systemRoutineDeclarationAST temp_11 = this ;
  GGS_lstring var_implementationRoutineMangledName_10630 = function_systemImplementationMangledNameFromAST (var_receiverLLVMBaseTypeName_9725, var_routineKind_10004, temp_10.readProperty_mSystemRoutineName (), temp_11.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  GGS_routineTypedSignature var_signature_10909 ;
  {
  const GGS_systemRoutineDeclarationAST temp_12 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_12.readProperty_mFormalArgumentList (), var_signature_10909, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_11008 ;
  {
  const GGS_systemRoutineDeclarationAST temp_13 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_13.readProperty_mReturnTypeName (), var_returnTypeProxy_11008, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 320)) ;
  }
  GGS_bool var_mutatingRoutine_11048 = GGS_bool (false) ;
  GGS_bool var_noUnusedWarning_11078 = GGS_bool (false) ;
  const GGS_systemRoutineDeclarationAST temp_14 = this ;
  UpEnumerator_lstringlist enumerator_11109 (temp_14.readProperty_mAttributeList ()) ;
  while (enumerator_11109.hasCurrentObject ()) {
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::equal, enumerator_11109.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 325)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = var_noUnusedWarning_11078.boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GenericArray <FixItDescription> fixItArray17 ;
            fixItArray17.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_11109.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), fixItArray17  COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)) ;
          }
        }
        var_noUnusedWarning_11078 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_15) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::equal, enumerator_11109.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 330)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GalgasBool test_19 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_19) {
            test_19 = var_mutatingRoutine_11048.boolEnum () ;
            if (GalgasBool::boolTrue == test_19) {
              GenericArray <FixItDescription> fixItArray20 ;
              fixItArray20.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11109.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), fixItArray20  COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)) ;
            }
          }
          var_mutatingRoutine_11048 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GenericArray <FixItDescription> fixItArray21 ;
        fixItArray21.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_11109.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (GGS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), fixItArray21  COMMA_SOURCE_FILE ("declaration-svc.galgas", 336)) ;
      }
    }
    enumerator_11109.gotoNextObject () ;
  }
  GGS_routineAttributes var_attributes_11818 = GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-svc.galgas", 341)) ;
  const GGS_systemRoutineDeclarationAST temp_22 = this ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_11902 = extensionGetter_routineLLVMDictionaryForSystemRoutine (temp_22.readProperty_mMode (), var_userRoutineMangledName_10458.readProperty_string (), var_implementationRoutineMangledName_10630.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 343)) ;
  const GGS_systemRoutineDeclarationAST temp_23 = this ;
  const GGS_systemRoutineDeclarationAST temp_24 = this ;
  GGS_lstring var_routineMangledName_12050 = extensionGetter_mangledName (var_signature_10909, temp_23.readProperty_mReceiverTypeName ().readProperty_string (), temp_24.readProperty_mSystemRoutineName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 347)) ;
  {
  const GGS_systemRoutineDeclarationAST temp_25 = this ;
  const GGS_systemRoutineDeclarationAST temp_26 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_12050, temp_25.readProperty_mPublic (), var_signature_10909, var_returnTypeProxy_11008, var_routineLLVMNameDict_11902, GGS_bool (true), temp_26.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
  }
  const GGS_systemRoutineDeclarationAST temp_27 = this ;
  const GGS_systemRoutineDeclarationAST temp_28 = this ;
  const GGS_systemRoutineDeclarationAST temp_29 = this ;
  const GGS_systemRoutineDeclarationAST temp_30 = this ;
  const GGS_systemRoutineDeclarationAST temp_31 = this ;
  const GGS_systemRoutineDeclarationAST temp_32 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (temp_27.readProperty_mReceiverTypeName (), temp_28.readProperty_mMode (), GGS_bool (false), var_routineKind_10004, var_noUnusedWarning_11078.operator_not (SOURCE_FILE ("declaration-svc.galgas", 363)), GGS_bool (true), var_attributes_11818, var_implementationRoutineMangledName_10630, temp_29.readProperty_mFormalArgumentList (), var_noUnusedWarning_11078, temp_30.readProperty_mInstructionList (), temp_31.readProperty_mEndOfInstructionListLocation (), temp_32.readProperty_mReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 358)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_systemUserRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (var_userRoutineMangledName_10458, GGS_bool (false), GGS_bool (false), var_implementationRoutineMangledName_10630.readProperty_string (), var_signature_10909, var_selfTypeProxy_9678, GGS_bool (ComparisonKind::equal, var_routineKind_10004.objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas", 380)))), var_returnTypeProxy_11008, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)) ;
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
  result_result.plusAssignOperation(GGS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
  GGS_bool var_first_14445 = GGS_bool (true) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("declaration-svc.galgas", 414)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)).add_operation (GGS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
      var_first_14445 = GGS_bool (false) ;
    }
  }
  UpEnumerator_routineFormalArgumentListIR enumerator_14629 (constinArgument_inFormalArgumentListForGeneration) ;
  while (enumerator_14629.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_first_14445.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_first_14445 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)) ;
    }
    switch (enumerator_14629.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14629.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (enumerator_14629.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14629.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (function_llvmNameForLocalVariable (enumerator_14629.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14629.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (function_llvmNameForLocalVariable (enumerator_14629.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)) ;
      }
      break ;
    }
    enumerator_14629.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)) ;
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
  UpEnumerator_sectionIRlist enumerator_15555 (constinArgument_inSectionIRlist) ;
  GGS_uint index_15540 (uint32_t (0)) ;
  while (enumerator_15555.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_15555.current (HERE).readProperty_invocationFromAnyMode ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_15632 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromAnyMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)) ;
        var_s_15632 = var_s_15632.getter_stringByReplacingStringByString (GGS_string ("!USER_ROUTINE!"), enumerator_15555.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 451)) ;
        var_s_15632 = var_s_15632.getter_stringByReplacingStringByString (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15555.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 452)) ;
        var_s_15632 = var_s_15632.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_15540.getter_string (SOURCE_FILE ("declaration-svc.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 453)) ;
        ioArgument_ioAssemblerCode.plusAssignOperation(var_s_15632, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 454)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_s_16112 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromUserMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 456)) ;
      var_s_16112 = var_s_16112.getter_stringByReplacingStringByString (GGS_string ("!USER_ROUTINE!"), enumerator_15555.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)) ;
      var_s_16112 = var_s_16112.getter_stringByReplacingStringByString (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15555.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 461)) ;
      var_s_16112 = var_s_16112.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_15540.getter_string (SOURCE_FILE ("declaration-svc.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 462)) ;
      ioArgument_ioAssemblerCode.plusAssignOperation(var_s_16112, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 463)) ;
    }
    enumerator_15555.gotoNextObject () ;
    index_15540.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)) ;
  UpEnumerator_sectionIRlist enumerator_16778 (constinArgument_inSectionIRlist) ;
  GGS_uint index_16745 (uint32_t (0)) ;
  while (enumerator_16778.hasCurrentObject ()) {
    GGS_string var_s_16817 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
    var_s_16817 = var_s_16817.getter_stringByReplacingStringByString (GGS_string ("!USER_ROUTINE!"), enumerator_16778.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
    var_s_16817 = var_s_16817.getter_stringByReplacingStringByString (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_16778.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 476)) ;
    var_s_16817 = var_s_16817.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_16745.getter_string (SOURCE_FILE ("declaration-svc.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 477)) ;
    ioArgument_ioAssemblerCode.plusAssignOperation(var_s_16817, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)) ;
    enumerator_16778.gotoNextObject () ;
    index_16745.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 470)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 480)) ;
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)) ;
  ioArgument_ioAssemblerCode.plusAssignOperation(GGS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 485)) ;
  ioArgument_ioAssemblerCode.plusAssignOperation(GGS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 486)) ;
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
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)) ;
  UpEnumerator_primitiveAndServiceIRlist enumerator_18112 (constinArgument_inServiceList) ;
  GGS_uint index_18097 (uint32_t (0)) ;
  while (enumerator_18112.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_18112.current (HERE).readProperty_mHasReturnValue ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_18181 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryWithReturnValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 506)) ;
        var_s_18181 = var_s_18181.getter_stringByReplacingStringByString (GGS_string ("!ENTRY!"), enumerator_18112.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 510)) ;
        var_s_18181 = var_s_18181.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_18097.getter_string (SOURCE_FILE ("declaration-svc.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 511)) ;
        ioArgument_ioAssemblerCode.plusAssignOperation(var_s_18181, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 512)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_s_18526 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryNoReturnedValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 514)) ;
      var_s_18526 = var_s_18526.getter_stringByReplacingStringByString (GGS_string ("!ENTRY!"), enumerator_18112.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)) ;
      var_s_18526 = var_s_18526.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_18097.getter_string (SOURCE_FILE ("declaration-svc.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 519)) ;
      ioArgument_ioAssemblerCode.plusAssignOperation(var_s_18526, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 520)) ;
    }
    enumerator_18112.gotoNextObject () ;
    index_18097.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 504)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)) ;
  UpEnumerator_primitiveAndServiceIRlist enumerator_19038 (constinArgument_inServiceList) ;
  GGS_uint index_19023 (uint32_t (0)) ;
  while (enumerator_19038.hasCurrentObject ()) {
    GGS_string var_s_19069 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 528)) ;
    var_s_19069 = var_s_19069.getter_stringByReplacingStringByString (GGS_string ("!ENTRY!"), enumerator_19038.current (HERE).readProperty_mImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 532)) ;
    var_s_19069 = var_s_19069.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_19023.getter_string (SOURCE_FILE ("declaration-svc.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 533)) ;
    ioArgument_ioAssemblerCode.plusAssignOperation(var_s_19069, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 534)) ;
    enumerator_19038.gotoNextObject () ;
    index_19023.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 527)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 536)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@systemUserRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_systemUserRoutineIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mMangledImplementationName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 557)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@systemUserRoutineIR svcDeclarationGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_svcDeclarationGeneration (GGS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                GGS_sectionIRlist & ioArgument_ioSectionList,
                                                                GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_systemUserRoutineIR temp_0 = this ;
  GGS_string var_userMangledName_20632 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 567)) ;
  const GGS_systemUserRoutineIR temp_1 = this ;
  GGS_string var_implementationMangledName_20707 = temp_1.readProperty_mMangledImplementationName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 568)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_systemUserRoutineIR temp_3 = this ;
    test_2 = temp_3.readProperty_mIsSection ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioSectionList.addAssignOperation (var_userMangledName_20632, var_implementationMangledName_20707, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 570)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioPrimitiveAndServiceList.addAssignOperation (var_userMangledName_20632, var_implementationMangledName_20707, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@systemUserRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 583)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_systemUserRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 584)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 585)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_systemUserRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)) ;
  }
  const GGS_systemUserRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)) ;
  GGS_bool var_first_21571 = GGS_bool (true) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_systemUserRoutineIR temp_5 = this ;
    test_4 = temp_5.readProperty_mReceiverTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 591)).operator_not (SOURCE_FILE ("declaration-svc.galgas", 591)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_systemUserRoutineIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_6.readProperty_mReceiverTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).add_operation (GGS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)) ;
      var_first_21571 = GGS_bool (false) ;
    }
  }
  const GGS_systemUserRoutineIR temp_7 = this ;
  UpEnumerator_routineTypedSignature enumerator_21782 (temp_7.readProperty_mFormalArgumentList ()) ;
  while (enumerator_21782.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_first_21571.boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        var_first_21571 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 599)) ;
    }
    switch (enumerator_21782.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_21782.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_21782.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_21782.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)) ;
      }
      break ;
    }
    enumerator_21782.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assertInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 36)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assertInstructionAST instructionSemanticAnalysis'
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
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GGS_mode::class_func_panicMode (SOURCE_FILE ("instruction-assert.galgas", 54)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_assertInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)).add_operation (GGS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), fixItArray2  COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)) ;
    }
  }
  GGS_instructionListIR temp_3 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)) ;
  GGS_instructionListIR var_instructionGenerationList_2837 = temp_3 ;
  GGS_objectIR var_expressionValue_3252 ;
  const GGS_assertInstructionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 62)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_2837, var_expressionValue_3252, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = extensionGetter_type (var_expressionValue_3252, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 73)).readProperty_kind ().getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 73)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 73)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_assertInstructionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assert.galgas", 74)) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = extensionGetter_isStatic (var_expressionValue_3252, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_assertInstructionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("expression is static: use check directive"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 81)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_assertInstructionAST temp_12 = this ;
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_assertInstructionIR::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), var_instructionGenerationList_2837, var_expressionValue_3252, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assertInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext constinArgument_inGenerationContext,
                                                           GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assertInstructionIR temp_0 = this ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 107)) ;
  GGS_string var_labelAssertOk_4727 = GGS_string ("assert.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
  GGS_string var_labelAssertEr_4794 = GGS_string ("assert.not.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  const GGS_assertInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mExpressionValue (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertOk_4727, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertEr_4794, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelAssertEr_4794.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  const GGS_assertInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_2.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  const GGS_assertInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (temp_3.readProperty_mAssertInstructionLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelAssertOk_4727.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assertInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assertInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 126)) ;
  const GGS_assertInstructionIR temp_1 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 127))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 127)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                    GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'
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
  GGS_objectIR var_expressionResult_3112 ;
  const GGS_prefixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3112, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 57)) ;
  GGS_bool var_currentlyInSafeMode_3159 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 71)) ;
  GGS_bool var_noPanicGeneration_3209 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()) ;
  const GGS_prefixOperatorExpressionAST temp_1 = this ;
  const GGS_prefixOperatorExpressionAST temp_2 = this ;
  extensionMethod_generatePrefixOperatorCode (constinArgument_inContext.readProperty_mPrefixOperatorMap (), var_expressionResult_3112, temp_1.readProperty_mOp (), temp_2.readProperty_mOperatorLocation (), var_currentlyInSafeMode_3159, var_noPanicGeneration_3209, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_omnibus_5F_options_doNotDetectRecursiveCalls ("omnibus_options",
                                         "doNotDetectRecursiveCalls",
                                         114,
                                         "do-not-detect-recursive-calls",
                                         "Do not detect recursive calls") ;

BoolCommandLineOption gOption_omnibus_5F_options_noPanicGeneration ("omnibus_options",
                                         "noPanicGeneration",
                                         0,
                                         "no-panic-generation",
                                         "Do not generate panic code") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile ("omnibus_options",
                                         "emitControlRegisterHTMLDumpFile",
                                         0,
                                         "emit-control-register-map",
                                         "Emit control register map in an HTML file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile ("omnibus_options",
                                         "emitDeclarationDependencyGraphFile",
                                         100,
                                         "emit-declaration-dependency-graph",
                                         "Emit declaration dependency graph file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile ("omnibus_options",
                                         "emitGlobalConstantHTMLDumpFile",
                                         0,
                                         "emit-global-constant-map",
                                         "Emit global constant map in an HTML file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitRoutineInvocationGraphFile ("omnibus_options",
                                         "emitRoutineInvocationGraphFile",
                                         105,
                                         "emit-routine-invocation-graph",
                                         "Emit routine invocation graph file") ;

BoolCommandLineOption gOption_omnibus_5F_options_emitTypeMap ("omnibus_options",
                                         "emitTypeMap",
                                         116,
                                         "emit-type-map",
                                         "Emit type map in an HTML file") ;

BoolCommandLineOption gOption_omnibus_5F_options_taskStrictPriorityOrder ("omnibus_options",
                                         "taskStrictPriorityOrder",
                                         0,
                                         "task-strict-priority-order",
                                         "Ensure task strict priority order") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ ("omnibus_options",
                                         "optimizationZ",
                                         0,
                                         "Oz",
                                         "Like previous option but reduces code size further") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimizationS ("omnibus_options",
                                         "optimizationS",
                                         0,
                                         "Os",
                                         "Like previous option with extra optimizations for size") ;

BoolCommandLineOption gOption_omnibus_5F_options_listEmbeddedSampleFiles ("omnibus_options",
                                         "listEmbeddedSampleFiles",
                                         108,
                                         "list-embedded-samples",
                                         "List embedded sample files") ;

BoolCommandLineOption gOption_omnibus_5F_options_listTargets ("omnibus_options",
                                         "listTargets",
                                         76,
                                         "list-targets",
                                         "List targets") ;

BoolCommandLineOption gOption_omnibus_5F_options_noDeadCodeElimination ("omnibus_options",
                                         "noDeadCodeElimination",
                                         0,
                                         "no-deadcode-elimination",
                                         "No dead code elimination") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimization_31_ ("omnibus_options",
                                         "optimization1",
                                         0,
                                         "O1",
                                         "Optimization level 1") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimization_32_ ("omnibus_options",
                                         "optimization2",
                                         0,
                                         "O2",
                                         "Optimization level 2") ;

BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ_33_ ("omnibus_options",
                                         "optimizationZ3",
                                         0,
                                         "O3",
                                         "Optimization level 3") ;

BoolCommandLineOption gOption_omnibus_5F_options_printPasses ("omnibus_options",
                                         "printPasses",
                                         0,
                                         "print-passes",
                                         "Print pass information") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedSampleFile ("omnibus_options",
                                         "extractEmbeddedSampleFile",
                                         120,
                                         "extract-embedded-sample-code",
                                         "Extract an embedded sample file",
                                         "") ;

StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedTargets ("omnibus_options",
                                         "extractEmbeddedTargets",
                                         88,
                                         "extract-embedded-targets",
                                         "Extract embedded targets",
                                         "") ;

StringCommandLineOption gOption_omnibus_5F_options_useDirAsTargetDir ("omnibus_options",
                                         "useDirAsTargetDir",
                                         84,
                                         "use-target-dir",
                                         "Use directory as target definition directory, instead of using embedded targets",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

StringListCommandLineOption gOption_omnibus_5F_options_pathList ("omnibus_options",
                                         "pathList",
                                         0,
                                         "path",
                                         "Search pathes for source files") ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing ("omnibus_option_not_appearing_in_cocoa",
                                         "performFlashing",
                                         102,
                                         "flash-target",
                                         "After successful compilation, flash target") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


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
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 24)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_1183, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResult_1183, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 34)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_indexResult_1183.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 38)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bigint var_indexValue_1424 ;
      GGS_omnibusType joker_1401_1 ; // Joker input parameter
      var_indexResult_1183.method_extractLiteralInteger (joker_1401_1, var_indexValue_1424, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 39)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_bool test_2 = GGS_bool (ComparisonKind::lowerThan, var_indexValue_1424.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)))) ;
        if (GalgasBool::boolTrue != test_2.boolEnum ()) {
          test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_indexValue_1424.objectCompare (constinArgument_inArraySize)) ;
        }
        test_1 = test_2.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)) ;
          outArgument_outIndexIR.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        outArgument_outIndexIR = GGS_objectIR::class_func_literalInteger (constinArgument_inElementType, var_indexValue_1424  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_type (var_indexResult_1183, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          GGS_bool test_6 = constinArgument_inCheckIndexExpression ;
          if (GalgasBool::boolTrue == test_6.boolEnum ()) {
            test_6 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 46)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GGS_bool var_generatePanicInstruction_1973 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1183, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_1973, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)) ;
            }
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              GGS_bool test_8 = var_generatePanicInstruction_1973 ;
              if (GalgasBool::boolTrue == test_8.boolEnum ()) {
                test_8 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 53)) ;
              }
              test_7 = test_8.boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray9 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("index computation can generate panic and routine is not safe"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 54)) ;
              }
            }
          }
        }
        outArgument_outIndexIR = var_indexResult_1183 ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("index expression is not an integer"), fixItArray10  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 59)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_typeAliasDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mAliasTypeName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeAliasDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  const GGS_typeAliasDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mAliasTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 49)) ;
  }
  {
  const GGS_typeAliasDeclarationAST temp_2 = this ;
  const GGS_typeAliasDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mAliasTypeName (), temp_3.readProperty_mOriginalTypeName () COMMA_SOURCE_FILE ("type-alias.galgas", 50)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typeAliasDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  result_result = GGS_string ("typealias ").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeAliasDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_typeAliasDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                          GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                          GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                          GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_type_3636 ;
  const GGS_typeAliasDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mOriginalTypeName (), var_type_3636, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 74)) ;
  {
  const GGS_typeAliasDeclarationAST temp_1 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mAliasTypeName (), var_type_3636, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 76)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_procedureCallInstructionAST temp_0 = this ;
  UpEnumerator_accessInAssignmentListAST enumerator_3978 (temp_0.readProperty_mAccessList ()) ;
  while (enumerator_3978.hasCurrentObject ()) {
    switch (enumerator_3978.current_mAccess (HERE).enumValue ()) {
    case GGS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_property:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_4088_indexExpression_0 ;
        GGS_location extractedValue_4105__1 ;
        GGS_bool extractedValue_4105__2 ;
        enumerator_3978.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_4088_indexExpression_0, extractedValue_4105__1, extractedValue_4105__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4088_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 92)) ;
      }
      break ;
    }
    enumerator_3978.gotoNextObject () ;
  }
  const GGS_procedureCallInstructionAST temp_1 = this ;
  UpEnumerator_effectiveArgumentListAST enumerator_4226 (temp_1.readProperty_mArguments ()) ;
  while (enumerator_4226.hasCurrentObject ()) {
    switch (enumerator_4226.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_4330__0 ;
        GGS_lstring extractedValue_4341_typeName_1 ;
        GGS_lstring extractedValue_4350__2 ;
        enumerator_4226.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_4330__0, extractedValue_4341_typeName_1, extractedValue_4350__2) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_4341_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_4341_typeName_1 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 100)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_4457_expression_0 ;
        GGS_location extractedValue_4468__1 ;
        enumerator_4226.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4457_expression_0, extractedValue_4468__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4457_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 102)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_4226.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standAloneProcedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_standAloneProcedureCallInstructionAST temp_0 = this ;
  UpEnumerator_effectiveArgumentListAST enumerator_4907 (temp_0.readProperty_mArguments ()) ;
  while (enumerator_4907.hasCurrentObject ()) {
    switch (enumerator_4907.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_5011__0 ;
        GGS_lstring extractedValue_5022_typeName_1 ;
        GGS_lstring extractedValue_5031__2 ;
        enumerator_4907.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_5011__0, extractedValue_5022_typeName_1, extractedValue_5031__2) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, extractedValue_5022_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_5022_typeName_1 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 119)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_5138_expression_0 ;
        GGS_location extractedValue_5149__1 ;
        enumerator_4907.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_5138_expression_0, extractedValue_5149__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5138_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 121)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_4907.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standAloneProcedureCallInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
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
  const GGS_standAloneProcedureCallInstructionAST temp_0 = this ;
  const GGS_standAloneProcedureCallInstructionAST temp_1 = this ;
  GGS_lstring var_calledRoutineSignature_7026 = extensionGetter_routineSignature (temp_0.readProperty_mArguments (), temp_1.readProperty_mSandAloneRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 167)) ;
  const GGS_standAloneProcedureCallInstructionAST temp_2 = this ;
  GGS_string var_requiredFunctionMangledName_7157 = temp_2.readProperty_mSandAloneRoutineName ().readProperty_string ().add_operation (var_calledRoutineSignature_7026.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 169)) ;
  GGS_bool var_implementedPublic_7414 ;
  GGS_routineTypedSignature var_formalSignature_7441 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_7466 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_7526 ;
  GGS_bool var_implementedIsExported_7568 ;
  GGS_mode var_implementedMode_7606 ;
  const GGS_standAloneProcedureCallInstructionAST temp_3 = this ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (GGS_lstring::init_21__21_ (var_requiredFunctionMangledName_7157, temp_3.readProperty_mSandAloneRoutineName ().readProperty_location (), inCompiler COMMA_HERE), var_implementedPublic_7414, var_formalSignature_7441, var_formalReturnTypeProxy_7466, var_implementedModeDictionary_7526, var_implementedIsExported_7568, var_implementedMode_7606, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 171)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_formalReturnTypeProxy_7466.getter_isNull (SOURCE_FILE ("instruction-procedure-call.galgas", 181)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 181)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_standAloneProcedureCallInstructionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mSandAloneRoutineName ().readProperty_location (), GGS_string ("this function returns a value, cannot be used as a procedure"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 182)) ;
    }
  }
  const GGS_standAloneProcedureCallInstructionAST temp_7 = this ;
  GGS_string var_functionLLVMName_7843 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_7526, constinArgument_inMode, temp_7.readProperty_mSandAloneRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 185)) ;
  GGS_procCallEffectiveParameterListIR temp_8 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 187)) ;
  GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_8037 = temp_8 ;
  {
  const GGS_standAloneProcedureCallInstructionAST temp_9 = this ;
  const GGS_standAloneProcedureCallInstructionAST temp_10 = this ;
  routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_7441, temp_9.readProperty_mArguments (), temp_10.readProperty_mSandAloneRoutineName ().readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_8037, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 188)) ;
  }
  const GGS_standAloneProcedureCallInstructionAST temp_11 = this ;
  const GGS_standAloneProcedureCallInstructionAST temp_12 = this ;
  GGS_lstring var_routineMangledName_8600 = function_routineMangledNameFromCall (GGS_string::makeEmptyString (), temp_11.readProperty_mSandAloneRoutineName (), temp_12.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 205)) ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (GGS_objectIR::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas", 212)), var_routineMangledName_8600, var_functionLLVMName_7843, var_effectiveParameterListIR_8037, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 211)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procedureCallInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_bool var_receiverIsSelf_9707 = GGS_bool (false) ;
  GGS_omnibusType var_currentType_9749 ;
  GGS_string var_currentLLVMAddressVar_9775 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_procedureCallInstructionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_receiverIsSelf_9707 = GGS_bool (true) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas", 239)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_procedureCallInstructionAST temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GGS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 240)) ;
          var_currentType_9749.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        var_currentType_9749 = constinArgument_inSelfType ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 243)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_valuedObject var_entity_10202 ;
    const GGS_procedureCallInstructionAST temp_5 = this ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_5.readProperty_mIdentifier (), var_entity_10202, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 246)) ;
    switch (var_entity_10202.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      {
        GGS_omnibusType extractedValue_10256_type_0 ;
        var_entity_10202.getAssociatedValuesFor_task (extractedValue_10256_type_0) ;
        var_currentType_9749 = extractedValue_10256_type_0 ;
        const GGS_procedureCallInstructionAST temp_6 = this ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForGlobalVariable (temp_6.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 250)) ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      {
        GGS_omnibusType extractedValue_10395_type_0 ;
        GGS_bool extractedValue_10400_instancied_1 ;
        var_entity_10202.getAssociatedValuesFor_driver (extractedValue_10395_type_0, extractedValue_10400_instancied_1) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = extractedValue_10400_instancied_1.boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            var_currentType_9749 = extractedValue_10395_type_0 ;
            const GGS_procedureCallInstructionAST temp_8 = this ;
            var_currentLLVMAddressVar_9775 = function_llvmNameForGlobalVariable (temp_8.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          const GGS_procedureCallInstructionAST temp_9 = this ;
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mIdentifier ().readProperty_location (), GGS_string ("the driver should be instancied"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 256)) ;
          var_currentType_9749.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      {
        GGS_objectIR extractedValue_10694__0 ;
        var_entity_10202.getAssociatedValuesFor_globalConstant (extractedValue_10694__0) ;
        const GGS_procedureCallInstructionAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global constant cannot be used in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 259)) ;
        var_currentType_9749.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_10871_type_0 ;
        GGS_lstring extractedValue_10885_omnibusName_1 ;
        GGS_bool extractedValue_10897__2 ;
        var_entity_10202.getAssociatedValuesFor_localConstant (extractedValue_10871_type_0, extractedValue_10885_omnibusName_1, extractedValue_10897__2) ;
        var_currentType_9749 = extractedValue_10871_type_0 ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForLocalVariable (extractedValue_10885_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 264)) ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_11034_type_0 ;
        GGS_lstring extractedValue_11048_omnibusName_1 ;
        var_entity_10202.getAssociatedValuesFor_localVariable (extractedValue_11034_type_0, extractedValue_11048_omnibusName_1) ;
        var_currentType_9749 = extractedValue_11034_type_0 ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForLocalVariable (extractedValue_11048_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 267)) ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GGS_omnibusType extractedValue_11200_type_0 ;
        GGS_lstring extractedValue_11214_omnibusName_1 ;
        var_entity_10202.getAssociatedValuesFor_globalSyncInstance (extractedValue_11200_type_0, extractedValue_11214_omnibusName_1) ;
        var_currentType_9749 = extractedValue_11200_type_0 ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForGlobalSyncInstance (extractedValue_11214_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 270)) ;
      }
      break ;
    }
  }
  GGS_propertyGetterMap var_currentObjectPropertyMap_11387 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9749, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 274)) ;
  const GGS_procedureCallInstructionAST temp_13 = this ;
  GGS_accessInAssignmentListAST var_accessList_11536 = temp_13.readProperty_mAccessList () ;
  GGS_accessInAssignmentAST var_lastAccess_11595 ;
  {
  var_accessList_11536.setter_popLast (var_lastAccess_11595, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 277)) ;
  }
  UpEnumerator_accessInAssignmentListAST enumerator_11640 (var_accessList_11536) ;
  while (enumerator_11640.hasCurrentObject ()) {
    switch (enumerator_11640.current_mAccess (HERE).enumValue ()) {
    case GGS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_11711_propertyName_0 ;
        enumerator_11640.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_11711_propertyName_0) ;
        GGS_propertyVisibility var_visibility_11804 ;
        GGS_propertyGetterKind var_propertyAccess_11848 ;
        var_currentObjectPropertyMap_11387.method_searchKey (extractedValue_11711_propertyName_0, var_visibility_11804, var_propertyAccess_11848, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 282)) ;
        switch (var_visibility_11804.enumValue ()) {
        case GGS_propertyVisibility::Enumeration::invalid:
          break ;
        case GGS_propertyVisibility::Enumeration::enum_isPublic:
          break ;
        case GGS_propertyVisibility::Enumeration::enum_isPrivate:
          {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              test_14 = var_receiverIsSelf_9707.operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 290)).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                GenericArray <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (extractedValue_11711_propertyName_0.readProperty_location (), GGS_string ("inaccessible property, is private"), fixItArray15  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 291)) ;
              }
            }
          }
          break ;
        }
        var_receiverIsSelf_9707 = GGS_bool (false) ;
        switch (var_propertyAccess_11848.enumValue ()) {
        case GGS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GGS_objectIR extractedValue_12150__0 ;
            var_propertyAccess_11848.getAssociatedValuesFor_constantProperty (extractedValue_12150__0) ;
            GenericArray <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_11711_propertyName_0.readProperty_location (), GGS_string ("a context property cannot be used in this context"), fixItArray16  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 297)) ;
            var_currentType_9749.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GGS_omnibusType extractedValue_12333_propertyType_0 ;
            GGS_uint extractedValue_12352_propertyIndex_1 ;
            var_propertyAccess_11848.getAssociatedValuesFor_storedProperty (extractedValue_12333_propertyType_0, extractedValue_12352_propertyIndex_1) ;
            GGS_string var_llvmPropertyName_12414 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_12414, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 301)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9749, var_currentLLVMAddressVar_9775, var_llvmPropertyName_12414, extractedValue_12352_propertyIndex_1, extractedValue_11711_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 302)) ;
            }
            var_currentType_9749 = extractedValue_12333_propertyType_0 ;
            var_currentLLVMAddressVar_9775 = var_llvmPropertyName_12414 ;
            var_currentObjectPropertyMap_11387 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9749, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 311)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GGS_unifiedTypeMapEntry extractedValue_12841_propertyTypeProxy_0 ;
            GGS_routineLLVMNameDict extractedValue_12859_modeDictionary_1 ;
            var_propertyAccess_11848.getAssociatedValuesFor_computedProperty (extractedValue_12841_propertyTypeProxy_0, extractedValue_12859_modeDictionary_1) ;
            GGS_string var_routineLLVMName_12889 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_12859_modeDictionary_1, constinArgument_inMode, extractedValue_11711_propertyName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 313)) ;
            GGS_objectIR var_resultValueIR_13230 ;
            {
            extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GGS_objectIR::class_func_reference (var_currentType_9749, var_currentLLVMAddressVar_9775  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 316)), var_routineLLVMName_12889, extensionGetter_type (extractedValue_12841_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 318)), var_resultValueIR_13230, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 314)) ;
            }
            var_currentType_9749 = extensionGetter_type (var_resultValueIR_13230, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 321)) ;
            var_currentLLVMAddressVar_9775 = extensionGetter_llvmName (var_resultValueIR_13230, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 322)) ;
            var_currentObjectPropertyMap_11387 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9749, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 323)) ;
          }
          break ;
        }
      }
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_13464__0 ;
        GGS_location extractedValue_13476_endOfIndex_1 ;
        GGS_bool extractedValue_13487__2 ;
        enumerator_11640.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_13464__0, extractedValue_13476_endOfIndex_1, extractedValue_13487__2) ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (extractedValue_13476_endOfIndex_1, GGS_string ("not handled yet"), fixItArray17  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 326)) ;
        var_currentType_9749.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_11640.gotoNextObject () ;
  }
  switch (var_lastAccess_11595.enumValue ()) {
  case GGS_accessInAssignmentAST::Enumeration::invalid:
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_13651__0 ;
      GGS_location extractedValue_13663_endOfIndex_1 ;
      GGS_bool extractedValue_13674__2 ;
      var_lastAccess_11595.getAssociatedValuesFor_arrayAccess (extractedValue_13651__0, extractedValue_13663_endOfIndex_1, extractedValue_13674__2) ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (extractedValue_13663_endOfIndex_1, GGS_string ("a property is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 332)) ;
    }
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_13758_methodName_0 ;
      var_lastAccess_11595.getAssociatedValuesFor_property (extractedValue_13758_methodName_0) ;
      const GGS_procedureCallInstructionAST temp_19 = this ;
      GGS_lstring var_methodMangledName_13780 = extensionGetter_mangledName (temp_19.readProperty_mArguments (), var_currentType_9749.readProperty_omnibusTypeDescriptionName (), extractedValue_13758_methodName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 334)) ;
      GGS_bool var_implementedPublic_13994 ;
      GGS_routineTypedSignature var_formalSignature_14023 ;
      GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_14050 ;
      GGS_routineLLVMNameDict var_implementedModeDictionary_14112 ;
      GGS_bool var_implementedIsExported_14156 ;
      GGS_mode var_implementedMode_14196 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_13780, var_implementedPublic_13994, var_formalSignature_14023, var_formalReturnTypeProxy_14050, var_implementedModeDictionary_14112, var_implementedIsExported_14156, var_implementedMode_14196, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 335)) ;
      GGS_string var_functionLLVMName_14246 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_14112, constinArgument_inMode, extractedValue_13758_methodName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 345)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = var_formalReturnTypeProxy_14050.getter_isNull (SOURCE_FILE ("instruction-procedure-call.galgas", 347)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 347)).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (extractedValue_13758_methodName_0.readProperty_location (), GGS_string ("cannot be called in instruction, returns a value"), fixItArray21  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 348)) ;
        }
      }
      GGS_procCallEffectiveParameterListIR temp_22 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)) ;
      temp_22.plusPlusAssignOperation (GGS_procCallEffectiveParameterListIR_2E_element::init_21__21_ (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 352)), GGS_objectIR::class_func_reference (var_currentType_9749, var_currentLLVMAddressVar_9775  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)) ;
      GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14610 = temp_22 ;
      {
      const GGS_procedureCallInstructionAST temp_23 = this ;
      routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_14023, temp_23.readProperty_mArguments (), extractedValue_13758_methodName_0.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_14610, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 355)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (GGS_objectIR::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas", 372)), var_methodMangledName_13780, var_functionLLVMName_14246, var_effectiveParameterListIR_14610, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 371)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_externRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                      const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                      GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 175)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_externRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mReturnType ().getter_isNull (SOURCE_FILE ("declaration-extern-proc.galgas", 176)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 177)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_externRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)) ;
  }
  const GGS_externRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
  const GGS_externRoutineIR temp_4 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_7001 (temp_4.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_7001.hasCurrentObject ()) {
    switch (enumerator_7001.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7001.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (enumerator_7001.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7001.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (function_llvmNameForLocalVariable (enumerator_7001.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7001.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (function_llvmNameForLocalVariable (enumerator_7001.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)) ;
      }
      break ;
    }
    enumerator_7001.gotoNextObject () ;
    if (enumerator_7001.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (GGS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
}

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
//Overriding extension method '@compileTimeConvertToBooleanAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeConvertToBooleanAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_compileTimeConvertToBooleanAST temp_0 = this ;
  const GGS_compileTimeConvertToBooleanAST temp_1 = this ;
  const GGS_compileTimeConvertToBooleanAST temp_2 = this ;
  GGS_lstring var_nodeName_3442 = GGS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3442, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 88)) ;
  }
  {
  const GGS_compileTimeConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3442, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 89)) ;
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
//Overriding extension method '@llvmConvertToBooleanAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmConvertToBooleanAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmConvertToBooleanAST temp_0 = this ;
  const GGS_llvmConvertToBooleanAST temp_1 = this ;
  const GGS_llvmConvertToBooleanAST temp_2 = this ;
  GGS_lstring var_nodeName_4197 = GGS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4197, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 104)) ;
  }
  {
  const GGS_llvmConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4197, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 105)) ;
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
//Overriding extension method '@compileTimeConvertToBooleanAST enterInContext'
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_compileTimeConvertToBooleanAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mConverterName ().readProperty_string ().objectCompare (GGS_string ("convertToBoolean"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_compileTimeConvertToBooleanAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GGS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 129)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_5890 ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_5890, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 132)) ;
  }
  GGS_omnibusType var_receiverType_5915 = extensionGetter_type (var_receiverTypeProxy_5890, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 133)) ;
  const GGS_compileTimeConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_receiverType_5915.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 134)) ;
  GGS_ctCheckMap var_ctCheckMap_6085 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_6 = this ;
  var_ctCheckMap_6085.setter_insertKey (temp_6.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 137)) ;
  }
  const GGS_compileTimeConvertToBooleanAST temp_7 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_7.readProperty_mExpression ().ptr (), var_ctCheckMap_6085, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 138)) ;
  const GGS_compileTimeConvertToBooleanAST temp_8 = this ;
  GGS_lstring var_key_6251 = GGS_lstring::init_21__21_ (var_receiverType_5915.readProperty_omnibusTypeDescriptionName (), temp_8.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_compileTimeConvertToBooleanAST temp_9 = this ;
  const GGS_compileTimeConvertToBooleanAST temp_10 = this ;
  GGS_compileTimeImplicitConverterToBoolean var_converter_6348 = GGS_compileTimeImplicitConverterToBoolean::init_21__21_ (temp_9.readProperty_mReceiverName (), temp_10.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_6251, var_converter_6348, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 142)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmConvertToBooleanAST enterInContext'
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_llvmConvertToBooleanAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mConverterName ().readProperty_string ().objectCompare (GGS_string ("convertToBoolean"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_llvmConvertToBooleanAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GGS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 158)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_7445 ;
  {
  const GGS_llvmConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_7445, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 161)) ;
  }
  GGS_omnibusType var_receiverType_7470 = extensionGetter_type (var_receiverTypeProxy_7445, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 162)) ;
  const GGS_llvmConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_receiverType_7470.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 163)) ;
  const GGS_llvmConvertToBooleanAST temp_6 = this ;
  GGS_lstring var_key_7628 = GGS_lstring::init_21__21_ (var_receiverType_7470.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_llvmConvertToBooleanAST temp_7 = this ;
  const GGS_llvmConvertToBooleanAST temp_8 = this ;
  GGS_llvmImplicitConverterToBoolean var_converter_7725 = GGS_llvmImplicitConverterToBoolean::init_21__21__21_ (temp_7.readProperty_mReceiverName (), var_receiverType_7470, temp_8.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_7628, var_converter_7725, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 167)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeImplicitConverterToBoolean generateConvertToBooleanCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                                      const GGS_location /* constinArgument_inErrorLocation */,
                                                                                      GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                      GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                      GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                      GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_10529 ;
  GGS_omnibusType joker_10513_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_10513_1, var_receiverValue_10529, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 228)) ;
  GGS_ctMap var_varMap_10557 = GGS_ctMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeImplicitConverterToBoolean temp_0 = this ;
  var_varMap_10557.setter_insertKey (temp_0.readProperty_mReceiverName (), var_receiverValue_10529, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 230)) ;
  }
  GGS_bigint var_result_10698 ;
  const GGS_compileTimeImplicitConverterToBoolean temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mExpression ().ptr (), var_varMap_10557, var_result_10698, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 231)) ;
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_compileTime (GGS_bool (ComparisonKind::notEqual, var_result_10698.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 232))))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 232)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmImplicitConverterToBoolean generateConvertToBooleanCode'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                               const GGS_location /* constinArgument_inErrorLocation */,
                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                                               GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_llvmImplicitConverterToBoolean temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("convert-to-boolean.galgas", 253)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_assignmentGenerationVarMap var_varMap_11690 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmImplicitConverterToBoolean temp_2 = this ;
    var_varMap_11690.setter_insertKey (temp_2.readProperty_mReceiverName (), extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)) ;
    }
    GGS_string var_resultLLVMName_11786 = GGS_string ("%temp").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("convert-to-boolean.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 258)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 259)) ;
    {
    var_varMap_11690.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("convert-to-boolean.galgas", 260)), var_resultLLVMName_11786, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 260)) ;
    }
    GGS_assignmentGenerationVarMap var_typeMap_11982 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmImplicitConverterToBoolean temp_3 = this ;
    const GGS_llvmImplicitConverterToBoolean temp_4 = this ;
    var_typeMap_11982.setter_insertKey (temp_3.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)) ;
    }
    GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 265)) ;
    GGS_stringlist var_generatedInstructions_12100 = temp_5 ;
    const GGS_llvmImplicitConverterToBoolean temp_6 = this ;
    extensionMethod_generateIRCode (temp_6.readProperty_mInstructionList (), var_varMap_11690, var_typeMap_11982, var_generatedInstructions_12100, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 266)) ;
    UpEnumerator_stringlist enumerator_12268 (var_generatedInstructions_12100) ;
    while (enumerator_12268.hasCurrentObject ()) {
      {
      GGS_stringset temp_7 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 268)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_12268.current_mValue (HERE), temp_7, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 268)) ;
      }
      enumerator_12268.gotoNextObject () ;
    }
    outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (var_resultLLVMName_11786  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 270)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sourceLocationIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_sourceLocationIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                        const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                        GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_sourceLocationIR temp_1 = this ;
    test_0 = temp_1.readProperty_mSourceLocation ().getter_isNowhere (SOURCE_FILE ("intermediate-comment-source-line.galgas", 19)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";---------\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 20)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_sourceLocationIR temp_2 = this ;
    const GGS_sourceLocationIR temp_3 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- ").add_operation (temp_2.readProperty_mSourceLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_string (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (temp_3.readProperty_mSourceLocation ().getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_lastPathComponent (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@testArrayIndexIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_testArrayIndexIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                        const GGS_generationContext constinArgument_inGenerationContext,
                                                        GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_max_950 ;
  GGS_bool var_isUnsigned_968 ;
  const GGS_testArrayIndexIR temp_0 = this ;
  GGS_bigint joker_937_1 ; // Joker input parameter
  GGS_uint joker_979_1 ; // Joker input parameter
  extensionGetter_type (temp_0.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 28)).readProperty_kind ().method_extractInteger (joker_937_1, var_max_950, var_isUnsigned_968, joker_979_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 28)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isUnsigned_968.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 30)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_testToZero_1058 = GGS_string ("%test.index.zero.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 31)) ;
      GGS_string var_testToZeroOk_1131 = GGS_string ("test.index.zero.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)) ;
      GGS_string var_testToZeroFailure_1208 = GGS_string ("test.index.zero.fails.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 33)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 34)) ;
      const GGS_testArrayIndexIR temp_2 = this ;
      const GGS_testArrayIndexIR temp_3 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_testToZero_1058, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (GGS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_testToZero_1058, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (var_testToZeroOk_1131, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (var_testToZeroFailure_1208, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_testToZeroFailure_1208.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 38)) ;
      const GGS_testArrayIndexIR temp_4 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mErrorLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)) ;
      const GGS_testArrayIndexIR temp_5 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (temp_5.readProperty_mErrorLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)).add_operation (function_panicCodeForNegativeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)).add_operation (GGS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_testToZeroOk_1131.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_testArrayIndexIR temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_max_950.objectCompare (temp_7.readProperty_mSize ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_string var_testToSize_2171 = GGS_string ("%test.index.size.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)) ;
      GGS_string var_testToSizeOk_2244 = GGS_string ("test.index.size.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 49)) ;
      GGS_string var_testToSizeFailure_2321 = GGS_string ("test.index.size.fails.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 50)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_testToSize_2171, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 51)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 51)) ;
      GGS_string temp_8 ;
      const GalgasBool test_9 = var_isUnsigned_968.boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        temp_8 = GGS_string ("ult") ;
      }else if (GalgasBool::boolFalse == test_9) {
        temp_8 = GGS_string ("slt") ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(temp_8, inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 52)) ;
      const GGS_testArrayIndexIR temp_10 = this ;
      const GGS_testArrayIndexIR temp_11 = this ;
      const GGS_testArrayIndexIR temp_12 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_10.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (extensionGetter_llvmName (temp_11.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (temp_12.readProperty_mSize ().getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_testToSize_2171, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (var_testToSizeOk_2244, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (var_testToSizeFailure_2321, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_testToSizeFailure_2321.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 56)) ;
      const GGS_testArrayIndexIR temp_13 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_13.readProperty_mErrorLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)) ;
      const GGS_testArrayIndexIR temp_14 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (temp_14.readProperty_mErrorLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)).add_operation (function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)).add_operation (GGS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_testToSizeOk_2244.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)) ;
    }
  }
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 65)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@testArrayIndexIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_testArrayIndexIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                            GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 74)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_testArrayIndexIR temp_1 = this ;
      ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mErrorLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 75))  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 75)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_checkInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_checkInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 41)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@checkInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_checkInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 60)) ;
  GGS_instructionListIR var_instructionGenerationList_2836 = temp_0 ;
  GGS_objectIR var_expressionResult_3252 ;
  const GGS_checkInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 64)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_2836, var_expressionResult_3252, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 61)) ;
  GGS_implicitBooleanConversionResult var_booleanOperand_3490 ;
  const GGS_checkInstructionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_3252, temp_2.readProperty_mCheckMessage ().readProperty_location (), ioArgument_ioTemporaries, var_instructionGenerationList_2836, ioArgument_ioAllocaList, var_booleanOperand_3490, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 74)) ;
  switch (var_booleanOperand_3490.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_3561_boolValue_0 ;
      var_booleanOperand_3490.getAssociatedValuesFor_compileTime (extractedValue_3561_boolValue_0) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = extractedValue_3561_boolValue_0.operator_not (SOURCE_FILE ("directive-check.galgas", 85)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            const GGS_checkInstructionAST temp_5 = this ;
            test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mCheckMessage ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              const GGS_checkInstructionAST temp_6 = this ;
              const GGS_checkInstructionAST temp_7 = this ;
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mCheckMessage ().readProperty_location (), GGS_string ("check failure: ").add_operation (temp_7.readProperty_mCheckMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 87)), fixItArray8  COMMA_SOURCE_FILE ("directive-check.galgas", 87)) ;
            }
          }
          if (GalgasBool::boolFalse == test_4) {
            const GGS_checkInstructionAST temp_9 = this ;
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mCheckMessage ().readProperty_location (), GGS_string ("check failure"), fixItArray10  COMMA_SOURCE_FILE ("directive-check.galgas", 89)) ;
          }
        }
      }
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GGS_string extractedValue_3821__0 ;
      var_booleanOperand_3490.getAssociatedValuesFor_llvmVariable (extractedValue_3821__0) ;
      const GGS_checkInstructionAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("expression is not static: use assert instruction"), fixItArray12  COMMA_SOURCE_FILE ("directive-check.galgas", 93)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@truncateExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                              GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 50)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_truncateExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_truncateExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas", 52)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 61)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_truncateExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_truncateExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas", 63)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@truncateExpressionAST analyzeExpression'
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
  GGS_objectIR var_expressionResult_4189 ;
  const GGS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 90)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4189, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4189, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 100)) ;
  }
  const GGS_truncateExpressionAST temp_1 = this ;
  GGS_omnibusType temp_2 ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (GalgasBool::boolFalse == test_3) {
    const GGS_truncateExpressionAST temp_4 = this ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)) ;
  }
  GGS_omnibusType var_resultType_4354 = temp_2 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_resultType_4354.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 110)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 110)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_truncateExpressionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-truncate.galgas", 111)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_4189, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 112)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 112)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_truncateExpressionAST temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_bigint var_minSource_4841 ;
      GGS_bigint var_maxSource_4860 ;
      GGS_uint var_expSize_4888 ;
      GGS_bool joker_4870_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4189, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)).readProperty_kind ().method_extractInteger (var_minSource_4841, var_maxSource_4860, joker_4870_1, var_expSize_4888, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)) ;
      GGS_bigint var_minTarget_4942 ;
      GGS_bigint var_maxTarget_4961 ;
      GGS_uint var_resultSize_4997 ;
      GGS_bool joker_4971 ; // Joker input parameter
      var_resultType_4354.readProperty_kind ().method_extractInteger (var_minTarget_4942, var_maxTarget_4961, joker_4971, var_resultSize_4997, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      GGS_bool test_11 = GGS_bool (ComparisonKind::lowerOrEqual, var_minTarget_4942.objectCompare (var_minSource_4841)) ;
      if (GalgasBool::boolTrue == test_11.boolEnum ()) {
        test_11 = GGS_bool (ComparisonKind::greaterOrEqual, var_maxTarget_4961.objectCompare (var_maxSource_4860)) ;
      }
      GGS_bool var_alwaysPossible_5017 = test_11 ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = var_alwaysPossible_5017.boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_truncateExpressionAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless explicit conversion"), fixItArray14  COMMA_SOURCE_FILE ("expression-truncate.galgas", 119)) ;
        }
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::lowerThan, var_resultSize_4997.objectCompare (var_expSize_4888)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          {
          routine_getNewTempValue_3F__26__21_ (var_resultType_4354, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 122)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_truncateInstructionIR::init_21__21_ (outArgument_outResult, var_expressionResult_4189, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-truncate.galgas", 123)) ;
        }
      }
      if (GalgasBool::boolFalse == test_15) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4189, var_resultType_4354, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@truncateInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_truncateInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                             const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_truncateInstructionIR temp_0 = this ;
  GGS_string var_operandType_6335 = extensionGetter_llvmTypeName (temp_0.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 151)) ;
  const GGS_truncateInstructionIR temp_1 = this ;
  const GGS_truncateInstructionIR temp_2 = this ;
  const GGS_truncateInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GGS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (var_operandType_6335, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extendExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                            GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 50)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_extendExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_extendExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas", 52)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 61)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_extendExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_extendExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas", 63)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extendExpressionAST analyzeExpression'
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
  GGS_objectIR var_expressionResult_4064 ;
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4064, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 85)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4064, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
  }
  const GGS_extendExpressionAST temp_1 = this ;
  GGS_omnibusType temp_2 ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (GalgasBool::boolFalse == test_3) {
    const GGS_extendExpressionAST temp_4 = this ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
  }
  GGS_omnibusType var_resultType_4229 = temp_2 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_resultType_4229.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 108)).operator_not (SOURCE_FILE ("expression-extend.galgas", 108)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_extendExpressionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 109)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_4064, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 110)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 110)).operator_not (SOURCE_FILE ("expression-extend.galgas", 110)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_extendExpressionAST temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-extend.galgas", 111)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_bool var_sourceIsUnsigned_4725 ;
      GGS_uint var_sourceSize_4756 ;
      GGS_bigint joker_4707_2 ; // Joker input parameter
      GGS_bigint joker_4707_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4064, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)).readProperty_kind ().method_extractInteger (joker_4707_2, joker_4707_1, var_sourceIsUnsigned_4725, var_sourceSize_4756, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)) ;
      GGS_bool var_targetIsUnsigned_4822 ;
      GGS_uint var_targetSize_4853 ;
      GGS_bigint joker_4804_2 ; // Joker input parameter
      GGS_bigint joker_4804_1 ; // Joker input parameter
      var_resultType_4229.readProperty_kind ().method_extractInteger (joker_4804_2, joker_4804_1, var_targetIsUnsigned_4822, var_targetSize_4853, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_bool test_12 = var_sourceIsUnsigned_4725 ;
        if (GalgasBool::boolTrue == test_12.boolEnum ()) {
          test_12 = var_targetIsUnsigned_4822 ;
        }
        test_11 = test_12.boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = GGS_bool (ComparisonKind::greaterThan, var_sourceSize_4756.objectCompare (var_targetSize_4853)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_extendExpressionAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray15  COMMA_SOURCE_FILE ("expression-extend.galgas", 117)) ;
            }
          }
          if (GalgasBool::boolFalse == test_13) {
            GalgasBool test_16 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_16) {
              test_16 = GGS_bool (ComparisonKind::equal, var_sourceSize_4756.objectCompare (var_targetSize_4853)).boolEnum () ;
              if (GalgasBool::boolTrue == test_16) {
                const GGS_extendExpressionAST temp_17 = this ;
                GenericArray <FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GGS_string ("same size: useless extend operation"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 119)) ;
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        GalgasBool test_19 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_bool test_20 = var_sourceIsUnsigned_4725 ;
          if (GalgasBool::boolTrue == test_20.boolEnum ()) {
            test_20 = var_targetIsUnsigned_4822.operator_not (SOURCE_FILE ("expression-extend.galgas", 121)) ;
          }
          test_19 = test_20.boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GalgasBool test_21 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_21) {
              test_21 = GGS_bool (ComparisonKind::greaterOrEqual, var_sourceSize_4756.objectCompare (var_targetSize_4853)).boolEnum () ;
              if (GalgasBool::boolTrue == test_21) {
                const GGS_extendExpressionAST temp_22 = this ;
                GenericArray <FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (temp_22.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray23  COMMA_SOURCE_FILE ("expression-extend.galgas", 123)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_19) {
          GalgasBool test_24 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_24) {
            GGS_bool test_25 = var_sourceIsUnsigned_4725.operator_not (SOURCE_FILE ("expression-extend.galgas", 125)) ;
            if (GalgasBool::boolTrue == test_25.boolEnum ()) {
              test_25 = var_targetIsUnsigned_4822 ;
            }
            test_24 = test_25.boolEnum () ;
            if (GalgasBool::boolTrue == test_24) {
              const GGS_extendExpressionAST temp_26 = this ;
              GenericArray <FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (temp_26.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray27  COMMA_SOURCE_FILE ("expression-extend.galgas", 126)) ;
            }
          }
          if (GalgasBool::boolFalse == test_24) {
            GalgasBool test_28 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_28) {
              test_28 = GGS_bool (ComparisonKind::greaterThan, var_sourceSize_4756.objectCompare (var_targetSize_4853)).boolEnum () ;
              if (GalgasBool::boolTrue == test_28) {
                const GGS_extendExpressionAST temp_29 = this ;
                GenericArray <FixItDescription> fixItArray30 ;
                inCompiler->emitSemanticError (temp_29.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray30  COMMA_SOURCE_FILE ("expression-extend.galgas", 129)) ;
              }
            }
            if (GalgasBool::boolFalse == test_28) {
              GalgasBool test_31 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_31) {
                test_31 = GGS_bool (ComparisonKind::equal, var_sourceSize_4756.objectCompare (var_targetSize_4853)).boolEnum () ;
                if (GalgasBool::boolTrue == test_31) {
                  const GGS_extendExpressionAST temp_32 = this ;
                  GenericArray <FixItDescription> fixItArray33 ;
                  inCompiler->emitSemanticError (temp_32.readProperty_mTypeName ().readProperty_location (), GGS_string ("same size: useless extend operation"), fixItArray33  COMMA_SOURCE_FILE ("expression-extend.galgas", 131)) ;
                }
              }
            }
          }
        }
      }
      {
      routine_getNewTempValue_3F__26__21_ (var_resultType_4229, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4064, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 135)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@truncIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_truncIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                               GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_truncIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)).add_operation (GGS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)) ;
  const GGS_truncIR temp_1 = this ;
  const GGS_truncIR temp_2 = this ;
  const GGS_truncIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (temp_1.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)) ;
}

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
//Overriding extension method '@globalConstantDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_globalConstantDeclarationAST temp_0 = this ;
  const GGS_globalConstantDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mConstantName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 67)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_globalConstantDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConstantTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
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
//Overriding extension method '@globalConstantDeclarationAST enterInContext'
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
  GGS_bool var_displayValue_4405 = GGS_bool (false) ;
  const GGS_globalConstantDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4433 (temp_0.readProperty_mAttributeList ()) ;
  while (enumerator_4433.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_4433.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("display"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4433.current_mValue (HERE).readProperty_location (), GGS_string ("attribute should be @display"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 100)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_displayValue_4405.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4433.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 102)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_displayValue_4405 = GGS_bool (true) ;
      }
    }
    enumerator_4433.gotoNextObject () ;
  }
  GGS_objectIR var_expressionResult_4983 ;
  {
  const GGS_globalConstantDeclarationAST temp_5 = this ;
  const GGS_globalConstantDeclarationAST temp_6 = this ;
  const GGS_globalConstantDeclarationAST temp_7 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_5.readProperty_mSourceExpression (), temp_6.readProperty_mConstantName ().readProperty_location (), temp_7.readProperty_mConstantTypeName (), var_expressionResult_4983, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }
  {
  const GGS_globalConstantDeclarationAST temp_8 = this ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_8.readProperty_mConstantName (), var_expressionResult_4983, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 117)) ;
  }
  {
  const GGS_globalConstantDeclarationAST temp_9 = this ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_9.readProperty_mConstantName (), var_expressionResult_4983, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 118)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_displayValue_4405.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      {
      const GGS_globalConstantDeclarationAST temp_11 = this ;
      routine_print_3F_ (GGS_string ("Global constant '").add_operation (temp_11.readProperty_mConstantName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GGS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (extensionGetter_llvmValue (var_expressionResult_4983, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)) ;
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
  GGS_string var_typeDumpFilePath_5917 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 134)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 136)) ;
      GGS_stringset var_firstLetterSet_6074 = temp_1 ;
      UpEnumerator_globalConstantMap enumerator_6109 (constinArgument_inGlobalConstantMap) ;
      while (enumerator_6109.hasCurrentObject ()) {
        var_firstLetterSet_6074.plusPlusAssignOperation (enumerator_6109.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 138))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)) ;
        enumerator_6109.gotoNextObject () ;
      }
      GGS_string var_tableOfTypeString_6229 = GGS_string::makeEmptyString () ;
      GGS_char var_currentFirstLetter_6266 = GGS_char (utf32 (32)) ;
      UpEnumerator_globalConstantMap enumerator_6310 (constinArgument_inGlobalConstantMap) ;
      while (enumerator_6310.hasCurrentObject ()) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, var_currentFirstLetter_6266.objectCompare (enumerator_6310.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_currentFirstLetter_6266 = enumerator_6310.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)) ;
            var_tableOfTypeString_6229.plusAssignOperation(GGS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6266.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 145)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GGS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (var_currentFirstLetter_6266.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GGS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)) ;
          }
        }
        var_tableOfTypeString_6229.plusAssignOperation(function_linkForGlobalConstant (enumerator_6310.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)).add_operation (GGS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)) ;
        enumerator_6310.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_6717 = GGS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 150)), constinArgument_inGlobalConstantMap, var_firstLetterSet_6074, var_tableOfTypeString_6229 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 149))) ;
      GGS_bool joker_6974 ; // Joker input parameter
      var_typeDumpString_6717.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_5917, joker_6974, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 155)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_5917, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 157)) ;
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
    UpEnumerator_stringset enumerator_1007 (in_FIRST_5F_LETTER_5F_SET) ;
    while (enumerator_1007.hasCurrentObject ()) {
      result.appendString ("<a class=\"header_link\" href=\"#") ;
      result.appendString (enumerator_1007.current_key (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1007.current_key (HERE).stringValue ()) ;
      result.appendString ("</a>") ;
      enumerator_1007.gotoNextObject () ;
      if (enumerator_1007.hasCurrentObject ()) {
        result.appendString (" - ") ;
      }
      index_1007_.increment () ;
    }
  }
  result.appendString ("</p>\n<p>") ;
  result.appendString (in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue ()) ;
  result.appendString ("\n</p>\n<table class=\"result\">\n<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_title\">Value</td></tr>\n") ;
  GGS_uint index_1392_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    UpEnumerator_globalConstantMap enumerator_1392 (in_GLOBAL_5F_CONSTANT_5F_MAP) ;
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
      enumerator_1392.gotoNextObject () ;
      index_1392_.increment () ;
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

static const GALGAS_TypeDescriptor * functionArgs_linkForGlobalConstant [2] = {
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
//Once function 'configurationNodeNameForPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_configurationNodeNameForPrecedenceGraph (Compiler *
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("config") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = false ;
static GGS_string gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;

//--------------------------------------------------------------------------------------------------

GGS_string function_configurationNodeNameForPrecedenceGraph (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph) {
    gOnceFunctionResult_configurationNodeNameForPrecedenceGraph = onceFunction_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_configurationNodeNameForPrecedenceGraph = true ;
  }
  return gOnceFunctionResult_configurationNodeNameForPrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph (void) {
  gOnceFunctionResult_configurationNodeNameForPrecedenceGraph.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_configurationNodeNameForPrecedenceGraph (nullptr,
                                                                                   releaseOnceFunctionResult_configurationNodeNameForPrecedenceGraph) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_configurationNodeNameForPrecedenceGraph [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_configurationNodeNameForPrecedenceGraph (Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GGS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_configurationNodeNameForPrecedenceGraph ("configurationNodeNameForPrecedenceGraph",
                                                                                         functionWithGenericHeader_configurationNodeNameForPrecedenceGraph,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         0,
                                                                                         functionArgs_configurationNodeNameForPrecedenceGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'isrSlotTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_isrSlotTypeName (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ISRSlot") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_isrSlotTypeName = false ;
static GGS_string gOnceFunctionResult_isrSlotTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_isrSlotTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isrSlotTypeName) {
    gOnceFunctionResult_isrSlotTypeName = onceFunction_isrSlotTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isrSlotTypeName = true ;
  }
  return gOnceFunctionResult_isrSlotTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_isrSlotTypeName (void) {
  gOnceFunctionResult_isrSlotTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_isrSlotTypeName (nullptr,
                                                           releaseOnceFunctionResult_isrSlotTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_isrSlotTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_isrSlotTypeName (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_isrSlotTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_isrSlotTypeName ("isrSlotTypeName",
                                                                 functionWithGenericHeader_isrSlotTypeName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_isrSlotTypeName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@configurationDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_configurationDeclarationAST temp_0 = this ;
  GGS_lstring var_rootNode_11474 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 312)), temp_0.readProperty_mPanicCodeTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_configurationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_11474, temp_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 313)) ;
  }
  {
  const GGS_configurationDeclarationAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11474, temp_2.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas", 314)) ;
  }
  {
  const GGS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11474, temp_3.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas", 315)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11474, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 316)).getter_nowhere (SOURCE_FILE ("configuration.galgas", 316)) COMMA_SOURCE_FILE ("configuration.galgas", 316)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@configurationDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_configurationDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_configurationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPanicCodeTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@configurationDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_configurationDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 328)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@configurationDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_configurationDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_configurationDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTargetParameters ().readProperty_mConfigurationLocation (), GGS_string ("duplicate configuration"), fixItArray2  COMMA_SOURCE_FILE ("configuration.galgas", 348)) ;
    }
  }
  const GGS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioContext.mProperty_mTargetParameters = temp_3.readProperty_mTargetParameters () ;
  GGS_omnibusType var_panicCodeType_13694 ;
  const GGS_configurationDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mPanicCodeTypeName (), var_panicCodeType_13694, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 352)) ;
  ioArgument_ioContext.mProperty_mPanicCodeType = var_panicCodeType_13694 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas", 357)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_bool var_unsigned_13875 ;
      GGS_bigint joker_13857_2 ; // Joker input parameter
      GGS_bigint joker_13857_1 ; // Joker input parameter
      GGS_uint joker_13884_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().method_extractInteger (joker_13857_2, joker_13857_1, var_unsigned_13875, joker_13884_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 358)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unsigned_13875.operator_not (SOURCE_FILE ("configuration.galgas", 359)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_configurationDeclarationAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mPanicCodeTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray8  COMMA_SOURCE_FILE ("configuration.galgas", 360)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_configurationDeclarationAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mPanicCodeTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray10  COMMA_SOURCE_FILE ("configuration.galgas", 363)) ;
  }
  GGS_omnibusType var_panicLineType_14206 ;
  const GGS_configurationDeclarationAST temp_11 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_11.readProperty_mPanicLineTypeName (), var_panicLineType_14206, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 366)) ;
  ioArgument_ioContext.mProperty_mPanicLineType = var_panicLineType_14206 ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas", 371)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_bool var_unsigned_14387 ;
      GGS_bigint joker_14369_2 ; // Joker input parameter
      GGS_bigint joker_14369_1 ; // Joker input parameter
      GGS_uint joker_14396_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().method_extractInteger (joker_14369_2, joker_14369_1, var_unsigned_14387, joker_14396_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 372)) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = var_unsigned_14387.operator_not (SOURCE_FILE ("configuration.galgas", 373)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_configurationDeclarationAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mPanicLineTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray15  COMMA_SOURCE_FILE ("configuration.galgas", 374)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_12) {
    const GGS_configurationDeclarationAST temp_16 = this ;
    GenericArray <FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mPanicLineTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray17  COMMA_SOURCE_FILE ("configuration.galgas", 377)) ;
  }
  GGS_stringset temp_18 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 380)) ;
  GGS_stringset var_panicCodeSet_14690 = temp_18 ;
  const GGS_configurationDeclarationAST temp_19 = this ;
  UpEnumerator_interruptionConfigurationList enumerator_14721 (temp_19.readProperty_mInterruptionConfigurationList ()) ;
  while (enumerator_14721.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_14721.current_mInterruptName (HERE), enumerator_14721.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 382)) ;
    }
    switch (enumerator_14721.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GGS_interruptionPanicCode::Enumeration::invalid:
      break ;
    case GGS_interruptionPanicCode::Enumeration::enum_noCode:
      break ;
    case GGS_interruptionPanicCode::Enumeration::enum_code:
      {
        GGS_lbigint extractedValue_14896_value_0 ;
        enumerator_14721.current_mInterruptionPanicCode (HERE).getAssociatedValuesFor_code (extractedValue_14896_value_0) ;
        GGS_string var_s_14915 = extractedValue_14896_value_0.readProperty_bigint ().getter_string (SOURCE_FILE ("configuration.galgas", 386)) ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_panicCodeSet_14690.getter_hasKey (var_s_14915 COMMA_SOURCE_FILE ("configuration.galgas", 387)).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_14896_value_0.readProperty_location (), GGS_string ("duplicate interrupt code"), fixItArray21  COMMA_SOURCE_FILE ("configuration.galgas", 388)) ;
          }
        }
        var_panicCodeSet_14690.plusPlusAssignOperation (var_s_14915  COMMA_SOURCE_FILE ("configuration.galgas", 390)) ;
      }
      break ;
    }
    enumerator_14721.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctInfixExpressionAST checkCompileTimeExpression'
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
//Overriding extension method '@ctPrefixExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap constinArgument_inMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctPrefixExpressionAST temp_0 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 425)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctTrueExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap /* constinArgument_inMap */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctFalseExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap /* constinArgument_inMap */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctIntExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap /* constinArgument_inMap */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctIdentifierExpressionAST checkCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::method_checkCompileTimeExpression (const GGS_ctCheckMap constinArgument_inMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctIdentifierExpressionAST temp_0 = this ;
  constinArgument_inMap.method_searchKey (temp_0.readProperty_mIdentifier (), inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 446)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctInfixExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctInfixExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap constinArgument_inMap,
                                                                     GGS_bigint & outArgument_outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_left_15953 ;
  const GGS_ctInfixExpressionAST temp_0 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inMap, var_left_15953, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 471)) ;
  GGS_bigint var_right_16033 ;
  const GGS_ctInfixExpressionAST temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inMap, var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 472)) ;
  const GGS_ctInfixExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mInfixOperator ().enumValue ()) {
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_equal:
    {
      GGS_bigint temp_3 ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, var_left_15953.objectCompare (var_right_16033)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        temp_3 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 474)) ;
      }else if (GalgasBool::boolFalse == test_4) {
        temp_3 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 474)) ;
      }
      outArgument_outValue = temp_3 ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_lessThan:
    {
      GGS_bigint temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::lowerThan, var_left_15953.objectCompare (var_right_16033)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 475)) ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 475)) ;
      }
      outArgument_outValue = temp_5 ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseAndOp:
    {
      outArgument_outValue = var_left_15953.operator_and (var_right_16033 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 476)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseOrOp:
    {
      outArgument_outValue = var_left_15953.operator_or (var_right_16033 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 477)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_bitWiseXorOp:
    {
      outArgument_outValue = var_left_15953.operator_xor (var_right_16033 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 478)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_addOp:
    {
      outArgument_outValue = var_left_15953.add_operation (var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 479)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_subOp:
    {
      outArgument_outValue = var_left_15953.substract_operation (var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 480)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_mulOp:
    {
      outArgument_outValue = var_left_15953.multiply_operation (var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 481)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divOp:
    {
      outArgument_outValue = var_left_15953.divide_operation (var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 482)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_divNoOvf:
    {
      outArgument_outValue = var_left_15953.divide_operation (var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 483)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_modOp:
    {
      outArgument_outValue = var_left_15953.modulo_operation (var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 484)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_moduloNoOvf:
    {
      outArgument_outValue = var_left_15953.modulo_operation (var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 485)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_leftShift:
    {
      outArgument_outValue = var_left_15953.left_shift_operation (var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 486)) ;
    }
    break ;
  case GGS_compileTimeInfixOperatorEnumeration::Enumeration::enum_rightShift:
    {
      outArgument_outValue = var_left_15953.right_shift_operation (var_right_16033, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 487)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctPrefixExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctPrefixExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap constinArgument_inMap,
                                                                      GGS_bigint & outArgument_outValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_exp_17062 ;
  const GGS_ctPrefixExpressionAST temp_0 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inMap, var_exp_17062, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 497)) ;
  const GGS_ctPrefixExpressionAST temp_1 = this ;
  switch (temp_1.readProperty_mPrefixOperator ().enumValue ()) {
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      outArgument_outValue = var_exp_17062.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 499)) ;
    }
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      GGS_bigint temp_2 ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, var_exp_17062.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        temp_2 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)) ;
      }else if (GalgasBool::boolFalse == test_3) {
        temp_2 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)) ;
      }
      outArgument_outValue = temp_2 ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctTrueExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctTrueExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap /* constinArgument_inMap */,
                                                                    GGS_bigint & outArgument_outValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 510)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctFalseExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctFalseExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap /* constinArgument_inMap */,
                                                                     GGS_bigint & outArgument_outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 519)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctIntExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctIntExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap /* constinArgument_inMap */,
                                                                   GGS_bigint & outArgument_outValue,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctIntExpressionAST temp_0 = this ;
  outArgument_outValue = temp_0.readProperty_mValue ().readProperty_bigint () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ctIdentifierExpressionAST computeCompileTimeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ctIdentifierExpressionAST::method_computeCompileTimeExpression (const GGS_ctMap constinArgument_inMap,
                                                                          GGS_bigint & outArgument_outValue,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ctIdentifierExpressionAST temp_0 = this ;
  constinArgument_inMap.method_searchKey (temp_0.readProperty_mIdentifier (), outArgument_outValue, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 537)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nopIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_nopIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                             const GGS_generationContext constinArgument_inGenerationContext,
                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inGenerationContext.readProperty_mNopInstructionInLLVM (), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)).add_operation (GGS_string (" ; NOP instruction in LLVM\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimeBoolAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compiletimeBoolAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compiletimeBoolAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_1038 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 21)) ;
  {
  const GGS_compiletimeBoolAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1038, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 22)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimeBoolAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compiletimeBoolAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 28)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'ctBoolTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_ctBoolTypeName (Compiler *
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ctBool") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_ctBoolTypeName = false ;
static GGS_string gOnceFunctionResult_ctBoolTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_ctBoolTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctBoolTypeName) {
    gOnceFunctionResult_ctBoolTypeName = onceFunction_ctBoolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctBoolTypeName = true ;
  }
  return gOnceFunctionResult_ctBoolTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_ctBoolTypeName (void) {
  gOnceFunctionResult_ctBoolTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_ctBoolTypeName (nullptr,
                                                          releaseOnceFunctionResult_ctBoolTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_ctBoolTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_ctBoolTypeName (Compiler * inCompiler,
                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  return function_ctBoolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_ctBoolTypeName ("ctBoolTypeName",
                                                                functionWithGenericHeader_ctBoolTypeName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                0,
                                                                functionArgs_ctBoolTypeName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compiletimeBoolAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                     GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                     GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                     GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                     GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_ctBoolTypeName_2463 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 51)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 51)) ;
  GGS_omnibusType var_ctBoolType_2514 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 52)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctBoolTypeName_2463, var_ctBoolType_2514, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 54)) ;
  }
  GGS_lstring var_key_2678 = function_prefixOperatorMapKey (var_ctBoolType_2514, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 56)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2678, var_ctBoolType_2514, var_ctBoolType_2514, GGS_compileTimeBoolNotOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 57)) ;
  }
  var_key_2678 = function_infixOperatorMapKey (var_ctBoolType_2514, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 59)), var_ctBoolType_2514, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 59)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2678, var_ctBoolType_2514, GGS_compileTimeBoolOrOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 60)) ;
  }
  var_key_2678 = function_infixOperatorMapKey (var_ctBoolType_2514, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 62)), var_ctBoolType_2514, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 62)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2678, var_ctBoolType_2514, GGS_compileTimeBoolXorOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 63)) ;
  }
  var_key_2678 = function_infixOperatorMapKey (var_ctBoolType_2514, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 65)), var_ctBoolType_2514, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2678, var_ctBoolType_2514, GGS_compileTimeBoolEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 66)) ;
  }
  var_key_2678 = GGS_lstring::init_21__21_ (var_ctBoolType_2514.readProperty_omnibusTypeDescriptionName (), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas", 68)), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2678, GGS_compileTimeBoolImplicitConverterToBoolean::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 69)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolImplicitConverterToBoolean generateConvertToBooleanCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                                          const GGS_location /* constinArgument_inErrorLocation */,
                                                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_4546 ;
  GGS_omnibusType joker_4530_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_4530_1, var_receiverValue_4546, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 89)) ;
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_compileTime (GGS_bool (ComparisonKind::notEqual, var_receiverValue_4546.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90))))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 90)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolNotOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolNotOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                           const GGS_location /* constinArgument_inOperatorLocation */,
                                                           const GGS_omnibusType constinArgument_inResultType,
                                                           const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                           const GGS_bool /* constinArgument_inSafeMode */,
                                                           GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                           GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                           GGS_objectIR & outArgument_outResultValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_5505 ;
  GGS_omnibusType joker_5489_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_5489_1, var_receiverValue_5505, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 112)) ;
  GGS_bigint temp_0 ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, var_receiverValue_5505.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
  }
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, temp_0  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 113)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolEqualOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolEqualOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location /* constinArgument_inOperatorLocation */,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_6484 ;
  GGS_omnibusType joker_6468_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_6468_1, var_leftValue_6484, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 135)) ;
  GGS_bigint var_rightValue_6551 ;
  GGS_omnibusType joker_6535_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_6535_1, var_rightValue_6551, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 136)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::equal, var_leftValue_6484.objectCompare (var_rightValue_6551)).getter_bigint (SOURCE_FILE ("compile-time-type-bool.galgas", 137))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 137)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolXorOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolXorOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                           const GGS_location /* constinArgument_inOperatorLocation */,
                                                           const GGS_objectIR constinArgument_inRightOperand,
                                                           const GGS_omnibusType constinArgument_inResultType,
                                                           GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                           GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                           GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                           GGS_objectIR & outArgument_outResultValue,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_7374 ;
  GGS_omnibusType joker_7358_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_7358_1, var_leftValue_7374, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 157)) ;
  GGS_bigint var_rightValue_7441 ;
  GGS_omnibusType joker_7425_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_7425_1, var_rightValue_7441, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 158)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_7374.operator_xor (var_rightValue_7441 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 159))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 159)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeBoolOrOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeBoolOrOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                          const GGS_location /* constinArgument_inOperatorLocation */,
                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GGS_objectIR & outArgument_outResultValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_8261 ;
  GGS_omnibusType joker_8245_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_8245_1, var_leftValue_8261, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 179)) ;
  GGS_bigint var_rightValue_8328 ;
  GGS_omnibusType joker_8312_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_8312_1, var_rightValue_8328, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 180)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_8261.operator_or (var_rightValue_8328 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 181))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas", 181)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolToUIntIR llvmInstructionCode'
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
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mUIntResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 23)).add_operation (GGS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 23)).add_operation (extensionGetter_llvmTypeName (temp_1.readProperty_mBoolSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mBoolSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mUIntResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 25)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 23)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@getArrayElementReferenceIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_getArrayElementReferenceIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getArrayElementReferenceIR temp_0 = this ;
  GGS_string var_llvmType_1103 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_0.readProperty_mArray (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 30)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 30)) ;
  const GGS_getArrayElementReferenceIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 31)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 31)) ;
  const GGS_getArrayElementReferenceIR temp_2 = this ;
  const GGS_getArrayElementReferenceIR temp_3 = this ;
  const GGS_getArrayElementReferenceIR temp_4 = this ;
  const GGS_getArrayElementReferenceIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_llvmType_1103.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (var_llvmType_1103, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mArray (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (GGS_string (", i32 0, "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (extensionGetter_llvmName (temp_4.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 33)).add_operation (GGS_string (" ; Element of index "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 33)).add_operation (extensionGetter_llvmName (temp_5.readProperty_mIndex (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 34)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerSliceExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                  GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerSliceExpressionAST temp_0 = this ;
  UpEnumerator_integerSliceFieldListAST enumerator_2450 (temp_0.readProperty_mSliceValues ()) ;
  while (enumerator_2450.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2450.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 58)) ;
    enumerator_2450.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerSliceExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_integerSliceExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 69)) ;
  }
  const GGS_integerSliceExpressionAST temp_1 = this ;
  UpEnumerator_integerSliceFieldListAST enumerator_3083 (temp_1.readProperty_mSliceValues ()) ;
  while (enumerator_3083.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_3083.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 71)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = enumerator_3083.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 72)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_uint var_sliceWidth_3260 = enumerator_3083.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 73)) ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_sliceWidth_3260.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3083.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 75)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          {
          extensionSetter_noteUINTType (ioArgument_ioGraph, var_sliceWidth_3260, enumerator_3083.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 77)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, enumerator_3083.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)).getter_nowhere (SOURCE_FILE ("expression-integer-slice.galgas", 80)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)) ;
          }
        }
      }
    }
    enumerator_3083.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerSliceExpressionAST analyzeExpression'
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
  GGS_omnibusType var_resultType_4553 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_resultType_4553.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-integer-slice.galgas", 105)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 105)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_integerSliceExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_bool var_unsigned_4852 ;
    GGS_uint var_bitCount_4875 ;
    GGS_bigint joker_4834_2 ; // Joker input parameter
    GGS_bigint joker_4834_1 ; // Joker input parameter
    var_resultType_4553.readProperty_kind ().method_extractInteger (joker_4834_2, joker_4834_1, var_unsigned_4852, var_bitCount_4875, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 108)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_unsigned_4852.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 109)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_integerSliceExpressionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 110)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_uint var_leftShiftAmount_5092 = var_bitCount_4875 ;
      GGS_bigint var_accumulatedFieldStaticValues_5137 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 114)) ;
      GGS_operandIRList temp_7 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 115)) ;
      GGS_operandIRList var_operandList_5195 = temp_7 ;
      const GGS_integerSliceExpressionAST temp_8 = this ;
      UpEnumerator_integerSliceFieldListAST enumerator_5249 (temp_8.readProperty_mSliceValues ()) ;
      while (enumerator_5249.hasCurrentObject ()) {
        GGS_uint var_sliceWidth_5311 ;
        GGS_lstring var_expressionTypeName_5343 ;
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_5249.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray10  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 120)) ;
            var_operandList_5195.drop () ; // Release error dropped variable
            var_sliceWidth_5311.drop () ; // Release error dropped variable
            var_expressionTypeName_5343.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_5249.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              var_sliceWidth_5311 = GGS_uint (uint32_t (1U)) ;
              const GGS_integerSliceExpressionAST temp_12 = this ;
              var_expressionTypeName_5343 = GGS_lstring::init_21__21_ (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)), temp_12.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = enumerator_5249.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 124)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 124)).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GenericArray <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticError (enumerator_5249.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the selector should be an unsigned integer value"), fixItArray14  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 125)) ;
                var_operandList_5195.drop () ; // Release error dropped variable
                var_sliceWidth_5311.drop () ; // Release error dropped variable
                var_expressionTypeName_5343.drop () ; // Release error dropped variable
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              var_sliceWidth_5311 = enumerator_5249.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 127)) ;
              const GGS_integerSliceExpressionAST temp_15 = this ;
              var_expressionTypeName_5343 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_sliceWidth_5311.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)), temp_15.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
              GalgasBool test_16 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_16) {
                test_16 = GGS_bool (ComparisonKind::equal, var_sliceWidth_5311.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_16) {
                  GenericArray <FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_5249.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray17  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 130)) ;
                }
              }
            }
          }
        }
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::greaterOrEqual, var_leftShiftAmount_5092.objectCompare (var_sliceWidth_5311)).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            var_leftShiftAmount_5092 = var_leftShiftAmount_5092.substract_operation (var_sliceWidth_5311, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 134)) ;
          }
        }
        if (GalgasBool::boolFalse == test_18) {
          GGS_uint var_specifiedBitCount_6279 = var_bitCount_4875.add_operation (var_sliceWidth_5311, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)).substract_operation (var_leftShiftAmount_5092, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)) ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (enumerator_5249.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6279.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (GGS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (var_bitCount_4875.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)), fixItArray19  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)) ;
          var_leftShiftAmount_5092 = GGS_uint (uint32_t (0U)) ;
        }
        GGS_omnibusType var_expressionTargetType_6532 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_expressionTypeName_5343, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)) ;
        GGS_objectIR var_expressionResult_7069 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_5249.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_expressionTargetType_6532, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 142)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 155)) ;
        }
        switch (extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().enumValue ()) {
        case GGS_typeKind::Enumeration::invalid:
          break ;
        case GGS_typeKind::Enumeration::enum_staticArrayType:
          {
            GGS_omnibusType extractedValue_7334__0 ;
            GGS_bigint extractedValue_7336__1 ;
            extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_7334__0, extractedValue_7336__1) ;
            GenericArray <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 162)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_dynamicArrayType:
          {
            GGS_omnibusType extractedValue_7458__0 ;
            extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_7458__0) ;
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 164)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_opaque:
          {
            GGS_bigint extractedValue_7570__0 ;
            extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_7570__0) ;
            GenericArray <FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 166)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_enumeration:
          {
            GGS_uint extractedValue_7687__0 ;
            extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_7687__0) ;
            GenericArray <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 168)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_structure:
          {
            GGS_propertyList extractedValue_7802__0 ;
            extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_7802__0) ;
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 170)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_syncTool:
          {
            GenericArray <FixItDescription> fixItArray25 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 172)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_boolean:
          {
            GalgasBool test_26 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_26) {
              test_26 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 174)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_expressionTargetType_6532.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_26) {
                GenericArray <FixItDescription> fixItArray27 ;
                inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an $").add_operation (var_expressionTargetType_6532.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GGS_string (" expression is required, found an $"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GGS_string (" expression"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)), fixItArray27  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 175)) ;
              }
            }
            GalgasBool test_28 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_28) {
              test_28 = var_expressionResult_7069.getter_isLiteralInteger (SOURCE_FILE ("expression-integer-slice.galgas", 179)).boolEnum () ;
              if (GalgasBool::boolTrue == test_28) {
                GGS_bigint var_value_8518 ;
                GGS_omnibusType joker_8495_1 ; // Joker input parameter
                var_expressionResult_7069.method_extractLiteralInteger (joker_8495_1, var_value_8518, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 180)) ;
                var_accumulatedFieldStaticValues_5137 = var_accumulatedFieldStaticValues_5137.operator_or (var_value_8518.left_shift_operation (var_leftShiftAmount_5092, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) ;
              }
            }
            if (GalgasBool::boolFalse == test_28) {
              GGS_objectIR var_extendedResult_8769 ;
              {
              routine_getNewTempValue_3F__26__21_ (var_resultType_4553, ioArgument_ioTemporaries, var_extendedResult_8769, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 184)) ;
              }
              {
              extensionSetter_appendBoolToUInt (ioArgument_ioInstructionGenerationList, var_extendedResult_8769, var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 185)) ;
              }
              GGS_objectIR var_shiftedResult_8977 ;
              {
              routine_getNewTempValue_3F__26__21_ (var_resultType_4553, ioArgument_ioTemporaries, var_shiftedResult_8977, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 187)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_8977, var_extendedResult_8769, var_leftShiftAmount_5092, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 188)) ;
              }
              var_operandList_5195.addAssignOperation (var_shiftedResult_8977  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 190)) ;
            }
          }
          break ;
        case GGS_typeKind::Enumeration::enum_void:
          {
            GenericArray <FixItDescription> fixItArray29 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray29  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 193)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_literalString:
          {
            GenericArray <FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray30  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 195)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_function:
          {
            GGS_mode extractedValue_9430__0 ;
            GGS_routineTypedSignature extractedValue_9430__1 ;
            GGS_unifiedTypeMapEntry extractedValue_9430__2 ;
            extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_function (extractedValue_9430__0, extractedValue_9430__1, extractedValue_9430__2) ;
            GenericArray <FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray31  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 197)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_generic:
          {
            GGS_genericFormalParameterList extractedValue_9544__0 ;
            GGS_ctExpressionAST extractedValue_9544__1 ;
            GGS_llvmStringDefinition extractedValue_9544__2 ;
            extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_9544__0, extractedValue_9544__1, extractedValue_9544__2) ;
            GenericArray <FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray32  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 199)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_llvmType:
          {
            GGS_bigint extractedValue_9658__0 ;
            extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_9658__0) ;
            GenericArray <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray33  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 201)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_compileTimeBool:
          {
            GenericArray <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray34  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 203)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_compileTimeInteger:
          {
            GGS_bigint var_value_9973 ;
            GGS_omnibusType joker_9950_1 ; // Joker input parameter
            var_expressionResult_7069.method_extractLiteralInteger (joker_9950_1, var_value_9973, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 205)) ;
            GalgasBool test_35 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_35) {
              test_35 = GGS_bool (ComparisonKind::lowerThan, var_value_9973.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 206)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_35) {
                GenericArray <FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("this integer expression should be positive"), fixItArray36  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 207)) ;
              }
            }
            if (GalgasBool::boolFalse == test_35) {
              GalgasBool test_37 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_37) {
                test_37 = GGS_bool (ComparisonKind::lowerThan, var_value_9973.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)).left_shift_operation (var_sliceWidth_5311, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_37) {
                  var_accumulatedFieldStaticValues_5137 = var_accumulatedFieldStaticValues_5137.operator_or (var_value_9973.left_shift_operation (var_leftShiftAmount_5092, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) ;
                }
              }
              if (GalgasBool::boolFalse == test_37) {
                GenericArray <FixItDescription> fixItArray38 ;
                inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("expression too large (should be < ").add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).left_shift_operation (var_sliceWidth_5311, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)), fixItArray38  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)) ;
              }
            }
          }
          break ;
        case GGS_typeKind::Enumeration::enum_integer:
          {
            GGS_bigint extractedValue_10406_min_0 ;
            GGS_bigint extractedValue_10425_max_1 ;
            GGS_bool extractedValue_10435_unsigned_2 ;
            GGS_uint extractedValue_10450_expressionBitCount_3 ;
            extensionGetter_type (var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_10406_min_0, extractedValue_10425_max_1, extractedValue_10435_unsigned_2, extractedValue_10450_expressionBitCount_3) ;
            GalgasBool test_39 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_39) {
              test_39 = extractedValue_10435_unsigned_2.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 214)).boolEnum () ;
              if (GalgasBool::boolTrue == test_39) {
                GenericArray <FixItDescription> fixItArray40 ;
                inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an $uint").add_operation (var_sliceWidth_5311.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)).add_operation (GGS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)), fixItArray40  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)) ;
              }
            }
            if (GalgasBool::boolFalse == test_39) {
              GalgasBool test_41 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_41) {
                test_41 = GGS_bool (ComparisonKind::notEqual, extractedValue_10450_expressionBitCount_3.objectCompare (var_sliceWidth_5311)).boolEnum () ;
                if (GalgasBool::boolTrue == test_41) {
                  GenericArray <FixItDescription> fixItArray42 ;
                  inCompiler->emitSemanticError (enumerator_5249.current_mExpressionLocation (HERE), GGS_string ("an $uint").add_operation (var_sliceWidth_5311.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)).add_operation (GGS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)), fixItArray42  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)) ;
                }
              }
              if (GalgasBool::boolFalse == test_41) {
                GGS_objectIR var_extendedResult_10877 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_resultType_4553, ioArgument_ioTemporaries, var_extendedResult_10877, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 220)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_10877, var_expressionResult_7069, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 221)) ;
                }
                GGS_objectIR var_shiftedResult_11081 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_resultType_4553, ioArgument_ioTemporaries, var_shiftedResult_11081, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 223)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_11081, var_extendedResult_10877, var_leftShiftAmount_5092, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 224)) ;
                }
                var_operandList_5195.addAssignOperation (var_shiftedResult_11081  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 226)) ;
              }
            }
          }
          break ;
        }
        enumerator_5249.gotoNextObject () ;
      }
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        test_43 = GGS_bool (ComparisonKind::notEqual, var_leftShiftAmount_5092.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          const GGS_integerSliceExpressionAST temp_44 = this ;
          GenericArray <FixItDescription> fixItArray45 ;
          inCompiler->emitSemanticError (temp_44.readProperty_mLocation (), var_bitCount_4875.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GGS_string (" bits required, "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (var_bitCount_4875.substract_operation (var_leftShiftAmount_5092, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GGS_string (" bits defined"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)), fixItArray45  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)) ;
        }
      }
      outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_4553, var_accumulatedFieldStaticValues_5137  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 234)) ;
      UpEnumerator_operandIRList enumerator_11643 (var_operandList_5195) ;
      while (enumerator_11643.hasCurrentObject ()) {
        GGS_objectIR var_newResult_11728 ;
        {
        routine_getNewTempValue_3F__26__21_ (var_resultType_4553, ioArgument_ioTemporaries, var_newResult_11728, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 236)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_11728, extensionGetter_type (var_newResult_11728, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 239)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 240)), outArgument_outResult, GGS_llvmBinaryOperation::class_func_ior (SOURCE_FILE ("expression-integer-slice.galgas", 242)), enumerator_11643.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 237)) ;
        }
        outArgument_outResult = var_newResult_11728 ;
        enumerator_11643.gotoNextObject () ;
      }
    }
  }
}

