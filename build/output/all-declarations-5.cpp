#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


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
  GALGAS_stringset var_importedFileAbsolutePathSet_1119 = GALGAS_stringset::constructor_setWithString (constinArgument_inSourceFile.getter_string (HERE)  COMMA_SOURCE_FILE ("program.galgas", 32)) ;
  GALGAS_string var_currentDirectory_1182 = constinArgument_inSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 33)) ;
  {
  routine_recursiveImportFiles (var_ast_905, var_currentDirectory_1182, var_importedFileList_1007, var_importedFileAbsolutePathSet_1119, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 34)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_targetNameSet_1512 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("program.galgas", 42)) ;
    cEnumerator_lstringlist enumerator_1560 (var_ast_905.getter_mTargetListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_1560.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_targetNameSet_1512.getter_hasKey (enumerator_1560.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("program.galgas", 44)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_1560.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 45)), GALGAS_string ("Duplicated target"), fixItArray2  COMMA_SOURCE_FILE ("program.galgas", 45)) ;
      }
      var_targetNameSet_1512.addAssign_operation (enumerator_1560.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("program.galgas", 47)) ;
      enumerator_1560.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 51)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_ast_905.getter_mTargetListAST (HERE).getter_length (SOURCE_FILE ("program.galgas", 52)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticWarning (var_endOfSourceFile_1048, GALGAS_string ("no target: only syntax analysis is performed"), fixItArray5  COMMA_SOURCE_FILE ("program.galgas", 53)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_ast_905.getter_mTargetListAST (HERE).getter_length (SOURCE_FILE ("program.galgas", 54)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (var_endOfSourceFile_1048, var_ast_905.getter_mTargetListAST (HERE).getter_length (SOURCE_FILE ("program.galgas", 55)).getter_string (SOURCE_FILE ("program.galgas", 55)).add_operation (GALGAS_string (" targets: only syntax analysis is performed"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 55)), fixItArray7  COMMA_SOURCE_FILE ("program.galgas", 55)) ;
      }else if (kBoolFalse == test_6) {
        cEnumerator_lstringlist enumerator_2144 (var_ast_905.getter_mTargetListAST (HERE), kENUMERATION_UP) ;
        while (enumerator_2144.hasCurrentObject ()) {
          {
          routine_compileProject (constinArgument_inSourceFile, var_ast_905, enumerator_2144.current_mValue (HERE), var_endOfSourceFile_1048, var_currentDirectory_1182, var_importedFileAbsolutePathSet_1119, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 58)) ;
          }
          enumerator_2144.gotoNextObject () ;
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
  GALGAS_ast var_ast_2876 = constinArgument_inAST ;
  GALGAS_stringset var_sourceFileAbsolutePathSet_2923 = constinArgument_inImportedFileAbsolutePathSet ;
  {
  routine_addTargetSpecificFiles (constinArgument_inTargetName, var_ast_2876, constinArgument_inCurrentDirectory, var_sourceFileAbsolutePathSet_2923, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 84)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_ast_2876.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_booleanDeclaration::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 93)).getter_nowhere (SOURCE_FILE ("program.galgas", 93))  COMMA_SOURCE_FILE ("program.galgas", 93))  COMMA_SOURCE_FILE ("program.galgas", 93)) ;
    var_ast_2876.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_literalIntegerDeclaration::constructor_new (SOURCE_FILE ("program.galgas", 95))  COMMA_SOURCE_FILE ("program.galgas", 95)) ;
    var_ast_2876.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_literalStringDeclaration::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 97)).getter_nowhere (SOURCE_FILE ("program.galgas", 97))  COMMA_SOURCE_FILE ("program.galgas", 97))  COMMA_SOURCE_FILE ("program.galgas", 97)) ;
    GALGAS_declarationListAST var_declarationList_3759 = var_ast_2876.getter_mDeclarationListAST (HERE) ;
    GALGAS_declarationListAST var_newDeclarationList_3832 = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("program.galgas", 100)) ;
    GALGAS_extensionDeclarationListAST var_extensionDeclarationListAST_3873 = var_ast_2876.getter_mExtensionDeclarationListAST (HERE) ;
    cEnumerator_declarationListAST enumerator_3949 (var_declarationList_3759, kENUMERATION_UP) ;
    while (enumerator_3949.hasCurrentObject ()) {
      GALGAS_abstractDeclaration var_newDeclaration_4034 ;
      callExtensionMethod_addExtension ((const cPtr_abstractDeclaration *) enumerator_3949.current_mDeclaration (HERE).ptr (), var_extensionDeclarationListAST_3873, var_newDeclaration_4034, inCompiler COMMA_SOURCE_FILE ("program.galgas", 103)) ;
      var_newDeclarationList_3832.addAssign_operation (var_newDeclaration_4034  COMMA_SOURCE_FILE ("program.galgas", 104)) ;
      enumerator_3949.gotoNextObject () ;
    }
    var_ast_2876.mProperty_mDeclarationListAST = var_newDeclarationList_3832 ;
    cEnumerator_extensionDeclarationListAST enumerator_4246 (var_extensionDeclarationListAST_3873, kENUMERATION_UP) ;
    while (enumerator_4246.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_4246.current_mTypeName (HERE).getter_location (SOURCE_FILE ("program.galgas", 109)), GALGAS_string ("this type is not defined or does not support extension"), fixItArray1  COMMA_SOURCE_FILE ("program.galgas", 109)) ;
      enumerator_4246.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 113)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    routine_retainRequiredModules (var_ast_2876, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 114)) ;
    }
  }
  GALGAS_declarationListAST var_orderedDeclarationListAST_4636 = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("program.galgas", 117)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 118)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    routine_buildOrderedDeclarationList (var_ast_2876, constinArgument_inSourceFile.getter_string (HERE), constinArgument_inEndOfSourceFile, var_orderedDeclarationListAST_4636, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 119)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 127)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    cEnumerator_checkTargetListAST enumerator_5074 (var_ast_2876.getter_mCheckTargetListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_5074.hasCurrentObject ()) {
      GALGAS_bool var_accepted_5096 = GALGAS_bool (false) ;
      cEnumerator_lstringlist enumerator_5153 (enumerator_5074.current_mAcceptedTargetList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_accepted_5096.operator_not (SOURCE_FILE ("program.galgas", 130)).isValidAndTrue () ;
      if (enumerator_5153.hasCurrentObject () && bool_5) {
        while (enumerator_5153.hasCurrentObject () && bool_5) {
          var_accepted_5096 = GALGAS_bool (kIsNotEqual, enumerator_5153.current_mValue (HERE).getter_string (HERE).objectCompare (constinArgument_inTargetName.getter_string (SOURCE_FILE ("program.galgas", 131)))) ;
          enumerator_5153.gotoNextObject () ;
          if (enumerator_5153.hasCurrentObject ()) {
            bool_5 = var_accepted_5096.operator_not (SOURCE_FILE ("program.galgas", 130)).isValidAndTrue () ;
          }
        }
      }
      const enumGalgasBool test_6 = var_accepted_5096.operator_not (SOURCE_FILE ("program.galgas", 133)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_5074.current_mTargetConstructLocation (HERE), GALGAS_string ("invalid target"), fixItArray7  COMMA_SOURCE_FILE ("program.galgas", 134)) ;
      }
      enumerator_5074.gotoNextObject () ;
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
  GALGAS_ast var_ast_7708 = GALGAS_ast::constructor_default (SOURCE_FILE ("program.galgas", 199)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_targetDirectory_7833 = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()).getter_absolutePathFromPath (constinArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 201)) ;
    const enumGalgasBool test_1 = var_targetDirectory_7833.getter_directoryExists (SOURCE_FILE ("program.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_targetDefinitionFullPath_8004 = var_targetDirectory_7833.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 203)).add_operation (constinArgument_inTargetName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 203)).add_operation (GALGAS_string ("/+config.plm-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 203)) ;
      const enumGalgasBool test_2 = var_targetDefinitionFullPath_8004.getter_fileExists (SOURCE_FILE ("program.galgas", 204)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_lstringlist var_importedFileList_8266 ;
        var_importedFileList_8266.drop () ;
        GALGAS_location joker_8294 ; // Joker input parameter
        cGrammar_plm_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, var_targetDefinitionFullPath_8004.getter_nowhere (SOURCE_FILE ("program.galgas", 205)), ioArgument_ioAST, var_importedFileList_8266, joker_8294  COMMA_SOURCE_FILE ("program.galgas", 205)) ;
        {
        routine_recursiveImportFileSystemTargetFiles (var_ast_7708, var_targetDirectory_7833.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 211)).add_operation (constinArgument_inTargetName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 211)), var_importedFileList_8266, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 209)) ;
        }
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inTargetName.getter_location (SOURCE_FILE ("program.galgas", 216)), GALGAS_string ("This target is not defined in '").add_operation (GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()), inCompiler COMMA_SOURCE_FILE ("program.galgas", 217)).add_operation (GALGAS_string ("' directory"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 217)), fixItArray3  COMMA_SOURCE_FILE ("program.galgas", 216)) ;
      }
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("program.galgas", 220)).getter_location (SOURCE_FILE ("program.galgas", 220)), GALGAS_string ("the '").add_operation (GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()), inCompiler COMMA_SOURCE_FILE ("program.galgas", 220)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 220)), fixItArray4  COMMA_SOURCE_FILE ("program.galgas", 220)) ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_filewrapper var_fw_8941 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    const enumGalgasBool test_5 = var_fw_8941.getter_fileExistsAtPath (constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/+config.plm-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 225)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_source_9069 = var_fw_8941.getter_textFileContentsAtPath (constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/+config.plm-target"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 226)) ;
      GALGAS_lstringlist var_importedFileList_9273 ;
      var_importedFileList_9273.drop () ;
      GALGAS_location joker_9299 ; // Joker input parameter
      cGrammar_plm_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_source_9069, constinArgument_inTargetName.getter_string (HERE), ioArgument_ioAST, var_importedFileList_9273, joker_9299  COMMA_SOURCE_FILE ("program.galgas", 227)) ;
      {
      routine_recursiveImportEmbeddedTargetFiles (var_ast_7708, constinArgument_inTargetName.getter_string (HERE), var_importedFileList_9273, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 231)) ;
      }
    }else if (kBoolFalse == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inTargetName.getter_location (SOURCE_FILE ("program.galgas", 238)), GALGAS_string ("This target is not defined in embedded targets"), fixItArray6  COMMA_SOURCE_FILE ("program.galgas", 238)) ;
    }
  }
  ioArgument_ioAST.mProperty_mDeclarationListAST = var_ast_7708.getter_mDeclarationListAST (HERE).add_operation (ioArgument_ioAST.getter_mDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 242)) ;
  ioArgument_ioAST.mProperty_mGlobalVarDeclarationListAST = var_ast_7708.getter_mGlobalVarDeclarationListAST (HERE).add_operation (ioArgument_ioAST.getter_mGlobalVarDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 243)) ;
  ioArgument_ioAST.mProperty_mControlRegisterDeclarationListAST = var_ast_7708.getter_mControlRegisterDeclarationListAST (HERE).add_operation (ioArgument_ioAST.getter_mControlRegisterDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 244)) ;
  ioArgument_ioAST.mProperty_mExtensionDeclarationListAST = var_ast_7708.getter_mExtensionDeclarationListAST (HERE).add_operation (ioArgument_ioAST.getter_mExtensionDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 245)) ;
  ioArgument_ioAST.mProperty_mProcedureListAST = var_ast_7708.getter_mProcedureListAST (HERE).add_operation (ioArgument_ioAST.getter_mProcedureListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 246)) ;
  ioArgument_ioAST.mProperty_mRequiredProcListAST = var_ast_7708.getter_mRequiredProcListAST (HERE).add_operation (ioArgument_ioAST.getter_mRequiredProcListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 247)) ;
  ioArgument_ioAST.mProperty_mExternProcListAST = var_ast_7708.getter_mExternProcListAST (HERE).add_operation (ioArgument_ioAST.getter_mExternProcListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 248)) ;
  ioArgument_ioAST.mProperty_mStandAloneSystemRoutineListAST = var_ast_7708.getter_mStandAloneSystemRoutineListAST (HERE).add_operation (ioArgument_ioAST.getter_mStandAloneSystemRoutineListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 249)) ;
  ioArgument_ioAST.mProperty_mGuardListAST = var_ast_7708.getter_mGuardListAST (HERE).add_operation (ioArgument_ioAST.getter_mGuardListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 250)) ;
  ioArgument_ioAST.mProperty_mTargetListAST.plusAssign_operation(var_ast_7708.getter_mTargetListAST (HERE), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 251)) ;
  ioArgument_ioAST.mProperty_mInitListAST.plusAssign_operation(var_ast_7708.getter_mInitListAST (HERE), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 252)) ;
  ioArgument_ioAST.mProperty_mBootListAST.plusAssign_operation(var_ast_7708.getter_mBootListAST (HERE), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 253)) ;
  ioArgument_ioAST.mProperty_mPanicClauseListAST.plusAssign_operation(var_ast_7708.getter_mPanicClauseListAST (HERE), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 254)) ;
  ioArgument_ioAST.mProperty_mISRDeclarationListAST = var_ast_7708.getter_mISRDeclarationListAST (HERE).add_operation (ioArgument_ioAST.getter_mISRDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 255)) ;
  ioArgument_ioAST.mProperty_mTaskListAST = var_ast_7708.getter_mTaskListAST (HERE).add_operation (ioArgument_ioAST.getter_mTaskListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 256)) ;
  ioArgument_ioAST.mProperty_mModuleDeclarationListAST = var_ast_7708.getter_mModuleDeclarationListAST (HERE).add_operation (ioArgument_ioAST.getter_mModuleDeclarationListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 257)) ;
  ioArgument_ioAST.mProperty_mRequiredModuleListAST = var_ast_7708.getter_mRequiredModuleListAST (HERE).add_operation (ioArgument_ioAST.getter_mRequiredModuleListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 258)) ;
  ioArgument_ioAST.mProperty_mCheckTargetListAST = var_ast_7708.getter_mCheckTargetListAST (HERE).add_operation (ioArgument_ioAST.getter_mCheckTargetListAST (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 259)) ;
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
  cEnumerator_lstringlist enumerator_11482 (inArgument_inImportedClauseList, kENUMERATION_UP) ;
  while (enumerator_11482.hasCurrentObject ()) {
    GALGAS_string var_absolutePath_11506 = constinArgument_inTargetDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 271)).add_operation (enumerator_11482.current_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 271)) ;
    const enumGalgasBool test_0 = var_absolutePath_11506.getter_fileExists (SOURCE_FILE ("program.galgas", 272)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath_11506 COMMA_SOURCE_FILE ("program.galgas", 273)).operator_not (SOURCE_FILE ("program.galgas", 273)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath_11506  COMMA_SOURCE_FILE ("program.galgas", 274)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_absolutePath_11506.getter_pathExtension (SOURCE_FILE ("program.galgas", 275)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_lstringlist var_importedFileList_11912 ;
          var_importedFileList_11912.drop () ;
          GALGAS_location joker_11942 ; // Joker input parameter
          cGrammar_plm_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_11506, enumerator_11482.current_mValue (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("program.galgas", 276)), ioArgument_ioAST, var_importedFileList_11912, joker_11942  COMMA_SOURCE_FILE ("program.galgas", 276)) ;
          {
          routine_recursiveImportFileSystemTargetFiles (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList_11912, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 280)) ;
          }
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_absolutePath_11506.getter_pathExtension (SOURCE_FILE ("program.galgas", 286)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstringlist var_importedFileList_12405 ;
            var_importedFileList_12405.drop () ;
            GALGAS_location joker_12435 ; // Joker input parameter
            cGrammar_plm_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_11506, enumerator_11482.current_mValue (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("program.galgas", 287)), ioArgument_ioAST, var_importedFileList_12405, joker_12435  COMMA_SOURCE_FILE ("program.galgas", 287)) ;
            {
            routine_recursiveImportFileSystemTargetFiles (ioArgument_ioAST, constinArgument_inTargetDirectory, var_importedFileList_12405, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 291)) ;
            }
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_11482.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 298)), GALGAS_string ("invalid extension (should be .plm or .plm-target)"), fixItArray4  COMMA_SOURCE_FILE ("program.galgas", 298)) ;
          }
        }
      }
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_11482.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 302)), GALGAS_string ("file does not exist in file system target definition"), fixItArray5  COMMA_SOURCE_FILE ("program.galgas", 302)) ;
    }
    enumerator_11482.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'recursiveImportEmbeddedTargetFiles'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportEmbeddedTargetFiles (GALGAS_ast & ioArgument_ioAST,
                                                 const GALGAS_string constinArgument_inCurrentDirectory,
                                                 GALGAS_lstringlist inArgument_inImportedClauseList,
                                                 GALGAS_stringset & ioArgument_ioImportedFileAbsolutePathSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lstringlist enumerator_13287 (inArgument_inImportedClauseList, kENUMERATION_UP) ;
  while (enumerator_13287.hasCurrentObject ()) {
    GALGAS_string var_fullPath_13307 = constinArgument_inCurrentDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 316)).add_operation (enumerator_13287.current_mValue (HERE).getter_string (SOURCE_FILE ("program.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 316)) ;
    GALGAS_filewrapper var_fw_13365 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    const enumGalgasBool test_0 = var_fw_13365.getter_fileExistsAtPath (var_fullPath_13307, inCompiler COMMA_SOURCE_FILE ("program.galgas", 318)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_embeddedPath_13464 = GALGAS_string (":").add_operation (var_fullPath_13307, inCompiler COMMA_SOURCE_FILE ("program.galgas", 319)) ;
      const enumGalgasBool test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath_13464 COMMA_SOURCE_FILE ("program.galgas", 320)).operator_not (SOURCE_FILE ("program.galgas", 320)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath_13464  COMMA_SOURCE_FILE ("program.galgas", 321)) ;
        GALGAS_lstringlist var_importedFileList_13758 ;
        var_importedFileList_13758.drop () ;
        GALGAS_location joker_13786 ; // Joker input parameter
        cGrammar_plm_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_13365.getter_textFileContentsAtPath (var_fullPath_13307, inCompiler COMMA_SOURCE_FILE ("program.galgas", 322)), enumerator_13287.current_mValue (HERE).getter_string (HERE), ioArgument_ioAST, var_importedFileList_13758, joker_13786  COMMA_SOURCE_FILE ("program.galgas", 322)) ;
        {
        routine_recursiveImportEmbeddedTargetFiles (ioArgument_ioAST, var_fullPath_13307.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 328)), var_importedFileList_13758, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 326)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_13287.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 334)), GALGAS_string ("cannot find this file in embedded files"), fixItArray2  COMMA_SOURCE_FILE ("program.galgas", 334)) ;
    }
    enumerator_13287.gotoNextObject () ;
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
  cEnumerator_lstringlist enumerator_14521 (inArgument_inImportedClauseList, kENUMERATION_UP) ;
  while (enumerator_14521.hasCurrentObject ()) {
    GALGAS_string var_absolutePath_14545 = enumerator_14521.current_mValue (HERE).getter_string (HERE).getter_absolutePathFromPath (inArgument_inCurrentDirectory COMMA_SOURCE_FILE ("program.galgas", 348)) ;
    const enumGalgasBool test_0 = var_absolutePath_14545.getter_fileExists (SOURCE_FILE ("program.galgas", 349)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_absolutePath_14545 COMMA_SOURCE_FILE ("program.galgas", 350)).operator_not (SOURCE_FILE ("program.galgas", 350)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_absolutePath_14545  COMMA_SOURCE_FILE ("program.galgas", 351)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_absolutePath_14545.getter_pathExtension (SOURCE_FILE ("program.galgas", 352)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_lstringlist var_importedFileList_14994 ;
          var_importedFileList_14994.drop () ;
          GALGAS_location joker_15024 ; // Joker input parameter
          cGrammar_plm_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_14545, enumerator_14521.current_mValue (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("program.galgas", 353)), ioArgument_ioAST, var_importedFileList_14994, joker_15024  COMMA_SOURCE_FILE ("program.galgas", 353)) ;
          {
          routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_14994, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 357)) ;
          }
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_absolutePath_14545.getter_pathExtension (SOURCE_FILE ("program.galgas", 363)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstringlist var_importedFileList_15473 ;
            var_importedFileList_15473.drop () ;
            GALGAS_location joker_15503 ; // Joker input parameter
            cGrammar_plm_5F_target_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absolutePath_14545, enumerator_14521.current_mValue (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("program.galgas", 364)), ioArgument_ioAST, var_importedFileList_15473, joker_15503  COMMA_SOURCE_FILE ("program.galgas", 364)) ;
            {
            routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_15473, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 368)) ;
            }
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14521.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 375)), GALGAS_string ("invalid extension (should be .plm or .plm-target)"), fixItArray4  COMMA_SOURCE_FILE ("program.galgas", 375)) ;
          }
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_filewrapper var_fw_15878 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
      const enumGalgasBool test_5 = var_fw_15878.getter_fileExistsAtPath (enumerator_14521.current_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 380)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string var_embeddedPath_15984 = GALGAS_string (":").add_operation (enumerator_14521.current_mValue (HERE).getter_string (SOURCE_FILE ("program.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 381)) ;
        const enumGalgasBool test_6 = ioArgument_ioImportedFileAbsolutePathSet.getter_hasKey (var_embeddedPath_15984 COMMA_SOURCE_FILE ("program.galgas", 382)).operator_not (SOURCE_FILE ("program.galgas", 382)).boolEnum () ;
        if (kBoolTrue == test_6) {
          ioArgument_ioImportedFileAbsolutePathSet.addAssign_operation (var_embeddedPath_15984  COMMA_SOURCE_FILE ("program.galgas", 383)) ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_14521.current_mValue (HERE).getter_string (HERE).getter_pathExtension (SOURCE_FILE ("program.galgas", 384)).objectCompare (GALGAS_string ("plm"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_lstringlist var_importedFileList_16341 ;
            var_importedFileList_16341.drop () ;
            GALGAS_location joker_16373 ; // Joker input parameter
            cGrammar_plm_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_15878.getter_textFileContentsAtPath (enumerator_14521.current_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 385)), enumerator_14521.current_mValue (HERE).getter_string (HERE), ioArgument_ioAST, var_importedFileList_16341, joker_16373  COMMA_SOURCE_FILE ("program.galgas", 385)) ;
            {
            routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_16341, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 389)) ;
            }
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_14521.current_mValue (HERE).getter_string (HERE).getter_pathExtension (SOURCE_FILE ("program.galgas", 395)).objectCompare (GALGAS_string ("plm-target"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_lstringlist var_importedFileList_16846 ;
              var_importedFileList_16846.drop () ;
              GALGAS_location joker_16878 ; // Joker input parameter
              cGrammar_plm_5F_target_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fw_15878.getter_textFileContentsAtPath (enumerator_14521.current_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("program.galgas", 396)), enumerator_14521.current_mValue (HERE).getter_string (HERE), ioArgument_ioAST, var_importedFileList_16846, joker_16878  COMMA_SOURCE_FILE ("program.galgas", 396)) ;
              {
              routine_recursiveImportFiles (ioArgument_ioAST, inArgument_inCurrentDirectory, var_importedFileList_16846, ioArgument_ioImportedFileAbsolutePathSet, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 400)) ;
              }
            }else if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_14521.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 407)), GALGAS_string ("invalid extension (should be .plm or .plm-target)"), fixItArray9  COMMA_SOURCE_FILE ("program.galgas", 407)) ;
            }
          }
        }
      }else if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_14521.current_mValue (HERE).getter_location (SOURCE_FILE ("program.galgas", 411)), GALGAS_string ("cannot find this file in file system and in embedded files"), fixItArray10  COMMA_SOURCE_FILE ("program.galgas", 411)) ;
      }
    }
    enumerator_14521.gotoNextObject () ;
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
  "system section ledOn () {\n"
  "  IO1CLR  = 1 << 23 // Led On\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "system section ledOff () {\n"
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
  600, // Text length
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
  "system section ledOn () {\n"
  "  IO1CLR  = 1 << 23 // Led On\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "system section ledOff () {\n"
  "  globalVar = SINGLE_PIPO\n"
  "  globalVar = SINGLE_PIPO.fields\n"
  "  globalVar = SINGLE_PIPO.fields.shifted\n"
  "  globalVar = SINGLE_PIPO.bit\n"
  "  globalBit = SINGLE_PIPO.bit.bool\n"
  "  globalVar = PIPO [0]\n"
  "  globalVar = PIPO [7]\n"
  "  var idx $uint3 = 5\n"
  "  globalVar = PIPO [idx]\n"
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
  "    let x = self.compteur +% 500\n"
  "    self.compteur = x\n"
  "//    self.compteur +%= 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_1_embeddedSampleCode (
  "02-control-register-array.plm",
  "plm",
  true, // Text file
  1388, // Text length
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

//--- File 'teensy-3-1/00-structure-example.plm'

const char * gWrapperFileContent_2_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let LED_L1 = $digitalPort.D4\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $B {\n"
  "  var a $uint32 = 0\n"
  "  var b $uint32 = 0\n"
  "}\n"
  "\n"
  "struct $C {\n"
  "  var c = $B ()\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T priority 12 stackSize 512 {\n"
  "  var deadline $uint32 = 0\n"
  "  var acc = $C ()\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline +%= 1000\n"
  "    toggle (!port:LED_L1)\n"
  "    let n = self.acc.c.a +% self.deadline\n"
  "    self.acc.c.a = n\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_2_embeddedSampleCode (
  "00-structure-example.plm",
  "plm",
  true, // Text file
  1372, // Text length
  gWrapperFileContent_2_embeddedSampleCode
) ;

//--- File 'teensy-3-1/01-blink-led.plm'

const char * gWrapperFileContent_3_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT) // Led Teensy\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T\xC3""\xA2""che priority 1 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    digitalWrite (!port:LED_L0 !true)\n"
  "    self.compteur +%= 500\n"
  "    time.waitUntilMS (!deadline: self.compteur)\n"
  "    digitalWrite (!port:LED_L0 !false)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.printUnsigned (!time.millis ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_3_embeddedSampleCode (
  "01-blink-led.plm",
  "plm",
  true, // Text file
  1190, // Text length
  gWrapperFileContent_3_embeddedSampleCode
) ;

//--- File 'teensy-3-1/02-blink-leds.plm'

const char * gWrapperFileContent_4_embeddedSampleCode = "target \"teensy-3-1/privileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "let LED_L1 = $digitalPort.D4\n"
  "let LED_L2 = $digitalPort.D5\n"
  "let LED_L3 = $digitalPort.D6\n"
  "let LED_L4 = $digitalPort.D7\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L2 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L3 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L4 !mode:.OUTPUT)\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    digitalWrite (!port:LED_L0 !true)\n"
  "    self.compteur +%= 500\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L0 !false)\n"
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
  "    digitalWrite (!port:LED_L1 !true)\n"
  "    self.compteur +%= 499\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L1 !false)\n"
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
  "    digitalWrite (!port:LED_L2 !true)\n"
  "    self.compteur +%= 498\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L2 !false)\n"
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
  "    digitalWrite (!port:LED_L3 !true)\n"
  "    self.compteur +%= 497\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L3 !false)\n"
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
  "    digitalWrite (!port:LED_L4 !true)\n"
  "    self.compteur +%= 496\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L4 !false)\n"
  "    self.compteur +%= 496\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_4_embeddedSampleCode (
  "02-blink-leds.plm",
  "plm",
  true, // Text file
  3048, // Text length
  gWrapperFileContent_4_embeddedSampleCode
) ;

//--- File 'teensy-3-1/03-push-buttons.plm'

const char * gWrapperFileContent_5_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "let LED_L1 = $digitalPort.D4\n"
  "let LED_L2 = $digitalPort.D5\n"
  "let LED_L3 = $digitalPort.D6\n"
  "let LED_L4 = $digitalPort.D7\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "let PUSH_P0 = $digitalPort.D8\n"
  "let PUSH_P1 = $digitalPort.D9\n"
  "let PUSH_P2 = $digitalPort.D10\n"
  "let PUSH_P3 = $digitalPort.D11\n"
  "let PUSH_P4 = $digitalPort.D12\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L2 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L3 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L4 !mode:.OUTPUT)\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "  pinMode (!port:PUSH_P0 !mode:.INPUT_PULLUP)\n"
  "  pinMode (!port:PUSH_P1 !mode:.INPUT_PULLUP)\n"
  "  pinMode (!port:PUSH_P2 !mode:.INPUT_PULLUP)\n"
  "  pinMode (!port:PUSH_P3 !mode:.INPUT_PULLUP)\n"
  "  pinMode (!port:PUSH_P4 !mode:.INPUT_PULLUP)\n"
  "}\n"
  "\n"
  "///\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T priority 0 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    self.compteur +%= 50\n"
  "    digitalWrite (!port:LED_L0 !not digitalRead (!port:PUSH_P0))\n"
  "    digitalWrite (!port:LED_L1 !not digitalRead (!port:PUSH_P1))\n"
  "    digitalWrite (!port:LED_L2 !not digitalRead (!port:PUSH_P2))\n"
  "    digitalWrite (!port:LED_L3 !not digitalRead (!port:PUSH_P3))\n"
  "    digitalWrite (!port:LED_L4 !not digitalRead (!port:PUSH_P4))\n"
  "  }\n"
  "  \n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_5_embeddedSampleCode (
  "03-push-buttons.plm",
  "plm",
  true, // Text file
  2261, // Text length
  gWrapperFileContent_5_embeddedSampleCode
) ;

//--- File 'teensy-3-1/04-section-service-duration.plm'

const char * gWrapperFileContent_6_embeddedSampleCode = "target \"teensy-3-1/privileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "system section emptySection () {\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "system service emptyService () {\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "system section getSysTick () -> $uint32 {\n"
  "  result = SYST_CVR\n"
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
  "  setup 1 {\n"
  "    var cumul $uint32 = 0\n"
  "  //--- Compute getSysTick duration\n"
  "    for _ $uint32 in 0 ..< ITERATIONS {\n"
  "      time.waitDuringMS (!delay:1)\n"
  "      let t0 = getSysTick ()\n"
  "      let t1 = getSysTick ()\n"
  "      cumul += t0 - t1\n"
  "      lcd.printUnsigned (!t0 - t1)\n"
  "      lcd.printSpaces (!1)\n"
  "    }\n"
  "    let systickDuration = cumul / ITERATIONS\n"
  "  //--- Compute emptySection duration\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    for _ $uint32 in 0 ..< ITERATIONS {\n"
  "      time.waitDuringMS (!delay:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptySection ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.printUnsigned (!t0 - t1 - systickDuration)\n"
  "      lcd.printSpaces (!1)\n"
  "    }\n"
  "  //--- Compute emptyService duration\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    for _ $uint32 in 0 ..< 4 {\n"
  "      time.waitDuringMS (!delay:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptyService ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.printUnsigned (!t0 - t1 - systickDuration)\n"
  "      lcd.printSpaces (!1)\n"
  "    }\n"
  "  }\n"
  "  \n"
  "\n"
  "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
  "\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_6_embeddedSampleCode (
  "04-section-service-duration.plm",
  "plm",
  true, // Text file
  2380, // Text length
  gWrapperFileContent_6_embeddedSampleCode
) ;

//--- File 'teensy-3-1/05-semaphore.plm'

const char * gWrapperFileContent_7_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "let LED_L1 = $digitalPort.D4\n"
  "let LED_L2 = $digitalPort.D5\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var s\xC3""\xA9""maphore = $semaphore (!value:0)\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L2 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var top $uint32 = 0\n"
  "\n"
  "  setup 123 {\n"
  "    self.top = 1\n"
  "  }\n"
  "  \n"
  "  setup 256 {\n"
  "    let \xCF""\x80"" = self.top + 2\n"
  "    self.top += \xCF""\x80""\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    s\xC3""\xA9""maphore.signal ()\n"
  "    self.top += 250\n"
  "    digitalWrite (!port:LED_L1 !true)\n"
  "    let constanteAccentu\xC3""\xA9""e = self.top\n"
  "    time.waitUntilMS (!deadline:constanteAccentu\xC3""\xA9""e)\n"
  "    s\xC3""\xA9""maphore.signal ()\n"
  "    self.top += 250\n"
  "    digitalWrite (!port:LED_L1 !false)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T2 priority 2 stackSize 512 {\n"
  "\n"
  "  while s\xC3""\xA9""maphore.wait () {\n"
  "    digitalWrite (!port:LED_L2 !true)\n"
  "    s\xC3""\xA9""maphore.wait ()\n"
  "    digitalWrite (!port:LED_L2 !false)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_7_embeddedSampleCode (
  "05-semaphore.plm",
  "plm",
  true, // Text file
  1689, // Text length
  gWrapperFileContent_7_embeddedSampleCode
) ;

//--- File 'teensy-3-1/06-semaphore-P-until.plm'

const char * gWrapperFileContent_8_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "let LED_L1 = $digitalPort.D4\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $monSemaphore {\n"
  "  var value $uint32\n"
  "  var list = $taskList ()\n"
  "\n"
  "  public system service V @mutating () {\n"
  "    makeTaskReady (!\?fromList:self.list \?found:let found)\n"
  "    if not found {\n"
  "      self.value += 1\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public system primitive P_until @mutating (\?deadline:inDeadline $uint32) -> $bool {\n"
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
  "  setup 123 {\n"
  "    self.top = 1\n"
  "  }\n"
  "  \n"
  "  setup 256 {\n"
  "    self.top += 2\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.top) {\n"
  "    s.V ()\n"
  "    self.top += 300\n"
  "    digitalWrite (!port:LED_L0 !true)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s.V ()\n"
  "    self.top += 700\n"
  "    digitalWrite (!port:LED_L0 !false)\n"
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
  "      toggle (!port:LED_L1)\n"
  "    }else{\n"
  "      self.top += 400\n"
  "      toggle (!port:LED_L1)\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_8_embeddedSampleCode (
  "06-semaphore-P-until.plm",
  "plm",
  true, // Text file
  2286, // Text length
  gWrapperFileContent_8_embeddedSampleCode
) ;

//--- File 'teensy-3-1/07-guarded-semaphore.plm'

const char * gWrapperFileContent_9_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "let LED_L1 = $digitalPort.D4\n"
  "let LED_L2 = $digitalPort.D5\n"
  "let LED_L3 = $digitalPort.D6\n"
  "let LED_L4 = $digitalPort.D7\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L2 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L3 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L4 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $monSemaphore {\n"
  "  var value $uint32\n"
  "  var list = $taskList ()\n"
  "  var guardList = $guardList ()\n"
  "\n"
  "  public system primitive P @noUnusedWarning @mutating () {\n"
  "    if self.value > 0 {\n"
  "      self.value -= 1\n"
  "    }else{\n"
  "      block (!\?inList:self.list)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public system service V @mutating () {\n"
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
  "    digitalWrite (!port:LED_L0 !true)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s0.V ()\n"
  "    self.top += 250\n"
  "    digitalWrite (!port:LED_L0 !false)\n"
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
  "    digitalWrite (!port:LED_L4 !true)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s1.V ()\n"
  "    self.top += 249\n"
  "    digitalWrite (!port:LED_L4 !false)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 priority 2 stackSize 512 {\n"
  "  var deadline $uint32 = 0\n"
  "  \n"
  "  while s0.PP () {\n"
  "    toggle (!port:LED_L1)\n"
  "  }\n"
  "  \n"
  "  while s1.P () {\n"
  "    toggle (!port:LED_L3)\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    toggle (!port:LED_L2)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_9_embeddedSampleCode (
  "07-guarded-semaphore.plm",
  "plm",
  true, // Text file
  3170, // Text length
  gWrapperFileContent_9_embeddedSampleCode
) ;

//--- File 'teensy-3-1/08-guarded-semaphore2.plm'

const char * gWrapperFileContent_10_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "let LED_L1 = $digitalPort.D4\n"
  "let LED_L2 = $digitalPort.D5\n"
  "let LED_L3 = $digitalPort.D6\n"
  "let LED_L4 = $digitalPort.D7\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L2 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L3 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L4 !mode:.OUTPUT)\n"
  "}\n"
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
  "    digitalWrite (!port:LED_L0 !true)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s0.signal ()\n"
  "    self.top += 250\n"
  "    digitalWrite (!port:LED_L0 !false)\n"
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
  "    digitalWrite (!port:LED_L4 !true)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    s1.signal ()\n"
  "    self.top += 249\n"
  "    digitalWrite (!port:LED_L4 !false)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 priority 2 stackSize 512 {\n"
  "  var deadline $uint32 = 0\n"
  "  \n"
  "  while s0.wait () {\n"
  "    toggle (!port:LED_L1)\n"
  "  }\n"
  "  \n"
  "  while PP () {\n"
  "    toggle (!port:LED_L3)\n"
  "  }\n"
  "  \n"
  "  while convenienceWaitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    toggle (!port:LED_L2)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_10_embeddedSampleCode (
  "08-guarded-semaphore2.plm",
  "plm",
  true, // Text file
  2674, // Text length
  gWrapperFileContent_10_embeddedSampleCode
) ;

//--- File 'teensy-3-1/09-rendez-vous.plm'

const char * gWrapperFileContent_11_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "let LED_L1 = $digitalPort.D4\n"
  "let LED_L2 = $digitalPort.D5\n"
  "let LED_L3 = $digitalPort.D6\n"
  "let LED_L4 = $digitalPort.D7\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L2 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L3 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L4 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $rendezVous {\n"
  "  var inputWaitList = $taskList ()\n"
  "  var outputWaitList = $taskList ()\n"
  "  var inputGuardList = $guardList ()\n"
  "  var outputGuardList = $guardList ()\n"
  "\n"
  "  public system primitive input @mutating () {\n"
  "    makeTaskReady (!\?fromList:self.outputWaitList \?found:let found)\n"
  "    if not found {\n"
  "      notifyChange (!\?forGuard:self.outputGuardList)\n"
  "      block (!\?inList:self.inputWaitList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public system primitive output @mutating () {\n"
  "    makeTaskReady (!\?fromList:self.inputWaitList \?found:let found)\n"
  "    if not found {\n"
  "      notifyChange (!\?forGuard:self.inputGuardList)\n"
  "      block (!\?inList:self.outputWaitList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public system primitive inputUntil @noUnusedWarning @mutating (\?deadline:inDeadline $uint32) -> $bool {\n"
  "    makeTaskReady (!\?fromList:self.outputWaitList \?found:result)\n"
  "    if (not result) and (inDeadline > time.millis ()) { \n"
  "      block (!\?inList:self.inputWaitList !onDeadline:inDeadline)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public system primitive outputUntil @noUnusedWarning @mutating (\?deadline:inDeadline $uint32) -> $bool {\n"
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
  "    digitalWrite (!port:LED_L0 !true)\n"
  "    time.waitUntilMS (!deadline:self.top)\n"
  "    rdvs.output ()\n"
  "    self.top += 250\n"
  "    digitalWrite (!port:LED_L0 !false)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "\n"
  "  while rdvs.input () {\n"
  "    digitalWrite (!port:LED_L1 !true)\n"
  "    rdvs.input ()\n"
  "    digitalWrite (!port:LED_L1 !false)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_11_embeddedSampleCode (
  "09-rendez-vous.plm",
  "plm",
  true, // Text file
  3611, // Text length
  gWrapperFileContent_11_embeddedSampleCode
) ;

//--- File 'teensy-3-1/10-rendez-vous-data.plm'

const char * gWrapperFileContent_12_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "let LED_L1 = $digitalPort.D4\n"
  "let LED_L2 = $digitalPort.D5\n"
  "let LED_L4 = $digitalPort.D7\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L2 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L4 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $rendezVousData\xC3""\xA9"" {\n"
  "  var autoriserLecture  = $semaphore (!value:0)\n"
  "  var autoriserEcriture = $semaphore (!value:1)\n"
  "  var signalerDonneeLue = $semaphore (!value:0)\n"
  "  var donn\xC3""\xA9""e $uint32 = 0\n"
  "\n"
  "  public func user output @mutating (\?data:inData $uint32) {\n"
  "    self.autoriserEcriture.wait ()\n"
  "    self.donn\xC3""\xA9""e = inData\n"
  "    self.autoriserLecture.signal ()\n"
  "    self.signalerDonneeLue.wait ()\n"
  "  }\n"
  "\n"
  "//  public func user input (!data:outData $uint32) {\n"
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
  "    toggle (!port:LED_L0)\n"
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
  "    toggle (!port:LED_L1)\n"
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
  "    toggle (!port:LED_L2)\n"
  "    s.wait ()\n"
  "      lcd.goto (!line:1 !column:0)\n"
  "      lcd.printUnsigned (!x)\n"
  "    s.signal ()\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    toggle (!port:LED_L4)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_12_embeddedSampleCode (
  "10-rendez-vous-data.plm",
  "plm",
  true, // Text file
  3333, // Text length
  gWrapperFileContent_12_embeddedSampleCode
) ;

//--- File 'teensy-3-1/11-pit-unprivileged-mode-it.plm'

const char * gWrapperFileContent_13_embeddedSampleCode = "target \"teensy-3-1/privileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let LED_L1 = $digitalPort.D4\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "init 100_000 {\n"
  "  SIM_SCGC6 |= SIM_SCGC6_PIT\n"
  "  NVIC_ISER2 = 1 << ((84 - 16) & 31)\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "system section setupPIT () {\n"
  "  PIT_MCR = 0\n"
  "  PIT_LDVAL0 = 200000\n"
  "  PIT_TCTRL0 = 3 // Interrupt, enabled\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "system section getPITValue (!outValue $uint32) {\n"
  "  outValue = gPITValue\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "var gPITValue $uint32 = 0\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "isr safe PITChannel0 {\n"
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
  "  setup 0 {\n"
  "    setupPIT ()\n"
  "  }\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline +%= 250\n"
  "    digitalWrite (!port:LED_L1 !true) // Allumer la led\n"
  "    time.waitUntilMS (!deadline:self.deadline)\n"
  "    self.deadline +%= 250\n"
  "    digitalWrite (!port:LED_L1 !false)  // \xC3""\x89""teindre la led\n"
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

const cRegularFileWrapper gWrapperFile_13_embeddedSampleCode (
  "11-pit-unprivileged-mode-it.plm",
  "plm",
  true, // Text file
  2136, // Text length
  gWrapperFileContent_13_embeddedSampleCode
) ;

//--- File 'teensy-3-1/12-array-example.plm'

const char * gWrapperFileContent_14_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let LED_L1 = $digitalPort.D4\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let SIZE = 9\n"
  "\n"
  "type $A : $uint32 [SIZE]\n"
  "\n"
  "struct $B {\n"
  "  var a $uint32 = 0\n"
  "  var b $uint32 = 0\n"
  "}\n"
  "struct $C {\n"
  "  var c = $B ()\n"
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
  "//    toggle (!port:LED_L1)\n"
  "    self.array [self.index] = 0\n"
  "    self.index +%= 1\n"
  "    if self.index == SIZE {\n"
  "      self.index = 0\n"
  "    }\n"
  "    for i $uint32 in 0 ..< $A.size {\n"
  "      self.array [i] +%= 1\n"
  "    }\n"
  "    self.array2 = self.array \n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    for i $uint32 in 0 ..< $A.size {\n"
  "      lcd.printUnsigned (!self.array2 [i])\n"
  "      lcd.printSpaces (!1)\n"
  "    }\n"
  "    \n"
  "    var a = $A ()\n"
  "    var x $uint32 = 0\n"
  "    for i $uint32 in 0 ..< $A.size {\n"
  "      a [i] = 9\n"
  "      a [i] += 9\n"
  "      x += a [i]\n"
  "    }\n"
  "    \n"
  "    var s = $B ()\n"
  "    var aa = s.a\n"
  "    var bb = s.b\n"
  "    s.a = aa\n"
  "    var s2 = $C ()\n"
  "    s2.c.a = aa\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_14_embeddedSampleCode (
  "12-array-example.plm",
  "plm",
  true, // Text file
  1964, // Text length
  gWrapperFileContent_14_embeddedSampleCode
) ;

//--- File 'teensy-3-1/13-static-list-example.plm'

const char * gWrapperFileContent_15_embeddedSampleCode = "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 100 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let LED_L1 = $digitalPort.D4\n"
  "let LED_L2 = $digitalPort.D5\n"
  "let LED_L3 = $digitalPort.D6\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L2 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L3 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "staticArray maListeStatique {\n"
  "  let a $uint32\n"
  "  let b $uint32\n"
  "  let p func user ()\n"
  "  let f func user () -> $uint32\n"
  "}\n"
  "\n"
  "func user toggleL2 () {\n"
  "  toggle (!port:LED_L2)\n"
  "}\n"
  "\n"
  "func user p2 () -> $uint32 {\n"
  "  result = 10\n"
  "}\n"
  "\n"
  "func user toggleL3 () {\n"
  "  toggle (!port:LED_L3)\n"
  "}\n"
  "\n"
  "func user p3 () -> $uint32 {\n"
  "  result = 15\n"
  "}\n"
  "\n"
  "extend staticArray maListeStatique (\n"
  "  5, 9, func toggleL2 (), func p2 () ;\n"
  "  15, 29, func toggleL3 (), func p3 ()\n"
  ")\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T priority 12 stackSize 512 {\n"
  "  var deadline $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.deadline) {\n"
  "    self.deadline +%= 250\n"
  "    toggle (!port:LED_L1)\n"
  "    var total $uint32 = 0\n"
  "    for \xC3""\xA9""l\xC3""\xA9""ment in maListeStatique {\n"
  "      total += \xC3""\xA9""l\xC3""\xA9""ment.a\n"
  "      total += \xC3""\xA9""l\xC3""\xA9""ment.b\n"
  "      total += \xC3""\xA9""l\xC3""\xA9""ment.f ()\n"
  " //     \xC3""\xA9""l\xC3""\xA9""ment.p ()\n"
  "    }\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.printUnsigned (!total)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n" ;

const cRegularFileWrapper gWrapperFile_15_embeddedSampleCode (
  "13-static-list-example.plm",
  "plm",
  true, // Text file
  2002, // Text length
  gWrapperFileContent_15_embeddedSampleCode
) ;

//--- All files of 'teensy-3-1' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_2 [15] = {
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
  & gWrapperFile_13_embeddedSampleCode,
  & gWrapperFile_14_embeddedSampleCode,
  & gWrapperFile_15_embeddedSampleCode,
  NULL
} ;

//--- All sub-directories of 'teensy-3-1' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_2 [1] = {
  NULL
} ;

//--- Directory 'teensy-3-1'

const cDirectoryWrapper gWrapperDirectory_2_embeddedSampleCode (
  "teensy-3-1",
  14,
  gWrapperAllFiles_embeddedSampleCode_2,
  0,
  gWrapperAllDirectories_embeddedSampleCode_2
) ;

//--- File 'teensy-3-6/01-blink-led.plm'

const char * gWrapperFileContent_16_embeddedSampleCode = "target \"teensy-3-6/unprivileged\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT) // Led Teensy\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T\xC3""\xA2""che priority 1 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "  \n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    digitalWrite (!port:LED_L0 !true)\n"
  "    self.compteur +%= 500\n"
  "    time.waitUntilMS (!deadline: self.compteur)\n"
  "    digitalWrite (!port:LED_L0 !false)\n"
  "    self.compteur +%= 500\n"
  "//    lcd.goto (!line:0 !column:0)\n"
  "//    lcd.printUnsigned (!time.millis ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_16_embeddedSampleCode (
  "01-blink-led.plm",
  "plm",
  true, // Text file
  1414, // Text length
  gWrapperFileContent_16_embeddedSampleCode
) ;

//--- File 'teensy-3-6/02-blink-leds.plm'

const char * gWrapperFileContent_17_embeddedSampleCode = "target \"teensy-3-6/privileged\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "//   ACTIVITY LED                                                               \n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "func safe activityLedOn @exported () {\n"
  "  digitalWrite (!port:.D13 !true)\n"
  "}\n"
  "\n"
  "func safe activityLedOff @exported () {\n"
  "  digitalWrite (!port:.D13 !false)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "let LED_L0 = $digitalPort.D3\n"
  "let LED_L1 = $digitalPort.D4\n"
  "let LED_L2 = $digitalPort.D5\n"
  "let LED_L3 = $digitalPort.D6\n"
  "let LED_L4 = $digitalPort.D7\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "init 1000 {\n"
  "  pinMode (!port:LED_L0 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L1 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L2 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L3 !mode:.OUTPUT)\n"
  "  pinMode (!port:LED_L4 !mode:.OUTPUT)\n"
  "  pinMode (!port:.D13 !mode:.OUTPUT)\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
  "\n"
  "task T1 priority 1 stackSize 512 {\n"
  "  var compteur $uint32 = 0\n"
  "\n"
  "  while time.waitUntilMS (!deadline:self.compteur) {\n"
  "    digitalWrite (!port:LED_L0 !true)\n"
  "    self.compteur +%= 500\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L0 !false)\n"
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
  "    digitalWrite (!port:LED_L1 !true)\n"
  "    self.compteur +%= 499\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L1 !false)\n"
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
  "    digitalWrite (!port:LED_L2 !true)\n"
  "    self.compteur +%= 498\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L2 !false)\n"
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
  "    digitalWrite (!port:LED_L3 !true)\n"
  "    self.compteur +%= 497\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L3 !false)\n"
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
  "    digitalWrite (!port:LED_L4 !true)\n"
  "    self.compteur +%= 496\n"
  "    time.waitUntilMS (!deadline:self.compteur)\n"
  "    digitalWrite (!port:LED_L4 !false)\n"
  "    self.compteur +%= 496\n"
  "  }\n"
  "}\n"
  "\n"
  "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n" ;

const cRegularFileWrapper gWrapperFile_17_embeddedSampleCode (
  "02-blink-leds.plm",
  "plm",
  true, // Text file
  3066, // Text length
  gWrapperFileContent_17_embeddedSampleCode
) ;

//--- All files of 'teensy-3-6' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_3 [3] = {
  & gWrapperFile_16_embeddedSampleCode,
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
  2,
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


#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

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
    GALGAS_filewrapper var_fw_1178 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_listTargets.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_targetDirectoryOption_1289 = GALGAS_string (gOption_plm_5F_options_useDirAsTargetDir.getter_value ()) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetDirectoryOption_1289.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringlist var_embeddedFiles_1400 = var_fw_1178.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 29)) ;
        inCompiler->printMessage (GALGAS_string ("Embedded targets:\n")  COMMA_SOURCE_FILE ("target-generation.galgas", 30)) ;
        cEnumerator_stringlist enumerator_1492 (var_embeddedFiles_1400, kENUMERATION_UP) ;
        while (enumerator_1492.hasCurrentObject ()) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1492.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 32)).objectCompare (GALGAS_string ("+config.plm-target"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_string var_targetName_1582 = enumerator_1492.current_mValue (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 33)).getter_subStringFromIndex (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("target-generation.galgas", 33)) ;
            inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_targetName_1582, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34))  COMMA_SOURCE_FILE ("target-generation.galgas", 34)) ;
          }
          enumerator_1492.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_string var_targetDirectory_1746 = var_targetDirectoryOption_1289.getter_absolutePathFromPath (GALGAS_string::constructor_stringWithCurrentDirectory (SOURCE_FILE ("target-generation.galgas", 38)) COMMA_SOURCE_FILE ("target-generation.galgas", 38)) ;
        inCompiler->printMessage (GALGAS_string ("Targets in '").add_operation (var_targetDirectory_1746, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)).add_operation (GALGAS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39))  COMMA_SOURCE_FILE ("target-generation.galgas", 39)) ;
        GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("target-generation.galgas", 40)) ;
        temp_3.addAssign_operation (GALGAS_string ("plm-target")  COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
        GALGAS_stringlist var_allConfigFiles_1912 = var_targetDirectory_1746.getter_regularFilesWithExtensions (GALGAS_bool (true), temp_3 COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
        cEnumerator_stringlist enumerator_2014 (var_allConfigFiles_1912, kENUMERATION_UP) ;
        while (enumerator_2014.hasCurrentObject ()) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2014.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 42)).objectCompare (GALGAS_string ("+config.plm-target"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_2014.current_mValue (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43))  COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
          }
          enumerator_2014.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_path_2226 = GALGAS_string (gOption_plm_5F_options_extractEmbeddedTargets.getter_value ()) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_path_2226.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_stringlist var_embeddedFiles_2321 = var_fw_1178.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 51)) ;
      cEnumerator_stringlist enumerator_2375 (var_embeddedFiles_2321, kENUMERATION_UP) ;
      while (enumerator_2375.hasCurrentObject ()) {
        GALGAS_string var_filePath_2397 = var_path_2226.add_operation (enumerator_2375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 53)) ;
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_filePath_2397, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54))  COMMA_SOURCE_FILE ("target-generation.galgas", 54)) ;
        GALGAS_string var_dir_2459 = var_filePath_2397.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 55)) ;
        var_dir_2459.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 56)) ;
        GALGAS_string var_text_2547 = var_fw_1178.getter_textFileContentsAtPath (enumerator_2375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 57)) ;
        GALGAS_bool joker_2637 ; // Joker input parameter
        var_text_2547.method_writeToFileWhenDifferentContents (var_filePath_2397, joker_2637, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 58)) ;
        enumerator_2375.gotoNextObject () ;
      }
    }
  }
  {
    GALGAS_filewrapper var_fw_602 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_listEmbeddedSampleFiles.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_stringlist var_files_712 = var_fw_602.getter_allTextFilePathes (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
      inCompiler->printMessage (GALGAS_string ("Embedded sample code:\n")  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
      cEnumerator_stringlist enumerator_796 (var_files_712, kENUMERATION_UP) ;
      while (enumerator_796.hasCurrentObject ()) {
        inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_796.current_mValue (HERE).getter_subStringFromIndex (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
        enumerator_796.gotoNextObject () ;
      }
    }
    GALGAS_string var_path_878 = GALGAS_string (gOption_plm_5F_options_extractEmbeddedSampleFile.getter_value ()) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_path_878.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const enumGalgasBool test_8 = var_fw_602.getter_fileExistsAtPath (var_path_878, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 24)).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string var_text_1009 = var_fw_602.getter_textFileContentsAtPath (var_path_878, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 25)) ;
        GALGAS_string var_sourceName_1066 = var_path_878.getter_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas", 26)) ;
        GALGAS_bool joker_1152 ; // Joker input parameter
        var_text_1009.method_writeToFileWhenDifferentContents (var_sourceName_1066, joker_1152, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 27)) ;
      }else if (kBoolFalse == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).getter_location (SOURCE_FILE ("embedded-sample-code.galgas", 29)), GALGAS_string ("there is no '").add_operation (var_path_878, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GALGAS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)), fixItArray9  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
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
        if (fileExtension == "plm-target") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_plm_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_plm_5F_target_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_plm_5F_target_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_plm_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "plm") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_plm_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_plm_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_plm_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_plm_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
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
    }catch (const ::std:: exception & e) {
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

