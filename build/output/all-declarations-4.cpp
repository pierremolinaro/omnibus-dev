#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateTarget'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTarget (const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_string constinArgument_inProductDirectory,
                             const GALGAS_lstring constinArgument_inTargetName,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, GALGAS_string ("makefile.py"), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/makefile.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 66)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, GALGAS_string ("plm.py"), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/plm.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 72)) ;
  }
  {
  routine_copyTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 80)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources/linker.ld"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 78)) ;
  }
  GALGAS_string var_opt_5F_optimizationOption = GALGAS_string ("disable-opt") ;
  GALGAS_string var_llc_5F_optimizationOption = GALGAS_string ("O0") ;
  GALGAS_uint var_optimizationOptionCount = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_optimization_31_.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_opt_5F_optimizationOption = GALGAS_string ("O1") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O1") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 90)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_optimization_32_.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_opt_5F_optimizationOption = GALGAS_string ("O2") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O2") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 95)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_optimizationS.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_opt_5F_optimizationOption = GALGAS_string ("Os") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O2") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 100)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_optimizationZ.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_3) {
    var_opt_5F_optimizationOption = GALGAS_string ("Oz") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O2") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 105)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_optimizationZ_33_.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_opt_5F_optimizationOption = GALGAS_string ("O3") ;
    var_llc_5F_optimizationOption = GALGAS_string ("O3") ;
    var_optimizationOptionCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 110)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_optimizationOptionCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("target-generation.galgas", 113)), GALGAS_string ("several optimization options: --").add_operation (var_opt_5F_optimizationOption, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 113)).add_operation (GALGAS_string (" is used"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 113))  COMMA_SOURCE_FILE ("target-generation.galgas", 113)) ;
  }
  {
  GALGAS__32_stringlist temp_6 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("target-generation.galgas", 119)) ;
  temp_6.addAssign_operation (GALGAS_string ("<<OPT_OPTIMIZATION_OPTION>>"), var_opt_5F_optimizationOption  COMMA_SOURCE_FILE ("target-generation.galgas", 119)) ;
  temp_6.addAssign_operation (GALGAS_string ("<<LLC_OPTIMIZATION_OPTION>>"), var_llc_5F_optimizationOption  COMMA_SOURCE_FILE ("target-generation.galgas", 119)) ;
  routine_copyExecutableFileWithSubstitutions (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 117)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 118)), temp_6, inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 115)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/build-verbose.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 124)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/build-verbose.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 122)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 130)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 128)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/objsize.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 136)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/objsize.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 134)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/objdump.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 142)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/objdump.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 140)) ;
  }
  {
  routine_copyExecutableFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string ("/run.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 148)), constinArgument_inProductDirectory.add_operation (GALGAS_string ("/run.py"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 146)) ;
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
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    GALGAS_string var_s = var_fw.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 162)) ;
    GALGAS_bool joker_5984 ; // Joker input parameter
    var_s.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_5984, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 163)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 165)) ;
    GALGAS_string var_s = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 166)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 166)) ;
    GALGAS_bool joker_6291 ; // Joker input parameter
    var_s.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_6291, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 167)) ;
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
  GALGAS_string var_s ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    var_s = var_fw.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 182)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 184)) ;
    var_s = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 185)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 185)) ;
  }
  cEnumerator__32_stringlist enumerator_7124 (constinArgument_inSubstitutions, kEnumeration_up) ;
  while (enumerator_7124.hasCurrentObject ()) {
    var_s = var_s.getter_stringByReplacingStringByString (enumerator_7124.current_mValue_30_ (HERE), enumerator_7124.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 188)) ;
    enumerator_7124.gotoNextObject () ;
  }
  GALGAS_bool joker_7293 ; // Joker input parameter
  var_s.method_writeToExecutableFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_7293, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 190)) ;
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
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    GALGAS_string var_s = var_fw.getter_textFileContentsAtPath (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 202)) ;
    GALGAS_bool joker_7842 ; // Joker input parameter
    var_s.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_7842, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 203)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 205)) ;
    GALGAS_string var_s = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 206)).add_operation (constinArgument_inSourceFileNamePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 206)) ;
    GALGAS_bool joker_8139 ; // Joker input parameter
    var_s.method_writeToFileWhenDifferentContents (constinArgument_inDestinationAbsoluteFilePath, joker_8139, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 207)) ;
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
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    result_outContents = var_fw.getter_textFileContentsAtPath (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 220)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_targetDefinitionDir = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("target-generation.galgas", 222)) ;
    result_outContents = GALGAS_string::constructor_stringWithContentsOfFile (var_targetDefinitionDir.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 223)).add_operation (constinArgument_inTargetFile, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 223)) ;
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
  GALGAS_ast var_ast = GALGAS_ast::constructor_default (SOURCE_FILE ("program.galgas", 26)) ;
  GALGAS_lstringlist var_importedFileList ;
  GALGAS_location var_endOfSourceFile ;
  var_importedFileList.drop () ;
  var_endOfSourceFile.drop () ;
  cGrammar_plm_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast, var_importedFileList, var_endOfSourceFile  COMMA_SOURCE_FILE ("program.galgas", 27)) ;
  GALGAS_stringset var_importedFileAbsolutePathSet = GALGAS_stringset::constructor_setWithString (constinArgument_inSourceFile.mAttribute_string  COMMA_SOURCE_FILE ("program.galgas", 32)) ;
  GALGAS_string var_currentDirectory = constinArgument_inSourceFile.mAttribute_string.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 33)) ;
  {
  routine_recursiveImportFiles (var_ast, var_currentDirectory, var_importedFileList, var_importedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 34)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_targetNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("program.galgas", 42)) ;
    cEnumerator_lstringlist enumerator_1557 (var_ast.mAttribute_mTargetList, kEnumeration_up) ;
    while (enumerator_1557.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_targetNameSet.getter_hasKey (enumerator_1557.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("program.galgas", 44)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_1557.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("Duplicated target")  COMMA_SOURCE_FILE ("program.galgas", 45)) ;
      }
      var_targetNameSet.addAssign_operation (enumerator_1557.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("program.galgas", 47)) ;
      enumerator_1557.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 51)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_ast.mAttribute_mTargetList.getter_length (SOURCE_FILE ("program.galgas", 52)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticWarning (var_endOfSourceFile, GALGAS_string ("no target: only syntax analysis is performed")  COMMA_SOURCE_FILE ("program.galgas", 53)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_ast.mAttribute_mTargetList.getter_length (SOURCE_FILE ("program.galgas", 54)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        inCompiler->emitSemanticWarning (var_endOfSourceFile, var_ast.mAttribute_mTargetList.getter_length (SOURCE_FILE ("program.galgas", 55)).getter_string (SOURCE_FILE ("program.galgas", 55)).add_operation (GALGAS_string (" targets: only syntax analysis is performed"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 55))  COMMA_SOURCE_FILE ("program.galgas", 55)) ;
      }else if (kBoolFalse == test_5) {
        cEnumerator_lstringlist enumerator_2129 (var_ast.mAttribute_mTargetList, kEnumeration_up) ;
        while (enumerator_2129.hasCurrentObject ()) {
          {
          routine_compileProject (constinArgument_inSourceFile, var_ast, enumerator_2129.current_mValue (HERE), var_endOfSourceFile, var_currentDirectory, var_importedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 58)) ;
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
  GALGAS_ast var_ast = constinArgument_inAST ;
  GALGAS_stringset var_sourceFileAbsolutePathSet = constinArgument_inImportedFileAbsolutePathSet ;
  {
  routine_addTargetSpecificFiles (constinArgument_inTargetName, var_ast, constinArgument_inCurrentDirectory, var_sourceFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 84)) ;
  }
  {
  routine_addPredefinedTypes (var_ast.mAttribute_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 91)) ;
  }
  GALGAS_declarationListAST var_orderedDeclarationListAST ;
  {
  routine_buildOrderedDeclarationList (var_ast, constinArgument_inEndOfSourceFile, var_orderedDeclarationListAST, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 93)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 99)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_staticStringMap var_globalLiteralStringMap = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("program.galgas", 100)) ;
    GALGAS_semanticContext var_semanticContext ;
    {
    routine_buildSemanticContext (var_orderedDeclarationListAST, var_ast, var_globalLiteralStringMap, var_semanticContext, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 101)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 108)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_intermediateCodeStruct var_intermediateCodeStruct ;
      {
      routine_semanticAnalysis (constinArgument_inSourceFile.mAttribute_string, var_ast, var_semanticContext, constinArgument_inEndOfSourceFile, var_globalLiteralStringMap, var_intermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 109)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 118)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_codeOptimisation (var_intermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 119)) ;
        }
        {
        routine_codeGeneration (constinArgument_inCurrentDirectory, constinArgument_inSourceFile.mAttribute_string, constinArgument_inEndOfSourceFile, var_intermediateCodeStruct, var_semanticContext.mAttribute_mTypeMap, constinArgument_inTargetName, var_semanticContext.mAttribute_mExceptionCodeType, var_semanticContext.mAttribute_mExceptionLineType, var_sourceFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 120)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'addPredefinedTypes'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addPredefinedTypes (GALGAS_declarationListAST & ioArgument_ioDeclarationList,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationList.addAssign_operation (GALGAS_booleanDeclaration::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 142)).getter_nowhere (SOURCE_FILE ("program.galgas", 142)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("program.galgas", 142))  COMMA_SOURCE_FILE ("program.galgas", 142))  COMMA_SOURCE_FILE ("program.galgas", 142)) ;
  ioArgument_ioDeclarationList.addAssign_operation (GALGAS_literalIntegerDeclaration::constructor_new (SOURCE_FILE ("program.galgas", 144))  COMMA_SOURCE_FILE ("program.galgas", 144)) ;
  ioArgument_ioDeclarationList.addAssign_operation (GALGAS_literalStringDeclaration::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 146)).getter_nowhere (SOURCE_FILE ("program.galgas", 146))  COMMA_SOURCE_FILE ("program.galgas", 146))  COMMA_SOURCE_FILE ("program.galgas", 146)) ;
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
  GALGAS_ast var_ast = GALGAS_ast::constructor_default (SOURCE_FILE ("program.galgas", 157)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_targetDirectory = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 159)) ;
    const enumGalgasBool test_1 = var_targetDirectory.getter_directoryExists (SOURCE_FILE ("program.galgas", 160)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      GALGAS_lstringlist temp_2 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("program.galgas", 164)) ;
      temp_2.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string (".plm-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 164)), constinArgument_inTargetName.mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 164))  COMMA_SOURCE_FILE ("program.galgas", 164)) ;
      routine_recursiveImportFileSystemTargetFiles (var_ast, var_targetDirectory, temp_2, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 161)) ;
      }
    }else if (kBoolFalse == test_1) {
      GALGAS_location location_3 (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("program.galgas", 168)).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()), inCompiler COMMA_SOURCE_FILE ("program.galgas", 168)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 168))  COMMA_SOURCE_FILE ("program.galgas", 168)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_lstringlist temp_4 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("program.galgas", 173)) ;
    temp_4.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inTargetName.mAttribute_string.add_operation (GALGAS_string (".plm-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 173)), constinArgument_inTargetName.mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 173))  COMMA_SOURCE_FILE ("program.galgas", 173)) ;
    routine_recursiveImportEmbeddedTargetFiles (var_ast, temp_4, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 171)) ;
    }
  }
  ioArgument_ioAST.mAttribute_mDeclarationList = var_ast.mAttribute_mDeclarationList.add_operation (ioArgument_ioAST.mAttribute_mDeclarationList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 177)) ;
  ioArgument_ioAST.mAttribute_mGlobalVarDeclarationList = var_ast.mAttribute_mGlobalVarDeclarationList.add_operation (ioArgument_ioAST.mAttribute_mGlobalVarDeclarationList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 178)) ;
  ioArgument_ioAST.mAttribute_mProcedureListAST = var_ast.mAttribute_mProcedureListAST.add_operation (ioArgument_ioAST.mAttribute_mProcedureListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 179)) ;
  ioArgument_ioAST.mAttribute_mRequiredProcList = var_ast.mAttribute_mRequiredProcList.add_operation (ioArgument_ioAST.mAttribute_mRequiredProcList, inCompiler COMMA_SOURCE_FILE ("program.galgas", 180)) ;
  ioArgument_ioAST.mAttribute_mFunctionListAST = var_ast.mAttribute_mFunctionListAST.add_operation (ioArgument_ioAST.mAttribute_mFunctionListAST, inCompiler COMMA_SOURCE_FILE ("program.galgas", 181)) ;
  ioArgument_ioAST.mAttribute_mTargetList.plusAssign_operation(var_ast.mAttribute_mTargetList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 182)) ;
  ioArgument_ioAST.mAttribute_mInitList.plusAssign_operation(var_ast.mAttribute_mInitList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 183)) ;
  ioArgument_ioAST.mAttribute_mBootList.plusAssign_operation(var_ast.mAttribute_mBootList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 184)) ;
  ioArgument_ioAST.mAttribute_mExceptionClauses.plusAssign_operation(var_ast.mAttribute_mExceptionClauses, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 185)) ;
  ioArgument_ioAST.mAttribute_mExceptionTypes = var_ast.mAttribute_mExceptionTypes.add_operation (ioArgument_ioAST.mAttribute_mExceptionTypes, inCompiler COMMA_SOURCE_FILE ("program.galgas", 186)) ;
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
  cEnumerator_lstringlist enumerator_7435 (inArgument_inImportedClauseList, kEnumeration_up) ;
  while (enumerator_7435.hasCurrentObject ()) {
    GALGAS_string var_absolutePath = constinArgument_inTargetDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 198)).add_operation (enumerator_7435.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 198)) ;
    const enumGalgasBool test_0 = var_absolutePath.getter_fileExists (SOURCE_FILE ("program.galgas", 199)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath COMMA_SOURCE_FILE ("program.galgas", 200)).operator_not (SOURCE_FILE ("program.galgas", 200)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath  COMMA_SOURCE_FILE ("program.galgas", 201)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_absolutePath.getter_pathExtension (SOURCE_FILE ("program.galgas", 202)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_lstringlist var_importedFileList ;
          var_importedFileList.drop () ;
          GALGAS_location joker_7895 ; // Joker input parameter
          cGrammar_plm_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath, enumerator_7435.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 203)), ioArgument_ioAST, var_importedFileList, joker_7895  COMMA_SOURCE_FILE ("program.galgas", 203)) ;
          {
          routine_recursiveImportFileSystemTargetFiles (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 207)) ;
          }
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_absolutePath.getter_pathExtension (SOURCE_FILE ("program.galgas", 213)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstringlist var_importedFileList ;
            var_importedFileList.drop () ;
            GALGAS_location joker_8388 ; // Joker input parameter
            cGrammar_plm_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath, enumerator_7435.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 214)), ioArgument_ioAST, var_importedFileList, joker_8388  COMMA_SOURCE_FILE ("program.galgas", 214)) ;
            {
            routine_recursiveImportFileSystemTargetFiles (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 218)) ;
            }
          }else if (kBoolFalse == test_3) {
            GALGAS_location location_4 (enumerator_7435.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_4, GALGAS_string ("invalid extension (should be .plm or .plm-target)")  COMMA_SOURCE_FILE ("program.galgas", 225)) ;
          }
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_5 (enumerator_7435.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("file does not exist in file system target definition")  COMMA_SOURCE_FILE ("program.galgas", 229)) ;
    }
    enumerator_7435.gotoNextObject () ;
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
  cEnumerator_lstringlist enumerator_9189 (inArgument_inImportedClauseList, kEnumeration_up) ;
  while (enumerator_9189.hasCurrentObject ()) {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    const enumGalgasBool test_0 = var_fw.getter_fileExistsAtPath (enumerator_9189.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 243)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_embeddedPath = GALGAS_string (":").add_operation (enumerator_9189.current_mValue (HERE).getter_string (SOURCE_FILE ("program.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 244)) ;
      const enumGalgasBool test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath COMMA_SOURCE_FILE ("program.galgas", 245)).operator_not (SOURCE_FILE ("program.galgas", 245)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath  COMMA_SOURCE_FILE ("program.galgas", 246)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_9189.current_mValue (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("program.galgas", 247)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_lstringlist var_importedFileList ;
          var_importedFileList.drop () ;
          GALGAS_location joker_9693 ; // Joker input parameter
          cGrammar_plm_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw.getter_textFileContentsAtPath (enumerator_9189.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 248)), enumerator_9189.current_mValue (HERE).mAttribute_string, ioArgument_ioAST, var_importedFileList, joker_9693  COMMA_SOURCE_FILE ("program.galgas", 248)) ;
          {
          routine_recursiveImportEmbeddedTargetFiles (ioArgument_ioAST, var_importedFileList, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 252)) ;
          }
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_9189.current_mValue (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("program.galgas", 257)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstringlist var_importedFileList ;
            var_importedFileList.drop () ;
            GALGAS_location joker_10141 ; // Joker input parameter
            cGrammar_plm_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw.getter_textFileContentsAtPath (enumerator_9189.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 258)), enumerator_9189.current_mValue (HERE).mAttribute_string, ioArgument_ioAST, var_importedFileList, joker_10141  COMMA_SOURCE_FILE ("program.galgas", 258)) ;
            {
            routine_recursiveImportEmbeddedTargetFiles (ioArgument_ioAST, var_importedFileList, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 262)) ;
            }
          }else if (kBoolFalse == test_3) {
            GALGAS_location location_4 (enumerator_9189.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_4, GALGAS_string ("invalid extension (should be .plm or .plm-target)")  COMMA_SOURCE_FILE ("program.galgas", 268)) ;
          }
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_5 (enumerator_9189.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("cannot find this file in embedded files")  COMMA_SOURCE_FILE ("program.galgas", 272)) ;
    }
    enumerator_9189.gotoNextObject () ;
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
  cEnumerator_lstringlist enumerator_10913 (inArgument_inImportedClauseList, kEnumeration_up) ;
  while (enumerator_10913.hasCurrentObject ()) {
    GALGAS_string var_absolutePath = enumerator_10913.current_mValue (HERE).mAttribute_string.getter_absolutePathFromPath (inArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 286)) ;
    const enumGalgasBool test_0 = var_absolutePath.getter_fileExists (SOURCE_FILE ("program.galgas", 287)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath COMMA_SOURCE_FILE ("program.galgas", 288)).operator_not (SOURCE_FILE ("program.galgas", 288)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath  COMMA_SOURCE_FILE ("program.galgas", 289)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_absolutePath.getter_pathExtension (SOURCE_FILE ("program.galgas", 290)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_lstringlist var_importedFileList ;
          var_importedFileList.drop () ;
          GALGAS_location joker_11416 ; // Joker input parameter
          cGrammar_plm_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath, enumerator_10913.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 291)), ioArgument_ioAST, var_importedFileList, joker_11416  COMMA_SOURCE_FILE ("program.galgas", 291)) ;
          {
          routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 295)) ;
          }
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_absolutePath.getter_pathExtension (SOURCE_FILE ("program.galgas", 301)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstringlist var_importedFileList ;
            var_importedFileList.drop () ;
            GALGAS_location joker_11895 ; // Joker input parameter
            cGrammar_plm_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath, enumerator_10913.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("program.galgas", 302)), ioArgument_ioAST, var_importedFileList, joker_11895  COMMA_SOURCE_FILE ("program.galgas", 302)) ;
            {
            routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 306)) ;
            }
          }else if (kBoolFalse == test_3) {
            GALGAS_location location_4 (enumerator_10913.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_4, GALGAS_string ("invalid extension (should be .plm or .plm-target)")  COMMA_SOURCE_FILE ("program.galgas", 313)) ;
          }
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      const enumGalgasBool test_5 = var_fw.getter_fileExistsAtPath (enumerator_10913.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 318)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_embeddedPath = GALGAS_string (":").add_operation (enumerator_10913.current_mValue (HERE).getter_string (SOURCE_FILE ("program.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 319)) ;
        const enumGalgasBool test_6 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath COMMA_SOURCE_FILE ("program.galgas", 320)).operator_not (SOURCE_FILE ("program.galgas", 320)).boolEnum () ;
        if (kBoolTrue == test_6) {
          ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath  COMMA_SOURCE_FILE ("program.galgas", 321)) ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_10913.current_mValue (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("program.galgas", 322)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_lstringlist var_importedFileList ;
            var_importedFileList.drop () ;
            GALGAS_location joker_12765 ; // Joker input parameter
            cGrammar_plm_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw.getter_textFileContentsAtPath (enumerator_10913.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 323)), enumerator_10913.current_mValue (HERE).mAttribute_string, ioArgument_ioAST, var_importedFileList, joker_12765  COMMA_SOURCE_FILE ("program.galgas", 323)) ;
            {
            routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 327)) ;
            }
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_10913.current_mValue (HERE).mAttribute_string.getter_pathExtension (SOURCE_FILE ("program.galgas", 333)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_lstringlist var_importedFileList ;
              var_importedFileList.drop () ;
              GALGAS_location joker_13270 ; // Joker input parameter
              cGrammar_plm_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw.getter_textFileContentsAtPath (enumerator_10913.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("program.galgas", 334)), enumerator_10913.current_mValue (HERE).mAttribute_string, ioArgument_ioAST, var_importedFileList, joker_13270  COMMA_SOURCE_FILE ("program.galgas", 334)) ;
              {
              routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 338)) ;
              }
            }else if (kBoolFalse == test_8) {
              GALGAS_location location_9 (enumerator_10913.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_9, GALGAS_string ("invalid extension (should be .plm or .plm-target)")  COMMA_SOURCE_FILE ("program.galgas", 345)) ;
            }
          }
        }
      }else if (kBoolFalse == test_5) {
        GALGAS_location location_10 (enumerator_10913.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_10, GALGAS_string ("cannot find this file in file system and in embedded files")  COMMA_SOURCE_FILE ("program.galgas", 349)) ;
      }
    }
    enumerator_10913.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Filewrapper 'embeddedSampleCode'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- File 'teensy-3-1-it/01-blinkled.plm'

const char * gWrapperFileContent_0_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "  PORTC_PCR5 = PORTC_PCR5::mux (1)\n"
  "  GPIOC_PDDR |= (1 << 5)\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var gDelai $uint32 = 0 {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  gDelai %++\n"
  "  if gDelai == 1_000_000 then\n"
  "    GPIOC_PSOR = 1 << 5 // Allumer la led\n"
  "  elsif gDelai == 2_000_000 then\n"
  "    gDelai = 0\n"
  "    GPIOC_PCOR = 1 << 5 // \xC3""\x89""teindre la led\n"
  "  end  \n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_0_embeddedSampleCode (
  "01-blinkled.plm",
  "plm",
  true, // Text file
  572, // Text length
  gWrapperFileContent_0_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/02-blinkled-systick.plm'

const char * gWrapperFileContent_1_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  waitMS (!250)\n"
  "  ledOn (!LED_TEENSY) // Allumer la led\n"
  "  waitMS (!250)\n"
  "  ledOff (!LED_TEENSY)  // \xC3""\x89""teindre la led\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_1_embeddedSampleCode (
  "02-blinkled-systick.plm",
  "plm",
  true, // Text file
  346, // Text length
  gWrapperFileContent_1_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/03-blinkled-systick-enum.plm'

const char * gWrapperFileContent_2_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "enum $ledState {\n"
  "  case on\n"
  "  case off\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var led = $ledState.on {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  waitMS (!250)\n"
  "  if led == .off then\n"
  "    ledOn (!LED_TEENSY) // Allumer la led\n"
  "    led = .on\n"
  "  else\n"
  "    ledOff (!LED_TEENSY)  // \xC3""\x89""teindre la led\n"
  "    led = .off\n"
  "  end\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_2_embeddedSampleCode (
  "03-blinkled-systick-enum.plm",
  "plm",
  true, // Text file
  589, // Text length
  gWrapperFileContent_2_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/04-blinkled-systick-struct.plm'

const char * gWrapperFileContent_3_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "struct $point {\n"
  "  var x $uint32 = 200\n"
  "  var y $uint32 = 500\n"
  "\n"
  "//  mutating proc setX `user (\?x:inX $uint32) { x = inX }\n"
  "}\n"
  "\n"
  "struct $point3 {\n"
  "  var p $point = $point ()\n"
  "  var z $int32 = 3\n"
  "  \n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var zz $int32 = 0 {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  var p = $point3 ()\n"
  "  waitMS (!p.p.x)\n"
  "  p.p.y = 340\n"
  "  var q = $point ()\n"
  "//  [q setX !x:230]\n"
  "//  zz = zzz.p.x\n"
  "//  zzz.p.x = zz\n"
  "//  zzz = $point3 ()\n"
  "  ledOn (!LED_TEENSY) // Allumer la led\n"
  "  waitMS (!p.p.y)\n"
  "  ledOff (!LED_TEENSY)  // \xC3""\x89""teindre la led\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_3_embeddedSampleCode (
  "04-blinkled-systick-struct.plm",
  "plm",
  true, // Text file
  816, // Text length
  gWrapperFileContent_3_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/05-blinkled-systick-string.plm'

const char * gWrapperFileContent_4_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "let s $staticString = \"azerty\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var zz $int32 = 0 {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc zzzz `user (\?inS $staticString !outS $staticString) {\n"
  "  outS = inS\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  var ss = s\n"
  "  var r $staticString\n"
  "  waitMS (!250)\n"
  "  zzzz (!\"toto\" \?r)\n"
  "  ledOn (!LED_TEENSY) // Allumer la led\n"
  "  var rr $staticString\n"
  "  waitMS (!250)\n"
  "  zzzz (!\"tata\" \?rr)\n"
  "  ledOff (!LED_TEENSY)  // \xC3""\x89""teindre la led\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_4_embeddedSampleCode (
  "05-blinkled-systick-string.plm",
  "plm",
  true, // Text file
  697, // Text length
  gWrapperFileContent_4_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/06-blinkled-lcd.plm'

const char * gWrapperFileContent_5_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var toggle = true {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "var gCount $uint32 = 0 {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  waitMS (!250)\n"
  "  ledOn (!LED_TEENSY) // Allumer la led\n"
  "  waitMS (!250)\n"
  "  ledOff (!LED_TEENSY)  // \xC3""\x89""teindre la led\n"
  "  toggle = not toggle\n"
  "  if toggle then\n"
  "    gCount ++\n"
  "    goto (!line:1 !column:8)\n"
  "    printUnsigned (!gCount)\n"
  "  end\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_5_embeddedSampleCode (
  "06-blinkled-lcd.plm",
  "plm",
  true, // Text file
  598, // Text length
  gWrapperFileContent_5_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/07-blinkled-urem-test.plm'

const char * gWrapperFileContent_6_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var toggle = true {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "var gCount $uint32 = 0 {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  waitMS (!250)\n"
  "  ledOn (!LED_TEENSY) // Allumer la led\n"
  "  waitMS (!250)\n"
  "  ledOff (!LED_TEENSY)  // \xC3""\x89""teindre la led\n"
  "  toggle = not toggle\n"
  "  if toggle then\n"
  "    gCount ++\n"
  "    goto (!line:1 !column:0)\n"
  "    printUnsigned (!gCount)\n"
  "    goto (!line:2 !column:0)\n"
  "    printUnsignedUsingMod (!gCount)\n"
  "  end\n"
  "}\n"
  "\n"
  "proc printUnsignedUsingMod `user @noWarningIfUnused (\?inValue $uint32) {\n"
  "  var divisor $uint32 = 1_000_000_000\n"
  "  var value = inValue\n"
  "  var isPrinting = false\n"
  "  while divisor > 0 do\n"
  "    if isPrinting or (value >= divisor) then\n"
  "      let quotient = value / divisor\n"
  "      writeData_inUserMode (!0x30 + convert quotient : $uint8)\n"
  "    //  value = value - quotient * divisor\n"
  "      value = value % divisor\n"
  "      isPrinting = true\n"
  "    end\n"
  "    divisor = divisor / 10\n"
  "  end\n"
  "  if not isPrinting then\n"
  "    writeData_inUserMode (!0x30)\n"
  "  end\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_6_embeddedSampleCode (
  "07-blinkled-urem-test.plm",
  "plm",
  true, // Text file
  1194, // Text length
  gWrapperFileContent_6_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/08-blinkled-panic.plm'

const char * gWrapperFileContent_7_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var toggle = true {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "var gCount $uint3 = 0 {\n"
  "  @rw proc loop\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  waitMS (!250)\n"
  "  ledOn (!LED_TEENSY) // Allumer la led\n"
  "  waitMS (!250)\n"
  "  ledOff (!LED_TEENSY)  // \xC3""\x89""teindre la led\n"
  "  toggle = not toggle\n"
  "  if toggle then\n"
  "    gCount ++ // EXCEPTION AFTER 7s\n"
  "    goto (!line:1 !column:0)\n"
  "    printUnsigned (!extend gCount : $uint32)\n"
  "  end\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_7_embeddedSampleCode (
  "08-blinkled-panic.plm",
  "plm",
  true, // Text file
  636, // Text length
  gWrapperFileContent_7_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/09-pit-unprivileged-mode.plm'

const char * gWrapperFileContent_8_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "init 100_000 {\n"
  "  SIM_SCGC6 |= SIM_SCGC6_PIT\n"
  "  AICS0_PARCG = 0\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "  PIT_MCR = 0\n"
  "  PIT_LDVAL0 = 200000\n"
  "  PIT_TCTRL0 = 1\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  waitMS (!250)\n"
  "  ledOn (!LED_TEENSY) // Allumer la led\n"
  "  waitMS (!250)\n"
  "  ledOff (!LED_TEENSY)  // \xC3""\x89""teindre la led\n"
  "  goto (!line:1 !column:0)\n"
  "  printSpaces (!10)\n"
  "  goto (!line:1 !column:0)\n"
  "  printUnsigned (!PIT_CVAL0)\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_8_embeddedSampleCode (
  "09-pit-unprivileged-mode.plm",
  "plm",
  true, // Text file
  620, // Text length
  gWrapperFileContent_8_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/10-pit-unprivileged-mode-it.plm'

const char * gWrapperFileContent_9_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "init 100_000 {\n"
  "  SIM_SCGC6 |= SIM_SCGC6_PIT\n"
  " // NVIC_ISER2 = 1 << ((84 - 16) & 31)\n"
  "  NVIC_ISER = 1 << (84 - 16)\n"
  "  AICS0_PARCG = 0\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "  PIT_MCR = 0\n"
  "  PIT_LDVAL0 = 200000\n"
  "  PIT_TCTRL0 = 3 // Interrupt, enabled\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var gPITValue $uint32 = 0 {\n"
  "  proc loop\n"
  "  @rw proc PITChannel0Handler\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc PITChannel0Handler `isr () {\n"
  "//--- Acquitter l'interruption\n"
  "  PIT_TFLG0 = 1\n"
  "//--- Incr\xC3""\xA9""menter le compteur\n"
  "  gPITValue ++\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  waitMS (!250)\n"
  "  ledOn (!LED_TEENSY) // Allumer la led\n"
  "  waitMS (!250)\n"
  "  ledOff (!LED_TEENSY)  // \xC3""\x89""teindre la led\n"
  "  goto (!line:1 !column:0)\n"
  "  printSpaces (!10)\n"
  "  goto (!line:1 !column:0)\n"
  "  printUnsigned (!gPITValue)\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_9_embeddedSampleCode (
  "10-pit-unprivileged-mode-it.plm",
  "plm",
  true, // Text file
  1018, // Text length
  gWrapperFileContent_9_embeddedSampleCode
) ;

//--- File 'teensy-3-1-it/11-structure-procs.plm'

const char * gWrapperFileContent_10_embeddedSampleCode = "target \"teensy-3-1-it\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "struct $MyStruct {\n"
  "  var x $int32 = 9\n"
  "  var y $int32 = 90\n"
  "\n"
  "  proc nop `user () {\n"
  "  }\n"
  "  proc getX `user (!outX $int32) {\n"
  "    outX = self.x %+ 3\n"
  "  }\n"
  "  proc setX `user (\?inX $int32) {\n"
  "    self.x = inX + 8\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc setup `user () {\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "proc loop `user () {\n"
  "  var s = $MyStruct ()\n"
  "  s.nop ()\n"
  "  var x $int32 ; s.getX (\?x)\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_10_embeddedSampleCode (
  "11-structure-procs.plm",
  "plm",
  true, // Text file
  556, // Text length
  gWrapperFileContent_10_embeddedSampleCode
) ;

//--- All files of 'teensy-3-1-it' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_1 [12] = {
  & gWrapperFile_0_embeddedSampleCode,
  & gWrapperFile_1_embeddedSampleCode,
  & gWrapperFile_2_embeddedSampleCode,
  & gWrapperFile_3_embeddedSampleCode,
  & gWrapperFile_4_embeddedSampleCode,
  & gWrapperFile_5_embeddedSampleCode,
  & gWrapperFile_6_embeddedSampleCode,
  & gWrapperFile_7_embeddedSampleCode,
  & gWrapperFile_8_embeddedSampleCode,
  & gWrapperFile_9_embeddedSampleCode,
  & gWrapperFile_10_embeddedSampleCode,
  NULL
} ;

//--- All sub-directories of 'teensy-3-1-it' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_1 [1] = {
  NULL
} ;

//--- Directory 'teensy-3-1-it'

const cDirectoryWrapper gWrapperDirectory_1_embeddedSampleCode (
  "teensy-3-1-it",
  11,
  gWrapperAllFiles_embeddedSampleCode_1,
  0,
  gWrapperAllDirectories_embeddedSampleCode_1
) ;

//--- File 'teensy-3-1-xtr/01-blinkled.plm'

const char * gWrapperFileContent_11_embeddedSampleCode = "target \"teensy-3-1-xtr\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task BlinkLed {\n"
  "  init {\n"
  "    PORTC_PCR5 = PORTC_PCR5::mux (1)\n"
  "    GPIOC_PDDR |= (1 << 5)\n"
  "  }\n"
  "\n"
  "  var state : $bool = true\n"
  "  \n"
  "  every (!ms:500) {\n"
  "    if state then\n"
  "      GPIOC_PSOR = 1 << 5 // Allumer la led\n"
  "      state = false\n"
  "    else\n"
  "      GPIOC_PCOR = 1 << 5 // \xC3""\x89""teindre la led\n"
  "      static = true\n"
  "    end  \n"
  "  }\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_11_embeddedSampleCode (
  "01-blinkled.plm",
  "plm",
  true, // Text file
  445, // Text length
  gWrapperFileContent_11_embeddedSampleCode
) ;

//--- All files of 'teensy-3-1-xtr' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_2 [2] = {
  & gWrapperFile_11_embeddedSampleCode,
  NULL
} ;

//--- All sub-directories of 'teensy-3-1-xtr' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_2 [1] = {
  NULL
} ;

//--- Directory 'teensy-3-1-xtr'

const cDirectoryWrapper gWrapperDirectory_2_embeddedSampleCode (
  "teensy-3-1-xtr",
  1,
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
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstantName.objectCompare (p->mAttribute_mConstantName) ;
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

GALGAS_globalConstantDeclaration GALGAS_globalConstantDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                    const GALGAS_lstring & inAttribute_mConstantName,
                                                                                    const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclaration result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_globalConstantDeclaration (inAttribute_mTypeName, inAttribute_mConstantName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantDeclaration::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_globalConstantDeclaration * p = (const cPtr_globalConstantDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_globalConstantDeclaration) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_globalConstantDeclaration::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
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

cPtr_globalConstantDeclaration::cPtr_globalConstantDeclaration (const GALGAS_lstring & in_mTypeName,
                                                                const GALGAS_lstring & in_mConstantName,
                                                                const GALGAS_expressionAST & in_mSourceExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mConstantName (in_mConstantName),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_globalConstantDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantDeclaration ;
}

void cPtr_globalConstantDeclaration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@globalConstantDeclaration:" ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_globalConstantDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_globalConstantDeclaration (mAttribute_mTypeName, mAttribute_mConstantName, mAttribute_mSourceExpression COMMA_THERE)) ;
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

typeComparisonResult cPtr_modeDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_modeDeclaration * p = (const cPtr_modeDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_modeDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mModeName.objectCompare (p->mAttribute_mModeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_modeDeclaration::objectCompare (const GALGAS_modeDeclaration & inOperand) const {
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

GALGAS_modeDeclaration::GALGAS_modeDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeDeclaration GALGAS_modeDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_modeDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeDeclaration::GALGAS_modeDeclaration (const cPtr_modeDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_modeDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeDeclaration GALGAS_modeDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mModeName
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_modeDeclaration result ;
  if (inAttribute_mModeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_modeDeclaration (inAttribute_mModeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modeDeclaration::getter_mModeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_modeDeclaration * p = (const cPtr_modeDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_modeDeclaration) ;
    result = p->mAttribute_mModeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_modeDeclaration::getter_mModeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @modeDeclaration class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_modeDeclaration::cPtr_modeDeclaration (const GALGAS_lstring & in_mModeName
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mModeName (in_mModeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_modeDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modeDeclaration ;
}

void cPtr_modeDeclaration::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@modeDeclaration:" ;
  mAttribute_mModeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_modeDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_modeDeclaration (mAttribute_mModeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @modeDeclaration type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_modeDeclaration ("modeDeclaration",
                                        & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_modeDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modeDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_modeDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_modeDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeDeclaration GALGAS_modeDeclaration::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_modeDeclaration result ;
  const GALGAS_modeDeclaration * p = (const GALGAS_modeDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_modeDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("modeDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_pointerSizeDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pointerSizeDeclaration * p = (const cPtr_pointerSizeDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pointerSizeDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSize.objectCompare (p->mAttribute_mSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_pointerSizeDeclaration::objectCompare (const GALGAS_pointerSizeDeclaration & inOperand) const {
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

GALGAS_pointerSizeDeclaration::GALGAS_pointerSizeDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pointerSizeDeclaration GALGAS_pointerSizeDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_pointerSizeDeclaration::constructor_new (GALGAS_lbigint::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pointerSizeDeclaration::GALGAS_pointerSizeDeclaration (const cPtr_pointerSizeDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pointerSizeDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pointerSizeDeclaration GALGAS_pointerSizeDeclaration::constructor_new (const GALGAS_lbigint & inAttribute_mSize
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pointerSizeDeclaration result ;
  if (inAttribute_mSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pointerSizeDeclaration (inAttribute_mSize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_pointerSizeDeclaration::getter_mSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_pointerSizeDeclaration * p = (const cPtr_pointerSizeDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pointerSizeDeclaration) ;
    result = p->mAttribute_mSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cPtr_pointerSizeDeclaration::getter_mSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @pointerSizeDeclaration class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_pointerSizeDeclaration::cPtr_pointerSizeDeclaration (const GALGAS_lbigint & in_mSize
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mSize (in_mSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_pointerSizeDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pointerSizeDeclaration ;
}

void cPtr_pointerSizeDeclaration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@pointerSizeDeclaration:" ;
  mAttribute_mSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_pointerSizeDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_pointerSizeDeclaration (mAttribute_mSize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pointerSizeDeclaration type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_pointerSizeDeclaration ("pointerSizeDeclaration",
                                               & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_pointerSizeDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pointerSizeDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_pointerSizeDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pointerSizeDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_pointerSizeDeclaration GALGAS_pointerSizeDeclaration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pointerSizeDeclaration result ;
  const GALGAS_pointerSizeDeclaration * p = (const GALGAS_pointerSizeDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_pointerSizeDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pointerSizeDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_registerDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerDeclaration * p = (const cPtr_registerDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterDeclarationList.objectCompare (p->mAttribute_mRegisterDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterTypeName.objectCompare (p->mAttribute_mRegisterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterBitSliceList.objectCompare (p->mAttribute_mRegisterBitSliceList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerDeclaration::objectCompare (const GALGAS_registerDeclaration & inOperand) const {
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

GALGAS_registerDeclaration::GALGAS_registerDeclaration (void) :
GALGAS_abstractDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclaration GALGAS_registerDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_registerDeclaration::constructor_new (GALGAS_registerDeclarationList::constructor_emptyList (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_registerBitSliceList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclaration::GALGAS_registerDeclaration (const cPtr_registerDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclaration GALGAS_registerDeclaration::constructor_new (const GALGAS_registerDeclarationList & inAttribute_mRegisterDeclarationList,
                                                                        const GALGAS_lstring & inAttribute_mRegisterTypeName,
                                                                        const GALGAS_registerBitSliceList & inAttribute_mRegisterBitSliceList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_registerDeclaration result ;
  if (inAttribute_mRegisterDeclarationList.isValid () && inAttribute_mRegisterTypeName.isValid () && inAttribute_mRegisterBitSliceList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerDeclaration (inAttribute_mRegisterDeclarationList, inAttribute_mRegisterTypeName, inAttribute_mRegisterBitSliceList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList GALGAS_registerDeclaration::getter_mRegisterDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerDeclaration * p = (const cPtr_registerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerDeclaration) ;
    result = p->mAttribute_mRegisterDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList cPtr_registerDeclaration::getter_mRegisterDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerDeclaration::getter_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerDeclaration * p = (const cPtr_registerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerDeclaration) ;
    result = p->mAttribute_mRegisterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerDeclaration::getter_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList GALGAS_registerDeclaration::getter_mRegisterBitSliceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerBitSliceList result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerDeclaration * p = (const cPtr_registerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerDeclaration) ;
    result = p->mAttribute_mRegisterBitSliceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList cPtr_registerDeclaration::getter_mRegisterBitSliceList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterBitSliceList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @registerDeclaration class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerDeclaration::cPtr_registerDeclaration (const GALGAS_registerDeclarationList & in_mRegisterDeclarationList,
                                                    const GALGAS_lstring & in_mRegisterTypeName,
                                                    const GALGAS_registerBitSliceList & in_mRegisterBitSliceList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mRegisterDeclarationList (in_mRegisterDeclarationList),
mAttribute_mRegisterTypeName (in_mRegisterTypeName),
mAttribute_mRegisterBitSliceList (in_mRegisterBitSliceList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerDeclaration ;
}

void cPtr_registerDeclaration::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@registerDeclaration:" ;
  mAttribute_mRegisterDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterBitSliceList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerDeclaration (mAttribute_mRegisterDeclarationList, mAttribute_mRegisterTypeName, mAttribute_mRegisterBitSliceList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @registerDeclaration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerDeclaration ("registerDeclaration",
                                            & kTypeDescriptor_GALGAS_abstractDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclaration GALGAS_registerDeclaration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_registerDeclaration result ;
  const GALGAS_registerDeclaration * p = (const GALGAS_registerDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructureFieldListAST.objectCompare (p->mAttribute_mStructureFieldListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mProcedureDeclarationListAST.objectCompare (p->mAttribute_mProcedureDeclarationListAST) ;
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
                                                       GALGAS_procedureDeclarationListAST::constructor_emptyList (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclaration::GALGAS_structureDeclaration (const cPtr_structureDeclaration * inSourcePtr) :
GALGAS_abstractDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structureDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureDeclaration GALGAS_structureDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mStructureName,
                                                                          const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                          const GALGAS_structureFieldListAST & inAttribute_mStructureFieldListAST,
                                                                          const GALGAS_procedureDeclarationListAST & inAttribute_mProcedureDeclarationListAST
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclaration result ;
  if (inAttribute_mStructureName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mStructureFieldListAST.isValid () && inAttribute_mProcedureDeclarationListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureDeclaration (inAttribute_mStructureName, inAttribute_mAttributeList, inAttribute_mStructureFieldListAST, inAttribute_mProcedureDeclarationListAST COMMA_THERE)) ;
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

GALGAS_lstringlist GALGAS_structureDeclaration::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_structureDeclaration::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
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

GALGAS_procedureDeclarationListAST GALGAS_structureDeclaration::getter_mProcedureDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_procedureDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structureDeclaration * p = (const cPtr_structureDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structureDeclaration) ;
    result = p->mAttribute_mProcedureDeclarationListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureDeclarationListAST cPtr_structureDeclaration::getter_mProcedureDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @structureDeclaration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structureDeclaration::cPtr_structureDeclaration (const GALGAS_lstring & in_mStructureName,
                                                      const GALGAS_lstringlist & in_mAttributeList,
                                                      const GALGAS_structureFieldListAST & in_mStructureFieldListAST,
                                                      const GALGAS_procedureDeclarationListAST & in_mProcedureDeclarationListAST
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclaration (THERE),
mAttribute_mStructureName (in_mStructureName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mStructureFieldListAST (in_mStructureFieldListAST),
mAttribute_mProcedureDeclarationListAST (in_mProcedureDeclarationListAST) {
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
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructureFieldListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mProcedureDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structureDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureDeclaration (mAttribute_mStructureName, mAttribute_mAttributeList, mAttribute_mStructureFieldListAST, mAttribute_mProcedureDeclarationListAST COMMA_THERE)) ;
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

typeComparisonResult cPtr_allocaConstantIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_allocaConstantIR * p = (const cPtr_allocaConstantIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_allocaConstantIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocalVariableName.objectCompare (p->mAttribute_mLocalVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariableType.objectCompare (p->mAttribute_mVariableType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_allocaConstantIR::objectCompare (const GALGAS_allocaConstantIR & inOperand) const {
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

GALGAS_allocaConstantIR::GALGAS_allocaConstantIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaConstantIR GALGAS_allocaConstantIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_allocaConstantIR::constructor_new (GALGAS_string::constructor_default (HERE),
                                                   GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaConstantIR::GALGAS_allocaConstantIR (const cPtr_allocaConstantIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_allocaConstantIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaConstantIR GALGAS_allocaConstantIR::constructor_new (const GALGAS_string & inAttribute_mLocalVariableName,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mVariableType
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_allocaConstantIR result ;
  if (inAttribute_mLocalVariableName.isValid () && inAttribute_mVariableType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_allocaConstantIR (inAttribute_mLocalVariableName, inAttribute_mVariableType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_allocaConstantIR::getter_mLocalVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_allocaConstantIR * p = (const cPtr_allocaConstantIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_allocaConstantIR) ;
    result = p->mAttribute_mLocalVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_allocaConstantIR::getter_mLocalVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_allocaConstantIR::getter_mVariableType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_allocaConstantIR * p = (const cPtr_allocaConstantIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_allocaConstantIR) ;
    result = p->mAttribute_mVariableType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_allocaConstantIR::getter_mVariableType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVariableType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @allocaConstantIR class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_allocaConstantIR::cPtr_allocaConstantIR (const GALGAS_string & in_mLocalVariableName,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mVariableType
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mLocalVariableName (in_mLocalVariableName),
mAttribute_mVariableType (in_mVariableType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_allocaConstantIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaConstantIR ;
}

void cPtr_allocaConstantIR::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@allocaConstantIR:" ;
  mAttribute_mLocalVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVariableType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_allocaConstantIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_allocaConstantIR (mAttribute_mLocalVariableName, mAttribute_mVariableType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @allocaConstantIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allocaConstantIR ("allocaConstantIR",
                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allocaConstantIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaConstantIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allocaConstantIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaConstantIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaConstantIR GALGAS_allocaConstantIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_allocaConstantIR result ;
  const GALGAS_allocaConstantIR * p = (const GALGAS_allocaConstantIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allocaConstantIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaConstantIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                                        const GALGAS_operandIR & inAttribute_mExpressionValue
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

GALGAS_operandIR GALGAS_assertInstructionIR::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionIR * p = (const cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    result = p->mAttribute_mExpressionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_assertInstructionIR::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @assertInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assertInstructionIR::cPtr_assertInstructionIR (const GALGAS_location & in_mAssertInstructionLocation,
                                                    const GALGAS_instructionListIR & in_mInstructionList,
                                                    const GALGAS_operandIR & in_mExpressionValue
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

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::constructor_new (const GALGAS_valueIR & inAttribute_mTarget,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mOperandType,
                                                                    const GALGAS_valueIR & inAttribute_mLeft,
                                                                    const GALGAS_llvmBinaryOperation & inAttribute_mOperation,
                                                                    const GALGAS_valueIR & inAttribute_mRight,
                                                                    const GALGAS_location & inAttribute_mLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperandType.isValid () && inAttribute_mLeft.isValid () && inAttribute_mOperation.isValid () && inAttribute_mRight.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_binaryOperationIR (inAttribute_mTarget, inAttribute_mOperandType, inAttribute_mLeft, inAttribute_mOperation, inAttribute_mRight, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_binaryOperationIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_valueIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR cPtr_binaryOperationIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
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

GALGAS_valueIR GALGAS_binaryOperationIR::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_valueIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mAttribute_mLeft ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR cPtr_binaryOperationIR::getter_mLeft (UNUSED_LOCATION_ARGS) const {
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

GALGAS_valueIR GALGAS_binaryOperationIR::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_valueIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mAttribute_mRight ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR cPtr_binaryOperationIR::getter_mRight (UNUSED_LOCATION_ARGS) const {
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

cPtr_binaryOperationIR::cPtr_binaryOperationIR (const GALGAS_valueIR & in_mTarget,
                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mOperandType,
                                                const GALGAS_valueIR & in_mLeft,
                                                const GALGAS_llvmBinaryOperation & in_mOperation,
                                                const GALGAS_valueIR & in_mRight,
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

typeComparisonResult cPtr_commentIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_commentIR * p = (const cPtr_commentIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_commentIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mComment.objectCompare (p->mAttribute_mComment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_commentIR::objectCompare (const GALGAS_commentIR & inOperand) const {
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

GALGAS_commentIR::GALGAS_commentIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commentIR GALGAS_commentIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_commentIR::constructor_new (GALGAS_string::constructor_default (HERE)
                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commentIR::GALGAS_commentIR (const cPtr_commentIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_commentIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commentIR GALGAS_commentIR::constructor_new (const GALGAS_string & inAttribute_mComment
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_commentIR result ;
  if (inAttribute_mComment.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_commentIR (inAttribute_mComment COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_commentIR::getter_mComment (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_commentIR * p = (const cPtr_commentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_commentIR) ;
    result = p->mAttribute_mComment ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_commentIR::getter_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @commentIR class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_commentIR::cPtr_commentIR (const GALGAS_string & in_mComment
                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mComment (in_mComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_commentIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commentIR ;
}

void cPtr_commentIR::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@commentIR:" ;
  mAttribute_mComment.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_commentIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_commentIR (mAttribute_mComment COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @commentIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_commentIR ("commentIR",
                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_commentIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commentIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_commentIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commentIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commentIR GALGAS_commentIR::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_commentIR result ;
  const GALGAS_commentIR * p = (const GALGAS_commentIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_commentIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commentIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::constructor_new (const GALGAS_operandIR & inAttribute_mTarget,
                                                                          const GALGAS_operandIR & inAttribute_mOperand,
                                                                          const GALGAS_location & inAttribute_mLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperand.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_convertInstructionIR (inAttribute_mTarget, inAttribute_mOperand, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
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

cPtr_convertInstructionIR::cPtr_convertInstructionIR (const GALGAS_operandIR & in_mTarget,
                                                      const GALGAS_operandIR & in_mOperand,
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

GALGAS_extendIR GALGAS_extendIR::constructor_new (const GALGAS_operandIR & inAttribute_mResult,
                                                  const GALGAS_operandIR & inAttribute_mSource
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extendIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mSource.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extendIR (inAttribute_mResult, inAttribute_mSource COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_extendIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendIR * p = (const cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    result = p->mAttribute_mResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_extendIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_extendIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendIR * p = (const cPtr_extendIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendIR) ;
    result = p->mAttribute_mSource ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_extendIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSource ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @extendIR class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extendIR::cPtr_extendIR (const GALGAS_operandIR & in_mResult,
                              const GALGAS_operandIR & in_mSource
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

typeComparisonResult cPtr_extractValueIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extractValueIR * p = (const cPtr_extractValueIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extractValueIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTarget.objectCompare (p->mAttribute_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSource.objectCompare (p->mAttribute_mSource) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (p->mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extractValueIR::objectCompare (const GALGAS_extractValueIR & inOperand) const {
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

GALGAS_extractValueIR::GALGAS_extractValueIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractValueIR::GALGAS_extractValueIR (const cPtr_extractValueIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extractValueIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractValueIR GALGAS_extractValueIR::constructor_new (const GALGAS_operandIR & inAttribute_mTarget,
                                                              const GALGAS_operandIR & inAttribute_mSource,
                                                              const GALGAS_uint & inAttribute_mIndex
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extractValueIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSource.isValid () && inAttribute_mIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extractValueIR (inAttribute_mTarget, inAttribute_mSource, inAttribute_mIndex COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_extractValueIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_extractValueIR * p = (const cPtr_extractValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractValueIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_extractValueIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_extractValueIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_extractValueIR * p = (const cPtr_extractValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractValueIR) ;
    result = p->mAttribute_mSource ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_extractValueIR::getter_mSource (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSource ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_extractValueIR::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_extractValueIR * p = (const cPtr_extractValueIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractValueIR) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_extractValueIR::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @extractValueIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extractValueIR::cPtr_extractValueIR (const GALGAS_operandIR & in_mTarget,
                                          const GALGAS_operandIR & in_mSource,
                                          const GALGAS_uint & in_mIndex
                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mSource (in_mSource),
mAttribute_mIndex (in_mIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extractValueIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractValueIR ;
}

void cPtr_extractValueIR::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "[@extractValueIR:" ;
  mAttribute_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSource.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extractValueIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extractValueIR (mAttribute_mTarget, mAttribute_mSource, mAttribute_mIndex COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @extractValueIR type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractValueIR ("extractValueIR",
                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extractValueIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractValueIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extractValueIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractValueIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractValueIR GALGAS_extractValueIR::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extractValueIR result ;
  const GALGAS_extractValueIR * p = (const GALGAS_extractValueIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extractValueIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractValueIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                                  const GALGAS_operandIR & inAttribute_mExpressionResult,
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

GALGAS_operandIR GALGAS_forInstructionIR::getter_mExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionIR * p = (const cPtr_forInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionIR) ;
    result = p->mAttribute_mExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_forInstructionIR::getter_mExpressionResult (UNUSED_LOCATION_ARGS) const {
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
                                              const GALGAS_operandIR & in_mExpressionResult,
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
    result = mAttribute_mIndex.objectCompare (p->mAttribute_mIndex) ;
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
                                                                const GALGAS_uint & inAttribute_mIndex
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_getElementPtrIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSource.isValid () && inAttribute_mIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getElementPtrIR (inAttribute_mTarget, inAttribute_mSource, inAttribute_mIndex COMMA_THERE)) ;
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

GALGAS_uint GALGAS_getElementPtrIR::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_getElementPtrIR * p = (const cPtr_getElementPtrIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getElementPtrIR) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_getElementPtrIR::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @getElementPtrIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_getElementPtrIR::cPtr_getElementPtrIR (const GALGAS_objectInMemoryIR & in_mTarget,
                                            const GALGAS_objectInMemoryIR & in_mSource,
                                            const GALGAS_uint & in_mIndex
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTarget (in_mTarget),
mAttribute_mSource (in_mSource),
mAttribute_mIndex (in_mIndex) {
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
  mAttribute_mIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_getElementPtrIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getElementPtrIR (mAttribute_mTarget, mAttribute_mSource, mAttribute_mIndex COMMA_THERE)) ;
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

GALGAS_ifInstructionIR GALGAS_ifInstructionIR::constructor_new (const GALGAS_operandIR & inAttribute_mTestVariable,
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

GALGAS_operandIR GALGAS_ifInstructionIR::getter_mTestVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionIR * p = (const cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    result = p->mAttribute_mTestVariable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_ifInstructionIR::getter_mTestVariable (UNUSED_LOCATION_ARGS) const {
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

cPtr_ifInstructionIR::cPtr_ifInstructionIR (const GALGAS_operandIR & in_mTestVariable,
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

GALGAS_loadGlobalVariableIR GALGAS_loadGlobalVariableIR::constructor_new (const GALGAS_operandIR & inAttribute_mTargetValue,
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

GALGAS_operandIR GALGAS_loadGlobalVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadGlobalVariableIR * p = (const cPtr_loadGlobalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadGlobalVariableIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_loadGlobalVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
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

cPtr_loadGlobalVariableIR::cPtr_loadGlobalVariableIR (const GALGAS_operandIR & in_mTargetValue,
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

GALGAS_loadLocalVariableIR GALGAS_loadLocalVariableIR::constructor_new (const GALGAS_operandIR & inAttribute_mTargetValue,
                                                                        const GALGAS_string & inAttribute_mVariableName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_loadLocalVariableIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadLocalVariableIR (inAttribute_mTargetValue, inAttribute_mVariableName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_loadLocalVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadLocalVariableIR * p = (const cPtr_loadLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadLocalVariableIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_loadLocalVariableIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
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
//                                    Pointer class for @loadLocalVariableIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_loadLocalVariableIR::cPtr_loadLocalVariableIR (const GALGAS_operandIR & in_mTargetValue,
                                                    const GALGAS_string & in_mVariableName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mVariableName (in_mVariableName) {
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
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadLocalVariableIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadLocalVariableIR (mAttribute_mTargetValue, mAttribute_mVariableName COMMA_THERE)) ;
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

typeComparisonResult cPtr_loadRegisterIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_loadRegisterIR * p = (const cPtr_loadRegisterIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_loadRegisterIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetValue.objectCompare (p->mAttribute_mTargetValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterName.objectCompare (p->mAttribute_mRegisterName) ;
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

GALGAS_loadRegisterIR GALGAS_loadRegisterIR::constructor_new (const GALGAS_operandIR & inAttribute_mTargetValue,
                                                              const GALGAS_string & inAttribute_mRegisterName,
                                                              const GALGAS_bigint & inAttribute_mRegisterAddress
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_loadRegisterIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mRegisterName.isValid () && inAttribute_mRegisterAddress.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadRegisterIR (inAttribute_mTargetValue, inAttribute_mRegisterName, inAttribute_mRegisterAddress COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_loadRegisterIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterIR * p = (const cPtr_loadRegisterIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_loadRegisterIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_loadRegisterIR::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadRegisterIR * p = (const cPtr_loadRegisterIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadRegisterIR) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_loadRegisterIR::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
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

cPtr_loadRegisterIR::cPtr_loadRegisterIR (const GALGAS_operandIR & in_mTargetValue,
                                          const GALGAS_string & in_mRegisterName,
                                          const GALGAS_bigint & in_mRegisterAddress
                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetValue (in_mTargetValue),
mAttribute_mRegisterName (in_mRegisterName),
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
  mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_loadRegisterIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_loadRegisterIR (mAttribute_mTargetValue, mAttribute_mRegisterName, mAttribute_mRegisterAddress COMMA_THERE)) ;
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

GALGAS_loadStructureConstantIR GALGAS_loadStructureConstantIR::constructor_new (const GALGAS_operandIR & inAttribute_mTargetValue,
                                                                                const GALGAS_string & inAttribute_mTypeName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_loadStructureConstantIR result ;
  if (inAttribute_mTargetValue.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_loadStructureConstantIR (inAttribute_mTargetValue, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_loadStructureConstantIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_loadStructureConstantIR * p = (const cPtr_loadStructureConstantIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loadStructureConstantIR) ;
    result = p->mAttribute_mTargetValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_loadStructureConstantIR::getter_mTargetValue (UNUSED_LOCATION_ARGS) const {
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

cPtr_loadStructureConstantIR::cPtr_loadStructureConstantIR (const GALGAS_operandIR & in_mTargetValue,
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

typeComparisonResult cPtr_prefixOperatorExpressionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefixOperatorExpressionIR * p = (const cPtr_prefixOperatorExpressionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefixOperatorExpressionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetType.objectCompare (p->mAttribute_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResult.objectCompare (p->mAttribute_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperand.objectCompare (p->mAttribute_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_prefixOperatorExpressionIR::objectCompare (const GALGAS_prefixOperatorExpressionIR & inOperand) const {
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

GALGAS_prefixOperatorExpressionIR::GALGAS_prefixOperatorExpressionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionIR::GALGAS_prefixOperatorExpressionIR (const cPtr_prefixOperatorExpressionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorExpressionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionIR GALGAS_prefixOperatorExpressionIR::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetType,
                                                                                      const GALGAS_valueIR & inAttribute_mResult,
                                                                                      const GALGAS_valueIR & inAttribute_mOperand,
                                                                                      const GALGAS_prefixOperatorIR & inAttribute_mOperator,
                                                                                      const GALGAS_location & inAttribute_mOperatorLocation
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionIR result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mResult.isValid () && inAttribute_mOperand.isValid () && inAttribute_mOperator.isValid () && inAttribute_mOperatorLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefixOperatorExpressionIR (inAttribute_mTargetType, inAttribute_mResult, inAttribute_mOperand, inAttribute_mOperator, inAttribute_mOperatorLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_prefixOperatorExpressionIR::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionIR * p = (const cPtr_prefixOperatorExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionIR) ;
    result = p->mAttribute_mTargetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_prefixOperatorExpressionIR::getter_mTargetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_prefixOperatorExpressionIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_valueIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionIR * p = (const cPtr_prefixOperatorExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionIR) ;
    result = p->mAttribute_mResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR cPtr_prefixOperatorExpressionIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR GALGAS_prefixOperatorExpressionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_valueIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionIR * p = (const cPtr_prefixOperatorExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionIR) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_valueIR cPtr_prefixOperatorExpressionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorIR GALGAS_prefixOperatorExpressionIR::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_prefixOperatorIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionIR * p = (const cPtr_prefixOperatorExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionIR) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorIR cPtr_prefixOperatorExpressionIR::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_prefixOperatorExpressionIR::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefixOperatorExpressionIR * p = (const cPtr_prefixOperatorExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorExpressionIR) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_prefixOperatorExpressionIR::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @prefixOperatorExpressionIR class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_prefixOperatorExpressionIR::cPtr_prefixOperatorExpressionIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                  const GALGAS_valueIR & in_mResult,
                                                                  const GALGAS_valueIR & in_mOperand,
                                                                  const GALGAS_prefixOperatorIR & in_mOperator,
                                                                  const GALGAS_location & in_mOperatorLocation
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mTargetType (in_mTargetType),
mAttribute_mResult (in_mResult),
mAttribute_mOperand (in_mOperand),
mAttribute_mOperator (in_mOperator),
mAttribute_mOperatorLocation (in_mOperatorLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_prefixOperatorExpressionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionIR ;
}

void cPtr_prefixOperatorExpressionIR::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@prefixOperatorExpressionIR:" ;
  mAttribute_mTargetType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_prefixOperatorExpressionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefixOperatorExpressionIR (mAttribute_mTargetType, mAttribute_mResult, mAttribute_mOperand, mAttribute_mOperator, mAttribute_mOperatorLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @prefixOperatorExpressionIR type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorExpressionIR ("prefixOperatorExpressionIR",
                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorExpressionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorExpressionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorExpressionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorExpressionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorExpressionIR GALGAS_prefixOperatorExpressionIR::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorExpressionIR result ;
  const GALGAS_prefixOperatorExpressionIR * p = (const GALGAS_prefixOperatorExpressionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorExpressionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorExpressionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    result = mAttribute_mProcName.objectCompare (p->mAttribute_mProcName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameters.objectCompare (p->mAttribute_mParameters) ;
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

GALGAS_procCallInstructionIR GALGAS_procCallInstructionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_procCallInstructionIR::constructor_new (GALGAS_string::constructor_default (HERE),
                                                        GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionIR::GALGAS_procCallInstructionIR (const cPtr_procCallInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionIR GALGAS_procCallInstructionIR::constructor_new (const GALGAS_string & inAttribute_mProcName,
                                                                            const GALGAS_procCallEffectiveParameterListIR & inAttribute_mParameters
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionIR result ;
  if (inAttribute_mProcName.isValid () && inAttribute_mParameters.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionIR (inAttribute_mProcName, inAttribute_mParameters COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procCallInstructionIR::getter_mProcName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionIR * p = (const cPtr_procCallInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionIR) ;
    result = p->mAttribute_mProcName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_procCallInstructionIR::getter_mProcName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcName ;
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
//                                   Pointer class for @procCallInstructionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_procCallInstructionIR::cPtr_procCallInstructionIR (const GALGAS_string & in_mProcName,
                                                        const GALGAS_procCallEffectiveParameterListIR & in_mParameters
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mProcName (in_mProcName),
mAttribute_mParameters (in_mParameters) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_procCallInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionIR ;
}

void cPtr_procCallInstructionIR::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@procCallInstructionIR:" ;
  mAttribute_mProcName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mParameters.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_procCallInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionIR (mAttribute_mProcName, mAttribute_mParameters COMMA_THERE)) ;
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

typeComparisonResult cPtr_registerIntegerConstantInExpressionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerIntegerConstantInExpressionIR * p = (const cPtr_registerIntegerConstantInExpressionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerIntegerConstantInExpressionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionLocation.objectCompare (p->mAttribute_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionValue.objectCompare (p->mAttribute_mExpressionValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMaxBound.objectCompare (p->mAttribute_mMaxBound) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitShift.objectCompare (p->mAttribute_mBitShift) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResult.objectCompare (p->mAttribute_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNoCheck.objectCompare (p->mAttribute_mNoCheck) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerIntegerConstantInExpressionIR::objectCompare (const GALGAS_registerIntegerConstantInExpressionIR & inOperand) const {
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

GALGAS_registerIntegerConstantInExpressionIR::GALGAS_registerIntegerConstantInExpressionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerConstantInExpressionIR::GALGAS_registerIntegerConstantInExpressionIR (const cPtr_registerIntegerConstantInExpressionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerIntegerConstantInExpressionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerConstantInExpressionIR GALGAS_registerIntegerConstantInExpressionIR::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_operandIR & inAttribute_mExpressionValue,
                                                                                                            const GALGAS_uint_36__34_ & inAttribute_mMaxBound,
                                                                                                            const GALGAS_uint & inAttribute_mBitShift,
                                                                                                            const GALGAS_operandIR & inAttribute_mResult,
                                                                                                            const GALGAS_bool & inAttribute_mNoCheck
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerConstantInExpressionIR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpressionValue.isValid () && inAttribute_mMaxBound.isValid () && inAttribute_mBitShift.isValid () && inAttribute_mResult.isValid () && inAttribute_mNoCheck.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerIntegerConstantInExpressionIR (inAttribute_mInstructionLocation, inAttribute_mExpressionValue, inAttribute_mMaxBound, inAttribute_mBitShift, inAttribute_mResult, inAttribute_mNoCheck COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerConstantInExpressionIR::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerConstantInExpressionIR * p = (const cPtr_registerIntegerConstantInExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerConstantInExpressionIR) ;
    result = p->mAttribute_mInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_registerIntegerConstantInExpressionIR::getter_mInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_registerIntegerConstantInExpressionIR::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerConstantInExpressionIR * p = (const cPtr_registerIntegerConstantInExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerConstantInExpressionIR) ;
    result = p->mAttribute_mExpressionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_registerIntegerConstantInExpressionIR::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_registerIntegerConstantInExpressionIR::getter_mMaxBound (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerConstantInExpressionIR * p = (const cPtr_registerIntegerConstantInExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerConstantInExpressionIR) ;
    result = p->mAttribute_mMaxBound ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ cPtr_registerIntegerConstantInExpressionIR::getter_mMaxBound (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaxBound ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_registerIntegerConstantInExpressionIR::getter_mBitShift (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerConstantInExpressionIR * p = (const cPtr_registerIntegerConstantInExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerConstantInExpressionIR) ;
    result = p->mAttribute_mBitShift ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_registerIntegerConstantInExpressionIR::getter_mBitShift (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitShift ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_registerIntegerConstantInExpressionIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerConstantInExpressionIR * p = (const cPtr_registerIntegerConstantInExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerConstantInExpressionIR) ;
    result = p->mAttribute_mResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_registerIntegerConstantInExpressionIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_registerIntegerConstantInExpressionIR::getter_mNoCheck (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerConstantInExpressionIR * p = (const cPtr_registerIntegerConstantInExpressionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerConstantInExpressionIR) ;
    result = p->mAttribute_mNoCheck ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_registerIntegerConstantInExpressionIR::getter_mNoCheck (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNoCheck ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @registerIntegerConstantInExpressionIR class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerIntegerConstantInExpressionIR::cPtr_registerIntegerConstantInExpressionIR (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_operandIR & in_mExpressionValue,
                                                                                        const GALGAS_uint_36__34_ & in_mMaxBound,
                                                                                        const GALGAS_uint & in_mBitShift,
                                                                                        const GALGAS_operandIR & in_mResult,
                                                                                        const GALGAS_bool & in_mNoCheck
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mInstructionLocation (in_mInstructionLocation),
mAttribute_mExpressionValue (in_mExpressionValue),
mAttribute_mMaxBound (in_mMaxBound),
mAttribute_mBitShift (in_mBitShift),
mAttribute_mResult (in_mResult),
mAttribute_mNoCheck (in_mNoCheck) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerIntegerConstantInExpressionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR ;
}

void cPtr_registerIntegerConstantInExpressionIR::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@registerIntegerConstantInExpressionIR:" ;
  mAttribute_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMaxBound.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBitShift.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNoCheck.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerIntegerConstantInExpressionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerIntegerConstantInExpressionIR (mAttribute_mInstructionLocation, mAttribute_mExpressionValue, mAttribute_mMaxBound, mAttribute_mBitShift, mAttribute_mResult, mAttribute_mNoCheck COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @registerIntegerConstantInExpressionIR type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR ("registerIntegerConstantInExpressionIR",
                                                              & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerConstantInExpressionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerConstantInExpressionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerConstantInExpressionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerConstantInExpressionIR GALGAS_registerIntegerConstantInExpressionIR::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerConstantInExpressionIR result ;
  const GALGAS_registerIntegerConstantInExpressionIR * p = (const GALGAS_registerIntegerConstantInExpressionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerConstantInExpressionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerConstantInExpressionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_shortCircuitAndOperationIR GALGAS_shortCircuitAndOperationIR::constructor_new (const GALGAS_operandIR & inAttribute_mTargetOperand,
                                                                                      const GALGAS_operandIR & inAttribute_mLeftOperand,
                                                                                      const GALGAS_instructionListIR & inAttribute_mLeftInstructionList,
                                                                                      const GALGAS_operandIR & inAttribute_mRightOperand,
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

GALGAS_operandIR GALGAS_shortCircuitAndOperationIR::getter_mTargetOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    result = p->mAttribute_mTargetOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_shortCircuitAndOperationIR::getter_mTargetOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_shortCircuitAndOperationIR::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    result = p->mAttribute_mLeftOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_shortCircuitAndOperationIR::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
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

GALGAS_operandIR GALGAS_shortCircuitAndOperationIR::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_shortCircuitAndOperationIR * p = (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_shortCircuitAndOperationIR) ;
    result = p->mAttribute_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_shortCircuitAndOperationIR::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
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

cPtr_shortCircuitAndOperationIR::cPtr_shortCircuitAndOperationIR (const GALGAS_operandIR & in_mTargetOperand,
                                                                  const GALGAS_operandIR & in_mLeftOperand,
                                                                  const GALGAS_instructionListIR & in_mLeftInstructionList,
                                                                  const GALGAS_operandIR & in_mRightOperand,
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
                                                                            const GALGAS_operandIR & inAttribute_mSourceValue,
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

GALGAS_operandIR GALGAS_storeGlobalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeGlobalVariableIR * p = (const cPtr_storeGlobalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeGlobalVariableIR) ;
    result = p->mAttribute_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_storeGlobalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
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
                                                        const GALGAS_operandIR & in_mSourceValue,
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
                                                                          const GALGAS_operandIR & inAttribute_mSourceValue
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

GALGAS_operandIR GALGAS_storeLocalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeLocalVariableIR * p = (const cPtr_storeLocalVariableIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeLocalVariableIR) ;
    result = p->mAttribute_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_storeLocalVariableIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @storeLocalVariableIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeLocalVariableIR::cPtr_storeLocalVariableIR (const GALGAS_string & in_mLocalVarName,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                                      const GALGAS_operandIR & in_mSourceValue
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

typeComparisonResult cPtr_storeVolatileIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeVolatileIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterName.objectCompare (p->mAttribute_mRegisterName) ;
  }
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

GALGAS_storeVolatileIR GALGAS_storeVolatileIR::constructor_new (const GALGAS_string & inAttribute_mRegisterName,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mTargetVarType,
                                                                const GALGAS_bigint & inAttribute_mAddress,
                                                                const GALGAS_operandIR & inAttribute_mSourceValue
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_storeVolatileIR result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mTargetVarType.isValid () && inAttribute_mAddress.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeVolatileIR (inAttribute_mRegisterName, inAttribute_mTargetVarType, inAttribute_mAddress, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storeVolatileIR::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIR) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_storeVolatileIR::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
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

GALGAS_operandIR GALGAS_storeVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeVolatileIR * p = (const cPtr_storeVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeVolatileIR) ;
    result = p->mAttribute_mSourceValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_storeVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @storeVolatileIR class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_storeVolatileIR::cPtr_storeVolatileIR (const GALGAS_string & in_mRegisterName,
                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                            const GALGAS_bigint & in_mAddress,
                                            const GALGAS_operandIR & in_mSourceValue
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mRegisterName (in_mRegisterName),
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
  mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
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
  macroMyNew (ptr, cPtr_storeVolatileIR (mAttribute_mRegisterName, mAttribute_mTargetVarType, mAttribute_mAddress, mAttribute_mSourceValue COMMA_THERE)) ;
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

typeComparisonResult cPtr_throwInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_throwInstructionIR * p = (const cPtr_throwInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_throwInstructionIR) ;
  if (kOperandEqual == result) {
    result = mAttribute_mThrowLocation.objectCompare (p->mAttribute_mThrowLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCode.objectCompare (p->mAttribute_mCode) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_throwInstructionIR::objectCompare (const GALGAS_throwInstructionIR & inOperand) const {
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

GALGAS_throwInstructionIR::GALGAS_throwInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionIR GALGAS_throwInstructionIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_throwInstructionIR::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_bigint::constructor_zero (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionIR::GALGAS_throwInstructionIR (const cPtr_throwInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_throwInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionIR GALGAS_throwInstructionIR::constructor_new (const GALGAS_location & inAttribute_mThrowLocation,
                                                                      const GALGAS_bigint & inAttribute_mCode
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_throwInstructionIR result ;
  if (inAttribute_mThrowLocation.isValid () && inAttribute_mCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_throwInstructionIR (inAttribute_mThrowLocation, inAttribute_mCode COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_throwInstructionIR::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_throwInstructionIR * p = (const cPtr_throwInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_throwInstructionIR) ;
    result = p->mAttribute_mThrowLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_throwInstructionIR::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThrowLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_throwInstructionIR::getter_mCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_throwInstructionIR * p = (const cPtr_throwInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_throwInstructionIR) ;
    result = p->mAttribute_mCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_throwInstructionIR::getter_mCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @throwInstructionIR class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_throwInstructionIR::cPtr_throwInstructionIR (const GALGAS_location & in_mThrowLocation,
                                                  const GALGAS_bigint & in_mCode
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mAttribute_mThrowLocation (in_mThrowLocation),
mAttribute_mCode (in_mCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_throwInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_throwInstructionIR ;
}

void cPtr_throwInstructionIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@throwInstructionIR:" ;
  mAttribute_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_throwInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_throwInstructionIR (mAttribute_mThrowLocation, mAttribute_mCode COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @throwInstructionIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_throwInstructionIR ("throwInstructionIR",
                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_throwInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_throwInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_throwInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_throwInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionIR GALGAS_throwInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_throwInstructionIR result ;
  const GALGAS_throwInstructionIR * p = (const GALGAS_throwInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_throwInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("throwInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_truncateInstructionIR GALGAS_truncateInstructionIR::constructor_new (const GALGAS_operandIR & inAttribute_mTarget,
                                                                            const GALGAS_operandIR & inAttribute_mOperand
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_truncateInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncateInstructionIR (inAttribute_mTarget, inAttribute_mOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_truncateInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    result = p->mAttribute_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_truncateInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_truncateInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateInstructionIR * p = (const cPtr_truncateInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateInstructionIR) ;
    result = p->mAttribute_mOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_truncateInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @truncateInstructionIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_truncateInstructionIR::cPtr_truncateInstructionIR (const GALGAS_operandIR & in_mTarget,
                                                        const GALGAS_operandIR & in_mOperand
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
                                                                      const GALGAS_operandIR & inAttribute_mTestExpression,
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

GALGAS_operandIR GALGAS_whileInstructionIR::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionIR * p = (const cPtr_whileInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionIR) ;
    result = p->mAttribute_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cPtr_whileInstructionIR::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
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
                                                  const GALGAS_operandIR & in_mTestExpression,
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
    result = mAttribute_mOptionalTypeName.objectCompare (p->mAttribute_mOptionalTypeName) ;
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
                                                  GALGAS_location::constructor_nowhere (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCall::GALGAS_constructorCall (const cPtr_constructorCall * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorCall GALGAS_constructorCall::constructor_new (const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                const GALGAS_location & inAttribute_mErrorLocation
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_constructorCall result ;
  if (inAttribute_mOptionalTypeName.isValid () && inAttribute_mErrorLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_constructorCall (inAttribute_mOptionalTypeName, inAttribute_mErrorLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorCall::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_constructorCall * p = (const cPtr_constructorCall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCall) ;
    result = p->mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_constructorCall::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
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

cPtr_constructorCall::cPtr_constructorCall (const GALGAS_lstring & in_mOptionalTypeName,
                                            const GALGAS_location & in_mErrorLocation
                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mOptionalTypeName (in_mOptionalTypeName),
mAttribute_mErrorLocation (in_mErrorLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_constructorCall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCall ;
}

void cPtr_constructorCall::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@constructorCall:" ;
  mAttribute_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_constructorCall::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_constructorCall (mAttribute_mOptionalTypeName, mAttribute_mErrorLocation COMMA_THERE)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_registerConstantInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerConstantInExpressionAST * p = (const cPtr_registerConstantInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerConstantInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterName.objectCompare (p->mAttribute_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldName.objectCompare (p->mAttribute_mFieldName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerConstantInExpressionAST::objectCompare (const GALGAS_registerConstantInExpressionAST & inOperand) const {
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

GALGAS_registerConstantInExpressionAST::GALGAS_registerConstantInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantInExpressionAST GALGAS_registerConstantInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_registerConstantInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_lstring::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantInExpressionAST::GALGAS_registerConstantInExpressionAST (const cPtr_registerConstantInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerConstantInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantInExpressionAST GALGAS_registerConstantInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                                                                const GALGAS_lstring & inAttribute_mFieldName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantInExpressionAST result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerConstantInExpressionAST (inAttribute_mRegisterName, inAttribute_mFieldName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerConstantInExpressionAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantInExpressionAST * p = (const cPtr_registerConstantInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantInExpressionAST) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerConstantInExpressionAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerConstantInExpressionAST::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantInExpressionAST * p = (const cPtr_registerConstantInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantInExpressionAST) ;
    result = p->mAttribute_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerConstantInExpressionAST::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @registerConstantInExpressionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerConstantInExpressionAST::cPtr_registerConstantInExpressionAST (const GALGAS_lstring & in_mRegisterName,
                                                                            const GALGAS_lstring & in_mFieldName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mRegisterName (in_mRegisterName),
mAttribute_mFieldName (in_mFieldName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerConstantInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantInExpressionAST ;
}

void cPtr_registerConstantInExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@registerConstantInExpressionAST:" ;
  mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerConstantInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerConstantInExpressionAST (mAttribute_mRegisterName, mAttribute_mFieldName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @registerConstantInExpressionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerConstantInExpressionAST ("registerConstantInExpressionAST",
                                                        & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerConstantInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerConstantInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerConstantInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantInExpressionAST GALGAS_registerConstantInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantInExpressionAST result ;
  const GALGAS_registerConstantInExpressionAST * p = (const GALGAS_registerConstantInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerConstantInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerConstantInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_registerIntegerExpInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterName.objectCompare (p->mAttribute_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldName.objectCompare (p->mAttribute_mFieldName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionLocation.objectCompare (p->mAttribute_mExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_registerIntegerExpInExpressionAST::objectCompare (const GALGAS_registerIntegerExpInExpressionAST & inOperand) const {
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

GALGAS_registerIntegerExpInExpressionAST::GALGAS_registerIntegerExpInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerExpInExpressionAST::GALGAS_registerIntegerExpInExpressionAST (const cPtr_registerIntegerExpInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerIntegerExpInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerExpInExpressionAST GALGAS_registerIntegerExpInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                                                                    const GALGAS_lstring & inAttribute_mFieldName,
                                                                                                    const GALGAS_expressionAST & inAttribute_mExpression,
                                                                                                    const GALGAS_location & inAttribute_mExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerExpInExpressionAST result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mFieldName.isValid () && inAttribute_mExpression.isValid () && inAttribute_mExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerIntegerExpInExpressionAST (inAttribute_mRegisterName, inAttribute_mFieldName, inAttribute_mExpression, inAttribute_mExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerExpInExpressionAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
    result = p->mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerIntegerExpInExpressionAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerExpInExpressionAST::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
    result = p->mAttribute_mFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_registerIntegerExpInExpressionAST::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_registerIntegerExpInExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_registerIntegerExpInExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerExpInExpressionAST::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerIntegerExpInExpressionAST * p = (const cPtr_registerIntegerExpInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerIntegerExpInExpressionAST) ;
    result = p->mAttribute_mExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_registerIntegerExpInExpressionAST::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @registerIntegerExpInExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_registerIntegerExpInExpressionAST::cPtr_registerIntegerExpInExpressionAST (const GALGAS_lstring & in_mRegisterName,
                                                                                const GALGAS_lstring & in_mFieldName,
                                                                                const GALGAS_expressionAST & in_mExpression,
                                                                                const GALGAS_location & in_mExpressionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mRegisterName (in_mRegisterName),
mAttribute_mFieldName (in_mFieldName),
mAttribute_mExpression (in_mExpression),
mAttribute_mExpressionLocation (in_mExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerIntegerExpInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST ;
}

void cPtr_registerIntegerExpInExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@registerIntegerExpInExpressionAST:" ;
  mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerIntegerExpInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerIntegerExpInExpressionAST (mAttribute_mRegisterName, mAttribute_mFieldName, mAttribute_mExpression, mAttribute_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @registerIntegerExpInExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST ("registerIntegerExpInExpressionAST",
                                                          & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerExpInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerExpInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerExpInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerExpInExpressionAST GALGAS_registerIntegerExpInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerExpInExpressionAST result ;
  const GALGAS_registerIntegerExpInExpressionAST * p = (const GALGAS_registerIntegerExpInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerExpInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerExpInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_truncateExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
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


typeComparisonResult GALGAS_truncateExpressionAST::objectCompare (const GALGAS_truncateExpressionAST & inOperand) const {
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

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                            const GALGAS_lstring & inAttribute_mTypeName,
                                                                            const GALGAS_location & inAttribute_mEndOfExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncateExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_truncateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_truncateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_truncateExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_truncateExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_truncateExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mAttribute_mEndOfExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_truncateExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @truncateExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                        const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_location & in_mEndOfExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mExpression (in_mExpression),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mEndOfExpression (in_mEndOfExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_truncateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

void cPtr_truncateExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@truncateExpressionAST:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_truncateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_truncateExpressionAST (mAttribute_mExpression, mAttribute_mTypeName, mAttribute_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @truncateExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncateExpressionAST ("truncateExpressionAST",
                                              & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_truncateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_truncateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST result ;
  const GALGAS_truncateExpressionAST * p = (const GALGAS_truncateExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_truncateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typedConstantCall::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typedConstantCall * p = (const cPtr_typedConstantCall *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typedConstantCall) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOptionalTypeName.objectCompare (p->mAttribute_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstructorName.objectCompare (p->mAttribute_mConstructorName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typedConstantCall::objectCompare (const GALGAS_typedConstantCall & inOperand) const {
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

GALGAS_typedConstantCall::GALGAS_typedConstantCall (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCall GALGAS_typedConstantCall::constructor_default (LOCATION_ARGS) {
  return GALGAS_typedConstantCall::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCall::GALGAS_typedConstantCall (const cPtr_typedConstantCall * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typedConstantCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCall GALGAS_typedConstantCall::constructor_new (const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                    const GALGAS_lstring & inAttribute_mConstructorName
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCall result ;
  if (inAttribute_mOptionalTypeName.isValid () && inAttribute_mConstructorName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typedConstantCall (inAttribute_mOptionalTypeName, inAttribute_mConstructorName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedConstantCall::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCall * p = (const cPtr_typedConstantCall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCall) ;
    result = p->mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typedConstantCall::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typedConstantCall::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCall * p = (const cPtr_typedConstantCall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCall) ;
    result = p->mAttribute_mConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typedConstantCall::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @typedConstantCall class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typedConstantCall::cPtr_typedConstantCall (const GALGAS_lstring & in_mOptionalTypeName,
                                                const GALGAS_lstring & in_mConstructorName
                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mOptionalTypeName (in_mOptionalTypeName),
mAttribute_mConstructorName (in_mConstructorName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typedConstantCall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCall ;
}

void cPtr_typedConstantCall::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@typedConstantCall:" ;
  mAttribute_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typedConstantCall::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typedConstantCall (mAttribute_mOptionalTypeName, mAttribute_mConstructorName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typedConstantCall type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedConstantCall ("typedConstantCall",
                                          & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typedConstantCall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCall ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typedConstantCall::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedConstantCall (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCall GALGAS_typedConstantCall::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCall result ;
  const GALGAS_typedConstantCall * p = (const GALGAS_typedConstantCall *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedConstantCall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantCall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSourceVarName.objectCompare (p->mAttribute_mSourceVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldNameList.objectCompare (p->mAttribute_mFieldNameList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInExpressionAST::objectCompare (const GALGAS_varInExpressionAST & inOperand) const {
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

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (void) :
GALGAS_expressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mSourceVarName,
                                                                      const GALGAS_lstringlist & inAttribute_mFieldNameList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  if (inAttribute_mSourceVarName.isValid () && inAttribute_mFieldNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpressionAST (inAttribute_mSourceVarName, inAttribute_mFieldNameList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInExpressionAST::getter_mSourceVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    result = p->mAttribute_mSourceVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInExpressionAST::getter_mSourceVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_varInExpressionAST::getter_mFieldNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpressionAST * p = (const cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    result = p->mAttribute_mFieldNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_varInExpressionAST::getter_mFieldNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @varInExpressionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInExpressionAST::cPtr_varInExpressionAST (const GALGAS_lstring & in_mSourceVarName,
                                                  const GALGAS_lstringlist & in_mFieldNameList
                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mAttribute_mSourceVarName (in_mSourceVarName),
mAttribute_mFieldNameList (in_mFieldNameList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

void cPtr_varInExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@varInExpressionAST:" ;
  mAttribute_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpressionAST (mAttribute_mSourceVarName, mAttribute_mFieldNameList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varInExpressionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpressionAST ("varInExpressionAST",
                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  const GALGAS_varInExpressionAST * p = (const GALGAS_varInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_infixOperatorDescription::objectCompare (const GALGAS_infixOperatorDescription & inOperand) const {
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

GALGAS_infixOperatorDescription::GALGAS_infixOperatorDescription (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription::GALGAS_infixOperatorDescription (const cPtr_infixOperatorDescription * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorDescription) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @infixOperatorDescription class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixOperatorDescription::cPtr_infixOperatorDescription (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorDescription type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorDescription ("infixOperatorDescription",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorDescription::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorDescription::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorDescription (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorDescription::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorDescription result ;
  const GALGAS_infixOperatorDescription * p = (const GALGAS_infixOperatorDescription *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorDescription *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorDescription", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_infixObjectObjectOperatorDescription::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_infixObjectObjectOperatorDescription * p = (const cPtr_infixObjectObjectOperatorDescription *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_infixObjectObjectOperatorDescription) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_infixObjectObjectOperatorDescription::objectCompare (const GALGAS_infixObjectObjectOperatorDescription & inOperand) const {
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

GALGAS_infixObjectObjectOperatorDescription::GALGAS_infixObjectObjectOperatorDescription (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription::GALGAS_infixObjectObjectOperatorDescription (const cPtr_infixObjectObjectOperatorDescription * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixObjectObjectOperatorDescription) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription GALGAS_infixObjectObjectOperatorDescription::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_infixObjectObjectOperatorDescription result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_infixObjectObjectOperatorDescription (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_infixObjectObjectOperatorDescription::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_infixObjectObjectOperatorDescription * p = (const cPtr_infixObjectObjectOperatorDescription *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixObjectObjectOperatorDescription) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_infixObjectObjectOperatorDescription::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @infixObjectObjectOperatorDescription class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_infixObjectObjectOperatorDescription::cPtr_infixObjectObjectOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (THERE),
mAttribute_mOperator (in_mOperator) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_infixObjectObjectOperatorDescription::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;
}

void cPtr_infixObjectObjectOperatorDescription::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@infixObjectObjectOperatorDescription:" ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_infixObjectObjectOperatorDescription::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_infixObjectObjectOperatorDescription (mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @infixObjectObjectOperatorDescription type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ("infixObjectObjectOperatorDescription",
                                                             & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixObjectObjectOperatorDescription::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixObjectObjectOperatorDescription::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixObjectObjectOperatorDescription (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixObjectObjectOperatorDescription GALGAS_infixObjectObjectOperatorDescription::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_infixObjectObjectOperatorDescription result ;
  const GALGAS_infixObjectObjectOperatorDescription * p = (const GALGAS_infixObjectObjectOperatorDescription *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixObjectObjectOperatorDescription *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixObjectObjectOperatorDescription", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerObject_5F_literal_5F_divisionOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerObject_5F_literal_5F_divisionOperator * p = (const cPtr_integerObject_5F_literal_5F_divisionOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerObject_5F_literal_5F_divisionOperator) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_integerObject_5F_literal_5F_divisionOperator::objectCompare (const GALGAS_integerObject_5F_literal_5F_divisionOperator & inOperand) const {
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

GALGAS_integerObject_5F_literal_5F_divisionOperator::GALGAS_integerObject_5F_literal_5F_divisionOperator (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_divisionOperator::GALGAS_integerObject_5F_literal_5F_divisionOperator (const cPtr_integerObject_5F_literal_5F_divisionOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerObject_5F_literal_5F_divisionOperator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_divisionOperator GALGAS_integerObject_5F_literal_5F_divisionOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_divisionOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerObject_5F_literal_5F_divisionOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_integerObject_5F_literal_5F_divisionOperator::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerObject_5F_literal_5F_divisionOperator * p = (const cPtr_integerObject_5F_literal_5F_divisionOperator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerObject_5F_literal_5F_divisionOperator) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_integerObject_5F_literal_5F_divisionOperator::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @integerObject_literal_divisionOperator class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerObject_5F_literal_5F_divisionOperator::cPtr_integerObject_5F_literal_5F_divisionOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (THERE),
mAttribute_mOperator (in_mOperator) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerObject_5F_literal_5F_divisionOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_divisionOperator ;
}

void cPtr_integerObject_5F_literal_5F_divisionOperator::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "[@integerObject_literal_divisionOperator:" ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerObject_5F_literal_5F_divisionOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerObject_5F_literal_5F_divisionOperator (mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @integerObject_literal_divisionOperator type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_divisionOperator ("integerObject_literal_divisionOperator",
                                                                     & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerObject_5F_literal_5F_divisionOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_divisionOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerObject_5F_literal_5F_divisionOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerObject_5F_literal_5F_divisionOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_divisionOperator GALGAS_integerObject_5F_literal_5F_divisionOperator::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_divisionOperator result ;
  const GALGAS_integerObject_5F_literal_5F_divisionOperator * p = (const GALGAS_integerObject_5F_literal_5F_divisionOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerObject_5F_literal_5F_divisionOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerObject_literal_divisionOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerObject_5F_literal_5F_infixOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerObject_5F_literal_5F_infixOperator * p = (const cPtr_integerObject_5F_literal_5F_infixOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerObject_5F_literal_5F_infixOperator) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_integerObject_5F_literal_5F_infixOperator::objectCompare (const GALGAS_integerObject_5F_literal_5F_infixOperator & inOperand) const {
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

GALGAS_integerObject_5F_literal_5F_infixOperator::GALGAS_integerObject_5F_literal_5F_infixOperator (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator::GALGAS_integerObject_5F_literal_5F_infixOperator (const cPtr_integerObject_5F_literal_5F_infixOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerObject_5F_literal_5F_infixOperator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_infixOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerObject_5F_literal_5F_infixOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_integerObject_5F_literal_5F_infixOperator::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerObject_5F_literal_5F_infixOperator * p = (const cPtr_integerObject_5F_literal_5F_infixOperator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerObject_5F_literal_5F_infixOperator) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_integerObject_5F_literal_5F_infixOperator::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @integerObject_literal_infixOperator class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerObject_5F_literal_5F_infixOperator::cPtr_integerObject_5F_literal_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (THERE),
mAttribute_mOperator (in_mOperator) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerObject_5F_literal_5F_infixOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;
}

void cPtr_integerObject_5F_literal_5F_infixOperator::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@integerObject_literal_infixOperator:" ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerObject_5F_literal_5F_infixOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerObject_5F_literal_5F_infixOperator (mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @integerObject_literal_infixOperator type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ("integerObject_literal_infixOperator",
                                                                  & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerObject_5F_literal_5F_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerObject_5F_literal_5F_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerObject_5F_literal_5F_infixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerObject_5F_literal_5F_infixOperator GALGAS_integerObject_5F_literal_5F_infixOperator::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_integerObject_5F_literal_5F_infixOperator result ;
  const GALGAS_integerObject_5F_literal_5F_infixOperator * p = (const GALGAS_integerObject_5F_literal_5F_infixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerObject_5F_literal_5F_infixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerObject_literal_infixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literal_5F_integerObject_5F_infixOperator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literal_5F_integerObject_5F_infixOperator * p = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literal_5F_integerObject_5F_infixOperator::objectCompare (const GALGAS_literal_5F_integerObject_5F_infixOperator & inOperand) const {
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

GALGAS_literal_5F_integerObject_5F_infixOperator::GALGAS_literal_5F_integerObject_5F_infixOperator (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator::GALGAS_literal_5F_integerObject_5F_infixOperator (const cPtr_literal_5F_integerObject_5F_infixOperator * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literal_5F_integerObject_5F_infixOperator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (const GALGAS_llvmBinaryOperation & inAttribute_mOperator
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_integerObject_5F_infixOperator result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literal_5F_integerObject_5F_infixOperator (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_literal_5F_integerObject_5F_infixOperator::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_literal_5F_integerObject_5F_infixOperator * p = (const cPtr_literal_5F_integerObject_5F_infixOperator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literal_5F_integerObject_5F_infixOperator) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cPtr_literal_5F_integerObject_5F_infixOperator::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @literal_integerObject_infixOperator class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literal_5F_integerObject_5F_infixOperator::cPtr_literal_5F_integerObject_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (THERE),
mAttribute_mOperator (in_mOperator) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literal_5F_integerObject_5F_infixOperator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;
}

void cPtr_literal_5F_integerObject_5F_infixOperator::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@literal_integerObject_infixOperator:" ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literal_5F_integerObject_5F_infixOperator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literal_5F_integerObject_5F_infixOperator (mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @literal_integerObject_infixOperator type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ("literal_integerObject_infixOperator",
                                                                  & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literal_5F_integerObject_5F_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literal_5F_integerObject_5F_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literal_5F_integerObject_5F_infixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_integerObject_5F_infixOperator GALGAS_literal_5F_integerObject_5F_infixOperator::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_integerObject_5F_infixOperator result ;
  const GALGAS_literal_5F_integerObject_5F_infixOperator * p = (const GALGAS_literal_5F_integerObject_5F_infixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literal_5F_integerObject_5F_infixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literal_integerObject_infixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literal_5F_literal_5F_integerInfixOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literal_5F_literal_5F_integerInfixOperation * p = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literal_5F_literal_5F_integerInfixOperation::objectCompare (const GALGAS_literal_5F_literal_5F_integerInfixOperation & inOperand) const {
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

GALGAS_literal_5F_literal_5F_integerInfixOperation::GALGAS_literal_5F_literal_5F_integerInfixOperation (void) :
GALGAS_infixOperatorDescription () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation::GALGAS_literal_5F_literal_5F_integerInfixOperation (const cPtr_literal_5F_literal_5F_integerInfixOperation * inSourcePtr) :
GALGAS_infixOperatorDescription (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (const GALGAS_literalIntegerInfixOperator & inAttribute_mOperator
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_literal_5F_integerInfixOperation result ;
  if (inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literal_5F_literal_5F_integerInfixOperation (inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literal_5F_literal_5F_integerInfixOperation::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_literalIntegerInfixOperator result ;
  if (NULL != mObjectPtr) {
    const cPtr_literal_5F_literal_5F_integerInfixOperation * p = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator cPtr_literal_5F_literal_5F_integerInfixOperation::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @literal_literal_integerInfixOperation class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literal_5F_literal_5F_integerInfixOperation::cPtr_literal_5F_literal_5F_integerInfixOperation (const GALGAS_literalIntegerInfixOperator & in_mOperator
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_infixOperatorDescription (THERE),
mAttribute_mOperator (in_mOperator) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literal_5F_literal_5F_integerInfixOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;
}

void cPtr_literal_5F_literal_5F_integerInfixOperation::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@literal_literal_integerInfixOperation:" ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literal_5F_literal_5F_integerInfixOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literal_5F_literal_5F_integerInfixOperation (mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @literal_literal_integerInfixOperation type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ("literal_literal_integerInfixOperation",
                                                                    & kTypeDescriptor_GALGAS_infixOperatorDescription) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literal_5F_literal_5F_integerInfixOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literal_5F_literal_5F_integerInfixOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literal_5F_literal_5F_integerInfixOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literal_5F_literal_5F_integerInfixOperation GALGAS_literal_5F_literal_5F_integerInfixOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literal_5F_literal_5F_integerInfixOperation result ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation * p = (const GALGAS_literal_5F_literal_5F_integerInfixOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literal_5F_literal_5F_integerInfixOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literal_literal_integerInfixOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_instructionAST::objectCompare (const GALGAS_instructionAST & inOperand) const {
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

GALGAS_instructionAST::GALGAS_instructionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST::GALGAS_instructionAST (const cPtr_instructionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_instructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @instructionAST class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_instructionAST::cPtr_instructionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @instructionAST type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionAST ("instructionAST",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST GALGAS_instructionAST::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instructionAST result ;
  const GALGAS_instructionAST * p = (const GALGAS_instructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_assertInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assertInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAssertInstructionLocation.objectCompare (p->mAttribute_mAssertInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assertInstructionAST::objectCompare (const GALGAS_assertInstructionAST & inOperand) const {
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

GALGAS_assertInstructionAST::GALGAS_assertInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionAST::GALGAS_assertInstructionAST (const cPtr_assertInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionAST GALGAS_assertInstructionAST::constructor_new (const GALGAS_location & inAttribute_mAssertInstructionLocation,
                                                                          const GALGAS_expressionAST & inAttribute_mExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST result ;
  if (inAttribute_mAssertInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assertInstructionAST (inAttribute_mAssertInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_assertInstructionAST::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    result = p->mAttribute_mAssertInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_assertInstructionAST::getter_mAssertInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssertInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_assertInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assertInstructionAST * p = (const cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_assertInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @assertInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assertInstructionAST::cPtr_assertInstructionAST (const GALGAS_location & in_mAssertInstructionLocation,
                                                      const GALGAS_expressionAST & in_mExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mAssertInstructionLocation (in_mAssertInstructionLocation),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assertInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

void cPtr_assertInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@assertInstructionAST:" ;
  mAttribute_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assertInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assertInstructionAST (mAttribute_mAssertInstructionLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @assertInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assertInstructionAST ("assertInstructionAST",
                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assertInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assertInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assertInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assertInstructionAST GALGAS_assertInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_assertInstructionAST result ;
  const GALGAS_assertInstructionAST * p = (const GALGAS_assertInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assertInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_assignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVarName.objectCompare (p->mAttribute_mTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldList.objectCompare (p->mAttribute_mFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assignmentInstructionAST::objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const {
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

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                                  const GALGAS_lstringlist & inAttribute_mFieldList,
                                                                                  const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  if (inAttribute_mTargetVarName.isValid () && inAttribute_mFieldList.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (inAttribute_mTargetVarName, inAttribute_mFieldList, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_assignmentInstructionAST::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mTargetVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_assignmentInstructionAST::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_assignmentInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mFieldList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_assignmentInstructionAST::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @assignmentInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GALGAS_lstring & in_mTargetVarName,
                                                              const GALGAS_lstringlist & in_mFieldList,
                                                              const GALGAS_expressionAST & in_mSourceExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mTargetVarName (in_mTargetVarName),
mAttribute_mFieldList (in_mFieldList),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionAST:" ;
  mAttribute_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mAttribute_mTargetVarName, mAttribute_mFieldList, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @assignmentInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                 & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  const GALGAS_assignmentInstructionAST * p = (const GALGAS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_checkInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_checkInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mCheckInstructionLocation.objectCompare (p->mAttribute_mCheckInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_checkInstructionAST::objectCompare (const GALGAS_checkInstructionAST & inOperand) const {
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

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (const cPtr_checkInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_checkInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::constructor_new (const GALGAS_location & inAttribute_mCheckInstructionLocation,
                                                                        const GALGAS_expressionAST & inAttribute_mExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  if (inAttribute_mCheckInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_checkInstructionAST (inAttribute_mCheckInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_checkInstructionAST::getter_mCheckInstructionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    result = p->mAttribute_mCheckInstructionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_checkInstructionAST::getter_mCheckInstructionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCheckInstructionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_checkInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_checkInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @checkInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_checkInstructionAST::cPtr_checkInstructionAST (const GALGAS_location & in_mCheckInstructionLocation,
                                                    const GALGAS_expressionAST & in_mExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mCheckInstructionLocation (in_mCheckInstructionLocation),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_checkInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

void cPtr_checkInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@checkInstructionAST:" ;
  mAttribute_mCheckInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_checkInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_checkInstructionAST (mAttribute_mCheckInstructionLocation, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @checkInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkInstructionAST ("checkInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_checkInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_checkInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  const GALGAS_checkInstructionAST * p = (const GALGAS_checkInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIteratedExpression.objectCompare (p->mAttribute_mIteratedExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_iteratedExpression_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoInstructionList.objectCompare (p->mAttribute_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_do_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_do_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
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

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST GALGAS_forInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_expressionAST & inAttribute_mIteratedExpression,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_iteratedExpression_5F_instruction,
                                                                    const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mIteratedExpression.isValid () && inAttribute_mEndOf_5F_iteratedExpression_5F_instruction.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (inAttribute_mVarName, inAttribute_mIteratedExpression, inAttribute_mEndOf_5F_iteratedExpression_5F_instruction, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forInstructionAST::getter_mIteratedExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mIteratedExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forInstructionAST::getter_mIteratedExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIteratedExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_iteratedExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_iteratedExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_iteratedExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_do_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_do_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @forInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_lstring & in_mVarName,
                                                const GALGAS_expressionAST & in_mIteratedExpression,
                                                const GALGAS_location & in_mEndOf_5F_iteratedExpression_5F_instruction,
                                                const GALGAS_instructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mIteratedExpression (in_mIteratedExpression),
mAttribute_mEndOf_5F_iteratedExpression_5F_instruction (in_mEndOf_5F_iteratedExpression_5F_instruction),
mAttribute_mDoInstructionList (in_mDoInstructionList),
mAttribute_mEndOf_5F_do_5F_instruction (in_mEndOf_5F_do_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIteratedExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_iteratedExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_do_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionAST (mAttribute_mVarName, mAttribute_mIteratedExpression, mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, mAttribute_mDoInstructionList, mAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @forInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_ifInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTestExpression.objectCompare (p->mAttribute_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTestExpressionEndLocation.objectCompare (p->mAttribute_mTestExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mThenInstructionList.objectCompare (p->mAttribute_mThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfThenInstructionList.objectCompare (p->mAttribute_mEndOfThenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mElseInstructionList.objectCompare (p->mAttribute_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfElseInstructionList.objectCompare (p->mAttribute_mEndOfElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_if_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_if_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_ifInstructionAST::objectCompare (const GALGAS_ifInstructionAST & inOperand) const {
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

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mTestExpression,
                                                                  const GALGAS_location & inAttribute_mTestExpressionEndLocation,
                                                                  const GALGAS_instructionListAST & inAttribute_mThenInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOfThenInstructionList,
                                                                  const GALGAS_instructionListAST & inAttribute_mElseInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOfElseInstructionList,
                                                                  const GALGAS_location & inAttribute_mEndOf_5F_if_5F_instruction
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  if (inAttribute_mTestExpression.isValid () && inAttribute_mTestExpressionEndLocation.isValid () && inAttribute_mThenInstructionList.isValid () && inAttribute_mEndOfThenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElseInstructionList.isValid () && inAttribute_mEndOf_5F_if_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (inAttribute_mTestExpression, inAttribute_mTestExpressionEndLocation, inAttribute_mThenInstructionList, inAttribute_mEndOfThenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElseInstructionList, inAttribute_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_ifInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_ifInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mTestExpressionEndLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mTestExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpressionEndLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_ifInstructionAST::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_ifInstructionAST::getter_mThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mEndOfThenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOfThenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfThenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_ifInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_ifInstructionAST::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mEndOfElseInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfElseInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ifInstructionAST::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_ifInstructionAST * p = (const cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_if_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_ifInstructionAST::getter_mEndOf_5F_if_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_if_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @ifInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GALGAS_expressionAST & in_mTestExpression,
                                              const GALGAS_location & in_mTestExpressionEndLocation,
                                              const GALGAS_instructionListAST & in_mThenInstructionList,
                                              const GALGAS_location & in_mEndOfThenInstructionList,
                                              const GALGAS_instructionListAST & in_mElseInstructionList,
                                              const GALGAS_location & in_mEndOfElseInstructionList,
                                              const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mTestExpression (in_mTestExpression),
mAttribute_mTestExpressionEndLocation (in_mTestExpressionEndLocation),
mAttribute_mThenInstructionList (in_mThenInstructionList),
mAttribute_mEndOfThenInstructionList (in_mEndOfThenInstructionList),
mAttribute_mElseInstructionList (in_mElseInstructionList),
mAttribute_mEndOfElseInstructionList (in_mEndOfElseInstructionList),
mAttribute_mEndOf_5F_if_5F_instruction (in_mEndOf_5F_if_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@ifInstructionAST:" ;
  mAttribute_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTestExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfThenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_ifInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mAttribute_mTestExpression, mAttribute_mTestExpressionEndLocation, mAttribute_mThenInstructionList, mAttribute_mEndOfThenInstructionList, mAttribute_mElseInstructionList, mAttribute_mEndOfElseInstructionList, mAttribute_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ifInstructionAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  const GALGAS_ifInstructionAST * p = (const GALGAS_ifInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_incDecInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_incDecInstructionAST::objectCompare (const GALGAS_incDecInstructionAST & inOperand) const {
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

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionAST::GALGAS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::constructor_new (const GALGAS_incDecKind & inAttribute_mKind,
                                                                          const GALGAS_lstring & inAttribute_mVarName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  if (inAttribute_mKind.isValid () && inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_incDecInstructionAST (inAttribute_mKind, inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_incDecKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind cPtr_incDecInstructionAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_incDecInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_incDecInstructionAST * p = (const cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_incDecInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @incDecInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_incDecInstructionAST::cPtr_incDecInstructionAST (const GALGAS_incDecKind & in_mKind,
                                                      const GALGAS_lstring & in_mVarName
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mKind (in_mKind),
mAttribute_mVarName (in_mVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_incDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

void cPtr_incDecInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@incDecInstructionAST:" ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_incDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_incDecInstructionAST (mAttribute_mKind, mAttribute_mVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @incDecInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecInstructionAST ("incDecInstructionAST",
                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_incDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST result ;
  const GALGAS_incDecInstructionAST * p = (const GALGAS_incDecInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_letInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionalTypeName.objectCompare (p->mAttribute_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_letInstructionWithAssignmentAST::objectCompare (const GALGAS_letInstructionWithAssignmentAST & inOperand) const {
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

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionWithAssignmentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_letInstructionWithAssignmentAST (inAttribute_mVarName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_letInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_letInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @letInstructionWithAssignmentAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mOptionalTypeName (in_mOptionalTypeName),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_letInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

void cPtr_letInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@letInstructionWithAssignmentAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_letInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_letInstructionWithAssignmentAST (mAttribute_mVarName, mAttribute_mOptionalTypeName, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @letInstructionWithAssignmentAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ("letInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_letInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_letInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  const GALGAS_letInstructionWithAssignmentAST * p = (const GALGAS_letInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_letInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_methodCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMethodName.objectCompare (p->mAttribute_mMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEffectiveParameterList.objectCompare (p->mAttribute_mEffectiveParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_methodCallInstructionAST::objectCompare (const GALGAS_methodCallInstructionAST & inOperand) const {
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

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionAST::GALGAS_methodCallInstructionAST (const cPtr_methodCallInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mReceiverExpression,
                                                                                  const GALGAS_lstring & inAttribute_mMethodName,
                                                                                  const GALGAS_procEffectiveParameterListAST & inAttribute_mEffectiveParameterList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mMethodName.isValid () && inAttribute_mEffectiveParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_methodCallInstructionAST (inAttribute_mReceiverExpression, inAttribute_mMethodName, inAttribute_mEffectiveParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_methodCallInstructionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_methodCallInstructionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_methodCallInstructionAST::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mAttribute_mMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_methodCallInstructionAST::getter_mMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_methodCallInstructionAST::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_methodCallInstructionAST * p = (const cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    result = p->mAttribute_mEffectiveParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST cPtr_methodCallInstructionAST::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @methodCallInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_methodCallInstructionAST::cPtr_methodCallInstructionAST (const GALGAS_expressionAST & in_mReceiverExpression,
                                                              const GALGAS_lstring & in_mMethodName,
                                                              const GALGAS_procEffectiveParameterListAST & in_mEffectiveParameterList
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mMethodName (in_mMethodName),
mAttribute_mEffectiveParameterList (in_mEffectiveParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_methodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

void cPtr_methodCallInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@methodCallInstructionAST:" ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_methodCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_methodCallInstructionAST (mAttribute_mReceiverExpression, mAttribute_mMethodName, mAttribute_mEffectiveParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @methodCallInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_methodCallInstructionAST ("methodCallInstructionAST",
                                                 & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_methodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_methodCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST result ;
  const GALGAS_methodCallInstructionAST * p = (const GALGAS_methodCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_methodCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_operatorAssignInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_operatorAssignInstructionAST * p = (const cPtr_operatorAssignInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_operatorAssignInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTargetVarName.objectCompare (p->mAttribute_mTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_operatorAssignInstructionAST::objectCompare (const GALGAS_operatorAssignInstructionAST & inOperand) const {
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

GALGAS_operatorAssignInstructionAST::GALGAS_operatorAssignInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignInstructionAST::GALGAS_operatorAssignInstructionAST (const cPtr_operatorAssignInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_operatorAssignInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignInstructionAST GALGAS_operatorAssignInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                                          const GALGAS_expressionAST & inAttribute_mSourceExpression,
                                                                                          const GALGAS_operatorAssignKind & inAttribute_mOperator
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_operatorAssignInstructionAST result ;
  if (inAttribute_mTargetVarName.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mOperator.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_operatorAssignInstructionAST (inAttribute_mTargetVarName, inAttribute_mSourceExpression, inAttribute_mOperator COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_operatorAssignInstructionAST::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_operatorAssignInstructionAST * p = (const cPtr_operatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_operatorAssignInstructionAST) ;
    result = p->mAttribute_mTargetVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_operatorAssignInstructionAST::getter_mTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_operatorAssignInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_operatorAssignInstructionAST * p = (const cPtr_operatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_operatorAssignInstructionAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_operatorAssignInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignInstructionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_operatorAssignKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_operatorAssignInstructionAST * p = (const cPtr_operatorAssignInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_operatorAssignInstructionAST) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind cPtr_operatorAssignInstructionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @operatorAssignInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_operatorAssignInstructionAST::cPtr_operatorAssignInstructionAST (const GALGAS_lstring & in_mTargetVarName,
                                                                      const GALGAS_expressionAST & in_mSourceExpression,
                                                                      const GALGAS_operatorAssignKind & in_mOperator
                                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mTargetVarName (in_mTargetVarName),
mAttribute_mSourceExpression (in_mSourceExpression),
mAttribute_mOperator (in_mOperator) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_operatorAssignInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operatorAssignInstructionAST ;
}

void cPtr_operatorAssignInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@operatorAssignInstructionAST:" ;
  mAttribute_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_operatorAssignInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_operatorAssignInstructionAST (mAttribute_mTargetVarName, mAttribute_mSourceExpression, mAttribute_mOperator COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @operatorAssignInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operatorAssignInstructionAST ("operatorAssignInstructionAST",
                                                     & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operatorAssignInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operatorAssignInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operatorAssignInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operatorAssignInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignInstructionAST GALGAS_operatorAssignInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_operatorAssignInstructionAST result ;
  const GALGAS_operatorAssignInstructionAST * p = (const GALGAS_operatorAssignInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operatorAssignInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operatorAssignInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_procCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverName.objectCompare (p->mAttribute_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mProcName.objectCompare (p->mAttribute_mProcName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEffectiveParameterList.objectCompare (p->mAttribute_mEffectiveParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_procCallInstructionAST::objectCompare (const GALGAS_procCallInstructionAST & inOperand) const {
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

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procCallInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_procEffectiveParameterListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST::GALGAS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mReceiverName,
                                                                              const GALGAS_lstring & inAttribute_mProcName,
                                                                              const GALGAS_procEffectiveParameterListAST & inAttribute_mEffectiveParameterList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  if (inAttribute_mReceiverName.isValid () && inAttribute_mProcName.isValid () && inAttribute_mEffectiveParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procCallInstructionAST (inAttribute_mReceiverName, inAttribute_mProcName, inAttribute_mEffectiveParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mAttribute_mReceiverName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procCallInstructionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallInstructionAST::getter_mProcName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mAttribute_mProcName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procCallInstructionAST::getter_mProcName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procCallInstructionAST::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procCallInstructionAST * p = (const cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    result = p->mAttribute_mEffectiveParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST cPtr_procCallInstructionAST::getter_mEffectiveParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @procCallInstructionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (const GALGAS_lstring & in_mReceiverName,
                                                          const GALGAS_lstring & in_mProcName,
                                                          const GALGAS_procEffectiveParameterListAST & in_mEffectiveParameterList
                                                          COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mReceiverName (in_mReceiverName),
mAttribute_mProcName (in_mProcName),
mAttribute_mEffectiveParameterList (in_mEffectiveParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_procCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

void cPtr_procCallInstructionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@procCallInstructionAST:" ;
  mAttribute_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mProcName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_procCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procCallInstructionAST (mAttribute_mReceiverName, mAttribute_mProcName, mAttribute_mEffectiveParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procCallInstructionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallInstructionAST ("procCallInstructionAST",
                                               & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST result ;
  const GALGAS_procCallInstructionAST * p = (const GALGAS_procCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_throwInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_throwInstructionAST * p = (const cPtr_throwInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_throwInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mThrowLocation.objectCompare (p->mAttribute_mThrowLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCodeExpression.objectCompare (p->mAttribute_mCodeExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_throwInstructionAST::objectCompare (const GALGAS_throwInstructionAST & inOperand) const {
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

GALGAS_throwInstructionAST::GALGAS_throwInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionAST::GALGAS_throwInstructionAST (const cPtr_throwInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_throwInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionAST GALGAS_throwInstructionAST::constructor_new (const GALGAS_location & inAttribute_mThrowLocation,
                                                                        const GALGAS_expressionAST & inAttribute_mCodeExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_throwInstructionAST result ;
  if (inAttribute_mThrowLocation.isValid () && inAttribute_mCodeExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_throwInstructionAST (inAttribute_mThrowLocation, inAttribute_mCodeExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_throwInstructionAST::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_throwInstructionAST * p = (const cPtr_throwInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_throwInstructionAST) ;
    result = p->mAttribute_mThrowLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_throwInstructionAST::getter_mThrowLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mThrowLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_throwInstructionAST::getter_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_throwInstructionAST * p = (const cPtr_throwInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_throwInstructionAST) ;
    result = p->mAttribute_mCodeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_throwInstructionAST::getter_mCodeExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCodeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @throwInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_throwInstructionAST::cPtr_throwInstructionAST (const GALGAS_location & in_mThrowLocation,
                                                    const GALGAS_expressionAST & in_mCodeExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mThrowLocation (in_mThrowLocation),
mAttribute_mCodeExpression (in_mCodeExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_throwInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_throwInstructionAST ;
}

void cPtr_throwInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@throwInstructionAST:" ;
  mAttribute_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCodeExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_throwInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_throwInstructionAST (mAttribute_mThrowLocation, mAttribute_mCodeExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @throwInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_throwInstructionAST ("throwInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_throwInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_throwInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_throwInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_throwInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_throwInstructionAST GALGAS_throwInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_throwInstructionAST result ;
  const GALGAS_throwInstructionAST * p = (const GALGAS_throwInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_throwInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("throwInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInstructionAST::objectCompare (const GALGAS_varInstructionAST & inOperand) const {
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

GALGAS_varInstructionAST::GALGAS_varInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST GALGAS_varInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST::GALGAS_varInstructionAST (const cPtr_varInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST GALGAS_varInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_lstring & inAttribute_mTypeName
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionAST result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInstructionAST (inAttribute_mVarName, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @varInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInstructionAST::cPtr_varInstructionAST (const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstring & in_mTypeName
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mTypeName (in_mTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionAST ;
}

void cPtr_varInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@varInstructionAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInstructionAST (mAttribute_mVarName, mAttribute_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @varInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInstructionAST ("varInstructionAST",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST GALGAS_varInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionAST result ;
  const GALGAS_varInstructionAST * p = (const GALGAS_varInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionalTypeName.objectCompare (p->mAttribute_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceExpression.objectCompare (p->mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInstructionWithAssignmentAST::objectCompare (const GALGAS_varInstructionWithAssignmentAST & inOperand) const {
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

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionWithAssignmentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInstructionWithAssignmentAST (inAttribute_mVarName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mAttribute_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_varInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mAttribute_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_varInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @varInstructionWithAssignmentAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mOptionalTypeName (in_mOptionalTypeName),
mAttribute_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

void cPtr_varInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varInstructionWithAssignmentAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInstructionWithAssignmentAST (mAttribute_mVarName, mAttribute_mOptionalTypeName, mAttribute_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @varInstructionWithAssignmentAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ("varInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  const GALGAS_varInstructionWithAssignmentAST * p = (const GALGAS_varInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_whileInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_whileInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTestExpression.objectCompare (p->mAttribute_mTestExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_test_5F_expression.objectCompare (p->mAttribute_mEndOf_5F_test_5F_expression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWhileInstructionList.objectCompare (p->mAttribute_mWhileInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOf_5F_while_5F_instruction.objectCompare (p->mAttribute_mEndOf_5F_while_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_whileInstructionAST::objectCompare (const GALGAS_whileInstructionAST & inOperand) const {
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

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionAST::GALGAS_whileInstructionAST (const cPtr_whileInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_whileInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mTestExpression,
                                                                        const GALGAS_location & inAttribute_mEndOf_5F_test_5F_expression,
                                                                        const GALGAS_instructionListAST & inAttribute_mWhileInstructionList,
                                                                        const GALGAS_location & inAttribute_mEndOf_5F_while_5F_instruction
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST result ;
  if (inAttribute_mTestExpression.isValid () && inAttribute_mEndOf_5F_test_5F_expression.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mEndOf_5F_while_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_whileInstructionAST (inAttribute_mTestExpression, inAttribute_mEndOf_5F_test_5F_expression, inAttribute_mWhileInstructionList, inAttribute_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_whileInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mTestExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_whileInstructionAST::getter_mTestExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTestExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_test_5F_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionAST::getter_mEndOf_5F_test_5F_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_test_5F_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_whileInstructionAST::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mWhileInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_whileInstructionAST::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_whileInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_whileInstructionAST * p = (const cPtr_whileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_whileInstructionAST) ;
    result = p->mAttribute_mEndOf_5F_while_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_whileInstructionAST::getter_mEndOf_5F_while_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_while_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @whileInstructionAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_whileInstructionAST::cPtr_whileInstructionAST (const GALGAS_expressionAST & in_mTestExpression,
                                                    const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                                    const GALGAS_instructionListAST & in_mWhileInstructionList,
                                                    const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (THERE),
mAttribute_mTestExpression (in_mTestExpression),
mAttribute_mEndOf_5F_test_5F_expression (in_mEndOf_5F_test_5F_expression),
mAttribute_mWhileInstructionList (in_mWhileInstructionList),
mAttribute_mEndOf_5F_while_5F_instruction (in_mEndOf_5F_while_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_whileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

void cPtr_whileInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@whileInstructionAST:" ;
  mAttribute_mTestExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOf_5F_while_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_whileInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_whileInstructionAST (mAttribute_mTestExpression, mAttribute_mEndOf_5F_test_5F_expression, mAttribute_mWhileInstructionList, mAttribute_mEndOf_5F_while_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @whileInstructionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_whileInstructionAST ("whileInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_whileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_whileInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_whileInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_whileInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_whileInstructionAST GALGAS_whileInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_whileInstructionAST result ;
  const GALGAS_whileInstructionAST * p = (const GALGAS_whileInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_whileInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("whileInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "plm-target",
  "plm",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "a target definition text file with the .plm-target extension",
  "a source text file with the .plm extension",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

const char * projectVersionString (void) {
  return "1.0.0" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedTargets.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_embeddedFiles = var_fw.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 26)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded targets:\n")  COMMA_SOURCE_FILE ("target-generation.galgas", 27)) ;
      cEnumerator_stringlist enumerator_1371 (var_embeddedFiles, kEnumeration_up) ;
      while (enumerator_1371.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1371.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("target-generation.galgas", 29)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_1371.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 30)).getter_stringByDeletingPathExtension (SOURCE_FILE ("target-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 30)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 30))  COMMA_SOURCE_FILE ("target-generation.galgas", 30)) ;
        }
        enumerator_1371.gotoNextObject () ;
      }
    }
    GALGAS_string var_path = GALGAS_string (gOption_plm_5F_options_extractEmbeddedTargets.getter_value ()) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_path.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_stringlist var_embeddedFiles = var_fw.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 36)) ;
      cEnumerator_stringlist enumerator_1690 (var_embeddedFiles, kEnumeration_up) ;
      while (enumerator_1690.hasCurrentObject ()) {
        GALGAS_string var_filePath = var_path.add_operation (enumerator_1690.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 38)) ;
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_filePath, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39))  COMMA_SOURCE_FILE ("target-generation.galgas", 39)) ;
        GALGAS_string var_dir = var_filePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 40)) ;
        var_dir.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 41)) ;
        GALGAS_string var_text = var_fw.getter_textFileContentsAtPath (enumerator_1690.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 42)) ;
        GALGAS_bool joker_1962 ; // Joker input parameter
        var_text.method_writeToFileWhenDifferentContents (var_filePath, joker_1962, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
        enumerator_1690.gotoNextObject () ;
      }
    }
  }
  {
    GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedSampleFiles.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_stringlist var_files = var_fw.getter_allTextFilePathes (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded sample code:\n")  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
      cEnumerator_stringlist enumerator_796 (var_files, kEnumeration_up) ;
      while (enumerator_796.hasCurrentObject ()) {
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_796.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
        enumerator_796.gotoNextObject () ;
      }
    }
    GALGAS_string var_path = GALGAS_string (gOption_plm_5F_options_extractEmbeddedSampleFile.getter_value ()) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_path.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = var_fw.getter_fileExistsAtPath (var_path, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 24)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_text = var_fw.getter_textFileContentsAtPath (var_path, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 25)) ;
        GALGAS_string var_sourceName = var_path.getter_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas", 26)) ;
        GALGAS_bool joker_1128 ; // Joker input parameter
        var_text.method_writeToFileWhenDifferentContents (var_sourceName, joker_1128, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 27)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_location location_6 (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("there is no '").add_operation (var_path, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GALGAS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring /* constinArgument_inSourceFile */,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_1'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__31_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_galgas_5F_builtin_5F_options_mode.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.getter_value ()).operator_not (SOURCE_FILE ("program.galgas", 16)) COMMA_SOURCE_FILE ("program.galgas", 16)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_importFilesAndCompile (constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 17)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "" COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "plm-target") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_plm_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_plm_5F_target_5F_grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_plm_5F_target_5F_grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_plm_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "plm") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_plm_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_plm_5F_grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_plm_5F_grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_plm_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
        closeTrace () ;
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
      routine_after (commonLexique COMMA_HERE) ;
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
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract category getter '@abstractDeclaration location'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_abstractDeclaration_location> gCategoryGetterTable_abstractDeclaration_location ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_location (const int32_t inClassIndex,
                                   categoryGetterSignature_abstractDeclaration_location inGetter) {
  gCategoryGetterTable_abstractDeclaration_location.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_abstractDeclaration_location (void) {
  gCategoryGetterTable_abstractDeclaration_location.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractDeclaration_location (NULL,
                                                         freeCategoryGetter_abstractDeclaration_location) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location callCategoryGetter_location (const cPtr_abstractDeclaration * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_abstractDeclaration_location f = NULL ;
    if (classIndex < gCategoryGetterTable_abstractDeclaration_location.count ()) {
      f = gCategoryGetterTable_abstractDeclaration_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_abstractDeclaration_location.count ()) {
           f = gCategoryGetterTable_abstractDeclaration_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_abstractDeclaration_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

