#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

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
  UpEnumerator__32_lstringlist enumerator_3124 (constinArgument_inTargetParameters.readProperty_mPython_5F_utilityToolList ()) ;
  while (enumerator_3124.hasCurrentObject ()) {
    {
    routine_copyExecutableFile_3F_currentDir_3F_from_3F_to (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 85)).add_operation (enumerator_3124.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 85)), constinArgument_inProductDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 86)).add_operation (enumerator_3124.current_mValue_31_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 86)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 83)) ;
    }
    enumerator_3124.gotoNextObject () ;
  }
  {
  GGS__32_stringlist temp_0 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 94)) ;
  temp_0.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string ("!SYSTEMSTACKSIZE!"), constinArgument_inTargetParameters.readProperty_mSystemStackSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("target-generation.galgas3", 94)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("target-generation.galgas3", 94)) ;
  routine_copyFileWithSubstitutions_3F_currentDir_3F_from_3F_to_3F_ (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 92)).add_operation (constinArgument_inTargetParameters.readProperty_mLinkerScript ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 92)), constinArgument_inProductDirectory.add_operation (GGS_string ("/sources/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 93)), temp_0, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 90)) ;
  }
  GGS_string var_opt_5F_optimizationOption_3689 = GGS_string ("disable-opt") ;
  GGS_string var_llc_5F_optimizationOption_3734 = GGS_string ("O0") ;
  GGS_bigint var_optimizationOptionCount_3770 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 99)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (gOption_omnibus_5F_options_optimization_31_.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_opt_5F_optimizationOption_3689 = GGS_string ("O1") ;
      var_llc_5F_optimizationOption_3734 = GGS_string ("O1") ;
      var_optimizationOptionCount_3770.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 103)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 103)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (gOption_omnibus_5F_options_optimization_32_.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_opt_5F_optimizationOption_3689 = GGS_string ("O2") ;
      var_llc_5F_optimizationOption_3734 = GGS_string ("O2") ;
      var_optimizationOptionCount_3770.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 108)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 108)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (gOption_omnibus_5F_options_optimizationS.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_opt_5F_optimizationOption_3689 = GGS_string ("Os") ;
      var_llc_5F_optimizationOption_3734 = GGS_string ("O2") ;
      var_optimizationOptionCount_3770.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 113)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 113)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (gOption_omnibus_5F_options_optimizationZ.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_opt_5F_optimizationOption_3689 = GGS_string ("Oz") ;
      var_llc_5F_optimizationOption_3734 = GGS_string ("O2") ;
      var_optimizationOptionCount_3770.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 118)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 118)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (gOption_omnibus_5F_options_optimizationZ_33_.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      var_opt_5F_optimizationOption_3689 = GGS_string ("O3") ;
      var_llc_5F_optimizationOption_3734 = GGS_string ("O3") ;
      var_optimizationOptionCount_3770.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 123)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 123)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterThan, var_optimizationOptionCount_3770.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 125)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("target-generation.galgas3", 126)), GGS_string ("several optimization options: --").add_operation (var_opt_5F_optimizationOption_3689, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 126)).add_operation (GGS_string (" is used"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 126)), fixItArray7  COMMA_SOURCE_FILE ("target-generation.galgas3", 126)) ;
    }
  }
  {
  GGS__32_stringlist temp_8 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 132)) ;
  temp_8.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string ("<<OPT_OPTIMIZATION_OPTION>>"), var_opt_5F_optimizationOption_3689, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("target-generation.galgas3", 132)) ;
  temp_8.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (GGS_string ("<<LLC_OPTIMIZATION_OPTION>>"), var_llc_5F_optimizationOption_3734, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("target-generation.galgas3", 132)) ;
  routine_copyExecutableFileWithSubstitutions_3F_currentDir_3F_from_3F_to_3F_ (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 130)).add_operation (constinArgument_inTargetParameters.readProperty_mPython_5F_build ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 130)), constinArgument_inProductDirectory.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 131)), temp_8, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 128)) ;
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
      GGS_filewrapper var_fw_5430 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      GGS_string var_s_5473 = var_fw_5430.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 145)) ;
      GGS_bool joker_5608 ; // Joker input parameter
      var_s_5473.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_5608, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 146)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_targetDefinitionDir_5627 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas3", 148)) ;
    GGS_string var_s_5749 = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_5627.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 149)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 149)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 149)) ;
    GGS_bool joker_5919 ; // Joker input parameter
    var_s_5749.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_5919, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 150)) ;
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
  GGS_string var_s_6268 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_filewrapper var_fw_6365 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      var_s_6268 = var_fw_6365.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 165)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_targetDefinitionDir_6473 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas3", 167)) ;
    var_s_6268 = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_6473.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 168)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 168)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 168)) ;
  }
  UpEnumerator__32_stringlist enumerator_6708 (constinArgument_inSubstitutions) ;
  while (enumerator_6708.hasCurrentObject ()) {
    var_s_6268 = var_s_6268.getter_replacing (enumerator_6708.current_mValue_30_ (HERE), enumerator_6708.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 171)) ;
    enumerator_6708.gotoNextObject () ;
  }
  GGS_bool joker_6895 ; // Joker input parameter
  var_s_6268.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6895, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 173)) ;
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
  GGS_string var_s_7228 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_filewrapper var_fw_7325 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      var_s_7228 = var_fw_7325.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 187)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_targetDefinitionDir_7433 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas3", 189)) ;
    var_s_7228 = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_7433.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 190)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 190)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 190)) ;
  }
  UpEnumerator__32_stringlist enumerator_7668 (constinArgument_inSubstitutions) ;
  while (enumerator_7668.hasCurrentObject ()) {
    var_s_7228 = var_s_7228.getter_replacing (enumerator_7668.current_mValue_30_ (HERE), enumerator_7668.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 193)) ;
    enumerator_7668.gotoNextObject () ;
  }
  GGS_bool joker_7845 ; // Joker input parameter
  var_s_7228.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_7845, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 195)) ;
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
      GGS_filewrapper var_fw_8176 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      result_outContents = var_fw_8176.getter_textFileContentsAtPath (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 207)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_targetDefinitionDir_8286 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas3", 209)) ;
    result_outContents = GGS_string::class_func_stringWithContentsOfFile (var_targetDefinitionDir_8286.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 210)).add_operation (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 210)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 210)) ;
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
                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
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
//Overriding extension method '@taskSetupDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskSetupDeclarationAST temp_0 = this ;
  const GGS_taskSetupDeclarationAST temp_1 = this ;
  const GGS_taskSetupDeclarationAST temp_2 = this ;
  GGS_string var_s_3455 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 90)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 90)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 90)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 90)) ;
  {
  const GGS_taskSetupDeclarationAST temp_3 = this ;
  const GGS_taskSetupDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_3455, temp_3.readProperty_mSetupName ().readProperty_location (), inCompiler COMMA_HERE), temp_4, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 91)) ;
  }
  {
  const GGS_taskSetupDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_5.readProperty_mTaskName () COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 93)) ;
  }
  const GGS_taskSetupDeclarationAST temp_6 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_6.readProperty_mTaskSetupInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 94)) ;
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
  result_result = GGS_string ("task function ").add_operation (temp_0.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 100)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 100)).add_operation (temp_1.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 100)) ;
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
//Overriding extension method '@taskSetupDeclarationAST enterInContext'
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
  GGS_string var_mangledName_5211 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 124)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 124)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 124)) ;
  const GGS_taskSetupDeclarationAST temp_3 = this ;
  const GGS_taskSetupDeclarationAST temp_4 = this ;
  GGS_routineFormalArgumentListAST temp_5 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 134)) ;
  const GGS_taskSetupDeclarationAST temp_6 = this ;
  const GGS_taskSetupDeclarationAST temp_7 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (temp_3.readProperty_mTaskName (), GGS_mode::class_func_userMode (SOURCE_FILE ("task-setup-declaration.galgas3", 127)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("task-setup-declaration.galgas3", 129)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("task-setup-declaration.galgas3", 132)), GGS_lstring::init_21__21_ (var_mangledName_5211, temp_4.readProperty_mSetupName ().readProperty_location (), inCompiler COMMA_HERE), temp_5, GGS_bool (true), temp_6.readProperty_mTaskSetupInstructionList (), temp_7.readProperty_mEndOfTaskSetupDeclaration (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-setup-declaration.galgas3", 138))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas3", 125)) ;
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
  GGS_routineTypedSignature temp_0 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 167)) ;
  outArgument_outSignature = temp_0 ;
  UpEnumerator_routineFormalArgumentListAST enumerator_6136 (constinArgument_inFormalArgumentList) ;
  while (enumerator_6136.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_typeProxy_6239 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6136.current_mFormalArgumentTypeName (HERE), var_typeProxy_6239, inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 169)) ;
    }
    outArgument_outSignature.addAssignOperation (enumerator_6136.current_mFormalArgumentPassingMode (HERE), enumerator_6136.current_mSelector (HERE), var_typeProxy_6239, enumerator_6136.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas3", 170)) ;
    enumerator_6136.gotoNextObject () ;
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
  GGS_routineTypedSignature temp_0 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 180)) ;
  outArgument_outSignature = temp_0 ;
  UpEnumerator_routineFormalArgumentListAST enumerator_6762 (constinArgument_inFormalArgumentList) ;
  while (enumerator_6762.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_typeProxy_6817 = extensionGetter_searchKey (constinArgument_inTypeMap, enumerator_6762.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 182)) ;
    outArgument_outSignature.addAssignOperation (enumerator_6762.current_mFormalArgumentPassingMode (HERE), enumerator_6762.current_mSelector (HERE), var_typeProxy_6817, enumerator_6762.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas3", 183)) ;
    enumerator_6762.gotoNextObject () ;
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
  UpEnumerator_routineFormalArgumentListAST enumerator_9291 (constinArgument_inFormalArgumentsAST) ;
  while (enumerator_9291.hasCurrentObject ()) {
    GGS_omnibusType var_typeProxy_9346 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), enumerator_9291.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 241)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 241)) ;
    ioArgument_ioFormalArguments.addAssignOperation (enumerator_9291.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("formal-arguments.galgas3", 242)) ;
    switch (enumerator_9291.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_9291.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = constinArgument_inUnusedWarning.boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                {
                extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), GGS_bool (true), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 247)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              {
              extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), GGS_bool (true), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 249)) ;
              }
            }
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_9291.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = constinArgument_inUnusedWarning.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                {
                extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas3", 255)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 255)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              {
              extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("formal-arguments.galgas3", 257)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 257)) ;
              }
            }
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("formal-arguments.galgas3", 261)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas3", 261)) ;
        }
      }
      break ;
    }
    enumerator_9291.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                                    GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 19)) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 28)) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 29)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'
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
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 50)) ;
  GGS_instructionListIR var_leftInstructionGenerationList_2799 = temp_0 ;
  GGS_objectIR var_leftOperand_3231 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_2799, var_leftOperand_3231, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 51)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_3231, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 64)) ;
  }
  GGS_implicitBooleanConversionResult var_leftBooleanOperand_3592 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_leftOperand_3231, temp_2.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_leftInstructionGenerationList_2799, ioArgument_ioAllocaList, var_leftBooleanOperand_3592, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 68)) ;
  GGS_instructionListIR temp_3 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 77)) ;
  GGS_instructionListIR var_rightInstructionGenerationList_3671 = temp_3 ;
  GGS_objectIR var_rightOperand_4106 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_3231, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 81)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3671, var_rightOperand_4106, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 78)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_4106, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 91)) ;
  }
  GGS_implicitBooleanConversionResult var_rightBooleanOperand_4438 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_5 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_rightOperand_4106, temp_5.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_rightInstructionGenerationList_3671, ioArgument_ioAllocaList, var_rightBooleanOperand_4438, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 95)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    GGS_bool test_7 = var_leftBooleanOperand_3592.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 104)) ;
    if (GalgasBool::boolTrue == test_7.boolEnum ()) {
      test_7 = var_rightBooleanOperand_4438.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 104)) ;
    }
    test_6 = test_7.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_bool var_leftStaticValue_4647 ;
      var_leftBooleanOperand_3592.method_extractCompileTime (var_leftStaticValue_4647, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 105)) ;
      GGS_bool var_rightStaticValue_4725 ;
      var_rightBooleanOperand_4438.method_extractCompileTime (var_rightStaticValue_4725, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 106)) ;
      outArgument_outResult = GGS_objectIR::class_func_literalInteger (extensionGetter_type (var_leftOperand_3231, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 107)), var_leftStaticValue_4647.operator_and (var_rightStaticValue_4725 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 107)).getter_bigint (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 107))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 107)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    {
    const GGS_booleanShortCircuitAndOperatorExpressionAST temp_8 = this ;
    routine_getNewTempValue_3F__26__21_ (extensionGetter_booleanType (constinArgument_inContext, temp_8.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 110)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 110)) ;
    }
    {
    const GGS_booleanShortCircuitAndOperatorExpressionAST temp_9 = this ;
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_llvmName (var_leftBooleanOperand_3592, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 114)), var_leftInstructionGenerationList_2799, extensionGetter_llvmName (var_rightBooleanOperand_4438, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 116)), var_rightInstructionGenerationList_3671, temp_9.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas3", 112)) ;
    }
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 50)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_truncateExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_truncateExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas3", 52)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 61)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_truncateExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_truncateExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas3", 63)) ;
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
  GGS_objectIR var_expressionResult_4187 ;
  const GGS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 90)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4187, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4187, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 100)) ;
  }
  const GGS_truncateExpressionAST temp_1 = this ;
  GGS_omnibusType temp_2 ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (GalgasBool::boolFalse == test_3) {
    const GGS_truncateExpressionAST temp_4 = this ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 107)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 107)) ;
  }
  GGS_omnibusType var_resultType_4352 = temp_2 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_resultType_4352.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas3", 110)).operator_not (SOURCE_FILE ("expression-truncate.galgas3", 110)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_truncateExpressionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-truncate.galgas3", 111)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_4187, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 112)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas3", 112)).operator_not (SOURCE_FILE ("expression-truncate.galgas3", 112)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_truncateExpressionAST temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-truncate.galgas3", 113)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_bigint var_minSource_4841 ;
      GGS_bigint var_maxSource_4860 ;
      GGS_uint var_expSize_4888 ;
      GGS_bool joker_4870_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4187, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 115)).readProperty_kind ().method_extractInteger (var_minSource_4841, var_maxSource_4860, joker_4870_1, var_expSize_4888, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 115)) ;
      GGS_bigint var_minTarget_4942 ;
      GGS_bigint var_maxTarget_4961 ;
      GGS_uint var_resultSize_4997 ;
      GGS_bool joker_4971 ; // Joker input parameter
      var_resultType_4352.readProperty_kind ().method_extractInteger (var_minTarget_4942, var_maxTarget_4961, joker_4971, var_resultSize_4997, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 116)) ;
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
          inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless explicit conversion"), fixItArray14  COMMA_SOURCE_FILE ("expression-truncate.galgas3", 119)) ;
        }
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::lowerThan, var_resultSize_4997.objectCompare (var_expSize_4888)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          {
          routine_getNewTempValue_3F__26__21_ (var_resultType_4352, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas3", 122)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_truncateInstructionIR::init_21__21_ (outArgument_outResult, var_expressionResult_4187, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-truncate.galgas3", 123)) ;
        }
      }
      if (GalgasBool::boolFalse == test_15) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4187, var_resultType_4352, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 128)) ;
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
  GGS_string var_operandType_6337 = extensionGetter_llvmTypeName (temp_0.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 151)) ;
  const GGS_truncateInstructionIR temp_1 = this ;
  const GGS_truncateInstructionIR temp_2 = this ;
  const GGS_truncateInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 152)).add_operation (GGS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 152)).add_operation (var_operandType_6337, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 152)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 152)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 152)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 152)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 153)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 153)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas3", 153)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas3", 152)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmVarInstruction checkInstructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmVarInstruction::method_checkInstructionList (GGS_ctCheckMap & ioArgument_ioMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_llvmVarInstruction temp_0 = this ;
  ioArgument_ioMap.setter_insertKey (temp_0.readProperty_mVariableName (), inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 120)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmGenerationInstruction checkInstructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenerationInstruction::method_checkInstructionList (GGS_ctCheckMap & ioArgument_ioMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmGenerationInstruction temp_0 = this ;
  UpEnumerator_llvmGenerationInstructionElementList enumerator_5021 (temp_0.readProperty_mGenerationList ()) ;
  while (enumerator_5021.hasCurrentObject ()) {
    switch (enumerator_5021.current_mElement (HERE).enumValue ()) {
    case GGS_llvmGenerationInstructionElement::Enumeration::invalid:
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_string:
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_symbol:
      {
        GGS_lstring extractedValue_5115_name_0 ;
        enumerator_5021.current_mElement (HERE).getAssociatedValuesFor_symbol (extractedValue_5115_name_0) ;
        ioArgument_ioMap.method_searchKey (extractedValue_5115_name_0, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 130)) ;
      }
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_type:
      {
        GGS_lstring extractedValue_5168_name_0 ;
        enumerator_5021.current_mElement (HERE).getAssociatedValuesFor_type (extractedValue_5168_name_0) ;
        ioArgument_ioMap.method_searchKey (extractedValue_5168_name_0, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 132)) ;
      }
      break ;
    }
    enumerator_5021.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmGenerationInstruction generateIRCode'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenerationInstruction::method_generateIRCode (GGS_assignmentGenerationVarMap & ioArgument_ioVarMap,
                                                            GGS_assignmentGenerationVarMap & ioArgument_ioTypeMap,
                                                            GGS_stringlist & ioArgument_ioInstructionAsStringListIR,
                                                            GGS_uint & /* ioArgument_ioTemporaryIndex */,
                                                            GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_6970 = GGS_string::makeEmptyString () ;
  const GGS_llvmGenerationInstruction temp_0 = this ;
  UpEnumerator_llvmGenerationInstructionElementList enumerator_6985 (temp_0.readProperty_mGenerationList ()) ;
  while (enumerator_6985.hasCurrentObject ()) {
    switch (enumerator_6985.current_mElement (HERE).enumValue ()) {
    case GGS_llvmGenerationInstructionElement::Enumeration::invalid:
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_string:
      {
        GGS_string extractedValue_7060_value_0 ;
        enumerator_6985.current_mElement (HERE).getAssociatedValuesFor_string (extractedValue_7060_value_0) ;
        var_s_6970.plusAssignOperation(extractedValue_7060_value_0, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 185)) ;
      }
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_symbol:
      {
        GGS_lstring extractedValue_7105_name_0 ;
        enumerator_6985.current_mElement (HERE).getAssociatedValuesFor_symbol (extractedValue_7105_name_0) ;
        GGS_string var_value_7151 ;
        ioArgument_ioVarMap.method_searchKey (extractedValue_7105_name_0, var_value_7151, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 187)) ;
        var_s_6970.plusAssignOperation(var_value_7151, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 188)) ;
      }
      break ;
    case GGS_llvmGenerationInstructionElement::Enumeration::enum_type:
      {
        GGS_lstring extractedValue_7192_name_0 ;
        enumerator_6985.current_mElement (HERE).getAssociatedValuesFor_type (extractedValue_7192_name_0) ;
        GGS_string var_value_7239 ;
        ioArgument_ioTypeMap.method_searchKey (extractedValue_7192_name_0, var_value_7239, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 190)) ;
        var_s_6970.plusAssignOperation(var_value_7239, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 191)) ;
      }
      break ;
    }
    enumerator_6985.gotoNextObject () ;
  }
  ioArgument_ioInstructionAsStringListIR.addAssignOperation (var_s_6970  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 194)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmVarInstruction generateIRCode'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmVarInstruction::method_generateIRCode (GGS_assignmentGenerationVarMap & ioArgument_ioVarMap,
                                                     GGS_assignmentGenerationVarMap & /* ioArgument_ioTypeMap */,
                                                     GGS_stringlist & /* ioArgument_ioInstructionAsStringListIR */,
                                                     GGS_uint & ioArgument_ioTemporaryIndex,
                                                     GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_newTemporaryVariable_7716 = GGS_string ("%temp").add_operation (ioArgument_ioTemporaryIndex.getter_string (SOURCE_FILE ("llvm-instructions.galgas3", 206)), inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 206)) ;
  ioArgument_ioTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 207)) ;
  {
  const GGS_llvmVarInstruction temp_0 = this ;
  ioArgument_ioVarMap.setter_insertKey (temp_0.readProperty_mVariableName (), var_newTemporaryVariable_7716, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas3", 208)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@binaryOperationIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                             GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("intermediate-binary-operation.galgas3", 71)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_binaryOperationIR temp_1 = this ;
      ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 72))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 72)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@binaryOperationIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                         const GGS_generationContext constinArgument_inGenerationContext,
                                                         GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperationIR temp_0 = this ;
  GGS_string var_llvmType_5025 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 133)) ;
  const GGS_binaryOperationIR temp_1 = this ;
  switch (temp_1.readProperty_mOperation ().enumValue ()) {
  case GGS_llvmBinaryOperation::Enumeration::invalid:
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_addNoOVF:
    {
      const GGS_binaryOperationIR temp_2 = this ;
      const GGS_binaryOperationIR temp_3 = this ;
      const GGS_binaryOperationIR temp_4 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_2.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)).add_operation (GGS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)).add_operation (extensionGetter_llvmName (temp_4.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 136)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_subNoOVF:
    {
      const GGS_binaryOperationIR temp_5 = this ;
      const GGS_binaryOperationIR temp_6 = this ;
      const GGS_binaryOperationIR temp_7 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_5.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)).add_operation (GGS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 138)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_mulNoOVF:
    {
      const GGS_binaryOperationIR temp_8 = this ;
      const GGS_binaryOperationIR temp_9 = this ;
      const GGS_binaryOperationIR temp_10 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_8.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)).add_operation (GGS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 140)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_udivNoOVF:
    {
      const GGS_binaryOperationIR temp_11 = this ;
      const GGS_binaryOperationIR temp_12 = this ;
      const GGS_binaryOperationIR temp_13 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_11.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)).add_operation (GGS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)).add_operation (extensionGetter_llvmName (temp_12.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)).add_operation (extensionGetter_llvmName (temp_13.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 142)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_sdivNoOVF:
    {
      const GGS_binaryOperationIR temp_14 = this ;
      const GGS_binaryOperationIR temp_15 = this ;
      const GGS_binaryOperationIR temp_16 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_14.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)).add_operation (GGS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)).add_operation (extensionGetter_llvmName (temp_15.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)).add_operation (extensionGetter_llvmName (temp_16.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 144)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_uremNoOVF:
    {
      const GGS_binaryOperationIR temp_17 = this ;
      const GGS_binaryOperationIR temp_18 = this ;
      const GGS_binaryOperationIR temp_19 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_17.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)).add_operation (GGS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)).add_operation (extensionGetter_llvmName (temp_18.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)).add_operation (extensionGetter_llvmName (temp_19.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 146)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_sremNoOVF:
    {
      const GGS_binaryOperationIR temp_20 = this ;
      const GGS_binaryOperationIR temp_21 = this ;
      const GGS_binaryOperationIR temp_22 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_20.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)).add_operation (GGS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)).add_operation (extensionGetter_llvmName (temp_21.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)).add_operation (extensionGetter_llvmName (temp_22.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 148)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_uaddOVF:
    {
      const GGS_binaryOperationIR temp_23 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_23.ptr (), GGS_string ("uadd"), function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 152)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 150)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_saddOVF:
    {
      const GGS_binaryOperationIR temp_24 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_24.ptr (), GGS_string ("sadd"), function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 160)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 158)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_usubOVF:
    {
      const GGS_binaryOperationIR temp_25 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_25.ptr (), GGS_string ("usub"), function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 168)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 166)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_ssubOVF:
    {
      const GGS_binaryOperationIR temp_26 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_26.ptr (), GGS_string ("ssub"), function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 176)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 174)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_umulOVF:
    {
      const GGS_binaryOperationIR temp_27 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_27.ptr (), GGS_string ("umul"), function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 184)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 182)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_smulOVF:
    {
      const GGS_binaryOperationIR temp_28 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_28.ptr (), GGS_string ("smul"), function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 192)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 190)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_udivOVF:
    {
      const GGS_binaryOperationIR temp_29 = this ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((cPtr_binaryOperationIR *) temp_29.ptr (), GGS_string ("udiv"), function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 200)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 198)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_sdivOVF:
    {
      const GGS_binaryOperationIR temp_30 = this ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((cPtr_binaryOperationIR *) temp_30.ptr (), GGS_string ("sdiv"), function_panicCodeForSignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 208)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 206)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_uremOVF:
    {
      const GGS_binaryOperationIR temp_31 = this ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((cPtr_binaryOperationIR *) temp_31.ptr (), GGS_string ("urem"), function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 216)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 214)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_sremOVF:
    {
      const GGS_binaryOperationIR temp_32 = this ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((cPtr_binaryOperationIR *) temp_32.ptr (), GGS_string ("srem"), function_panicCodeForSignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 224)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 222)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_and:
    {
      const GGS_binaryOperationIR temp_33 = this ;
      const GGS_binaryOperationIR temp_34 = this ;
      const GGS_binaryOperationIR temp_35 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_33.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)).add_operation (GGS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)).add_operation (extensionGetter_llvmName (temp_34.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)).add_operation (extensionGetter_llvmName (temp_35.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 230)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_ior:
    {
      const GGS_binaryOperationIR temp_36 = this ;
      const GGS_binaryOperationIR temp_37 = this ;
      const GGS_binaryOperationIR temp_38 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_36.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)).add_operation (GGS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)).add_operation (extensionGetter_llvmName (temp_37.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)).add_operation (extensionGetter_llvmName (temp_38.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 232)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_xor:
    {
      const GGS_binaryOperationIR temp_39 = this ;
      const GGS_binaryOperationIR temp_40 = this ;
      const GGS_binaryOperationIR temp_41 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_39.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)).add_operation (GGS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)).add_operation (extensionGetter_llvmName (temp_40.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)).add_operation (extensionGetter_llvmName (temp_41.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 234)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_shl:
    {
      const GGS_binaryOperationIR temp_42 = this ;
      const GGS_binaryOperationIR temp_43 = this ;
      const GGS_binaryOperationIR temp_44 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_42.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)).add_operation (GGS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)).add_operation (extensionGetter_llvmName (temp_43.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)).add_operation (extensionGetter_llvmName (temp_44.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 236)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_ashr:
    {
      const GGS_binaryOperationIR temp_45 = this ;
      const GGS_binaryOperationIR temp_46 = this ;
      const GGS_binaryOperationIR temp_47 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_45.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)).add_operation (GGS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)).add_operation (extensionGetter_llvmName (temp_46.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)).add_operation (extensionGetter_llvmName (temp_47.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 238)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_lshr:
    {
      const GGS_binaryOperationIR temp_48 = this ;
      const GGS_binaryOperationIR temp_49 = this ;
      const GGS_binaryOperationIR temp_50 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_48.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)).add_operation (GGS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)).add_operation (extensionGetter_llvmName (temp_49.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)).add_operation (extensionGetter_llvmName (temp_50.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 240)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_eq:
    {
      const GGS_binaryOperationIR temp_51 = this ;
      const GGS_binaryOperationIR temp_52 = this ;
      const GGS_binaryOperationIR temp_53 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_51.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)).add_operation (GGS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)).add_operation (extensionGetter_llvmName (temp_52.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)).add_operation (extensionGetter_llvmName (temp_53.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 242)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_ult:
    {
      const GGS_binaryOperationIR temp_54 = this ;
      const GGS_binaryOperationIR temp_55 = this ;
      const GGS_binaryOperationIR temp_56 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_54.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)).add_operation (GGS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)).add_operation (extensionGetter_llvmName (temp_55.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)).add_operation (extensionGetter_llvmName (temp_56.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 244)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_ule:
    {
      const GGS_binaryOperationIR temp_57 = this ;
      const GGS_binaryOperationIR temp_58 = this ;
      const GGS_binaryOperationIR temp_59 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_57.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)).add_operation (GGS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)).add_operation (extensionGetter_llvmName (temp_58.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)).add_operation (extensionGetter_llvmName (temp_59.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 246)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_slt:
    {
      const GGS_binaryOperationIR temp_60 = this ;
      const GGS_binaryOperationIR temp_61 = this ;
      const GGS_binaryOperationIR temp_62 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_60.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)).add_operation (GGS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)).add_operation (extensionGetter_llvmName (temp_61.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)).add_operation (extensionGetter_llvmName (temp_62.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 248)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_sle:
    {
      const GGS_binaryOperationIR temp_63 = this ;
      const GGS_binaryOperationIR temp_64 = this ;
      const GGS_binaryOperationIR temp_65 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_63.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)).add_operation (GGS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)).add_operation (extensionGetter_llvmName (temp_64.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)).add_operation (extensionGetter_llvmName (temp_65.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas3", 250)) ;
    }
    break ;
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
//Routine 'checkRequiredProcedures?ast?context?endOfSourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_checkRequiredProcedures_3F_ast_3F_context_3F_endOfSourceFile (const GGS_ast constinArgument_inAST,
                                                                           const GGS_semanticContext constinArgument_inContext,
                                                                           const GGS_location /* constinArgument_inEndOfSourceFile */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_requiredFunctionDeclarationListAST enumerator_2204 (constinArgument_inAST.readProperty_mRequiredFunctionListAST ()) ;
  while (enumerator_2204.hasCurrentObject ()) {
    GGS_lstring var_requiredFunctionSignature_2240 = extensionGetter_routineSignature (enumerator_2204.current (HERE).readProperty_mFormalArgumentList (), enumerator_2204.current (HERE).readProperty_mName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 61)) ;
    GGS_string var_requiredFunctionMangledName_2356 = enumerator_2204.current (HERE).readProperty_mName ().readProperty_string ().add_operation (var_requiredFunctionSignature_2240.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 62)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inContext.readProperty_mRoutineMap ().getter_hasKey (var_requiredFunctionMangledName_2356 COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas3", 63)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2204.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 64)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool var_implementedPublic_2700 ;
      GGS_routineTypedSignature var_implementedSignature_2731 ;
      GGS_unifiedTypeMapEntry var_implementedReturnTypeProxy_2765 ;
      GGS_routineLLVMNameDict var_implementedModeDictionary_2841 ;
      GGS_bool var_implementedIsExported_2880 ;
      GGS_mode var_implementedMode_2915 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_2356.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas3", 67)), var_implementedPublic_2700, var_implementedSignature_2731, var_implementedReturnTypeProxy_2765, var_implementedModeDictionary_2841, var_implementedIsExported_2880, var_implementedMode_2915, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 66)) ;
      GGS_location var_errorLocation_2949 = constinArgument_inContext.readProperty_mRoutineMap ().getter_locationForKey (var_requiredFunctionMangledName_2356, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 75)) ;
      GGS_routineTypedSignature var_requiredTypedSignature_3153 ;
      {
      routine_routineTypedSignature_32__3F__3F__21_ (constinArgument_inContext.readProperty_mTypeMap (), enumerator_2204.current (HERE).readProperty_mFormalArgumentList (), var_requiredTypedSignature_3153, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 77)) ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typedString (var_requiredTypedSignature_3153, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2731, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 78)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_2949, GGS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3153, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 80)).add_operation (GGS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 79)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_implementedReturnTypeProxy_2765.getter_isNull (SOURCE_FILE ("declaration-required-proc.galgas3", 83)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas3", 83)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_2949, GGS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 84)) ;
        }
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_implementedMode_2915.objectCompare (enumerator_2204.current (HERE).readProperty_mExecutionMode ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_2949, GGS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2204.current (HERE).readProperty_mExecutionMode (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 88)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 88)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 88)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 88)) ;
        }
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_implementedPublic_2700.operator_not (SOURCE_FILE ("declaration-required-proc.galgas3", 91)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_2949, GGS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 92)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_bool test_11 = enumerator_2204.current (HERE).readProperty_mIsExported () ;
        if (GalgasBool::boolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_2880.operator_not (SOURCE_FILE ("declaration-required-proc.galgas3", 95)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItInsertAfter, GGS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 98)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 98))) ;
          inCompiler->emitSemanticError (var_errorLocation_2949, GGS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 97)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 97)).add_operation (GGS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 97)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 96)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          GGS_bool test_14 = var_implementedIsExported_2880 ;
          if (GalgasBool::boolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2204.current (HERE).readProperty_mIsExported ().operator_not (SOURCE_FILE ("declaration-required-proc.galgas3", 99)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GenericArray <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_2949, GGS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 101)).add_operation (GGS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 101)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas3", 100)) ;
          }
        }
      }
    }
    enumerator_2204.gotoNextObject () ;
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
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4088_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 92)) ;
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
            ioArgument_ioGraph.setter_noteNode (extractedValue_4341_typeName_1 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 100)) ;
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
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4457_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 102)) ;
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
            ioArgument_ioGraph.setter_noteNode (extractedValue_5022_typeName_1 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 119)) ;
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
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5138_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 121)) ;
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
  GGS_lstring var_calledRoutineSignature_7026 = extensionGetter_routineSignature (temp_0.readProperty_mArguments (), temp_1.readProperty_mSandAloneRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 167)) ;
  const GGS_standAloneProcedureCallInstructionAST temp_2 = this ;
  GGS_string var_requiredFunctionMangledName_7157 = temp_2.readProperty_mSandAloneRoutineName ().readProperty_string ().add_operation (var_calledRoutineSignature_7026.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 169)) ;
  GGS_bool var_implementedPublic_7414 ;
  GGS_routineTypedSignature var_formalSignature_7441 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_7466 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_7526 ;
  GGS_bool var_implementedIsExported_7568 ;
  GGS_mode var_implementedMode_7606 ;
  const GGS_standAloneProcedureCallInstructionAST temp_3 = this ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (GGS_lstring::init_21__21_ (var_requiredFunctionMangledName_7157, temp_3.readProperty_mSandAloneRoutineName ().readProperty_location (), inCompiler COMMA_HERE), var_implementedPublic_7414, var_formalSignature_7441, var_formalReturnTypeProxy_7466, var_implementedModeDictionary_7526, var_implementedIsExported_7568, var_implementedMode_7606, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 171)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_formalReturnTypeProxy_7466.getter_isNull (SOURCE_FILE ("instruction-procedure-call.galgas3", 181)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas3", 181)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_standAloneProcedureCallInstructionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mSandAloneRoutineName ().readProperty_location (), GGS_string ("this function returns a value, cannot be used as a procedure"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 182)) ;
    }
  }
  const GGS_standAloneProcedureCallInstructionAST temp_7 = this ;
  GGS_string var_functionLLVMName_7843 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_7526, constinArgument_inMode, temp_7.readProperty_mSandAloneRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 185)) ;
  GGS_procCallEffectiveParameterListIR temp_8 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 187)) ;
  GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_8037 = temp_8 ;
  {
  const GGS_standAloneProcedureCallInstructionAST temp_9 = this ;
  const GGS_standAloneProcedureCallInstructionAST temp_10 = this ;
  routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_7441, temp_9.readProperty_mArguments (), temp_10.readProperty_mSandAloneRoutineName ().readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_8037, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 188)) ;
  }
  const GGS_standAloneProcedureCallInstructionAST temp_11 = this ;
  const GGS_standAloneProcedureCallInstructionAST temp_12 = this ;
  GGS_lstring var_routineMangledName_8600 = function_routineMangledNameFromCall (GGS_string::makeEmptyString (), temp_11.readProperty_mSandAloneRoutineName (), temp_12.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 205)) ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (GGS_objectIR::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas3", 212)), var_routineMangledName_8600, var_functionLLVMName_7843, var_effectiveParameterListIR_8037, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 211)) ;
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
        test_2 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas3", 239)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_procedureCallInstructionAST temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GGS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 240)) ;
          var_currentType_9749.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        var_currentType_9749 = constinArgument_inSelfType ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 243)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_valuedObject var_entity_10208 ;
    const GGS_procedureCallInstructionAST temp_5 = this ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_5.readProperty_mIdentifier (), var_entity_10208, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 246)) ;
    switch (var_entity_10208.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      {
        GGS_omnibusType extractedValue_10262_type_0 ;
        var_entity_10208.getAssociatedValuesFor_task (extractedValue_10262_type_0) ;
        var_currentType_9749 = extractedValue_10262_type_0 ;
        const GGS_procedureCallInstructionAST temp_6 = this ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForGlobalVariable (temp_6.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 250)) ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      {
        GGS_omnibusType extractedValue_10401_type_0 ;
        GGS_bool extractedValue_10406_instancied_1 ;
        var_entity_10208.getAssociatedValuesFor_driver (extractedValue_10401_type_0, extractedValue_10406_instancied_1) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = extractedValue_10406_instancied_1.boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            var_currentType_9749 = extractedValue_10401_type_0 ;
            const GGS_procedureCallInstructionAST temp_8 = this ;
            var_currentLLVMAddressVar_9775 = function_llvmNameForGlobalVariable (temp_8.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 254)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          const GGS_procedureCallInstructionAST temp_9 = this ;
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mIdentifier ().readProperty_location (), GGS_string ("the driver should be instancied"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 256)) ;
          var_currentType_9749.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      {
        GGS_objectIR extractedValue_10706__0 ;
        var_entity_10208.getAssociatedValuesFor_globalConstant (extractedValue_10706__0) ;
        const GGS_procedureCallInstructionAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global constant cannot be used in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 259)) ;
        var_currentType_9749.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_10889_type_0 ;
        GGS_lstring extractedValue_10903_omnibusName_1 ;
        GGS_bool extractedValue_10915__2 ;
        var_entity_10208.getAssociatedValuesFor_localConstant (extractedValue_10889_type_0, extractedValue_10903_omnibusName_1, extractedValue_10915__2) ;
        var_currentType_9749 = extractedValue_10889_type_0 ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForLocalVariable (extractedValue_10903_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 264)) ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_11052_type_0 ;
        GGS_lstring extractedValue_11066_omnibusName_1 ;
        var_entity_10208.getAssociatedValuesFor_localVariable (extractedValue_11052_type_0, extractedValue_11066_omnibusName_1) ;
        var_currentType_9749 = extractedValue_11052_type_0 ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForLocalVariable (extractedValue_11066_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 267)) ;
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GGS_omnibusType extractedValue_11218_type_0 ;
        GGS_lstring extractedValue_11232_omnibusName_1 ;
        var_entity_10208.getAssociatedValuesFor_globalSyncInstance (extractedValue_11218_type_0, extractedValue_11232_omnibusName_1) ;
        var_currentType_9749 = extractedValue_11218_type_0 ;
        var_currentLLVMAddressVar_9775 = function_llvmNameForGlobalSyncInstance (extractedValue_11232_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 270)) ;
      }
      break ;
    }
  }
  GGS_propertyGetterMap var_currentObjectPropertyMap_11405 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9749, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 274)) ;
  const GGS_procedureCallInstructionAST temp_13 = this ;
  GGS_accessInAssignmentListAST var_accessList_11554 = temp_13.readProperty_mAccessList () ;
  GGS_accessInAssignmentAST var_lastAccess_11613 ;
  {
  var_accessList_11554.setter_popLast (var_lastAccess_11613, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 277)) ;
  }
  UpEnumerator_accessInAssignmentListAST enumerator_11658 (var_accessList_11554) ;
  while (enumerator_11658.hasCurrentObject ()) {
    switch (enumerator_11658.current_mAccess (HERE).enumValue ()) {
    case GGS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_11729_propertyName_0 ;
        enumerator_11658.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_11729_propertyName_0) ;
        GGS_propertyVisibility var_visibility_11822 ;
        GGS_propertyGetterKind var_propertyAccess_11866 ;
        var_currentObjectPropertyMap_11405.method_searchKey (extractedValue_11729_propertyName_0, var_visibility_11822, var_propertyAccess_11866, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 282)) ;
        switch (var_visibility_11822.enumValue ()) {
        case GGS_propertyVisibility::Enumeration::invalid:
          break ;
        case GGS_propertyVisibility::Enumeration::enum_isPublic:
          break ;
        case GGS_propertyVisibility::Enumeration::enum_isPrivate:
          {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              test_14 = var_receiverIsSelf_9707.operator_not (SOURCE_FILE ("instruction-procedure-call.galgas3", 290)).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                GenericArray <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (extractedValue_11729_propertyName_0.readProperty_location (), GGS_string ("inaccessible property, is private"), fixItArray15  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 291)) ;
              }
            }
          }
          break ;
        }
        var_receiverIsSelf_9707 = GGS_bool (false) ;
        switch (var_propertyAccess_11866.enumValue ()) {
        case GGS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GGS_objectIR extractedValue_12170__0 ;
            var_propertyAccess_11866.getAssociatedValuesFor_constantProperty (extractedValue_12170__0) ;
            GenericArray <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_11729_propertyName_0.readProperty_location (), GGS_string ("a context property cannot be used in this context"), fixItArray16  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 297)) ;
            var_currentType_9749.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GGS_omnibusType extractedValue_12359_propertyType_0 ;
            GGS_uint extractedValue_12378_propertyIndex_1 ;
            var_propertyAccess_11866.getAssociatedValuesFor_storedProperty (extractedValue_12359_propertyType_0, extractedValue_12378_propertyIndex_1) ;
            GGS_string var_llvmPropertyName_12440 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_12440, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 301)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9749, var_currentLLVMAddressVar_9775, var_llvmPropertyName_12440, extractedValue_12378_propertyIndex_1, extractedValue_11729_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 302)) ;
            }
            var_currentType_9749 = extractedValue_12359_propertyType_0 ;
            var_currentLLVMAddressVar_9775 = var_llvmPropertyName_12440 ;
            var_currentObjectPropertyMap_11405 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9749, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 311)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GGS_unifiedTypeMapEntry extractedValue_12867_propertyTypeProxy_0 ;
            GGS_routineLLVMNameDict extractedValue_12885_modeDictionary_1 ;
            var_propertyAccess_11866.getAssociatedValuesFor_computedProperty (extractedValue_12867_propertyTypeProxy_0, extractedValue_12885_modeDictionary_1) ;
            GGS_string var_routineLLVMName_12915 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_12885_modeDictionary_1, constinArgument_inMode, extractedValue_11729_propertyName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 313)) ;
            GGS_objectIR var_resultValueIR_13254 ;
            {
            extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GGS_objectIR::class_func_reference (var_currentType_9749, var_currentLLVMAddressVar_9775  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 316)), var_routineLLVMName_12915, extensionGetter_type (extractedValue_12867_propertyTypeProxy_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 318)), var_resultValueIR_13254, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 314)) ;
            }
            var_currentType_9749 = extensionGetter_type (var_resultValueIR_13254, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 321)) ;
            var_currentLLVMAddressVar_9775 = extensionGetter_llvmName (var_resultValueIR_13254, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 322)) ;
            var_currentObjectPropertyMap_11405 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9749, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 323)) ;
          }
          break ;
        }
      }
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_13484__0 ;
        GGS_location extractedValue_13496_endOfIndex_1 ;
        GGS_bool extractedValue_13507__2 ;
        enumerator_11658.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_13484__0, extractedValue_13496_endOfIndex_1, extractedValue_13507__2) ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (extractedValue_13496_endOfIndex_1, GGS_string ("not handled yet"), fixItArray17  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 326)) ;
        var_currentType_9749.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9775.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_11658.gotoNextObject () ;
  }
  switch (var_lastAccess_11613.enumValue ()) {
  case GGS_accessInAssignmentAST::Enumeration::invalid:
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_13677__0 ;
      GGS_location extractedValue_13689_endOfIndex_1 ;
      GGS_bool extractedValue_13700__2 ;
      var_lastAccess_11613.getAssociatedValuesFor_arrayAccess (extractedValue_13677__0, extractedValue_13689_endOfIndex_1, extractedValue_13700__2) ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (extractedValue_13689_endOfIndex_1, GGS_string ("a property is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 332)) ;
    }
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_13786_methodName_0 ;
      var_lastAccess_11613.getAssociatedValuesFor_property (extractedValue_13786_methodName_0) ;
      const GGS_procedureCallInstructionAST temp_19 = this ;
      GGS_lstring var_methodMangledName_13808 = extensionGetter_mangledName (temp_19.readProperty_mArguments (), var_currentType_9749.readProperty_omnibusTypeDescriptionName (), extractedValue_13786_methodName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 334)) ;
      GGS_bool var_implementedPublic_14022 ;
      GGS_routineTypedSignature var_formalSignature_14051 ;
      GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_14078 ;
      GGS_routineLLVMNameDict var_implementedModeDictionary_14140 ;
      GGS_bool var_implementedIsExported_14184 ;
      GGS_mode var_implementedMode_14224 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_13808, var_implementedPublic_14022, var_formalSignature_14051, var_formalReturnTypeProxy_14078, var_implementedModeDictionary_14140, var_implementedIsExported_14184, var_implementedMode_14224, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 335)) ;
      GGS_string var_functionLLVMName_14274 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_14140, constinArgument_inMode, extractedValue_13786_methodName_0, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 345)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = var_formalReturnTypeProxy_14078.getter_isNull (SOURCE_FILE ("instruction-procedure-call.galgas3", 347)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas3", 347)).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (extractedValue_13786_methodName_0.readProperty_location (), GGS_string ("cannot be called in instruction, returns a value"), fixItArray21  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 348)) ;
        }
      }
      GGS_procCallEffectiveParameterListIR temp_22 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 352)) ;
      temp_22.plusPlusAssignOperation (GGS_procCallEffectiveParameterListIR_2E_element::init_21__21_ (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas3", 352)), GGS_objectIR::class_func_reference (var_currentType_9749, var_currentLLVMAddressVar_9775  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 352)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 352)) ;
      GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14638 = temp_22 ;
      {
      const GGS_procedureCallInstructionAST temp_23 = this ;
      routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_14051, temp_23.readProperty_mArguments (), extractedValue_13786_methodName_0.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_14638, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 355)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (GGS_objectIR::class_func_void (SOURCE_FILE ("instruction-procedure-call.galgas3", 372)), var_methodMangledName_13808, var_functionLLVMName_14274, var_effectiveParameterListIR_14638, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas3", 371)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inlineInfixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                         const GGS_location /* constinArgument_inOperatorLocation */,
                                                         const GGS_objectIR constinArgument_inRightOperand,
                                                         const GGS_omnibusType constinArgument_inResultType,
                                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                         GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         GGS_objectIR & outArgument_outResultValue,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_leftOperand_2777 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_2777, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 76)) ;
  }
  GGS_objectIR var_rightOperand_2899 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_2899, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 78)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 79)) ;
  }
  const GGS_inlineInfixOperatorUsage temp_0 = this ;
  GGS_string var_s_3090 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 80)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 80)).add_operation (temp_0.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 80)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 80)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_2777, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 80)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 80)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 80)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 80)).add_operation (extensionGetter_llvmName (var_leftOperand_2777, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 81)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 81)).add_operation (extensionGetter_llvmName (var_rightOperand_2899, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 81)) ;
  {
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 82)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_3090, temp_1, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas3", 82)) ;
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
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mAliasTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas3", 49)) ;
  }
  {
  const GGS_typeAliasDeclarationAST temp_2 = this ;
  const GGS_typeAliasDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mAliasTypeName (), temp_3.readProperty_mOriginalTypeName () COMMA_SOURCE_FILE ("type-alias.galgas3", 50)) ;
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
  result_result = GGS_string ("typealias ").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas3", 56)) ;
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
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mOriginalTypeName (), var_type_3636, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas3", 74)) ;
  {
  const GGS_typeAliasDeclarationAST temp_1 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mAliasTypeName (), var_type_3636, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas3", 76)) ;
  }
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
                                         "Search paths for source files") ;

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
//Overriding extension method '@leftShiftIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                   const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                   GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_leftShiftIR temp_0 = this ;
  const GGS_leftShiftIR temp_1 = this ;
  const GGS_leftShiftIR temp_2 = this ;
  const GGS_leftShiftIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 25)).add_operation (GGS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 25)).add_operation (extensionGetter_llvmTypeName (temp_1.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 26)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 26)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 26)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 26)).add_operation (temp_3.readProperty_mShiftAmount ().getter_string (SOURCE_FILE ("intermediate-shift-left.galgas3", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 27)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas3", 25)) ;
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
  GGS_lstring var_nodeName_3442 = GGS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 87)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 87)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3442, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 88)) ;
  }
  {
  const GGS_compileTimeConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3442, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 89)) ;
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
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 95)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 95)) ;
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
  GGS_lstring var_nodeName_4197 = GGS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 103)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 103)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4197, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 104)) ;
  }
  {
  const GGS_llvmConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4197, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 105)) ;
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
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 111)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 111)) ;
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
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GGS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 129)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_5892 ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_5892, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 132)) ;
  }
  GGS_omnibusType var_receiverType_5917 = extensionGetter_type (var_receiverTypeProxy_5892, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 133)) ;
  const GGS_compileTimeConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_receiverType_5917.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 134)) ;
  GGS_ctCheckMap var_ctCheckMap_6085 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_6 = this ;
  var_ctCheckMap_6085.setter_insertKey (temp_6.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 137)) ;
  }
  const GGS_compileTimeConvertToBooleanAST temp_7 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_7.readProperty_mExpression ().ptr (), var_ctCheckMap_6085, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 138)) ;
  const GGS_compileTimeConvertToBooleanAST temp_8 = this ;
  GGS_lstring var_key_6251 = GGS_lstring::init_21__21_ (var_receiverType_5917.readProperty_omnibusTypeDescriptionName (), temp_8.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_compileTimeConvertToBooleanAST temp_9 = this ;
  const GGS_compileTimeConvertToBooleanAST temp_10 = this ;
  GGS_compileTimeImplicitConverterToBoolean var_converter_6348 = GGS_compileTimeImplicitConverterToBoolean::init_21__21_ (temp_9.readProperty_mReceiverName (), temp_10.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_6251, var_converter_6348, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 142)) ;
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
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GGS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 158)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_7447 ;
  {
  const GGS_llvmConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_7447, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 161)) ;
  }
  GGS_omnibusType var_receiverType_7472 = extensionGetter_type (var_receiverTypeProxy_7447, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 162)) ;
  const GGS_llvmConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_receiverType_7472.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 163)) ;
  const GGS_llvmConvertToBooleanAST temp_6 = this ;
  GGS_lstring var_key_7628 = GGS_lstring::init_21__21_ (var_receiverType_7472.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_llvmConvertToBooleanAST temp_7 = this ;
  const GGS_llvmConvertToBooleanAST temp_8 = this ;
  GGS_llvmImplicitConverterToBoolean var_converter_7725 = GGS_llvmImplicitConverterToBoolean::init_21__21__21_ (temp_7.readProperty_mReceiverName (), var_receiverType_7472, temp_8.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_7628, var_converter_7725, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 167)) ;
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
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_10513_1, var_receiverValue_10529, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 228)) ;
  GGS_ctMap var_varMap_10557 = GGS_ctMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeImplicitConverterToBoolean temp_0 = this ;
  var_varMap_10557.setter_insertKey (temp_0.readProperty_mReceiverName (), var_receiverValue_10529, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 230)) ;
  }
  GGS_bigint var_result_10698 ;
  const GGS_compileTimeImplicitConverterToBoolean temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mExpression ().ptr (), var_varMap_10557, var_result_10698, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 231)) ;
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_compileTime (GGS_bool (ComparisonKind::notEqual, var_result_10698.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 232))))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 232)) ;
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
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("convert-to-boolean.galgas3", 253)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 254))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 254)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_assignmentGenerationVarMap var_varMap_11686 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmImplicitConverterToBoolean temp_2 = this ;
    var_varMap_11686.setter_insertKey (temp_2.readProperty_mReceiverName (), extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 257)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 257)) ;
    }
    GGS_string var_resultLLVMName_11780 = GGS_string ("%temp").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("convert-to-boolean.galgas3", 258)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 258)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 259)) ;
    {
    var_varMap_11686.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("convert-to-boolean.galgas3", 260)), var_resultLLVMName_11780, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 260)) ;
    }
    GGS_assignmentGenerationVarMap var_typeMap_11974 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmImplicitConverterToBoolean temp_3 = this ;
    const GGS_llvmImplicitConverterToBoolean temp_4 = this ;
    var_typeMap_11974.setter_insertKey (temp_3.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 263)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 263)) ;
    }
    GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 265)) ;
    GGS_stringlist var_generatedInstructions_12090 = temp_5 ;
    const GGS_llvmImplicitConverterToBoolean temp_6 = this ;
    extensionMethod_generateIRCode (temp_6.readProperty_mInstructionList (), var_varMap_11686, var_typeMap_11974, var_generatedInstructions_12090, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 266)) ;
    UpEnumerator_stringlist enumerator_12258 (var_generatedInstructions_12090) ;
    while (enumerator_12258.hasCurrentObject ()) {
      {
      GGS_stringset temp_7 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 268)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_12258.current_mValue (HERE), temp_7, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 268)) ;
      }
      enumerator_12258.gotoNextObject () ;
    }
    outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (var_resultLLVMName_11780  COMMA_SOURCE_FILE ("convert-to-boolean.galgas3", 270)) ;
  }
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inCalledRoutineDictionary.getter_hasKey (constinArgument_inCallerRoutineMode COMMA_SOURCE_FILE ("logical-modes.galgas3", 184)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      constinArgument_inCalledRoutineDictionary.method_searchKey (constinArgument_inCallerRoutineMode, result_result, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas3", 185)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_m_8428 = GGS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas3", 187)).add_operation (GGS_string ("' routine cannot be invoked from '"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas3", 187)).add_operation (extensionGetter_string (constinArgument_inCallerRoutineMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas3", 187)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas3", 187)).add_operation (GGS_string ("' mode, but only from:"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas3", 187)) ;
    UpEnumerator_routineLLVMNameDict enumerator_8557 (constinArgument_inCalledRoutineDictionary) ;
    while (enumerator_8557.hasCurrentObject ()) {
      var_m_8428.plusAssignOperation(GGS_string ("\n  - '").add_operation (extensionGetter_string (enumerator_8557.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas3", 189)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas3", 189)).add_operation (GGS_string ("' mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas3", 189)), inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas3", 189)) ;
      enumerator_8557.gotoNextObject () ;
    }
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_m_8428, fixItArray1  COMMA_SOURCE_FILE ("logical-modes.galgas3", 191)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_checkModeAndReturnsRoutineLLVMName [4] = {
  & kTypeDescriptor_GALGAS_routineLLVMNameDict,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName (Compiler * inCompiler,
                                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
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
//Overriding extension getter '@compiletimeBoolAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compiletimeBoolAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas3", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compiletimeBoolAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimeBoolAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_1038 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas3", 21)) ;
  {
  const GGS_compiletimeBoolAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1038, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 22)) ;
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
  result_outRepresentation = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 28)) ;
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
                                                            const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
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
  GGS_lstring var_ctBoolTypeName_2461 = function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 51)).getter_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas3", 51)) ;
  GGS_omnibusType var_ctBoolType_2510 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 52)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctBoolTypeName_2461, var_ctBoolType_2510, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 54)) ;
  }
  GGS_lstring var_key_2674 = function_prefixOperatorMapKey (var_ctBoolType_2510, GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("compile-time-type-bool.galgas3", 56)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas3", 56)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 56)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2674, var_ctBoolType_2510, var_ctBoolType_2510, GGS_compileTimeBoolNotOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 57)) ;
  }
  var_key_2674 = function_infixOperatorMapKey (var_ctBoolType_2510, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-type-bool.galgas3", 59)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas3", 59)), var_ctBoolType_2510, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 59)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2674, var_ctBoolType_2510, GGS_compileTimeBoolOrOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 60)) ;
  }
  var_key_2674 = function_infixOperatorMapKey (var_ctBoolType_2510, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-type-bool.galgas3", 62)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas3", 62)), var_ctBoolType_2510, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 62)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2674, var_ctBoolType_2510, GGS_compileTimeBoolXorOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 63)) ;
  }
  var_key_2674 = function_infixOperatorMapKey (var_ctBoolType_2510, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("compile-time-type-bool.galgas3", 65)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas3", 65)), var_ctBoolType_2510, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2674, var_ctBoolType_2510, GGS_compileTimeBoolEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 66)) ;
  }
  var_key_2674 = GGS_lstring::init_21__21_ (var_ctBoolType_2510.readProperty_omnibusTypeDescriptionName (), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-bool.galgas3", 68)), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2674, GGS_compileTimeBoolImplicitConverterToBoolean::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 69)) ;
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
  GGS_bigint var_receiverValue_4542 ;
  GGS_omnibusType joker_4526_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_4526_1, var_receiverValue_4542, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 89)) ;
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_compileTime (GGS_bool (ComparisonKind::notEqual, var_receiverValue_4542.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 90))))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 90)) ;
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
  GGS_bigint var_receiverValue_5501 ;
  GGS_omnibusType joker_5485_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_5485_1, var_receiverValue_5501, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 112)) ;
  GGS_bigint temp_0 ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, var_receiverValue_5501.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 113)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 113)) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 113)) ;
  }
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, temp_0  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 113)) ;
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
  GGS_bigint var_leftValue_6480 ;
  GGS_omnibusType joker_6464_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_6464_1, var_leftValue_6480, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 135)) ;
  GGS_bigint var_rightValue_6547 ;
  GGS_omnibusType joker_6531_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_6531_1, var_rightValue_6547, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 136)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::equal, var_leftValue_6480.objectCompare (var_rightValue_6547)).getter_bigint (SOURCE_FILE ("compile-time-type-bool.galgas3", 137))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 137)) ;
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
  GGS_bigint var_leftValue_7370 ;
  GGS_omnibusType joker_7354_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_7354_1, var_leftValue_7370, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 157)) ;
  GGS_bigint var_rightValue_7437 ;
  GGS_omnibusType joker_7421_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_7421_1, var_rightValue_7437, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 158)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_7370.operator_xor (var_rightValue_7437 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 159))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 159)) ;
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
  GGS_bigint var_leftValue_8257 ;
  GGS_omnibusType joker_8241_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_8241_1, var_leftValue_8257, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 179)) ;
  GGS_bigint var_rightValue_8324 ;
  GGS_omnibusType joker_8308_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_8308_1, var_rightValue_8324, inCompiler COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 180)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_8257.operator_or (var_rightValue_8324 COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 181))  COMMA_SOURCE_FILE ("compile-time-type-bool.galgas3", 181)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmSeparatorLine'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmSeparatorLine (Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (";-------------------------------------------------------------------------") ;
  result_result.plusAssignOperation(GGS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 57)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmSeparatorLine = false ;
static GGS_string gOnceFunctionResult_llvmSeparatorLine ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmSeparatorLine (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmSeparatorLine) {
    gOnceFunctionResult_llvmSeparatorLine = onceFunction_llvmSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmSeparatorLine = true ;
  }
  return gOnceFunctionResult_llvmSeparatorLine ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmSeparatorLine (void) {
  gOnceFunctionResult_llvmSeparatorLine.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmSeparatorLine (nullptr,
                                                             releaseOnceFunctionResult_llvmSeparatorLine) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmSeparatorLine [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmSeparatorLine (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_llvmSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmSeparatorLine ("llvmSeparatorLine",
                                                                   functionWithGenericHeader_llvmSeparatorLine,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_llvmSeparatorLine) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmTitleComment'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmTitleComment (const GGS_string & constinArgument_inTitle,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outTitle ; // Returned variable
  result_outTitle = function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 63)) ;
  result_outTitle.plusAssignOperation(GGS_string (";    ").add_operation (constinArgument_inTitle.getter_rightPadding (GGS_uint (uint32_t (114U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("code-generation.galgas3", 64)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 64)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 64)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 64)) ;
  result_outTitle.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 65)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 65)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 65)) ;
//---
  return result_outTitle ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmTitleComment (Compiler * inCompiler,
                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmTitleComment (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmTitleComment ("llvmTitleComment",
                                                                  functionWithGenericHeader_llvmTitleComment,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_llvmTitleComment) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'asSeparatorLine'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_asSeparatorLine (Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@-------------------------------------------------------------------------") ;
  result_result.plusAssignOperation(GGS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 72)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_asSeparatorLine = false ;
static GGS_string gOnceFunctionResult_asSeparatorLine ;

//--------------------------------------------------------------------------------------------------

GGS_string function_asSeparatorLine (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_asSeparatorLine) {
    gOnceFunctionResult_asSeparatorLine = onceFunction_asSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_asSeparatorLine = true ;
  }
  return gOnceFunctionResult_asSeparatorLine ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_asSeparatorLine (void) {
  gOnceFunctionResult_asSeparatorLine.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_asSeparatorLine (nullptr,
                                                           releaseOnceFunctionResult_asSeparatorLine) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_asSeparatorLine [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_asSeparatorLine (Compiler * inCompiler,
                                                             const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_asSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_asSeparatorLine ("asSeparatorLine",
                                                                 functionWithGenericHeader_asSeparatorLine,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_asSeparatorLine) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'asTitleComment'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_asTitleComment (const GGS_string & constinArgument_inTitle,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outTitle ; // Returned variable
  result_outTitle = function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 78)) ;
  result_outTitle.plusAssignOperation(GGS_string ("@    ").add_operation (constinArgument_inTitle.getter_rightPadding (GGS_uint (uint32_t (114U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("code-generation.galgas3", 79)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 79)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 79)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 79)) ;
  result_outTitle.plusAssignOperation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 80)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 80)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 80)) ;
//---
  return result_outTitle ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_asTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_asTitleComment (Compiler * inCompiler,
                                                            const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_asTitleComment (operand0,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_asTitleComment ("asTitleComment",
                                                                functionWithGenericHeader_asTitleComment,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                1,
                                                                functionArgs_asTitleComment) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'codeGeneration?currentDir?outputFile?eof?intermediateCode?userDefinedTypes?target?panicCodeType?panicLineType?interrupts?staticlistValues?targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_codeGeneration_3F_currentDir_3F_outputFile_3F_eof_3F_intermediateCode_3F_userDefinedTypes_3F_target_3F_panicCodeType_3F_panicLineType_3F_interrupts_3F_staticlistValues_3F_targetParameters (const GGS_string constinArgument_inCurrentDirectory,
                                                                                                                                                                                                          const GGS_string constinArgument_inSourceFileName,
                                                                                                                                                                                                          const GGS_location constinArgument_inEndOfSourceFileLocation,
                                                                                                                                                                                                          const GGS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                                                                                                                                                                                                          const GGS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                                                                                                                                                                                                          const GGS_lstring constinArgument_inTargetName,
                                                                                                                                                                                                          const GGS_omnibusType constinArgument_inPanicCodeType,
                                                                                                                                                                                                          const GGS_omnibusType constinArgument_inPanicLineType,
                                                                                                                                                                                                          const GGS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                                                                                                                                                                                                          const GGS_staticListInitializationMap constinArgument_inStaticListValueMap,
                                                                                                                                                                                                          const GGS_targetParameters constinArgument_inTargetParameters,
                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_timer var_generationTime_3935 = GGS_timer::class_func_start (SOURCE_FILE ("code-generation.galgas3", 98)) ;
  GGS_string var_homeDir_3965 = GGS_string::class_func_homeDirectory (SOURCE_FILE ("code-generation.galgas3", 99)).add_operation (GGS_string ("/omnibus-products/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 99)) ;
  GGS_string temp_0 ;
  const GalgasBool test_1 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("no-panic") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string::makeEmptyString () ;
  }
  GGS_string var_productDirectory_4076 = var_homeDir_3965.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 101)).add_operation (constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("code-generation.galgas3", 103)).getter_replacing (GGS_string ("/"), GGS_string ("+"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 103)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 102)) ;
  GGS_string var_sourceDirectory_4266 = var_productDirectory_4076.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 104)) ;
  var_sourceDirectory_4266.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 105)) ;
  {
  routine_generateTarget_3F_currentDir_3F_productDirectory_3F_targetName_3F_targetParameters (constinArgument_inCurrentDirectory, var_productDirectory_4076, constinArgument_inTargetName, constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters (), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 107)) ;
  }
  {
  routine_generateCodeFiles_3F_currentDir_3F_productDir_3F_intermediateCode_3F_userDefinedTypes_3F_target_3F_panicCodeType_3F_panicLineType_3F_interrupts_3F_staticlistValues_3F_targetParameters (constinArgument_inCurrentDirectory, var_productDirectory_4076, constinArgument_inIntermediateCodeStruct, constinArgument_inUserLLVMTypeDefinitionListIR, constinArgument_inTargetName, constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inAvailableInterruptMap, constinArgument_inStaticListValueMap, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 114)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      routine_print_3F_ (GGS_string ("** Code generation: ").add_operation (var_generationTime_3935.getter_string (SOURCE_FILE ("code-generation.galgas3", 127)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 127)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 127)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 127)) ;
      }
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("code-generation.galgas3", 130)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_timer var_scriptTime_5274 = GGS_timer::class_func_start (SOURCE_FILE ("code-generation.galgas3", 131)) ;
      GGS_string temp_4 ;
      const GalgasBool test_5 = GGS_bool (gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("run") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string ("build") ;
      }
      GGS_string var_script_5302 = temp_4 ;
      GGS_string var_fullScript_5419 = GGS_string ("python3 ").add_operation (var_productDirectory_4076, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 133)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 133)).add_operation (var_script_5302, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 133)).add_operation (GGS_string (".py"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 133)) ;
      GGS_sint var_result_5499 = var_fullScript_5419.getter_system (SOURCE_FILE ("code-generation.galgas3", 134)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_result_5499.objectCompare (GGS_sint (int32_t (0L)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfSourceFileLocation, GGS_string ("error during LLVM compilation or flashing"), fixItArray7  COMMA_SOURCE_FILE ("code-generation.galgas3", 136)) ;
        }
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          {
          routine_print_3F_ (GGS_string ("** Compilation script: ").add_operation (var_scriptTime_5274.getter_string (SOURCE_FILE ("code-generation.galgas3", 139)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 139)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 139)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 139)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateCodeFiles?currentDir?productDir?intermediateCode?userDefinedTypes?target?panicCodeType?panicLineType?interrupts?staticlistValues?targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_generateCodeFiles_3F_currentDir_3F_productDir_3F_intermediateCode_3F_userDefinedTypes_3F_target_3F_panicCodeType_3F_panicLineType_3F_interrupts_3F_staticlistValues_3F_targetParameters (const GGS_string constinArgument_inCurrentDirectory,
                                                                                                                                                                                                      const GGS_string constinArgument_inProductDirectory,
                                                                                                                                                                                                      const GGS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                                                                                                                                                                                                      const GGS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                                                                                                                                                                                                      const GGS_lstring constinArgument_inTargetName,
                                                                                                                                                                                                      const GGS_omnibusType constinArgument_inPanicCodeType,
                                                                                                                                                                                                      const GGS_omnibusType constinArgument_inPanicLineType,
                                                                                                                                                                                                      const GGS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                                                                                                                                                                                                      const GGS_staticListInitializationMap constinArgument_inStaticListValueMap,
                                                                                                                                                                                                      const GGS_targetParameters constinArgument_inTargetParameters,
                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationAdds var_generationAdds_6908 = GGS_generationAdds::init (inCompiler COMMA_HERE) ;
  var_generationAdds_6908.mProperty_mStaticEntityMap = constinArgument_inIntermediateCodeStruct.readProperty_mStaticEntityMap () ;
  GGS_generationContext var_generationContext_7032 = GGS_generationContext::init_21__21__21__21__21_ (constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inTargetParameters.readProperty_mNopInstructionStringInLLVM ().readProperty_string (), constinArgument_inIntermediateCodeStruct.readProperty_mGlobalTaskVariableList (), constinArgument_inAvailableInterruptMap, inCompiler COMMA_HERE) ;
  GGS_string var_sourceDirectory_7249 = constinArgument_inProductDirectory.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 177)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inTargetParameters.readProperty_mHandleDynamicArray ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_generationAdds_6908.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("void @arc.retain (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas3", 180)) ;
      var_generationAdds_6908.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("void @arc.release (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas3", 181)) ;
      var_generationAdds_6908.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("%ptrtype @arc.insulate (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas3", 182)) ;
      GGS_string var_insertFunction_7711 = GGS_string ("%ptrtype @arc.insert.at.index ").add_operation (GGS_string ("(%ptrtype %inPointer, i32 %inIndex, i32 %inElementSize, %ptrtype* %outElementPtr)"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 183)) ;
      var_generationAdds_6908.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (var_insertFunction_7711  COMMA_SOURCE_FILE ("code-generation.galgas3", 185)) ;
      var_generationAdds_6908.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("i32 @arc.length (%ptrtype %inPointer)")  COMMA_SOURCE_FILE ("code-generation.galgas3", 186)) ;
    }
  }
  GGS_string var_asCode_8119 = function_asTitleComment (GGS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 189)) ;
  GGS_string var_asFileContents_8175 = GGS_string::makeEmptyString () ;
  UpEnumerator_lstringlist enumerator_8202 (constinArgument_inTargetParameters.readProperty_m_5F_S_5F_definitionFiles ()) ;
  while (enumerator_8202.hasCurrentObject ()) {
    var_asFileContents_8175.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 194)).add_operation (enumerator_8202.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 194)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 192)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 192)) ;
    enumerator_8202.gotoNextObject () ;
  }
  GGS_string var_x_8411 = var_asFileContents_8175.getter_replacing (GGS_string ("!FUNC!"), function_llvmNameForFunction (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 197)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 197)) ;
  var_asCode_8119.plusAssignOperation(var_x_8411.getter_replacing (GGS_string ("!ISR!"), function_llvmNameForSectionInterrupt (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 198)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 198)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 198)) ;
  var_asCode_8119.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 199)) ;
  GGS_string var_llvmCode_8651 = function_llvmTitleComment (GGS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 201)) ;
  GGS_string var_targetLLVMcode_8711 = GGS_string::makeEmptyString () ;
  UpEnumerator_lstringlist enumerator_8738 (constinArgument_inTargetParameters.readProperty_m_5F_LL_5F_definitionFiles ()) ;
  while (enumerator_8738.hasCurrentObject ()) {
    var_targetLLVMcode_8711.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 206)).add_operation (enumerator_8738.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 206)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 204)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 204)) ;
    enumerator_8738.gotoNextObject () ;
  }
  var_llvmCode_8651.plusAssignOperation(var_targetLLVMcode_8711.getter_replacing (GGS_string ("!FUNC!"), function_llvmNameForFunction (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 209)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 209)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 209)) ;
  var_llvmCode_8651.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 210)) ;
  {
  routine_declareLLVMTypes_3F__26_ (constinArgument_inUserLLVMTypeDefinitionListIR, var_llvmCode_8651, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 212)) ;
  }
  UpEnumerator_driverListIR enumerator_9262 (constinArgument_inIntermediateCodeStruct.readProperty_mDriverList ()) ;
  const bool bool_1 = true ;
  if (enumerator_9262.hasCurrentObject () && bool_1) {
    var_llvmCode_8651.plusAssignOperation(function_llvmTitleComment (GGS_string ("Driver variable definitions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 215)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 215)) ;
    while (enumerator_9262.hasCurrentObject () && bool_1) {
      extensionMethod_generateLLVMDriverVariableDefinition (enumerator_9262.current (HERE), var_llvmCode_8651, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 216)) ;
      enumerator_9262.gotoNextObject () ;
    }
    var_llvmCode_8651.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 217)) ;
  }
  extensionMethod_generateLLVMcode (constinArgument_inIntermediateCodeStruct.readProperty_mControlRegisterGroupArrayList (), var_llvmCode_8651, constinArgument_inTargetParameters.readProperty_mPointerSize (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 220)) ;
  UpEnumerator_globalSyncInstanceMapIR enumerator_9757 (constinArgument_inIntermediateCodeStruct.readProperty_mGlobalSyncInstanceMap ()) ;
  const bool bool_2 = true ;
  if (enumerator_9757.hasCurrentObject () && bool_2) {
    var_llvmCode_8651.plusAssignOperation(function_llvmTitleComment (GGS_string ("Global synchronization tool instances"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 223)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 223)) ;
    while (enumerator_9757.hasCurrentObject () && bool_2) {
      extensionMethod_generateLLVM (enumerator_9757.current (HERE), var_llvmCode_8651, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 224)) ;
      enumerator_9757.gotoNextObject () ;
    }
    var_llvmCode_8651.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 225)) ;
  }
  extensionMethod_generateLLVMForStaticLists (constinArgument_inStaticListValueMap, constinArgument_inIntermediateCodeStruct.readProperty_mStaticArrayMapForIntermediate (), var_llvmCode_8651, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 228)) ;
  extensionMethod_generateLLVMDriverCode (constinArgument_inIntermediateCodeStruct.readProperty_mDriverList (), var_llvmCode_8651, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 230)) ;
  extensionMethod_llvmRoutineGeneration (constinArgument_inIntermediateCodeStruct.readProperty_mRoutineListIR (), var_llvmCode_8651, var_generationContext_7032, var_generationAdds_6908, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 232)) ;
  GGS_string var_undefinedInterruptString_10515 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 240)).add_operation (constinArgument_inTargetParameters.readProperty_mUndefinedInterruptHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 240)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 238)) ;
  GGS_string var_XTRInterruptHandlerString_10691 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 244)).add_operation (constinArgument_inTargetParameters.readProperty_mXtrInterruptHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 244)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 242)) ;
  extensionMethod_interruptCodeGeneration (constinArgument_inIntermediateCodeStruct.readProperty_mInterruptMapIR (), var_llvmCode_8651, var_asCode_8119, var_undefinedInterruptString_10515, var_XTRInterruptHandlerString_10691, var_generationContext_7032, var_generationAdds_6908, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 246)) ;
  extensionMethod_llvmPrototypeGeneration (constinArgument_inIntermediateCodeStruct.readProperty_mExternProcedureMapIR (), var_llvmCode_8651, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 255)) ;
  GGS_primitiveAndServiceIRlist temp_3 = GGS_primitiveAndServiceIRlist::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 256)) ;
  GGS_primitiveAndServiceIRlist var_primitiveAndServiceList_11242 = temp_3 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_generationAdds_6908.readProperty_mUsesGuards ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_string var_waitForGuardChange_11374 = function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 259)) ;
      var_primitiveAndServiceList_11242.addAssignOperation (function_llvmNameForServiceCall (var_waitForGuardChange_11374, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 261)), function_llvmNameForServiceImplementation (var_waitForGuardChange_11374, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 262)), GGS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas3", 260)) ;
      var_generationAdds_6908.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("i1 @").add_operation (function_llvmNameForServiceCall (var_waitForGuardChange_11374, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 265)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 265)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 265))  COMMA_SOURCE_FILE ("code-generation.galgas3", 264)) ;
    }
  }
  GGS_sectionIRlist temp_5 = GGS_sectionIRlist::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 268)) ;
  GGS_sectionIRlist var_sectionIRlist_11824 = temp_5 ;
  UpEnumerator_routineListIR enumerator_11886 (constinArgument_inIntermediateCodeStruct.readProperty_mRoutineListIR ()) ;
  while (enumerator_11886.hasCurrentObject ()) {
    callExtensionMethod_svcDeclarationGeneration ((cPtr_abstractRoutineIR *) enumerator_11886.current (HERE).readProperty_mRoutine ().ptr (), var_primitiveAndServiceList_11242, var_sectionIRlist_11824, var_generationAdds_6908, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 270)) ;
    enumerator_11886.gotoNextObject () ;
  }
  extensionMethod_generateCode (constinArgument_inIntermediateCodeStruct.readProperty_mTaskMapIR (), var_llvmCode_8651, var_generationContext_7032, var_generationAdds_6908, var_primitiveAndServiceList_11242, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 277)) ;
  {
  routine_generatePrimitiveAndServiceDispatcher_3F__3F__26__3F__3F_targetParameters (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string (), var_asCode_8119, var_primitiveAndServiceList_11242, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 284)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("code-generation.galgas3", 292)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      routine_generatePanicCode_26__3F_generationContext_26_generationAdds (var_llvmCode_8651, var_generationContext_7032, var_generationAdds_6908, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 293)) ;
      }
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_generationAdds_6908.readProperty_mNeedsDynamicMemoryAllocation ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_sectionIRlist_11824.addAssignOperation (function_llvmNameForSectionCall (function_memoryAllocSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 302)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 302)), function_llvmNameForSectionImplementation (function_memoryAllocSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 303)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 303)), GGS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas3", 301)) ;
      var_sectionIRlist_11824.addAssignOperation (function_llvmNameForSectionCall (function_memoryFreeSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 306)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 306)), function_llvmNameForSectionImplementation (function_memoryFreeSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 307)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 307)), GGS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas3", 305)) ;
    }
  }
  {
  routine_generateSectionDispatcher_3F__3F__3F_targetParameters_26__3F_ (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string (), constinArgument_inTargetParameters, var_asCode_8119, var_sectionIRlist_11824, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 310)) ;
  }
  var_llvmCode_8651.plusAssignOperation(function_llvmTitleComment (GGS_string ("LLVM extern functions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 318)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 318)) ;
  UpEnumerator_stringset enumerator_13525 (var_generationAdds_6908.readProperty_mExternFunctionDeclarationSet ()) ;
  while (enumerator_13525.hasCurrentObject ()) {
    var_llvmCode_8651.plusAssignOperation(GGS_string ("declare ").add_operation (enumerator_13525.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 320)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 320)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 320)) ;
    enumerator_13525.gotoNextObject () ;
  }
  var_llvmCode_8651.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 322)) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::greaterThan, var_generationAdds_6908.readProperty_mStaticEntityMap ().readProperty_mStaticStringMap ().getter_count (SOURCE_FILE ("code-generation.galgas3", 324)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_llvmCode_8651.plusAssignOperation(function_llvmTitleComment (GGS_string ("Static strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 325)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 325)) ;
      UpEnumerator_staticStringMap enumerator_13837 (var_generationAdds_6908.readProperty_mStaticEntityMap ().readProperty_mStaticStringMap ()) ;
      while (enumerator_13837.hasCurrentObject ()) {
        GGS_string var_lgStr_13910 = enumerator_13837.current_lkey (HERE).readProperty_string ().getter_utf_38_Length (SOURCE_FILE ("code-generation.galgas3", 327)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 327)).getter_string (SOURCE_FILE ("code-generation.galgas3", 327)) ;
        var_llvmCode_8651.plusAssignOperation(function_literalCharacterArrayName (enumerator_13837.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 328)).add_operation (GGS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 328)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 328)) ;
        var_llvmCode_8651.plusAssignOperation(var_lgStr_13910.add_operation (GGS_string (" x i8] c\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 329)).add_operation (enumerator_13837.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 329)).add_operation (GGS_string ("\\00\", align 1\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 329)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 329)) ;
        var_llvmCode_8651.plusAssignOperation(function_literalStringName (enumerator_13837.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 330)).add_operation (GGS_string (" = private constant i8* getelementptr inbounds (["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 330)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 330)) ;
        var_llvmCode_8651.plusAssignOperation(var_lgStr_13910.add_operation (GGS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 331)).add_operation (var_lgStr_13910, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 331)).add_operation (GGS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 331)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 331)) ;
        var_llvmCode_8651.plusAssignOperation(function_literalCharacterArrayName (enumerator_13837.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 332)).add_operation (GGS_string (", i32 0, i32 0), align 4\n\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 332)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 332)) ;
        enumerator_13837.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::greaterThan, var_generationAdds_6908.readProperty_mStaticEntityMap ().readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("code-generation.galgas3", 336)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_llvmCode_8651.plusAssignOperation(function_llvmTitleComment (GGS_string ("Global structured constants"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 337)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 337)) ;
      UpEnumerator_globalStructuredConstantList enumerator_14617 (var_generationAdds_6908.readProperty_mStaticEntityMap ().readProperty_mGlobalStructuredConstantList ()) ;
      GGS_uint index_14606 (uint32_t (0)) ;
      while (enumerator_14617.hasCurrentObject ()) {
        var_llvmCode_8651.plusAssignOperation(GGS_string ("@gconst.").add_operation (index_14606.getter_string (SOURCE_FILE ("code-generation.galgas3", 339)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 339)).add_operation (GGS_string (" = private unnamed_addr constant "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 339)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14617.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 339)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 339)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 339)) ;
        var_llvmCode_8651.plusAssignOperation(GGS_string (" ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 340)) ;
        UpEnumerator_operandIRList enumerator_14835 (enumerator_14617.current_mOperandIRList (HERE)) ;
        while (enumerator_14835.hasCurrentObject ()) {
          var_llvmCode_8651.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_14835.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 342)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 342)).add_operation (extensionGetter_llvmName (enumerator_14835.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 342)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 342)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 342)) ;
          enumerator_14835.gotoNextObject () ;
          if (enumerator_14835.hasCurrentObject ()) {
            var_llvmCode_8651.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 343)) ;
          }
        }
        var_llvmCode_8651.plusAssignOperation(GGS_string ("]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 345)) ;
        enumerator_14617.gotoNextObject () ;
        index_14606.increment_operation (inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 338)) ;
      }
      var_llvmCode_8651.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 347)) ;
    }
  }
  var_llvmCode_8651.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 350)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 350)) ;
  GGS_bool joker_15205 ; // Joker input parameter
  var_llvmCode_8651.method_writeToFileWhenDifferentContents (var_sourceDirectory_7249.add_operation (GGS_string ("/src.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 351)), joker_15205, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 351)) ;
  var_asCode_8119.plusAssignOperation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 353)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 353)) ;
  GGS_bool joker_15377 ; // Joker input parameter
  var_asCode_8119.method_writeToFileWhenDifferentContents (var_sourceDirectory_7249.add_operation (GGS_string ("/src.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 354)), joker_15377, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 354)) ;
  GGS_string var_s_30__15485 = GGS_string::makeEmptyString () ;
  UpEnumerator_lstringlist enumerator_15500 (constinArgument_inTargetParameters.readProperty_m_5F_C_5F_definitionFiles ()) ;
  while (enumerator_15500.hasCurrentObject ()) {
    var_s_30__15485.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 360)).add_operation (enumerator_15500.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 360)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 358)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 358)) ;
    enumerator_15500.gotoNextObject () ;
  }
  GGS_string var_s_31__15697 = var_s_30__15485.getter_replacing (GGS_string ("!TASKCOUNT!"), constinArgument_inIntermediateCodeStruct.readProperty_mTaskMapIR ().getter_count (SOURCE_FILE ("code-generation.galgas3", 363)).getter_string (SOURCE_FILE ("code-generation.galgas3", 363)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 363)) ;
  GGS_string var_s_32__15792 = var_s_31__15697.getter_replacing (GGS_string ("!GUARDCOUNT!"), constinArgument_inIntermediateCodeStruct.readProperty_mMaxBranchOfOnInstructions ().getter_string (SOURCE_FILE ("code-generation.galgas3", 364)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 364)) ;
  GGS_string var_s_33__15898 = var_s_32__15792.getter_replacing (GGS_string ("!FUNC!"), function_llvmNameForFunction (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 365)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 365)) ;
  GGS_string var_s_34__15965 = var_s_33__15898.getter_replacing (GGS_string ("!SERVICEIMPLEMENTATION!"), function_llvmNameForServiceImplementation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 366)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 366)) ;
  GGS_string var_s_35__16062 = var_s_34__15965.getter_replacing (GGS_string ("!SERVICECALL!"), function_llvmNameForServiceCall (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 367)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 367)) ;
  GGS_string var_s_36__16139 = var_s_35__16062.getter_replacing (GGS_string ("!SECTIONIMPLEMENTATION!"), function_llvmNameForSectionImplementation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 368)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 368)) ;
  GGS_string var_cppCode_16236 = var_s_36__16139.getter_replacing (GGS_string ("!SECTIONCALL!"), function_llvmNameForSectionCall (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 369)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 369)) ;
  GGS_bool joker_16644 ; // Joker input parameter
  var_cppCode_16236.method_writeToFileWhenDifferentContents (var_sourceDirectory_7249.add_operation (GGS_string ("/src.cpp"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 375)), joker_16644, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 375)) ;
  GGS_string var_jsonStr_16735 = GGS_string ("{\n") ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  \"system-stack-size\" : ").add_operation (constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters ().readProperty_mSystemStackSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("code-generation.galgas3", 379)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 379)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 379)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 379)) ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  \"stacked-register-size-on-user-stack\" : ").add_operation (constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters ().readProperty_mStackedUserRegisterOnInterruptByteSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("code-generation.galgas3", 380)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 380)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 381)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 380)) ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  \"service-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters ().readProperty_mServicePushedRegisterByteSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("code-generation.galgas3", 382)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 382)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 382)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 382)) ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  \"section-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters ().readProperty_mSectionPushedRegisterByteSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("code-generation.galgas3", 383)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 383)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 383)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 383)) ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  \"tasks\" : {"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 385)) ;
  UpEnumerator_taskMapIR enumerator_17413 (constinArgument_inIntermediateCodeStruct.readProperty_mTaskMapIR ()) ;
  while (enumerator_17413.hasCurrentObject ()) {
    var_jsonStr_16735.plusAssignOperation(GGS_string ("\n    \"").add_operation (enumerator_17413.current (HERE).readProperty_lkey ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("code-generation.galgas3", 387)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 387)).add_operation (GGS_string ("\" : "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 387)).add_operation (enumerator_17413.current (HERE).readProperty_mStackSize ().getter_string (SOURCE_FILE ("code-generation.galgas3", 387)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 387)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 387)) ;
    enumerator_17413.gotoNextObject () ;
    if (enumerator_17413.hasCurrentObject ()) {
      var_jsonStr_16735.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 388)) ;
    }
  }
  var_jsonStr_16735.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 390)) ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  },\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 391)) ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  \"services\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 393)) ;
  UpEnumerator_primitiveAndServiceIRlist enumerator_17677 (var_primitiveAndServiceList_11242) ;
  const bool bool_10 = true ;
  if (enumerator_17677.hasCurrentObject () && bool_10) {
    while (enumerator_17677.hasCurrentObject () && bool_10) {
      var_jsonStr_16735.plusAssignOperation(GGS_string ("\n    \"").add_operation (enumerator_17677.current_mImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 395)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 395)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 395)) ;
      enumerator_17677.gotoNextObject () ;
      if (enumerator_17677.hasCurrentObject () && bool_10) {
        var_jsonStr_16735.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 396)) ;
      }
    }
    var_jsonStr_16735.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 397)) ;
  }
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 399)) ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  \"sections\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 401)) ;
  UpEnumerator_sectionIRlist enumerator_17914 (var_sectionIRlist_11824) ;
  const bool bool_11 = true ;
  if (enumerator_17914.hasCurrentObject () && bool_11) {
    while (enumerator_17914.hasCurrentObject () && bool_11) {
      var_jsonStr_16735.plusAssignOperation(GGS_string ("\n    \"").add_operation (enumerator_17914.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 403)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 403)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 403)) ;
      enumerator_17914.gotoNextObject () ;
      if (enumerator_17914.hasCurrentObject () && bool_11) {
        var_jsonStr_16735.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 404)) ;
      }
    }
    var_jsonStr_16735.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 405)) ;
  }
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 407)) ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("  \"isr\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 409)) ;
  GGS_bool var_first_18127 = GGS_bool (true) ;
  UpEnumerator_interruptMapIR enumerator_18164 (constinArgument_inIntermediateCodeStruct.readProperty_mInterruptMapIR ()) ;
  while (enumerator_18164.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_first_18127.boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        var_first_18127 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      var_jsonStr_16735.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 415)) ;
    }
    GGS_string temp_13 ;
    const GalgasBool test_14 = GGS_bool (ComparisonKind::equal, enumerator_18164.current_mMode (HERE).objectCompare (GGS_mode::class_func_serviceMode (SOURCE_FILE ("code-generation.galgas3", 417)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      temp_13 = function_llvmNameForServiceInterrupt (enumerator_18164.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 418)).readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_14) {
      temp_13 = function_llvmNameForSectionInterrupt (enumerator_18164.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 420)) ;
    }
    GGS_string var_interruptImplementationName_18302 = temp_13 ;
    var_jsonStr_16735.plusAssignOperation(GGS_string ("\n    \"").add_operation (var_interruptImplementationName_18302, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 422)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 422)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 422)) ;
    enumerator_18164.gotoNextObject () ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("code-generation.galgas3", 424)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      UpEnumerator_availableInterruptMap enumerator_18641 (constinArgument_inAvailableInterruptMap) ;
      while (enumerator_18641.hasCurrentObject ()) {
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = constinArgument_inIntermediateCodeStruct.readProperty_mInterruptMapIR ().getter_hasKey (enumerator_18641.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("code-generation.galgas3", 426)).operator_not (SOURCE_FILE ("code-generation.galgas3", 426)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            switch (enumerator_18641.current_mInterruptionPanicCode (HERE).enumValue ()) {
            case GGS_interruptionPanicCode::Enumeration::invalid:
              break ;
            case GGS_interruptionPanicCode::Enumeration::enum_noCode:
              break ;
            case GGS_interruptionPanicCode::Enumeration::enum_code:
              {
                GGS_lbigint extractedValue_18829__0 ;
                enumerator_18641.current_mInterruptionPanicCode (HERE).getAssociatedValuesFor_code (extractedValue_18829__0) ;
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = var_first_18127.boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    var_first_18127 = GGS_bool (false) ;
                  }
                }
                if (GalgasBool::boolFalse == test_17) {
                  var_jsonStr_16735.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 433)) ;
                }
                var_jsonStr_16735.plusAssignOperation(GGS_string ("\n    \"").add_operation (function_llvmNameForSectionInterrupt (enumerator_18641.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 435)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 435)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 435)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 435)) ;
              }
              break ;
            }
          }
        }
        enumerator_18641.gotoNextObject () ;
      }
    }
  }
  var_jsonStr_16735.plusAssignOperation(GGS_string ("\n  ]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 440)) ;
  var_jsonStr_16735.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas3", 442)) ;
  GGS_bool joker_19206 ; // Joker input parameter
  var_jsonStr_16735.method_writeToFileWhenDifferentContents (var_sourceDirectory_7249.add_operation (GGS_string ("/provided-stacks.json"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 443)), joker_19206, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas3", 443)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enterRegisterGroupSubscriptedAddressIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_enterRegisterGroupSubscriptedAddressIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_0 = this ;
  GGS_string var_groupArrayName_983 = function_registerGroupAddressArrayLLVMname (temp_0.readProperty_mGroupName (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 29)) ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_1 = this ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_2 = this ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_3 = this ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_1.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 30)).add_operation (GGS_string (".addr = getelementptr inbounds ["), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 30)).add_operation (temp_2.readProperty_mGroupSize ().getter_string (SOURCE_FILE ("intermediate-register-group-address.galgas3", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 30)).add_operation (GGS_string (" x i32], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 30)).add_operation (temp_3.readProperty_mGroupSize ().getter_string (SOURCE_FILE ("intermediate-register-group-address.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 31)).add_operation (GGS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 31)).add_operation (var_groupArrayName_983, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 31)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 31)).add_operation (extensionGetter_llvmName (temp_4.readProperty_mIndexIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 32)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 30)) ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_5 = this ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_5.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 33)).add_operation (GGS_string (" = load i32, i32* "), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 33)).add_operation (temp_6.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 33)).add_operation (GGS_string (".addr\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas3", 33)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@constructorCallAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                           GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 49)) ;
  }
  const GGS_constructorCallAST temp_1 = this ;
  UpEnumerator_functionCallEffectiveParameterListAST enumerator_2124 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_2124.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2124.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 52)) ;
    enumerator_2124.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@constructorCallAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 61)) ;
  }
  const GGS_constructorCallAST temp_1 = this ;
  UpEnumerator_functionCallEffectiveParameterListAST enumerator_2738 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_2738.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2738.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 63)) ;
    enumerator_2738.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@constructorCallAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_string var_constructorKey_3810 = GGS_string ("(") ;
  const GGS_constructorCallAST temp_0 = this ;
  UpEnumerator_functionCallEffectiveParameterListAST enumerator_3847 (temp_0.readProperty_mParameterList ()) ;
  while (enumerator_3847.hasCurrentObject ()) {
    var_constructorKey_3810.plusAssignOperation(GGS_string ("!").add_operation (enumerator_3847.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 87)) ;
    enumerator_3847.gotoNextObject () ;
  }
  var_constructorKey_3810.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 89)) ;
  const GGS_constructorCallAST temp_1 = this ;
  GGS_omnibusType var_resultType_4000 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 91)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 91)) ;
  const GGS_constructorCallAST temp_2 = this ;
  GGS_lstring var_typeName_4071 = GGS_lstring::init_21__21_ (var_resultType_4000.readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mErrorLocation (), inCompiler COMMA_HERE) ;
  GGS_constructorMap var_constructorMap_4211 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_4071, var_constructorMap_4211, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 93)) ;
  GGS_constructorSignature var_constructorSignature_4354 ;
  GGS_constructorValue var_initValue_4380 ;
  const GGS_constructorCallAST temp_3 = this ;
  var_constructorMap_4211.method_searchKey (GGS_lstring::init_21__21_ (var_constructorKey_3810, temp_3.readProperty_mErrorLocation (), inCompiler COMMA_HERE), var_constructorSignature_4354, var_initValue_4380, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 95)) ;
  switch (var_initValue_4380.enumValue ()) {
  case GGS_constructorValue::Enumeration::invalid:
    break ;
  case GGS_constructorValue::Enumeration::enum_arrayValue:
    {
      GGS_omnibusType extractedValue_4454_elementType_0 ;
      GGS_uint extractedValue_4466_size_1 ;
      var_initValue_4380.getAssociatedValuesFor_arrayValue (extractedValue_4454_elementType_0, extractedValue_4466_size_1) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_constructorKey_3810.objectCompare (GGS_string ("(!repeated)"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_constructorCallAST temp_5 = this ;
          GGS_expressionAST var_expression_4528 = temp_5.readProperty_mParameterList ().getter_mExpressionAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 100)) ;
          GGS_objectIR var_expressionResult_5012 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) var_expression_4528.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4454_elementType_0, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5012, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 101)) ;
          const GGS_constructorCallAST temp_6 = this ;
          GGS_objectIR var_result_5047 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_5012, extractedValue_4454_elementType_0, temp_6.readProperty_mParameterList ().getter_mSelectorAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 118)).readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 114)) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = extensionGetter_isStatic (var_result_5047, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 121)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GGS_uint var_idx_5361 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas3", 122)) ;
              outArgument_outResult = GGS_objectIR::class_func_llvmArrayRepeatedStaticValue (var_resultType_4000, extractedValue_4466_size_1, var_result_5047, var_idx_5361  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 123)) ;
              GGS_operandIRList temp_8 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 124)) ;
              GGS_operandIRList var_operandIRList_5558 = temp_8 ;
              UpEnumerator_range enumerator_5601 (GGS_range (GGS_uint (uint32_t (0U)), extractedValue_4466_size_1.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 125)))) ;
              while (enumerator_5601.hasCurrentObject ()) {
                var_operandIRList_5558.addAssignOperation (var_result_5047  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 126)) ;
                enumerator_5601.gotoNextObject () ;
              }
              ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssignOperation (var_resultType_4000, var_operandIRList_5558  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 128)) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            outArgument_outResult = GGS_objectIR::class_func_llvmArrayRepeatedDynamicValue (var_resultType_4000, extractedValue_4466_size_1, var_result_5047  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 130)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GGS_string var_individualConstructor_5882 = GGS_string ("(") ;
        UpEnumerator_range enumerator_5931 (GGS_range (GGS_uint (uint32_t (0U)), extractedValue_4466_size_1.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 134)))) ;
        while (enumerator_5931.hasCurrentObject ()) {
          var_individualConstructor_5882.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 135)) ;
          enumerator_5931.gotoNextObject () ;
        }
        var_individualConstructor_5882.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 137)) ;
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, var_constructorKey_3810.objectCompare (var_individualConstructor_5882)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GGS_operandIRList temp_10 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 139)) ;
            GGS_operandIRList var_operandIRList_6102 = temp_10 ;
            GGS_bool var_resultIsStatic_6134 = GGS_bool (true) ;
            const GGS_constructorCallAST temp_11 = this ;
            UpEnumerator_functionCallEffectiveParameterListAST enumerator_6179 (temp_11.readProperty_mParameterList ()) ;
            while (enumerator_6179.hasCurrentObject ()) {
              GGS_objectIR var_expressionResult_6694 ;
              callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_6179.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4454_elementType_0, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6694, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 142)) ;
              GGS_objectIR var_result_6737 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_6694, extractedValue_4454_elementType_0, enumerator_6179.current_mSelector (HERE).readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 155)) ;
              var_operandIRList_6102.addAssignOperation (var_result_6737  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 162)) ;
              GGS_bool test_12 = var_resultIsStatic_6134 ;
              if (GalgasBool::boolTrue == test_12.boolEnum ()) {
                test_12 = extensionGetter_isStatic (var_result_6737, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 163)) ;
              }
              var_resultIsStatic_6134 = test_12 ;
              enumerator_6179.gotoNextObject () ;
            }
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = var_resultIsStatic_6134.boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_uint var_idx_7154 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas3", 166)) ;
                outArgument_outResult = GGS_objectIR::class_func_llvmArrayStaticValues (var_resultType_4000, var_operandIRList_6102, var_idx_7154  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 167)) ;
                ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssignOperation (var_resultType_4000, var_operandIRList_6102  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 168)) ;
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              outArgument_outResult = GGS_objectIR::class_func_llvmArrayDynamicValues (var_resultType_4000, var_operandIRList_6102  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 170)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          const GGS_constructorCallAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mErrorLocation (), GGS_string ("invalid constructor"), fixItArray15  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 173)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GGS_constructorValue::Enumeration::enum_null:
    {
      outArgument_outResult = GGS_objectIR::class_func_null (var_resultType_4000  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 177)) ;
    }
    break ;
  case GGS_constructorValue::Enumeration::enum_simple:
    {
      GGS_bigint extractedValue_7687_value_0 ;
      var_initValue_4380.getAssociatedValuesFor_simple (extractedValue_7687_value_0) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_constructorCallAST temp_17 = this ;
        test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas3", 179)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_constructorCallAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mErrorLocation (), var_resultType_4000.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 180)), fixItArray19  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 180)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_16) {
        outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_4000, extractedValue_7687_value_0  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 182)) ;
      }
    }
    break ;
  case GGS_constructorValue::Enumeration::enum_structure:
    {
      GGS_sortedOperandIRList extractedValue_7973_sortedOperandList_0 ;
      var_initValue_4380.getAssociatedValuesFor_structure (extractedValue_7973_sortedOperandList_0) ;
      GGS_sortedOperandIRList var_sortedOperandIRList_8002 = extractedValue_7973_sortedOperandList_0 ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_constructorCallAST temp_21 = this ;
        test_20 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas3", 186)).objectCompare (var_constructorSignature_4354.getter_count (SOURCE_FILE ("expression-constructor-call.galgas3", 186)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_constructorCallAST temp_22 = this ;
          GGS_string temp_23 ;
          const GalgasBool test_24 = GGS_bool (ComparisonKind::greaterThan, var_constructorSignature_4354.getter_count (SOURCE_FILE ("expression-constructor-call.galgas3", 188)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_24) {
            temp_23 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_24) {
            temp_23 = GGS_string::makeEmptyString () ;
          }
          const GGS_constructorCallAST temp_25 = this ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mErrorLocation (), GGS_string ("this constructor call should name ").add_operation (var_constructorSignature_4354.getter_count (SOURCE_FILE ("expression-constructor-call.galgas3", 187)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas3", 187)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 187)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 187)).add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 187)).add_operation (GGS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 188)).add_operation (temp_25.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas3", 189)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas3", 189)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 189)), fixItArray26  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 187)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_20) {
        const GGS_constructorCallAST temp_27 = this ;
        UpEnumerator_constructorSignature enumerator_8417 (var_constructorSignature_4354) ;
        UpEnumerator_functionCallEffectiveParameterListAST enumerator_8483 (temp_27.readProperty_mParameterList ()) ;
        while (enumerator_8417.hasCurrentObject () && enumerator_8483.hasCurrentObject ()) {
          GalgasBool test_28 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_28) {
            test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_8483.current_mSelector (HERE).readProperty_string ().objectCompare (enumerator_8417.current_mSelector (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_28) {
              GenericArray <FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_8483.current_mSelector (HERE).readProperty_location (), GGS_string ("the selector should be '!").add_operation (enumerator_8417.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 194)).add_operation (GGS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 194)), fixItArray29  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 194)) ;
            }
          }
          GGS_objectIR var_expressionResult_9165 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_8483.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_8417.current_mType (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_9165, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 196)) ;
          GGS_objectIR var_result_9204 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_9165, enumerator_8417.current_mType (HERE), enumerator_8483.current_mSelector (HERE).readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 209)) ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_9204, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 216)) ;
          }
          var_sortedOperandIRList_8002.addAssignOperation (var_result_9204, enumerator_8417.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 217)) ;
          enumerator_8417.gotoNextObject () ;
          enumerator_8483.gotoNextObject () ;
        }
        outArgument_outResult = GGS_objectIR::class_func_llvmStructureValue (var_resultType_4000, var_sortedOperandIRList_8002  COMMA_SOURCE_FILE ("expression-constructor-call.galgas3", 219)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@staticListAST enterExtension'
//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterExtension (GGS_extendStaticArrayDeclarationDictAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                GGS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_staticListAST temp_1 = this ;
    test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (temp_1.readProperty_mStaticListName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 162)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_staticListValueListAST var_elements_6318 ;
      {
      const GGS_staticListAST temp_2 = this ;
      ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (temp_2.readProperty_mStaticListName ().readProperty_string (), var_elements_6318, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 163)) ;
      }
      const GGS_staticListAST temp_3 = this ;
      const GGS_staticListAST temp_4 = this ;
      const GGS_staticListAST temp_5 = this ;
      outArgument_outNewDeclaration = GGS_staticListAST::init_21__21__21_ (temp_3.readProperty_mStaticListName (), temp_4.readProperty_mPropertyList (), temp_5.readProperty_mValueList ().add_operation (var_elements_6318, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 167)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_staticListAST temp_6 = this ;
    outArgument_outNewDeclaration = temp_6 ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@staticListAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_staticListAST temp_0 = this ;
  const GGS_staticListAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mStaticListName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 180)) ;
  }
  {
  const GGS_staticListAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mStaticListName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 181)) COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 181)) ;
  }
  const GGS_staticListAST temp_3 = this ;
  UpEnumerator_staticListPropertyListAST enumerator_7137 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_7137.hasCurrentObject ()) {
    switch (enumerator_7137.current_mPropertyType (HERE).enumValue ()) {
    case GGS_staticListPropertyTypeAST::Enumeration::invalid:
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_valueType:
      {
        GGS_lstring extractedValue_7213_propertyTypeName_0 ;
        enumerator_7137.current_mPropertyType (HERE).getAssociatedValuesFor_valueType (extractedValue_7213_propertyTypeName_0) ;
        {
        const GGS_staticListAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mStaticListName (), extractedValue_7213_propertyTypeName_0 COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 186)) ;
        }
      }
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_function:
      {
        GGS_mode extractedValue_7328__0 ;
        GGS_routineFormalArgumentListAST extractedValue_7360_formalArgs_1 ;
        GGS_lstring extractedValue_7380_returnType_2 ;
        enumerator_7137.current_mPropertyType (HERE).getAssociatedValuesFor_function (extractedValue_7328__0, extractedValue_7360_formalArgs_1, extractedValue_7380_returnType_2) ;
        UpEnumerator_routineFormalArgumentListAST enumerator_7432 (extractedValue_7360_formalArgs_1) ;
        while (enumerator_7432.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7432.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 189)) ;
          }
          enumerator_7432.gotoNextObject () ;
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, extractedValue_7380_returnType_2.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            {
            const GGS_staticListAST temp_6 = this ;
            ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mStaticListName (), extractedValue_7380_returnType_2 COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 192)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_7137.gotoNextObject () ;
  }
  const GGS_staticListAST temp_7 = this ;
  UpEnumerator_staticListValueListAST enumerator_7724 (temp_7.readProperty_mValueList ()) ;
  while (enumerator_7724.hasCurrentObject ()) {
    UpEnumerator_extendStaticListElementAST enumerator_7766 (enumerator_7724.current_mElement (HERE)) ;
    while (enumerator_7766.hasCurrentObject ()) {
      switch (enumerator_7766.current_mExpression (HERE).enumValue ()) {
      case GGS_extendStaticListExpressionAST::Enumeration::invalid:
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_expression:
        {
          GGS_expressionAST extractedValue_7840_exp_0 ;
          enumerator_7766.current_mExpression (HERE).getAssociatedValuesFor_expression (extractedValue_7840_exp_0) ;
          const GGS_staticListAST temp_8 = this ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_7840_exp_0.ptr (), temp_8.readProperty_mStaticListName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 201)) ;
        }
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_function:
        {
          GGS_lstring extractedValue_7951__0 ;
          GGS_routineFormalArgumentListAST extractedValue_7983_formalArgs_1 ;
          enumerator_7766.current_mExpression (HERE).getAssociatedValuesFor_function (extractedValue_7951__0, extractedValue_7983_formalArgs_1) ;
          UpEnumerator_routineFormalArgumentListAST enumerator_8037 (extractedValue_7983_formalArgs_1) ;
          while (enumerator_8037.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_8037.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 204)) ;
            }
            enumerator_8037.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7766.gotoNextObject () ;
    }
    enumerator_7724.gotoNextObject () ;
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
  result_result = GGS_string ("staticlist ").add_operation (temp_0.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 220)) ;
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
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 230)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_omnibusNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_omnibusNameForStaticListType (Compiler * inCompiler,
                                                                          const GALGAS_ObjectArray & inEffectiveParameterArray,
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
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist-").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 236)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForStaticListType (Compiler * inCompiler,
                                                                       const GALGAS_ObjectArray & inEffectiveParameterArray,
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
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 242)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_omnibusNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_omnibusNameForStaticListElementType (Compiler * inCompiler,
                                                                                 const GALGAS_ObjectArray & inEffectiveParameterArray,
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
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas3", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 248)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForStaticListElementType (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
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
//Overriding extension method '@staticListAST enterInContext'
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
  GGS_propertyList temp_0 = GGS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 279)) ;
  GGS_propertyList var_propertyList_11382 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 281)) ;
  GGS_stringset var_propertyNameSet_11465 = temp_1 ;
  const GGS_staticListAST temp_2 = this ;
  GGS_lstring var_omnibusElementTypeName_11493 = function_omnibusNameForStaticListElementType (temp_2.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 282)) ;
  GGS_unifiedTypeMapEntry var_elementTypeProxy_11641 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11493, var_elementTypeProxy_11641, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 283)) ;
  }
  const GGS_staticListAST temp_3 = this ;
  UpEnumerator_staticListPropertyListAST enumerator_11775 (temp_3.readProperty_mPropertyList ()) ;
  GGS_uint index_11757 (uint32_t (0)) ;
  while (enumerator_11775.hasCurrentObject ()) {
    switch (enumerator_11775.current_mPropertyType (HERE).enumValue ()) {
    case GGS_staticListPropertyTypeAST::Enumeration::invalid:
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_valueType:
      {
        GGS_lstring extractedValue_11867_propertyTypeName_0 ;
        enumerator_11775.current_mPropertyType (HERE).getAssociatedValuesFor_valueType (extractedValue_11867_propertyTypeName_0) ;
        GGS_omnibusType var_propertyType_11897 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_11867_propertyTypeName_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 288)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = var_propertyNameSet_11465.getter_hasKey (enumerator_11775.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 289)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_11775.current_mPropertyName (HERE).readProperty_location (), GGS_string ("duplicated property name"), fixItArray5  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 290)) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          var_propertyNameSet_11465.plusPlusAssignOperation (enumerator_11775.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 292)) ;
          var_propertyList_11382.addAssignOperation (enumerator_11775.current_mPropertyName (HERE).readProperty_string (), var_propertyType_11897  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 293)) ;
          {
          const GGS_staticListAST temp_6 = this ;
          extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListElementType (temp_6.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 295)), enumerator_11775.current_mPropertyName (HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("declaration-static-list.galgas3", 297)), GGS_propertyGetterKind::class_func_storedProperty (var_propertyType_11897, index_11757  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 298)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 294)) ;
          }
        }
      }
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_function:
      {
        GGS_mode extractedValue_12461_mode_0 ;
        GGS_routineFormalArgumentListAST extractedValue_12496_formalArgs_1 ;
        GGS_lstring extractedValue_12516_returnTypeName_2 ;
        enumerator_11775.current_mPropertyType (HERE).getAssociatedValuesFor_function (extractedValue_12461_mode_0, extractedValue_12496_formalArgs_1, extractedValue_12516_returnTypeName_2) ;
        const GGS_staticListAST temp_7 = this ;
        GGS_lstring var_routineLLVMName_12572 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (temp_7.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 304)).readProperty_string (), enumerator_11775.current_mPropertyName (HERE), extractedValue_12496_formalArgs_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 303)) ;
        GGS_routineTypedSignature var_signature_12821 ;
        {
        routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_12496_formalArgs_1, var_signature_12821, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 309)) ;
        }
        GGS_unifiedTypeMapEntry temp_8 ;
        const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, extractedValue_12516_returnTypeName_2.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          temp_8 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas3", 311)) ;
        }else if (GalgasBool::boolFalse == test_9) {
          temp_8 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_12516_returnTypeName_2, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 313)) ;
        }
        GGS_unifiedTypeMapEntry var_returnTypeProxy_12863 = temp_8 ;
        GGS_omnibusType var_propertyType_13058 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("declaration-static-list.galgas3", 317)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString (), GGS_typeKind::class_func_function (extractedValue_12461_mode_0, var_signature_12821, var_returnTypeProxy_12863  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 320)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
        var_propertyList_11382.addAssignOperation (enumerator_11775.current_mPropertyName (HERE).readProperty_string (), var_propertyType_13058  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 328)) ;
        const GGS_staticListAST temp_10 = this ;
        GGS_lstring var_routineMangledName_13468 = GGS_lstring::init_21__21_ (function_omnibusNameForStaticListElementType (temp_10.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 331)).readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 331)).add_operation (enumerator_11775.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 331)).add_operation (extensionGetter_routineSignature (extractedValue_12496_formalArgs_1, enumerator_11775.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 331)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 331)), enumerator_11775.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
        {
        GGS_routineLLVMNameDict temp_11 = GGS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 339)) ;
        temp_11.plusPlusAssignOperation (GGS_routineLLVMNameDict_2E_element::init_21__21_ (GGS_mode::class_func_userMode (SOURCE_FILE ("declaration-static-list.galgas3", 339)), var_routineLLVMName_12572.readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 339)) ;
        ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_13468, GGS_bool (true), var_signature_12821, var_returnTypeProxy_12863, temp_11, GGS_bool (false), GGS_mode::class_func_userMode (SOURCE_FILE ("declaration-static-list.galgas3", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 334)) ;
        }
        ioArgument_ioRoutineListIR.addAssignOperation (GGS_staticListIndirectRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (var_routineLLVMName_12572, GGS_bool (true), GGS_bool (true), var_elementTypeProxy_11641, var_signature_12821, var_returnTypeProxy_12863, index_11757, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 344)) ;
      }
      break ;
    }
    enumerator_11775.gotoNextObject () ;
    index_11757.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 285)) ;
  }
  {
  const GGS_staticListAST temp_12 = this ;
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (temp_12.readProperty_mStaticListName (), var_propertyList_11382, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 355)) ;
  }
  const GGS_staticListAST temp_13 = this ;
  const GGS_staticListAST temp_14 = this ;
  GGS_omnibusType var_elementType_14387 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("declaration-static-list.galgas3", 358)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), function_omnibusNameForStaticListElementType (temp_13.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 360)).readProperty_string (), GGS_typeKind::class_func_structure (var_propertyList_11382  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 361)), function_llvmNameForStaticListElementType (temp_14.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 362)).readProperty_string (), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11493, var_elementType_14387, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 364)) ;
  }
  GGS_stringlist temp_15 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 366)) ;
  GGS_stringlist var_stringValueList_14882 = temp_15 ;
  const GGS_staticListAST temp_16 = this ;
  UpEnumerator_staticListValueListAST enumerator_14919 (temp_16.readProperty_mValueList ()) ;
  while (enumerator_14919.hasCurrentObject ()) {
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = GGS_bool (ComparisonKind::notEqual, var_propertyList_11382.getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 368)).objectCompare (enumerator_14919.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 368)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        const GGS_staticListAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mStaticListName ().readProperty_location (), var_propertyList_11382.getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 370)).getter_string (SOURCE_FILE ("declaration-static-list.galgas3", 370)).add_operation (GGS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 370)).add_operation (enumerator_14919.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 371)).getter_string (SOURCE_FILE ("declaration-static-list.galgas3", 371)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 370)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 371)), fixItArray19  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 369)) ;
      }
    }
    if (GalgasBool::boolFalse == test_17) {
      GGS_string var_staticValue_15151 = GGS_string ("{") ;
      UpEnumerator_extendStaticListElementAST enumerator_15188 (enumerator_14919.current_mElement (HERE)) ;
      UpEnumerator_propertyList enumerator_15213 (var_propertyList_11382) ;
      while (enumerator_15188.hasCurrentObject () && enumerator_15213.hasCurrentObject ()) {
        switch (enumerator_15188.current_mExpression (HERE).enumValue ()) {
        case GGS_extendStaticListExpressionAST::Enumeration::invalid:
          break ;
        case GGS_extendStaticListExpressionAST::Enumeration::enum_expression:
          {
            GGS_expressionAST extractedValue_15309_exp_0 ;
            enumerator_15188.current_mExpression (HERE).getAssociatedValuesFor_expression (extractedValue_15309_exp_0) ;
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = enumerator_15213.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas3", 377)).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_15188.current_mEndOfExpression (HERE), GGS_string ("a function name is expected here"), fixItArray21  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 378)) ;
              }
            }
            if (GalgasBool::boolFalse == test_20) {
              GGS_objectIR var_expressionResult_15724 ;
              {
              routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_15309_exp_0, enumerator_15188.current_mEndOfExpression (HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas3", 385)), var_expressionResult_15724, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 380)) ;
              }
              var_staticValue_15151.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15213.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 389)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 389)).add_operation (extensionGetter_llvmName (var_expressionResult_15724, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 389)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 389)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 389)) ;
            }
          }
          break ;
        case GGS_extendStaticListExpressionAST::Enumeration::enum_function:
          {
            GGS_lstring extractedValue_15932_functionName_0 ;
            GGS_routineFormalArgumentListAST extractedValue_15975_formalArgs_1 ;
            enumerator_15188.current_mExpression (HERE).getAssociatedValuesFor_function (extractedValue_15932_functionName_0, extractedValue_15975_formalArgs_1) ;
            GalgasBool test_22 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_22) {
              test_22 = enumerator_15213.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas3", 392)).operator_not (SOURCE_FILE ("declaration-static-list.galgas3", 392)).boolEnum () ;
              if (GalgasBool::boolTrue == test_22) {
                GenericArray <FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (enumerator_15188.current_mEndOfExpression (HERE), GGS_string ("a static expression is expected here"), fixItArray23  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 393)) ;
              }
            }
            if (GalgasBool::boolFalse == test_22) {
              GGS_mode var_mode_16196 ;
              GGS_routineTypedSignature var_functionSignature_16230 ;
              GGS_unifiedTypeMapEntry var_functionReturnTypeProxy_16283 ;
              enumerator_15213.current_mType (HERE).readProperty_kind ().method_extractFunction (var_mode_16196, var_functionSignature_16230, var_functionReturnTypeProxy_16283, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 395)) ;
              GGS_lstring var_argumentSignature_16337 = extensionGetter_routineSignature (extractedValue_15975_formalArgs_1, extractedValue_15932_functionName_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 400)) ;
              GGS_lstring var_functionMangledName_16417 = GGS_lstring::init_21__21_ (extractedValue_15932_functionName_0.readProperty_string ().add_operation (var_argumentSignature_16337.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 401)), extractedValue_15932_functionName_0.readProperty_location (), inCompiler COMMA_HERE) ;
              GGS_bool var_candidateIsPublic_16611 ;
              GGS_routineTypedSignature var_candidateSignature_16648 ;
              GGS_unifiedTypeMapEntry var_candidateReturnTypeProxy_16686 ;
              GGS_routineLLVMNameDict var_implementedModeDictionary_16759 ;
              GGS_bool var_implementedIsExported_16811 ;
              GGS_mode var_candidateMode_16859 ;
              ioArgument_ioContext.readProperty_mRoutineMap ().method_searchKey (var_functionMangledName_16417, var_candidateIsPublic_16611, var_candidateSignature_16648, var_candidateReturnTypeProxy_16686, var_implementedModeDictionary_16759, var_implementedIsExported_16811, var_candidateMode_16859, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 402)) ;
              GGS_string var_routineLLVMName_16930 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_16759, var_mode_16196, extractedValue_15932_functionName_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 412)) ;
              GalgasBool test_24 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_24) {
                GGS_bool test_25 = var_functionReturnTypeProxy_16283.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas3", 413)) ;
                if (GalgasBool::boolTrue == test_25.boolEnum ()) {
                  test_25 = var_candidateReturnTypeProxy_16686.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas3", 413)).operator_not (SOURCE_FILE ("declaration-static-list.galgas3", 413)) ;
                }
                test_24 = test_25.boolEnum () ;
                if (GalgasBool::boolTrue == test_24) {
                  GenericArray <FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_15932_functionName_0.readProperty_location (), GGS_string ("this function should return an $").add_operation (extensionGetter_key (var_candidateReturnTypeProxy_16686, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 414)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 414)).add_operation (GGS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 414)), fixItArray26  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 414)) ;
                }
              }
              if (GalgasBool::boolFalse == test_24) {
                GalgasBool test_27 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_27) {
                  GGS_bool test_28 = var_functionReturnTypeProxy_16283.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas3", 415)).operator_not (SOURCE_FILE ("declaration-static-list.galgas3", 415)) ;
                  if (GalgasBool::boolTrue == test_28.boolEnum ()) {
                    test_28 = var_candidateReturnTypeProxy_16686.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas3", 415)) ;
                  }
                  test_27 = test_28.boolEnum () ;
                  if (GalgasBool::boolTrue == test_27) {
                    GenericArray <FixItDescription> fixItArray29 ;
                    inCompiler->emitSemanticError (extractedValue_15932_functionName_0.readProperty_location (), GGS_string ("this function should return no object"), fixItArray29  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 416)) ;
                  }
                }
              }
              GalgasBool test_30 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_30) {
                test_30 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_16230.getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 418)).objectCompare (var_candidateSignature_16648.getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 418)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_30) {
                  GenericArray <FixItDescription> fixItArray31 ;
                  inCompiler->emitSemanticError (extractedValue_15932_functionName_0.readProperty_location (), GGS_string ("this function has ").add_operation (var_candidateSignature_16648.getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 420)).getter_string (SOURCE_FILE ("declaration-static-list.galgas3", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 420)).add_operation (GGS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 420)).add_operation (var_functionSignature_16230.getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 421)).getter_string (SOURCE_FILE ("declaration-static-list.galgas3", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 420)).add_operation (GGS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 421)), fixItArray31  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 419)) ;
                }
              }
              if (GalgasBool::boolFalse == test_30) {
                UpEnumerator_routineTypedSignature enumerator_17715 (var_functionSignature_16230) ;
                UpEnumerator_routineTypedSignature enumerator_17747 (var_candidateSignature_16648) ;
                while (enumerator_17715.hasCurrentObject () && enumerator_17747.hasCurrentObject ()) {
                  GalgasBool test_32 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_32) {
                    test_32 = GGS_bool (ComparisonKind::notEqual, enumerator_17715.current (HERE).readProperty_mTypeProxy ().objectCompare (enumerator_17747.current (HERE).readProperty_mTypeProxy ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_32) {
                      GenericArray <FixItDescription> fixItArray33 ;
                      inCompiler->emitSemanticError (enumerator_17747.current (HERE).readProperty_mSelector ().readProperty_location (), GGS_string ("argument type should be $").add_operation (extensionGetter_key (enumerator_17715.current (HERE).readProperty_mTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 425)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 425)), fixItArray33  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 425)) ;
                    }
                  }
                  enumerator_17715.gotoNextObject () ;
                  enumerator_17747.gotoNextObject () ;
                }
              }
              var_staticValue_15151.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15213.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 429)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 429)).add_operation (var_routineLLVMName_16930.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas3", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 429)) ;
            }
          }
          break ;
        }
        enumerator_15188.gotoNextObject () ;
        enumerator_15213.gotoNextObject () ;
        if (enumerator_15188.hasCurrentObject () && enumerator_15213.hasCurrentObject ()) {
          var_staticValue_15151.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 433)) ;
        }
      }
      var_staticValue_15151.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 435)) ;
      var_stringValueList_14882.addAssignOperation (var_staticValue_15151  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 436)) ;
    }
    enumerator_14919.gotoNextObject () ;
  }
  {
  const GGS_staticListAST temp_34 = this ;
  ioArgument_ioStaticListValueMap.setter_insertKey (temp_34.readProperty_mStaticListName (), var_stringValueList_14882, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 439)) ;
  }
  {
  const GGS_staticListAST temp_35 = this ;
  const GGS_staticListAST temp_36 = this ;
  const GGS_staticListAST temp_37 = this ;
  extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListType (temp_35.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 442)), GGS_lstring::init_21__21_ (GGS_string ("count"), temp_36.readProperty_mStaticListName ().readProperty_location (), inCompiler COMMA_HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("declaration-static-list.galgas3", 444)), GGS_propertyGetterKind::class_func_constantProperty (GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 445)), temp_37.readProperty_mValueList ().getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 445)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas3", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 445)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 441)) ;
  }
  const GGS_staticListAST temp_38 = this ;
  const GGS_staticListAST temp_39 = this ;
  GGS_omnibusType var_arrayType_18809 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_staticSubscript (var_elementType_14387, var_stringValueList_14882.getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 449)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas3", 449))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 449)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("declaration-static-list.galgas3", 450)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("declaration-static-list.galgas3", 450)) COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 450)), function_omnibusNameForStaticListType (temp_38.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 451)).readProperty_string (), GGS_typeKind::class_func_staticArrayType (var_elementType_14387, var_stringValueList_14882.getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 452)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas3", 452))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 452)), function_llvmNameForStaticListType (temp_39.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 453)).readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_staticListAST temp_40 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_omnibusNameForStaticListType (temp_40.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 456)), var_arrayType_18809, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 455)) ;
  }
  const GGS_staticListAST temp_41 = this ;
  GGS_unifiedTypeMapEntry var_staticListType_19430 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusNameForStaticListType (temp_41.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 460)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 460)) ;
  {
  const GGS_staticListAST temp_42 = this ;
  const GGS_staticListAST temp_43 = this ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_42.readProperty_mStaticListName (), GGS_objectIR::class_func_reference (extensionGetter_type (var_staticListType_19430, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 463)), function_llvmNameForGlobalVariable (temp_43.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 463))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 461)) ;
  }
  {
  const GGS_staticListAST temp_44 = this ;
  const GGS_staticListAST temp_45 = this ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_44.readProperty_mStaticListName (), GGS_objectIR::class_func_reference (extensionGetter_type (var_staticListType_19430, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 467)), function_llvmNameForGlobalVariable (temp_45.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 467))  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 465)) ;
  }
  const GGS_staticListAST temp_46 = this ;
  const GGS_staticListAST temp_47 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedStaticList::init_21__21_ (temp_46.readProperty_mStaticListName (), temp_47.readProperty_mValueList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 470)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_14387.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 473)), var_propertyList_11382, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 472)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMStaticArrayTypeDefinitionIR::init_21__21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_18809.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 477)), var_elementType_14387, var_stringValueList_14882.getter_count (SOURCE_FILE ("declaration-static-list.galgas3", 479)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas3", 479)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 476)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedStaticList semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedStaticList::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                        GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 508)) ;
  GGS_stringset var_invokedFunctionSet_21550 = temp_0 ;
  const GGS_decoratedStaticList temp_1 = this ;
  UpEnumerator_staticListValueListAST enumerator_21590 (temp_1.readProperty_mValueList ()) ;
  while (enumerator_21590.hasCurrentObject ()) {
    UpEnumerator_extendStaticListElementAST enumerator_21632 (enumerator_21590.current_mElement (HERE)) ;
    while (enumerator_21632.hasCurrentObject ()) {
      switch (enumerator_21632.current_mExpression (HERE).enumValue ()) {
      case GGS_extendStaticListExpressionAST::Enumeration::invalid:
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_expression:
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_function:
        {
          GGS_lstring extractedValue_21752_functionName_0 ;
          GGS_routineFormalArgumentListAST extractedValue_21795_formalArgs_1 ;
          enumerator_21632.current_mExpression (HERE).getAssociatedValuesFor_function (extractedValue_21752_functionName_0, extractedValue_21795_formalArgs_1) ;
          GGS_lstring var_routineMangledName_21854 = function_routineMangledNameFromAST (GGS_string::makeEmptyString (), extractedValue_21752_functionName_0, extractedValue_21795_formalArgs_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 515)) ;
          var_invokedFunctionSet_21550.plusPlusAssignOperation (var_routineMangledName_21854.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 520)) ;
        }
        break ;
      }
      enumerator_21632.gotoNextObject () ;
    }
    enumerator_21590.gotoNextObject () ;
  }
  {
  const GGS_decoratedStaticList temp_2 = this ;
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (temp_2.readProperty_mStaticListName (), var_invokedFunctionSet_21550, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 524)) ;
  }
  {
  const GGS_decoratedStaticList temp_3 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (temp_3.readProperty_mStaticListName (), var_invokedFunctionSet_21550, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 525)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@staticListIndirectRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_staticListIndirectRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 575)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_staticListIndirectRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas3", 576)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 577)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_staticListIndirectRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 579)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 579)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 579)) ;
  }
  const GGS_staticListIndirectRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas3", 581)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 581)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 581)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 581)) ;
  const GGS_staticListIndirectRoutineIR temp_4 = this ;
  GGS_string var_receiverLLVMTypeName_24497 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_4.readProperty_mStaticListElementType (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 582)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 582)) ;
  GGS_bool var_first_24572 = GGS_bool (true) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_24497.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssignOperation(var_receiverLLVMTypeName_24497.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 585)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 585)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 585)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 585)) ;
      var_first_24572 = GGS_bool (false) ;
    }
  }
  const GGS_staticListIndirectRoutineIR temp_6 = this ;
  UpEnumerator_routineTypedSignature enumerator_24760 (temp_6.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_24760.hasCurrentObject ()) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = var_first_24572.boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        var_first_24572 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 592)) ;
    }
    switch (enumerator_24760.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_24760.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 596)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 596)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 596)).add_operation (enumerator_24760.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas3", 596)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 596)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 596)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_24760.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 598)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 598)).add_operation (GGS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 598)).add_operation (enumerator_24760.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas3", 598)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 598)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 598)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_24760.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 600)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 600)).add_operation (GGS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 600)).add_operation (enumerator_24760.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas3", 600)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 600)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 600)) ;
      }
      break ;
    }
    enumerator_24760.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 603)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 603)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 603)) ;
  GGS_string var_llvmFunctionTypeName_25464 ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_staticListIndirectRoutineIR temp_9 = this ;
    test_8 = temp_9.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas3", 606)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_llvmFunctionTypeName_25464 = GGS_string ("void") ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_staticListIndirectRoutineIR temp_10 = this ;
    var_llvmFunctionTypeName_25464 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_10.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 609)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 609)) ;
  }
  var_llvmFunctionTypeName_25464.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 611)) ;
  var_first_24572 = GGS_bool (true) ;
  const GGS_staticListIndirectRoutineIR temp_11 = this ;
  UpEnumerator_routineTypedSignature enumerator_25730 (temp_11.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_25730.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_first_24572.boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        var_first_24572 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      var_llvmFunctionTypeName_25464.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 617)) ;
    }
    switch (enumerator_25730.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_llvmFunctionTypeName_25464.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25730.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 621)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 621)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 621)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        var_llvmFunctionTypeName_25464.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25730.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 623)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 623)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 623)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 623)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        var_llvmFunctionTypeName_25464.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25730.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 625)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 625)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 625)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 625)) ;
      }
      break ;
    }
    enumerator_25730.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_25464.plusAssignOperation(GGS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 628)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_24497, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 630)) ;
  const GGS_staticListIndirectRoutineIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", ").add_operation (var_receiverLLVMTypeName_24497, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 631)).add_operation (GGS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 631)).add_operation (temp_13.readProperty_mPropertyIndex ().getter_string (SOURCE_FILE ("declaration-static-list.galgas3", 631)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 631)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 631)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 631)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_25464, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 632)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 632)).add_operation (var_llvmFunctionTypeName_25464, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 632)).add_operation (GGS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 632)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 632)) ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_staticListIndirectRoutineIR temp_15 = this ;
    test_14 = temp_15.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas3", 633)).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 634)) ;
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    const GGS_staticListIndirectRoutineIR temp_16 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %result = call ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_16.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 636)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 636)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 636)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 638)) ;
  var_first_24572 = GGS_bool (true) ;
  const GGS_staticListIndirectRoutineIR temp_17 = this ;
  UpEnumerator_routineTypedSignature enumerator_26736 (temp_17.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_26736.hasCurrentObject ()) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_first_24572.boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_first_24572 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_18) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 644)) ;
    }
    switch (enumerator_26736.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26736.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 648)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 648)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 648)).add_operation (enumerator_26736.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas3", 648)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 648)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26736.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 650)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 650)).add_operation (GGS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 650)).add_operation (enumerator_26736.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas3", 650)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 650)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 650)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26736.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 652)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 652)).add_operation (GGS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 652)).add_operation (enumerator_26736.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas3", 652)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 652)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 652)) ;
      }
      break ;
    }
    enumerator_26736.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 655)) ;
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    const GGS_staticListIndirectRoutineIR temp_20 = this ;
    test_19 = temp_20.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas3", 657)).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 658)) ;
    }
  }
  if (GalgasBool::boolFalse == test_19) {
    const GGS_staticListIndirectRoutineIR temp_21 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_21.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 660)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 660)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 660)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 660)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 660)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas3", 662)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_enumerationDeclarationAST temp_0 = this ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mEnumerationName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 53)) ;
  }
  GGS_bigint var_maxValue_2277 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 55)) ;
  const GGS_enumerationDeclarationAST temp_2 = this ;
  UpEnumerator_enumerationConstantList enumerator_2299 (temp_2.readProperty_mCaseNameList ()) ;
  while (enumerator_2299.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::lowerThan, var_maxValue_2277.objectCompare (enumerator_2299.current_mConstantValue (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_maxValue_2277 = enumerator_2299.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2299.gotoNextObject () ;
  }
  GGS_uint var_representationBitCount_2409 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas3", 62)).isValid ()) {
    uint32_t variant_2438 = GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas3", 62)).uintValue () ;
    bool loop_2438 = true ;
    while (loop_2438) {
      loop_2438 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_2277.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 62)))).isValid () ;
      if (loop_2438) {
        loop_2438 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_2277.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 62)))).boolValue () ;
      }
      if (loop_2438 && (0 == variant_2438)) {
        loop_2438 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas3", 62)) ;
      }
      if (loop_2438) {
        variant_2438 -= 1 ;
        var_representationBitCount_2409.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 63)) ;
        var_maxValue_2277 = var_maxValue_2277.divide_operation (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 64)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 64)) ;
      }
    }
  }
  {
  const GGS_enumerationDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mEnumerationName (), GGS_string ("u").add_operation (var_representationBitCount_2409.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas3", 66)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 66)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas3", 66)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 66)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_enumerationDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mEnumerationName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_enumerationDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("enum ").add_operation (temp_0.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 78)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                            GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                            GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                            GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                            GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                            GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                            GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                            GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap var_enumConstantMap_4169 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  GGS_bigint var_maxValue_4205 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 97)) ;
  const GGS_enumerationDeclarationAST temp_0 = this ;
  UpEnumerator_enumerationConstantList enumerator_4230 (temp_0.readProperty_mCaseNameList ()) ;
  while (enumerator_4230.hasCurrentObject ()) {
    {
    const GGS_enumerationDeclarationAST temp_1 = this ;
    var_enumConstantMap_4169.setter_insertKey (enumerator_4230.current_mConstantName (HERE), enumerator_4230.current_mConstantValue (HERE), temp_1.readProperty_mEnumerationName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 99)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::lowerThan, var_maxValue_4205.objectCompare (enumerator_4230.current_mConstantValue (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_maxValue_4205 = enumerator_4230.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4230.gotoNextObject () ;
  }
  {
  const GGS_enumerationDeclarationAST temp_3 = this ;
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (temp_3.readProperty_mEnumerationName (), var_enumConstantMap_4169, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 104)) ;
  }
  GGS_uint var_representationBitCount_4556 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas3", 110)).isValid ()) {
    uint32_t variant_4585 = GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas3", 110)).uintValue () ;
    bool loop_4585 = true ;
    while (loop_4585) {
      loop_4585 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_4205.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 110)))).isValid () ;
      if (loop_4585) {
        loop_4585 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_4205.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 110)))).boolValue () ;
      }
      if (loop_4585 && (0 == variant_4585)) {
        loop_4585 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas3", 110)) ;
      }
      if (loop_4585) {
        variant_4585 -= 1 ;
        var_representationBitCount_4556.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 111)) ;
        var_maxValue_4205 = var_maxValue_4205.divide_operation (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 112)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 112)) ;
      }
    }
  }
  const GGS_enumerationDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_integerTypeProxy_4752 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_representationBitCount_4556.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas3", 116)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 116)), temp_4.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 115)) ;
  GGS_lstring var_conversionToUIntN_5185 ;
  {
  const GGS_enumerationDeclarationAST temp_5 = this ;
  const GGS_enumerationDeclarationAST temp_6 = this ;
  const GGS_enumerationDeclarationAST temp_7 = this ;
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, temp_5.readProperty_mEnumerationName (), temp_6.readProperty_mEnumerationName ().readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_representationBitCount_4556.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas3", 121)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 121)), temp_7.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas3", 122)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-enumeration-declaration.galgas3", 123)), var_integerTypeProxy_4752, var_conversionToUIntN_5185, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 118)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_enumToUintRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_conversionToUIntN_5185, GGS_bool (false), GGS_bool (false), GGS_string ("i").add_operation (var_representationBitCount_4556.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas3", 131)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 131)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 127)) ;
  const GGS_enumerationDeclarationAST temp_8 = this ;
  const GGS_enumerationDeclarationAST temp_9 = this ;
  GGS_omnibusType var_enumerationType_5416 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas3", 135)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas3", 136)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas3", 136)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 136)), temp_8.readProperty_mEnumerationName ().readProperty_string (), GGS_typeKind::class_func_enumeration (var_representationBitCount_4556  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 138)), temp_9.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_enumerationDeclarationAST temp_10 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_10.readProperty_mEnumerationName (), var_enumerationType_5416, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 141)) ;
  }
  const GGS_enumerationDeclarationAST temp_11 = this ;
  GGS_lstring var_key_5800 = function_assignmentOperatorKey (var_enumerationType_5416, temp_11.readProperty_mEnumerationName ().readProperty_location (), var_enumerationType_5416, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 143)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_5800, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 144)) ;
  }
  GGS_omnibusType var_boolType_6119 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 147)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-enumeration-declaration.galgas3", 149)), var_enumerationType_5416, GGS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6119, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 149)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-enumeration-declaration.galgas3", 152)), var_enumerationType_5416, GGS_string ("icmp ule"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6119, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 151)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-enumeration-declaration.galgas3", 160)), var_enumerationType_5416, GGS_string ("icmp ult"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6119, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 159)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumToUintRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumToUintRoutineIR temp_0 = this ;
  GGS_string var_routineLLVMName_8158 = function_llvmNameForFunction (temp_0.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 208)) ;
  const GGS_enumToUintRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal ").add_operation (temp_1.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 209)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 209)).add_operation (var_routineLLVMName_8158, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 209)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 209)) ;
  const GGS_enumToUintRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (temp_2.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 210)).add_operation (GGS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 210)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 210)) ;
  const GGS_enumToUintRoutineIR temp_3 = this ;
  const GGS_enumToUintRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %r = load ").add_operation (temp_3.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 211)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 211)).add_operation (temp_4.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 211)).add_operation (GGS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 211)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 211)) ;
  const GGS_enumToUintRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (temp_5.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 212)).add_operation (GGS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 212)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 212)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas3", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nopIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_nopIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                             const GGS_generationContext constinArgument_inGenerationContext,
                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inGenerationContext.readProperty_mNopInstructionInLLVM (), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas3", 18)).add_operation (GGS_string (" ; NOP instruction in LLVM\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas3", 18)), inCompiler  COMMA_SOURCE_FILE ("intermediate-nop.galgas3", 18)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_objectIR var_iteratedObjectPointer_3939 ;
  {
  const GGS_forInstructionAST temp_0 = this ;
  extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, temp_0.readProperty_mIteratedObject (), var_iteratedObjectPointer_3939, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 92)) ;
  }
  GGS_omnibusType var_iteratedType_3984 = extensionGetter_type (var_iteratedObjectPointer_3939, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 94)) ;
  GGS_omnibusType var_iteratedElementType_4077 ;
  switch (var_iteratedType_3984.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      const GGS_forInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mIteratedObject ().readProperty_location (), GGS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 99)) ;
      var_iteratedElementType_4077.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      var_iteratedElementType_4077 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 101)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_4366_elementType_0 ;
      GGS_bigint extractedValue_4378__1 ;
      var_iteratedType_3984.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_4366_elementType_0, extractedValue_4378__1) ;
      var_iteratedElementType_4077 = extractedValue_4366_elementType_0 ;
    }
    break ;
  }
  const GGS_forInstructionAST temp_3 = this ;
  const GGS_forInstructionAST temp_4 = this ;
  GGS_lstring var_omnibusName_4439 = GGS_lstring::init_21__21_ (temp_3.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 106)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 106)), temp_4.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 107)) ;
  ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_omnibusName_4439.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 108)), var_iteratedElementType_4077, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 110)) ;
  }
  {
  const GGS_forInstructionAST temp_5 = this ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_5.readProperty_mVarName (), GGS_bool (false), var_iteratedElementType_4077, var_omnibusName_4439, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 111)) ;
  }
  GGS_instructionListIR temp_6 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 113)) ;
  GGS_instructionListIR var_whileExpression_5F_GenerationList_4928 = temp_6 ;
  GGS_objectIR var_whileExpressionResult_5358 ;
  const GGS_forInstructionAST temp_7 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_7.readProperty_mWhileExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 117)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_4928, var_whileExpressionResult_5358, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 114)) ;
  GGS_implicitBooleanConversionResult var_whileExpressionBooleanResult_5658 ;
  const GGS_forInstructionAST temp_8 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_whileExpressionResult_5358, temp_8.readProperty_mEndOf_5F_whileExpression (), ioArgument_ioTemporaries, var_whileExpression_5F_GenerationList_4928, ioArgument_ioAllocaList, var_whileExpressionBooleanResult_5658, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 128)) ;
  switch (var_whileExpressionBooleanResult_5658.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_5750_boolValue_0 ;
      var_whileExpressionBooleanResult_5658.getAssociatedValuesFor_compileTime (extractedValue_5750_boolValue_0) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = extractedValue_5750_boolValue_0.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas3", 138)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_forInstructionAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mEndOf_5F_whileExpression (), GGS_string ("test expression is always false"), fixItArray11  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 139)) ;
        }
      }
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    break ;
  }
  GGS_instructionListIR temp_12 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 144)) ;
  GGS_instructionListIR var_doInstructionList_5F_GenerationList_5993 = temp_12 ;
  const GGS_forInstructionAST temp_13 = this ;
  const GGS_forInstructionAST temp_14 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_13.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_14.readProperty_mEndOf_5F_for_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_5993, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 145)) ;
  {
  const GGS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_15.readProperty_mEndOf_5F_for_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 157)) ;
  }
  switch (var_iteratedType_3984.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      const GGS_forInstructionAST temp_16 = this ;
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_forInstructionOnLiteralStringIR::init_21__21__21__21__21__21__21_ (var_omnibusName_4439.readProperty_string (), temp_16.readProperty_mIteratedObject ().readProperty_location (), var_iteratedObjectPointer_3939, var_iteratedType_3984, var_whileExpression_5F_GenerationList_4928, var_whileExpressionResult_5358, var_doInstructionList_5F_GenerationList_5993, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 162)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_6944_elementType_0 ;
      GGS_bigint extractedValue_6956_size_1 ;
      var_iteratedType_3984.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_6944_elementType_0, extractedValue_6956_size_1) ;
      GGS_stringset temp_17 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 173)) ;
      GGS_stringset var_invokedFunctionSet_7045 = temp_17 ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_forInstructionAST temp_19 = this ;
        test_18 = ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().getter_hasKey (temp_19.readProperty_mIteratedObject ().readProperty_string () COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 174)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_forInstructionAST temp_20 = this ;
          ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().method_searchKey (temp_20.readProperty_mIteratedObject (), var_invokedFunctionSet_7045, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 175)) ;
        }
      }
      const GGS_forInstructionAST temp_21 = this ;
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_forInstructionOnArrayIR::init_21__21__21__21__21__21__21__21__21_ (var_omnibusName_4439.readProperty_string (), temp_21.readProperty_mIteratedObject (), var_iteratedObjectPointer_3939, var_whileExpression_5F_GenerationList_4928, extensionGetter_llvmName (var_whileExpressionBooleanResult_5658, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 182)), var_doInstructionList_5F_GenerationList_5993, extractedValue_6944_elementType_0, extractedValue_6956_size_1.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 185)), var_invokedFunctionSet_7045, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 177)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext constinArgument_inGenerationContext,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnArrayIR temp_0 = this ;
  GGS_string var_elementTypeLLVMName_9776 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 244)) ;
  const GGS_forInstructionOnArrayIR temp_1 = this ;
  GGS_string var_listTypeLLVMName_9835 = GGS_string ("[").add_operation (temp_1.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 245)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 245)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 245)).add_operation (var_elementTypeLLVMName_9776, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 245)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 245)) ;
  const GGS_forInstructionOnArrayIR temp_2 = this ;
  GGS_string var_locationIndex_9918 = temp_2.readProperty_mIteratedObjectName ().readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 246)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 246)) ;
  GGS_string var_startLabel_10001 = GGS_string ("for.label.start.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 248)) ;
  GGS_string var_testLabel_10055 = GGS_string ("for.label.test.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 249)) ;
  GGS_string var_whileLabel_10107 = GGS_string ("for.label.while.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 250)) ;
  GGS_string var_nextLabel_10161 = GGS_string ("for.label.next.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 251)) ;
  GGS_string var_loopVar_10213 = GGS_string ("for.loop.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 252)) ;
  GGS_string var_loopLabel_10257 = GGS_string ("for.label.loop.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 253)) ;
  GGS_string var_endLabel_10309 = GGS_string ("for.label.end.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 254)) ;
  GGS_string var_indexVar_10362 = GGS_string ("for.index.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 256)) ;
  GGS_string var_ptrVar_10409 = GGS_string ("for.ptr.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 257)) ;
  GGS_string var_currentValue_10452 = GGS_string ("for.currentValue.").add_operation (var_locationIndex_9918, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 258)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_10001, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 261)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 261)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_10001.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 264)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 264)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_10409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 266)).add_operation (GGS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 266)).add_operation (var_listTypeLLVMName_9835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 266)) ;
  const GGS_forInstructionOnArrayIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", ").add_operation (var_listTypeLLVMName_9835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 267)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 267)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 267)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 268)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_10055, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 270)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 270)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_testLabel_10055.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 273)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_10409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 275)).add_operation (GGS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 275)).add_operation (var_elementTypeLLVMName_9776, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 275)).add_operation (GGS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 275)).add_operation (var_ptrVar_10409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 275)).add_operation (GGS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 275)).add_operation (var_startLabel_10001, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 275)).add_operation (GGS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 275)).add_operation (var_ptrVar_10409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 276)).add_operation (GGS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 276)).add_operation (var_nextLabel_10161, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 276)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 275)) ;
  const GGS_forInstructionOnArrayIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_indexVar_10362, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 278)).add_operation (GGS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 278)).add_operation (temp_4.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 278)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 278)).add_operation (var_startLabel_10001, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 278)).add_operation (GGS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 278)).add_operation (var_indexVar_10362, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 279)).add_operation (GGS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 279)).add_operation (var_nextLabel_10161, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 279)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 278)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_loopVar_10213, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 280)).add_operation (GGS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 280)).add_operation (var_indexVar_10362, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 280)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 280)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 280)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %").add_operation (var_loopVar_10213, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 282)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 282)).add_operation (var_whileLabel_10107, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 282)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 282)).add_operation (var_endLabel_10309, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 282)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 282)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_whileLabel_10107.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 285)) ;
  const GGS_forInstructionOnArrayIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 287)) ;
  const GGS_forInstructionOnArrayIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (temp_6.readProperty_mWhileExpressionBooleanResult_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 288)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 288)).add_operation (var_loopLabel_10257, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 288)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 288)).add_operation (var_endLabel_10309, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 288)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 288)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_10257.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 291)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_currentValue_10452, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 293)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 293)).add_operation (var_elementTypeLLVMName_9776, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 293)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 293)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_elementTypeLLVMName_9776.add_operation (GGS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 294)).add_operation (var_ptrVar_10409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 294)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 294)) ;
  const GGS_forInstructionOnArrayIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_elementTypeLLVMName_9776, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 295)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 295)).add_operation (var_currentValue_10452, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 295)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 295)).add_operation (var_elementTypeLLVMName_9776, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 295)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 295)).add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mEnumeratedValueName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 296)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 295)) ;
  const GGS_forInstructionOnArrayIR temp_8 = this ;
  extensionMethod_instructionListLLVMCode (temp_8.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 298)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_nextLabel_10161, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 299)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 299)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_nextLabel_10161.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 301)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 301)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_10409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 303)).add_operation (GGS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 303)).add_operation (var_elementTypeLLVMName_9776, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 303)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 303)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_elementTypeLLVMName_9776.add_operation (GGS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 304)).add_operation (var_ptrVar_10409, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 304)).add_operation (GGS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 304)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_indexVar_10362, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 306)).add_operation (GGS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 306)).add_operation (var_indexVar_10362, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 306)).add_operation (GGS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 306)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 306)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_10055, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 307)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 307)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_endLabel_10309.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 310)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                   GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnArrayIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 319)) ;
  const GGS_forInstructionOnArrayIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 320)) ;
  const GGS_forInstructionOnArrayIR temp_2 = this ;
  ioArgument_ioInvokedRoutineSet.plusAssignOperation(temp_2.readProperty_mInvokedFunctionSet (), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 321)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionOnLiteralStringIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnLiteralStringIR temp_0 = this ;
  GGS_string var_startLabel_14278 = GGS_string ("for.label.start.").add_operation (temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 345)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 345)) ;
  const GGS_forInstructionOnLiteralStringIR temp_1 = this ;
  GGS_string var_testLabel_14350 = GGS_string ("for.label.test.").add_operation (temp_1.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 346)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 346)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 346)) ;
  const GGS_forInstructionOnLiteralStringIR temp_2 = this ;
  GGS_string var_loopLabel_14420 = GGS_string ("for.label.loop.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 347)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 347)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 347)) ;
  const GGS_forInstructionOnLiteralStringIR temp_3 = this ;
  GGS_string var_whileLabel_14490 = GGS_string ("for.label.while.").add_operation (temp_3.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 348)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 348)) ;
  const GGS_forInstructionOnLiteralStringIR temp_4 = this ;
  GGS_string var_nextLabel_14562 = GGS_string ("for.label.next.").add_operation (temp_4.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 349)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 349)) ;
  const GGS_forInstructionOnLiteralStringIR temp_5 = this ;
  GGS_string var_endLabel_14632 = GGS_string ("for.label.end.").add_operation (temp_5.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 350)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 350)) ;
  const GGS_forInstructionOnLiteralStringIR temp_6 = this ;
  GGS_string var_ptrVar_14701 = GGS_string ("for.ptr.").add_operation (temp_6.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 351)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 351)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 351)) ;
  const GGS_forInstructionOnLiteralStringIR temp_7 = this ;
  GGS_string var_currentVar_14764 = GGS_string ("for.current.").add_operation (temp_7.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 352)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas3", 352)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 352)) ;
  const GGS_forInstructionOnLiteralStringIR temp_8 = this ;
  GGS_string var_stringLLVMTypeName_14832 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_8.readProperty_mLiteralStringType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 353)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_14278, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 355)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 355)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_14278.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 357)) ;
  const GGS_forInstructionOnLiteralStringIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_14701, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)).add_operation (GGS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)).add_operation (var_stringLLVMTypeName_14832, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)).add_operation (var_stringLLVMTypeName_14832, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mStringElementIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 358)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_14350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 359)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 359)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_testLabel_14350.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 362)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_14701, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 363)).add_operation (GGS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 363)).add_operation (var_stringLLVMTypeName_14832, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 363)).add_operation (GGS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 363)).add_operation (var_ptrVar_14701, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 363)).add_operation (GGS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 363)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 363)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_14278.add_operation (GGS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 364)).add_operation (var_ptrVar_14701, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 364)).add_operation (GGS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 364)).add_operation (var_nextLabel_14562, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 364)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 364)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_currentVar_14764, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 365)).add_operation (GGS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 365)).add_operation (var_stringLLVMTypeName_14832, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 365)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 365)).add_operation (var_ptrVar_14701, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 365)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 365)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_currentVar_14764, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 366)).add_operation (GGS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 366)).add_operation (var_currentVar_14764, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 366)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 366)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %").add_operation (var_currentVar_14764, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 367)).add_operation (GGS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 367)).add_operation (var_endLabel_14632, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 367)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 367)).add_operation (var_whileLabel_14490, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 367)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 367)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_whileLabel_14490.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 370)) ;
  const GGS_forInstructionOnLiteralStringIR temp_10 = this ;
  extensionMethod_instructionListLLVMCode (temp_10.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 372)) ;
  const GGS_forInstructionOnLiteralStringIR temp_11 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_11.readProperty_mWhileExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 373)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 373)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 373)).add_operation (var_loopLabel_14420, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 373)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 373)).add_operation (var_endLabel_14632, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 373)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 373)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_14420.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 376)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i8 %").add_operation (var_currentVar_14764, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 378)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 378)) ;
  const GGS_forInstructionOnLiteralStringIR temp_12 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (temp_12.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 379)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 379)) ;
  const GGS_forInstructionOnLiteralStringIR temp_13 = this ;
  extensionMethod_instructionListLLVMCode (temp_13.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 381)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_nextLabel_14562, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 382)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 382)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_nextLabel_14562.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 384)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_14701, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 385)).add_operation (GGS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 385)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i8 * %").add_operation (var_ptrVar_14701, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 386)).add_operation (GGS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 386)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 386)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_14350, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 387)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 387)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_endLabel_14632.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 390)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 390)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionOnLiteralStringIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                           GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnLiteralStringIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 399)) ;
  const GGS_forInstructionOnLiteralStringIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas3", 400)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standaloneRoutineCallIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneRoutineCallIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 17)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_standaloneRoutineCallIR temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mResult ().objectCompare (GGS_objectIR::class_func_void (SOURCE_FILE ("intermediate-static-routine-call.galgas3", 18)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("call void"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 19)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_standaloneRoutineCallIR temp_2 = this ;
    const GGS_standaloneRoutineCallIR temp_3 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmName (temp_2.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 21)).add_operation (GGS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 21)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 21)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 21)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 21)) ;
  }
  const GGS_standaloneRoutineCallIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_4.readProperty_mFunctionNameForGeneration ().getter_assemblerRepresentation (SOURCE_FILE ("intermediate-static-routine-call.galgas3", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 23)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 23)) ;
  const GGS_standaloneRoutineCallIR temp_5 = this ;
  UpEnumerator_procCallEffectiveParameterListIR enumerator_930 (temp_5.readProperty_mArgumentList ()) ;
  while (enumerator_930.hasCurrentObject ()) {
    switch (enumerator_930.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GGS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
      break ;
    case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_930.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 27)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 27)).add_operation (extensionGetter_llvmName (enumerator_930.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 27)) ;
      }
      break ;
    case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_930.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 29)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 29)).add_operation (extensionGetter_llvmName (enumerator_930.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 29)) ;
      }
      break ;
    case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_930.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 31)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 31)).add_operation (extensionGetter_llvmName (enumerator_930.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 31)) ;
      }
      break ;
    }
    enumerator_930.gotoNextObject () ;
    if (enumerator_930.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 34)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 36)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standaloneRoutineCallIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneRoutineCallIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                   GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_standaloneRoutineCallIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mFunctionNameForGeneration ()  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas3", 45)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@isrDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_isrDeclarationAST temp_0 = this ;
  GGS_lstring var_receiverTypeName_1745 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 53)) ;
  const GGS_isrDeclarationAST temp_1 = this ;
  GGS_string var_s_1823 = var_receiverTypeName_1745.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 54)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 54)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 54)) ;
  {
  const GGS_isrDeclarationAST temp_2 = this ;
  const GGS_isrDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_1823, temp_2.readProperty_mISRName ().readProperty_location (), inCompiler COMMA_HERE), temp_3, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 55)) ;
  }
  const GGS_isrDeclarationAST temp_4 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_4.readProperty_mISRInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 57)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverTypeName_1745.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      ioArgument_ioGraph.setter_noteNode (var_receiverTypeName_1745 COMMA_SOURCE_FILE ("declaration-isr.galgas3", 59)) ;
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
  GGS_lstring var_receiverTypeName_2316 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 66)) ;
  const GGS_isrDeclarationAST temp_1 = this ;
  result_result = GGS_string ("function ").add_operation (var_receiverTypeName_2316.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 67)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 67)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 67)) ;
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
//Overriding extension method '@isrDeclarationAST enterInContext'
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
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedISRDeclaration::init_21__21__21_ (temp_0.readProperty_mISRName (), temp_1.readProperty_mMode (), temp_2.readProperty_mDriverName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas3", 91)) ;
  const GGS_isrDeclarationAST temp_3 = this ;
  GGS_lstring var_driverLLVMBaseTypeName_3701 = function_llvmDriverNameFromName (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 93)) ;
  const GGS_isrDeclarationAST temp_4 = this ;
  GGS_routineFormalArgumentListAST temp_5 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 94)) ;
  GGS_lstring var_isrRoutineMangledName_3775 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_3701.readProperty_string (), temp_4.readProperty_mISRName (), temp_5, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 94)) ;
  const GGS_isrDeclarationAST temp_6 = this ;
  const GGS_isrDeclarationAST temp_7 = this ;
  GGS_routineFormalArgumentListAST temp_8 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 104)) ;
  const GGS_isrDeclarationAST temp_9 = this ;
  const GGS_isrDeclarationAST temp_10 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (function_omnibusTypeSpecificNameForDriver (temp_6.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 96)), temp_7.readProperty_mMode (), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-isr.galgas3", 99)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-isr.galgas3", 102)), var_isrRoutineMangledName_3775, temp_8, GGS_bool (true), temp_9.readProperty_mISRInstructionList (), temp_10.readProperty_mEndOfISRDeclaration (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas3", 108))  COMMA_SOURCE_FILE ("declaration-isr.galgas3", 95)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedISRDeclaration semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedISRDeclaration::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_selfType_5241 ;
  const GGS_decoratedISRDeclaration temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 129)), var_selfType_5241, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 129)) ;
  const GGS_decoratedISRDeclaration temp_1 = this ;
  GGS_interruptionPanicCode joker_5334 ; // Joker input parameter
  constinArgument_inContext.readProperty_mAvailableInterruptMap ().method_searchKey (temp_1.readProperty_mISRName (), joker_5334, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 131)) ;
  {
  const GGS_decoratedISRDeclaration temp_2 = this ;
  const GGS_decoratedISRDeclaration temp_3 = this ;
  const GGS_decoratedISRDeclaration temp_4 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (temp_2.readProperty_mISRName (), var_selfType_5241, temp_3.readProperty_mDriverName ().readProperty_string (), temp_4.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas3", 132)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                            GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofTypeAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                      GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofTypeAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_sizeofTypeAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 75)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofExpressionAST analyzeExpression'
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-sizeof.galgas3", 97)) COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_sizeofExpressionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GGS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 98)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_omnibusType var_type_4515 ;
    const GGS_sizeofExpressionAST temp_3 = this ;
    extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_3.readProperty_mLValue (), var_type_4515, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 101)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_4530 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas3", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 103)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas3", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 102)) ;
    GGS_omnibusType var_resultType_4656 = extensionGetter_type (var_resultTypeProxy_4530, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 105)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_4656, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 106)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_sizeofInstructionIR::init_21__21_ (outArgument_outResult, var_type_4515, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 107)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofTypeAST analyzeExpression'
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-sizeof.galgas3", 131)) COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 131)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_sizeofTypeAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GGS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 132)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_sizeofTypeAST temp_3 = this ;
    GGS_omnibusType var_type_5845 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 134)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 134)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_5912 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas3", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 136)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas3", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 135)) ;
    GGS_omnibusType var_resultType_6038 = extensionGetter_type (var_resultTypeProxy_5912, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 138)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_6038, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 139)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_sizeofInstructionIR::init_21__21_ (outArgument_outResult, var_type_5845, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 140)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                           GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sizeofInstructionIR temp_0 = this ;
  GGS_string var_typeName_7077 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 162)) ;
  const GGS_sizeofInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 163)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 163)).add_operation (GGS_string (".asPtr = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 163)).add_operation (var_typeName_7077, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 163)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 163)).add_operation (var_typeName_7077, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 163)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 163)) ;
  const GGS_sizeofInstructionIR temp_2 = this ;
  const GGS_sizeofInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_2.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 164)).add_operation (GGS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 164)).add_operation (var_typeName_7077, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 164)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 164)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 164)).add_operation (GGS_string (".asPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 164)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas3", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                          GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_standaloneFunctionInExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mStandaloneFunctionName () COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 37)) ;
  }
  const GGS_standaloneFunctionInExpressionAST temp_1 = this ;
  UpEnumerator_effectiveArgumentListAST enumerator_2121 (temp_1.readProperty_mArguments ()) ;
  while (enumerator_2121.hasCurrentObject ()) {
    switch (enumerator_2121.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_2225__0 ;
        GGS_lstring extractedValue_2236_typeName_1 ;
        GGS_lstring extractedValue_2245__2 ;
        enumerator_2121.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_2225__0, extractedValue_2236_typeName_1, extractedValue_2245__2) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_2236_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_2236_typeName_1 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 43)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_2352_expression_0 ;
        GGS_location extractedValue_2363__1 ;
        enumerator_2121.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_2352_expression_0, extractedValue_2363__1) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2352_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 45)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_2121.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_standaloneFunctionInExpressionAST temp_0 = this ;
  UpEnumerator_effectiveArgumentListAST enumerator_3013 (temp_0.readProperty_mArguments ()) ;
  while (enumerator_3013.hasCurrentObject ()) {
    switch (enumerator_3013.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_3117__0 ;
        GGS_lstring extractedValue_3128_typeName_1 ;
        GGS_lstring extractedValue_3137__2 ;
        enumerator_3013.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_3117__0, extractedValue_3128_typeName_1, extractedValue_3137__2) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, extractedValue_3128_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_3128_typeName_1 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 64)) ;
            }
          }
        }
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_3244_expression_0 ;
        GGS_location extractedValue_3255__1 ;
        enumerator_3013.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_3244_expression_0, extractedValue_3255__1) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3244_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 66)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      break ;
    }
    enumerator_3013.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-standalone-function-call.galgas3", 91)) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 91)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_standaloneFunctionInExpressionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mStandaloneFunctionName ().readProperty_location (), GGS_string ("a routine cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 92)) ;
    }
  }
  const GGS_standaloneFunctionInExpressionAST temp_3 = this ;
  const GGS_standaloneFunctionInExpressionAST temp_4 = this ;
  GGS_lstring var_routineLLVMName_4655 = function_routineMangledNameFromCall (GGS_string::makeEmptyString (), temp_3.readProperty_mStandaloneFunctionName (), temp_4.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 95)) ;
  const GGS_standaloneFunctionInExpressionAST temp_5 = this ;
  const GGS_standaloneFunctionInExpressionAST temp_6 = this ;
  GGS_lstring var_signature_4795 = extensionGetter_routineSignature (temp_5.readProperty_mArguments (), temp_6.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 97)) ;
  const GGS_standaloneFunctionInExpressionAST temp_7 = this ;
  const GGS_standaloneFunctionInExpressionAST temp_8 = this ;
  GGS_lstring var_requiredFunctionMangledName_4916 = GGS_lstring::init_21__21_ (temp_7.readProperty_mStandaloneFunctionName ().readProperty_string ().add_operation (var_signature_4795.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 99)), temp_8.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_bool var_implementedPublic_5158 ;
  GGS_routineTypedSignature var_formalSignature_5185 ;
  GGS_unifiedTypeMapEntry var_formalReturnTypeProxy_5210 ;
  GGS_routineLLVMNameDict var_implementedModeDictionary_5270 ;
  GGS_bool var_isExported_5312 ;
  GGS_mode var_implementedMode_5339 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_4916, var_implementedPublic_5158, var_formalSignature_5185, var_formalReturnTypeProxy_5210, var_implementedModeDictionary_5270, var_isExported_5312, var_implementedMode_5339, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 101)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_formalReturnTypeProxy_5210.getter_isNull (SOURCE_FILE ("expression-standalone-function-call.galgas3", 111)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (var_requiredFunctionMangledName_4916.readProperty_location (), GGS_string ("this function does not return any value"), fixItArray10  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 112)) ;
      outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_string var_functionLLVMName_5595 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_5270, constinArgument_inMode, var_requiredFunctionMangledName_4916, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 115)) ;
    GGS_procCallEffectiveParameterListIR temp_11 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 117)) ;
    GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5794 = temp_11 ;
    {
    const GGS_standaloneFunctionInExpressionAST temp_12 = this ;
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5185, temp_12.readProperty_mArguments (), var_requiredFunctionMangledName_4916.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5794, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 118)) ;
    }
    {
    routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_formalReturnTypeProxy_5210, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 134)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 134)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outFunctionCallReturnedValue, var_routineLLVMName_4655, var_functionLLVMName_5595, var_effectiveParameterListIR_5794, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas3", 136)) ;
  }
}

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
                                                                                     const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
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
                                                             const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
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
  GGS_lstring var_rootNode_11476 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 312)), temp_0.readProperty_mPanicCodeTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_configurationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_rootNode_11476, temp_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 313)) ;
  }
  {
  const GGS_configurationDeclarationAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11476, temp_2.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas3", 314)) ;
  }
  {
  const GGS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11476, temp_3.readProperty_mPanicCodeTypeName () COMMA_SOURCE_FILE ("configuration.galgas3", 315)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_rootNode_11476, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 316)).getter_nowhere (SOURCE_FILE ("configuration.galgas3", 316)) COMMA_SOURCE_FILE ("configuration.galgas3", 316)) ;
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
  result_outRepresentation = function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 328)) ;
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
      inCompiler->emitSemanticError (temp_1.readProperty_mTargetParameters ().readProperty_mConfigurationLocation (), GGS_string ("duplicate configuration"), fixItArray2  COMMA_SOURCE_FILE ("configuration.galgas3", 348)) ;
    }
  }
  const GGS_configurationDeclarationAST temp_3 = this ;
  ioArgument_ioContext.mProperty_mTargetParameters = temp_3.readProperty_mTargetParameters () ;
  GGS_omnibusType var_panicCodeType_13696 ;
  const GGS_configurationDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_4.readProperty_mPanicCodeTypeName (), var_panicCodeType_13696, inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 352)) ;
  ioArgument_ioContext.mProperty_mPanicCodeType = var_panicCodeType_13696 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas3", 357)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_bool var_unsigned_13875 ;
      GGS_bigint joker_13857_2 ; // Joker input parameter
      GGS_bigint joker_13857_1 ; // Joker input parameter
      GGS_uint joker_13884_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_kind ().method_extractInteger (joker_13857_2, joker_13857_1, var_unsigned_13875, joker_13884_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 358)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unsigned_13875.operator_not (SOURCE_FILE ("configuration.galgas3", 359)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_configurationDeclarationAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mPanicCodeTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray8  COMMA_SOURCE_FILE ("configuration.galgas3", 360)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_configurationDeclarationAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mPanicCodeTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray10  COMMA_SOURCE_FILE ("configuration.galgas3", 363)) ;
  }
  GGS_omnibusType var_panicLineType_14210 ;
  const GGS_configurationDeclarationAST temp_11 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_11.readProperty_mPanicLineTypeName (), var_panicLineType_14210, inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 366)) ;
  ioArgument_ioContext.mProperty_mPanicLineType = var_panicLineType_14210 ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().getter_isInteger (SOURCE_FILE ("configuration.galgas3", 371)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_bool var_unsigned_14389 ;
      GGS_bigint joker_14371_2 ; // Joker input parameter
      GGS_bigint joker_14371_1 ; // Joker input parameter
      GGS_uint joker_14398_1 ; // Joker input parameter
      ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_kind ().method_extractInteger (joker_14371_2, joker_14371_1, var_unsigned_14389, joker_14398_1, inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 372)) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = var_unsigned_14389.operator_not (SOURCE_FILE ("configuration.galgas3", 373)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_configurationDeclarationAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mPanicLineTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray15  COMMA_SOURCE_FILE ("configuration.galgas3", 374)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_12) {
    const GGS_configurationDeclarationAST temp_16 = this ;
    GenericArray <FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mPanicLineTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray17  COMMA_SOURCE_FILE ("configuration.galgas3", 377)) ;
  }
  GGS_stringset temp_18 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 380)) ;
  GGS_stringset var_panicCodeSet_14696 = temp_18 ;
  const GGS_configurationDeclarationAST temp_19 = this ;
  UpEnumerator_interruptionConfigurationList enumerator_14727 (temp_19.readProperty_mInterruptionConfigurationList ()) ;
  while (enumerator_14727.hasCurrentObject ()) {
    {
    ioArgument_ioContext.mProperty_mAvailableInterruptMap.setter_insertKey (enumerator_14727.current_mInterruptName (HERE), enumerator_14727.current_mInterruptionPanicCode (HERE), inCompiler COMMA_SOURCE_FILE ("configuration.galgas3", 382)) ;
    }
    switch (enumerator_14727.current_mInterruptionPanicCode (HERE).enumValue ()) {
    case GGS_interruptionPanicCode::Enumeration::invalid:
      break ;
    case GGS_interruptionPanicCode::Enumeration::enum_noCode:
      break ;
    case GGS_interruptionPanicCode::Enumeration::enum_code:
      {
        GGS_lbigint extractedValue_14902_value_0 ;
        enumerator_14727.current_mInterruptionPanicCode (HERE).getAssociatedValuesFor_code (extractedValue_14902_value_0) ;
        GGS_string var_s_14921 = extractedValue_14902_value_0.readProperty_bigint ().getter_string (SOURCE_FILE ("configuration.galgas3", 386)) ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_panicCodeSet_14696.getter_hasKey (var_s_14921 COMMA_SOURCE_FILE ("configuration.galgas3", 387)).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_14902_value_0.readProperty_location (), GGS_string ("duplicate interrupt code"), fixItArray21  COMMA_SOURCE_FILE ("configuration.galgas3", 388)) ;
          }
        }
        var_panicCodeSet_14696.plusPlusAssignOperation (var_s_14921  COMMA_SOURCE_FILE ("configuration.galgas3", 390)) ;
      }
      break ;
    }
    enumerator_14727.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildSemanticContext?sourceFile?ast&staticEntityMap&staticlistValues!context!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildSemanticContext_3F_sourceFile_3F_ast_26_staticEntityMap_26_staticlistValues_21_context_21__21__21__21_ (const GGS_lstring constinArgument_inSourceFile,
                                                                                                                          const GGS_ast constinArgument_inAST,
                                                                                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                          GGS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                                                                                          GGS_semanticContext & outArgument_outSemanticContext,
                                                                                                                          GGS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                                                                                                          GGS_decoratedRegularRoutineList & outArgument_outDecoratedRoutineList,
                                                                                                                          GGS_routineListIR & outArgument_outRoutineListIR,
                                                                                                                          GGS_userLLVMTypeDefinitionListIR & outArgument_outUserLLVMTypeDefinitionListIR,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outDecoratedRoutineList.drop () ; // Release 'out' argument
  outArgument_outRoutineListIR.drop () ; // Release 'out' argument
  outArgument_outUserLLVMTypeDefinitionListIR.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GGS_semanticContext::init (inCompiler COMMA_HERE) ;
  outArgument_outDecoratedDeclarationList = GGS_declarationDecorationList::init (inCompiler COMMA_HERE) ;
  outArgument_outDecoratedRoutineList = GGS_decoratedRegularRoutineList::init (inCompiler COMMA_HERE) ;
  outArgument_outRoutineListIR = GGS_routineListIR::init (inCompiler COMMA_HERE) ;
  outArgument_outUserLLVMTypeDefinitionListIR = GGS_userLLVMTypeDefinitionListIR::init (inCompiler COMMA_HERE) ;
  UpEnumerator_requiredFunctionDeclarationListAST enumerator_16573 (constinArgument_inAST.readProperty_mRequiredFunctionListAST ()) ;
  while (enumerator_16573.hasCurrentObject ()) {
    GGS_lstring var_procedureMangledName_16609 = function_routineMangledNameFromAST (GGS_string::makeEmptyString (), enumerator_16573.current (HERE).readProperty_mName (), enumerator_16573.current (HERE).readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("context.galgas3", 415)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.plusPlusAssignOperation (var_procedureMangledName_16609.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas3", 420)) ;
    enumerator_16573.gotoNextObject () ;
  }
  extensionMethod_enterExternProcInContext (constinArgument_inAST.readProperty_mExternFunctionListAST (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas3", 422)) ;
  GGS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_16931 = constinArgument_inAST.readProperty_mControlRegisterUserAccesMapAST () ;
  UpEnumerator_declarationListAST enumerator_17009 (constinArgument_inAST.readProperty_mDeclarationListAST ()) ;
  while (enumerator_17009.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((cPtr_abstractDeclarationAST *) enumerator_17009.current_mDeclaration (HERE).ptr (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, var_controlRegisterUserAccesMapAST_16931, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas3", 428)) ;
    enumerator_17009.gotoNextObject () ;
  }
  UpEnumerator_controlRegisterUserAccesMapAST enumerator_17502 (var_controlRegisterUserAccesMapAST_16931) ;
  while (enumerator_17502.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (enumerator_17502.current_lkey (HERE).readProperty_location (), GGS_string ("this control register is not defined"), fixItArray0  COMMA_SOURCE_FILE ("context.galgas3", 441)) ;
    enumerator_17502.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile_3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mGlobalConstantMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas3", 444)) ;
  }
  {
  routine_buildTypeMapHTMLFile_3F__3F__3F__3F__3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mTypeMap (), outArgument_outSemanticContext.readProperty_mRoutineMap (), outArgument_outSemanticContext.readProperty_mInfixOperatorMap (), outArgument_outSemanticContext.readProperty_mPrefixOperatorMap (), outArgument_outSemanticContext.readProperty_mAssignmentOperatorMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas3", 449)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile_3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mControlRegisterGroupMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas3", 458)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.readProperty_mTaskListAST (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas3", 463)) ;
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
    test_0 = temp_1.readProperty_mSourceLocation ().getter_isNowhere (SOURCE_FILE ("intermediate-comment-source-line.galgas3", 19)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";---------\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas3", 20)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_sourceLocationIR temp_2 = this ;
    const GGS_sourceLocationIR temp_3 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- ").add_operation (temp_2.readProperty_mSourceLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas3", 22)).getter_string (SOURCE_FILE ("intermediate-comment-source-line.galgas3", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas3", 22)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas3", 22)).add_operation (temp_3.readProperty_mSourceLocation ().getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas3", 22)).getter_lastPathComponent (SOURCE_FILE ("intermediate-comment-source-line.galgas3", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas3", 22)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas3", 22)), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas3", 22)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas3", 68)) ;
  const GGS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas3", 69)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@omnibusInfixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_omnibusInfixOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_omnibusInfixOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas3", 77)) ;
  const GGS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas3", 78)) ;
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
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand_4454, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas3", 99)) ;
  GGS_objectIR var_rightOperand_4914 ;
  const GGS_omnibusInfixOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_4454, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas3", 116)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand_4914, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas3", 113)) ;
  const GGS_omnibusInfixOperatorExpressionAST temp_2 = this ;
  const GGS_omnibusInfixOperatorExpressionAST temp_3 = this ;
  extensionMethod_generateInfixOperatorCode (constinArgument_inContext.readProperty_mInfixOperatorMap (), var_leftOperand_4454, temp_2.readProperty_mInfixOperator (), temp_3.readProperty_mOperatorLocation (), var_rightOperand_4914, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas3", 127)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 40)) ;
  const GGS_assignmentInstructionAST temp_1 = this ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_1.readProperty_mTargetAST (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 41)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignmentInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_omnibusType var_targetType_2996 ;
  const GGS_assignmentInstructionAST temp_0 = this ;
  extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_0.readProperty_mTargetAST (), var_targetType_2996, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 59)) ;
  GGS_objectIR var_sourceOperandPossibleReference_3431 ;
  const GGS_assignmentInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_2996, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3431, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 61)) ;
  GGS_instructionListListIR temp_2 = GGS_instructionListListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 75)) ;
  GGS_instructionListListIR var_pendingStoreComputedPropertyInstructionGenerationList_3516 = temp_2 ;
  GGS_LValueRepresentation var_lvalueIR_4037 ;
  const GGS_assignmentInstructionAST temp_3 = this ;
  extensionMethod_analyzeLValueInAssignment (temp_3.readProperty_mTargetAST (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_pendingStoreComputedPropertyInstructionGenerationList_3516, var_lvalueIR_4037, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 76)) ;
  {
  const GGS_assignmentInstructionAST temp_4 = this ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, var_lvalueIR_4037.readProperty_type (), var_lvalueIR_4037.readProperty_llvmName (), var_sourceOperandPossibleReference_3431, temp_4.readProperty_mInstructionLocation (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 90)) ;
  }
  DownEnumerator_instructionListListIR enumerator_4420 (var_pendingStoreComputedPropertyInstructionGenerationList_3516) ;
  while (enumerator_4420.hasCurrentObject ()) {
    ioArgument_ioInstructionGenerationList.plusAssignOperation(enumerator_4420.current_mInstructionList (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 102)) ;
    enumerator_4420.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                                                const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                                                const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                                                GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                                                const GGS_lstring constinArgument_inVariableName,
                                                                                                                                                                                                                                                                const GGS_string constinArgument_inLLVMName,
                                                                                                                                                                                                                                                                const GGS_omnibusType constinArgument_inVariableType,
                                                                                                                                                                                                                                                                const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                                                                GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_8526 = constinArgument_inVariableType ;
  GGS_string var_currentLLVMName_8561 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    {
      {
      GGS_objectIR joker_8699 ; // Joker input parameter
      extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8699, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 198)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_8729_name_0 ;
      GGS_LValueOperandAST extractedValue_8752_nextOperand_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_8729_name_0, extractedValue_8752_nextOperand_1) ;
      {
      GGS_objectIR joker_8842 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8842, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 200)) ;
      }
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, var_currentType_8526, var_currentLLVMName_8561, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_8729_name_0, extractedValue_8752_nextOperand_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 201)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_9400_indexExpression_0 ;
      GGS_location extractedValue_9416_endOfIndex_1 ;
      GGS_bool extractedValue_9427_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_9448_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_9400_indexExpression_0, extractedValue_9416_endOfIndex_1, extractedValue_9427_checkIndexExpression_2, extractedValue_9448_nextOperand_3) ;
      {
      GGS_objectIR joker_9538 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9538, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 218)) ;
      }
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_8526, var_currentLLVMName_8561, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_9400_indexExpression_0, extractedValue_9416_endOfIndex_1, extractedValue_9427_checkIndexExpression_2, extractedValue_9448_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 219)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_8526, var_currentLLVMName_8561, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                 GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                                 GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                 const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                 GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                 const GGS_lstring constinArgument_inPropertyName,
                                                                                                                                                                                                                                 const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap var_propertySetterMap_11152 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 260)) ;
  GGS_propertySetterKind var_propertyAccess_11454 ;
  GGS_propertyVisibility joker_11426 ; // Joker input parameter
  var_propertySetterMap_11152.method_searchKey (constinArgument_inPropertyName, joker_11426, var_propertyAccess_11454, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 263)) ;
  switch (var_propertyAccess_11454.enumValue ()) {
  case GGS_propertySetterKind::Enumeration::invalid:
    break ;
  case GGS_propertySetterKind::Enumeration::enum_computedProperty:
    {
      GGS_unifiedTypeMapEntry extractedValue_11540_computedPropertyType_0 ;
      GGS_routineLLVMNameDict extractedValue_11561_getterModeDictionary_1 ;
      GGS_routineLLVMNameDict extractedValue_11582_setterModeDictionary_2 ;
      var_propertyAccess_11454.getAssociatedValuesFor_computedProperty (extractedValue_11540_computedPropertyType_0, extractedValue_11561_getterModeDictionary_1, extractedValue_11582_setterModeDictionary_2) ;
      GGS_string var_getterRoutineLLVMName_11641 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11561_getterModeDictionary_1, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 267)) ;
      GGS_objectIR var_resultValueIR_11985 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GGS_objectIR::class_func_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 270)), var_getterRoutineLLVMName_11641, extensionGetter_type (extractedValue_11540_computedPropertyType_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 272)), var_resultValueIR_11985, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 268)) ;
      }
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, var_resultValueIR_11985, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 276)) ;
      }
      GGS_string var_setterRoutineLLVMName_12201 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11582_setterModeDictionary_2, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 278)) ;
      GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 279)) ;
      GGS_instructionListIR var_pendingStoreComputedPropertyInstructionGenerationList_12335 = temp_0 ;
      GGS_objectIR var_tempValueIR_12403 = var_resultValueIR_11985 ;
      {
      extensionSetter_appendLoadWhenReference (var_pendingStoreComputedPropertyInstructionGenerationList_12335, ioArgument_ioTemporaries, var_tempValueIR_12403, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 281)) ;
      }
      {
      extensionSetter_appendStoreComputedPropertyValue (var_pendingStoreComputedPropertyInstructionGenerationList_12335, GGS_objectIR::class_func_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 283)), var_setterRoutineLLVMName_12201, var_tempValueIR_12403, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 282)) ;
      }
      ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList.addAssignOperation (var_pendingStoreComputedPropertyInstructionGenerationList_12335  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 287)) ;
      ioArgument_ioCurrentType = extensionGetter_type (var_resultValueIR_11985, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 289)) ;
      ioArgument_ioCurrentLLVMName = extensionGetter_llvmName (var_resultValueIR_11985, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 290)) ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 291)) ;
      }
    }
    break ;
  case GGS_propertySetterKind::Enumeration::enum_storedProperty:
    {
      GGS_omnibusType extractedValue_13542_propertyType_0 ;
      GGS_uint extractedValue_13561_index_1 ;
      var_propertyAccess_11454.getAssociatedValuesFor_storedProperty (extractedValue_13542_propertyType_0, extractedValue_13561_index_1) ;
      GGS_string var_newLLVMvariable_13611 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13611, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 307)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_13611, extractedValue_13561_index_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 308)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13542_propertyType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_13611 ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 317)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList????'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                      GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                                      GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                      GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                      const GGS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                                                                      const GGS_location constinArgument_inEndOfIndex,
                                                                                                                                                                                                                                      const GGS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      GenericArray <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 358)).add_operation (GGS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 358)), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 357)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 360)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_15744_elementType_0 ;
      GGS_bigint extractedValue_15764_arraySize_1 ;
      ioArgument_ioCurrentType.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_15744_elementType_0, extractedValue_15764_arraySize_1) ;
      GGS_objectIR var_indexIR_16252 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_15764_arraySize_1, extractedValue_15744_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_16252, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 364)) ;
      }
      GGS_string var_newLLVMvariable_16307 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_16307, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 381)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_15744_elementType_0, var_newLLVMvariable_16307, var_indexIR_16252, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 382)) ;
      }
      ioArgument_ioCurrentType = extractedValue_15744_elementType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_16307 ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 391)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                      GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                      GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_17933 = constinArgument_inSelfType ;
  GGS_string var_currentLLVMName_17964 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 426)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_18065_name_0 ;
      GGS_LValueOperandAST extractedValue_18088_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_18065_name_0, extractedValue_18088_next_1) ;
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, var_currentType_17933, var_currentLLVMName_17964, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18065_name_0, extractedValue_18088_next_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 430)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_18643_indexExpression_0 ;
      GGS_location extractedValue_18659_endOfIndex_1 ;
      GGS_bool extractedValue_18670_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_18691_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_18643_indexExpression_0, extractedValue_18659_endOfIndex_1, extractedValue_18670_checkIndexExpression_2, extractedValue_18691_nextOperand_3) ;
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_17933, var_currentLLVMName_17964, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18643_indexExpression_0, extractedValue_18659_endOfIndex_1, extractedValue_18670_checkIndexExpression_2, extractedValue_18691_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 447)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_17933, var_currentLLVMName_17964, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperandInAssignment?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                          GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                          GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                          const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                          const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                          const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                          const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                          GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                          GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                          GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_20253_name_0 ;
      GGS_LValueOperandAST extractedValue_20276_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_20253_name_0, extractedValue_20276_next_1) ;
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20253_name_0, extractedValue_20276_next_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 489)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_20835_indexExpression_0 ;
      GGS_location extractedValue_20851_endOfIndex_1 ;
      GGS_bool extractedValue_20862_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_20883_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_20835_indexExpression_0, extractedValue_20851_endOfIndex_1, extractedValue_20862_checkIndexExpression_2, extractedValue_20883_nextOperand_3) ;
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20835_indexExpression_0, extractedValue_20851_endOfIndex_1, extractedValue_20862_checkIndexExpression_2, extractedValue_20883_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 506)) ;
      }
    }
    break ;
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
    test_0 = constinArgument_inOptionalTargetAnnotationType.readProperty_kind ().getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas3", 15)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inSourceValue ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inStaticTypeAllowed.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 18)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GGS_lstring var_key_1078 = function_assignmentOperatorKey (constinArgument_inOptionalTargetAnnotationType, GGS_location::class_func_nowhere (SOURCE_FILE ("semantic-analysis.galgas3", 20)), extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 20)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 20)) ;
      GGS_abstractAssignmentOperatorUsage joker_1214 ; // Joker input parameter
      constinArgument_inAssignmentOperatorMap.method_searchKey (var_key_1078, joker_1214, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 21)) ;
      result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 22)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas3", 25)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 26)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 26)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the ").add_operation (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 27)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 27)).add_operation (GGS_string (" compile time type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 27)), fixItArray4  COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 27)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::equal, extensionGetter_omnibusTypeDescriptionName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 28)).objectCompare (function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 28)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            result_result = extensionGetter_withType (constinArgument_inSourceValue, function_boolType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 29)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 29)) ;
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
                                                                          const GALGAS_ObjectArray & inEffectiveParameterArray,
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
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("semantic-analysis.galgas3", 65)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outTempVariable = GGS_objectIR::class_func_void (SOURCE_FILE ("semantic-analysis.galgas3", 66)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_llvmName_3026 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3026, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 68)) ;
    }
    outArgument_outTempVariable = GGS_objectIR::class_func_llvmNamedValue (constinArgument_inType, var_llvmName_3026  COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 69)) ;
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
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("semantic-analysis.galgas3", 80)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outTempVariable = GGS_objectIR::class_func_void (SOURCE_FILE ("semantic-analysis.galgas3", 81)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_llvmName_3455 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3455, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 83)) ;
    }
    outArgument_outTempVariable = GGS_objectIR::class_func_reference (constinArgument_inType, var_llvmName_3455  COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 84)) ;
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
  GGS_semanticTemporariesStruct var_temporaries_4628 = GGS_semanticTemporariesStruct::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationDecorationList enumerator_4653 (constinArgument_inDecoratedDeclarationList) ;
  while (enumerator_4653.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((cPtr_abstractDecoratedDeclaration *) enumerator_4653.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4628, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 110)) ;
    enumerator_4653.gotoNextObject () ;
  }
  extensionMethod_routineSemanticAnalysis (constinArgument_inDecoratedRoutineList, constinArgument_inSemanticContext, var_temporaries_4628, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 117)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.readProperty_mExternFunctionListAST (), constinArgument_inSemanticContext, var_temporaries_4628, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 122)) ;
  {
  routine_appendPanicRoutines_3F_allSourceFilePaths_26_intermediateCode (constinArgument_inSourceFileAbsolutePathSet, outArgument_outIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 128)) ;
  }
  {
  routine_checkRequiredProcedures_3F_ast_3F_context_3F_endOfSourceFile (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas3", 133)) ;
  }
}


