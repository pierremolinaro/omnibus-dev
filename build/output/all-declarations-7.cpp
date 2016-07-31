#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateTarget'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTarget (const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_string constinArgument_inProductDirectory,
                             const GALGAS_lstring constinArgument_inTargetName,
                             const GALGAS_targetParameters constinArgument_inTargetParameters,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, GALGAS_string ("makefile.py"), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/makefile.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 67)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, GALGAS_string ("toolpath.py"), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/toolpath.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 76)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 73)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, GALGAS_string ("check-stacks.py"), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/check-stacks.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 79)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, GALGAS_string ("plm.py"), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/plm.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 85)) ;
  }
  {
  GALGAS__32_stringlist temp_0 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("target-generation.galgas", 95)) ;
  temp_0.addAssign_operation (GALGAS_string ("!SYSTEMSTACKSIZE!"), constinArgument_inTargetParameters.mAttribute_mSystemStackSize.mAttribute_bigint.getter_string (SOURCE_FILE ("target-generation.galgas", 95))  COMMA_SOURCE_FILE ("target-generation.galgas", 95)) ;
  routine_copyFileWithSubstitutions (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 93)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 94)), temp_0, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 91)) ;
  }
  GALGAS_string var_opt_5F_optimizationOption_3753 = GALGAS_string ("disable-opt") ;
  GALGAS_string var_llc_5F_optimizationOption_3798 = GALGAS_string ("O0") ;
  GALGAS_uint var_optimizationOptionCount_3835 = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_optimization_31_.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_opt_5F_optimizationOption_3753 = GALGAS_string ("O1") ;
    var_llc_5F_optimizationOption_3798 = GALGAS_string ("O1") ;
    var_optimizationOptionCount_3835.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 104)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_optimization_32_.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_opt_5F_optimizationOption_3753 = GALGAS_string ("O2") ;
    var_llc_5F_optimizationOption_3798 = GALGAS_string ("O2") ;
    var_optimizationOptionCount_3835.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 109)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_optimizationS.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_3) {
    var_opt_5F_optimizationOption_3753 = GALGAS_string ("Os") ;
    var_llc_5F_optimizationOption_3798 = GALGAS_string ("O2") ;
    var_optimizationOptionCount_3835.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 114)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_optimizationZ.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_opt_5F_optimizationOption_3753 = GALGAS_string ("Oz") ;
    var_llc_5F_optimizationOption_3798 = GALGAS_string ("O2") ;
    var_optimizationOptionCount_3835.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 119)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_optimizationZ_33_.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_5) {
    var_opt_5F_optimizationOption_3753 = GALGAS_string ("O3") ;
    var_llc_5F_optimizationOption_3798 = GALGAS_string ("O3") ;
    var_optimizationOptionCount_3835.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 124)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_optimizationOptionCount_3835.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("target-generation.galgas", 127)), GALGAS_string ("several optimization options: --").add_operation (var_opt_5F_optimizationOption_3753, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 127)).add_operation (GALGAS_string (" is used"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 127))  COMMA_SOURCE_FILE ("target-generation.galgas", 127)) ;
  }
  {
  GALGAS__32_stringlist temp_7 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("target-generation.galgas", 133)) ;
  temp_7.addAssign_operation (GALGAS_string ("<<OPT_OPTIMIZATION_OPTION>>"), var_opt_5F_optimizationOption_3753  COMMA_SOURCE_FILE ("target-generation.galgas", 133)) ;
  temp_7.addAssign_operation (GALGAS_string ("<<LLC_OPTIMIZATION_OPTION>>"), var_llc_5F_optimizationOption_3798  COMMA_SOURCE_FILE ("target-generation.galgas", 133)) ;
  routine_copyExecutableFileWithSubstitutions (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 131)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 132)), temp_7, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 129)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/build-verbose.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 138)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/build-verbose.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 136)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 144)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 142)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/objsize.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 150)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/objsize.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 148)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/objdump.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 156)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/objdump.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 154)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/run.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 162)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/run.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 160)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'copyExecutableFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyExecutableFile (const GALGAS_string constinArgument_inCurrentDirectory,
                                 const GALGAS_string constinArgument_inSourceFileNamePath,
                                 const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw_6289 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    GALGAS_string var_s_6331 = var_fw_6289.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 176)) ;
    GALGAS_bool joker_6466 ; // Joker input parameter
    var_s_6331.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6466, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 177)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir_6503 = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 179)) ;
    GALGAS_string var_s_6603 = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir_6503.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 180)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 180)) ;
    GALGAS_bool joker_6773 ; // Joker input parameter
    var_s_6603.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6773, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 181)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'copyExecutableFileWithSubstitutions'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyExecutableFileWithSubstitutions (const GALGAS_string constinArgument_inCurrentDirectory,
                                                  const GALGAS_string constinArgument_inSourceFileNamePath,
                                                  const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                                                  const GALGAS__32_stringlist constinArgument_inSubstitutions,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_7139 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw_7232 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    var_s_7139 = var_fw_7232.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 196)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir_7357 = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 198)) ;
    var_s_7139 = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir_7357.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 199)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 199)) ;
  }
  cEnumerator__32_stringlist enumerator_7606 (constinArgument_inSubstitutions, kEnumeration_up) ;
  while (enumerator_7606.hasCurrentObject ()) {
    var_s_7139 = var_s_7139.getter_stringByReplacingStringByString (enumerator_7606.current_mValue_30_ (HERE), enumerator_7606.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 202)) ;
    enumerator_7606.gotoNextObject () ;
  }
  GALGAS_bool joker_7775 ; // Joker input parameter
  var_s_7139.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_7775, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 204)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'copyFileWithSubstitutions'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyFileWithSubstitutions (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inSourceFileNamePath,
                                        const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                                        const GALGAS__32_stringlist constinArgument_inSubstitutions,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_8125 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw_8218 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    var_s_8125 = var_fw_8218.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 218)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir_8343 = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 220)) ;
    var_s_8125 = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir_8343.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 221)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 221)) ;
  }
  cEnumerator__32_stringlist enumerator_8592 (constinArgument_inSubstitutions, kEnumeration_up) ;
  while (enumerator_8592.hasCurrentObject ()) {
    var_s_8125 = var_s_8125.getter_stringByReplacingStringByString (enumerator_8592.current_mValue_30_ (HERE), enumerator_8592.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 224)) ;
    enumerator_8592.gotoNextObject () ;
  }
  GALGAS_bool joker_8751 ; // Joker input parameter
  var_s_8125.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_8751, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 226)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'copyTextFile'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyTextFile (const GALGAS_string constinArgument_inCurrentDirectory,
                           const GALGAS_string constinArgument_inSourceFileNamePath,
                           const GALGAS_string constinArgument_inDestinationAbsoluteFilePath,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw_9133 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    GALGAS_string var_s_9175 = var_fw_9133.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 238)) ;
    GALGAS_bool joker_9300 ; // Joker input parameter
    var_s_9175.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_9300, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 239)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir_9337 = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 241)) ;
    GALGAS_string var_s_9437 = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir_9337.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 242)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 242)) ;
    GALGAS_bool joker_9597 ; // Joker input parameter
    var_s_9437.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_9597, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 243)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'getTargetTextFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_getTargetTextFile (const GALGAS_string & constinArgument_inCurrentDirectory,
                                          const GALGAS_string & constinArgument_inTargetFile,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outContents ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw_9951 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    result_outContents = var_fw_9951.getter_textFileContentsAtPath (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 256)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir_10078 = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 258)) ;
    result_outContents = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir_10078.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 259)).add_operation (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 259)) ;
  }
//---
  return result_outContents ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_getTargetTextFile [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_getTargetTextFile (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* §§ inErrorLocation */
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_getTargetTextFile ("getTargetTextFile",
                                                                   functionWithGenericHeader_getTargetTextFile,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   2,
                                                                   functionArgs_getTargetTextFile) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'importFilesAndCompile'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_importFilesAndCompile (const GALGAS_lstring constinArgument_inSourceFile,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast_905 = GALGAS_ast::constructor_default (SOURCE_FILE ("program.galgas", 26)) ;
  GALGAS_lstringlist var_importedFileList_1007 ;
  GALGAS_location var_endOfSourceFile_1048 ;
  var_importedFileList_1007.drop () ;
  var_endOfSourceFile_1048.drop () ;
  cGrammar_plm_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_905, var_importedFileList_1007, var_endOfSourceFile_1048  COMMA_SOURCE_FILE ("program.galgas", 27)) ;
  GALGAS_stringset var_importedFileAbsolutePathSet_1119 = GALGAS_stringset::constructor_setWithString (constinArgument_inSourceFile.mAttribute_string  COMMA_SOURCE_FILE ("program.galgas", 32)) ;
  GALGAS_string var_currentDirectory_1182 = constinArgument_inSourceFile.mAttribute_string.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 33)) ;
  {
  routine_recursiveImportFiles (var_ast_905, var_currentDirectory_1182, var_importedFileList_1007, var_importedFileAbsolutePathSet_1119, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 34)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_targetNameSet_1512 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("program.galgas", 42)) ;
    cEnumerator_lstringlist enumerator_1557 (var_ast_905.mAttribute_mTargetList, kEnumeration_up) ;
    while (enumerator_1557.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_targetNameSet_1512.getter_hasKey (enumerator_1557.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("program.galgas", 44)).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (enumerator_1557.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 45)), GALGAS_string ("Duplicated target")  COMMA_SOURCE_FILE ("program.galgas", 45)) ;
      }
      var_targetNameSet_1512.addAssign_operation (enumerator_1557.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("program.galgas", 47)) ;
      enumerator_1557.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 51)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_ast_905.mAttribute_mTargetList.getter_length (SOURCE_FILE ("program.galgas", 52)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticWarning (var_endOfSourceFile_1048, GALGAS_string ("no target: only syntax analysis is performed")  COMMA_SOURCE_FILE ("program.galgas", 53)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_ast_905.mAttribute_mTargetList.getter_length (SOURCE_FILE ("program.galgas", 54)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticWarning (var_endOfSourceFile_1048, var_ast_905.mAttribute_mTargetList.getter_length (SOURCE_FILE ("program.galgas", 55)).getter_string (SOURCE_FILE ("program.galgas", 55)).add_operation (GALGAS_string (" targets: only syntax analysis is performed"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 55))  COMMA_SOURCE_FILE ("program.galgas", 55)) ;
      }else if (kBoolFalse == test_4) {
        cEnumerator_lstringlist enumerator_2129 (var_ast_905.mAttribute_mTargetList, kEnumeration_up) ;
        while (enumerator_2129.hasCurrentObject ()) {
          {
          routine_compileProject (constinArgument_inSourceFile, var_ast_905, enumerator_2129.current_mValue (HERE), var_endOfSourceFile_1048, var_currentDirectory_1182, var_importedFileAbsolutePathSet_1119, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 58)) ;
          }
          enumerator_2129.gotoNextObject () ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'compileProject'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProject (const GALGAS_lstring constinArgument_inSourceFile,
                             const GALGAS_ast constinArgument_inAST,
                             const GALGAS_lstring constinArgument_inTargetName,
                             const GALGAS_location constinArgument_inEndOfSourceFile,
                             const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_stringset constinArgument_inImportedFileAbsolutePathSet,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast_2861 = constinArgument_inAST ;
  GALGAS_stringset var_sourceFileAbsolutePathSet_2908 = constinArgument_inImportedFileAbsolutePathSet ;
  {
  routine_addTargetSpecificFiles (constinArgument_inTargetName, var_ast_2861, constinArgument_inCurrentDirectory, var_sourceFileAbsolutePathSet_2908, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 84)) ;
  }
  var_ast_2861.mAttribute_mDeclarationList.addAssign_operation (GALGAS_booleanDeclaration::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 92)).getter_nowhere (SOURCE_FILE ("program.galgas", 92)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("program.galgas", 92))  COMMA_SOURCE_FILE ("program.galgas", 92))  COMMA_SOURCE_FILE ("program.galgas", 92)) ;
  var_ast_2861.mAttribute_mDeclarationList.addAssign_operation (GALGAS_literalIntegerDeclaration::constructor_new (SOURCE_FILE ("program.galgas", 94))  COMMA_SOURCE_FILE ("program.galgas", 94)) ;
  var_ast_2861.mAttribute_mDeclarationList.addAssign_operation (GALGAS_literalStringDeclaration::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 96)).getter_nowhere (SOURCE_FILE ("program.galgas", 96))  COMMA_SOURCE_FILE ("program.galgas", 96))  COMMA_SOURCE_FILE ("program.galgas", 96)) ;
  GALGAS_declarationListAST var_declarationList_3689 = var_ast_2861.mAttribute_mDeclarationList ;
  GALGAS_declarationListAST var_newDeclarationList_3757 = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("program.galgas", 99)) ;
  GALGAS_extensionDeclarationListAST var_extensionDeclarationListAST_3796 = var_ast_2861.mAttribute_mExtensionDeclarationListAST ;
  cEnumerator_declarationListAST enumerator_3870 (var_declarationList_3689, kEnumeration_up) ;
  while (enumerator_3870.hasCurrentObject ()) {
    GALGAS_abstractDeclaration var_newDeclaration_3953 ;
    callExtensionMethod_addExtension ((const cPtr_abstractDeclaration *) enumerator_3870.current_mDeclaration (HERE).ptr (), var_extensionDeclarationListAST_3796, var_newDeclaration_3953, inCompiler COMMA_SOURCE_FILE ("program.galgas", 102)) ;
    var_newDeclarationList_3757.addAssign_operation (var_newDeclaration_3953  COMMA_SOURCE_FILE ("program.galgas", 103)) ;
    enumerator_3870.gotoNextObject () ;
  }
  var_ast_2861.mAttribute_mDeclarationList = var_newDeclarationList_3757 ;
  cEnumerator_extensionDeclarationListAST enumerator_4156 (var_extensionDeclarationListAST_3796, kEnumeration_up) ;
  while (enumerator_4156.hasCurrentObject ()) {
    inCompiler->emitSemanticError (enumerator_4156.current_mTypeName (HERE).getter_location (SOURCE_FILE ("program.galgas", 108)), GALGAS_string ("this type is not defined or does not support extension")  COMMA_SOURCE_FILE ("program.galgas", 108)) ;
    enumerator_4156.gotoNextObject () ;
  }
  GALGAS_declarationListAST var_orderedDeclarationListAST_4528 ;
  {
  routine_buildOrderedDeclarationList (var_ast_2861, constinArgument_inSourceFile.mAttribute_string, constinArgument_inEndOfSourceFile, var_orderedDeclarationListAST_4528, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 111)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 118)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_staticStringMap var_globalLiteralStringMap_4687 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("program.galgas", 119)) ;
    GALGAS_semanticContext var_semanticContext_4920 ;
    {
    routine_buildSemanticContext (var_orderedDeclarationListAST_4528, constinArgument_inSourceFile, var_ast_2861, var_globalLiteralStringMap_4687, var_semanticContext_4920, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 120)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 128)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_intermediateCodeStruct var_intermediateCodeStruct_5264 ;
      {
      routine_semanticAnalysis (constinArgument_inSourceFile.mAttribute_string, var_ast_2861, var_semanticContext_4920, constinArgument_inEndOfSourceFile, var_globalLiteralStringMap_4687, var_intermediateCodeStruct_5264, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 129)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 138)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_codeOptimisation (var_intermediateCodeStruct_5264, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 139)) ;
        }
        {
        routine_codeGeneration (constinArgument_inCurrentDirectory, constinArgument_inSourceFile.mAttribute_string, constinArgument_inEndOfSourceFile, var_intermediateCodeStruct_5264, var_semanticContext_4920.mAttribute_mTypeMap, constinArgument_inTargetName, var_semanticContext_4920.mAttribute_mPanicCodeType, var_semanticContext_4920.mAttribute_mPanicLineType, var_semanticContext_4920.mAttribute_mAvailableInterruptMap, var_sourceFileAbsolutePathSet_2908, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 140)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'addTargetSpecificFiles'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addTargetSpecificFiles (const GALGAS_lstring constinArgument_inTargetName,
                                     GALGAS_ast & ioArgument_ioAST,
                                     const GALGAS_string constinArgument_inCurrentDirectory,
                                     GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast_6277 = GALGAS_ast::constructor_default (SOURCE_FILE ("program.galgas", 165)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_targetDirectory_6373 = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 167)) ;
    const enumGalgasBool test_1 = var_targetDirectory_6373.getter_directoryExists (SOURCE_FILE ("program.galgas", 168)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      GALGAS_lstringlist temp_2 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("program.galgas", 172)) ;
      temp_2.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string (".plm-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 172)), constinArgument_inTargetName.mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 172))  COMMA_SOURCE_FILE ("program.galgas", 172)) ;
      routine_recursiveImportFileSystemTargetFiles (var_ast_6277, var_targetDirectory_6373, temp_2, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 169)) ;
      }
    }else if (kBoolFalse == test_1) {
      inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("program.galgas", 176)).getter_location (SOURCE_FILE ("program.galgas", 176)), GALGAS_string ("the '").add_operation (GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()), inCompiler COMMA_SOURCE_FILE ("program.galgas", 176)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 176))  COMMA_SOURCE_FILE ("program.galgas", 176)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_lstringlist temp_3 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("program.galgas", 181)) ;
    temp_3.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string (".plm-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 181)), constinArgument_inTargetName.mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 181))  COMMA_SOURCE_FILE ("program.galgas", 181)) ;
    routine_recursiveImportEmbeddedTargetFiles (var_ast_6277, temp_3, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 179)) ;
    }
  }
  ioArgument_ioAST.mAttribute_mDeclarationList = var_ast_6277.mAttribute_mDeclarationList.add_operation (ioArgument_ioAST.mAttribute_mDeclarationList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 185)) ;
  ioArgument_ioAST.mAttribute_mGlobalVarDeclarationList = var_ast_6277.mAttribute_mGlobalVarDeclarationList.add_operation (ioArgument_ioAST.mAttribute_mGlobalVarDeclarationList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 186)) ;
  ioArgument_ioAST.mAttribute_mControlRegisterDeclarationListAST = var_ast_6277.mAttribute_mControlRegisterDeclarationListAST.add_operation (ioArgument_ioAST.mAttribute_mControlRegisterDeclarationListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 187)) ;
  ioArgument_ioAST.mAttribute_mExtensionDeclarationListAST = var_ast_6277.mAttribute_mExtensionDeclarationListAST.add_operation (ioArgument_ioAST.mAttribute_mExtensionDeclarationListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 188)) ;
  ioArgument_ioAST.mAttribute_mProcedureListAST = var_ast_6277.mAttribute_mProcedureListAST.add_operation (ioArgument_ioAST.mAttribute_mProcedureListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 189)) ;
  ioArgument_ioAST.mAttribute_mRequiredProcList = var_ast_6277.mAttribute_mRequiredProcList.add_operation (ioArgument_ioAST.mAttribute_mRequiredProcList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 190)) ;
  ioArgument_ioAST.mAttribute_mExternProcList = var_ast_6277.mAttribute_mExternProcList.add_operation (ioArgument_ioAST.mAttribute_mExternProcList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 191)) ;
  ioArgument_ioAST.mAttribute_mSectionListAST = var_ast_6277.mAttribute_mSectionListAST.add_operation (ioArgument_ioAST.mAttribute_mSectionListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 192)) ;
  ioArgument_ioAST.mAttribute_mPrimitiveListAST = var_ast_6277.mAttribute_mPrimitiveListAST.add_operation (ioArgument_ioAST.mAttribute_mPrimitiveListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 193)) ;
  ioArgument_ioAST.mAttribute_mServiceListAST = var_ast_6277.mAttribute_mServiceListAST.add_operation (ioArgument_ioAST.mAttribute_mServiceListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 194)) ;
  ioArgument_ioAST.mAttribute_mGuardListAST = var_ast_6277.mAttribute_mGuardListAST.add_operation (ioArgument_ioAST.mAttribute_mGuardListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 195)) ;
  ioArgument_ioAST.mAttribute_mTargetList.plusAssign_operation(var_ast_6277.mAttribute_mTargetList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 196)) ;
  ioArgument_ioAST.mAttribute_mInitList.plusAssign_operation(var_ast_6277.mAttribute_mInitList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 197)) ;
  ioArgument_ioAST.mAttribute_mBootList.plusAssign_operation(var_ast_6277.mAttribute_mBootList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 198)) ;
  ioArgument_ioAST.mAttribute_mPanicClauses.plusAssign_operation(var_ast_6277.mAttribute_mPanicClauses, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 199)) ;
  ioArgument_ioAST.mAttribute_mISRDeclarationListAST = var_ast_6277.mAttribute_mISRDeclarationListAST.add_operation (ioArgument_ioAST.mAttribute_mISRDeclarationListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 201)) ;
  ioArgument_ioAST.mAttribute_mTaskList = var_ast_6277.mAttribute_mTaskList.add_operation (ioArgument_ioAST.mAttribute_mTaskList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 202)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'recursiveImportFileSystemTargetFiles'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportFileSystemTargetFiles (GALGAS_ast & ioArgument_ioAST,
                                                   const GALGAS_string constinArgument_inTargetDirectory,
                                                   GALGAS_lstringlist inArgument_inImportedClauseList,
                                                   GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_8857 (inArgument_inImportedClauseList, kEnumeration_up) ;
  while (enumerator_8857.hasCurrentObject ()) {
    GALGAS_string var_absolutePath_8881 = constinArgument_inTargetDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 214)).add_operation (enumerator_8857.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 214)) ;
    const enumGalgasBool test_0 = var_absolutePath_8881.getter_fileExists (SOURCE_FILE ("program.galgas", 215)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath_8881 COMMA_SOURCE_FILE ("program.galgas", 216)).operator_not (SOURCE_FILE ("program.galgas", 216)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath_8881  COMMA_SOURCE_FILE ("program.galgas", 217)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_absolutePath_8881.getter_pathExtension (SOURCE_FILE ("program.galgas", 218)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_lstringlist var_importedFileList_9287 ;
          var_importedFileList_9287.drop () ;
          GALGAS_location joker_9317 ; // Joker input parameter
          cGrammar_plm_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_8881, enumerator_8857.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 219)), ioArgument_ioAST, var_importedFileList_9287, joker_9317  COMMA_SOURCE_FILE ("program.galgas", 219)) ;
          {
          routine_recursiveImportFileSystemTargetFiles (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList_9287, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 223)) ;
          }
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_absolutePath_8881.getter_pathExtension (SOURCE_FILE ("program.galgas", 229)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstringlist var_importedFileList_9780 ;
            var_importedFileList_9780.drop () ;
            GALGAS_location joker_9810 ; // Joker input parameter
            cGrammar_plm_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_8881, enumerator_8857.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 230)), ioArgument_ioAST, var_importedFileList_9780, joker_9810  COMMA_SOURCE_FILE ("program.galgas", 230)) ;
            {
            routine_recursiveImportFileSystemTargetFiles (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList_9780, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 234)) ;
            }
          }else if (kBoolFalse == test_3) {
            inCompiler->emitSemanticError (enumerator_8857.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 241)), GALGAS_string ("invalid extension (should be .plm or .plm-target)")  COMMA_SOURCE_FILE ("program.galgas", 241)) ;
          }
        }
      }
    }else if (kBoolFalse == test_0) {
      inCompiler->emitSemanticError (enumerator_8857.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 245)), GALGAS_string ("file does not exist in file system target definition")  COMMA_SOURCE_FILE ("program.galgas", 245)) ;
    }
    enumerator_8857.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'recursiveImportEmbeddedTargetFiles'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportEmbeddedTargetFiles (GALGAS_ast & ioArgument_ioAST,
                                                 GALGAS_lstringlist inArgument_inImportedClauseList,
                                                 GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_10611 (inArgument_inImportedClauseList, kEnumeration_up) ;
  while (enumerator_10611.hasCurrentObject ()) {
    GALGAS_filewrapper var_fw_10638 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    const enumGalgasBool test_0 = var_fw_10638.getter_fileExistsAtPath (enumerator_10611.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 259)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_embeddedPath_10740 = GALGAS_string (":").add_operation (enumerator_10611.current_mValue (HERE).getter_string (SOURCE_FILE ("program.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 260)) ;
      const enumGalgasBool test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath_10740 COMMA_SOURCE_FILE ("program.galgas", 261)).operator_not (SOURCE_FILE ("program.galgas", 261)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath_10740  COMMA_SOURCE_FILE ("program.galgas", 262)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_10611.current_mValue (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("program.galgas", 263)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_lstringlist var_importedFileList_11085 ;
          var_importedFileList_11085.drop () ;
          GALGAS_location joker_11115 ; // Joker input parameter
          cGrammar_plm_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_10638.getter_textFileContentsAtPath (enumerator_10611.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 264)), enumerator_10611.current_mValue (HERE).mAttribute_string, ioArgument_ioAST, var_importedFileList_11085, joker_11115  COMMA_SOURCE_FILE ("program.galgas", 264)) ;
          {
          routine_recursiveImportEmbeddedTargetFiles (ioArgument_ioAST, var_importedFileList_11085, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 268)) ;
          }
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_10611.current_mValue (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("program.galgas", 273)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstringlist var_importedFileList_11533 ;
            var_importedFileList_11533.drop () ;
            GALGAS_location joker_11563 ; // Joker input parameter
            cGrammar_plm_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_10638.getter_textFileContentsAtPath (enumerator_10611.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 274)), enumerator_10611.current_mValue (HERE).mAttribute_string, ioArgument_ioAST, var_importedFileList_11533, joker_11563  COMMA_SOURCE_FILE ("program.galgas", 274)) ;
            {
            routine_recursiveImportEmbeddedTargetFiles (ioArgument_ioAST, var_importedFileList_11533, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 278)) ;
            }
          }else if (kBoolFalse == test_3) {
            inCompiler->emitSemanticError (enumerator_10611.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 284)), GALGAS_string ("invalid extension (should be .plm or .plm-target)")  COMMA_SOURCE_FILE ("program.galgas", 284)) ;
          }
        }
      }
    }else if (kBoolFalse == test_0) {
      inCompiler->emitSemanticError (enumerator_10611.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 288)), GALGAS_string ("cannot find this file in embedded files")  COMMA_SOURCE_FILE ("program.galgas", 288)) ;
    }
    enumerator_10611.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'recursiveImportFiles'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportFiles (GALGAS_ast & ioArgument_ioAST,
                                   GALGAS_string inArgument_inCurrentDirectory,
                                   GALGAS_lstringlist inArgument_inImportedClauseList,
                                   GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_12335 (inArgument_inImportedClauseList, kEnumeration_up) ;
  while (enumerator_12335.hasCurrentObject ()) {
    GALGAS_string var_absolutePath_12359 = enumerator_12335.current_mValue (HERE).mAttribute_string.getter_absolutePathFromPath (inArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 302)) ;
    const enumGalgasBool test_0 = var_absolutePath_12359.getter_fileExists (SOURCE_FILE ("program.galgas", 303)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath_12359 COMMA_SOURCE_FILE ("program.galgas", 304)).operator_not (SOURCE_FILE ("program.galgas", 304)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath_12359  COMMA_SOURCE_FILE ("program.galgas", 305)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_absolutePath_12359.getter_pathExtension (SOURCE_FILE ("program.galgas", 306)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_lstringlist var_importedFileList_12808 ;
          var_importedFileList_12808.drop () ;
          GALGAS_location joker_12838 ; // Joker input parameter
          cGrammar_plm_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_12359, enumerator_12335.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 307)), ioArgument_ioAST, var_importedFileList_12808, joker_12838  COMMA_SOURCE_FILE ("program.galgas", 307)) ;
          {
          routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_12808, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 311)) ;
          }
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_absolutePath_12359.getter_pathExtension (SOURCE_FILE ("program.galgas", 317)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstringlist var_importedFileList_13287 ;
            var_importedFileList_13287.drop () ;
            GALGAS_location joker_13317 ; // Joker input parameter
            cGrammar_plm_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_12359, enumerator_12335.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 318)), ioArgument_ioAST, var_importedFileList_13287, joker_13317  COMMA_SOURCE_FILE ("program.galgas", 318)) ;
            {
            routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_13287, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 322)) ;
            }
          }else if (kBoolFalse == test_3) {
            inCompiler->emitSemanticError (enumerator_12335.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 329)), GALGAS_string ("invalid extension (should be .plm or .plm-target)")  COMMA_SOURCE_FILE ("program.galgas", 329)) ;
          }
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_filewrapper var_fw_13692 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      const enumGalgasBool test_4 = var_fw_13692.getter_fileExistsAtPath (enumerator_12335.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 334)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_embeddedPath_13798 = GALGAS_string (":").add_operation (enumerator_12335.current_mValue (HERE).getter_string (SOURCE_FILE ("program.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 335)) ;
        const enumGalgasBool test_5 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath_13798 COMMA_SOURCE_FILE ("program.galgas", 336)).operator_not (SOURCE_FILE ("program.galgas", 336)).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath_13798  COMMA_SOURCE_FILE ("program.galgas", 337)) ;
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_12335.current_mValue (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("program.galgas", 338)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_lstringlist var_importedFileList_14155 ;
            var_importedFileList_14155.drop () ;
            GALGAS_location joker_14187 ; // Joker input parameter
            cGrammar_plm_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_13692.getter_textFileContentsAtPath (enumerator_12335.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 339)), enumerator_12335.current_mValue (HERE).mAttribute_string, ioArgument_ioAST, var_importedFileList_14155, joker_14187  COMMA_SOURCE_FILE ("program.galgas", 339)) ;
            {
            routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_14155, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 343)) ;
            }
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_12335.current_mValue (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("program.galgas", 349)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_lstringlist var_importedFileList_14660 ;
              var_importedFileList_14660.drop () ;
              GALGAS_location joker_14692 ; // Joker input parameter
              cGrammar_plm_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_13692.getter_textFileContentsAtPath (enumerator_12335.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 350)), enumerator_12335.current_mValue (HERE).mAttribute_string, ioArgument_ioAST, var_importedFileList_14660, joker_14692  COMMA_SOURCE_FILE ("program.galgas", 350)) ;
              {
              routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_14660, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 354)) ;
              }
            }else if (kBoolFalse == test_7) {
              inCompiler->emitSemanticError (enumerator_12335.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 361)), GALGAS_string ("invalid extension (should be .plm or .plm-target)")  COMMA_SOURCE_FILE ("program.galgas", 361)) ;
            }
          }
        }
      }else if (kBoolFalse == test_4) {
        inCompiler->emitSemanticError (enumerator_12335.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 365)), GALGAS_string ("cannot find this file in file system and in embedded files")  COMMA_SOURCE_FILE ("program.galgas", 365)) ;
      }
    }
    enumerator_12335.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Filewrapper 'embeddedSampleCode'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- File 'LPC-L2294/01-blinkleds.plm'

const char * gWrapperFileContent_0_embeddedSampleCode = "target \"LPC-L2294\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section ledOn () {\n"
  "  IO1CLR  = 1 << 23 // Led On\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section ledOff () {\n"
  "  IO1SET  = 1 << 23 // Led Off\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    ledOn ()\n"
  "    self.compteur +%= 500\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    ledOff ()\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_0_embeddedSampleCode (
  "01-blinkleds.plm",
  "plm",
  true, // Text file
  586, // Text length
  gWrapperFileContent_0_embeddedSampleCode
) ;

//--- File 'LPC-L2294/02-control-register-array.plm'

const char * gWrapperFileContent_1_embeddedSampleCode = "target \"LPC-L2294\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "register PIPO[8] at 0x4000_0000 : 0x40 $uint32 {\n"
  "  10, fields [4], 10, bit, 7\n"
  "}\n"
  "\n"
  "register SINGLE_PIPO at 0x5000_0000 $uint32 {\n"
  "  10, fields [4], 10, bit, 7\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section ledOn () {\n"
  "  IO1CLR  = 1 << 23 // Led On\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section ledOff () {\n"
  "  globalVar = azerty SINGLE_PIPO\n"
  "  globalVar = SINGLE_PIPO.fields\n"
  "  globalVar = azerty PIPO [0]\n"
  "  globalVar = azerty PIPO [7]\n"
  "  var idx $uint3 = 5\n"
  "  globalVar = azerty PIPO [idx]\n"
  "  globalVar = PIPO [idx].fields\n"
  "  var index $uint32 = 5\n"
  "  globalBit = PIPO [index].bit.bool\n"
  "  PIPO [2] = globalVar\n"
  "  PIPO [index] = $PIPO {fields:5, bit}\n"
  "  IO1SET = 1 << 23 // Led Off\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var globalVar $uint32 = 0\n"
  "var globalBit $bool = false\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  " \n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    ledOn ()\n"
  "    self.compteur +%= 500\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    ledOff ()\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_1_embeddedSampleCode (
  "02-control-register-array.plm",
  "plm",
  true, // Text file
  1239, // Text length
  gWrapperFileContent_1_embeddedSampleCode
) ;

//--- All files of 'LPC-L2294' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_1 [3] = {
  & gWrapperFile_0_embeddedSampleCode,
  & gWrapperFile_1_embeddedSampleCode,
  NULL
} ;

//--- All sub-directories of 'LPC-L2294' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_1 [1] = {
  NULL
} ;

//--- Directory 'LPC-L2294'

const cDirectoryWrapper gWrapperDirectory_1_embeddedSampleCode (
  "LPC-L2294",
  2,
  gWrapperAllFiles_embeddedSampleCode_1,
  0,
  gWrapperAllDirectories_embeddedSampleCode_1
) ;

//--- File 'teensy-3-1-tp/01-blink-led.plm'

const char * gWrapperFileContent_2_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T\xC3""\xA2""che priority 1 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:azerty self.compteur) {\n"
  "    leds.write (!on:azerty LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.waitUntilMS (!deadline: azerty self.compteur)\n"
  "    leds.write (!off:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.printUnsigned (!time.millis ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_2_embeddedSampleCode (
  "01-blink-led.plm",
  "plm",
  true, // Text file
  566, // Text length
  gWrapperFileContent_2_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/02-blink-leds.plm'

const char * gWrapperFileContent_3_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    leds.write (!on:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    leds.write (!off:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.printUnsigned (!time.millis ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T2 priority 2 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    leds.write (!on:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    leds.write (!off:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T3 priority 3 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    leds.write (!on:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    leds.write (!off:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T4 priority 4 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    leds.write (!on:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    leds.write (!off:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T5 priority 5 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    leds.write (!on:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    leds.write (!off:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_3_embeddedSampleCode (
  "02-blink-leds.plm",
  "plm",
  true, // Text file
  1983, // Text length
  gWrapperFileContent_3_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/03-section-service-duration.plm'

const char * gWrapperFileContent_4_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "section emptySection () {\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "service emptyService () {\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "section getSysTick () -> $uint32 {\n"
  "  result = azerty SYST_CVR\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "let ITERATIONS = 7\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T priority 0 stackSize 512 {\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "  init 1 {\n"
  "    var cumul $uint32 = 0\n"
  "  //--- Compute getSysTick duration\n"
  "    for x $uint32 in 0 ..< azerty ITERATIONS {\n"
  "      time.waitDuringMS (!delay:1)\n"
  "      let t0 = getSysTick ()\n"
  "      let t1 = getSysTick ()\n"
  "      cumul += azerty t0 - azerty t1\n"
  "      lcd.printUnsigned (!t0 - t1)\n"
  "      lcd.printSpaces (!1)\n"
  "    }\n"
  "    let systickDuration = cumul / ITERATIONS\n"
  "  //--- Compute emptySection duration\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    for y $uint32 in 0 ..< ITERATIONS {\n"
  "      time.waitDuringMS (!delay:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptySection ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.printUnsigned (!azerty t0 - azerty t1 - azerty systickDuration)\n"
  "      lcd.printSpaces (!1)\n"
  "    }\n"
  "  //--- Compute emptyService duration\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    for z $uint32 in 0 ..< 4 {\n"
  "      time.waitDuringMS (!delay:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptyService ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.printUnsigned (!t0 - t1 - systickDuration)\n"
  "      lcd.printSpaces (!1)\n"
  "   }\n"
  "  }\n"
  "  \n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_4_embeddedSampleCode (
  "03-section-service-duration.plm",
  "plm",
  true, // Text file
  1866, // Text length
  gWrapperFileContent_4_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/04-semaphore.plm'

const char * gWrapperFileContent_5_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var s\xC3""\xA9""maphore = $semaphore (!value:0)\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "\n"
  "  init 123 {\n"
  "    self.top = 1\n"
  "  }\n"
  "  \n"
  "  init 256 {\n"
  "    let \xCF""\x80"" = self.top + 2\n"
  "    self.top += \xCF""\x80""\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    s\xC3""\xA9""maphore.signal ()\n"
  "    self.top += 250\n"
  "    leds.write (!on:LED_L1)\n"
  "    let constanteAccentu\xC3""\xA9""e = self.top\n"
  "    time.waitUntilMS (!deadline:constanteAccentu\xC3""\xA9""e)\n"
  "    s\xC3""\xA9""maphore.signal ()\n"
  "    self.top += 250\n"
  "    leds.write (!off:LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T2 priority 2 stackSize 512 {\n"
  "\n"
  "  while s\xC3""\xA9""maphore.wait () {\n"
  "    leds.write (!on:LED_L2)\n"
  "    s\xC3""\xA9""maphore.wait ()\n"
  "    leds.write (!off:LED_L2)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_5_embeddedSampleCode (
  "04-semaphore.plm",
  "plm",
  true, // Text file
  872, // Text length
  gWrapperFileContent_5_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/05-semaphore-P-until.plm'

const char * gWrapperFileContent_6_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $monSemaphore {\n"
  "  var value $uint32\n"
  "  var list = $taskList ()\n"
  "\n"
  "  public service V () {\n"
  "    makeTaskReady (!\?fromList:self.list \?found:let found)\n"
  "    if not found {\n"
  "      self.value += 1\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public primitive P_until (\?deadline:inDeadline $uint32) -> $bool {\n"
  "    result = self.value > 0\n"
  "    if result {\n"
  "      self.value -= 1\n"
  "    }else if inDeadline > time.millis () {\n"
  "      block (!\?inList:self.list !onDeadline:inDeadline)\n"
  "    }\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "var s = $monSemaphore (!value:0)\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "\n"
  "  init 123 {\n"
  "    self.top = 1\n"
  "  }\n"
  "  \n"
  "  init 256 {\n"
  "    self.top += 2\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    s.V ()\n"
  "    self.top += 300\n"
  "    leds.write (!on:LED_L0)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s.V ()\n"
  "    self.top += 700\n"
  "    leds.write (!off:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 priority 2 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:0) { // no wait...\n"
  "    let r = s.P_until (!deadline:self.top)\n"
  "    if r {\n"
  "      leds.write (!toggle:LED_L1)\n"
  "    }else{\n"
  "      self.top += 400\n"
  "      leds.write (!toggle:LED_L4)\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_6_embeddedSampleCode (
  "05-semaphore-P-until.plm",
  "plm",
  true, // Text file
  1549, // Text length
  gWrapperFileContent_6_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/06-guarded-semaphore.plm'

const char * gWrapperFileContent_7_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $monSemaphore {\n"
  "  var value $uint32\n"
  "  var list = $taskList ()\n"
  "  var guardList = $guardList ()\n"
  "\n"
  "  public primitive P @noUnusedWarning () {\n"
  "    if self.value > 0 {\n"
  "      self.value -= 1\n"
  "    }else{\n"
  "      block (!\?inList:self.list)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public service V () {\n"
  "    makeTaskReady (!\?fromList:self.list \?found:let found)\n"
  "    if not found {\n"
  "      self.value += 1\n"
  "      notifyChange (!\?forGuard:self.guardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public guard P () {\n"
  "    accept = self.value > 0\n"
  "    if accept {\n"
  "      self.value -= 1\n"
  "    }else{\n"
  "      handle (!\?guard:self.guardList)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "  public guard PP () : self.P () {\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "var s0 = $monSemaphore (!value:0)\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "var s1 = $monSemaphore (!value:0)\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 priority 0 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    s0.V ()\n"
  "    self.top += 250\n"
  "    leds.write (!on:LED_L0)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s0.V ()\n"
  "    self.top += 250\n"
  "    leds.write (!off:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    s1.V ()\n"
  "    self.top += 249\n"
  "    leds.write (!on:LED_L4)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s1.V ()\n"
  "    self.top += 249\n"
  "    leds.write (!off:LED_L4)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 priority 2 stackSize 512 {\n"
  "  var deadline $uint32 = 0\n"
  "  \n"
  "  while s0.PP () {\n"
  "   leds.write (!toggle:LED_L1)\n"
  "  }\n"
  "  \n"
  "  while s1.P () {\n"
  "    leds.write (!toggle:LED_L3)\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    leds.write (!toggle:LED_L2)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_7_embeddedSampleCode (
  "06-guarded-semaphore.plm",
  "plm",
  true, // Text file
  2134, // Text length
  gWrapperFileContent_7_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/07-guarded-semaphore2.plm'

const char * gWrapperFileContent_8_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "var s0 = $semaphore (!value:0)\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "var s1 = $semaphore (!value:0)\n"
  "\n"
  "guard PP () : s1.wait () {\n"
  "}\n"
  "\n"
  "guard convenienceWaitUntilMS (\?deadline:inDeadline $uint32)\n"
  ": time.waitUntilMS (!deadline:inDeadline) {\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 priority 0 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    s0.signal ()\n"
  "    self.top += 250\n"
  "    leds.write (!on:LED_L0)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s0.signal ()\n"
  "    self.top += 250\n"
  "    leds.write (!off:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    s1.signal ()\n"
  "    self.top += 249\n"
  "    leds.write (!on:LED_L4)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s1.signal ()\n"
  "    self.top += 249\n"
  "    leds.write (!off:LED_L4)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 priority 2 stackSize 512 {\n"
  "  var deadline $uint32 = 0\n"
  "  \n"
  "  while s0.wait () {\n"
  "    leds.write (!toggle:LED_L1)\n"
  "  }\n"
  "  \n"
  "  while PP () {\n"
  "    leds.write (!toggle:LED_L3)\n"
  "  }\n"
  "  \n"
  "  while convenienceWaitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    leds.write (!toggle:LED_L2)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_8_embeddedSampleCode (
  "07-guarded-semaphore2.plm",
  "plm",
  true, // Text file
  1591, // Text length
  gWrapperFileContent_8_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/08-rendez-vous.plm'

const char * gWrapperFileContent_9_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $rendezVous {\n"
  "  var inputWaitList = $taskList ()\n"
  "  var outputWaitList = $taskList ()\n"
  "  var inputGuardList = $guardList ()\n"
  "  var outputGuardList = $guardList ()\n"
  "\n"
  "  public primitive input () {\n"
  "    makeTaskReady (!\?fromList:self.outputWaitList \?found:let found)\n"
  "    if not found {\n"
  "      notifyChange (!\?forGuard:self.outputGuardList)\n"
  "      block (!\?inList:self.inputWaitList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public primitive output () {\n"
  "    makeTaskReady (!\?fromList:self.inputWaitList \?found:let found)\n"
  "    if not found {\n"
  "      notifyChange (!\?forGuard:self.inputGuardList)\n"
  "      block (!\?inList:self.outputWaitList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public primitive inputUntil @noUnusedWarning (\?deadline:inDeadline $uint32) -> $bool {\n"
  "    makeTaskReady (!\?fromList:self.outputWaitList \?found:result)\n"
  "    if (not result) and (inDeadline > time.millis ()) { \n"
  "      block (!\?inList:self.inputWaitList !onDeadline:inDeadline)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public primitive outputUntil @noUnusedWarning (\?deadline:inDeadline $uint32) -> $bool {\n"
  "    makeTaskReady (!\?fromList:self.inputWaitList \?found:result)\n"
  "    if (not result) and (inDeadline > time.millis ()) { \n"
  "      block (!\?inList:self.outputWaitList !onDeadline:inDeadline)\n"
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
  "var rdvs = $rendezVous ()\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 priority 0 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    rdvs.output ()\n"
  "    self.top += 250\n"
  "    leds.write (!on:LED_L0)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    rdvs.output ()\n"
  "    self.top += 250\n"
  "    leds.write (!off:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "\n"
  "  while rdvs.input () {\n"
  "    leds.write (!on:LED_L1)\n"
  "    rdvs.input ()\n"
  "    leds.write (!off:LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_9_embeddedSampleCode (
  "08-rendez-vous.plm",
  "plm",
  true, // Text file
  2442, // Text length
  gWrapperFileContent_9_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/09-rendez-vous-data.plm'

const char * gWrapperFileContent_10_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $rendezVousData\xC3""\xA9"" {\n"
  "  var autoriserLecture  = $semaphore (!value:0)\n"
  "  var autoriserEcriture = $semaphore (!value:1)\n"
  "  var signalerDonneeLue = $semaphore (!value:0)\n"
  "  var donn\xC3""\xA9""e $uint32 = 0\n"
  "\n"
  "  public func `user output @mutating @userAccess (\?data:inData $uint32) {\n"
  "    self.autoriserEcriture.wait ()\n"
  "    self.donn\xC3""\xA9""e = inData\n"
  "    self.autoriserLecture.signal ()\n"
  "    self.signalerDonneeLue.wait ()\n"
  "  }\n"
  "\n"
  "//  public func `user input (!data:outData $uint32) {\n"
  "//    self.autoriserLecture.P ()\n"
  "//    outData = self.data\n"
  "//    self.signalerDonneeLue.V ()\n"
  "//    self.autoriserEcriture.V ()\n"
  "//  }\n"
  "\n"
  "  public guard entr\xC3""\xA9""e (!data:outData $uint32) : self.autoriserLecture.wait () {\n"
  "    outData = self.donn\xC3""\xA9""e\n"
  "    self.signalerDonneeLue.signal ()\n"
  "    self.autoriserEcriture.signal ()\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "var rdvs = $rendezVousData\xC3""\xA9"" ()\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "var rdvs2 = $rendezVousData\xC3""\xA9"" ()\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "var s = $semaphore (!value:1)\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 priority 0 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "  var n $uint32 = 1\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    rdvs.output (!data:self.n)\n"
  "    rdvs2.output (!data:self.n)\n"
  "    leds.write (!toggle:LED_L0)\n"
  "    self.top += 500\n"
  "    self.n += 1\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 1024 {\n"
  "\n"
  "  while rdvs.entr\xC3""\xA9""e (\?data:let x) {\n"
  "    leds.write (!toggle:LED_L1)\n"
  "    s.wait ()\n"
  "      lcd.goto (!line:0 !column:0)\n"
  "      lcd.printUnsigned (!x)\n"
  "    s.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 priority 2 stackSize 1024 {\n"
  "  var deadline $uint32 = 0\n"
  "\n"
  "  while rdvs2.entr\xC3""\xA9""e (\?data:let x) {\n"
  "    leds.write (!toggle:LED_L2)\n"
  "    s.wait ()\n"
  "      lcd.goto (!line:1 !column:0)\n"
  "      lcd.printUnsigned (!x)\n"
  "    s.signal ()\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    leds.write (!toggle:LED_L4)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_10_embeddedSampleCode (
  "09-rendez-vous-data.plm",
  "plm",
  true, // Text file
  2378, // Text length
  gWrapperFileContent_10_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/10-pit-unprivileged-mode-it.plm'

const char * gWrapperFileContent_11_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "init 100_000 {\n"
  "  SIM_SCGC6 |= SIM_SCGC6_PIT\n"
  "  NVIC_ISER2 = 1 << ((84 - 16) & 31)\n"
  "  AICS0_PARCG = 0\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section setupPIT () {\n"
  "  PIT_MCR = 0\n"
  "  PIT_LDVAL0 = 200000\n"
  "  PIT_TCTRL0 = 3 // Interrupt, enabled\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section getPITValue (!outValue $uint32) {\n"
  "  outValue = gPITValue\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var gPITValue $uint32 = 0 {\n"
  "  @rw isr PITChannel0\n"
  "//  section getPITValue\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "isr PITChannel0 {\n"
  "//--- Acquitter l'interruption\n"
  "  PIT_TFLG0 = 1\n"
  "//--- Incr\xC3""\xA9""menter le compteur\n"
  "  gPITValue += 1\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T priority 12 stackSize 512 {\n"
  "  var deadline $uint32 = 0\n"
  "\n"
  "  init 0 {\n"
  "    setupPIT ()\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline +%= 250\n"
  "    leds.write (!on:LED_L1) // Allumer la led\n"
  "    time.waitUntilMS (!deadline:self.deadline)\n"
  "    self.deadline +%= 250\n"
  "    leds.write (!off:LED_L1)  // \xC3""\x89""teindre la led\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.printSpaces (!10)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    var value $uint32\n"
  "    getPITValue (\?value)\n"
  "    lcd.printUnsigned (!value)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_11_embeddedSampleCode (
  "10-pit-unprivileged-mode-it.plm",
  "plm",
  true, // Text file
  1377, // Text length
  gWrapperFileContent_11_embeddedSampleCode
) ;

//--- File 'teensy-3-1-tp/11-array-example.plm'

const char * gWrapperFileContent_12_embeddedSampleCode = "target \"teensy-3-1-tp\"\n"
  "\n"
  "let SIZE = 9\n"
  "\n"
  "type $A : $uint32 [SIZE]\n"
  "\n"
  "struct $B {\n"
  "  var a $uint32 = 0\n"
  "  var b $uint32 = 0\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T priority 12 stackSize 512 {\n"
  "  var deadline $uint32 = 0\n"
  "  var array = $A ()\n"
  "  var array2 = $A ()\n"
  "  var index $int32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline +%= 1000\n"
  "    leds.write (!toggle:LED_L1)\n"
  "    self.array [self.index] = 0\n"
  "    self.index +%= 1\n"
  "    if self.index == SIZE {\n"
  "      self.index = 0\n"
  "    }\n"
  "    for i $uint32 in 0 ..< $A.size {\n"
  "      self.array [i] +%= 1\n"
  "    }\n"
  "    self.array2 = azerty self.array \n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    for i $uint32 in 0 ..< $A.size {\n"
  "      lcd.printUnsigned (!azerty self.array2 [i])\n"
  "      lcd.printSpaces (!1)\n"
  "    }\n"
  "    \n"
  "    var a = $A ()\n"
  "    var x $uint32 = 0\n"
  "    for i $uint32 in 0 ..< $A.size {\n"
  "      a [i] = 9\n"
  "      a [i] += 9\n"
  "      x = a [i]\n"
  "    }\n"
  "    \n"
  "    var s = $B ()\n"
  "    var aa = azerty s.a\n"
  "    var bb = azerty s.b\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_12_embeddedSampleCode (
  "11-array-example.plm",
  "plm",
  true, // Text file
  1046, // Text length
  gWrapperFileContent_12_embeddedSampleCode
) ;

//--- All files of 'teensy-3-1-tp' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_2 [12] = {
  & gWrapperFile_2_embeddedSampleCode,
  & gWrapperFile_3_embeddedSampleCode,
  & gWrapperFile_4_embeddedSampleCode,
  & gWrapperFile_5_embeddedSampleCode,
  & gWrapperFile_6_embeddedSampleCode,
  & gWrapperFile_7_embeddedSampleCode,
  & gWrapperFile_8_embeddedSampleCode,
  & gWrapperFile_9_embeddedSampleCode,
  & gWrapperFile_10_embeddedSampleCode,
  & gWrapperFile_11_embeddedSampleCode,
  & gWrapperFile_12_embeddedSampleCode,
  NULL
} ;

//--- All sub-directories of 'teensy-3-1-tp' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_2 [1] = {
  NULL
} ;

//--- Directory 'teensy-3-1-tp'

const cDirectoryWrapper gWrapperDirectory_2_embeddedSampleCode (
  "teensy-3-1-tp",
  11,
  gWrapperAllFiles_embeddedSampleCode_2,
  0,
  gWrapperAllDirectories_embeddedSampleCode_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_0 [3] = {
  & gWrapperDirectory_1_embeddedSampleCode,
  & gWrapperDirectory_2_embeddedSampleCode,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_embeddedSampleCode (
  "",
  0,
  gWrapperAllFiles_embeddedSampleCode_0,
  2,
  gWrapperAllDirectories_embeddedSampleCode_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractDeclaration::objectCompare (const GALGAS_abstractDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclaration::GALGAS_abstractDeclaration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclaration::GALGAS_abstractDeclaration (const cPtr_abstractDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @abstractDeclaration class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractDeclaration::cPtr_abstractDeclaration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @abstractDeclaration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDeclaration ("abstractDeclaration",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDeclaration GALGAS_abstractDeclaration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclaration result ;
  const GALGAS_abstractDeclaration * p = (const GALGAS_abstractDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_booleanDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanDeclaration * p = (const cPtr_booleanDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBooleanTypeName.objectCompare (p->mAttribute_mBooleanTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_booleanDeclaration::objectCompare (const GALGAS_booleanDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclaration::GALGAS_booleanDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclaration GALGAS_booleanDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_booleanDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclaration::GALGAS_booleanDeclaration (const cPtr_booleanDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclaration GALGAS_booleanDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mBooleanTypeName,
                                                                      const GALGAS_lstringlist & inAttribute_mAttributeList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_booleanDeclaration result ;
  if (inAttribute_mBooleanTypeName.isValid () && inAttribute_mAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanDeclaration (inAttribute_mBooleanTypeName, inAttribute_mAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_booleanDeclaration::getter_mBooleanTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanDeclaration * p = (const cPtr_booleanDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanDeclaration) ;
    result = p->mAttribute_mBooleanTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_booleanDeclaration::getter_mBooleanTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBooleanTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_booleanDeclaration::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanDeclaration * p = (const cPtr_booleanDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanDeclaration) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_booleanDeclaration::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @booleanDeclaration class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_booleanDeclaration::cPtr_booleanDeclaration (const GALGAS_lstring & in_mBooleanTypeName,
                                                  const GALGAS_lstringlist & in_mAttributeList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mBooleanTypeName (in_mBooleanTypeName),
mAttribute_mAttributeList (in_mAttributeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_booleanDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanDeclaration ;
}

void cPtr_booleanDeclaration::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@booleanDeclaration:" ;
  mAttribute_mBooleanTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_booleanDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanDeclaration (mAttribute_mBooleanTypeName, mAttribute_mAttributeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @booleanDeclaration type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanDeclaration ("booleanDeclaration",
                                           & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_booleanDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_booleanDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanDeclaration GALGAS_booleanDeclaration::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_booleanDeclaration result ;
  const GALGAS_booleanDeclaration * p = (const GALGAS_booleanDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_configurationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mPointerSize.objectCompare (p->mAttribute_mPointerSize) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPanicCodeTypeName.objectCompare (p->mAttribute_mPanicCodeTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPanicLineTypeName.objectCompare (p->mAttribute_mPanicLineTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUnsignedIntegerTypeName.objectCompare (p->mAttribute_mUnsignedIntegerTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetParameters.objectCompare (p->mAttribute_mTargetParameters) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInterruptionConfigurationList.objectCompare (p->mAttribute_mInterruptionConfigurationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_configurationDeclarationAST::objectCompare (const GALGAS_configurationDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_configurationDeclarationAST::constructor_new (GALGAS_lbigint::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_targetParameters::constructor_default (HERE),
                                                              GALGAS_interruptionConfigurationList::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::constructor_new (const GALGAS_lbigint & inAttribute_mPointerSize,
                                                                                        const GALGAS_lstring & inAttribute_mPanicCodeTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mPanicLineTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mUnsignedIntegerTypeName,
                                                                                        const GALGAS_targetParameters & inAttribute_mTargetParameters,
                                                                                        const GALGAS_interruptionConfigurationList & inAttribute_mInterruptionConfigurationList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  if (inAttribute_mPointerSize.isValid () && inAttribute_mPanicCodeTypeName.isValid () && inAttribute_mPanicLineTypeName.isValid () && inAttribute_mUnsignedIntegerTypeName.isValid () && inAttribute_mTargetParameters.isValid () && inAttribute_mInterruptionConfigurationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_configurationDeclarationAST (inAttribute_mPointerSize, inAttribute_mPanicCodeTypeName, inAttribute_mPanicLineTypeName, inAttribute_mUnsignedIntegerTypeName, inAttribute_mTargetParameters, inAttribute_mInterruptionConfigurationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_configurationDeclarationAST::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mAttribute_mPointerSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cPtr_configurationDeclarationAST::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPointerSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mAttribute_mPanicCodeTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicCodeTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicCodeTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mAttribute_mPanicLineTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mPanicLineTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicLineTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_configurationDeclarationAST::getter_mUnsignedIntegerTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mAttribute_mUnsignedIntegerTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_configurationDeclarationAST::getter_mUnsignedIntegerTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnsignedIntegerTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  GALGAS_targetParameters result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mAttribute_mTargetParameters ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters cPtr_configurationDeclarationAST::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    result = p->mAttribute_mInterruptionConfigurationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList cPtr_configurationDeclarationAST::getter_mInterruptionConfigurationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInterruptionConfigurationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @configurationDeclarationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (const GALGAS_lbigint & in_mPointerSize,
                                                                    const GALGAS_lstring & in_mPanicCodeTypeName,
                                                                    const GALGAS_lstring & in_mPanicLineTypeName,
                                                                    const GALGAS_lstring & in_mUnsignedIntegerTypeName,
                                                                    const GALGAS_targetParameters & in_mTargetParameters,
                                                                    const GALGAS_interruptionConfigurationList & in_mInterruptionConfigurationList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mPointerSize (in_mPointerSize),
mAttribute_mPanicCodeTypeName (in_mPanicCodeTypeName),
mAttribute_mPanicLineTypeName (in_mPanicLineTypeName),
mAttribute_mUnsignedIntegerTypeName (in_mUnsignedIntegerTypeName),
mAttribute_mTargetParameters (in_mTargetParameters),
mAttribute_mInterruptionConfigurationList (in_mInterruptionConfigurationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_configurationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

void cPtr_configurationDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@configurationDeclarationAST:" ;
  mAttribute_mPointerSize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPanicCodeTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPanicLineTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUnsignedIntegerTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetParameters.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInterruptionConfigurationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_configurationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mAttribute_mPointerSize, mAttribute_mPanicCodeTypeName, mAttribute_mPanicLineTypeName, mAttribute_mUnsignedIntegerTypeName, mAttribute_mTargetParameters, mAttribute_mInterruptionConfigurationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @configurationDeclarationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  const GALGAS_configurationDeclarationAST * p = (const GALGAS_configurationDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_configurationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumerationDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumerationDeclaration * p = (const cPtr_enumerationDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumerationDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mEnumerationName.objectCompare (p->mAttribute_mEnumerationName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCaseNameList.objectCompare (p->mAttribute_mCaseNameList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumerationDeclaration::objectCompare (const GALGAS_enumerationDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration::GALGAS_enumerationDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration GALGAS_enumerationDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstringlist::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration::GALGAS_enumerationDeclaration (const cPtr_enumerationDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration GALGAS_enumerationDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationName,
                                                                              const GALGAS_lstringlist & inAttribute_mCaseNameList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclaration result ;
  if (inAttribute_mEnumerationName.isValid () && inAttribute_mCaseNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclaration (inAttribute_mEnumerationName, inAttribute_mCaseNameList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumerationDeclaration::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclaration * p = (const cPtr_enumerationDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclaration) ;
    result = p->mAttribute_mEnumerationName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumerationDeclaration::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumerationName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_enumerationDeclaration::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclaration * p = (const cPtr_enumerationDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclaration) ;
    result = p->mAttribute_mCaseNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_enumerationDeclaration::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCaseNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @enumerationDeclaration class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumerationDeclaration::cPtr_enumerationDeclaration (const GALGAS_lstring & in_mEnumerationName,
                                                          const GALGAS_lstringlist & in_mCaseNameList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mEnumerationName (in_mEnumerationName),
mAttribute_mCaseNameList (in_mCaseNameList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumerationDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclaration ;
}

void cPtr_enumerationDeclaration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@enumerationDeclaration:" ;
  mAttribute_mEnumerationName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCaseNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumerationDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclaration (mAttribute_mEnumerationName, mAttribute_mCaseNameList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumerationDeclaration type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclaration ("enumerationDeclaration",
                                               & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration GALGAS_enumerationDeclaration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclaration result ;
  const GALGAS_enumerationDeclaration * p = (const GALGAS_enumerationDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_globalConstantDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_globalConstantDeclaration * p = (const cPtr_globalConstantDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_globalConstantDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mConstantName.objectCompare (p->mAttribute_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstantTypeName.objectCompare (p->mAttribute_mConstantTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_globalConstantDeclaration::objectCompare (const GALGAS_globalConstantDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantDeclaration::GALGAS_globalConstantDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantDeclaration::GALGAS_globalConstantDeclaration (const cPtr_globalConstantDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_globalConstantDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantDeclaration GALGAS_globalConstantDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mConstantName,
                                                                                    const GALGAS_lstring & inAttribute_mConstantTypeName,
                                                                                    const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclaration result ;
  if (inAttribute_mConstantName.isValid () && inAttribute_mConstantTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_globalConstantDeclaration (inAttribute_mConstantName, inAttribute_mConstantTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantDeclaration::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclaration * p = (const cPtr_globalConstantDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclaration) ;
    result = p->mAttribute_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_globalConstantDeclaration::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantDeclaration::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclaration * p = (const cPtr_globalConstantDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclaration) ;
    result = p->mAttribute_mConstantTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_globalConstantDeclaration::getter_mConstantTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_globalConstantDeclaration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclaration * p = (const cPtr_globalConstantDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclaration) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_globalConstantDeclaration::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @globalConstantDeclaration class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_globalConstantDeclaration::cPtr_globalConstantDeclaration (const GALGAS_lstring & in_mConstantName,
                                                                const GALGAS_lstring & in_mConstantTypeName,
                                                                const GALGAS_expressionAST & in_mSourceExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mConstantName (in_mConstantName),
mAttribute_mConstantTypeName (in_mConstantTypeName),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_globalConstantDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclaration ;
}

void cPtr_globalConstantDeclaration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@globalConstantDeclaration:" ;
  mAttribute_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_globalConstantDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_globalConstantDeclaration (mAttribute_mConstantName, mAttribute_mConstantTypeName, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalConstantDeclaration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantDeclaration ("globalConstantDeclaration",
                                                  & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantDeclaration GALGAS_globalConstantDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclaration result ;
  const GALGAS_globalConstantDeclaration * p = (const GALGAS_globalConstantDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerDeclaration * p = (const cPtr_integerDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsSigned.objectCompare (p->mAttribute_mIsSigned) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSize.objectCompare (p->mAttribute_mSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_integerDeclaration::objectCompare (const GALGAS_integerDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerDeclaration::GALGAS_integerDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerDeclaration GALGAS_integerDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_uint::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerDeclaration::GALGAS_integerDeclaration (const cPtr_integerDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerDeclaration GALGAS_integerDeclaration::constructor_new (const GALGAS_bool & inAttribute_mIsSigned,
                                                                      const GALGAS_uint & inAttribute_mSize
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_integerDeclaration result ;
  if (inAttribute_mIsSigned.isValid () && inAttribute_mSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerDeclaration (inAttribute_mIsSigned, inAttribute_mSize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_integerDeclaration::getter_mIsSigned (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerDeclaration * p = (const cPtr_integerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclaration) ;
    result = p->mAttribute_mIsSigned ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_integerDeclaration::getter_mIsSigned (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsSigned ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_integerDeclaration::getter_mSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerDeclaration * p = (const cPtr_integerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclaration) ;
    result = p->mAttribute_mSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_integerDeclaration::getter_mSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @integerDeclaration class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerDeclaration::cPtr_integerDeclaration (const GALGAS_bool & in_mIsSigned,
                                                  const GALGAS_uint & in_mSize
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mIsSigned (in_mIsSigned),
mAttribute_mSize (in_mSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclaration ;
}

void cPtr_integerDeclaration::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@integerDeclaration:" ;
  mAttribute_mIsSigned.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerDeclaration (mAttribute_mIsSigned, mAttribute_mSize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @integerDeclaration type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerDeclaration ("integerDeclaration",
                                           & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerDeclaration GALGAS_integerDeclaration::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_integerDeclaration result ;
  const GALGAS_integerDeclaration * p = (const GALGAS_integerDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalIntegerDeclaration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalIntegerDeclaration::objectCompare (const GALGAS_literalIntegerDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerDeclaration::GALGAS_literalIntegerDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerDeclaration GALGAS_literalIntegerDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntegerDeclaration::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerDeclaration::GALGAS_literalIntegerDeclaration (const cPtr_literalIntegerDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerDeclaration GALGAS_literalIntegerDeclaration::constructor_new (LOCATION_ARGS) {
  GALGAS_literalIntegerDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_literalIntegerDeclaration (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @literalIntegerDeclaration class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalIntegerDeclaration::cPtr_literalIntegerDeclaration (LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalIntegerDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerDeclaration ;
}

void cPtr_literalIntegerDeclaration::description (C_String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString << "[@literalIntegerDeclaration]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalIntegerDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntegerDeclaration (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalIntegerDeclaration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntegerDeclaration ("literalIntegerDeclaration",
                                                  & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalIntegerDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalIntegerDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerDeclaration GALGAS_literalIntegerDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerDeclaration result ;
  const GALGAS_literalIntegerDeclaration * p = (const GALGAS_literalIntegerDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntegerDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalStringDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringDeclaration * p = (const cPtr_literalStringDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralStringTypeName.objectCompare (p->mAttribute_mLiteralStringTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalStringDeclaration::objectCompare (const GALGAS_literalStringDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclaration::GALGAS_literalStringDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclaration GALGAS_literalStringDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclaration::GALGAS_literalStringDeclaration (const cPtr_literalStringDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclaration GALGAS_literalStringDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mLiteralStringTypeName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literalStringDeclaration result ;
  if (inAttribute_mLiteralStringTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringDeclaration (inAttribute_mLiteralStringTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_literalStringDeclaration::getter_mLiteralStringTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringDeclaration * p = (const cPtr_literalStringDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringDeclaration) ;
    result = p->mAttribute_mLiteralStringTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_literalStringDeclaration::getter_mLiteralStringTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralStringTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @literalStringDeclaration class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalStringDeclaration::cPtr_literalStringDeclaration (const GALGAS_lstring & in_mLiteralStringTypeName
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mLiteralStringTypeName (in_mLiteralStringTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalStringDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclaration ;
}

void cPtr_literalStringDeclaration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@literalStringDeclaration:" ;
  mAttribute_mLiteralStringTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalStringDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringDeclaration (mAttribute_mLiteralStringTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalStringDeclaration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringDeclaration ("literalStringDeclaration",
                                                 & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalStringDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalStringDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringDeclaration GALGAS_literalStringDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalStringDeclaration result ;
  const GALGAS_literalStringDeclaration * p = (const GALGAS_literalStringDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_moduleDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_moduleDeclarationAST * p = (const cPtr_moduleDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_moduleDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mModuleName.objectCompare (p->mAttribute_mModuleName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_moduleDeclarationAST::objectCompare (const GALGAS_moduleDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST::GALGAS_moduleDeclarationAST (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST GALGAS_moduleDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_moduleDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST::GALGAS_moduleDeclarationAST (const cPtr_moduleDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_moduleDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST GALGAS_moduleDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mModuleName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_moduleDeclarationAST result ;
  if (inAttribute_mModuleName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_moduleDeclarationAST (inAttribute_mModuleName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleDeclarationAST::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_moduleDeclarationAST * p = (const cPtr_moduleDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduleDeclarationAST) ;
    result = p->mAttribute_mModuleName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_moduleDeclarationAST::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @moduleDeclarationAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_moduleDeclarationAST::cPtr_moduleDeclarationAST (const GALGAS_lstring & in_mModuleName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mModuleName (in_mModuleName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_moduleDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleDeclarationAST ;
}

void cPtr_moduleDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@moduleDeclarationAST:" ;
  mAttribute_mModuleName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_moduleDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_moduleDeclarationAST (mAttribute_mModuleName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @moduleDeclarationAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleDeclarationAST ("moduleDeclarationAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST GALGAS_moduleDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_moduleDeclarationAST result ;
  const GALGAS_moduleDeclarationAST * p = (const GALGAS_moduleDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_opaqueTypeDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_opaqueTypeDeclaration * p = (const cPtr_opaqueTypeDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_opaqueTypeDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOpaqueTypeName.objectCompare (p->mAttribute_mOpaqueTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpressionLocation.objectCompare (p->mAttribute_mSizeExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_opaqueTypeDeclaration::objectCompare (const GALGAS_opaqueTypeDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_opaqueTypeDeclaration::GALGAS_opaqueTypeDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_opaqueTypeDeclaration::GALGAS_opaqueTypeDeclaration (const cPtr_opaqueTypeDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_opaqueTypeDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_opaqueTypeDeclaration GALGAS_opaqueTypeDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mOpaqueTypeName,
                                                                            const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                            const GALGAS_expressionAST & inAttribute_mSizeExpression,
                                                                            const GALGAS_location & inAttribute_mSizeExpressionLocation
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_opaqueTypeDeclaration result ;
  if (inAttribute_mOpaqueTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mSizeExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_opaqueTypeDeclaration (inAttribute_mOpaqueTypeName, inAttribute_mAttributeList, inAttribute_mSizeExpression, inAttribute_mSizeExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_opaqueTypeDeclaration::getter_mOpaqueTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_opaqueTypeDeclaration * p = (const cPtr_opaqueTypeDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opaqueTypeDeclaration) ;
    result = p->mAttribute_mOpaqueTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_opaqueTypeDeclaration::getter_mOpaqueTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOpaqueTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_opaqueTypeDeclaration::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_opaqueTypeDeclaration * p = (const cPtr_opaqueTypeDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opaqueTypeDeclaration) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_opaqueTypeDeclaration::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_opaqueTypeDeclaration::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_opaqueTypeDeclaration * p = (const cPtr_opaqueTypeDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opaqueTypeDeclaration) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_opaqueTypeDeclaration::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_opaqueTypeDeclaration::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_opaqueTypeDeclaration * p = (const cPtr_opaqueTypeDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opaqueTypeDeclaration) ;
    result = p->mAttribute_mSizeExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_opaqueTypeDeclaration::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @opaqueTypeDeclaration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_opaqueTypeDeclaration::cPtr_opaqueTypeDeclaration (const GALGAS_lstring & in_mOpaqueTypeName,
                                                        const GALGAS_lstringlist & in_mAttributeList,
                                                        const GALGAS_expressionAST & in_mSizeExpression,
                                                        const GALGAS_location & in_mSizeExpressionLocation
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mOpaqueTypeName (in_mOpaqueTypeName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mSizeExpressionLocation (in_mSizeExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_opaqueTypeDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opaqueTypeDeclaration ;
}

void cPtr_opaqueTypeDeclaration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@opaqueTypeDeclaration:" ;
  mAttribute_mOpaqueTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_opaqueTypeDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_opaqueTypeDeclaration (mAttribute_mOpaqueTypeName, mAttribute_mAttributeList, mAttribute_mSizeExpression, mAttribute_mSizeExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @opaqueTypeDeclaration type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_opaqueTypeDeclaration ("opaqueTypeDeclaration",
                                              & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_opaqueTypeDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opaqueTypeDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_opaqueTypeDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_opaqueTypeDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_opaqueTypeDeclaration GALGAS_opaqueTypeDeclaration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_opaqueTypeDeclaration result ;
  const GALGAS_opaqueTypeDeclaration * p = (const GALGAS_opaqueTypeDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_opaqueTypeDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opaqueTypeDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structureDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structureDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mStructureName.objectCompare (p->mAttribute_mStructureName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeListAST.objectCompare (p->mAttribute_mAttributeListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructureFieldListAST.objectCompare (p->mAttribute_mStructureFieldListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionDeclarationListAST.objectCompare (p->mAttribute_mFunctionDeclarationListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mServiceListAST.objectCompare (p->mAttribute_mServiceListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSectionListAST.objectCompare (p->mAttribute_mSectionListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPrimitiveListAST.objectCompare (p->mAttribute_mPrimitiveListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGuardListAST.objectCompare (p->mAttribute_mGuardListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structureDeclaration::objectCompare (const GALGAS_structureDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclaration::GALGAS_structureDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclaration GALGAS_structureDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_structureDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_structureFieldListAST::constructor_emptyList (HERE),
                                                       GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                       GALGAS_serviceDeclarationListAST::constructor_emptyList (HERE),
                                                       GALGAS_sectionDeclarationListAST::constructor_emptyList (HERE),
                                                       GALGAS_primitiveDeclarationListAST::constructor_emptyList (HERE),
                                                       GALGAS_guardDeclarationListAST::constructor_emptyList (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclaration::GALGAS_structureDeclaration (const cPtr_structureDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclaration GALGAS_structureDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mStructureName,
                                                                          const GALGAS_lstringlist & inAttribute_mAttributeListAST,
                                                                          const GALGAS_structureFieldListAST & inAttribute_mStructureFieldListAST,
                                                                          const GALGAS_functionDeclarationListAST & inAttribute_mFunctionDeclarationListAST,
                                                                          const GALGAS_serviceDeclarationListAST & inAttribute_mServiceListAST,
                                                                          const GALGAS_sectionDeclarationListAST & inAttribute_mSectionListAST,
                                                                          const GALGAS_primitiveDeclarationListAST & inAttribute_mPrimitiveListAST,
                                                                          const GALGAS_guardDeclarationListAST & inAttribute_mGuardListAST
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclaration result ;
  if (inAttribute_mStructureName.isValid () && inAttribute_mAttributeListAST.isValid () && inAttribute_mStructureFieldListAST.isValid () && inAttribute_mFunctionDeclarationListAST.isValid () && inAttribute_mServiceListAST.isValid () && inAttribute_mSectionListAST.isValid () && inAttribute_mPrimitiveListAST.isValid () && inAttribute_mGuardListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureDeclaration (inAttribute_mStructureName, inAttribute_mAttributeListAST, inAttribute_mStructureFieldListAST, inAttribute_mFunctionDeclarationListAST, inAttribute_mServiceListAST, inAttribute_mSectionListAST, inAttribute_mPrimitiveListAST, inAttribute_mGuardListAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureDeclaration::getter_mStructureName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mStructureName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_structureDeclaration::getter_mStructureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_structureDeclaration::getter_mAttributeListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mAttributeListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_structureDeclaration::getter_mAttributeListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_structureDeclaration::getter_mStructureFieldListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_structureFieldListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mStructureFieldListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST cPtr_structureDeclaration::getter_mStructureFieldListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructureFieldListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_structureDeclaration::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mFunctionDeclarationListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST cPtr_structureDeclaration::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST GALGAS_structureDeclaration::getter_mServiceListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_serviceDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mServiceListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST cPtr_structureDeclaration::getter_mServiceListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mServiceListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST GALGAS_structureDeclaration::getter_mSectionListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_sectionDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mSectionListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST cPtr_structureDeclaration::getter_mSectionListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSectionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST GALGAS_structureDeclaration::getter_mPrimitiveListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_primitiveDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mPrimitiveListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST cPtr_structureDeclaration::getter_mPrimitiveListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrimitiveListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_structureDeclaration::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_guardDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mGuardListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST cPtr_structureDeclaration::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @structureDeclaration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structureDeclaration::cPtr_structureDeclaration (const GALGAS_lstring & in_mStructureName,
                                                      const GALGAS_lstringlist & in_mAttributeListAST,
                                                      const GALGAS_structureFieldListAST & in_mStructureFieldListAST,
                                                      const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                                      const GALGAS_serviceDeclarationListAST & in_mServiceListAST,
                                                      const GALGAS_sectionDeclarationListAST & in_mSectionListAST,
                                                      const GALGAS_primitiveDeclarationListAST & in_mPrimitiveListAST,
                                                      const GALGAS_guardDeclarationListAST & in_mGuardListAST
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mStructureName (in_mStructureName),
mAttribute_mAttributeListAST (in_mAttributeListAST),
mAttribute_mStructureFieldListAST (in_mStructureFieldListAST),
mAttribute_mFunctionDeclarationListAST (in_mFunctionDeclarationListAST),
mAttribute_mServiceListAST (in_mServiceListAST),
mAttribute_mSectionListAST (in_mSectionListAST),
mAttribute_mPrimitiveListAST (in_mPrimitiveListAST),
mAttribute_mGuardListAST (in_mGuardListAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structureDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclaration ;
}

void cPtr_structureDeclaration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@structureDeclaration:" ;
  mAttribute_mStructureName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructureFieldListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mServiceListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSectionListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPrimitiveListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGuardListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structureDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureDeclaration (mAttribute_mStructureName, mAttribute_mAttributeListAST, mAttribute_mStructureFieldListAST, mAttribute_mFunctionDeclarationListAST, mAttribute_mServiceListAST, mAttribute_mSectionListAST, mAttribute_mPrimitiveListAST, mAttribute_mGuardListAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @structureDeclaration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureDeclaration ("structureDeclaration",
                                             & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structureDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structureDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclaration GALGAS_structureDeclaration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclaration result ;
  const GALGAS_structureDeclaration * p = (const GALGAS_structureDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeAliasDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeAliasDeclaration * p = (const cPtr_typeAliasDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeAliasDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mNewTypeName.objectCompare (p->mAttribute_mNewTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAliasedTypeName.objectCompare (p->mAttribute_mAliasedTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeAliasDeclaration::objectCompare (const GALGAS_typeAliasDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeAliasDeclaration::GALGAS_typeAliasDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeAliasDeclaration GALGAS_typeAliasDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeAliasDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeAliasDeclaration::GALGAS_typeAliasDeclaration (const cPtr_typeAliasDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeAliasDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeAliasDeclaration GALGAS_typeAliasDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mNewTypeName,
                                                                          const GALGAS_lstring & inAttribute_mAliasedTypeName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclaration result ;
  if (inAttribute_mNewTypeName.isValid () && inAttribute_mAliasedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeAliasDeclaration (inAttribute_mNewTypeName, inAttribute_mAliasedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeAliasDeclaration::getter_mNewTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeAliasDeclaration * p = (const cPtr_typeAliasDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclaration) ;
    result = p->mAttribute_mNewTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeAliasDeclaration::getter_mNewTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNewTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeAliasDeclaration::getter_mAliasedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeAliasDeclaration * p = (const cPtr_typeAliasDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclaration) ;
    result = p->mAttribute_mAliasedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeAliasDeclaration::getter_mAliasedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAliasedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @typeAliasDeclaration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeAliasDeclaration::cPtr_typeAliasDeclaration (const GALGAS_lstring & in_mNewTypeName,
                                                      const GALGAS_lstring & in_mAliasedTypeName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mNewTypeName (in_mNewTypeName),
mAttribute_mAliasedTypeName (in_mAliasedTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeAliasDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclaration ;
}

void cPtr_typeAliasDeclaration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@typeAliasDeclaration:" ;
  mAttribute_mNewTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAliasedTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeAliasDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeAliasDeclaration (mAttribute_mNewTypeName, mAttribute_mAliasedTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeAliasDeclaration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeAliasDeclaration ("typeAliasDeclaration",
                                             & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeAliasDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeAliasDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeAliasDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeAliasDeclaration GALGAS_typeAliasDeclaration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclaration result ;
  const GALGAS_typeAliasDeclaration * p = (const GALGAS_typeAliasDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeAliasDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeAliasDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeArrayDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeArrayDeclaration * p = (const cPtr_typeArrayDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeArrayDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mArrayTypeName.objectCompare (p->mAttribute_mArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementTypeName.objectCompare (p->mAttribute_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpression.objectCompare (p->mAttribute_mSizeExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSizeExpressionLocation.objectCompare (p->mAttribute_mSizeExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeArrayDeclaration::objectCompare (const GALGAS_typeArrayDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeArrayDeclaration::GALGAS_typeArrayDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeArrayDeclaration::GALGAS_typeArrayDeclaration (const cPtr_typeArrayDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeArrayDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeArrayDeclaration GALGAS_typeArrayDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mArrayTypeName,
                                                                          const GALGAS_lstring & inAttribute_mElementTypeName,
                                                                          const GALGAS_expressionAST & inAttribute_mSizeExpression,
                                                                          const GALGAS_location & inAttribute_mSizeExpressionLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeArrayDeclaration result ;
  if (inAttribute_mArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mSizeExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeArrayDeclaration (inAttribute_mArrayTypeName, inAttribute_mElementTypeName, inAttribute_mSizeExpression, inAttribute_mSizeExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeArrayDeclaration::getter_mArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeArrayDeclaration * p = (const cPtr_typeArrayDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeArrayDeclaration) ;
    result = p->mAttribute_mArrayTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeArrayDeclaration::getter_mArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeArrayDeclaration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeArrayDeclaration * p = (const cPtr_typeArrayDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeArrayDeclaration) ;
    result = p->mAttribute_mElementTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeArrayDeclaration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_typeArrayDeclaration::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeArrayDeclaration * p = (const cPtr_typeArrayDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeArrayDeclaration) ;
    result = p->mAttribute_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_typeArrayDeclaration::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_typeArrayDeclaration::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeArrayDeclaration * p = (const cPtr_typeArrayDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeArrayDeclaration) ;
    result = p->mAttribute_mSizeExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_typeArrayDeclaration::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSizeExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @typeArrayDeclaration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeArrayDeclaration::cPtr_typeArrayDeclaration (const GALGAS_lstring & in_mArrayTypeName,
                                                      const GALGAS_lstring & in_mElementTypeName,
                                                      const GALGAS_expressionAST & in_mSizeExpression,
                                                      const GALGAS_location & in_mSizeExpressionLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mArrayTypeName (in_mArrayTypeName),
mAttribute_mElementTypeName (in_mElementTypeName),
mAttribute_mSizeExpression (in_mSizeExpression),
mAttribute_mSizeExpressionLocation (in_mSizeExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeArrayDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeArrayDeclaration ;
}

void cPtr_typeArrayDeclaration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@typeArrayDeclaration:" ;
  mAttribute_mArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeArrayDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeArrayDeclaration (mAttribute_mArrayTypeName, mAttribute_mElementTypeName, mAttribute_mSizeExpression, mAttribute_mSizeExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeArrayDeclaration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeArrayDeclaration ("typeArrayDeclaration",
                                             & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeArrayDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeArrayDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeArrayDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeArrayDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeArrayDeclaration GALGAS_typeArrayDeclaration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeArrayDeclaration result ;
  const GALGAS_typeArrayDeclaration * p = (const GALGAS_typeArrayDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeArrayDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeArrayDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractExpressionIR::objectCompare (const GALGAS_abstractExpressionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExpressionIR::GALGAS_abstractExpressionIR (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExpressionIR::GALGAS_abstractExpressionIR (const cPtr_abstractExpressionIR * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExpressionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @abstractExpressionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractExpressionIR::cPtr_abstractExpressionIR (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractExpressionIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExpressionIR ("abstractExpressionIR",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractExpressionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExpressionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractExpressionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExpressionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractExpressionIR GALGAS_abstractExpressionIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExpressionIR result ;
  const GALGAS_abstractExpressionIR * p = (const GALGAS_abstractExpressionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExpressionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExpressionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractInstructionIR::objectCompare (const GALGAS_abstractInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR::GALGAS_abstractInstructionIR (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR::GALGAS_abstractInstructionIR (const cPtr_abstractInstructionIR * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @abstractInstructionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractInstructionIR::cPtr_abstractInstructionIR (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractInstructionIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractInstructionIR ("abstractInstructionIR",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR GALGAS_abstractInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractInstructionIR result ;
  const GALGAS_abstractInstructionIR * p = (const GALGAS_abstractInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ComputeRegisterAddressWithSubscriptIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ComputeRegisterAddressWithSubscriptIR * p = (const cPtr_ComputeRegisterAddressWithSubscriptIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ComputeRegisterAddressWithSubscriptIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTarget.objectCompare (p->mAttribute_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexResult.objectCompare (p->mAttribute_mIndexResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterAddress.objectCompare (p->mAttribute_mRegisterAddress) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementArraySize.objectCompare (p->mAttribute_mElementArraySize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ComputeRegisterAddressWithSubscriptIR::objectCompare (const GALGAS_ComputeRegisterAddressWithSubscriptIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ComputeRegisterAddressWithSubscriptIR::GALGAS_ComputeRegisterAddressWithSubscriptIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ComputeRegisterAddressWithSubscriptIR::GALGAS_ComputeRegisterAddressWithSubscriptIR (const cPtr_ComputeRegisterAddressWithSubscriptIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ComputeRegisterAddressWithSubscriptIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ComputeRegisterAddressWithSubscriptIR GALGAS_ComputeRegisterAddressWithSubscriptIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                                                            const GALGAS_objectIR & inAttribute_mIndexResult,
                                                                                                            const GALGAS_bigint & inAttribute_mRegisterAddress,
                                                                                                            const GALGAS_bigint & inAttribute_mElementArraySize
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ComputeRegisterAddressWithSubscriptIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mIndexResult.isValid () && inAttribute_mRegisterAddress.isValid () && inAttribute_mElementArraySize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ComputeRegisterAddressWithSubscriptIR (inAttribute_mTarget, inAttribute_mIndexResult, inAttribute_mRegisterAddress, inAttribute_mElementArraySize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_ComputeRegisterAddressWithSubscriptIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_ComputeRegisterAddressWithSubscriptIR * p = (const cPtr_ComputeRegisterAddressWithSubscriptIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ComputeRegisterAddressWithSubscriptIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_ComputeRegisterAddressWithSubscriptIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_ComputeRegisterAddressWithSubscriptIR::getter_mIndexResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_ComputeRegisterAddressWithSubscriptIR * p = (const cPtr_ComputeRegisterAddressWithSubscriptIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ComputeRegisterAddressWithSubscriptIR) ;
    result = p->mAttribute_mIndexResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_ComputeRegisterAddressWithSubscriptIR::getter_mIndexResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_ComputeRegisterAddressWithSubscriptIR::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ComputeRegisterAddressWithSubscriptIR * p = (const cPtr_ComputeRegisterAddressWithSubscriptIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ComputeRegisterAddressWithSubscriptIR) ;
    result = p->mAttribute_mRegisterAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_ComputeRegisterAddressWithSubscriptIR::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_ComputeRegisterAddressWithSubscriptIR::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_ComputeRegisterAddressWithSubscriptIR * p = (const cPtr_ComputeRegisterAddressWithSubscriptIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ComputeRegisterAddressWithSubscriptIR) ;
    result = p->mAttribute_mElementArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_ComputeRegisterAddressWithSubscriptIR::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @ComputeRegisterAddressWithSubscriptIR class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ComputeRegisterAddressWithSubscriptIR::cPtr_ComputeRegisterAddressWithSubscriptIR (const GALGAS_objectIR & in_mTarget,
                                                                                        const GALGAS_objectIR & in_mIndexResult,
                                                                                        const GALGAS_bigint & in_mRegisterAddress,
                                                                                        const GALGAS_bigint & in_mElementArraySize
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mIndexResult (in_mIndexResult),
mAttribute_mRegisterAddress (in_mRegisterAddress),
mAttribute_mElementArraySize (in_mElementArraySize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ComputeRegisterAddressWithSubscriptIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ComputeRegisterAddressWithSubscriptIR ;
}

void cPtr_ComputeRegisterAddressWithSubscriptIR::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@ComputeRegisterAddressWithSubscriptIR:" ;
  mAttribute_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElementArraySize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ComputeRegisterAddressWithSubscriptIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ComputeRegisterAddressWithSubscriptIR (mAttribute_mTarget, mAttribute_mIndexResult, mAttribute_mRegisterAddress, mAttribute_mElementArraySize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @ComputeRegisterAddressWithSubscriptIR type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ComputeRegisterAddressWithSubscriptIR ("ComputeRegisterAddressWithSubscriptIR",
                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ComputeRegisterAddressWithSubscriptIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ComputeRegisterAddressWithSubscriptIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ComputeRegisterAddressWithSubscriptIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ComputeRegisterAddressWithSubscriptIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ComputeRegisterAddressWithSubscriptIR GALGAS_ComputeRegisterAddressWithSubscriptIR::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ComputeRegisterAddressWithSubscriptIR result ;
  const GALGAS_ComputeRegisterAddressWithSubscriptIR * p = (const GALGAS_ComputeRegisterAddressWithSubscriptIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ComputeRegisterAddressWithSubscriptIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ComputeRegisterAddressWithSubscriptIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_assertInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAssertInstructionLocation.objectCompare (p->mAttribute_mAssertInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionValue.objectCompare (p->mAttribute_mExpressionValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assertInstructionIR::objectCompare (const GALGAS_assertInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionIR::GALGAS_assertInstructionIR (const cPtr_assertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::constructor_new (const GALGAS_location & inAttribute_mAssertInstructionLocation,
                                                                        const GALGAS_instructionListIR & inAttribute_mInstructionList,
                                                                        const GALGAS_objectIR & inAttribute_mExpressionValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR result ;
  if (inAttribute_mAssertInstructionLocation.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mExpressionValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertInstructionIR (inAttribute_mAssertInstructionLocation, inAttribute_mInstructionList, inAttribute_mExpressionValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_assertInstructionIR::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    result = p->mAttribute_mAssertInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_assertInstructionIR::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssertInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_assertInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_assertInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_assertInstructionIR::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    result = p->mAttribute_mExpressionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_assertInstructionIR::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @assertInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assertInstructionIR::cPtr_assertInstructionIR (const GALGAS_location & in_mAssertInstructionLocation,
                                                    const GALGAS_instructionListIR & in_mInstructionList,
                                                    const GALGAS_objectIR & in_mExpressionValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mAssertInstructionLocation (in_mAssertInstructionLocation),
mAttribute_mInstructionList (in_mInstructionList),
mAttribute_mExpressionValue (in_mExpressionValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

void cPtr_assertInstructionIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@assertInstructionIR:" ;
  mAttribute_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assertInstructionIR (mAttribute_mAssertInstructionLocation, mAttribute_mInstructionList, mAttribute_mExpressionValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @assertInstructionIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assertInstructionIR ("assertInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionIR GALGAS_assertInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionIR result ;
  const GALGAS_assertInstructionIR * p = (const GALGAS_assertInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_binaryOperationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binaryOperationIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTarget.objectCompare (p->mAttribute_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperandType.objectCompare (p->mAttribute_mOperandType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeft.objectCompare (p->mAttribute_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperation.objectCompare (p->mAttribute_mOperation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRight.objectCompare (p->mAttribute_mRight) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_binaryOperationIR::objectCompare (const GALGAS_binaryOperationIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (const cPtr_binaryOperationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperationIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mOperandType,
                                                                    const GALGAS_objectIR & inAttribute_mLeft,
                                                                    const GALGAS_llvmBinaryOperation & inAttribute_mOperation,
                                                                    const GALGAS_objectIR & inAttribute_mRight,
                                                                    const GALGAS_location & inAttribute_mLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperandType.isValid () && inAttribute_mLeft.isValid () && inAttribute_mOperation.isValid () && inAttribute_mRight.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_binaryOperationIR (inAttribute_mTarget, inAttribute_mOperandType, inAttribute_mLeft, inAttribute_mOperation, inAttribute_mRight, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_binaryOperationIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_binaryOperationIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_binaryOperationIR::getter_mOperandType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mAttribute_mOperandType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_binaryOperationIR::getter_mOperandType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperandType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_binaryOperationIR::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mAttribute_mLeft ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_binaryOperationIR::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeft ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_binaryOperationIR::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mAttribute_mOperation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_binaryOperationIR::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_binaryOperationIR::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mAttribute_mRight ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_binaryOperationIR::getter_mRight (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRight ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_binaryOperationIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_binaryOperationIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @binaryOperationIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_binaryOperationIR::cPtr_binaryOperationIR (const GALGAS_objectIR & in_mTarget,
                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mOperandType,
                                                const GALGAS_objectIR & in_mLeft,
                                                const GALGAS_llvmBinaryOperation & in_mOperation,
                                                const GALGAS_objectIR & in_mRight,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mOperandType (in_mOperandType),
mAttribute_mLeft (in_mLeft),
mAttribute_mOperation (in_mOperation),
mAttribute_mRight (in_mRight),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_binaryOperationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

void cPtr_binaryOperationIR::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@binaryOperationIR:" ;
  mAttribute_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperandType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRight.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_binaryOperationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_binaryOperationIR (mAttribute_mTarget, mAttribute_mOperandType, mAttribute_mLeft, mAttribute_mOperation, mAttribute_mRight, mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @binaryOperationIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binaryOperationIR ("binaryOperationIR",
                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_binaryOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_binaryOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  const GALGAS_binaryOperationIR * p = (const GALGAS_binaryOperationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binaryOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_convertInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_convertInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTarget.objectCompare (p->mAttribute_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_convertInstructionIR::objectCompare (const GALGAS_convertInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (const cPtr_convertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                          const GALGAS_objectIR & inAttribute_mOperand,
                                                                          const GALGAS_location & inAttribute_mLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperand.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_convertInstructionIR (inAttribute_mTarget, inAttribute_mOperand, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_convertInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_convertInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @convertInstructionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_convertInstructionIR::cPtr_convertInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                      const GALGAS_objectIR & in_mOperand,
                                                      const GALGAS_location & in_mLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mOperand (in_mOperand),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_convertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

void cPtr_convertInstructionIR::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@convertInstructionIR:" ;
  mAttribute_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_convertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_convertInstructionIR (mAttribute_mTarget, mAttribute_mOperand, mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @convertInstructionIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertInstructionIR ("convertInstructionIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_convertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_convertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  const GALGAS_convertInstructionIR * p = (const GALGAS_convertInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_convertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extendIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extendIR * p = (const cPtr_extendIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extendIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResult.objectCompare (p->mAttribute_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSource.objectCompare (p->mAttribute_mSource) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extendIR::objectCompare (const GALGAS_extendIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendIR::GALGAS_extendIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendIR::GALGAS_extendIR (const cPtr_extendIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendIR GALGAS_extendIR::constructor_new (const GALGAS_objectIR & inAttribute_mResult,
                                                  const GALGAS_objectIR & inAttribute_mSource
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extendIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mSource.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extendIR (inAttribute_mResult, inAttribute_mSource COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_extendIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendIR * p = (const cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    result = p->mAttribute_mResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_extendIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_extendIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendIR * p = (const cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    result = p->mAttribute_mSource ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_extendIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSource ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @extendIR class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extendIR::cPtr_extendIR (const GALGAS_objectIR & in_mResult,
                              const GALGAS_objectIR & in_mSource
                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mResult (in_mResult),
mAttribute_mSource (in_mSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extendIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR ;
}

void cPtr_extendIR::description (C_String & ioString,
                                 const int32_t inIndentation) const {
  ioString << "[@extendIR:" ;
  mAttribute_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSource.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extendIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extendIR (mAttribute_mResult, mAttribute_mSource COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @extendIR type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendIR ("extendIR",
                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extendIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extendIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendIR GALGAS_extendIR::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendIR result ;
  const GALGAS_extendIR * p = (const GALGAS_extendIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionIR * p = (const cPtr_forInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementType.objectCompare (p->mAttribute_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionResult.objectCompare (p->mAttribute_mExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forInstructionIR::objectCompare (const GALGAS_forInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionIR::GALGAS_forInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionIR::GALGAS_forInstructionIR (const cPtr_forInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionIR GALGAS_forInstructionIR::constructor_new (const GALGAS_string & inAttribute_mVarName,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mElementType,
                                                                  const GALGAS_location & inAttribute_mLocation,
                                                                  const GALGAS_objectIR & inAttribute_mExpressionResult,
                                                                  const GALGAS_instructionListIR & inAttribute_mInstructionList
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionIR result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mElementType.isValid () && inAttribute_mLocation.isValid () && inAttribute_mExpressionResult.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionIR (inAttribute_mVarName, inAttribute_mElementType, inAttribute_mLocation, inAttribute_mExpressionResult, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionIR * p = (const cPtr_forInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionIR) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_forInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_forInstructionIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionIR * p = (const cPtr_forInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionIR) ;
    result = p->mAttribute_mElementType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_forInstructionIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionIR * p = (const cPtr_forInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionIR) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forInstructionIR::getter_mExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionIR * p = (const cPtr_forInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionIR) ;
    result = p->mAttribute_mExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forInstructionIR::getter_mExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionIR * p = (const cPtr_forInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionIR) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @forInstructionIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionIR::cPtr_forInstructionIR (const GALGAS_string & in_mVarName,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mElementType,
                                              const GALGAS_location & in_mLocation,
                                              const GALGAS_objectIR & in_mExpressionResult,
                                              const GALGAS_instructionListIR & in_mInstructionList
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mElementType (in_mElementType),
mAttribute_mLocation (in_mLocation),
mAttribute_mExpressionResult (in_mExpressionResult),
mAttribute_mInstructionList (in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionIR ;
}

void cPtr_forInstructionIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@forInstructionIR:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionIR (mAttribute_mVarName, mAttribute_mElementType, mAttribute_mLocation, mAttribute_mExpressionResult, mAttribute_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @forInstructionIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionIR ("forInstructionIR",
                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionIR GALGAS_forInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionIR result ;
  const GALGAS_forInstructionIR * p = (const GALGAS_forInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forLowerUpperBoundInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mType.objectCompare (p->mAttribute_mType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUnsigned.objectCompare (p->mAttribute_mUnsigned) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLowerExpressionResult.objectCompare (p->mAttribute_mLowerExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUpperExpressionResult.objectCompare (p->mAttribute_mUpperExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forLowerUpperBoundInstructionIR::objectCompare (const GALGAS_forLowerUpperBoundInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (const cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::constructor_new (const GALGAS_string & inAttribute_mVarName,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mType,
                                                                                                const GALGAS_bool & inAttribute_mUnsigned,
                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                const GALGAS_objectIR & inAttribute_mLowerExpressionResult,
                                                                                                const GALGAS_objectIR & inAttribute_mUpperExpressionResult,
                                                                                                const GALGAS_instructionListIR & inAttribute_mInstructionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mType.isValid () && inAttribute_mUnsigned.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLowerExpressionResult.isValid () && inAttribute_mUpperExpressionResult.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionIR (inAttribute_mVarName, inAttribute_mType, inAttribute_mUnsigned, inAttribute_mLocation, inAttribute_mLowerExpressionResult, inAttribute_mUpperExpressionResult, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forLowerUpperBoundInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_forLowerUpperBoundInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_forLowerUpperBoundInstructionIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_forLowerUpperBoundInstructionIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_forLowerUpperBoundInstructionIR::getter_mUnsigned (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mAttribute_mUnsigned ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_forLowerUpperBoundInstructionIR::getter_mUnsigned (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnsigned ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::getter_mLowerExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mAttribute_mLowerExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forLowerUpperBoundInstructionIR::getter_mLowerExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLowerExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::getter_mUpperExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mAttribute_mUpperExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forLowerUpperBoundInstructionIR::getter_mUpperExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUpperExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forLowerUpperBoundInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forLowerUpperBoundInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @forLowerUpperBoundInstructionIR class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forLowerUpperBoundInstructionIR::cPtr_forLowerUpperBoundInstructionIR (const GALGAS_string & in_mVarName,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                            const GALGAS_bool & in_mUnsigned,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_objectIR & in_mLowerExpressionResult,
                                                                            const GALGAS_objectIR & in_mUpperExpressionResult,
                                                                            const GALGAS_instructionListIR & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mType (in_mType),
mAttribute_mUnsigned (in_mUnsigned),
mAttribute_mLocation (in_mLocation),
mAttribute_mLowerExpressionResult (in_mLowerExpressionResult),
mAttribute_mUpperExpressionResult (in_mUpperExpressionResult),
mAttribute_mInstructionList (in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

void cPtr_forLowerUpperBoundInstructionIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionIR:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUnsigned.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLowerExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUpperExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forLowerUpperBoundInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionIR (mAttribute_mVarName, mAttribute_mType, mAttribute_mUnsigned, mAttribute_mLocation, mAttribute_mLowerExpressionResult, mAttribute_mUpperExpressionResult, mAttribute_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @forLowerUpperBoundInstructionIR type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ("forLowerUpperBoundInstructionIR",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  const GALGAS_forLowerUpperBoundInstructionIR * p = (const GALGAS_forLowerUpperBoundInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionCallIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionCallIR * p = (const cPtr_functionCallIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionCallIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResult.objectCompare (p->mAttribute_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionMangledName.objectCompare (p->mAttribute_mFunctionMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionNameForGeneration.objectCompare (p->mAttribute_mFunctionNameForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mArgumentList.objectCompare (p->mAttribute_mArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAppendFileAndLineArgumentForPanicLocation.objectCompare (p->mAttribute_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionCallIR::objectCompare (const GALGAS_functionCallIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallIR::GALGAS_functionCallIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallIR::GALGAS_functionCallIR (const cPtr_functionCallIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallIR GALGAS_functionCallIR::constructor_new (const GALGAS_objectIR & inAttribute_mResult,
                                                              const GALGAS_lstring & inAttribute_mFunctionMangledName,
                                                              const GALGAS_lstring & inAttribute_mFunctionNameForGeneration,
                                                              const GALGAS_routineKindIR & inAttribute_mKind,
                                                              const GALGAS_procCallEffectiveParameterListIR & inAttribute_mArgumentList,
                                                              const GALGAS_bool & inAttribute_mAppendFileAndLineArgumentForPanicLocation
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionCallIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mFunctionMangledName.isValid () && inAttribute_mFunctionNameForGeneration.isValid () && inAttribute_mKind.isValid () && inAttribute_mArgumentList.isValid () && inAttribute_mAppendFileAndLineArgumentForPanicLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionCallIR (inAttribute_mResult, inAttribute_mFunctionMangledName, inAttribute_mFunctionNameForGeneration, inAttribute_mKind, inAttribute_mArgumentList, inAttribute_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_functionCallIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallIR * p = (const cPtr_functionCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallIR) ;
    result = p->mAttribute_mResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_functionCallIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallIR::getter_mFunctionMangledName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallIR * p = (const cPtr_functionCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallIR) ;
    result = p->mAttribute_mFunctionMangledName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_functionCallIR::getter_mFunctionMangledName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionMangledName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallIR::getter_mFunctionNameForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallIR * p = (const cPtr_functionCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallIR) ;
    result = p->mAttribute_mFunctionNameForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_functionCallIR::getter_mFunctionNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_functionCallIR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineKindIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallIR * p = (const cPtr_functionCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallIR) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR cPtr_functionCallIR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_functionCallIR::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallIR * p = (const cPtr_functionCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallIR) ;
    result = p->mAttribute_mArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR cPtr_functionCallIR::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionCallIR::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallIR * p = (const cPtr_functionCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallIR) ;
    result = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_functionCallIR::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @functionCallIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionCallIR::cPtr_functionCallIR (const GALGAS_objectIR & in_mResult,
                                          const GALGAS_lstring & in_mFunctionMangledName,
                                          const GALGAS_lstring & in_mFunctionNameForGeneration,
                                          const GALGAS_routineKindIR & in_mKind,
                                          const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList,
                                          const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mResult (in_mResult),
mAttribute_mFunctionMangledName (in_mFunctionMangledName),
mAttribute_mFunctionNameForGeneration (in_mFunctionNameForGeneration),
mAttribute_mKind (in_mKind),
mAttribute_mArgumentList (in_mArgumentList),
mAttribute_mAppendFileAndLineArgumentForPanicLocation (in_mAppendFileAndLineArgumentForPanicLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionCallIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallIR ;
}

void cPtr_functionCallIR::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "[@functionCallIR:" ;
  mAttribute_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionNameForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionCallIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionCallIR (mAttribute_mResult, mAttribute_mFunctionMangledName, mAttribute_mFunctionNameForGeneration, mAttribute_mKind, mAttribute_mArgumentList, mAttribute_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @functionCallIR type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallIR ("functionCallIR",
                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallIR GALGAS_functionCallIR::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionCallIR result ;
  const GALGAS_functionCallIR * p = (const GALGAS_functionCallIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_getElementPtrFromSelfIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getElementPtrFromSelfIR * p = (const cPtr_getElementPtrFromSelfIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getElementPtrFromSelfIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTarget.objectCompare (p->mAttribute_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSelfType.objectCompare (p->mAttribute_mSelfType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementList.objectCompare (p->mAttribute_mElementList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_getElementPtrFromSelfIR::objectCompare (const GALGAS_getElementPtrFromSelfIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrFromSelfIR::GALGAS_getElementPtrFromSelfIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrFromSelfIR::GALGAS_getElementPtrFromSelfIR (const cPtr_getElementPtrFromSelfIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getElementPtrFromSelfIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrFromSelfIR GALGAS_getElementPtrFromSelfIR::constructor_new (const GALGAS_objectInMemoryIR & inAttribute_mTarget,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mSelfType,
                                                                                const GALGAS_elementPtrList & inAttribute_mElementList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_getElementPtrFromSelfIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSelfType.isValid () && inAttribute_mElementList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getElementPtrFromSelfIR (inAttribute_mTarget, inAttribute_mSelfType, inAttribute_mElementList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_getElementPtrFromSelfIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectInMemoryIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_getElementPtrFromSelfIR * p = (const cPtr_getElementPtrFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getElementPtrFromSelfIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR cPtr_getElementPtrFromSelfIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_getElementPtrFromSelfIR::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_getElementPtrFromSelfIR * p = (const cPtr_getElementPtrFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getElementPtrFromSelfIR) ;
    result = p->mAttribute_mSelfType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_getElementPtrFromSelfIR::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_elementPtrList GALGAS_getElementPtrFromSelfIR::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_elementPtrList result ;
  if (NULL != mObjectPtr) {
    const cPtr_getElementPtrFromSelfIR * p = (const cPtr_getElementPtrFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getElementPtrFromSelfIR) ;
    result = p->mAttribute_mElementList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_elementPtrList cPtr_getElementPtrFromSelfIR::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @getElementPtrFromSelfIR class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_getElementPtrFromSelfIR::cPtr_getElementPtrFromSelfIR (const GALGAS_objectInMemoryIR & in_mTarget,
                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                                            const GALGAS_elementPtrList & in_mElementList
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mSelfType (in_mSelfType),
mAttribute_mElementList (in_mElementList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_getElementPtrFromSelfIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getElementPtrFromSelfIR ;
}

void cPtr_getElementPtrFromSelfIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@getElementPtrFromSelfIR:" ;
  mAttribute_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSelfType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElementList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_getElementPtrFromSelfIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getElementPtrFromSelfIR (mAttribute_mTarget, mAttribute_mSelfType, mAttribute_mElementList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @getElementPtrFromSelfIR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getElementPtrFromSelfIR ("getElementPtrFromSelfIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getElementPtrFromSelfIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getElementPtrFromSelfIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getElementPtrFromSelfIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getElementPtrFromSelfIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrFromSelfIR GALGAS_getElementPtrFromSelfIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getElementPtrFromSelfIR result ;
  const GALGAS_getElementPtrFromSelfIR * p = (const GALGAS_getElementPtrFromSelfIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getElementPtrFromSelfIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getElementPtrFromSelfIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_getElementPtrIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getElementPtrIR * p = (const cPtr_getElementPtrIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getElementPtrIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTarget.objectCompare (p->mAttribute_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSource.objectCompare (p->mAttribute_mSource) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementList.objectCompare (p->mAttribute_mElementList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_getElementPtrIR::objectCompare (const GALGAS_getElementPtrIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrIR::GALGAS_getElementPtrIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrIR::GALGAS_getElementPtrIR (const cPtr_getElementPtrIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getElementPtrIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrIR GALGAS_getElementPtrIR::constructor_new (const GALGAS_objectInMemoryIR & inAttribute_mTarget,
                                                                const GALGAS_objectInMemoryIR & inAttribute_mSource,
                                                                const GALGAS_elementPtrList & inAttribute_mElementList
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_getElementPtrIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSource.isValid () && inAttribute_mElementList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getElementPtrIR (inAttribute_mTarget, inAttribute_mSource, inAttribute_mElementList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_getElementPtrIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectInMemoryIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_getElementPtrIR * p = (const cPtr_getElementPtrIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getElementPtrIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR cPtr_getElementPtrIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_getElementPtrIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectInMemoryIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_getElementPtrIR * p = (const cPtr_getElementPtrIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getElementPtrIR) ;
    result = p->mAttribute_mSource ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR cPtr_getElementPtrIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSource ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_elementPtrList GALGAS_getElementPtrIR::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_elementPtrList result ;
  if (NULL != mObjectPtr) {
    const cPtr_getElementPtrIR * p = (const cPtr_getElementPtrIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getElementPtrIR) ;
    result = p->mAttribute_mElementList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_elementPtrList cPtr_getElementPtrIR::getter_mElementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @getElementPtrIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_getElementPtrIR::cPtr_getElementPtrIR (const GALGAS_objectInMemoryIR & in_mTarget,
                                            const GALGAS_objectInMemoryIR & in_mSource,
                                            const GALGAS_elementPtrList & in_mElementList
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mSource (in_mSource),
mAttribute_mElementList (in_mElementList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_getElementPtrIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getElementPtrIR ;
}

void cPtr_getElementPtrIR::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@getElementPtrIR:" ;
  mAttribute_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSource.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElementList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_getElementPtrIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getElementPtrIR (mAttribute_mTarget, mAttribute_mSource, mAttribute_mElementList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @getElementPtrIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getElementPtrIR ("getElementPtrIR",
                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getElementPtrIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getElementPtrIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getElementPtrIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getElementPtrIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getElementPtrIR GALGAS_getElementPtrIR::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getElementPtrIR result ;
  const GALGAS_getElementPtrIR * p = (const GALGAS_getElementPtrIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getElementPtrIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getElementPtrIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_getPropertyReferenceFromSelfIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTarget.objectCompare (p->mAttribute_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSelfType.objectCompare (p->mAttribute_mSelfType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPropertyName.objectCompare (p->mAttribute_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPropertyIndex.objectCompare (p->mAttribute_mPropertyIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_getPropertyReferenceFromSelfIR::objectCompare (const GALGAS_getPropertyReferenceFromSelfIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceFromSelfIR::GALGAS_getPropertyReferenceFromSelfIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceFromSelfIR::GALGAS_getPropertyReferenceFromSelfIR (const cPtr_getPropertyReferenceFromSelfIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getPropertyReferenceFromSelfIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceFromSelfIR GALGAS_getPropertyReferenceFromSelfIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mSelfType,
                                                                                              const GALGAS_string & inAttribute_mPropertyName,
                                                                                              const GALGAS_uint & inAttribute_mPropertyIndex
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getPropertyReferenceFromSelfIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSelfType.isValid () && inAttribute_mPropertyName.isValid () && inAttribute_mPropertyIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getPropertyReferenceFromSelfIR (inAttribute_mTarget, inAttribute_mSelfType, inAttribute_mPropertyName, inAttribute_mPropertyIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_getPropertyReferenceFromSelfIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_getPropertyReferenceFromSelfIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_getPropertyReferenceFromSelfIR::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
    result = p->mAttribute_mSelfType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_getPropertyReferenceFromSelfIR::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getPropertyReferenceFromSelfIR::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
    result = p->mAttribute_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_getPropertyReferenceFromSelfIR::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_getPropertyReferenceFromSelfIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceFromSelfIR * p = (const cPtr_getPropertyReferenceFromSelfIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceFromSelfIR) ;
    result = p->mAttribute_mPropertyIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_getPropertyReferenceFromSelfIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @getPropertyReferenceFromSelfIR class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_getPropertyReferenceFromSelfIR::cPtr_getPropertyReferenceFromSelfIR (const GALGAS_objectIR & in_mTarget,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                                                          const GALGAS_string & in_mPropertyName,
                                                                          const GALGAS_uint & in_mPropertyIndex
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mSelfType (in_mSelfType),
mAttribute_mPropertyName (in_mPropertyName),
mAttribute_mPropertyIndex (in_mPropertyIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_getPropertyReferenceFromSelfIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getPropertyReferenceFromSelfIR ;
}

void cPtr_getPropertyReferenceFromSelfIR::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@getPropertyReferenceFromSelfIR:" ;
  mAttribute_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSelfType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_getPropertyReferenceFromSelfIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getPropertyReferenceFromSelfIR (mAttribute_mTarget, mAttribute_mSelfType, mAttribute_mPropertyName, mAttribute_mPropertyIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @getPropertyReferenceFromSelfIR type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getPropertyReferenceFromSelfIR ("getPropertyReferenceFromSelfIR",
                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getPropertyReferenceFromSelfIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getPropertyReferenceFromSelfIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getPropertyReferenceFromSelfIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getPropertyReferenceFromSelfIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceFromSelfIR GALGAS_getPropertyReferenceFromSelfIR::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_getPropertyReferenceFromSelfIR result ;
  const GALGAS_getPropertyReferenceFromSelfIR * p = (const GALGAS_getPropertyReferenceFromSelfIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getPropertyReferenceFromSelfIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getPropertyReferenceFromSelfIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_getPropertyReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getPropertyReferenceIR * p = (const cPtr_getPropertyReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getPropertyReferenceIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTarget.objectCompare (p->mAttribute_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSource.objectCompare (p->mAttribute_mSource) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPLMname.objectCompare (p->mAttribute_mPLMname) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPropertyIndex.objectCompare (p->mAttribute_mPropertyIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_getPropertyReferenceIR::objectCompare (const GALGAS_getPropertyReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceIR::GALGAS_getPropertyReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceIR::GALGAS_getPropertyReferenceIR (const cPtr_getPropertyReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getPropertyReferenceIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceIR GALGAS_getPropertyReferenceIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                              const GALGAS_objectIR & inAttribute_mSource,
                                                                              const GALGAS_string & inAttribute_mPLMname,
                                                                              const GALGAS_string & inAttribute_mPropertyIndex
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getPropertyReferenceIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSource.isValid () && inAttribute_mPLMname.isValid () && inAttribute_mPropertyIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getPropertyReferenceIR (inAttribute_mTarget, inAttribute_mSource, inAttribute_mPLMname, inAttribute_mPropertyIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_getPropertyReferenceIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceIR * p = (const cPtr_getPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_getPropertyReferenceIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_getPropertyReferenceIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceIR * p = (const cPtr_getPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceIR) ;
    result = p->mAttribute_mSource ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_getPropertyReferenceIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSource ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getPropertyReferenceIR::getter_mPLMname (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceIR * p = (const cPtr_getPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceIR) ;
    result = p->mAttribute_mPLMname ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_getPropertyReferenceIR::getter_mPLMname (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPLMname ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_getPropertyReferenceIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getPropertyReferenceIR * p = (const cPtr_getPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getPropertyReferenceIR) ;
    result = p->mAttribute_mPropertyIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_getPropertyReferenceIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @getPropertyReferenceIR class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_getPropertyReferenceIR::cPtr_getPropertyReferenceIR (const GALGAS_objectIR & in_mTarget,
                                                          const GALGAS_objectIR & in_mSource,
                                                          const GALGAS_string & in_mPLMname,
                                                          const GALGAS_string & in_mPropertyIndex
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mSource (in_mSource),
mAttribute_mPLMname (in_mPLMname),
mAttribute_mPropertyIndex (in_mPropertyIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_getPropertyReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getPropertyReferenceIR ;
}

void cPtr_getPropertyReferenceIR::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@getPropertyReferenceIR:" ;
  mAttribute_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSource.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPLMname.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_getPropertyReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getPropertyReferenceIR (mAttribute_mTarget, mAttribute_mSource, mAttribute_mPLMname, mAttribute_mPropertyIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @getPropertyReferenceIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getPropertyReferenceIR ("getPropertyReferenceIR",
                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_getPropertyReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getPropertyReferenceIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_getPropertyReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getPropertyReferenceIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_getPropertyReferenceIR GALGAS_getPropertyReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_getPropertyReferenceIR result ;
  const GALGAS_getPropertyReferenceIR * p = (const GALGAS_getPropertyReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getPropertyReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getPropertyReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ifInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTestVariable.objectCompare (p->mAttribute_mTestVariable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenInstructionGenerationList.objectCompare (p->mAttribute_mThenInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionGenerationList.objectCompare (p->mAttribute_mElseInstructionGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ifInstructionIR::objectCompare (const GALGAS_ifInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionIR::GALGAS_ifInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionIR::GALGAS_ifInstructionIR (const cPtr_ifInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTestVariable,
                                                                const GALGAS_location & inAttribute_mLocation,
                                                                const GALGAS_instructionListIR & inAttribute_mThenInstructionGenerationList,
                                                                const GALGAS_instructionListIR & inAttribute_mElseInstructionGenerationList
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR result ;
  if (inAttribute_mTestVariable.isValid () && inAttribute_mLocation.isValid () && inAttribute_mThenInstructionGenerationList.isValid () && inAttribute_mElseInstructionGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionIR (inAttribute_mTestVariable, inAttribute_mLocation, inAttribute_mThenInstructionGenerationList, inAttribute_mElseInstructionGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_ifInstructionIR::getter_mTestVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    result = p->mAttribute_mTestVariable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_ifInstructionIR::getter_mTestVariable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_ifInstructionIR::getter_mThenInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    result = p->mAttribute_mThenInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_ifInstructionIR::getter_mThenInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_ifInstructionIR::getter_mElseInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    result = p->mAttribute_mElseInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_ifInstructionIR::getter_mElseInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @ifInstructionIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifInstructionIR::cPtr_ifInstructionIR (const GALGAS_objectIR & in_mTestVariable,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                            const GALGAS_instructionListIR & in_mElseInstructionGenerationList
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTestVariable (in_mTestVariable),
mAttribute_mLocation (in_mLocation),
mAttribute_mThenInstructionGenerationList (in_mThenInstructionGenerationList),
mAttribute_mElseInstructionGenerationList (in_mElseInstructionGenerationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

void cPtr_ifInstructionIR::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@ifInstructionIR:" ;
  mAttribute_mTestVariable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstructionIR (mAttribute_mTestVariable, mAttribute_mLocation, mAttribute_mThenInstructionGenerationList, mAttribute_mElseInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @ifInstructionIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifInstructionIR ("ifInstructionIR",
                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ifInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ifInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionIR result ;
  const GALGAS_ifInstructionIR * p = (const GALGAS_ifInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_leftShiftIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_leftShiftIR * p = (const cPtr_leftShiftIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_leftShiftIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResult.objectCompare (p->mAttribute_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSource.objectCompare (p->mAttribute_mSource) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mShiftAmount.objectCompare (p->mAttribute_mShiftAmount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_leftShiftIR::objectCompare (const GALGAS_leftShiftIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_leftShiftIR::GALGAS_leftShiftIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_leftShiftIR::GALGAS_leftShiftIR (const cPtr_leftShiftIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_leftShiftIR GALGAS_leftShiftIR::constructor_new (const GALGAS_objectIR & inAttribute_mResult,
                                                        const GALGAS_objectIR & inAttribute_mSource,
                                                        const GALGAS_uint & inAttribute_mShiftAmount
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mSource.isValid () && inAttribute_mShiftAmount.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_leftShiftIR (inAttribute_mResult, inAttribute_mSource, inAttribute_mShiftAmount COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_leftShiftIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftIR * p = (const cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    result = p->mAttribute_mResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_leftShiftIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_leftShiftIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftIR * p = (const cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    result = p->mAttribute_mSource ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_leftShiftIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSource ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_leftShiftIR::getter_mShiftAmount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_leftShiftIR * p = (const cPtr_leftShiftIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftIR) ;
    result = p->mAttribute_mShiftAmount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_leftShiftIR::getter_mShiftAmount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mShiftAmount ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @leftShiftIR class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_leftShiftIR::cPtr_leftShiftIR (const GALGAS_objectIR & in_mResult,
                                    const GALGAS_objectIR & in_mSource,
                                    const GALGAS_uint & in_mShiftAmount
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mResult (in_mResult),
mAttribute_mSource (in_mSource),
mAttribute_mShiftAmount (in_mShiftAmount) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_leftShiftIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR ;
}

void cPtr_leftShiftIR::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@leftShiftIR:" ;
  mAttribute_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSource.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mShiftAmount.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_leftShiftIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_leftShiftIR (mAttribute_mResult, mAttribute_mSource, mAttribute_mShiftAmount COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @leftShiftIR type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_leftShiftIR ("leftShiftIR",
                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_leftShiftIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_leftShiftIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_leftShiftIR GALGAS_leftShiftIR::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftIR result ;
  const GALGAS_leftShiftIR * p = (const GALGAS_leftShiftIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_leftShiftIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_loadFromTemporaryReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadFromTemporaryReferenceIR * p = (const cPtr_loadFromTemporaryReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadFromTemporaryReferenceIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLLVMName.objectCompare (p->mAttribute_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVolatile.objectCompare (p->mAttribute_mVolatile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_loadFromTemporaryReferenceIR::objectCompare (const GALGAS_loadFromTemporaryReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadFromTemporaryReferenceIR::GALGAS_loadFromTemporaryReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadFromTemporaryReferenceIR::GALGAS_loadFromTemporaryReferenceIR (const cPtr_loadFromTemporaryReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadFromTemporaryReferenceIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadFromTemporaryReferenceIR GALGAS_loadFromTemporaryReferenceIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                                          const GALGAS_string & inAttribute_mLLVMName,
                                                                                          const GALGAS_bool & inAttribute_mVolatile
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_loadFromTemporaryReferenceIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mVolatile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadFromTemporaryReferenceIR (inAttribute_mTargetValue, inAttribute_mLLVMName, inAttribute_mVolatile COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_loadFromTemporaryReferenceIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadFromTemporaryReferenceIR * p = (const cPtr_loadFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromTemporaryReferenceIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_loadFromTemporaryReferenceIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_loadFromTemporaryReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadFromTemporaryReferenceIR * p = (const cPtr_loadFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromTemporaryReferenceIR) ;
    result = p->mAttribute_mLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_loadFromTemporaryReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_loadFromTemporaryReferenceIR::getter_mVolatile (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadFromTemporaryReferenceIR * p = (const cPtr_loadFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadFromTemporaryReferenceIR) ;
    result = p->mAttribute_mVolatile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_loadFromTemporaryReferenceIR::getter_mVolatile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @loadFromTemporaryReferenceIR class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loadFromTemporaryReferenceIR::cPtr_loadFromTemporaryReferenceIR (const GALGAS_objectIR & in_mTargetValue,
                                                                      const GALGAS_string & in_mLLVMName,
                                                                      const GALGAS_bool & in_mVolatile
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mLLVMName (in_mLLVMName),
mAttribute_mVolatile (in_mVolatile) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_loadFromTemporaryReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromTemporaryReferenceIR ;
}

void cPtr_loadFromTemporaryReferenceIR::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@loadFromTemporaryReferenceIR:" ;
  mAttribute_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVolatile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadFromTemporaryReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadFromTemporaryReferenceIR (mAttribute_mTargetValue, mAttribute_mLLVMName, mAttribute_mVolatile COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @loadFromTemporaryReferenceIR type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadFromTemporaryReferenceIR ("loadFromTemporaryReferenceIR",
                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_loadFromTemporaryReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadFromTemporaryReferenceIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_loadFromTemporaryReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadFromTemporaryReferenceIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadFromTemporaryReferenceIR GALGAS_loadFromTemporaryReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_loadFromTemporaryReferenceIR result ;
  const GALGAS_loadFromTemporaryReferenceIR * p = (const GALGAS_loadFromTemporaryReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadFromTemporaryReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadFromTemporaryReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_loadGlobalVariableIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadGlobalVariableIR * p = (const cPtr_loadGlobalVariableIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadGlobalVariableIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariableName.objectCompare (p->mAttribute_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsVolatile.objectCompare (p->mAttribute_mIsVolatile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_loadGlobalVariableIR::objectCompare (const GALGAS_loadGlobalVariableIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadGlobalVariableIR::GALGAS_loadGlobalVariableIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadGlobalVariableIR::GALGAS_loadGlobalVariableIR (const cPtr_loadGlobalVariableIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadGlobalVariableIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadGlobalVariableIR GALGAS_loadGlobalVariableIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                          const GALGAS_string & inAttribute_mVariableName,
                                                                          const GALGAS_bool & inAttribute_mIsVolatile
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_loadGlobalVariableIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mIsVolatile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadGlobalVariableIR (inAttribute_mTargetValue, inAttribute_mVariableName, inAttribute_mIsVolatile COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_loadGlobalVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadGlobalVariableIR * p = (const cPtr_loadGlobalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadGlobalVariableIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_loadGlobalVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_loadGlobalVariableIR::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadGlobalVariableIR * p = (const cPtr_loadGlobalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadGlobalVariableIR) ;
    result = p->mAttribute_mVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_loadGlobalVariableIR::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_loadGlobalVariableIR::getter_mIsVolatile (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadGlobalVariableIR * p = (const cPtr_loadGlobalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadGlobalVariableIR) ;
    result = p->mAttribute_mIsVolatile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_loadGlobalVariableIR::getter_mIsVolatile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @loadGlobalVariableIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loadGlobalVariableIR::cPtr_loadGlobalVariableIR (const GALGAS_objectIR & in_mTargetValue,
                                                      const GALGAS_string & in_mVariableName,
                                                      const GALGAS_bool & in_mIsVolatile
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mVariableName (in_mVariableName),
mAttribute_mIsVolatile (in_mIsVolatile) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_loadGlobalVariableIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadGlobalVariableIR ;
}

void cPtr_loadGlobalVariableIR::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@loadGlobalVariableIR:" ;
  mAttribute_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsVolatile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadGlobalVariableIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadGlobalVariableIR (mAttribute_mTargetValue, mAttribute_mVariableName, mAttribute_mIsVolatile COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @loadGlobalVariableIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadGlobalVariableIR ("loadGlobalVariableIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_loadGlobalVariableIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadGlobalVariableIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_loadGlobalVariableIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadGlobalVariableIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadGlobalVariableIR GALGAS_loadGlobalVariableIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_loadGlobalVariableIR result ;
  const GALGAS_loadGlobalVariableIR * p = (const GALGAS_loadGlobalVariableIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadGlobalVariableIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadGlobalVariableIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_loadLocalVariableIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadLocalVariableIR * p = (const cPtr_loadLocalVariableIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadLocalVariableIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariableName.objectCompare (p->mAttribute_mVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVolatile.objectCompare (p->mAttribute_mVolatile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_loadLocalVariableIR::objectCompare (const GALGAS_loadLocalVariableIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadLocalVariableIR::GALGAS_loadLocalVariableIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadLocalVariableIR::GALGAS_loadLocalVariableIR (const cPtr_loadLocalVariableIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadLocalVariableIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadLocalVariableIR GALGAS_loadLocalVariableIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                        const GALGAS_string & inAttribute_mVariableName,
                                                                        const GALGAS_bool & inAttribute_mVolatile
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_loadLocalVariableIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mVariableName.isValid () && inAttribute_mVolatile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadLocalVariableIR (inAttribute_mTargetValue, inAttribute_mVariableName, inAttribute_mVolatile COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_loadLocalVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadLocalVariableIR * p = (const cPtr_loadLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadLocalVariableIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_loadLocalVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_loadLocalVariableIR::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadLocalVariableIR * p = (const cPtr_loadLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadLocalVariableIR) ;
    result = p->mAttribute_mVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_loadLocalVariableIR::getter_mVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_loadLocalVariableIR::getter_mVolatile (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadLocalVariableIR * p = (const cPtr_loadLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadLocalVariableIR) ;
    result = p->mAttribute_mVolatile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_loadLocalVariableIR::getter_mVolatile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @loadLocalVariableIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loadLocalVariableIR::cPtr_loadLocalVariableIR (const GALGAS_objectIR & in_mTargetValue,
                                                    const GALGAS_string & in_mVariableName,
                                                    const GALGAS_bool & in_mVolatile
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mVariableName (in_mVariableName),
mAttribute_mVolatile (in_mVolatile) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_loadLocalVariableIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadLocalVariableIR ;
}

void cPtr_loadLocalVariableIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@loadLocalVariableIR:" ;
  mAttribute_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVolatile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadLocalVariableIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadLocalVariableIR (mAttribute_mTargetValue, mAttribute_mVariableName, mAttribute_mVolatile COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @loadLocalVariableIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadLocalVariableIR ("loadLocalVariableIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_loadLocalVariableIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadLocalVariableIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_loadLocalVariableIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadLocalVariableIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadLocalVariableIR GALGAS_loadLocalVariableIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loadLocalVariableIR result ;
  const GALGAS_loadLocalVariableIR * p = (const GALGAS_loadLocalVariableIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadLocalVariableIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadLocalVariableIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_loadRegisterAddressIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadRegisterAddressIR * p = (const cPtr_loadRegisterAddressIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadRegisterAddressIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexResult.objectCompare (p->mAttribute_mIndexResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterAddress.objectCompare (p->mAttribute_mRegisterAddress) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementArraySize.objectCompare (p->mAttribute_mElementArraySize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_loadRegisterAddressIR::objectCompare (const GALGAS_loadRegisterAddressIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterAddressIR::GALGAS_loadRegisterAddressIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterAddressIR::GALGAS_loadRegisterAddressIR (const cPtr_loadRegisterAddressIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadRegisterAddressIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterAddressIR GALGAS_loadRegisterAddressIR::constructor_new (const GALGAS_objectInMemoryIR & inAttribute_mTargetValue,
                                                                            const GALGAS_objectIR & inAttribute_mIndexResult,
                                                                            const GALGAS_bigint & inAttribute_mRegisterAddress,
                                                                            const GALGAS_bigint & inAttribute_mElementArraySize
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_loadRegisterAddressIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mIndexResult.isValid () && inAttribute_mRegisterAddress.isValid () && inAttribute_mElementArraySize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadRegisterAddressIR (inAttribute_mTargetValue, inAttribute_mIndexResult, inAttribute_mRegisterAddress, inAttribute_mElementArraySize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_loadRegisterAddressIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectInMemoryIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterAddressIR * p = (const cPtr_loadRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterAddressIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR cPtr_loadRegisterAddressIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_loadRegisterAddressIR::getter_mIndexResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterAddressIR * p = (const cPtr_loadRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterAddressIR) ;
    result = p->mAttribute_mIndexResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_loadRegisterAddressIR::getter_mIndexResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_loadRegisterAddressIR::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterAddressIR * p = (const cPtr_loadRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterAddressIR) ;
    result = p->mAttribute_mRegisterAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_loadRegisterAddressIR::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_loadRegisterAddressIR::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterAddressIR * p = (const cPtr_loadRegisterAddressIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterAddressIR) ;
    result = p->mAttribute_mElementArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_loadRegisterAddressIR::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @loadRegisterAddressIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loadRegisterAddressIR::cPtr_loadRegisterAddressIR (const GALGAS_objectInMemoryIR & in_mTargetValue,
                                                        const GALGAS_objectIR & in_mIndexResult,
                                                        const GALGAS_bigint & in_mRegisterAddress,
                                                        const GALGAS_bigint & in_mElementArraySize
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mIndexResult (in_mIndexResult),
mAttribute_mRegisterAddress (in_mRegisterAddress),
mAttribute_mElementArraySize (in_mElementArraySize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_loadRegisterAddressIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadRegisterAddressIR ;
}

void cPtr_loadRegisterAddressIR::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@loadRegisterAddressIR:" ;
  mAttribute_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElementArraySize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadRegisterAddressIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadRegisterAddressIR (mAttribute_mTargetValue, mAttribute_mIndexResult, mAttribute_mRegisterAddress, mAttribute_mElementArraySize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @loadRegisterAddressIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadRegisterAddressIR ("loadRegisterAddressIR",
                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_loadRegisterAddressIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadRegisterAddressIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_loadRegisterAddressIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadRegisterAddressIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterAddressIR GALGAS_loadRegisterAddressIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_loadRegisterAddressIR result ;
  const GALGAS_loadRegisterAddressIR * p = (const GALGAS_loadRegisterAddressIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadRegisterAddressIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadRegisterAddressIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_loadRegisterIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadRegisterIR * p = (const cPtr_loadRegisterIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadRegisterIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterAddress.objectCompare (p->mAttribute_mRegisterAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_loadRegisterIR::objectCompare (const GALGAS_loadRegisterIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterIR::GALGAS_loadRegisterIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterIR::GALGAS_loadRegisterIR (const cPtr_loadRegisterIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadRegisterIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterIR GALGAS_loadRegisterIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                              const GALGAS_bigint & inAttribute_mRegisterAddress
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_loadRegisterIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mRegisterAddress.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadRegisterIR (inAttribute_mTargetValue, inAttribute_mRegisterAddress COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_loadRegisterIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterIR * p = (const cPtr_loadRegisterIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_loadRegisterIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_loadRegisterIR::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterIR * p = (const cPtr_loadRegisterIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterIR) ;
    result = p->mAttribute_mRegisterAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_loadRegisterIR::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @loadRegisterIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loadRegisterIR::cPtr_loadRegisterIR (const GALGAS_objectIR & in_mTargetValue,
                                          const GALGAS_bigint & in_mRegisterAddress
                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mRegisterAddress (in_mRegisterAddress) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_loadRegisterIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadRegisterIR ;
}

void cPtr_loadRegisterIR::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "[@loadRegisterIR:" ;
  mAttribute_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadRegisterIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadRegisterIR (mAttribute_mTargetValue, mAttribute_mRegisterAddress COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @loadRegisterIR type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadRegisterIR ("loadRegisterIR",
                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_loadRegisterIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadRegisterIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_loadRegisterIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadRegisterIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterIR GALGAS_loadRegisterIR::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_loadRegisterIR result ;
  const GALGAS_loadRegisterIR * p = (const GALGAS_loadRegisterIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadRegisterIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadRegisterIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_loadRegisterWithSubscriptIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadRegisterWithSubscriptIR * p = (const cPtr_loadRegisterWithSubscriptIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadRegisterWithSubscriptIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexResult.objectCompare (p->mAttribute_mIndexResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterAddress.objectCompare (p->mAttribute_mRegisterAddress) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElementArraySize.objectCompare (p->mAttribute_mElementArraySize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_loadRegisterWithSubscriptIR::objectCompare (const GALGAS_loadRegisterWithSubscriptIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterWithSubscriptIR::GALGAS_loadRegisterWithSubscriptIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterWithSubscriptIR::GALGAS_loadRegisterWithSubscriptIR (const cPtr_loadRegisterWithSubscriptIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadRegisterWithSubscriptIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterWithSubscriptIR GALGAS_loadRegisterWithSubscriptIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                                        const GALGAS_objectIR & inAttribute_mIndexResult,
                                                                                        const GALGAS_bigint & inAttribute_mRegisterAddress,
                                                                                        const GALGAS_bigint & inAttribute_mElementArraySize
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_loadRegisterWithSubscriptIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mIndexResult.isValid () && inAttribute_mRegisterAddress.isValid () && inAttribute_mElementArraySize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadRegisterWithSubscriptIR (inAttribute_mTargetValue, inAttribute_mIndexResult, inAttribute_mRegisterAddress, inAttribute_mElementArraySize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_loadRegisterWithSubscriptIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterWithSubscriptIR * p = (const cPtr_loadRegisterWithSubscriptIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterWithSubscriptIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_loadRegisterWithSubscriptIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_loadRegisterWithSubscriptIR::getter_mIndexResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterWithSubscriptIR * p = (const cPtr_loadRegisterWithSubscriptIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterWithSubscriptIR) ;
    result = p->mAttribute_mIndexResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_loadRegisterWithSubscriptIR::getter_mIndexResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_loadRegisterWithSubscriptIR::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterWithSubscriptIR * p = (const cPtr_loadRegisterWithSubscriptIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterWithSubscriptIR) ;
    result = p->mAttribute_mRegisterAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_loadRegisterWithSubscriptIR::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_loadRegisterWithSubscriptIR::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterWithSubscriptIR * p = (const cPtr_loadRegisterWithSubscriptIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterWithSubscriptIR) ;
    result = p->mAttribute_mElementArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_loadRegisterWithSubscriptIR::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @loadRegisterWithSubscriptIR class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loadRegisterWithSubscriptIR::cPtr_loadRegisterWithSubscriptIR (const GALGAS_objectIR & in_mTargetValue,
                                                                    const GALGAS_objectIR & in_mIndexResult,
                                                                    const GALGAS_bigint & in_mRegisterAddress,
                                                                    const GALGAS_bigint & in_mElementArraySize
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mIndexResult (in_mIndexResult),
mAttribute_mRegisterAddress (in_mRegisterAddress),
mAttribute_mElementArraySize (in_mElementArraySize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_loadRegisterWithSubscriptIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadRegisterWithSubscriptIR ;
}

void cPtr_loadRegisterWithSubscriptIR::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@loadRegisterWithSubscriptIR:" ;
  mAttribute_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElementArraySize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadRegisterWithSubscriptIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadRegisterWithSubscriptIR (mAttribute_mTargetValue, mAttribute_mIndexResult, mAttribute_mRegisterAddress, mAttribute_mElementArraySize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @loadRegisterWithSubscriptIR type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadRegisterWithSubscriptIR ("loadRegisterWithSubscriptIR",
                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_loadRegisterWithSubscriptIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadRegisterWithSubscriptIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_loadRegisterWithSubscriptIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadRegisterWithSubscriptIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadRegisterWithSubscriptIR GALGAS_loadRegisterWithSubscriptIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loadRegisterWithSubscriptIR result ;
  const GALGAS_loadRegisterWithSubscriptIR * p = (const GALGAS_loadRegisterWithSubscriptIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadRegisterWithSubscriptIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadRegisterWithSubscriptIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_loadStructureConstantIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadStructureConstantIR * p = (const cPtr_loadStructureConstantIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadStructureConstantIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_loadStructureConstantIR::objectCompare (const GALGAS_loadStructureConstantIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadStructureConstantIR::GALGAS_loadStructureConstantIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadStructureConstantIR::GALGAS_loadStructureConstantIR (const cPtr_loadStructureConstantIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadStructureConstantIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadStructureConstantIR GALGAS_loadStructureConstantIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                                const GALGAS_string & inAttribute_mTypeName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_loadStructureConstantIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadStructureConstantIR (inAttribute_mTargetValue, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_loadStructureConstantIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadStructureConstantIR * p = (const cPtr_loadStructureConstantIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadStructureConstantIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_loadStructureConstantIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_loadStructureConstantIR::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadStructureConstantIR * p = (const cPtr_loadStructureConstantIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadStructureConstantIR) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_loadStructureConstantIR::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @loadStructureConstantIR class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loadStructureConstantIR::cPtr_loadStructureConstantIR (const GALGAS_objectIR & in_mTargetValue,
                                                            const GALGAS_string & in_mTypeName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mTypeName (in_mTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_loadStructureConstantIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadStructureConstantIR ;
}

void cPtr_loadStructureConstantIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@loadStructureConstantIR:" ;
  mAttribute_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadStructureConstantIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadStructureConstantIR (mAttribute_mTargetValue, mAttribute_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @loadStructureConstantIR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadStructureConstantIR ("loadStructureConstantIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_loadStructureConstantIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadStructureConstantIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_loadStructureConstantIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadStructureConstantIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadStructureConstantIR GALGAS_loadStructureConstantIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_loadStructureConstantIR result ;
  const GALGAS_loadStructureConstantIR * p = (const GALGAS_loadStructureConstantIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadStructureConstantIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadStructureConstantIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_loadTaskVariableIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadTaskVariableIR * p = (const cPtr_loadTaskVariableIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadTaskVariableIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTaskName.objectCompare (p->mAttribute_mTaskName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_loadTaskVariableIR::objectCompare (const GALGAS_loadTaskVariableIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadTaskVariableIR::GALGAS_loadTaskVariableIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadTaskVariableIR::GALGAS_loadTaskVariableIR (const cPtr_loadTaskVariableIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loadTaskVariableIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadTaskVariableIR GALGAS_loadTaskVariableIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                      const GALGAS_string & inAttribute_mTaskName,
                                                                      const GALGAS_string & inAttribute_mVarName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_loadTaskVariableIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mTaskName.isValid () && inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadTaskVariableIR (inAttribute_mTargetValue, inAttribute_mTaskName, inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_loadTaskVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadTaskVariableIR * p = (const cPtr_loadTaskVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadTaskVariableIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_loadTaskVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_loadTaskVariableIR::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadTaskVariableIR * p = (const cPtr_loadTaskVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadTaskVariableIR) ;
    result = p->mAttribute_mTaskName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_loadTaskVariableIR::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_loadTaskVariableIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadTaskVariableIR * p = (const cPtr_loadTaskVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadTaskVariableIR) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_loadTaskVariableIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @loadTaskVariableIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loadTaskVariableIR::cPtr_loadTaskVariableIR (const GALGAS_objectIR & in_mTargetValue,
                                                  const GALGAS_string & in_mTaskName,
                                                  const GALGAS_string & in_mVarName
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mTaskName (in_mTaskName),
mAttribute_mVarName (in_mVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_loadTaskVariableIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadTaskVariableIR ;
}

void cPtr_loadTaskVariableIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@loadTaskVariableIR:" ;
  mAttribute_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTaskName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadTaskVariableIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadTaskVariableIR (mAttribute_mTargetValue, mAttribute_mTaskName, mAttribute_mVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @loadTaskVariableIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_loadTaskVariableIR ("loadTaskVariableIR",
                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_loadTaskVariableIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loadTaskVariableIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_loadTaskVariableIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loadTaskVariableIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_loadTaskVariableIR GALGAS_loadTaskVariableIR::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_loadTaskVariableIR result ;
  const GALGAS_loadTaskVariableIR * p = (const GALGAS_loadTaskVariableIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_loadTaskVariableIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loadTaskVariableIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_panicInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_panicInstructionIR * p = (const cPtr_panicInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mThrowLocation.objectCompare (p->mAttribute_mThrowLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPanicCode.objectCompare (p->mAttribute_mPanicCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_panicInstructionIR::objectCompare (const GALGAS_panicInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionIR::GALGAS_panicInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_panicInstructionIR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_bigint::constructor_zero (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionIR::GALGAS_panicInstructionIR (const cPtr_panicInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::constructor_new (const GALGAS_location & inAttribute_mThrowLocation,
                                                                      const GALGAS_bigint & inAttribute_mPanicCode
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR result ;
  if (inAttribute_mThrowLocation.isValid () && inAttribute_mPanicCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicInstructionIR (inAttribute_mThrowLocation, inAttribute_mPanicCode COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_panicInstructionIR::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicInstructionIR * p = (const cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    result = p->mAttribute_mThrowLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_panicInstructionIR::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThrowLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_panicInstructionIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicInstructionIR * p = (const cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    result = p->mAttribute_mPanicCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_panicInstructionIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @panicInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_panicInstructionIR::cPtr_panicInstructionIR (const GALGAS_location & in_mThrowLocation,
                                                  const GALGAS_bigint & in_mPanicCode
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mThrowLocation (in_mThrowLocation),
mAttribute_mPanicCode (in_mPanicCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_panicInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

void cPtr_panicInstructionIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@panicInstructionIR:" ;
  mAttribute_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPanicCode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_panicInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicInstructionIR (mAttribute_mThrowLocation, mAttribute_mPanicCode COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @panicInstructionIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicInstructionIR ("panicInstructionIR",
                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicInstructionIR GALGAS_panicInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicInstructionIR result ;
  const GALGAS_panicInstructionIR * p = (const GALGAS_panicInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_panicWithLineAndFileInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_panicWithLineAndFileInstructionIR * p = (const cPtr_panicWithLineAndFileInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicWithLineAndFileInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mPanicCode.objectCompare (p->mAttribute_mPanicCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_panicWithLineAndFileInstructionIR::objectCompare (const GALGAS_panicWithLineAndFileInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicWithLineAndFileInstructionIR::GALGAS_panicWithLineAndFileInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicWithLineAndFileInstructionIR GALGAS_panicWithLineAndFileInstructionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_panicWithLineAndFileInstructionIR::constructor_new (GALGAS_bigint::constructor_zero (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicWithLineAndFileInstructionIR::GALGAS_panicWithLineAndFileInstructionIR (const cPtr_panicWithLineAndFileInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicWithLineAndFileInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicWithLineAndFileInstructionIR GALGAS_panicWithLineAndFileInstructionIR::constructor_new (const GALGAS_bigint & inAttribute_mPanicCode
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicWithLineAndFileInstructionIR result ;
  if (inAttribute_mPanicCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicWithLineAndFileInstructionIR (inAttribute_mPanicCode COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_panicWithLineAndFileInstructionIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicWithLineAndFileInstructionIR * p = (const cPtr_panicWithLineAndFileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicWithLineAndFileInstructionIR) ;
    result = p->mAttribute_mPanicCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_panicWithLineAndFileInstructionIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @panicWithLineAndFileInstructionIR class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_panicWithLineAndFileInstructionIR::cPtr_panicWithLineAndFileInstructionIR (const GALGAS_bigint & in_mPanicCode
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mPanicCode (in_mPanicCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_panicWithLineAndFileInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicWithLineAndFileInstructionIR ;
}

void cPtr_panicWithLineAndFileInstructionIR::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@panicWithLineAndFileInstructionIR:" ;
  mAttribute_mPanicCode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_panicWithLineAndFileInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicWithLineAndFileInstructionIR (mAttribute_mPanicCode COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @panicWithLineAndFileInstructionIR type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicWithLineAndFileInstructionIR ("panicWithLineAndFileInstructionIR",
                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicWithLineAndFileInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicWithLineAndFileInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicWithLineAndFileInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicWithLineAndFileInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicWithLineAndFileInstructionIR GALGAS_panicWithLineAndFileInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_panicWithLineAndFileInstructionIR result ;
  const GALGAS_panicWithLineAndFileInstructionIR * p = (const GALGAS_panicWithLineAndFileInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicWithLineAndFileInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicWithLineAndFileInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_procCallInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionIR * p = (const cPtr_procCallInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mGlobalVariableName.objectCompare (p->mAttribute_mGlobalVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineMangledName.objectCompare (p->mAttribute_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineNameForGeneration.objectCompare (p->mAttribute_mRoutineNameForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameters.objectCompare (p->mAttribute_mParameters) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAppendFileAndLineArgumentForPanicLocation.objectCompare (p->mAttribute_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_procCallInstructionIR::objectCompare (const GALGAS_procCallInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionIR::GALGAS_procCallInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionIR::GALGAS_procCallInstructionIR (const cPtr_procCallInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionIR GALGAS_procCallInstructionIR::constructor_new (const GALGAS_string & inAttribute_mGlobalVariableName,
                                                                            const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                            const GALGAS_lstring & inAttribute_mRoutineNameForGeneration,
                                                                            const GALGAS_routineKindIR & inAttribute_mKind,
                                                                            const GALGAS_procCallEffectiveParameterListIR & inAttribute_mParameters,
                                                                            const GALGAS_bool & inAttribute_mAppendFileAndLineArgumentForPanicLocation
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionIR result ;
  if (inAttribute_mGlobalVariableName.isValid () && inAttribute_mRoutineMangledName.isValid () && inAttribute_mRoutineNameForGeneration.isValid () && inAttribute_mKind.isValid () && inAttribute_mParameters.isValid () && inAttribute_mAppendFileAndLineArgumentForPanicLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionIR (inAttribute_mGlobalVariableName, inAttribute_mRoutineMangledName, inAttribute_mRoutineNameForGeneration, inAttribute_mKind, inAttribute_mParameters, inAttribute_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procCallInstructionIR::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionIR * p = (const cPtr_procCallInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionIR) ;
    result = p->mAttribute_mGlobalVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_procCallInstructionIR::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallInstructionIR::getter_mRoutineMangledName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionIR * p = (const cPtr_procCallInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionIR) ;
    result = p->mAttribute_mRoutineMangledName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procCallInstructionIR::getter_mRoutineMangledName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineMangledName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallInstructionIR::getter_mRoutineNameForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionIR * p = (const cPtr_procCallInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionIR) ;
    result = p->mAttribute_mRoutineNameForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procCallInstructionIR::getter_mRoutineNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR GALGAS_procCallInstructionIR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_routineKindIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionIR * p = (const cPtr_procCallInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionIR) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKindIR cPtr_procCallInstructionIR::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallInstructionIR::getter_mParameters (UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionIR * p = (const cPtr_procCallInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionIR) ;
    result = p->mAttribute_mParameters ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR cPtr_procCallInstructionIR::getter_mParameters (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procCallInstructionIR::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionIR * p = (const cPtr_procCallInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionIR) ;
    result = p->mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_procCallInstructionIR::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @procCallInstructionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_procCallInstructionIR::cPtr_procCallInstructionIR (const GALGAS_string & in_mGlobalVariableName,
                                                        const GALGAS_lstring & in_mRoutineMangledName,
                                                        const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                        const GALGAS_routineKindIR & in_mKind,
                                                        const GALGAS_procCallEffectiveParameterListIR & in_mParameters,
                                                        const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mGlobalVariableName (in_mGlobalVariableName),
mAttribute_mRoutineMangledName (in_mRoutineMangledName),
mAttribute_mRoutineNameForGeneration (in_mRoutineNameForGeneration),
mAttribute_mKind (in_mKind),
mAttribute_mParameters (in_mParameters),
mAttribute_mAppendFileAndLineArgumentForPanicLocation (in_mAppendFileAndLineArgumentForPanicLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_procCallInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionIR ;
}

void cPtr_procCallInstructionIR::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@procCallInstructionIR:" ;
  mAttribute_mGlobalVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineNameForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mParameters.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_procCallInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionIR (mAttribute_mGlobalVariableName, mAttribute_mRoutineMangledName, mAttribute_mRoutineNameForGeneration, mAttribute_mKind, mAttribute_mParameters, mAttribute_mAppendFileAndLineArgumentForPanicLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @procCallInstructionIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionIR ("procCallInstructionIR",
                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionIR GALGAS_procCallInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionIR result ;
  const GALGAS_procCallInstructionIR * p = (const GALGAS_procCallInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selectInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_if_5F_variable.objectCompare (p->mAttribute_m_5F_if_5F_variable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_then_5F_variable.objectCompare (p->mAttribute_m_5F_then_5F_variable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_m_5F_else_5F_variable.objectCompare (p->mAttribute_m_5F_else_5F_variable) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selectInstructionIR::objectCompare (const GALGAS_selectInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionIR::GALGAS_selectInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionIR::GALGAS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionIR GALGAS_selectInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetValue,
                                                                        const GALGAS_objectIR & inAttribute_m_5F_if_5F_variable,
                                                                        const GALGAS_objectIR & inAttribute_m_5F_then_5F_variable,
                                                                        const GALGAS_objectIR & inAttribute_m_5F_else_5F_variable
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_m_5F_if_5F_variable.isValid () && inAttribute_m_5F_then_5F_variable.isValid () && inAttribute_m_5F_else_5F_variable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstructionIR (inAttribute_mTargetValue, inAttribute_m_5F_if_5F_variable, inAttribute_m_5F_then_5F_variable, inAttribute_m_5F_else_5F_variable COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_selectInstructionIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_selectInstructionIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_selectInstructionIR::getter_m_5F_if_5F_variable (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    result = p->mAttribute_m_5F_if_5F_variable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_selectInstructionIR::getter_m_5F_if_5F_variable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_if_5F_variable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_selectInstructionIR::getter_m_5F_then_5F_variable (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    result = p->mAttribute_m_5F_then_5F_variable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_selectInstructionIR::getter_m_5F_then_5F_variable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_then_5F_variable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_selectInstructionIR::getter_m_5F_else_5F_variable (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionIR * p = (const cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    result = p->mAttribute_m_5F_else_5F_variable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_selectInstructionIR::getter_m_5F_else_5F_variable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_else_5F_variable ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @selectInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selectInstructionIR::cPtr_selectInstructionIR (const GALGAS_objectIR & in_mTargetValue,
                                                    const GALGAS_objectIR & in_m_5F_if_5F_variable,
                                                    const GALGAS_objectIR & in_m_5F_then_5F_variable,
                                                    const GALGAS_objectIR & in_m_5F_else_5F_variable
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_m_5F_if_5F_variable (in_m_5F_if_5F_variable),
mAttribute_m_5F_then_5F_variable (in_m_5F_then_5F_variable),
mAttribute_m_5F_else_5F_variable (in_m_5F_else_5F_variable) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selectInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

void cPtr_selectInstructionIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@selectInstructionIR:" ;
  mAttribute_mTargetValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_if_5F_variable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_then_5F_variable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_m_5F_else_5F_variable.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selectInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectInstructionIR (mAttribute_mTargetValue, mAttribute_m_5F_if_5F_variable, mAttribute_m_5F_then_5F_variable, mAttribute_m_5F_else_5F_variable COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @selectInstructionIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionIR ("selectInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selectInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selectInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectInstructionIR GALGAS_selectInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionIR result ;
  const GALGAS_selectInstructionIR * p = (const GALGAS_selectInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_shortCircuitAndOperationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetOperand.objectCompare (p->mAttribute_mTargetOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftOperand.objectCompare (p->mAttribute_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftInstructionList.objectCompare (p->mAttribute_mLeftInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightOperand.objectCompare (p->mAttribute_mRightOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightInstructionList.objectCompare (p->mAttribute_mRightInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_shortCircuitAndOperationIR::objectCompare (const GALGAS_shortCircuitAndOperationIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_shortCircuitAndOperationIR::GALGAS_shortCircuitAndOperationIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_shortCircuitAndOperationIR::GALGAS_shortCircuitAndOperationIR (const cPtr_shortCircuitAndOperationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_shortCircuitAndOperationIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR::constructor_new (const GALGAS_objectIR & inAttribute_mTargetOperand,
                                                                                      const GALGAS_objectIR & inAttribute_mLeftOperand,
                                                                                      const GALGAS_instructionListIR & inAttribute_mLeftInstructionList,
                                                                                      const GALGAS_objectIR & inAttribute_mRightOperand,
                                                                                      const GALGAS_instructionListIR & inAttribute_mRightInstructionList,
                                                                                      const GALGAS_location & inAttribute_mLocation
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR result ;
  if (inAttribute_mTargetOperand.isValid () && inAttribute_mLeftOperand.isValid () && inAttribute_mLeftInstructionList.isValid () && inAttribute_mRightOperand.isValid () && inAttribute_mRightInstructionList.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_shortCircuitAndOperationIR (inAttribute_mTargetOperand, inAttribute_mLeftOperand, inAttribute_mLeftInstructionList, inAttribute_mRightOperand, inAttribute_mRightInstructionList, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_shortCircuitAndOperationIR::getter_mTargetOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    result = p->mAttribute_mTargetOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_shortCircuitAndOperationIR::getter_mTargetOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_shortCircuitAndOperationIR::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    result = p->mAttribute_mLeftOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_shortCircuitAndOperationIR::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_shortCircuitAndOperationIR::getter_mLeftInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    result = p->mAttribute_mLeftInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_shortCircuitAndOperationIR::getter_mLeftInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_shortCircuitAndOperationIR::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    result = p->mAttribute_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_shortCircuitAndOperationIR::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_shortCircuitAndOperationIR::getter_mRightInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    result = p->mAttribute_mRightInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_shortCircuitAndOperationIR::getter_mRightInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_shortCircuitAndOperationIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_shortCircuitAndOperationIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @shortCircuitAndOperationIR class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_shortCircuitAndOperationIR::cPtr_shortCircuitAndOperationIR (const GALGAS_objectIR & in_mTargetOperand,
                                                                  const GALGAS_objectIR & in_mLeftOperand,
                                                                  const GALGAS_instructionListIR & in_mLeftInstructionList,
                                                                  const GALGAS_objectIR & in_mRightOperand,
                                                                  const GALGAS_instructionListIR & in_mRightInstructionList,
                                                                  const GALGAS_location & in_mLocation
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetOperand (in_mTargetOperand),
mAttribute_mLeftOperand (in_mLeftOperand),
mAttribute_mLeftInstructionList (in_mLeftInstructionList),
mAttribute_mRightOperand (in_mRightOperand),
mAttribute_mRightInstructionList (in_mRightInstructionList),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_shortCircuitAndOperationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;
}

void cPtr_shortCircuitAndOperationIR::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@shortCircuitAndOperationIR:" ;
  mAttribute_mTargetOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_shortCircuitAndOperationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_shortCircuitAndOperationIR (mAttribute_mTargetOperand, mAttribute_mLeftOperand, mAttribute_mLeftInstructionList, mAttribute_mRightOperand, mAttribute_mRightInstructionList, mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @shortCircuitAndOperationIR type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ("shortCircuitAndOperationIR",
                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_shortCircuitAndOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_shortCircuitAndOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_shortCircuitAndOperationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_shortCircuitAndOperationIR result ;
  const GALGAS_shortCircuitAndOperationIR * p = (const GALGAS_shortCircuitAndOperationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_shortCircuitAndOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("shortCircuitAndOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sourceLocationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sourceLocationIR * p = (const cPtr_sourceLocationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sourceLocationIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceLocation.objectCompare (p->mAttribute_mSourceLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sourceLocationIR::objectCompare (const GALGAS_sourceLocationIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceLocationIR::GALGAS_sourceLocationIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_sourceLocationIR::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceLocationIR::GALGAS_sourceLocationIR (const cPtr_sourceLocationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sourceLocationIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::constructor_new (const GALGAS_location & inAttribute_mSourceLocation
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR result ;
  if (inAttribute_mSourceLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sourceLocationIR (inAttribute_mSourceLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_sourceLocationIR::getter_mSourceLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_sourceLocationIR * p = (const cPtr_sourceLocationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sourceLocationIR) ;
    result = p->mAttribute_mSourceLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_sourceLocationIR::getter_mSourceLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @sourceLocationIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sourceLocationIR::cPtr_sourceLocationIR (const GALGAS_location & in_mSourceLocation
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mSourceLocation (in_mSourceLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sourceLocationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

void cPtr_sourceLocationIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@sourceLocationIR:" ;
  mAttribute_mSourceLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sourceLocationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sourceLocationIR (mAttribute_mSourceLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @sourceLocationIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sourceLocationIR ("sourceLocationIR",
                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sourceLocationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sourceLocationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sourceLocationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sourceLocationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sourceLocationIR GALGAS_sourceLocationIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sourceLocationIR result ;
  const GALGAS_sourceLocationIR * p = (const GALGAS_sourceLocationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sourceLocationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sourceLocationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeGlobalVariableIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeGlobalVariableIR * p = (const cPtr_storeGlobalVariableIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeGlobalVariableIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mGlobalVarName.objectCompare (p->mAttribute_mGlobalVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVarType.objectCompare (p->mAttribute_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceValue.objectCompare (p->mAttribute_mSourceValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsVolatile.objectCompare (p->mAttribute_mIsVolatile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeGlobalVariableIR::objectCompare (const GALGAS_storeGlobalVariableIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeGlobalVariableIR::GALGAS_storeGlobalVariableIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeGlobalVariableIR::GALGAS_storeGlobalVariableIR (const cPtr_storeGlobalVariableIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeGlobalVariableIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeGlobalVariableIR GALGAS_storeGlobalVariableIR::constructor_new (const GALGAS_string & inAttribute_mGlobalVarName,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetVarType,
                                                                            const GALGAS_objectIR & inAttribute_mSourceValue,
                                                                            const GALGAS_bool & inAttribute_mIsVolatile
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_storeGlobalVariableIR result ;
  if (inAttribute_mGlobalVarName.isValid () && inAttribute_mTargetVarType.isValid () && inAttribute_mSourceValue.isValid () && inAttribute_mIsVolatile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeGlobalVariableIR (inAttribute_mGlobalVarName, inAttribute_mTargetVarType, inAttribute_mSourceValue, inAttribute_mIsVolatile COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeGlobalVariableIR::getter_mGlobalVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeGlobalVariableIR * p = (const cPtr_storeGlobalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeGlobalVariableIR) ;
    result = p->mAttribute_mGlobalVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeGlobalVariableIR::getter_mGlobalVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_storeGlobalVariableIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeGlobalVariableIR * p = (const cPtr_storeGlobalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeGlobalVariableIR) ;
    result = p->mAttribute_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_storeGlobalVariableIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeGlobalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeGlobalVariableIR * p = (const cPtr_storeGlobalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeGlobalVariableIR) ;
    result = p->mAttribute_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeGlobalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_storeGlobalVariableIR::getter_mIsVolatile (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeGlobalVariableIR * p = (const cPtr_storeGlobalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeGlobalVariableIR) ;
    result = p->mAttribute_mIsVolatile ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_storeGlobalVariableIR::getter_mIsVolatile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @storeGlobalVariableIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeGlobalVariableIR::cPtr_storeGlobalVariableIR (const GALGAS_string & in_mGlobalVarName,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                                        const GALGAS_objectIR & in_mSourceValue,
                                                        const GALGAS_bool & in_mIsVolatile
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mGlobalVarName (in_mGlobalVarName),
mAttribute_mTargetVarType (in_mTargetVarType),
mAttribute_mSourceValue (in_mSourceValue),
mAttribute_mIsVolatile (in_mIsVolatile) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeGlobalVariableIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeGlobalVariableIR ;
}

void cPtr_storeGlobalVariableIR::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@storeGlobalVariableIR:" ;
  mAttribute_mGlobalVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsVolatile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeGlobalVariableIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeGlobalVariableIR (mAttribute_mGlobalVarName, mAttribute_mTargetVarType, mAttribute_mSourceValue, mAttribute_mIsVolatile COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @storeGlobalVariableIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeGlobalVariableIR ("storeGlobalVariableIR",
                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeGlobalVariableIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeGlobalVariableIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeGlobalVariableIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeGlobalVariableIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeGlobalVariableIR GALGAS_storeGlobalVariableIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeGlobalVariableIR result ;
  const GALGAS_storeGlobalVariableIR * p = (const GALGAS_storeGlobalVariableIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeGlobalVariableIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeGlobalVariableIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeLocalVariableIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeLocalVariableIR * p = (const cPtr_storeLocalVariableIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeLocalVariableIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocalVarName.objectCompare (p->mAttribute_mLocalVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVarType.objectCompare (p->mAttribute_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceValue.objectCompare (p->mAttribute_mSourceValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeLocalVariableIR::objectCompare (const GALGAS_storeLocalVariableIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeLocalVariableIR::GALGAS_storeLocalVariableIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeLocalVariableIR::GALGAS_storeLocalVariableIR (const cPtr_storeLocalVariableIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeLocalVariableIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeLocalVariableIR GALGAS_storeLocalVariableIR::constructor_new (const GALGAS_string & inAttribute_mLocalVarName,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetVarType,
                                                                          const GALGAS_objectIR & inAttribute_mSourceValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeLocalVariableIR result ;
  if (inAttribute_mLocalVarName.isValid () && inAttribute_mTargetVarType.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeLocalVariableIR (inAttribute_mLocalVarName, inAttribute_mTargetVarType, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeLocalVariableIR::getter_mLocalVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeLocalVariableIR * p = (const cPtr_storeLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeLocalVariableIR) ;
    result = p->mAttribute_mLocalVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeLocalVariableIR::getter_mLocalVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocalVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_storeLocalVariableIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeLocalVariableIR * p = (const cPtr_storeLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeLocalVariableIR) ;
    result = p->mAttribute_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_storeLocalVariableIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeLocalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeLocalVariableIR * p = (const cPtr_storeLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeLocalVariableIR) ;
    result = p->mAttribute_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeLocalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @storeLocalVariableIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeLocalVariableIR::cPtr_storeLocalVariableIR (const GALGAS_string & in_mLocalVarName,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                                      const GALGAS_objectIR & in_mSourceValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mLocalVarName (in_mLocalVarName),
mAttribute_mTargetVarType (in_mTargetVarType),
mAttribute_mSourceValue (in_mSourceValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeLocalVariableIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeLocalVariableIR ;
}

void cPtr_storeLocalVariableIR::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@storeLocalVariableIR:" ;
  mAttribute_mLocalVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeLocalVariableIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeLocalVariableIR (mAttribute_mLocalVarName, mAttribute_mTargetVarType, mAttribute_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @storeLocalVariableIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeLocalVariableIR ("storeLocalVariableIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeLocalVariableIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeLocalVariableIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeLocalVariableIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeLocalVariableIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeLocalVariableIR GALGAS_storeLocalVariableIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_storeLocalVariableIR result ;
  const GALGAS_storeLocalVariableIR * p = (const GALGAS_storeLocalVariableIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeLocalVariableIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeLocalVariableIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeTaskVariableIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeTaskVariableIR * p = (const cPtr_storeTaskVariableIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeTaskVariableIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTaskName.objectCompare (p->mAttribute_mTaskName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVarType.objectCompare (p->mAttribute_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceValue.objectCompare (p->mAttribute_mSourceValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeTaskVariableIR::objectCompare (const GALGAS_storeTaskVariableIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeTaskVariableIR::GALGAS_storeTaskVariableIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeTaskVariableIR::GALGAS_storeTaskVariableIR (const cPtr_storeTaskVariableIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeTaskVariableIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeTaskVariableIR GALGAS_storeTaskVariableIR::constructor_new (const GALGAS_string & inAttribute_mTaskName,
                                                                        const GALGAS_string & inAttribute_mVarName,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetVarType,
                                                                        const GALGAS_objectIR & inAttribute_mSourceValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_storeTaskVariableIR result ;
  if (inAttribute_mTaskName.isValid () && inAttribute_mVarName.isValid () && inAttribute_mTargetVarType.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeTaskVariableIR (inAttribute_mTaskName, inAttribute_mVarName, inAttribute_mTargetVarType, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeTaskVariableIR::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeTaskVariableIR * p = (const cPtr_storeTaskVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeTaskVariableIR) ;
    result = p->mAttribute_mTaskName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeTaskVariableIR::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeTaskVariableIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeTaskVariableIR * p = (const cPtr_storeTaskVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeTaskVariableIR) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeTaskVariableIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_storeTaskVariableIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeTaskVariableIR * p = (const cPtr_storeTaskVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeTaskVariableIR) ;
    result = p->mAttribute_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_storeTaskVariableIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeTaskVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeTaskVariableIR * p = (const cPtr_storeTaskVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeTaskVariableIR) ;
    result = p->mAttribute_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeTaskVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @storeTaskVariableIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeTaskVariableIR::cPtr_storeTaskVariableIR (const GALGAS_string & in_mTaskName,
                                                    const GALGAS_string & in_mVarName,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                                    const GALGAS_objectIR & in_mSourceValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTaskName (in_mTaskName),
mAttribute_mVarName (in_mVarName),
mAttribute_mTargetVarType (in_mTargetVarType),
mAttribute_mSourceValue (in_mSourceValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeTaskVariableIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeTaskVariableIR ;
}

void cPtr_storeTaskVariableIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@storeTaskVariableIR:" ;
  mAttribute_mTaskName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeTaskVariableIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeTaskVariableIR (mAttribute_mTaskName, mAttribute_mVarName, mAttribute_mTargetVarType, mAttribute_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @storeTaskVariableIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeTaskVariableIR ("storeTaskVariableIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeTaskVariableIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeTaskVariableIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeTaskVariableIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeTaskVariableIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeTaskVariableIR GALGAS_storeTaskVariableIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_storeTaskVariableIR result ;
  const GALGAS_storeTaskVariableIR * p = (const GALGAS_storeTaskVariableIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeTaskVariableIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeTaskVariableIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeVolatileIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeVolatileIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVarType.objectCompare (p->mAttribute_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAddress.objectCompare (p->mAttribute_mAddress) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceValue.objectCompare (p->mAttribute_mSourceValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeVolatileIR::objectCompare (const GALGAS_storeVolatileIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIR::GALGAS_storeVolatileIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIR::GALGAS_storeVolatileIR (const cPtr_storeVolatileIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeVolatileIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIR GALGAS_storeVolatileIR::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetVarType,
                                                                const GALGAS_bigint & inAttribute_mAddress,
                                                                const GALGAS_objectIR & inAttribute_mSourceValue
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_storeVolatileIR result ;
  if (inAttribute_mTargetVarType.isValid () && inAttribute_mAddress.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeVolatileIR (inAttribute_mTargetVarType, inAttribute_mAddress, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_storeVolatileIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIR) ;
    result = p->mAttribute_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_storeVolatileIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_storeVolatileIR::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIR) ;
    result = p->mAttribute_mAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_storeVolatileIR::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIR) ;
    result = p->mAttribute_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @storeVolatileIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeVolatileIR::cPtr_storeVolatileIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                            const GALGAS_bigint & in_mAddress,
                                            const GALGAS_objectIR & in_mSourceValue
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetVarType (in_mTargetVarType),
mAttribute_mAddress (in_mAddress),
mAttribute_mSourceValue (in_mSourceValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeVolatileIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeVolatileIR ;
}

void cPtr_storeVolatileIR::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@storeVolatileIR:" ;
  mAttribute_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAddress.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeVolatileIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeVolatileIR (mAttribute_mTargetVarType, mAttribute_mAddress, mAttribute_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @storeVolatileIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeVolatileIR ("storeVolatileIR",
                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeVolatileIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeVolatileIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIR GALGAS_storeVolatileIR::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storeVolatileIR result ;
  const GALGAS_storeVolatileIR * p = (const GALGAS_storeVolatileIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_storeVolatileIndirectIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeVolatileIndirectIR * p = (const cPtr_storeVolatileIndirectIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeVolatileIndirectIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVarType.objectCompare (p->mAttribute_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLLVMName.objectCompare (p->mAttribute_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceValue.objectCompare (p->mAttribute_mSourceValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_storeVolatileIndirectIR::objectCompare (const GALGAS_storeVolatileIndirectIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIndirectIR::GALGAS_storeVolatileIndirectIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIndirectIR::GALGAS_storeVolatileIndirectIR (const cPtr_storeVolatileIndirectIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeVolatileIndirectIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIndirectIR GALGAS_storeVolatileIndirectIR::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetVarType,
                                                                                const GALGAS_string & inAttribute_mLLVMName,
                                                                                const GALGAS_objectIR & inAttribute_mSourceValue
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_storeVolatileIndirectIR result ;
  if (inAttribute_mTargetVarType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeVolatileIndirectIR (inAttribute_mTargetVarType, inAttribute_mLLVMName, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_storeVolatileIndirectIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIndirectIR * p = (const cPtr_storeVolatileIndirectIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIndirectIR) ;
    result = p->mAttribute_mTargetVarType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_storeVolatileIndirectIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeVolatileIndirectIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIndirectIR * p = (const cPtr_storeVolatileIndirectIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIndirectIR) ;
    result = p->mAttribute_mLLVMName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeVolatileIndirectIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_storeVolatileIndirectIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIndirectIR * p = (const cPtr_storeVolatileIndirectIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIndirectIR) ;
    result = p->mAttribute_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_storeVolatileIndirectIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @storeVolatileIndirectIR class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeVolatileIndirectIR::cPtr_storeVolatileIndirectIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                                            const GALGAS_string & in_mLLVMName,
                                                            const GALGAS_objectIR & in_mSourceValue
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetVarType (in_mTargetVarType),
mAttribute_mLLVMName (in_mLLVMName),
mAttribute_mSourceValue (in_mSourceValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_storeVolatileIndirectIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeVolatileIndirectIR ;
}

void cPtr_storeVolatileIndirectIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@storeVolatileIndirectIR:" ;
  mAttribute_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_storeVolatileIndirectIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeVolatileIndirectIR (mAttribute_mTargetVarType, mAttribute_mLLVMName, mAttribute_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @storeVolatileIndirectIR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeVolatileIndirectIR ("storeVolatileIndirectIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storeVolatileIndirectIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeVolatileIndirectIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storeVolatileIndirectIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeVolatileIndirectIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storeVolatileIndirectIR GALGAS_storeVolatileIndirectIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storeVolatileIndirectIR result ;
  const GALGAS_storeVolatileIndirectIR * p = (const GALGAS_storeVolatileIndirectIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeVolatileIndirectIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeVolatileIndirectIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_syncInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syncInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSelectInstructionLocation.objectCompare (p->mAttribute_mSelectInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOnInstructionBranchListIR.objectCompare (p->mAttribute_mOnInstructionBranchListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_syncInstructionIR::objectCompare (const GALGAS_syncInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_syncInstructionIR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_syncInstructionBranchListIR::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionIR::GALGAS_syncInstructionIR (const cPtr_syncInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syncInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::constructor_new (const GALGAS_location & inAttribute_mSelectInstructionLocation,
                                                                    const GALGAS_syncInstructionBranchListIR & inAttribute_mOnInstructionBranchListIR
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  if (inAttribute_mSelectInstructionLocation.isValid () && inAttribute_mOnInstructionBranchListIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syncInstructionIR (inAttribute_mSelectInstructionLocation, inAttribute_mOnInstructionBranchListIR COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionIR::getter_mSelectInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    result = p->mAttribute_mSelectInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_syncInstructionIR::getter_mSelectInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR GALGAS_syncInstructionIR::getter_mOnInstructionBranchListIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_syncInstructionBranchListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_syncInstructionIR * p = (const cPtr_syncInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syncInstructionIR) ;
    result = p->mAttribute_mOnInstructionBranchListIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR cPtr_syncInstructionIR::getter_mOnInstructionBranchListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOnInstructionBranchListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @syncInstructionIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_syncInstructionIR::cPtr_syncInstructionIR (const GALGAS_location & in_mSelectInstructionLocation,
                                                const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mSelectInstructionLocation (in_mSelectInstructionLocation),
mAttribute_mOnInstructionBranchListIR (in_mOnInstructionBranchListIR) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_syncInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

void cPtr_syncInstructionIR::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@syncInstructionIR:" ;
  mAttribute_mSelectInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOnInstructionBranchListIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_syncInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syncInstructionIR (mAttribute_mSelectInstructionLocation, mAttribute_mOnInstructionBranchListIR COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @syncInstructionIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionIR ("syncInstructionIR",
                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionIR GALGAS_syncInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionIR result ;
  const GALGAS_syncInstructionIR * p = (const GALGAS_syncInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_testArrayIndexIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_testArrayIndexIR * p = (const cPtr_testArrayIndexIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (p->mAttribute_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorLocation.objectCompare (p->mAttribute_mErrorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSize.objectCompare (p->mAttribute_mSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_testArrayIndexIR::objectCompare (const GALGAS_testArrayIndexIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testArrayIndexIR::GALGAS_testArrayIndexIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testArrayIndexIR::GALGAS_testArrayIndexIR (const cPtr_testArrayIndexIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testArrayIndexIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR::constructor_new (const GALGAS_objectIR & inAttribute_mIndex,
                                                                  const GALGAS_location & inAttribute_mErrorLocation,
                                                                  const GALGAS_bigint & inAttribute_mSize
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR result ;
  if (inAttribute_mIndex.isValid () && inAttribute_mErrorLocation.isValid () && inAttribute_mSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_testArrayIndexIR (inAttribute_mIndex, inAttribute_mErrorLocation, inAttribute_mSize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_testArrayIndexIR::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_testArrayIndexIR * p = (const cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_testArrayIndexIR::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_testArrayIndexIR::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_testArrayIndexIR * p = (const cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    result = p->mAttribute_mErrorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_testArrayIndexIR::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_testArrayIndexIR::getter_mSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_testArrayIndexIR * p = (const cPtr_testArrayIndexIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testArrayIndexIR) ;
    result = p->mAttribute_mSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_testArrayIndexIR::getter_mSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @testArrayIndexIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_testArrayIndexIR::cPtr_testArrayIndexIR (const GALGAS_objectIR & in_mIndex,
                                              const GALGAS_location & in_mErrorLocation,
                                              const GALGAS_bigint & in_mSize
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mIndex (in_mIndex),
mAttribute_mErrorLocation (in_mErrorLocation),
mAttribute_mSize (in_mSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_testArrayIndexIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

void cPtr_testArrayIndexIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@testArrayIndexIR:" ;
  mAttribute_mIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_testArrayIndexIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_testArrayIndexIR (mAttribute_mIndex, mAttribute_mErrorLocation, mAttribute_mSize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @testArrayIndexIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_testArrayIndexIR ("testArrayIndexIR",
                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_testArrayIndexIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testArrayIndexIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_testArrayIndexIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testArrayIndexIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_testArrayIndexIR GALGAS_testArrayIndexIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_testArrayIndexIR result ;
  const GALGAS_testArrayIndexIR * p = (const GALGAS_testArrayIndexIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_testArrayIndexIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testArrayIndexIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_truncIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_truncIR * p = (const cPtr_truncIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResult.objectCompare (p->mAttribute_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSource.objectCompare (p->mAttribute_mSource) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_truncIR::objectCompare (const GALGAS_truncIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncIR::GALGAS_truncIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncIR::GALGAS_truncIR (const cPtr_truncIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncIR GALGAS_truncIR::constructor_new (const GALGAS_objectIR & inAttribute_mResult,
                                                const GALGAS_objectIR & inAttribute_mSource
                                                COMMA_LOCATION_ARGS) {
  GALGAS_truncIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mSource.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncIR (inAttribute_mResult, inAttribute_mSource COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_truncIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncIR * p = (const cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    result = p->mAttribute_mResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_truncIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_truncIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncIR * p = (const cPtr_truncIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncIR) ;
    result = p->mAttribute_mSource ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_truncIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSource ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @truncIR class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_truncIR::cPtr_truncIR (const GALGAS_objectIR & in_mResult,
                            const GALGAS_objectIR & in_mSource
                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mResult (in_mResult),
mAttribute_mSource (in_mSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_truncIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR ;
}

void cPtr_truncIR::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@truncIR:" ;
  mAttribute_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSource.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_truncIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_truncIR (mAttribute_mResult, mAttribute_mSource COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @truncIR type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncIR ("truncIR",
                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_truncIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_truncIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncIR GALGAS_truncIR::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_truncIR result ;
  const GALGAS_truncIR * p = (const GALGAS_truncIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_truncIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_truncateInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTarget.objectCompare (p->mAttribute_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_truncateInstructionIR::objectCompare (const GALGAS_truncateInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateInstructionIR::GALGAS_truncateInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateInstructionIR::GALGAS_truncateInstructionIR (const cPtr_truncateInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                            const GALGAS_objectIR & inAttribute_mOperand
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_truncateInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncateInstructionIR (inAttribute_mTarget, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_truncateInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_truncateInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_truncateInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_truncateInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @truncateInstructionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_truncateInstructionIR::cPtr_truncateInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                        const GALGAS_objectIR & in_mOperand
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mOperand (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_truncateInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR ;
}

void cPtr_truncateInstructionIR::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@truncateInstructionIR:" ;
  mAttribute_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_truncateInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_truncateInstructionIR (mAttribute_mTarget, mAttribute_mOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @truncateInstructionIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncateInstructionIR ("truncateInstructionIR",
                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_truncateInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_truncateInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_truncateInstructionIR result ;
  const GALGAS_truncateInstructionIR * p = (const GALGAS_truncateInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_truncateInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_upperBoundCheckIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSource.objectCompare (p->mAttribute_mSource) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUpperBoundPlusOne.objectCompare (p->mAttribute_mUpperBoundPlusOne) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPanicCode.objectCompare (p->mAttribute_mPanicCode) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_upperBoundCheckIR::objectCompare (const GALGAS_upperBoundCheckIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_upperBoundCheckIR::GALGAS_upperBoundCheckIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_upperBoundCheckIR::GALGAS_upperBoundCheckIR (const cPtr_upperBoundCheckIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_upperBoundCheckIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_upperBoundCheckIR GALGAS_upperBoundCheckIR::constructor_new (const GALGAS_objectIR & inAttribute_mSource,
                                                                    const GALGAS_bigint & inAttribute_mUpperBoundPlusOne,
                                                                    const GALGAS_uint & inAttribute_mPanicCode,
                                                                    const GALGAS_location & inAttribute_mLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_upperBoundCheckIR result ;
  if (inAttribute_mSource.isValid () && inAttribute_mUpperBoundPlusOne.isValid () && inAttribute_mPanicCode.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_upperBoundCheckIR (inAttribute_mSource, inAttribute_mUpperBoundPlusOne, inAttribute_mPanicCode, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_upperBoundCheckIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
    result = p->mAttribute_mSource ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_upperBoundCheckIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSource ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_upperBoundCheckIR::getter_mUpperBoundPlusOne (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
    result = p->mAttribute_mUpperBoundPlusOne ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_upperBoundCheckIR::getter_mUpperBoundPlusOne (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUpperBoundPlusOne ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_upperBoundCheckIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
    result = p->mAttribute_mPanicCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_upperBoundCheckIR::getter_mPanicCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_upperBoundCheckIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_upperBoundCheckIR * p = (const cPtr_upperBoundCheckIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_upperBoundCheckIR) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_upperBoundCheckIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @upperBoundCheckIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_upperBoundCheckIR::cPtr_upperBoundCheckIR (const GALGAS_objectIR & in_mSource,
                                                const GALGAS_bigint & in_mUpperBoundPlusOne,
                                                const GALGAS_uint & in_mPanicCode,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mSource (in_mSource),
mAttribute_mUpperBoundPlusOne (in_mUpperBoundPlusOne),
mAttribute_mPanicCode (in_mPanicCode),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_upperBoundCheckIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_upperBoundCheckIR ;
}

void cPtr_upperBoundCheckIR::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@upperBoundCheckIR:" ;
  mAttribute_mSource.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUpperBoundPlusOne.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPanicCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_upperBoundCheckIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_upperBoundCheckIR (mAttribute_mSource, mAttribute_mUpperBoundPlusOne, mAttribute_mPanicCode, mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @upperBoundCheckIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_upperBoundCheckIR ("upperBoundCheckIR",
                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_upperBoundCheckIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_upperBoundCheckIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_upperBoundCheckIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_upperBoundCheckIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_upperBoundCheckIR GALGAS_upperBoundCheckIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_upperBoundCheckIR result ;
  const GALGAS_upperBoundCheckIR * p = (const GALGAS_upperBoundCheckIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_upperBoundCheckIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("upperBoundCheckIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_whileInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_whileInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLabelIndex.objectCompare (p->mAttribute_mLabelIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTestInstructionGenerationList.objectCompare (p->mAttribute_mTestInstructionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTestExpression.objectCompare (p->mAttribute_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionGenerationList.objectCompare (p->mAttribute_mInstructionGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_whileInstructionIR::objectCompare (const GALGAS_whileInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionIR::GALGAS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::constructor_new (const GALGAS_uint & inAttribute_mLabelIndex,
                                                                      const GALGAS_instructionListIR & inAttribute_mTestInstructionGenerationList,
                                                                      const GALGAS_objectIR & inAttribute_mTestExpression,
                                                                      const GALGAS_instructionListIR & inAttribute_mInstructionGenerationList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR result ;
  if (inAttribute_mLabelIndex.isValid () && inAttribute_mTestInstructionGenerationList.isValid () && inAttribute_mTestExpression.isValid () && inAttribute_mInstructionGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_whileInstructionIR (inAttribute_mLabelIndex, inAttribute_mTestInstructionGenerationList, inAttribute_mTestExpression, inAttribute_mInstructionGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_whileInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mAttribute_mLabelIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_whileInstructionIR::getter_mLabelIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_whileInstructionIR::getter_mTestInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mAttribute_mTestInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_whileInstructionIR::getter_mTestInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_whileInstructionIR::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mAttribute_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_whileInstructionIR::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_whileInstructionIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mAttribute_mInstructionGenerationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_whileInstructionIR::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @whileInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_whileInstructionIR::cPtr_whileInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                                  const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                                  const GALGAS_objectIR & in_mTestExpression,
                                                  const GALGAS_instructionListIR & in_mInstructionGenerationList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mLabelIndex (in_mLabelIndex),
mAttribute_mTestInstructionGenerationList (in_mTestInstructionGenerationList),
mAttribute_mTestExpression (in_mTestExpression),
mAttribute_mInstructionGenerationList (in_mInstructionGenerationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_whileInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

void cPtr_whileInstructionIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@whileInstructionIR:" ;
  mAttribute_mLabelIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTestInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_whileInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_whileInstructionIR (mAttribute_mLabelIndex, mAttribute_mTestInstructionGenerationList, mAttribute_mTestExpression, mAttribute_mInstructionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @whileInstructionIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_whileInstructionIR ("whileInstructionIR",
                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_whileInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_whileInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionIR GALGAS_whileInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionIR result ;
  const GALGAS_whileInstructionIR * p = (const GALGAS_whileInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_whileInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractTypeIR::objectCompare (const GALGAS_abstractTypeIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractTypeIR::GALGAS_abstractTypeIR (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractTypeIR::GALGAS_abstractTypeIR (const cPtr_abstractTypeIR * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractTypeIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @abstractTypeIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractTypeIR::cPtr_abstractTypeIR (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @abstractTypeIR type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractTypeIR ("abstractTypeIR",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractTypeIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractTypeIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractTypeIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractTypeIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractTypeIR GALGAS_abstractTypeIR::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractTypeIR result ;
  const GALGAS_abstractTypeIR * p = (const GALGAS_abstractTypeIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractTypeIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractTypeIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalStringTypeIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringTypeIR * p = (const cPtr_literalStringTypeIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringTypeIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralStringTypeName.objectCompare (p->mAttribute_mLiteralStringTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalStringTypeIR::objectCompare (const GALGAS_literalStringTypeIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringTypeIR::GALGAS_literalStringTypeIR (void) :
GALGAS_abstractTypeIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringTypeIR GALGAS_literalStringTypeIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringTypeIR::constructor_new (GALGAS_string::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringTypeIR::GALGAS_literalStringTypeIR (const cPtr_literalStringTypeIR * inSourcePtr) :
GALGAS_abstractTypeIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringTypeIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringTypeIR GALGAS_literalStringTypeIR::constructor_new (const GALGAS_string & inAttribute_mLiteralStringTypeName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringTypeIR result ;
  if (inAttribute_mLiteralStringTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringTypeIR (inAttribute_mLiteralStringTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_literalStringTypeIR::getter_mLiteralStringTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringTypeIR * p = (const cPtr_literalStringTypeIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringTypeIR) ;
    result = p->mAttribute_mLiteralStringTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_literalStringTypeIR::getter_mLiteralStringTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralStringTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @literalStringTypeIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalStringTypeIR::cPtr_literalStringTypeIR (const GALGAS_string & in_mLiteralStringTypeName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractTypeIR (THERE),
mAttribute_mLiteralStringTypeName (in_mLiteralStringTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalStringTypeIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringTypeIR ;
}

void cPtr_literalStringTypeIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@literalStringTypeIR:" ;
  mAttribute_mLiteralStringTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalStringTypeIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringTypeIR (mAttribute_mLiteralStringTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @literalStringTypeIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringTypeIR ("literalStringTypeIR",
                                            & kTypeDescriptor_GALGAS_abstractTypeIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalStringTypeIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringTypeIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalStringTypeIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringTypeIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringTypeIR GALGAS_literalStringTypeIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalStringTypeIR result ;
  const GALGAS_literalStringTypeIR * p = (const GALGAS_literalStringTypeIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringTypeIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringTypeIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_expressionAST::objectCompare (const GALGAS_expressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST::GALGAS_expressionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST::GALGAS_expressionAST (const cPtr_expressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @expressionAST class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_expressionAST::cPtr_expressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @expressionAST type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionAST ("expressionAST",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_expressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_expressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_expressionAST::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionAST result ;
  const GALGAS_expressionAST * p = (const GALGAS_expressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractFunctionCallInExpressionAST::objectCompare (const GALGAS_abstractFunctionCallInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFunctionCallInExpressionAST::GALGAS_abstractFunctionCallInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFunctionCallInExpressionAST::GALGAS_abstractFunctionCallInExpressionAST (const cPtr_abstractFunctionCallInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFunctionCallInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_abstractFunctionCallInExpressionAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractFunctionCallInExpressionAST * p = (const cPtr_abstractFunctionCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractFunctionCallInExpressionAST) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_abstractFunctionCallInExpressionAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST GALGAS_abstractFunctionCallInExpressionAST::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractFunctionCallInExpressionAST * p = (const cPtr_abstractFunctionCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractFunctionCallInExpressionAST) ;
    result = p->mAttribute_mEffectiveParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST cPtr_abstractFunctionCallInExpressionAST::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @abstractFunctionCallInExpressionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractFunctionCallInExpressionAST::cPtr_abstractFunctionCallInExpressionAST (const GALGAS_lstring & in_mFunctionName,
                                                                                    const GALGAS_effectiveParameterListAST & in_mEffectiveParameterList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mEffectiveParameterList (in_mEffectiveParameterList) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @abstractFunctionCallInExpressionAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractFunctionCallInExpressionAST ("abstractFunctionCallInExpressionAST",
                                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractFunctionCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFunctionCallInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractFunctionCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractFunctionCallInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFunctionCallInExpressionAST GALGAS_abstractFunctionCallInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractFunctionCallInExpressionAST result ;
  const GALGAS_abstractFunctionCallInExpressionAST * p = (const GALGAS_abstractFunctionCallInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractFunctionCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFunctionCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionCallInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionCallInExpressionAST * p = (const cPtr_functionCallInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionCallInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEffectiveParameterList.objectCompare (p->mAttribute_mEffectiveParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverName.objectCompare (p->mAttribute_mReceiverName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionCallInExpressionAST::objectCompare (const GALGAS_functionCallInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallInExpressionAST::GALGAS_functionCallInExpressionAST (void) :
GALGAS_abstractFunctionCallInExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallInExpressionAST GALGAS_functionCallInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionCallInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_effectiveParameterListAST::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallInExpressionAST::GALGAS_functionCallInExpressionAST (const cPtr_functionCallInExpressionAST * inSourcePtr) :
GALGAS_abstractFunctionCallInExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallInExpressionAST GALGAS_functionCallInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                        const GALGAS_effectiveParameterListAST & inAttribute_mEffectiveParameterList,
                                                                                        const GALGAS_lstring & inAttribute_mReceiverName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionCallInExpressionAST result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mEffectiveParameterList.isValid () && inAttribute_mReceiverName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionCallInExpressionAST (inAttribute_mFunctionName, inAttribute_mEffectiveParameterList, inAttribute_mReceiverName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallInExpressionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionCallInExpressionAST * p = (const cPtr_functionCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallInExpressionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_functionCallInExpressionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @functionCallInExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionCallInExpressionAST::cPtr_functionCallInExpressionAST (const GALGAS_lstring & in_mFunctionName,
                                                                    const GALGAS_effectiveParameterListAST & in_mEffectiveParameterList,
                                                                    const GALGAS_lstring & in_mReceiverName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFunctionCallInExpressionAST (in_mFunctionName, in_mEffectiveParameterList COMMA_THERE),
mAttribute_mReceiverName (in_mReceiverName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionCallInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallInExpressionAST ;
}

void cPtr_functionCallInExpressionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@functionCallInExpressionAST:" ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionCallInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionCallInExpressionAST (mAttribute_mFunctionName, mAttribute_mEffectiveParameterList, mAttribute_mReceiverName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @functionCallInExpressionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallInExpressionAST ("functionCallInExpressionAST",
                                                    & kTypeDescriptor_GALGAS_abstractFunctionCallInExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallInExpressionAST GALGAS_functionCallInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionCallInExpressionAST result ;
  const GALGAS_functionCallInExpressionAST * p = (const GALGAS_functionCallInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_booleanShortCircuitAndOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_booleanShortCircuitAndOperatorExpressionAST::objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionAST::GALGAS_booleanShortCircuitAndOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionAST::GALGAS_booleanShortCircuitAndOperatorExpressionAST (const cPtr_booleanShortCircuitAndOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mLeftExpression,
                                                                                                                        const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                                        const GALGAS_expressionAST & inAttribute_mRightExpression
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanShortCircuitAndOperatorExpressionAST (inAttribute_mLeftExpression, inAttribute_mOperatorLocation, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_booleanShortCircuitAndOperatorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_booleanShortCircuitAndOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_booleanShortCircuitAndOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanShortCircuitAndOperatorExpressionAST * p = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_booleanShortCircuitAndOperatorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @booleanShortCircuitAndOperatorExpressionAST class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_booleanShortCircuitAndOperatorExpressionAST::cPtr_booleanShortCircuitAndOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                                                                    const GALGAS_location & in_mOperatorLocation,
                                                                                                    const GALGAS_expressionAST & in_mRightExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_booleanShortCircuitAndOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

void cPtr_booleanShortCircuitAndOperatorExpressionAST::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@booleanShortCircuitAndOperatorExpressionAST:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_booleanShortCircuitAndOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanShortCircuitAndOperatorExpressionAST (mAttribute_mLeftExpression, mAttribute_mOperatorLocation, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @booleanShortCircuitAndOperatorExpressionAST type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ("booleanShortCircuitAndOperatorExpressionAST",
                                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_booleanShortCircuitAndOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_booleanShortCircuitAndOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanShortCircuitAndOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanShortCircuitAndOperatorExpressionAST GALGAS_booleanShortCircuitAndOperatorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_booleanShortCircuitAndOperatorExpressionAST result ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST * p = (const GALGAS_booleanShortCircuitAndOperatorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanShortCircuitAndOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanShortCircuitAndOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_constructorCall::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_constructorCall * p = (const cPtr_constructorCall *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_constructorCall) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (p->mAttribute_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mErrorLocation.objectCompare (p->mAttribute_mErrorLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_constructorCall::objectCompare (const GALGAS_constructorCall & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCall::GALGAS_constructorCall (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCall GALGAS_constructorCall::constructor_default (LOCATION_ARGS) {
  return GALGAS_constructorCall::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_functionCallEffectiveParameterList::constructor_emptyList (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCall::GALGAS_constructorCall (const cPtr_constructorCall * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCall GALGAS_constructorCall::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                const GALGAS_functionCallEffectiveParameterList & inAttribute_mParameterList,
                                                                const GALGAS_location & inAttribute_mErrorLocation
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constructorCall result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mErrorLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constructorCall (inAttribute_mTypeName, inAttribute_mParameterList, inAttribute_mErrorLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorCall::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCall * p = (const cPtr_constructorCall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCall) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_constructorCall::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList GALGAS_constructorCall::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_functionCallEffectiveParameterList result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCall * p = (const cPtr_constructorCall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCall) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList cPtr_constructorCall::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_constructorCall::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCall * p = (const cPtr_constructorCall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCall) ;
    result = p->mAttribute_mErrorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_constructorCall::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @constructorCall class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_constructorCall::cPtr_constructorCall (const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_functionCallEffectiveParameterList & in_mParameterList,
                                            const GALGAS_location & in_mErrorLocation
                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mParameterList (in_mParameterList),
mAttribute_mErrorLocation (in_mErrorLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_constructorCall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCall ;
}

void cPtr_constructorCall::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@constructorCall:" ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_constructorCall::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constructorCall (mAttribute_mTypeName, mAttribute_mParameterList, mAttribute_mErrorLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @constructorCall type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorCall ("constructorCall",
                                        & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorCall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCall ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorCall::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorCall (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCall GALGAS_constructorCall::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_constructorCall result ;
  const GALGAS_constructorCall * p = (const GALGAS_constructorCall *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorCall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorCall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_convertExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_convertExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfExpression.objectCompare (p->mAttribute_mEndOfExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_convertExpressionAST::objectCompare (const GALGAS_convertExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                          const GALGAS_location & inAttribute_mEndOfExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_convertExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_convertExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_convertExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_convertExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_convertExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_convertExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mAttribute_mEndOfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_convertExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @convertExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_convertExpressionAST::cPtr_convertExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_location & in_mEndOfExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mEndOfExpression (in_mEndOfExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_convertExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

void cPtr_convertExpressionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@convertExpressionAST:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_convertExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_convertExpressionAST (mAttribute_mExpression, mAttribute_mTypeName, mAttribute_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @convertExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertExpressionAST ("convertExpressionAST",
                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_convertExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_convertExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST result ;
  const GALGAS_convertExpressionAST * p = (const GALGAS_convertExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_convertExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extendExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extendExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfExpression.objectCompare (p->mAttribute_mEndOfExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extendExpressionAST::objectCompare (const GALGAS_extendExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                        const GALGAS_location & inAttribute_mEndOfExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extendExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_extendExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_extendExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extendExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extendExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_extendExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mAttribute_mEndOfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_extendExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @extendExpressionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extendExpressionAST::cPtr_extendExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                    const GALGAS_lstring & in_mTypeName,
                                                    const GALGAS_location & in_mEndOfExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mEndOfExpression (in_mEndOfExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extendExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

void cPtr_extendExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@extendExpressionAST:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extendExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extendExpressionAST (mAttribute_mExpression, mAttribute_mTypeName, mAttribute_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @extendExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendExpressionAST ("extendExpressionAST",
                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extendExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extendExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST result ;
  const GALGAS_extendExpressionAST * p = (const GALGAS_extendExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ifExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIfExpression.objectCompare (p->mAttribute_mIfExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIfExpressionEndLocation.objectCompare (p->mAttribute_mIfExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenExpression.objectCompare (p->mAttribute_mThenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenExpressionEndLocation.objectCompare (p->mAttribute_mThenExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseExpression.objectCompare (p->mAttribute_mElseExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseExpressionEndLocation.objectCompare (p->mAttribute_mElseExpressionEndLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ifExpressionAST::objectCompare (const GALGAS_ifExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mIfExpression,
                                                                const GALGAS_location & inAttribute_mIfExpressionEndLocation,
                                                                const GALGAS_expressionAST & inAttribute_mThenExpression,
                                                                const GALGAS_location & inAttribute_mThenExpressionEndLocation,
                                                                const GALGAS_expressionAST & inAttribute_mElseExpression,
                                                                const GALGAS_location & inAttribute_mElseExpressionEndLocation
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  if (inAttribute_mIfExpression.isValid () && inAttribute_mIfExpressionEndLocation.isValid () && inAttribute_mThenExpression.isValid () && inAttribute_mThenExpressionEndLocation.isValid () && inAttribute_mElseExpression.isValid () && inAttribute_mElseExpressionEndLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifExpressionAST (inAttribute_mIfExpression, inAttribute_mIfExpressionEndLocation, inAttribute_mThenExpression, inAttribute_mThenExpressionEndLocation, inAttribute_mElseExpression, inAttribute_mElseExpressionEndLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_ifExpressionAST::getter_mIfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mAttribute_mIfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifExpressionAST::getter_mIfExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifExpressionAST::getter_mIfExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mAttribute_mIfExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifExpressionAST::getter_mIfExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIfExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_ifExpressionAST::getter_mThenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mAttribute_mThenExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifExpressionAST::getter_mThenExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifExpressionAST::getter_mThenExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mAttribute_mThenExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifExpressionAST::getter_mThenExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_ifExpressionAST::getter_mElseExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mAttribute_mElseExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifExpressionAST::getter_mElseExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifExpressionAST::getter_mElseExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    result = p->mAttribute_mElseExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifExpressionAST::getter_mElseExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @ifExpressionAST class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifExpressionAST::cPtr_ifExpressionAST (const GALGAS_expressionAST & in_mIfExpression,
                                            const GALGAS_location & in_mIfExpressionEndLocation,
                                            const GALGAS_expressionAST & in_mThenExpression,
                                            const GALGAS_location & in_mThenExpressionEndLocation,
                                            const GALGAS_expressionAST & in_mElseExpression,
                                            const GALGAS_location & in_mElseExpressionEndLocation
                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mIfExpression (in_mIfExpression),
mAttribute_mIfExpressionEndLocation (in_mIfExpressionEndLocation),
mAttribute_mThenExpression (in_mThenExpression),
mAttribute_mThenExpressionEndLocation (in_mThenExpressionEndLocation),
mAttribute_mElseExpression (in_mElseExpression),
mAttribute_mElseExpressionEndLocation (in_mElseExpressionEndLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

void cPtr_ifExpressionAST::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@ifExpressionAST:" ;
  mAttribute_mIfExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIfExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifExpressionAST (mAttribute_mIfExpression, mAttribute_mIfExpressionEndLocation, mAttribute_mThenExpression, mAttribute_mThenExpressionEndLocation, mAttribute_mElseExpression, mAttribute_mElseExpressionEndLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @ifExpressionAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionAST ("ifExpressionAST",
                                        & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ifExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ifExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  const GALGAS_ifExpressionAST * p = (const GALGAS_ifExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_infixOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOp.objectCompare (p->mAttribute_mOp) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_infixOperatorExpressionAST::objectCompare (const GALGAS_infixOperatorExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionAST::GALGAS_infixOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionAST::GALGAS_infixOperatorExpressionAST (const cPtr_infixOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionAST GALGAS_infixOperatorExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_infixOperator & inAttribute_mOp,
                                                                                      const GALGAS_expressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorExpressionAST result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mOperatorLocation.isValid () && inAttribute_mOp.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_infixOperatorExpressionAST (inAttribute_mLeftExpression, inAttribute_mOperatorLocation, inAttribute_mOp, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_infixOperatorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_infixOperatorExpressionAST::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_infixOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_infixOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperatorExpressionAST::getter_mOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_infixOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
    result = p->mAttribute_mOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator cPtr_infixOperatorExpressionAST::getter_mOp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_infixOperatorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixOperatorExpressionAST * p = (const cPtr_infixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorExpressionAST) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_infixOperatorExpressionAST::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @infixOperatorExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixOperatorExpressionAST::cPtr_infixOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                                  const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_infixOperator & in_mOp,
                                                                  const GALGAS_expressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mOp (in_mOp),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_infixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorExpressionAST ;
}

void cPtr_infixOperatorExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@infixOperatorExpressionAST:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_infixOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_infixOperatorExpressionAST (mAttribute_mLeftExpression, mAttribute_mOperatorLocation, mAttribute_mOp, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @infixOperatorExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorExpressionAST ("infixOperatorExpressionAST",
                                                   & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorExpressionAST GALGAS_infixOperatorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorExpressionAST result ;
  const GALGAS_infixOperatorExpressionAST * p = (const GALGAS_infixOperatorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalBooleanInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalBooleanInExpressionAST * p = (const cPtr_literalBooleanInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalBooleanInExpressionAST::objectCompare (const GALGAS_literalBooleanInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionAST::GALGAS_literalBooleanInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalBooleanInExpressionAST::constructor_new (GALGAS_bool::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionAST::GALGAS_literalBooleanInExpressionAST (const cPtr_literalBooleanInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBooleanInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::constructor_new (const GALGAS_bool & inAttribute_mValue
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalBooleanInExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalBooleanInExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalBooleanInExpressionAST * p = (const cPtr_literalBooleanInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBooleanInExpressionAST) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_literalBooleanInExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @literalBooleanInExpressionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalBooleanInExpressionAST::cPtr_literalBooleanInExpressionAST (const GALGAS_bool & in_mValue
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalBooleanInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

void cPtr_literalBooleanInExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@literalBooleanInExpressionAST:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalBooleanInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalBooleanInExpressionAST (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalBooleanInExpressionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ("literalBooleanInExpressionAST",
                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalBooleanInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalBooleanInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBooleanInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalBooleanInExpressionAST GALGAS_literalBooleanInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalBooleanInExpressionAST result ;
  const GALGAS_literalBooleanInExpressionAST * p = (const GALGAS_literalBooleanInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalBooleanInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBooleanInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalIntegerInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalIntegerInExpressionAST * p = (const cPtr_literalIntegerInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralInteger.objectCompare (p->mAttribute_mLiteralInteger) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalIntegerInExpressionAST::objectCompare (const GALGAS_literalIntegerInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntegerInExpressionAST::constructor_new (GALGAS_lbigint::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (const cPtr_literalIntegerInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::constructor_new (const GALGAS_lbigint & inAttribute_mLiteralInteger
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST result ;
  if (inAttribute_mLiteralInteger.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalIntegerInExpressionAST (inAttribute_mLiteralInteger COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_literalIntegerInExpressionAST::getter_mLiteralInteger (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalIntegerInExpressionAST * p = (const cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    result = p->mAttribute_mLiteralInteger ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cPtr_literalIntegerInExpressionAST::getter_mLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralInteger ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @literalIntegerInExpressionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (const GALGAS_lbigint & in_mLiteralInteger
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mLiteralInteger (in_mLiteralInteger) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalIntegerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

void cPtr_literalIntegerInExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@literalIntegerInExpressionAST:" ;
  mAttribute_mLiteralInteger.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalIntegerInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntegerInExpressionAST (mAttribute_mLiteralInteger COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalIntegerInExpressionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ("literalIntegerInExpressionAST",
                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalIntegerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalIntegerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST result ;
  const GALGAS_literalIntegerInExpressionAST * p = (const GALGAS_literalIntegerInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntegerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalStringInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringInExpressionAST * p = (const cPtr_literalStringInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralString.objectCompare (p->mAttribute_mLiteralString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalStringInExpressionAST::objectCompare (const GALGAS_literalStringInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (const cPtr_literalStringInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLiteralString
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST result ;
  if (inAttribute_mLiteralString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringInExpressionAST (inAttribute_mLiteralString COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_literalStringInExpressionAST::getter_mLiteralString (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringInExpressionAST * p = (const cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    result = p->mAttribute_mLiteralString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_literalStringInExpressionAST::getter_mLiteralString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @literalStringInExpressionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (const GALGAS_lstring & in_mLiteralString
                                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mLiteralString (in_mLiteralString) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalStringInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

void cPtr_literalStringInExpressionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@literalStringInExpressionAST:" ;
  mAttribute_mLiteralString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalStringInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringInExpressionAST (mAttribute_mLiteralString COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalStringInExpressionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringInExpressionAST ("literalStringInExpressionAST",
                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalStringInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalStringInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST result ;
  const GALGAS_literalStringInExpressionAST * p = (const GALGAS_literalStringInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_prefixOperatorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOp.objectCompare (p->mAttribute_mOp) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_prefixOperatorExpressionAST::objectCompare (const GALGAS_prefixOperatorExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionAST::GALGAS_prefixOperatorExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionAST::GALGAS_prefixOperatorExpressionAST (const cPtr_prefixOperatorExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionAST GALGAS_prefixOperatorExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                        const GALGAS_prefixOperator & inAttribute_mOp,
                                                                                        const GALGAS_expressionAST & inAttribute_mExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mOp.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefixOperatorExpressionAST (inAttribute_mOperatorLocation, inAttribute_mOp, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_prefixOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_prefixOperatorExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperatorExpressionAST::getter_mOp (UNUSED_LOCATION_ARGS) const {
  GALGAS_prefixOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    result = p->mAttribute_mOp ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator cPtr_prefixOperatorExpressionAST::getter_mOp (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOp ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_prefixOperatorExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionAST * p = (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_prefixOperatorExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @prefixOperatorExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_prefixOperatorExpressionAST::cPtr_prefixOperatorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                    const GALGAS_prefixOperator & in_mOp,
                                                                    const GALGAS_expressionAST & in_mExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mOp (in_mOp),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_prefixOperatorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

void cPtr_prefixOperatorExpressionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@prefixOperatorExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOp.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_prefixOperatorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefixOperatorExpressionAST (mAttribute_mOperatorLocation, mAttribute_mOp, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @prefixOperatorExpressionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ("prefixOperatorExpressionAST",
                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionAST GALGAS_prefixOperatorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionAST result ;
  const GALGAS_prefixOperatorExpressionAST * p = (const GALGAS_prefixOperatorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

