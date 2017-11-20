#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"




//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_key_i0_ (const GALGAS_string constinArgument_inKey,
                                                                                                    C_Lexique_plm_5F_lexique * inCompiler) {
  GALGAS_lstring var_key_3314 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 88)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_key_3314.getter_string (HERE).objectCompare (constinArgument_inKey)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, constinArgument_inKey) ;
    inCompiler->emitSemanticError (var_key_3314.getter_location (SOURCE_FILE ("configuration.galgas", 90)), GALGAS_string ("invalid key"), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 90)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_key_i0_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 88)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("configuration.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GALGAS__32_lstringlist & outArgument_outPythonUtilityToolList,
                                                                                                                                  C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outPythonUtilityToolList.drop () ; // Release 'out' argument
  nt_key_ (GALGAS_string ("PYTHON_UTILITIES"), inCompiler) ;
  outArgument_outPythonUtilityToolList = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 99)) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_relativePath_3753 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 103)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("configuration.galgas", 104)) ;
      GALGAS_lstring var_destinationFile_3806 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 105)) ;
      outArgument_outPythonUtilityToolList.addAssign_operation (var_relativePath_3753, var_destinationFile_3806  COMMA_SOURCE_FILE ("configuration.galgas", 106)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 108)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 103)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("configuration.galgas", 104)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 105)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 108)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_section_5F_specification_i2_ (GALGAS_sectionImplementationScheme & outArgument_outSectionImplementation,
                                                                                                                         C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outSectionImplementation.drop () ; // Release 'out' argument
  nt_key_ (GALGAS_string ("SECTION"), inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_sectionHandler_4199 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 118)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
    GALGAS_lbigint var_sectionPushedRegisterByteSize_4260 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 120)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
    GALGAS_lstring var_sectionDispatcherHeader_4316 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 122)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 123)) ;
    GALGAS_lstring var_sectionDispatcherEntry_4371 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 124)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
    GALGAS_lstring var_sectionDispatcherInvocation_4431 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 126)) ;
    outArgument_outSectionImplementation = GALGAS_sectionImplementationScheme::constructor_svc (var_sectionPushedRegisterByteSize_4260, var_sectionHandler_4199, var_sectionDispatcherEntry_4371, var_sectionDispatcherHeader_4316, var_sectionDispatcherInvocation_4431  COMMA_SOURCE_FILE ("configuration.galgas", 127)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_sectionDisableInterrupt_4816 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 136)) ;
    GALGAS_lstring var_sectionEnableInterrupt_4871 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 137)) ;
    outArgument_outSectionImplementation = GALGAS_sectionImplementationScheme::constructor_function (var_sectionDisableInterrupt_4816.getter_string (SOURCE_FILE ("configuration.galgas", 139)), var_sectionEnableInterrupt_4871.getter_string (SOURCE_FILE ("configuration.galgas", 140))  COMMA_SOURCE_FILE ("configuration.galgas", 138)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_section_5F_specification_i2_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 118)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 120)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 122)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 123)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 124)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 126)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 136)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 137)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i3_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                                                 GALGAS_lstringlist & outArgument_outImportedFileList,
                                                                                                                                 GALGAS_location & outArgument_outEndOfSourceFile,
                                                                                                                                 C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GALGAS__32_lstringlist var_python_5F_utilityToolList_5394 ;
  nt_python_5F_utility_5F_tool_5F_list_ (var_python_5F_utilityToolList_5394, inCompiler) ;
  nt_key_ (GALGAS_string ("PYTHON_BUILD"), inCompiler) ;
  GALGAS_lstring var_python_5F_build_5453 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 154)) ;
  nt_key_ (GALGAS_string ("LINKER_SCRIPT"), inCompiler) ;
  GALGAS_lstring var_linkerScript_5513 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_key_ (GALGAS_string ("PANIC"), inCompiler) ;
  GALGAS_lstring var_panicCodeTypeName_5568 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 159)) ;
  GALGAS_lstring var_panicLineTypeName_5613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 161)) ;
  GALGAS_lstring var_targetPanic_5F_LL_5F_filePath_5665 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_key_ (GALGAS_string ("POINTER_BIT_COUNT"), inCompiler) ;
  GALGAS_lbigint var_pointerSize_5727 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_key_ (GALGAS_string ("SYSTEM_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_systemStackSize_5793 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_key_ (GALGAS_string ("NOP"), inCompiler) ;
  GALGAS_lstring var_nopInstructionStringInLLVM_5857 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_key_ (GALGAS_string ("SERVICE"), inCompiler) ;
  GALGAS_lstring var_serviceHandler_5913 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 171)) ;
  GALGAS_lbigint var_servicePushedRegisterByteSize_5970 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 173)) ;
  GALGAS_lstring var_serviceDispatcherHeader_6022 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 175)) ;
  GALGAS_lstring var_serviceDispatcherEntry_6073 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 177)) ;
  GALGAS_lstring var_serviceEntry_6114 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  GALGAS_sectionImplementationScheme var_sectionImplementation_6169 ;
  nt_section_5F_specification_ (var_sectionImplementation_6169, inCompiler) ;
  nt_key_ (GALGAS_string ("C_FILES"), inCompiler) ;
  GALGAS_lstringlist var_C_5F_definitionFiles_6225 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 181)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_fileRelativePath_6280 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 183)) ;
    var_C_5F_definitionFiles_6225.addAssign_operation (var_fileRelativePath_6280  COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 186)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_key_ (GALGAS_string ("S_FILES"), inCompiler) ;
  GALGAS_lstringlist var_S_5F_definitionFiles_6409 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 189)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GALGAS_lstring var_fileRelativePath_6464 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 191)) ;
    var_S_5F_definitionFiles_6409.addAssign_operation (var_fileRelativePath_6464  COMMA_SOURCE_FILE ("configuration.galgas", 192)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 194)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  nt_key_ (GALGAS_string ("LL_FILES"), inCompiler) ;
  GALGAS_lstringlist var_LL_5F_definitionFiles_6595 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 197)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_fileRelativePath_6650 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 199)) ;
    var_LL_5F_definitionFiles_6595.addAssign_operation (var_fileRelativePath_6650  COMMA_SOURCE_FILE ("configuration.galgas", 200)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  outArgument_outImportedFileList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 204)) ;
  nt_key_ (GALGAS_string ("PLM_FILES"), inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_lstring var_relativeFilePath_6848 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 209)) ;
      outArgument_outImportedFileList.addAssign_operation (var_relativeFilePath_6848  COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 212)) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_key_ (GALGAS_string ("INTERRUPT_HANDLER"), inCompiler) ;
  GALGAS_lstring var_xtrInterruptHandler_7010 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 216)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 217)) ;
  GALGAS_lbigint var_stackedUserRegisterOnInterruptByteSize_7076 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 218)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 219)) ;
  GALGAS_lstring var_undefinedInterruptHandler_7130 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 220)) ;
  GALGAS_interruptionConfigurationList var_interruptionConfigurationList_7191 ;
  GALGAS_enumerationConstantList var_interruptConstantList_7218 ;
  nt_interruptConfigList_ (var_interruptionConfigurationList_7191, var_interruptConstantList_7218, inCompiler) ;
  GALGAS_targetParameters var_parameters_7238 = GALGAS_targetParameters::constructor_new (var_python_5F_utilityToolList_5394, var_python_5F_build_5453, var_targetPanic_5F_LL_5F_filePath_5665, var_linkerScript_5513, var_pointerSize_5727, var_systemStackSize_5793, var_stackedUserRegisterOnInterruptByteSize_7076, var_nopInstructionStringInLLVM_5857, var_serviceHandler_5913, var_servicePushedRegisterByteSize_5970, var_sectionImplementation_6169, var_C_5F_definitionFiles_6225, var_S_5F_definitionFiles_6409, var_LL_5F_definitionFiles_6595, var_xtrInterruptHandler_7010, var_undefinedInterruptHandler_7130, var_serviceDispatcherEntry_6073, var_serviceDispatcherHeader_6022, var_serviceEntry_6114  COMMA_SOURCE_FILE ("configuration.galgas", 222)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_configurationDeclarationAST::constructor_new (var_panicCodeTypeName_5568, var_panicLineTypeName_5613, var_parameters_7238, var_interruptionConfigurationList_7191  COMMA_SOURCE_FILE ("configuration.galgas", 243))  COMMA_SOURCE_FILE ("configuration.galgas", 243)) ;
  outArgument_outEndOfSourceFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 249)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclaration::constructor_new (GALGAS_lstring::constructor_new (function_isrSlotTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 251)), var_xtrInterruptHandler_7010.getter_location (HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 251)), var_interruptConstantList_7218  COMMA_SOURCE_FILE ("configuration.galgas", 250))  COMMA_SOURCE_FILE ("configuration.galgas", 250)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i3_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_python_5F_utility_5F_tool_5F_list_parse (inCompiler) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 154)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 159)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__24_type) COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 161)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 171)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 173)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 175)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 177)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_section_5F_specification_parse (inCompiler) ;
  nt_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 183)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 186)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_key_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 191)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 194)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  nt_key_parse (inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 199)) ;
    switch (select_plm_5F_target_5F_specific_5F_syntax_5 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  nt_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 209)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 212)) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 216)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 217)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 218)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("configuration.galgas", 219)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__22_string_22_) COMMA_SOURCE_FILE ("configuration.galgas", 220)) ;
  nt_interruptConfigList_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i4_ (GALGAS_interruptionConfigurationList & outArgument_interruptionConfigurationList,
                                                                                                                    GALGAS_enumerationConstantList & outArgument_outEnumerationConstantList,
                                                                                                                    C_Lexique_plm_5F_lexique * inCompiler) {
  outArgument_interruptionConfigurationList.drop () ; // Release 'out' argument
  outArgument_outEnumerationConstantList.drop () ; // Release 'out' argument
  outArgument_interruptionConfigurationList = GALGAS_interruptionConfigurationList::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 262)) ;
  outArgument_outEnumerationConstantList = GALGAS_enumerationConstantList::constructor_emptyList (SOURCE_FILE ("configuration.galgas", 263)) ;
  nt_key_ (GALGAS_string ("INTERRUPTS"), inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_interruptName_8623 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 268)) ;
      GALGAS_interruptionPanicCode var_interruptionPanicCode_8676 ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_10 (inCompiler)) {
      case 1: {
        var_interruptionPanicCode_8676 = GALGAS_interruptionPanicCode::constructor_noCode (SOURCE_FILE ("configuration.galgas", 271)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("configuration.galgas", 273)) ;
        GALGAS_lbigint var_panicCode_8794 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 274)) ;
        var_interruptionPanicCode_8676 = GALGAS_interruptionPanicCode::constructor_code (var_panicCode_8794  COMMA_SOURCE_FILE ("configuration.galgas", 275)) ;
        outArgument_outEnumerationConstantList.addAssign_operation (var_interruptName_8623, var_panicCode_8794.getter_bigint (SOURCE_FILE ("configuration.galgas", 276))  COMMA_SOURCE_FILE ("configuration.galgas", 276)) ;
      } break ;
      default:
        break ;
      }
      outArgument_interruptionConfigurationList.addAssign_operation (var_interruptName_8623, var_interruptionPanicCode_8676  COMMA_SOURCE_FILE ("configuration.galgas", 278)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_9 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 280)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_plm_5F_target_5F_specific_5F_syntax::rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i4_parse (C_Lexique_plm_5F_lexique * inCompiler) {
  nt_key_parse (inCompiler) ;
  switch (select_plm_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("configuration.galgas", 268)) ;
      switch (select_plm_5F_target_5F_specific_5F_syntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("configuration.galgas", 273)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("configuration.galgas", 274)) ;
      } break ;
      default:
        break ;
      }
      switch (select_plm_5F_target_5F_specific_5F_syntax_9 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_plm_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("configuration.galgas", 280)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_interruptionPanicCode_code::cEnumAssociatedValues_interruptionPanicCode_code (const GALGAS_lbigint & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_interruptionPanicCode_code::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_interruptionPanicCode_code::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_interruptionPanicCode_code * ptr = dynamic_cast<const cEnumAssociatedValues_interruptionPanicCode_code *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode::GALGAS_interruptionPanicCode (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::constructor_noCode (UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  result.mEnum = kEnum_noCode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::constructor_code (const GALGAS_lbigint & inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_code ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_interruptionPanicCode_code (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionPanicCode::method_code (GALGAS_lbigint & outAssociatedValue0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_code) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @interruptionPanicCode code invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_interruptionPanicCode_code * ptr = (const cEnumAssociatedValues_interruptionPanicCode_code *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_interruptionPanicCode [3] = {
  "(not built)",
  "noCode",
  "code"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isNoCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noCode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptionPanicCode::getter_isCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_code == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionPanicCode::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @interruptionPanicCode: " << gEnumNameArrayFor_interruptionPanicCode [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptionPanicCode::objectCompare (const GALGAS_interruptionPanicCode & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @interruptionPanicCode type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionPanicCode ("interruptionPanicCode",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptionPanicCode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionPanicCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptionPanicCode::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionPanicCode (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  const GALGAS_interruptionPanicCode * p = (const GALGAS_interruptionPanicCode *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptionPanicCode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionPanicCode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@interruptionConfigurationList' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_interruptionConfigurationList : public cCollectionElement {
  public : GALGAS_interruptionConfigurationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_interruptionConfigurationList (const GALGAS_lstring & in_mInterruptName,
                                                             const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_interruptionConfigurationList::cCollectionElement_interruptionConfigurationList (const GALGAS_lstring & in_mInterruptName,
                                                                                                    const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInterruptName, in_mInterruptionPanicCode) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_interruptionConfigurationList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_interruptionConfigurationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_interruptionConfigurationList (mObject.mProperty_mInterruptName, mObject.mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_interruptionConfigurationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptName" ":" ;
  mObject.mProperty_mInterruptName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInterruptionPanicCode" ":" ;
  mObject.mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_interruptionConfigurationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_interruptionConfigurationList * operand = (cCollectionElement_interruptionConfigurationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_interruptionConfigurationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList::GALGAS_interruptionConfigurationList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList::GALGAS_interruptionConfigurationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_interruptionConfigurationList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_interruptionPanicCode & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_interruptionConfigurationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_interruptionConfigurationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mInterruptName,
                                                                      const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_interruptionConfigurationList * p = NULL ;
  macroMyNew (p, cCollectionElement_interruptionConfigurationList (in_mInterruptName,
                                                                   in_mInterruptionPanicCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_interruptionPanicCode & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_interruptionPanicCode inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_interruptionPanicCode & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
      outOperand0 = p->mObject.mProperty_mInterruptName ;
      outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_interruptionPanicCode & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_interruptionPanicCode & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_interruptionPanicCode & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_interruptionPanicCode & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::add_operation (const GALGAS_interruptionConfigurationList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptionConfigurationList::plusAssign_operation (const GALGAS_interruptionConfigurationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_interruptionConfigurationList::getter_mInterruptNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    result = p->mObject.mProperty_mInterruptName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode GALGAS_interruptionConfigurationList::getter_mInterruptionPanicCodeAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  GALGAS_interruptionPanicCode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    result = p->mObject.mProperty_mInterruptionPanicCode ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_interruptionConfigurationList::cEnumerator_interruptionConfigurationList (const GALGAS_interruptionConfigurationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList_2D_element cEnumerator_interruptionConfigurationList::current (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_interruptionConfigurationList::current_mInterruptName (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionPanicCode cEnumerator_interruptionConfigurationList::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptionPanicCode ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @interruptionConfigurationList type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionConfigurationList ("interruptionConfigurationList",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptionConfigurationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptionConfigurationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionConfigurationList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList result ;
  const GALGAS_interruptionConfigurationList * p = (const GALGAS_interruptionConfigurationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptionConfigurationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_sectionImplementationScheme_svc::cEnumAssociatedValues_sectionImplementationScheme_svc (const GALGAS_lbigint & inAssociatedValue0,
                                                                                                              const GALGAS_lstring & inAssociatedValue1,
                                                                                                              const GALGAS_lstring & inAssociatedValue2,
                                                                                                              const GALGAS_lstring & inAssociatedValue3,
                                                                                                              const GALGAS_lstring & inAssociatedValue4
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_sectionImplementationScheme_svc::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_sectionImplementationScheme_svc::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_sectionImplementationScheme_svc * ptr = dynamic_cast<const cEnumAssociatedValues_sectionImplementationScheme_svc *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue4.objectCompare (ptr->mAssociatedValue4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_sectionImplementationScheme_function::cEnumAssociatedValues_sectionImplementationScheme_function (const GALGAS_string & inAssociatedValue0,
                                                                                                                        const GALGAS_string & inAssociatedValue1
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_sectionImplementationScheme_function::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_sectionImplementationScheme_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_sectionImplementationScheme_function * ptr = dynamic_cast<const cEnumAssociatedValues_sectionImplementationScheme_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme::GALGAS_sectionImplementationScheme (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme GALGAS_sectionImplementationScheme::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_sectionImplementationScheme result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme GALGAS_sectionImplementationScheme::constructor_svc (const GALGAS_lbigint & inAssociatedValue0,
                                                                                        const GALGAS_lstring & inAssociatedValue1,
                                                                                        const GALGAS_lstring & inAssociatedValue2,
                                                                                        const GALGAS_lstring & inAssociatedValue3,
                                                                                        const GALGAS_lstring & inAssociatedValue4
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sectionImplementationScheme result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid ()) {
    result.mEnum = kEnum_svc ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_sectionImplementationScheme_svc (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme GALGAS_sectionImplementationScheme::constructor_function (const GALGAS_string & inAssociatedValue0,
                                                                                             const GALGAS_string & inAssociatedValue1
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_sectionImplementationScheme result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_sectionImplementationScheme_function (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionImplementationScheme::method_svc (GALGAS_lbigint & outAssociatedValue0,
                                                     GALGAS_lstring & outAssociatedValue1,
                                                     GALGAS_lstring & outAssociatedValue2,
                                                     GALGAS_lstring & outAssociatedValue3,
                                                     GALGAS_lstring & outAssociatedValue4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_svc) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    C_String s ;
    s << "method @sectionImplementationScheme svc invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_sectionImplementationScheme_svc * ptr = (const cEnumAssociatedValues_sectionImplementationScheme_svc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionImplementationScheme::method_function (GALGAS_string & outAssociatedValue0,
                                                          GALGAS_string & outAssociatedValue1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @sectionImplementationScheme function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_sectionImplementationScheme_function * ptr = (const cEnumAssociatedValues_sectionImplementationScheme_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_sectionImplementationScheme [4] = {
  "(not built)",
  "none",
  "svc",
  "function"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sectionImplementationScheme::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sectionImplementationScheme::getter_isSvc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_svc == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sectionImplementationScheme::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionImplementationScheme::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<enum @sectionImplementationScheme: " << gEnumNameArrayFor_sectionImplementationScheme [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sectionImplementationScheme::objectCompare (const GALGAS_sectionImplementationScheme & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sectionImplementationScheme type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sectionImplementationScheme ("sectionImplementationScheme",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sectionImplementationScheme::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionImplementationScheme ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sectionImplementationScheme::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionImplementationScheme (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionImplementationScheme GALGAS_sectionImplementationScheme::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sectionImplementationScheme result ;
  const GALGAS_sectionImplementationScheme * p = (const GALGAS_sectionImplementationScheme *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sectionImplementationScheme *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionImplementationScheme", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension Getter '@sectionImplementationScheme sectionStackByteSize'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint extensionGetter_sectionStackByteSize (const GALGAS_sectionImplementationScheme & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const GALGAS_sectionImplementationScheme temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_sectionImplementationScheme::kNotBuilt:
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_svc:
    {
      const cEnumAssociatedValues_sectionImplementationScheme_svc * extractPtr_1475 = (const cEnumAssociatedValues_sectionImplementationScheme_svc *) (temp_0.unsafePointer ()) ;
      const GALGAS_lbigint extractedValue_sectionPushedRegisterByteSize = extractPtr_1475->mAssociatedValue0 ;
      result_result = extractedValue_sectionPushedRegisterByteSize.getter_bigint (HERE) ;
    }
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_function:
    {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 35)) ;
    }
    break ;
  case GALGAS_sectionImplementationScheme::kEnum_none:
    {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 36)) ;
    }
    break ;
  }
//---
  return result_result ;
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
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST::GALGAS_expressionAST (const cPtr_expressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
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
//                                                                                                                     *
//                                Class for element of '@enumerationConstantList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_enumerationConstantList : public cCollectionElement {
  public : GALGAS_enumerationConstantList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                       const GALGAS_bigint & in_mConstantValue
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_enumerationConstantList::cCollectionElement_enumerationConstantList (const GALGAS_lstring & in_mConstantName,
                                                                                        const GALGAS_bigint & in_mConstantValue
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantName, in_mConstantValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_enumerationConstantList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_enumerationConstantList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumerationConstantList (mObject.mProperty_mConstantName, mObject.mProperty_mConstantValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_enumerationConstantList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantName" ":" ;
  mObject.mProperty_mConstantName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantValue" ":" ;
  mObject.mProperty_mConstantValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_enumerationConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumerationConstantList * operand = (cCollectionElement_enumerationConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumerationConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList::GALGAS_enumerationConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationConstantList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bigint & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumerationConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumerationConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mConstantName,
                                                                const GALGAS_bigint & in_mConstantValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationConstantList * p = NULL ;
  macroMyNew (p, cCollectionElement_enumerationConstantList (in_mConstantName,
                                                             in_mConstantValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_bigint & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_bigint inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumerationConstantList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_bigint & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
      outOperand0 = p->mObject.mProperty_mConstantName ;
      outOperand1 = p->mObject.mProperty_mConstantValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_bigint & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_bigint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_bigint & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_bigint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    outOperand0 = p->mObject.mProperty_mConstantName ;
    outOperand1 = p->mObject.mProperty_mConstantValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::add_operation (const GALGAS_enumerationConstantList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result = GALGAS_enumerationConstantList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumerationConstantList::plusAssign_operation (const GALGAS_enumerationConstantList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumerationConstantList::getter_mConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    result = p->mObject.mProperty_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_enumerationConstantList::getter_mConstantValueAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationConstantList * p = (cCollectionElement_enumerationConstantList *) attributes.ptr () ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
    result = p->mObject.mProperty_mConstantValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_enumerationConstantList::cEnumerator_enumerationConstantList (const GALGAS_enumerationConstantList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList_2D_element cEnumerator_enumerationConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_enumerationConstantList::current_mConstantName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_enumerationConstantList::current_mConstantValue (LOCATION_ARGS) const {
  const cCollectionElement_enumerationConstantList * p = (const cCollectionElement_enumerationConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationConstantList) ;
  return p->mObject.mProperty_mConstantValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumerationConstantList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationConstantList ("enumerationConstantList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationConstantList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList GALGAS_enumerationConstantList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList result ;
  const GALGAS_enumerationConstantList * p = (const GALGAS_enumerationConstantList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantMap::cMapElement_constantMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_bigint & in_mIndex,
                                                  const GALGAS_lstring & in_mClassTypeName
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mClassTypeName (in_mClassTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_constantMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_constantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_constantMap (mProperty_lkey, mProperty_mIndex, mProperty_mClassTypeName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_constantMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassTypeName" ":" ;
  mProperty_mClassTypeName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_constantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_constantMap * operand = (cMapElement_constantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (operand->mProperty_mClassTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap::GALGAS_constantMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap::GALGAS_constantMap (const GALGAS_constantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap & GALGAS_constantMap::operator = (const GALGAS_constantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap GALGAS_constantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap GALGAS_constantMap::constructor_mapWithMapToOverride (const GALGAS_constantMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap GALGAS_constantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_constantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_bigint & inArgument0,
                                              const GALGAS_lstring & inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = NULL ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@constantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_bigint inArgument0,
                                           GALGAS_lstring inArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * p = NULL ;
  macroMyNew (p, cMapElement_constantMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_constantMap_searchKey = "there is no '%K' constant" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_bigint & outArgument0,
                                           GALGAS_lstring & outArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_constantMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_constantMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mClassTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_constantMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constantMap::getter_mClassTypeNameForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    result = p->mProperty_mClassTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap::setter_setMIndexForKey (GALGAS_bigint inAttributeValue,
                                                 GALGAS_string inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantMap * p = (cMapElement_constantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constantMap::setter_setMClassTypeNameForKey (GALGAS_lstring inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_constantMap * p = (cMapElement_constantMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_constantMap) ;
    p->mProperty_mClassTypeName = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_constantMap * GALGAS_constantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_constantMap * result = (cMapElement_constantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_constantMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constantMap::cEnumerator_constantMap (const GALGAS_constantMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap_2D_element cEnumerator_constantMap::current (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return GALGAS_constantMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mClassTypeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_constantMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_constantMap::current_mClassTypeName (LOCATION_ARGS) const {
  const cMapElement_constantMap * p = (const cMapElement_constantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_constantMap) ;
  return p->mProperty_mClassTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @constantMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constantMap ("constantMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap GALGAS_constantMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_constantMap result ;
  const GALGAS_constantMap * p = (const GALGAS_constantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractGenerationIR::objectCompare (const GALGAS_abstractGenerationIR & inOperand) const {
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

GALGAS_abstractGenerationIR::GALGAS_abstractGenerationIR (void) :
AC_GALGAS_class (false) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGenerationIR::GALGAS_abstractGenerationIR (const cPtr_abstractGenerationIR * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractGenerationIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @abstractGenerationIR class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractGenerationIR::cPtr_abstractGenerationIR (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractGenerationIR type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractGenerationIR ("abstractGenerationIR",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractGenerationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGenerationIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractGenerationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractGenerationIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractGenerationIR GALGAS_abstractGenerationIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractGenerationIR result ;
  const GALGAS_abstractGenerationIR * p = (const GALGAS_abstractGenerationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractGenerationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGenerationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@structurePropertyListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_structurePropertyListAST : public cCollectionElement {
  public : GALGAS_structurePropertyListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                        const GALGAS_bool & in_mIsConstant,
                                                        const GALGAS_bool & in_mIsPublic,
                                                        const GALGAS_lstring & in_mPropertyTypeName,
                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_structurePropertyListAST::cCollectionElement_structurePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                          const GALGAS_bool & in_mIsConstant,
                                                                                          const GALGAS_bool & in_mIsPublic,
                                                                                          const GALGAS_lstring & in_mPropertyTypeName,
                                                                                          const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mIsConstant, in_mIsPublic, in_mPropertyTypeName, in_mInitialisation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_structurePropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_structurePropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_structurePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mIsConstant, mObject.mProperty_mIsPublic, mObject.mProperty_mPropertyTypeName, mObject.mProperty_mInitialisation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_structurePropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mObject.mProperty_mIsConstant.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mObject.mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyTypeName" ":" ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialisation" ":" ;
  mObject.mProperty_mInitialisation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_structurePropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_structurePropertyListAST * operand = (cCollectionElement_structurePropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_structurePropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST::GALGAS_structurePropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_structurePropertyListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_lstring & inOperand3,
                                                                                            const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_structurePropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_structurePropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mPropertyName,
                                                                 const GALGAS_bool & in_mIsConstant,
                                                                 const GALGAS_bool & in_mIsPublic,
                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                 const GALGAS_structurePropertyInitOptionalExpressionAST & in_mInitialisation
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_structurePropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_structurePropertyListAST (in_mPropertyName,
                                                              in_mIsConstant,
                                                              in_mIsPublic,
                                                              in_mPropertyTypeName,
                                                              in_mInitialisation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_bool & inOperand1,
                                                           const GALGAS_bool & inOperand2,
                                                           const GALGAS_lstring & inOperand3,
                                                           const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_bool inOperand1,
                                                            const GALGAS_bool inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_structurePropertyInitOptionalExpressionAST inOperand4,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_structurePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_bool & outOperand1,
                                                            GALGAS_bool & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mIsConstant ;
      outOperand2 = p->mObject.mProperty_mIsPublic ;
      outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
      outOperand4 = p->mObject.mProperty_mInitialisation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_bool & outOperand1,
                                                       GALGAS_bool & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_bool & outOperand1,
                                                      GALGAS_bool & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_bool & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_bool & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mIsPublic ;
    outOperand3 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand4 = p->mObject.mProperty_mInitialisation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::add_operation (const GALGAS_structurePropertyListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_structurePropertyListAST result = GALGAS_structurePropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST::plusAssign_operation (const GALGAS_structurePropertyListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyListAST::getter_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mIsConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyListAST::getter_mIsPublicAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mIsPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyListAST::getter_mInitialisationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_structurePropertyListAST * p = (cCollectionElement_structurePropertyListAST *) attributes.ptr () ;
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
    result = p->mObject.mProperty_mInitialisation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_structurePropertyListAST::cEnumerator_structurePropertyListAST (const GALGAS_structurePropertyListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element cEnumerator_structurePropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_structurePropertyListAST::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mIsConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_structurePropertyListAST::current_mIsPublic (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_structurePropertyListAST::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST cEnumerator_structurePropertyListAST::current_mInitialisation (LOCATION_ARGS) const {
  const cCollectionElement_structurePropertyListAST * p = (const cCollectionElement_structurePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_structurePropertyListAST) ;
  return p->mObject.mProperty_mInitialisation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @structurePropertyListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyListAST ("structurePropertyListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structurePropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structurePropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_structurePropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST result ;
  const GALGAS_structurePropertyListAST * p = (const GALGAS_structurePropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structurePropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression::cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression::description (C_String & ioString,
                                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * ptr = dynamic_cast<const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST::GALGAS_structurePropertyInitOptionalExpressionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_expression ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyInitOptionalExpressionAST::constructor_noExpression (UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  result.mEnum = kEnum_noExpression ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyInitOptionalExpressionAST::method_expression (GALGAS_expressionAST & outAssociatedValue0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_expression) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @structurePropertyInitOptionalExpressionAST expression invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * ptr = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_structurePropertyInitOptionalExpressionAST [3] = {
  "(not built)",
  "expression",
  "noExpression"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyInitOptionalExpressionAST::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_expression == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structurePropertyInitOptionalExpressionAST::getter_isNoExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noExpression == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyInitOptionalExpressionAST::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<enum @structurePropertyInitOptionalExpressionAST: " << gEnumNameArrayFor_structurePropertyInitOptionalExpressionAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structurePropertyInitOptionalExpressionAST::objectCompare (const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @structurePropertyInitOptionalExpressionAST type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyInitOptionalExpressionAST ("structurePropertyInitOptionalExpressionAST",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structurePropertyInitOptionalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyInitOptionalExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structurePropertyInitOptionalExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyInitOptionalExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyInitOptionalExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  const GALGAS_structurePropertyInitOptionalExpressionAST * p = (const GALGAS_structurePropertyInitOptionalExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structurePropertyInitOptionalExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyInitOptionalExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@propertyList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_propertyList : public cCollectionElement {
  public : GALGAS_propertyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_propertyList (const GALGAS_string & in_mPropertyName,
                                            const GALGAS_PLMType & in_mType
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_propertyList::cCollectionElement_propertyList (const GALGAS_string & in_mPropertyName,
                                                                  const GALGAS_PLMType & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_propertyList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_propertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyList (mObject.mProperty_mPropertyName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_propertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_propertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyList * operand = (cCollectionElement_propertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList::GALGAS_propertyList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList::GALGAS_propertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                    const GALGAS_PLMType & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_string & in_mPropertyName,
                                                     const GALGAS_PLMType & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyList (in_mPropertyName,
                                                  in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::addAssign_operation (const GALGAS_string & inOperand0,
                                               const GALGAS_PLMType & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                const GALGAS_PLMType inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                GALGAS_PLMType & outOperand1,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_propertyList) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_popFirst (GALGAS_string & outOperand0,
                                           GALGAS_PLMType & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::setter_popLast (GALGAS_string & outOperand0,
                                          GALGAS_PLMType & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::method_first (GALGAS_string & outOperand0,
                                        GALGAS_PLMType & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::method_last (GALGAS_string & outOperand0,
                                       GALGAS_PLMType & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::add_operation (const GALGAS_propertyList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList::plusAssign_operation (const GALGAS_propertyList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_propertyList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_propertyList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_propertyList::cEnumerator_propertyList (const GALGAS_propertyList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element cEnumerator_propertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_propertyList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_propertyList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject.mProperty_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @propertyList type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyList ("propertyList",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_propertyList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyList result ;
  const GALGAS_propertyList * p = (const GALGAS_propertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_propertyAccessKind_constantProperty::cEnumAssociatedValues_propertyAccessKind_constantProperty (const GALGAS_objectIR & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_propertyAccessKind_constantProperty::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_propertyAccessKind_constantProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyAccessKind_constantProperty * ptr = dynamic_cast<const cEnumAssociatedValues_propertyAccessKind_constantProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_propertyAccessKind_indexed::cEnumAssociatedValues_propertyAccessKind_indexed (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                    const GALGAS_uint & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_propertyAccessKind_indexed::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_propertyAccessKind_indexed::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyAccessKind_indexed * ptr = dynamic_cast<const cEnumAssociatedValues_propertyAccessKind_indexed *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod::cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod (const GALGAS_routineDescriptor & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * ptr = dynamic_cast<const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessKind::GALGAS_propertyAccessKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessKind GALGAS_propertyAccessKind::constructor_constantProperty (const GALGAS_objectIR & inAssociatedValue0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_constantProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyAccessKind_constantProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessKind GALGAS_propertyAccessKind::constructor_indexed (const GALGAS_PLMType & inAssociatedValue0,
                                                                          const GALGAS_uint & inAssociatedValue1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_indexed ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyAccessKind_indexed (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessKind GALGAS_propertyAccessKind::constructor_nonVirtualMethod (const GALGAS_routineDescriptor & inAssociatedValue0
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_nonVirtualMethod ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyAccessKind::method_constantProperty (GALGAS_objectIR & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_constantProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyAccessKind constantProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyAccessKind_constantProperty * ptr = (const cEnumAssociatedValues_propertyAccessKind_constantProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyAccessKind::method_indexed (GALGAS_PLMType & outAssociatedValue0,
                                                GALGAS_uint & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_indexed) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @propertyAccessKind indexed invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyAccessKind_indexed * ptr = (const cEnumAssociatedValues_propertyAccessKind_indexed *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyAccessKind::method_nonVirtualMethod (GALGAS_routineDescriptor & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_nonVirtualMethod) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyAccessKind nonVirtualMethod invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * ptr = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_propertyAccessKind [4] = {
  "(not built)",
  "constantProperty",
  "indexed",
  "nonVirtualMethod"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyAccessKind::getter_isConstantProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_constantProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyAccessKind::getter_isIndexed (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_indexed == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyAccessKind::getter_isNonVirtualMethod (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_nonVirtualMethod == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyAccessKind::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<enum @propertyAccessKind: " << gEnumNameArrayFor_propertyAccessKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyAccessKind::objectCompare (const GALGAS_propertyAccessKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @propertyAccessKind type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyAccessKind ("propertyAccessKind",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyAccessKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyAccessKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAccessKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessKind GALGAS_propertyAccessKind::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessKind result ;
  const GALGAS_propertyAccessKind * p = (const GALGAS_propertyAccessKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyAccessKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_propertyMap::cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_bool & in_mIsPublic,
                                                  const GALGAS_propertyAccessKind & in_mAccess
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mAccess (in_mAccess) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mIsPublic, mProperty_mAccess COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_propertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsPublic" ":" ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccess" ":" ;
  mProperty_mAccess.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_propertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyMap * operand = (cMapElement_propertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPublic.objectCompare (operand->mProperty_mIsPublic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccess.objectCompare (operand->mProperty_mAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap::GALGAS_propertyMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap::GALGAS_propertyMap (const GALGAS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap & GALGAS_propertyMap::operator = (const GALGAS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap GALGAS_propertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap GALGAS_propertyMap::constructor_mapWithMapToOverride (const GALGAS_propertyMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap GALGAS_propertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_bool & inArgument0,
                                              const GALGAS_propertyAccessKind & inArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_bool inArgument0,
                                           GALGAS_propertyAccessKind inArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_propertyMap_searchKey = "there is no '%K' property" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_bool & outArgument0,
                                           GALGAS_propertyAccessKind & outArgument1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mAccess ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyMap::getter_mIsPublicForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessKind GALGAS_propertyMap::getter_mAccessForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_propertyAccessKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mAccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap::setter_setMAccessForKey (GALGAS_propertyAccessKind inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mAccess = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mAccess) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_propertyMap::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessKind cEnumerator_propertyMap::current_mAccess (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @propertyMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap GALGAS_propertyMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  const GALGAS_propertyMap * p = (const GALGAS_propertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@constructorSignature' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_constructorSignature : public cCollectionElement {
  public : GALGAS_constructorSignature_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_constructorSignature (const GALGAS_string & in_mSelector,
                                                    const GALGAS_PLMType & in_mType,
                                                    const GALGAS_uint & in_mFieldIndex
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_constructorSignature::cCollectionElement_constructorSignature (const GALGAS_string & in_mSelector,
                                                                                  const GALGAS_PLMType & in_mType,
                                                                                  const GALGAS_uint & in_mFieldIndex
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mType, in_mFieldIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_constructorSignature::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_constructorSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_constructorSignature (mObject.mProperty_mSelector, mObject.mProperty_mType, mObject.mProperty_mFieldIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_constructorSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldIndex" ":" ;
  mObject.mProperty_mFieldIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_constructorSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_constructorSignature * operand = (cCollectionElement_constructorSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_constructorSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature::GALGAS_constructorSignature (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature::GALGAS_constructorSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorSignature::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorSignature  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorSignature::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_PLMType & inOperand1,
                                                                                    const GALGAS_uint & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_constructorSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_string & in_mSelector,
                                                             const GALGAS_PLMType & in_mType,
                                                             const GALGAS_uint & in_mFieldIndex
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_constructorSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_constructorSignature (in_mSelector,
                                                          in_mType,
                                                          in_mFieldIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::addAssign_operation (const GALGAS_string & inOperand0,
                                                       const GALGAS_PLMType & inOperand1,
                                                       const GALGAS_uint & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_constructorSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                        const GALGAS_PLMType inOperand1,
                                                        const GALGAS_uint inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_constructorSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                        GALGAS_PLMType & outOperand1,
                                                        GALGAS_uint & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
      outOperand0 = p->mObject.mProperty_mSelector ;
      outOperand1 = p->mObject.mProperty_mType ;
      outOperand2 = p->mObject.mProperty_mFieldIndex ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::setter_popFirst (GALGAS_string & outOperand0,
                                                   GALGAS_PLMType & outOperand1,
                                                   GALGAS_uint & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::setter_popLast (GALGAS_string & outOperand0,
                                                  GALGAS_PLMType & outOperand1,
                                                  GALGAS_uint & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::method_first (GALGAS_string & outOperand0,
                                                GALGAS_PLMType & outOperand1,
                                                GALGAS_uint & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::method_last (GALGAS_string & outOperand0,
                                               GALGAS_PLMType & outOperand1,
                                               GALGAS_uint & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mFieldIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorSignature::add_operation (const GALGAS_constructorSignature & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_constructorSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_constructorSignature result = GALGAS_constructorSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_constructorSignature result = GALGAS_constructorSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_constructorSignature result = GALGAS_constructorSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature::plusAssign_operation (const GALGAS_constructorSignature inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_constructorSignature::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_constructorSignature::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constructorSignature::getter_mFieldIndexAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_constructorSignature * p = (cCollectionElement_constructorSignature *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
    result = p->mObject.mProperty_mFieldIndex ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_constructorSignature::cEnumerator_constructorSignature (const GALGAS_constructorSignature & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element cEnumerator_constructorSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_constructorSignature::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_constructorSignature::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_constructorSignature::current_mFieldIndex (LOCATION_ARGS) const {
  const cCollectionElement_constructorSignature * p = (const cCollectionElement_constructorSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_constructorSignature) ;
  return p->mObject.mProperty_mFieldIndex ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @constructorSignature type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorSignature ("constructorSignature",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature GALGAS_constructorSignature::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature result ;
  const GALGAS_constructorSignature * p = (const GALGAS_constructorSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@sortedOperandIRList' sorted list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cSortedListElement_sortedOperandIRList : public cSortedListElement {
  public : GALGAS_sortedOperandIRList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_sortedOperandIRList (const GALGAS_objectIR & in_mOperand,
                                                   const GALGAS_uint & in_mIndex
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement_sortedOperandIRList::cSortedListElement_sortedOperandIRList (const GALGAS_objectIR & in_mOperand,
                                                                                const GALGAS_uint & in_mIndex
                                                                                COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mOperand, in_mIndex) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cSortedListElement_sortedOperandIRList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cSortedListElement * cSortedListElement_sortedOperandIRList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_sortedOperandIRList (mObject.mProperty_mOperand, mObject.mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cSortedListElement_sortedOperandIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mProperty_mOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_sortedOperandIRList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_sortedOperandIRList * operand = (cSortedListElement_sortedOperandIRList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_sortedOperandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList::GALGAS_sortedOperandIRList (void) :
AC_GALGAS_sortedlist () {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cSortedListElement_sortedOperandIRList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_sortedOperandIRList * operand = (const cSortedListElement_sortedOperandIRList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_sortedOperandIRList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mIndex.objectCompare (operand->mObject.mProperty_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList GALGAS_sortedOperandIRList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_sortedOperandIRList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList GALGAS_sortedOperandIRList::constructor_sortedListWithValue (const GALGAS_objectIR & inOperand0,
                                                                                        const GALGAS_uint & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_sortedOperandIRList (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList::addAssign_operation (const GALGAS_objectIR & inOperand0,
                                                      const GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_sortedOperandIRList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList::plusAssign_operation (const GALGAS_sortedOperandIRList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList::setter_popSmallest (GALGAS_objectIR & outOperand0,
                                                     GALGAS_uint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList::setter_popGreatest (GALGAS_objectIR & outOperand0,
                                                     GALGAS_uint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList::method_smallest (GALGAS_objectIR & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList::method_greatest (GALGAS_objectIR & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sortedOperandIRList::cEnumerator_sortedOperandIRList (const GALGAS_sortedOperandIRList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element cEnumerator_sortedOperandIRList::current (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_sortedOperandIRList::current_mOperand (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject.mProperty_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_sortedOperandIRList::current_mIndex (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject.mProperty_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @sortedOperandIRList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedOperandIRList ("sortedOperandIRList",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortedOperandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedOperandIRList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortedOperandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedOperandIRList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList GALGAS_sortedOperandIRList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList result ;
  const GALGAS_sortedOperandIRList * p = (const GALGAS_sortedOperandIRList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedOperandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedOperandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_reference::cEnumAssociatedValues_objectIR_reference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                    const GALGAS_string & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_reference::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_reference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_reference * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_reference *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_llvmValue::cEnumAssociatedValues_objectIR_llvmValue (const GALGAS_PLMType & inAssociatedValue0,
                                                                                    const GALGAS_string & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_llvmValue::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_literalInteger::cEnumAssociatedValues_objectIR_literalInteger (const GALGAS_PLMType & inAssociatedValue0,
                                                                                              const GALGAS_bigint & inAssociatedValue1
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_literalInteger::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_literalInteger::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_literalInteger * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_literalInteger *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_llvmStructureConstant::cEnumAssociatedValues_objectIR_llvmStructureConstant (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                            const GALGAS_sortedOperandIRList & inAssociatedValue1
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_llvmStructureConstant::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmStructureConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmStructureConstant * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmStructureConstant *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_llvmArrayConstant::cEnumAssociatedValues_objectIR_llvmArrayConstant (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                    const GALGAS_operandIRList & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_llvmArrayConstant::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmArrayConstant::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmArrayConstant * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmArrayConstant *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_literalString::cEnumAssociatedValues_objectIR_literalString (const GALGAS_uint & inAssociatedValue0,
                                                                                            const GALGAS_uint & inAssociatedValue1
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_literalString::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_literalString::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_literalString * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_literalString *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_objectIR_zero::cEnumAssociatedValues_objectIR_zero (const GALGAS_PLMType & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_objectIR_zero::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_objectIR_zero::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_zero * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_zero *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR::GALGAS_objectIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_null (UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  result.mEnum = kEnum_null ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_reference (const GALGAS_PLMType & inAssociatedValue0,
                                                        const GALGAS_string & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_reference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_reference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmValue (const GALGAS_PLMType & inAssociatedValue0,
                                                        const GALGAS_string & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_literalInteger (const GALGAS_PLMType & inAssociatedValue0,
                                                             const GALGAS_bigint & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_literalInteger ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_literalInteger (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmStructureConstant (const GALGAS_PLMType & inAssociatedValue0,
                                                                    const GALGAS_sortedOperandIRList & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmStructureConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmStructureConstant (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmArrayConstant (const GALGAS_PLMType & inAssociatedValue0,
                                                                const GALGAS_operandIRList & inAssociatedValue1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmArrayConstant ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayConstant (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_literalString (const GALGAS_uint & inAssociatedValue0,
                                                            const GALGAS_uint & inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_literalString ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_literalString (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::constructor_zero (const GALGAS_PLMType & inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_zero ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_zero (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_reference (GALGAS_PLMType & outAssociatedValue0,
                                        GALGAS_string & outAssociatedValue1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_reference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR reference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_reference * ptr = (const cEnumAssociatedValues_objectIR_reference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_llvmValue (GALGAS_PLMType & outAssociatedValue0,
                                        GALGAS_string & outAssociatedValue1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmValue * ptr = (const cEnumAssociatedValues_objectIR_llvmValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_literalInteger (GALGAS_PLMType & outAssociatedValue0,
                                             GALGAS_bigint & outAssociatedValue1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalInteger) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR literalInteger invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_literalInteger * ptr = (const cEnumAssociatedValues_objectIR_literalInteger *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_llvmStructureConstant (GALGAS_PLMType & outAssociatedValue0,
                                                    GALGAS_sortedOperandIRList & outAssociatedValue1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmStructureConstant) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmStructureConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmStructureConstant * ptr = (const cEnumAssociatedValues_objectIR_llvmStructureConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_llvmArrayConstant (GALGAS_PLMType & outAssociatedValue0,
                                                GALGAS_operandIRList & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayConstant) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmArrayConstant invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayConstant * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayConstant *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_literalString (GALGAS_uint & outAssociatedValue0,
                                            GALGAS_uint & outAssociatedValue1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalString) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR literalString invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_literalString * ptr = (const cEnumAssociatedValues_objectIR_literalString *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::method_zero (GALGAS_PLMType & outAssociatedValue0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_zero) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @objectIR zero invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_zero * ptr = (const cEnumAssociatedValues_objectIR_zero *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_objectIR [9] = {
  "(not built)",
  "null",
  "reference",
  "llvmValue",
  "literalInteger",
  "llvmStructureConstant",
  "llvmArrayConstant",
  "literalString",
  "zero"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_null == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_reference == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLlvmValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmValue == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalInteger == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLlvmStructureConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmStructureConstant == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayConstant == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_objectIR::getter_isZero (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_zero == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectIR::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @objectIR: " << gEnumNameArrayFor_objectIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_objectIR::objectCompare (const GALGAS_objectIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @objectIR type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectIR ("objectIR",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_objectIR::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  const GALGAS_objectIR * p = (const GALGAS_objectIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension method '@abstractDeclarationAST addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_addExtension> gExtensionMethodTable_abstractDeclarationAST_addExtension ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addExtension (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractDeclarationAST_addExtension inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_addExtension.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractDeclarationAST_addExtension (void) {
  gExtensionMethodTable_abstractDeclarationAST_addExtension.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDeclarationAST_addExtension (NULL,
                                                                freeExtensionMethod_abstractDeclarationAST_addExtension) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                       GALGAS_extensionDeclarationListAST & io_ioExtensionDeclarationListAST,
                                       GALGAS_extendStaticArrayDeclarationAST & io_ioExtendStaticArrayDeclarationAST,
                                       GALGAS_abstractDeclarationAST & out_outNewDeclaration,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outNewDeclaration.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_addExtension f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_addExtension.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_addExtension (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_addExtension.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_addExtension (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_addExtension.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioExtensionDeclarationListAST, io_ioExtendStaticArrayDeclarationAST, out_outNewDeclaration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerDeclarationAST * p = (const cPtr_integerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsSigned.objectCompare (p->mProperty_mIsSigned) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSize.objectCompare (p->mProperty_mSize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_integerDeclarationAST::objectCompare (const GALGAS_integerDeclarationAST & inOperand) const {
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

GALGAS_integerDeclarationAST::GALGAS_integerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerDeclarationAST GALGAS_integerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_uint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerDeclarationAST::GALGAS_integerDeclarationAST (const cPtr_integerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerDeclarationAST GALGAS_integerDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsSigned,
                                                                            const GALGAS_uint & inAttribute_mSize
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_integerDeclarationAST result ;
  if (inAttribute_mIsSigned.isValid () && inAttribute_mSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerDeclarationAST (inAttribute_mIsSigned, inAttribute_mSize COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_integerDeclarationAST::getter_mIsSigned (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerDeclarationAST * p = (const cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    result = p->mProperty_mIsSigned ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_integerDeclarationAST::getter_mIsSigned (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSigned ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_integerDeclarationAST::getter_mSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerDeclarationAST * p = (const cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    result = p->mProperty_mSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_integerDeclarationAST::getter_mSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @integerDeclarationAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerDeclarationAST::cPtr_integerDeclarationAST (const GALGAS_bool & in_mIsSigned,
                                                        const GALGAS_uint & in_mSize
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mIsSigned (in_mIsSigned),
mProperty_mSize (in_mSize) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST ;
}

void cPtr_integerDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@integerDeclarationAST:" ;
  mProperty_mIsSigned.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerDeclarationAST (mProperty_mIsSigned, mProperty_mSize COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @integerDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerDeclarationAST ("integerDeclarationAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerDeclarationAST GALGAS_integerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerDeclarationAST result ;
  const GALGAS_integerDeclarationAST * p = (const GALGAS_integerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@integerDeclarationAST typeName'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_integerDeclarationAST_typeName> gExtensionGetterTable_integerDeclarationAST_typeName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typeName (const int32_t inClassIndex,
                                    enterExtensionGetter_integerDeclarationAST_typeName inGetter) {
  gExtensionGetterTable_integerDeclarationAST_typeName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_typeName (const cPtr_integerDeclarationAST * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_integerDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_integerDeclarationAST_typeName f = NULL ;
    if (classIndex < gExtensionGetterTable_integerDeclarationAST_typeName.count ()) {
      f = gExtensionGetterTable_integerDeclarationAST_typeName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_integerDeclarationAST_typeName.count ()) {
           f = gExtensionGetterTable_integerDeclarationAST_typeName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_integerDeclarationAST_typeName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_integerDeclarationAST_typeName (const cPtr_integerDeclarationAST * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_integerDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("int") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("uint") ;
  }
  result_outName = temp_0.add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 19)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_integerDeclarationAST_typeName (void) {
  enterExtensionGetter_typeName (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                 extensionGetter_integerDeclarationAST_typeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_integerDeclarationAST_typeName (void) {
  gExtensionGetterTable_integerDeclarationAST_typeName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_integerDeclarationAST_typeName (defineExtensionGetter_integerDeclarationAST_typeName,
                                                           freeExtensionGetter_integerDeclarationAST_typeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerIR * p = (const cPtr_integerIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSize.objectCompare (p->mProperty_mSize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsSigned.objectCompare (p->mProperty_mIsSigned) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_integerIR::objectCompare (const GALGAS_integerIR & inOperand) const {
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

GALGAS_integerIR::GALGAS_integerIR (void) :
GALGAS_abstractGenerationIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerIR GALGAS_integerIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerIR::constructor_new (GALGAS_string::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE),
                                            GALGAS_bool::constructor_default (HERE)
                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerIR::GALGAS_integerIR (const cPtr_integerIR * inSourcePtr) :
GALGAS_abstractGenerationIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerIR GALGAS_integerIR::constructor_new (const GALGAS_string & inAttribute_mTypeName,
                                                    const GALGAS_uint & inAttribute_mSize,
                                                    const GALGAS_bool & inAttribute_mIsSigned
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_integerIR result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mSize.isValid () && inAttribute_mIsSigned.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerIR (inAttribute_mTypeName, inAttribute_mSize, inAttribute_mIsSigned COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_integerIR::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerIR * p = (const cPtr_integerIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerIR) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_integerIR::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_integerIR::getter_mSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerIR * p = (const cPtr_integerIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerIR) ;
    result = p->mProperty_mSize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_integerIR::getter_mSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_integerIR::getter_mIsSigned (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerIR * p = (const cPtr_integerIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerIR) ;
    result = p->mProperty_mIsSigned ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_integerIR::getter_mIsSigned (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSigned ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @integerIR class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerIR::cPtr_integerIR (const GALGAS_string & in_mTypeName,
                                const GALGAS_uint & in_mSize,
                                const GALGAS_bool & in_mIsSigned
                                COMMA_LOCATION_ARGS) :
cPtr_abstractGenerationIR (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mSize (in_mSize),
mProperty_mIsSigned (in_mIsSigned) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerIR ;
}

void cPtr_integerIR::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@integerIR:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsSigned.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerIR (mProperty_mTypeName, mProperty_mSize, mProperty_mIsSigned COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @integerIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerIR ("integerIR",
                                  & kTypeDescriptor_GALGAS_abstractGenerationIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerIR GALGAS_integerIR::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_integerIR result ;
  const GALGAS_integerIR * p = (const GALGAS_integerIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalIntegerDeclarationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_literalIntegerDeclarationAST::objectCompare (const GALGAS_literalIntegerDeclarationAST & inOperand) const {
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

GALGAS_literalIntegerDeclarationAST::GALGAS_literalIntegerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerDeclarationAST GALGAS_literalIntegerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntegerDeclarationAST::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerDeclarationAST::GALGAS_literalIntegerDeclarationAST (const cPtr_literalIntegerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerDeclarationAST GALGAS_literalIntegerDeclarationAST::constructor_new (LOCATION_ARGS) {
  GALGAS_literalIntegerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalIntegerDeclarationAST (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @literalIntegerDeclarationAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalIntegerDeclarationAST::cPtr_literalIntegerDeclarationAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalIntegerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerDeclarationAST ;
}

void cPtr_literalIntegerDeclarationAST::description (C_String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString << "[@literalIntegerDeclarationAST]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalIntegerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntegerDeclarationAST (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalIntegerDeclarationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntegerDeclarationAST ("literalIntegerDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalIntegerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalIntegerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerDeclarationAST GALGAS_literalIntegerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerDeclarationAST result ;
  const GALGAS_literalIntegerDeclarationAST * p = (const GALGAS_literalIntegerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntegerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_controlRegisterKind_registerArray::cEnumAssociatedValues_controlRegisterKind_registerArray (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                  const GALGAS_location & inAssociatedValue1,
                                                                                                                  const GALGAS_expressionAST & inAssociatedValue2,
                                                                                                                  const GALGAS_location & inAssociatedValue3
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_controlRegisterKind_registerArray::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_controlRegisterKind_registerArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterKind_registerArray * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterKind_registerArray *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind::GALGAS_controlRegisterKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind GALGAS_controlRegisterKind::constructor_scalar (UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterKind result ;
  result.mEnum = kEnum_scalar ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind GALGAS_controlRegisterKind::constructor_registerArray (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                  const GALGAS_location & inAssociatedValue1,
                                                                                  const GALGAS_expressionAST & inAssociatedValue2,
                                                                                  const GALGAS_location & inAssociatedValue3
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_registerArray ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterKind_registerArray (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterKind::method_registerArray (GALGAS_expressionAST & outAssociatedValue0,
                                                       GALGAS_location & outAssociatedValue1,
                                                       GALGAS_expressionAST & outAssociatedValue2,
                                                       GALGAS_location & outAssociatedValue3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_registerArray) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @controlRegisterKind registerArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterKind_registerArray * ptr = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_controlRegisterKind [3] = {
  "(not built)",
  "scalar",
  "registerArray"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterKind::getter_isScalar (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_scalar == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterKind::getter_isRegisterArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerArray == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterKind::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @controlRegisterKind: " << gEnumNameArrayFor_controlRegisterKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterKind::objectCompare (const GALGAS_controlRegisterKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @controlRegisterKind type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterKind ("controlRegisterKind",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind GALGAS_controlRegisterKind::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterKind result ;
  const GALGAS_controlRegisterKind * p = (const GALGAS_controlRegisterKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@controlRegisterList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_controlRegisterList : public cCollectionElement {
  public : GALGAS_controlRegisterList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_controlRegisterList (const GALGAS_lstring & in_mRegisterName,
                                                   const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                   const GALGAS_lstringlist & in_mAttributeList,
                                                   const GALGAS_expressionAST & in_mRegisterAddress,
                                                   const GALGAS_location & in_mRegisterAddressLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_controlRegisterList::cCollectionElement_controlRegisterList (const GALGAS_lstring & in_mRegisterName,
                                                                                const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                                const GALGAS_lstringlist & in_mAttributeList,
                                                                                const GALGAS_expressionAST & in_mRegisterAddress,
                                                                                const GALGAS_location & in_mRegisterAddressLocation
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterName, in_mControlRegisterKind, in_mAttributeList, in_mRegisterAddress, in_mRegisterAddressLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_controlRegisterList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_controlRegisterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterList (mObject.mProperty_mRegisterName, mObject.mProperty_mControlRegisterKind, mObject.mProperty_mAttributeList, mObject.mProperty_mRegisterAddress, mObject.mProperty_mRegisterAddressLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_controlRegisterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterName" ":" ;
  mObject.mProperty_mRegisterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterKind" ":" ;
  mObject.mProperty_mControlRegisterKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mObject.mProperty_mAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterAddress" ":" ;
  mObject.mProperty_mRegisterAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterAddressLocation" ":" ;
  mObject.mProperty_mRegisterAddressLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_controlRegisterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterList * operand = (cCollectionElement_controlRegisterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList::GALGAS_controlRegisterList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList::GALGAS_controlRegisterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList GALGAS_controlRegisterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList GALGAS_controlRegisterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_controlRegisterKind & inOperand1,
                                                                                  const GALGAS_lstringlist & inOperand2,
                                                                                  const GALGAS_expressionAST & inOperand3,
                                                                                  const GALGAS_location & inOperand4
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_controlRegisterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_lstring & in_mRegisterName,
                                                            const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                            const GALGAS_lstringlist & in_mAttributeList,
                                                            const GALGAS_expressionAST & in_mRegisterAddress,
                                                            const GALGAS_location & in_mRegisterAddressLocation
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterList (in_mRegisterName,
                                                         in_mControlRegisterKind,
                                                         in_mAttributeList,
                                                         in_mRegisterAddress,
                                                         in_mRegisterAddressLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_controlRegisterKind & inOperand1,
                                                      const GALGAS_lstringlist & inOperand2,
                                                      const GALGAS_expressionAST & inOperand3,
                                                      const GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_controlRegisterKind inOperand1,
                                                       const GALGAS_lstringlist inOperand2,
                                                       const GALGAS_expressionAST inOperand3,
                                                       const GALGAS_location inOperand4,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_controlRegisterKind & outOperand1,
                                                       GALGAS_lstringlist & outOperand2,
                                                       GALGAS_expressionAST & outOperand3,
                                                       GALGAS_location & outOperand4,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
      outOperand0 = p->mObject.mProperty_mRegisterName ;
      outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
      outOperand2 = p->mObject.mProperty_mAttributeList ;
      outOperand3 = p->mObject.mProperty_mRegisterAddress ;
      outOperand4 = p->mObject.mProperty_mRegisterAddressLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_controlRegisterKind & outOperand1,
                                                  GALGAS_lstringlist & outOperand2,
                                                  GALGAS_expressionAST & outOperand3,
                                                  GALGAS_location & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mRegisterAddress ;
    outOperand4 = p->mObject.mProperty_mRegisterAddressLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_controlRegisterKind & outOperand1,
                                                 GALGAS_lstringlist & outOperand2,
                                                 GALGAS_expressionAST & outOperand3,
                                                 GALGAS_location & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mRegisterAddress ;
    outOperand4 = p->mObject.mProperty_mRegisterAddressLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList::method_first (GALGAS_lstring & outOperand0,
                                               GALGAS_controlRegisterKind & outOperand1,
                                               GALGAS_lstringlist & outOperand2,
                                               GALGAS_expressionAST & outOperand3,
                                               GALGAS_location & outOperand4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mRegisterAddress ;
    outOperand4 = p->mObject.mProperty_mRegisterAddressLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList::method_last (GALGAS_lstring & outOperand0,
                                              GALGAS_controlRegisterKind & outOperand1,
                                              GALGAS_lstringlist & outOperand2,
                                              GALGAS_expressionAST & outOperand3,
                                              GALGAS_location & outOperand4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mRegisterAddress ;
    outOperand4 = p->mObject.mProperty_mRegisterAddressLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList GALGAS_controlRegisterList::add_operation (const GALGAS_controlRegisterList & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList GALGAS_controlRegisterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterList result = GALGAS_controlRegisterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList GALGAS_controlRegisterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterList result = GALGAS_controlRegisterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList GALGAS_controlRegisterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterList result = GALGAS_controlRegisterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterList::plusAssign_operation (const GALGAS_controlRegisterList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterList::getter_mRegisterNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
    result = p->mObject.mProperty_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind GALGAS_controlRegisterList::getter_mControlRegisterKindAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
  GALGAS_controlRegisterKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
    result = p->mObject.mProperty_mControlRegisterKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_controlRegisterList::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_controlRegisterList::getter_mRegisterAddressAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
    result = p->mObject.mProperty_mRegisterAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterList::getter_mRegisterAddressLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterList * p = (cCollectionElement_controlRegisterList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
    result = p->mObject.mProperty_mRegisterAddressLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterList::cEnumerator_controlRegisterList (const GALGAS_controlRegisterList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList_2D_element cEnumerator_controlRegisterList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterList * p = (const cCollectionElement_controlRegisterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_controlRegisterList::current_mRegisterName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterList * p = (const cCollectionElement_controlRegisterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
  return p->mObject.mProperty_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind cEnumerator_controlRegisterList::current_mControlRegisterKind (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterList * p = (const cCollectionElement_controlRegisterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
  return p->mObject.mProperty_mControlRegisterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_controlRegisterList::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterList * p = (const cCollectionElement_controlRegisterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
  return p->mObject.mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cEnumerator_controlRegisterList::current_mRegisterAddress (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterList * p = (const cCollectionElement_controlRegisterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
  return p->mObject.mProperty_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_controlRegisterList::current_mRegisterAddressLocation (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterList * p = (const cCollectionElement_controlRegisterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterList) ;
  return p->mObject.mProperty_mRegisterAddressLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @controlRegisterList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterList ("controlRegisterList",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList GALGAS_controlRegisterList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterList result ;
  const GALGAS_controlRegisterList * p = (const GALGAS_controlRegisterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@controlRegisterBitSliceList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_controlRegisterBitSliceList : public cCollectionElement {
  public : GALGAS_controlRegisterBitSliceList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_controlRegisterBitSliceList::cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterBitSlice) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_controlRegisterBitSliceList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_controlRegisterBitSliceList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterBitSliceList (mObject.mProperty_mRegisterBitSlice COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_controlRegisterBitSliceList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitSlice" ":" ;
  mObject.mProperty_mRegisterBitSlice.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_controlRegisterBitSliceList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterBitSliceList * operand = (cCollectionElement_controlRegisterBitSliceList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterBitSliceList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList::GALGAS_controlRegisterBitSliceList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList::GALGAS_controlRegisterBitSliceList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterBitSliceList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::constructor_listWithValue (const GALGAS_controlRegisterBitSlice & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_controlRegisterBitSliceList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterBitSliceList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterBitSliceList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (in_mRegisterBitSlice COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList::addAssign_operation (const GALGAS_controlRegisterBitSlice & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList::setter_insertAtIndex (const GALGAS_controlRegisterBitSlice inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList::setter_removeAtIndex (GALGAS_controlRegisterBitSlice & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
      outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList::setter_popFirst (GALGAS_controlRegisterBitSlice & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList::setter_popLast (GALGAS_controlRegisterBitSlice & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList::method_first (GALGAS_controlRegisterBitSlice & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList::method_last (GALGAS_controlRegisterBitSlice & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::add_operation (const GALGAS_controlRegisterBitSliceList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result = GALGAS_controlRegisterBitSliceList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result = GALGAS_controlRegisterBitSliceList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result = GALGAS_controlRegisterBitSliceList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList::plusAssign_operation (const GALGAS_controlRegisterBitSliceList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSliceList::getter_mRegisterBitSliceAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  GALGAS_controlRegisterBitSlice result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    result = p->mObject.mProperty_mRegisterBitSlice ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterBitSliceList::cEnumerator_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element cEnumerator_controlRegisterBitSliceList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterBitSliceList * p = (const cCollectionElement_controlRegisterBitSliceList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice cEnumerator_controlRegisterBitSliceList::current_mRegisterBitSlice (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterBitSliceList * p = (const cCollectionElement_controlRegisterBitSliceList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
  return p->mObject.mProperty_mRegisterBitSlice ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controlRegisterBitSliceList type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSliceList ("controlRegisterBitSliceList",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSliceList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterBitSliceList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSliceList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList result ;
  const GALGAS_controlRegisterBitSliceList * p = (const GALGAS_controlRegisterBitSliceList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterBitSliceList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_controlRegisterBitSlice_namedBit::cEnumAssociatedValues_controlRegisterBitSlice_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                const GALGAS_lbigint & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_controlRegisterBitSlice_namedBit::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_controlRegisterBitSlice_namedBit::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice::GALGAS_controlRegisterBitSlice (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::constructor_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_unusedBits ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::constructor_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                                     const GALGAS_lbigint & inAssociatedValue1
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_namedBit ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterBitSlice_namedBit (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSlice::method_unusedBits (GALGAS_lbigint & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_unusedBits) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @controlRegisterBitSlice unusedBits invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSlice::method_namedBit (GALGAS_lstring & outAssociatedValue0,
                                                      GALGAS_lbigint & outAssociatedValue1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_namedBit) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @controlRegisterBitSlice namedBit invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_controlRegisterBitSlice [3] = {
  "(not built)",
  "unusedBits",
  "namedBit"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterBitSlice::getter_isUnusedBits (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unusedBits == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterBitSlice::getter_isNamedBit (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_namedBit == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSlice::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<enum @controlRegisterBitSlice: " << gEnumNameArrayFor_controlRegisterBitSlice [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterBitSlice::objectCompare (const GALGAS_controlRegisterBitSlice & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @controlRegisterBitSlice type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSlice ("controlRegisterBitSlice",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterBitSlice::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSlice (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  const GALGAS_controlRegisterBitSlice * p = (const GALGAS_controlRegisterBitSlice *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterBitSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@controlRegisterFieldList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_controlRegisterFieldList : public cCollectionElement {
  public : GALGAS_controlRegisterFieldList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_controlRegisterFieldList (const GALGAS_uint & in_mFieldBitCount,
                                                        const GALGAS_string & in_mFieldName
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_controlRegisterFieldList::cCollectionElement_controlRegisterFieldList (const GALGAS_uint & in_mFieldBitCount,
                                                                                          const GALGAS_string & in_mFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldBitCount, in_mFieldName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_controlRegisterFieldList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_controlRegisterFieldList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterFieldList (mObject.mProperty_mFieldBitCount, mObject.mProperty_mFieldName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_controlRegisterFieldList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldBitCount" ":" ;
  mObject.mProperty_mFieldBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mProperty_mFieldName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_controlRegisterFieldList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterFieldList * operand = (cCollectionElement_controlRegisterFieldList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterFieldList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList::GALGAS_controlRegisterFieldList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList::GALGAS_controlRegisterFieldList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterFieldList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                            const GALGAS_string & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterFieldList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterFieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_uint & in_mFieldBitCount,
                                                                 const GALGAS_string & in_mFieldName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterFieldList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterFieldList (in_mFieldBitCount,
                                                              in_mFieldName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                           const GALGAS_string & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                            const GALGAS_string inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
      outOperand0 = p->mObject.mProperty_mFieldBitCount ;
      outOperand1 = p->mObject.mProperty_mFieldName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList::setter_popFirst (GALGAS_uint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList::setter_popLast (GALGAS_uint & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList::method_first (GALGAS_uint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList::method_last (GALGAS_uint & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::add_operation (const GALGAS_controlRegisterFieldList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldList::plusAssign_operation (const GALGAS_controlRegisterFieldList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldList::getter_mFieldBitCountAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    result = p->mObject.mProperty_mFieldBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_controlRegisterFieldList::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    result = p->mObject.mProperty_mFieldName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterFieldList::cEnumerator_controlRegisterFieldList (const GALGAS_controlRegisterFieldList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList_2D_element cEnumerator_controlRegisterFieldList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterFieldList::current_mFieldBitCount (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject.mProperty_mFieldBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_controlRegisterFieldList::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject.mProperty_mFieldName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @controlRegisterFieldList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldList ("controlRegisterFieldList",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterFieldList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  const GALGAS_controlRegisterFieldList * p = (const GALGAS_controlRegisterFieldList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_controlRegisterFieldMap::cMapElement_controlRegisterFieldMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_uint & in_mBitIndex,
                                                                          const GALGAS_uint & in_mBitCount
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mBitIndex (in_mBitIndex),
mProperty_mBitCount (in_mBitCount) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_controlRegisterFieldMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_controlRegisterFieldMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterFieldMap (mProperty_lkey, mProperty_mBitIndex, mProperty_mBitCount COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_controlRegisterFieldMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitIndex" ":" ;
  mProperty_mBitIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_controlRegisterFieldMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterFieldMap * operand = (cMapElement_controlRegisterFieldMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mBitIndex.objectCompare (operand->mProperty_mBitIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap::GALGAS_controlRegisterFieldMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap::GALGAS_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap & GALGAS_controlRegisterFieldMap::operator = (const GALGAS_controlRegisterFieldMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterFieldMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & inArgument0,
                                                          const GALGAS_uint & inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterFieldMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_uint inArgument0,
                                                       GALGAS_uint inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_controlRegisterFieldMap_searchKey = "the '%K' slice is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_uint & outArgument0,
                                                       GALGAS_uint & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_controlRegisterFieldMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    outArgument0 = p->mProperty_mBitIndex ;
    outArgument1 = p->mProperty_mBitCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap::getter_mBitIndexForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    result = p->mProperty_mBitIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap::setter_setMBitIndexForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mProperty_mBitIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_controlRegisterFieldMap * GALGAS_controlRegisterFieldMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * result = (cMapElement_controlRegisterFieldMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterFieldMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterFieldMap::cEnumerator_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element cEnumerator_controlRegisterFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return GALGAS_controlRegisterFieldMap_2D_element (p->mProperty_lkey, p->mProperty_mBitIndex, p->mProperty_mBitCount) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_controlRegisterFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitIndex (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mProperty_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mProperty_mBitCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @controlRegisterFieldMap type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldMap ("controlRegisterFieldMap",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  const GALGAS_controlRegisterFieldMap * p = (const GALGAS_controlRegisterFieldMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_sliceMap::cMapElement_sliceMap (const GALGAS_lstring & inKey,
                                            const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                            const GALGAS_bigint & in_mAccessRightOperand,
                                            const GALGAS_sliceMap & in_mSubMap,
                                            const GALGAS_PLMType & in_mResultType
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAccessOperator (in_mAccessOperator),
mProperty_mAccessRightOperand (in_mAccessRightOperand),
mProperty_mSubMap (in_mSubMap),
mProperty_mResultType (in_mResultType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_sliceMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mSubMap.isValid () && mProperty_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_sliceMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_sliceMap (mProperty_lkey, mProperty_mAccessOperator, mProperty_mAccessRightOperand, mProperty_mSubMap, mProperty_mResultType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_sliceMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessOperator" ":" ;
  mProperty_mAccessOperator.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessRightOperand" ":" ;
  mProperty_mAccessRightOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSubMap" ":" ;
  mProperty_mSubMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mProperty_mResultType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_sliceMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_sliceMap * operand = (cMapElement_sliceMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mAccessOperator.objectCompare (operand->mProperty_mAccessOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessRightOperand.objectCompare (operand->mProperty_mAccessRightOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSubMap.objectCompare (operand->mProperty_mSubMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (operand->mProperty_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap::GALGAS_sliceMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap::GALGAS_sliceMap (const GALGAS_sliceMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap & GALGAS_sliceMap::operator = (const GALGAS_sliceMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_sliceMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_sliceMap::constructor_mapWithMapToOverride (const GALGAS_sliceMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_sliceMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_sliceMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_llvmBinaryOperation & inArgument0,
                                           const GALGAS_bigint & inArgument1,
                                           const GALGAS_sliceMap & inArgument2,
                                           const GALGAS_PLMType & inArgument3,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * p = NULL ;
  macroMyNew (p, cMapElement_sliceMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@sliceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_llvmBinaryOperation inArgument0,
                                        GALGAS_bigint inArgument1,
                                        GALGAS_sliceMap inArgument2,
                                        GALGAS_PLMType inArgument3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * p = NULL ;
  macroMyNew (p, cMapElement_sliceMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_sliceMap_searchKey = "the '%K' slice is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_llvmBinaryOperation & outArgument0,
                                        GALGAS_bigint & outArgument1,
                                        GALGAS_sliceMap & outArgument2,
                                        GALGAS_PLMType & outArgument3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_sliceMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    outArgument0 = p->mProperty_mAccessOperator ;
    outArgument1 = p->mProperty_mAccessRightOperand ;
    outArgument2 = p->mProperty_mSubMap ;
    outArgument3 = p->mProperty_mResultType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_sliceMap::getter_mAccessOperatorForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_llvmBinaryOperation result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mAccessOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_sliceMap::getter_mAccessRightOperandForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mAccessRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_sliceMap::getter_mSubMapForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_sliceMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mSubMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_sliceMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::setter_setMAccessOperatorForKey (GALGAS_llvmBinaryOperation inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mAccessOperator = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::setter_setMAccessRightOperandForKey (GALGAS_bigint inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mAccessRightOperand = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::setter_setMSubMapForKey (GALGAS_sliceMap inAttributeValue,
                                               GALGAS_string inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mSubMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap::setter_setMResultTypeForKey (GALGAS_PLMType inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_sliceMap * GALGAS_sliceMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * result = (cMapElement_sliceMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_sliceMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sliceMap::cEnumerator_sliceMap (const GALGAS_sliceMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element cEnumerator_sliceMap::current (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return GALGAS_sliceMap_2D_element (p->mProperty_lkey, p->mProperty_mAccessOperator, p->mProperty_mAccessRightOperand, p->mProperty_mSubMap, p->mProperty_mResultType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sliceMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cEnumerator_sliceMap::current_mAccessOperator (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mAccessOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_sliceMap::current_mAccessRightOperand (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mAccessRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap cEnumerator_sliceMap::current_mSubMap (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mSubMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_sliceMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @sliceMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceMap ("sliceMap",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sliceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sliceMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_sliceMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  const GALGAS_sliceMap * p = (const GALGAS_sliceMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation::GALGAS_llvmBinaryOperation (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_addNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_addNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_subNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_subNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_mulNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_mulNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uaddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uaddOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_saddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_saddOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_usubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_usubOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ssubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ssubOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_umulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_umulOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_smulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_smulOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_and (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_and ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ior (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ior ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_xor (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_xor ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_shl (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_shl ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ashr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ashr ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_lshr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_lshr ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_eq ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ne ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ult ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ule ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ugt ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_uge ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_slt ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sle ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sgt ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sge ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_llvmBinaryOperation [34] = {
  "(not built)",
  "addNoOVF",
  "subNoOVF",
  "mulNoOVF",
  "udivNoOVF",
  "sdivNoOVF",
  "uremNoOVF",
  "sremNoOVF",
  "uaddOVF",
  "saddOVF",
  "usubOVF",
  "ssubOVF",
  "umulOVF",
  "smulOVF",
  "udivOVF",
  "sdivOVF",
  "uremOVF",
  "sremOVF",
  "and",
  "ior",
  "xor",
  "shl",
  "ashr",
  "lshr",
  "icmp_eq",
  "icmp_ne",
  "icmp_ult",
  "icmp_ule",
  "icmp_ugt",
  "icmp_uge",
  "icmp_slt",
  "icmp_sle",
  "icmp_sgt",
  "icmp_sge"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAddNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSubNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isMulNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uaddOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_saddOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_usubOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ssubOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_umulOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_smulOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAnd (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_and == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ior == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isXor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_xor == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isShl (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_shl == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ashr == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isLshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lshr == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_eq (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_eq == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ne (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ne == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ult (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ult == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ule (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ule == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ugt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ugt == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_uge (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_uge == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_slt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_slt == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sle == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sgt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sgt == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sge (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sge == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_llvmBinaryOperation::description (C_String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString << "<enum @llvmBinaryOperation: " << gEnumNameArrayFor_llvmBinaryOperation [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_llvmBinaryOperation::objectCompare (const GALGAS_llvmBinaryOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @llvmBinaryOperation type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmBinaryOperation ("llvmBinaryOperation",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_llvmBinaryOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmBinaryOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_llvmBinaryOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmBinaryOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  const GALGAS_llvmBinaryOperation * p = (const GALGAS_llvmBinaryOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmBinaryOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmBinaryOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_controlRegisterMap::cMapElement_controlRegisterMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_PLMType & in_mType,
                                                                const GALGAS_bool & in_mIsReadOnly,
                                                                const GALGAS_bool & in_mIsAccessibleInUserMode,
                                                                const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                                const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                const GALGAS_bigint & in_mAddress,
                                                                const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                const GALGAS_uint & in_mRegisterBitCount,
                                                                const GALGAS_uint & in_mArraySize,
                                                                const GALGAS_uint & in_mElementArraySize
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mIsReadOnly (in_mIsReadOnly),
mProperty_mIsAccessibleInUserMode (in_mIsAccessibleInUserMode),
mProperty_mRegisterFieldAccessMap (in_mRegisterFieldAccessMap),
mProperty_mRegisterFieldMap (in_mRegisterFieldMap),
mProperty_mAddress (in_mAddress),
mProperty_mControlRegisterFieldList (in_mControlRegisterFieldList),
mProperty_mRegisterBitCount (in_mRegisterBitCount),
mProperty_mArraySize (in_mArraySize),
mProperty_mElementArraySize (in_mElementArraySize) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_controlRegisterMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mIsAccessibleInUserMode.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddress.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_controlRegisterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterMap (mProperty_lkey, mProperty_mType, mProperty_mIsReadOnly, mProperty_mIsAccessibleInUserMode, mProperty_mRegisterFieldAccessMap, mProperty_mRegisterFieldMap, mProperty_mAddress, mProperty_mControlRegisterFieldList, mProperty_mRegisterBitCount, mProperty_mArraySize, mProperty_mElementArraySize COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_controlRegisterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsReadOnly" ":" ;
  mProperty_mIsReadOnly.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsAccessibleInUserMode" ":" ;
  mProperty_mIsAccessibleInUserMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldAccessMap" ":" ;
  mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldMap" ":" ;
  mProperty_mRegisterFieldMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddress" ":" ;
  mProperty_mAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterFieldList" ":" ;
  mProperty_mControlRegisterFieldList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitCount" ":" ;
  mProperty_mRegisterBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArraySize" ":" ;
  mProperty_mArraySize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElementArraySize" ":" ;
  mProperty_mElementArraySize.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_controlRegisterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterMap * operand = (cMapElement_controlRegisterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (operand->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsReadOnly.objectCompare (operand->mProperty_mIsReadOnly) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAccessibleInUserMode.objectCompare (operand->mProperty_mIsAccessibleInUserMode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterFieldAccessMap.objectCompare (operand->mProperty_mRegisterFieldAccessMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterFieldMap.objectCompare (operand->mProperty_mRegisterFieldMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddress.objectCompare (operand->mProperty_mAddress) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterFieldList.objectCompare (operand->mProperty_mControlRegisterFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterBitCount.objectCompare (operand->mProperty_mRegisterBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (operand->mProperty_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementArraySize.objectCompare (operand->mProperty_mElementArraySize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap::GALGAS_controlRegisterMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap::GALGAS_controlRegisterMap (const GALGAS_controlRegisterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap & GALGAS_controlRegisterMap::operator = (const GALGAS_controlRegisterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_PLMType & inArgument0,
                                                     const GALGAS_bool & inArgument1,
                                                     const GALGAS_bool & inArgument2,
                                                     const GALGAS_sliceMap & inArgument3,
                                                     const GALGAS_controlRegisterFieldMap & inArgument4,
                                                     const GALGAS_bigint & inArgument5,
                                                     const GALGAS_controlRegisterFieldList & inArgument6,
                                                     const GALGAS_uint & inArgument7,
                                                     const GALGAS_uint & inArgument8,
                                                     const GALGAS_uint & inArgument9,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_PLMType inArgument0,
                                                  GALGAS_bool inArgument1,
                                                  GALGAS_bool inArgument2,
                                                  GALGAS_sliceMap inArgument3,
                                                  GALGAS_controlRegisterFieldMap inArgument4,
                                                  GALGAS_bigint inArgument5,
                                                  GALGAS_controlRegisterFieldList inArgument6,
                                                  GALGAS_uint inArgument7,
                                                  GALGAS_uint inArgument8,
                                                  GALGAS_uint inArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_controlRegisterMap_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_PLMType & outArgument0,
                                                  GALGAS_bool & outArgument1,
                                                  GALGAS_bool & outArgument2,
                                                  GALGAS_sliceMap & outArgument3,
                                                  GALGAS_controlRegisterFieldMap & outArgument4,
                                                  GALGAS_bigint & outArgument5,
                                                  GALGAS_controlRegisterFieldList & outArgument6,
                                                  GALGAS_uint & outArgument7,
                                                  GALGAS_uint & outArgument8,
                                                  GALGAS_uint & outArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_controlRegisterMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mIsReadOnly ;
    outArgument2 = p->mProperty_mIsAccessibleInUserMode ;
    outArgument3 = p->mProperty_mRegisterFieldAccessMap ;
    outArgument4 = p->mProperty_mRegisterFieldMap ;
    outArgument5 = p->mProperty_mAddress ;
    outArgument6 = p->mProperty_mControlRegisterFieldList ;
    outArgument7 = p->mProperty_mRegisterBitCount ;
    outArgument8 = p->mProperty_mArraySize ;
    outArgument9 = p->mProperty_mElementArraySize ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_controlRegisterMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap::getter_mIsReadOnlyForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mIsReadOnly ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap::getter_mIsAccessibleInUserModeForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mIsAccessibleInUserMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_controlRegisterMap::getter_mRegisterFieldAccessMapForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_sliceMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterFieldAccessMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterMap::getter_mRegisterFieldMapForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_controlRegisterFieldMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterFieldMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_controlRegisterMap::getter_mAddressForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterMap::getter_mControlRegisterFieldListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_controlRegisterFieldList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mControlRegisterFieldList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap::getter_mRegisterBitCountForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap::getter_mArraySizeForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap::getter_mElementArraySizeForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mElementArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMTypeForKey (GALGAS_PLMType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMIsReadOnlyForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mIsReadOnly = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMIsAccessibleInUserModeForKey (GALGAS_bool inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mIsAccessibleInUserMode = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMRegisterFieldAccessMapForKey (GALGAS_sliceMap inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterFieldAccessMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMRegisterFieldMapForKey (GALGAS_controlRegisterFieldMap inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterFieldMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMAddressForKey (GALGAS_bigint inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mAddress = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMControlRegisterFieldListForKey (GALGAS_controlRegisterFieldList inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mControlRegisterFieldList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMRegisterBitCountForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterBitCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMArraySizeForKey (GALGAS_uint inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mArraySize = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap::setter_setMElementArraySizeForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mElementArraySize = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_controlRegisterMap * GALGAS_controlRegisterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * result = (cMapElement_controlRegisterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_controlRegisterMap::cEnumerator_controlRegisterMap (const GALGAS_controlRegisterMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element cEnumerator_controlRegisterMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return GALGAS_controlRegisterMap_2D_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mIsReadOnly, p->mProperty_mIsAccessibleInUserMode, p->mProperty_mRegisterFieldAccessMap, p->mProperty_mRegisterFieldMap, p->mProperty_mAddress, p->mProperty_mControlRegisterFieldList, p->mProperty_mRegisterBitCount, p->mProperty_mArraySize, p->mProperty_mElementArraySize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_controlRegisterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cEnumerator_controlRegisterMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_controlRegisterMap::current_mIsReadOnly (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mIsReadOnly ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_controlRegisterMap::current_mIsAccessibleInUserMode (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mIsAccessibleInUserMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap cEnumerator_controlRegisterMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterFieldAccessMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap cEnumerator_controlRegisterMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_controlRegisterMap::current_mAddress (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList cEnumerator_controlRegisterMap::current_mControlRegisterFieldList (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mControlRegisterFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterMap::current_mRegisterBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterMap::current_mArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_controlRegisterMap::current_mElementArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mElementArraySize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @controlRegisterMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterMap ("controlRegisterMap",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  const GALGAS_controlRegisterMap * p = (const GALGAS_controlRegisterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression> gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) {
  gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_expressionAST_addDependenceEdgeForStaticExpression (void) {
  gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionAST_addDependenceEdgeForStaticExpression (NULL,
                                                                               freeExtensionMethod_expressionAST_addDependenceEdgeForStaticExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_lstring constin_inConstantName,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.count ()) {
      f = gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.count ()) {
          f = gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inConstantName, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@globalVarDeclarationList noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const GALGAS_globalVarDeclarationList inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_globalVarDeclarationList temp_0 = inObject ;
  cEnumerator_globalVarDeclarationList enumerator_6300 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6300.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_6300.current_mTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_typeName_6370 = function_llvmRegularTypeMangledNameFromName (enumerator_6300.current_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 200)) ;
      {
      ioArgument_ioGraph.setter_noteNode (var_typeName_6370 COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 201)) ;
      }
    }
    enumerator_6300.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@modulePropertyListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_modulePropertyListAST : public cCollectionElement {
  public : GALGAS_modulePropertyListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_modulePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                     const GALGAS_bool & in_mIsConstant,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_structurePropertyInitOptionalExpressionAST & in_mOptionalExpression
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_modulePropertyListAST::cCollectionElement_modulePropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                    const GALGAS_lstring & in_mTypeName,
                                                                                    const GALGAS_structurePropertyInitOptionalExpressionAST & in_mOptionalExpression
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mIsConstant, in_mTypeName, in_mOptionalExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_modulePropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_modulePropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_modulePropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mIsConstant, mObject.mProperty_mTypeName, mObject.mProperty_mOptionalExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_modulePropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mObject.mProperty_mIsConstant.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionalExpression" ":" ;
  mObject.mProperty_mOptionalExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_modulePropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_modulePropertyListAST * operand = (cCollectionElement_modulePropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_modulePropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST::GALGAS_modulePropertyListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST::GALGAS_modulePropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST GALGAS_modulePropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_modulePropertyListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST GALGAS_modulePropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bool & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand3
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_modulePropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_modulePropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_modulePropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mPropertyName,
                                                              const GALGAS_bool & in_mIsConstant,
                                                              const GALGAS_lstring & in_mTypeName,
                                                              const GALGAS_structurePropertyInitOptionalExpressionAST & in_mOptionalExpression
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_modulePropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_modulePropertyListAST (in_mPropertyName,
                                                           in_mIsConstant,
                                                           in_mTypeName,
                                                           in_mOptionalExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_bool & inOperand1,
                                                        const GALGAS_lstring & inOperand2,
                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand3
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_modulePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_bool inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_structurePropertyInitOptionalExpressionAST inOperand3,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_modulePropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_bool & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_structurePropertyInitOptionalExpressionAST & outOperand3,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_modulePropertyListAST * p = (cCollectionElement_modulePropertyListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mIsConstant ;
      outOperand2 = p->mObject.mProperty_mTypeName ;
      outOperand3 = p->mObject.mProperty_mOptionalExpression ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_bool & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_structurePropertyInitOptionalExpressionAST & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_modulePropertyListAST * p = (cCollectionElement_modulePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mTypeName ;
    outOperand3 = p->mObject.mProperty_mOptionalExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_bool & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   GALGAS_structurePropertyInitOptionalExpressionAST & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_modulePropertyListAST * p = (cCollectionElement_modulePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mTypeName ;
    outOperand3 = p->mObject.mProperty_mOptionalExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_bool & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_structurePropertyInitOptionalExpressionAST & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_modulePropertyListAST * p = (cCollectionElement_modulePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mTypeName ;
    outOperand3 = p->mObject.mProperty_mOptionalExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_bool & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_structurePropertyInitOptionalExpressionAST & outOperand3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_modulePropertyListAST * p = (cCollectionElement_modulePropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mIsConstant ;
    outOperand2 = p->mObject.mProperty_mTypeName ;
    outOperand3 = p->mObject.mProperty_mOptionalExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST GALGAS_modulePropertyListAST::add_operation (const GALGAS_modulePropertyListAST & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_modulePropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST GALGAS_modulePropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_modulePropertyListAST result = GALGAS_modulePropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST GALGAS_modulePropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_modulePropertyListAST result = GALGAS_modulePropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST GALGAS_modulePropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_modulePropertyListAST result = GALGAS_modulePropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modulePropertyListAST::plusAssign_operation (const GALGAS_modulePropertyListAST inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modulePropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_modulePropertyListAST * p = (cCollectionElement_modulePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_modulePropertyListAST::getter_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_modulePropertyListAST * p = (cCollectionElement_modulePropertyListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
    result = p->mObject.mProperty_mIsConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modulePropertyListAST::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_modulePropertyListAST * p = (cCollectionElement_modulePropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_modulePropertyListAST::getter_mOptionalExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_modulePropertyListAST * p = (cCollectionElement_modulePropertyListAST *) attributes.ptr () ;
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
    result = p->mObject.mProperty_mOptionalExpression ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_modulePropertyListAST::cEnumerator_modulePropertyListAST (const GALGAS_modulePropertyListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST_2D_element cEnumerator_modulePropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_modulePropertyListAST * p = (const cCollectionElement_modulePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_modulePropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_modulePropertyListAST * p = (const cCollectionElement_modulePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_modulePropertyListAST::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_modulePropertyListAST * p = (const cCollectionElement_modulePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
  return p->mObject.mProperty_mIsConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_modulePropertyListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_modulePropertyListAST * p = (const cCollectionElement_modulePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyInitOptionalExpressionAST cEnumerator_modulePropertyListAST::current_mOptionalExpression (LOCATION_ARGS) const {
  const cCollectionElement_modulePropertyListAST * p = (const cCollectionElement_modulePropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_modulePropertyListAST) ;
  return p->mObject.mProperty_mOptionalExpression ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @modulePropertyListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_modulePropertyListAST ("modulePropertyListAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_modulePropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modulePropertyListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_modulePropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_modulePropertyListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST GALGAS_modulePropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_modulePropertyListAST result ;
  const GALGAS_modulePropertyListAST * p = (const GALGAS_modulePropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_modulePropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("modulePropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@moduleInstanciationArgumentListAST' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_moduleInstanciationArgumentListAST : public cCollectionElement {
  public : GALGAS_moduleInstanciationArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_moduleInstanciationArgumentListAST (const GALGAS_lstring & in_mSelector,
                                                                  const GALGAS_expressionAST & in_mExpression
                                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_moduleInstanciationArgumentListAST::cCollectionElement_moduleInstanciationArgumentListAST (const GALGAS_lstring & in_mSelector,
                                                                                                              const GALGAS_expressionAST & in_mExpression
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_moduleInstanciationArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_moduleInstanciationArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_moduleInstanciationArgumentListAST (mObject.mProperty_mSelector, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_moduleInstanciationArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_moduleInstanciationArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_moduleInstanciationArgumentListAST * operand = (cCollectionElement_moduleInstanciationArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_moduleInstanciationArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST::GALGAS_moduleInstanciationArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST::GALGAS_moduleInstanciationArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleInstanciationArgumentListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationArgumentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_expressionAST & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_moduleInstanciationArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_moduleInstanciationArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mSelector,
                                                                           const GALGAS_expressionAST & in_mExpression
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_moduleInstanciationArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_moduleInstanciationArgumentListAST (in_mSelector,
                                                                        in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_expressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_moduleInstanciationArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_expressionAST inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_moduleInstanciationArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_expressionAST & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_moduleInstanciationArgumentListAST * p = (cCollectionElement_moduleInstanciationArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mSelector ;
      outOperand1 = p->mObject.mProperty_mExpression ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_expressionAST & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationArgumentListAST * p = (cCollectionElement_moduleInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_expressionAST & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationArgumentListAST * p = (cCollectionElement_moduleInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_expressionAST & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationArgumentListAST * p = (cCollectionElement_moduleInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_expressionAST & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationArgumentListAST * p = (cCollectionElement_moduleInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationArgumentListAST::add_operation (const GALGAS_moduleInstanciationArgumentListAST & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_moduleInstanciationArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_moduleInstanciationArgumentListAST result = GALGAS_moduleInstanciationArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_moduleInstanciationArgumentListAST result = GALGAS_moduleInstanciationArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_moduleInstanciationArgumentListAST result = GALGAS_moduleInstanciationArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentListAST::plusAssign_operation (const GALGAS_moduleInstanciationArgumentListAST inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleInstanciationArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationArgumentListAST * p = (cCollectionElement_moduleInstanciationArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_moduleInstanciationArgumentListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleInstanciationArgumentListAST * p = (cCollectionElement_moduleInstanciationArgumentListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_moduleInstanciationArgumentListAST::cEnumerator_moduleInstanciationArgumentListAST (const GALGAS_moduleInstanciationArgumentListAST & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST_2D_element cEnumerator_moduleInstanciationArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_moduleInstanciationArgumentListAST * p = (const cCollectionElement_moduleInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_moduleInstanciationArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_moduleInstanciationArgumentListAST * p = (const cCollectionElement_moduleInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cEnumerator_moduleInstanciationArgumentListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_moduleInstanciationArgumentListAST * p = (const cCollectionElement_moduleInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleInstanciationArgumentListAST) ;
  return p->mObject.mProperty_mExpression ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @moduleInstanciationArgumentListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleInstanciationArgumentListAST ("moduleInstanciationArgumentListAST",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleInstanciationArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleInstanciationArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleInstanciationArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleInstanciationArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentListAST GALGAS_moduleInstanciationArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentListAST result ;
  const GALGAS_moduleInstanciationArgumentListAST * p = (const GALGAS_moduleInstanciationArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleInstanciationArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleInstanciationArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_moduleInstanciationArgumentMap::cMapElement_moduleInstanciationArgumentMap (const GALGAS_lstring & inKey,
                                                                                        const GALGAS_expressionAST & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_moduleInstanciationArgumentMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_moduleInstanciationArgumentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_moduleInstanciationArgumentMap (mProperty_lkey, mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_moduleInstanciationArgumentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mProperty_mExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_moduleInstanciationArgumentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_moduleInstanciationArgumentMap * operand = (cMapElement_moduleInstanciationArgumentMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (operand->mProperty_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap::GALGAS_moduleInstanciationArgumentMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap::GALGAS_moduleInstanciationArgumentMap (const GALGAS_moduleInstanciationArgumentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap & GALGAS_moduleInstanciationArgumentMap::operator = (const GALGAS_moduleInstanciationArgumentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap GALGAS_moduleInstanciationArgumentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap GALGAS_moduleInstanciationArgumentMap::constructor_mapWithMapToOverride (const GALGAS_moduleInstanciationArgumentMap & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap GALGAS_moduleInstanciationArgumentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_moduleInstanciationArgumentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 const GALGAS_expressionAST & inArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_moduleInstanciationArgumentMap * p = NULL ;
  macroMyNew (p, cMapElement_moduleInstanciationArgumentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@moduleInstanciationArgumentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentMap::setter_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_expressionAST inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_moduleInstanciationArgumentMap * p = NULL ;
  macroMyNew (p, cMapElement_moduleInstanciationArgumentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "duplicated '%K' selector" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_moduleInstanciationArgumentMap_searchKey = "uninitialized '%K' property" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentMap::method_searchKey (GALGAS_lstring inKey,
                                                              GALGAS_expressionAST & outArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_moduleInstanciationArgumentMap * p = (const cMapElement_moduleInstanciationArgumentMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_moduleInstanciationArgumentMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_moduleInstanciationArgumentMap) ;
    outArgument0 = p->mProperty_mExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_moduleInstanciationArgumentMap::getter_mExpressionForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_moduleInstanciationArgumentMap * p = (const cMapElement_moduleInstanciationArgumentMap *) attributes ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_moduleInstanciationArgumentMap) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleInstanciationArgumentMap::setter_setMExpressionForKey (GALGAS_expressionAST inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_moduleInstanciationArgumentMap * p = (cMapElement_moduleInstanciationArgumentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_moduleInstanciationArgumentMap) ;
    p->mProperty_mExpression = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_moduleInstanciationArgumentMap * GALGAS_moduleInstanciationArgumentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_moduleInstanciationArgumentMap * result = (cMapElement_moduleInstanciationArgumentMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_moduleInstanciationArgumentMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_moduleInstanciationArgumentMap::cEnumerator_moduleInstanciationArgumentMap (const GALGAS_moduleInstanciationArgumentMap & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap_2D_element cEnumerator_moduleInstanciationArgumentMap::current (LOCATION_ARGS) const {
  const cMapElement_moduleInstanciationArgumentMap * p = (const cMapElement_moduleInstanciationArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_moduleInstanciationArgumentMap) ;
  return GALGAS_moduleInstanciationArgumentMap_2D_element (p->mProperty_lkey, p->mProperty_mExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_moduleInstanciationArgumentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cEnumerator_moduleInstanciationArgumentMap::current_mExpression (LOCATION_ARGS) const {
  const cMapElement_moduleInstanciationArgumentMap * p = (const cMapElement_moduleInstanciationArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_moduleInstanciationArgumentMap) ;
  return p->mProperty_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @moduleInstanciationArgumentMap type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleInstanciationArgumentMap ("moduleInstanciationArgumentMap",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleInstanciationArgumentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleInstanciationArgumentMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleInstanciationArgumentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleInstanciationArgumentMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap GALGAS_moduleInstanciationArgumentMap::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_moduleInstanciationArgumentMap result ;
  const GALGAS_moduleInstanciationArgumentMap * p = (const GALGAS_moduleInstanciationArgumentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleInstanciationArgumentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleInstanciationArgumentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_instanciedModuleMap::cMapElement_instanciedModuleMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_moduleInstanciationArgumentMap & in_mModuleInstanciationArgumentMap
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mModuleInstanciationArgumentMap (in_mModuleInstanciationArgumentMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_instanciedModuleMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mModuleInstanciationArgumentMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_instanciedModuleMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_instanciedModuleMap (mProperty_lkey, mProperty_mModuleInstanciationArgumentMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_instanciedModuleMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModuleInstanciationArgumentMap" ":" ;
  mProperty_mModuleInstanciationArgumentMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_instanciedModuleMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_instanciedModuleMap * operand = (cMapElement_instanciedModuleMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mModuleInstanciationArgumentMap.objectCompare (operand->mProperty_mModuleInstanciationArgumentMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap::GALGAS_instanciedModuleMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap::GALGAS_instanciedModuleMap (const GALGAS_instanciedModuleMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap & GALGAS_instanciedModuleMap::operator = (const GALGAS_instanciedModuleMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap GALGAS_instanciedModuleMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_instanciedModuleMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap GALGAS_instanciedModuleMap::constructor_mapWithMapToOverride (const GALGAS_instanciedModuleMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_instanciedModuleMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap GALGAS_instanciedModuleMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_instanciedModuleMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciedModuleMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_moduleInstanciationArgumentMap & inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_instanciedModuleMap * p = NULL ;
  macroMyNew (p, cMapElement_instanciedModuleMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanciedModuleMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciedModuleMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_moduleInstanciationArgumentMap inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_instanciedModuleMap * p = NULL ;
  macroMyNew (p, cMapElement_instanciedModuleMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' module is already instancied in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_instanciedModuleMap_searchKey = "internal error %K" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciedModuleMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_moduleInstanciationArgumentMap & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_instanciedModuleMap * p = (const cMapElement_instanciedModuleMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_instanciedModuleMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanciedModuleMap) ;
    outArgument0 = p->mProperty_mModuleInstanciationArgumentMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap GALGAS_instanciedModuleMap::getter_mModuleInstanciationArgumentMapForKey (const GALGAS_string & inKey,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanciedModuleMap * p = (const cMapElement_instanciedModuleMap *) attributes ;
  GALGAS_moduleInstanciationArgumentMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanciedModuleMap) ;
    result = p->mProperty_mModuleInstanciationArgumentMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instanciedModuleMap::setter_setMModuleInstanciationArgumentMapForKey (GALGAS_moduleInstanciationArgumentMap inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanciedModuleMap * p = (cMapElement_instanciedModuleMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanciedModuleMap) ;
    p->mProperty_mModuleInstanciationArgumentMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_instanciedModuleMap * GALGAS_instanciedModuleMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_instanciedModuleMap * result = (cMapElement_instanciedModuleMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_instanciedModuleMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instanciedModuleMap::cEnumerator_instanciedModuleMap (const GALGAS_instanciedModuleMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap_2D_element cEnumerator_instanciedModuleMap::current (LOCATION_ARGS) const {
  const cMapElement_instanciedModuleMap * p = (const cMapElement_instanciedModuleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanciedModuleMap) ;
  return GALGAS_instanciedModuleMap_2D_element (p->mProperty_lkey, p->mProperty_mModuleInstanciationArgumentMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_instanciedModuleMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleInstanciationArgumentMap cEnumerator_instanciedModuleMap::current_mModuleInstanciationArgumentMap (LOCATION_ARGS) const {
  const cMapElement_instanciedModuleMap * p = (const cMapElement_instanciedModuleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanciedModuleMap) ;
  return p->mProperty_mModuleInstanciationArgumentMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @instanciedModuleMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanciedModuleMap ("instanciedModuleMap",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instanciedModuleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedModuleMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instanciedModuleMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedModuleMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instanciedModuleMap GALGAS_instanciedModuleMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_instanciedModuleMap result ;
  const GALGAS_instanciedModuleMap * p = (const GALGAS_instanciedModuleMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanciedModuleMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedModuleMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_moduleMap::cMapElement_moduleMap (const GALGAS_lstring & inKey
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_moduleMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_moduleMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_moduleMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_moduleMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_moduleMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_moduleMap * operand = (cMapElement_moduleMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap::GALGAS_moduleMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap::GALGAS_moduleMap (const GALGAS_moduleMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap & GALGAS_moduleMap::operator = (const GALGAS_moduleMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap GALGAS_moduleMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_moduleMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap GALGAS_moduleMap::constructor_mapWithMapToOverride (const GALGAS_moduleMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_moduleMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap GALGAS_moduleMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_moduleMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_moduleMap * p = NULL ;
  macroMyNew (p, cMapElement_moduleMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@moduleMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleMap::setter_insertKey (GALGAS_lstring inKey,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_moduleMap * p = NULL ;
  macroMyNew (p, cMapElement_moduleMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' module is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_moduleMap * GALGAS_moduleMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_moduleMap * result = (cMapElement_moduleMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_moduleMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_moduleMap::cEnumerator_moduleMap (const GALGAS_moduleMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element cEnumerator_moduleMap::current (LOCATION_ARGS) const {
  const cMapElement_moduleMap * p = (const cMapElement_moduleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_moduleMap) ;
  return GALGAS_moduleMap_2D_element (p->mProperty_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_moduleMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @moduleMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleMap ("moduleMap",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap GALGAS_moduleMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_moduleMap result ;
  const GALGAS_moduleMap * p = (const GALGAS_moduleMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@moduleListIR' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_moduleListIR : public cCollectionElement {
  public : GALGAS_moduleListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_moduleListIR (const GALGAS_string & in_mModuleName,
                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                            const GALGAS_operandIRList & in_mInitialValueList
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_moduleListIR::cCollectionElement_moduleListIR (const GALGAS_string & in_mModuleName,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                  const GALGAS_operandIRList & in_mInitialValueList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModuleName, in_mType, in_mInitialValueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_moduleListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_moduleListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_moduleListIR (mObject.mProperty_mModuleName, mObject.mProperty_mType, mObject.mProperty_mInitialValueList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_moduleListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModuleName" ":" ;
  mObject.mProperty_mModuleName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValueList" ":" ;
  mObject.mProperty_mInitialValueList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_moduleListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_moduleListIR * operand = (cCollectionElement_moduleListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_moduleListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR::GALGAS_moduleListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR::GALGAS_moduleListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_moduleListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleListIR  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_moduleListIR::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                    const GALGAS_operandIRList & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_moduleListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_moduleListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_moduleListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_string & in_mModuleName,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                     const GALGAS_operandIRList & in_mInitialValueList
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_moduleListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_moduleListIR (in_mModuleName,
                                                  in_mType,
                                                  in_mInitialValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR::addAssign_operation (const GALGAS_string & inOperand0,
                                               const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                               const GALGAS_operandIRList & inOperand2
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_moduleListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                const GALGAS_operandIRList inOperand2,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_moduleListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                GALGAS_operandIRList & outOperand2,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_moduleListIR * p = (cCollectionElement_moduleListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
      outOperand0 = p->mObject.mProperty_mModuleName ;
      outOperand1 = p->mObject.mProperty_mType ;
      outOperand2 = p->mObject.mProperty_mInitialValueList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR::setter_popFirst (GALGAS_string & outOperand0,
                                           GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                           GALGAS_operandIRList & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleListIR * p = (cCollectionElement_moduleListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
    outOperand0 = p->mObject.mProperty_mModuleName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR::setter_popLast (GALGAS_string & outOperand0,
                                          GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                          GALGAS_operandIRList & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleListIR * p = (cCollectionElement_moduleListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
    outOperand0 = p->mObject.mProperty_mModuleName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR::method_first (GALGAS_string & outOperand0,
                                        GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                        GALGAS_operandIRList & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleListIR * p = (cCollectionElement_moduleListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
    outOperand0 = p->mObject.mProperty_mModuleName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR::method_last (GALGAS_string & outOperand0,
                                       GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                       GALGAS_operandIRList & outOperand2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleListIR * p = (cCollectionElement_moduleListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
    outOperand0 = p->mObject.mProperty_mModuleName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_moduleListIR::add_operation (const GALGAS_moduleListIR & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_moduleListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_moduleListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_moduleListIR result = GALGAS_moduleListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_moduleListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_moduleListIR result = GALGAS_moduleListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_moduleListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_moduleListIR result = GALGAS_moduleListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR::plusAssign_operation (const GALGAS_moduleListIR inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_moduleListIR::getter_mModuleNameAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleListIR * p = (cCollectionElement_moduleListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
    result = p->mObject.mProperty_mModuleName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_moduleListIR::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleListIR * p = (cCollectionElement_moduleListIR *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_moduleListIR::getter_mInitialValueListAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_moduleListIR * p = (cCollectionElement_moduleListIR *) attributes.ptr () ;
  GALGAS_operandIRList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
    result = p->mObject.mProperty_mInitialValueList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_moduleListIR::cEnumerator_moduleListIR (const GALGAS_moduleListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element cEnumerator_moduleListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_moduleListIR * p = (const cCollectionElement_moduleListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_moduleListIR::current_mModuleName (LOCATION_ARGS) const {
  const cCollectionElement_moduleListIR * p = (const cCollectionElement_moduleListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
  return p->mObject.mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_moduleListIR::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_moduleListIR * p = (const cCollectionElement_moduleListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
  return p->mObject.mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList cEnumerator_moduleListIR::current_mInitialValueList (LOCATION_ARGS) const {
  const cCollectionElement_moduleListIR * p = (const cCollectionElement_moduleListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_moduleListIR) ;
  return p->mObject.mProperty_mInitialValueList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @moduleListIR type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleListIR ("moduleListIR",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_moduleListIR::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_moduleListIR result ;
  const GALGAS_moduleListIR * p = (const GALGAS_moduleListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@operandIRList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_operandIRList : public cCollectionElement {
  public : GALGAS_operandIRList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_operandIRList (const GALGAS_objectIR & in_mOperand
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GALGAS_objectIR & in_mOperand
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_operandIRList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_operandIRList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_operandIRList (mObject.mProperty_mOperand COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_operandIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mProperty_mOperand.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_operandIRList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_operandIRList * operand = (cCollectionElement_operandIRList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_operandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList::GALGAS_operandIRList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList::GALGAS_operandIRList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_operandIRList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_operandIRList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_operandIRList::constructor_listWithValue (const GALGAS_objectIR & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandIRList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_operandIRList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_objectIR & in_mOperand
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_operandIRList * p = NULL ;
  macroMyNew (p, cCollectionElement_operandIRList (in_mOperand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList::addAssign_operation (const GALGAS_objectIR & inOperand0
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_operandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList::setter_insertAtIndex (const GALGAS_objectIR inOperand0,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_operandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList::setter_removeAtIndex (GALGAS_objectIR & outOperand0,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_operandIRList) ;
      outOperand0 = p->mObject.mProperty_mOperand ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList::setter_popFirst (GALGAS_objectIR & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList::setter_popLast (GALGAS_objectIR & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList::method_first (GALGAS_objectIR & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList::method_last (GALGAS_objectIR & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_operandIRList::add_operation (const GALGAS_operandIRList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_operandIRList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_operandIRList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_operandIRList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList::plusAssign_operation (const GALGAS_operandIRList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_operandIRList::getter_mOperandAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    result = p->mObject.mProperty_mOperand ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_operandIRList::cEnumerator_operandIRList (const GALGAS_operandIRList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element cEnumerator_operandIRList::current (LOCATION_ARGS) const {
  const cCollectionElement_operandIRList * p = (const cCollectionElement_operandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandIRList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cEnumerator_operandIRList::current_mOperand (LOCATION_ARGS) const {
  const cCollectionElement_operandIRList * p = (const cCollectionElement_operandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandIRList) ;
  return p->mObject.mProperty_mOperand ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @operandIRList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIRList ("operandIRList",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_operandIRList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList result ;
  const GALGAS_operandIRList * p = (const GALGAS_operandIRList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_staticListPropertyTypeAST_valueType::cEnumAssociatedValues_staticListPropertyTypeAST_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_staticListPropertyTypeAST_valueType::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_staticListPropertyTypeAST_valueType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * ptr = dynamic_cast<const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_staticListPropertyTypeAST_function::cEnumAssociatedValues_staticListPropertyTypeAST_function (const GALGAS_mode & inAssociatedValue0,
                                                                                                                    const GALGAS_routineFormalArgumentListAST & inAssociatedValue1,
                                                                                                                    const GALGAS_lstring & inAssociatedValue2
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_staticListPropertyTypeAST_function::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_staticListPropertyTypeAST_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_staticListPropertyTypeAST_function * ptr = dynamic_cast<const cEnumAssociatedValues_staticListPropertyTypeAST_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyTypeAST::GALGAS_staticListPropertyTypeAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::constructor_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_valueType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_staticListPropertyTypeAST_valueType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::constructor_function (const GALGAS_mode & inAssociatedValue0,
                                                                                         const GALGAS_routineFormalArgumentListAST & inAssociatedValue1,
                                                                                         const GALGAS_lstring & inAssociatedValue2
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_staticListPropertyTypeAST_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyTypeAST::method_valueType (GALGAS_lstring & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_valueType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @staticListPropertyTypeAST valueType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyTypeAST::method_function (GALGAS_mode & outAssociatedValue0,
                                                        GALGAS_routineFormalArgumentListAST & outAssociatedValue1,
                                                        GALGAS_lstring & outAssociatedValue2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @staticListPropertyTypeAST function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_staticListPropertyTypeAST_function * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_staticListPropertyTypeAST [3] = {
  "(not built)",
  "valueType",
  "function"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_staticListPropertyTypeAST::getter_isValueType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_valueType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_staticListPropertyTypeAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyTypeAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @staticListPropertyTypeAST: " << gEnumNameArrayFor_staticListPropertyTypeAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticListPropertyTypeAST::objectCompare (const GALGAS_staticListPropertyTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @staticListPropertyTypeAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListPropertyTypeAST ("staticListPropertyTypeAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticListPropertyTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticListPropertyTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  const GALGAS_staticListPropertyTypeAST * p = (const GALGAS_staticListPropertyTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListPropertyTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@staticListPropertyListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_staticListPropertyListAST : public cCollectionElement {
  public : GALGAS_staticListPropertyListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_staticListPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                         const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                            const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_staticListPropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_staticListPropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_staticListPropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_staticListPropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyType" ":" ;
  mObject.mProperty_mPropertyType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_staticListPropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_staticListPropertyListAST * operand = (cCollectionElement_staticListPropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_staticListPropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST::GALGAS_staticListPropertyListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST::GALGAS_staticListPropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListPropertyListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_staticListPropertyTypeAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticListPropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_staticListPropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mPropertyName,
                                                                  const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_staticListPropertyListAST (in_mPropertyName,
                                                               in_mPropertyType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_staticListPropertyTypeAST & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_staticListPropertyTypeAST inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_staticListPropertyTypeAST & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mPropertyType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_staticListPropertyTypeAST & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_staticListPropertyTypeAST & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_staticListPropertyTypeAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_staticListPropertyTypeAST & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::add_operation (const GALGAS_staticListPropertyListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListPropertyListAST::plusAssign_operation (const GALGAS_staticListPropertyListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticListPropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyListAST::getter_mPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GALGAS_staticListPropertyTypeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_staticListPropertyListAST::cEnumerator_staticListPropertyListAST (const GALGAS_staticListPropertyListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST_2D_element cEnumerator_staticListPropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_staticListPropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyTypeAST cEnumerator_staticListPropertyListAST::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @staticListPropertyListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListPropertyListAST ("staticListPropertyListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticListPropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticListPropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST result ;
  const GALGAS_staticListPropertyListAST * p = (const GALGAS_staticListPropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListPropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@staticListValueListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_staticListValueListAST : public cCollectionElement {
  public : GALGAS_staticListValueListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_staticListValueListAST (const GALGAS_extendStaticListElementListAST & in_mExpressions
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_staticListValueListAST::cCollectionElement_staticListValueListAST (const GALGAS_extendStaticListElementListAST & in_mExpressions
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpressions) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_staticListValueListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_staticListValueListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_staticListValueListAST (mObject.mProperty_mExpressions COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_staticListValueListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpressions" ":" ;
  mObject.mProperty_mExpressions.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_staticListValueListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_staticListValueListAST * operand = (cCollectionElement_staticListValueListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_staticListValueListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST::GALGAS_staticListValueListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST::GALGAS_staticListValueListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListValueListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::constructor_listWithValue (const GALGAS_extendStaticListElementListAST & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticListValueListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_staticListValueListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_staticListValueListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListValueListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_extendStaticListElementListAST & in_mExpressions
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListValueListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_staticListValueListAST (in_mExpressions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListValueListAST::addAssign_operation (const GALGAS_extendStaticListElementListAST & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListValueListAST::setter_insertAtIndex (const GALGAS_extendStaticListElementListAST inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListValueListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListValueListAST::setter_removeAtIndex (GALGAS_extendStaticListElementListAST & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
      outOperand0 = p->mObject.mProperty_mExpressions ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListValueListAST::setter_popFirst (GALGAS_extendStaticListElementListAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mExpressions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListValueListAST::setter_popLast (GALGAS_extendStaticListElementListAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mExpressions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListValueListAST::method_first (GALGAS_extendStaticListElementListAST & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mExpressions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListValueListAST::method_last (GALGAS_extendStaticListElementListAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    outOperand0 = p->mObject.mProperty_mExpressions ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::add_operation (const GALGAS_staticListValueListAST & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result = GALGAS_staticListValueListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListValueListAST::plusAssign_operation (const GALGAS_staticListValueListAST inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST GALGAS_staticListValueListAST::getter_mExpressionsAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListValueListAST * p = (cCollectionElement_staticListValueListAST *) attributes.ptr () ;
  GALGAS_extendStaticListElementListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
    result = p->mObject.mProperty_mExpressions ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_staticListValueListAST::cEnumerator_staticListValueListAST (const GALGAS_staticListValueListAST & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST_2D_element cEnumerator_staticListValueListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST cEnumerator_staticListValueListAST::current_mExpressions (LOCATION_ARGS) const {
  const cCollectionElement_staticListValueListAST * p = (const cCollectionElement_staticListValueListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListValueListAST) ;
  return p->mObject.mProperty_mExpressions ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @staticListValueListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListValueListAST ("staticListValueListAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticListValueListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListValueListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticListValueListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListValueListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListValueListAST GALGAS_staticListValueListAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListValueListAST result ;
  const GALGAS_staticListValueListAST * p = (const GALGAS_staticListValueListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListValueListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListValueListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@extendStaticListElementListAST' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_extendStaticListElementListAST : public cCollectionElement {
  public : GALGAS_extendStaticListElementListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_extendStaticListElementListAST (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                              const GALGAS_location & in_mEndOfExpression
                                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_extendStaticListElementListAST::cCollectionElement_extendStaticListElementListAST (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                                                                      const GALGAS_location & in_mEndOfExpression
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mEndOfExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_extendStaticListElementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_extendStaticListElementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_extendStaticListElementListAST (mObject.mProperty_mExpression, mObject.mProperty_mEndOfExpression COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_extendStaticListElementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfExpression" ":" ;
  mObject.mProperty_mEndOfExpression.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_extendStaticListElementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_extendStaticListElementListAST * operand = (cCollectionElement_extendStaticListElementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_extendStaticListElementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST::GALGAS_extendStaticListElementListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST::GALGAS_extendStaticListElementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_extendStaticListElementListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::constructor_listWithValue (const GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                                                        const GALGAS_location & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListElementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_extendStaticListElementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_extendStaticListElementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListElementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                                       const GALGAS_location & in_mEndOfExpression
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_extendStaticListElementListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_extendStaticListElementListAST (in_mExpression,
                                                                    in_mEndOfExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListElementListAST::addAssign_operation (const GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                 const GALGAS_location & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticListElementListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListElementListAST::setter_insertAtIndex (const GALGAS_extendStaticListExpressionAST inOperand0,
                                                                  const GALGAS_location inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extendStaticListElementListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListElementListAST::setter_removeAtIndex (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                                  GALGAS_location & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
      outOperand1 = p->mObject.mProperty_mEndOfExpression ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListElementListAST::setter_popFirst (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                             GALGAS_location & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListElementListAST::setter_popLast (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                            GALGAS_location & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListElementListAST::method_first (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListElementListAST::method_last (GALGAS_extendStaticListExpressionAST & outOperand0,
                                                         GALGAS_location & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mEndOfExpression ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::add_operation (const GALGAS_extendStaticListElementListAST & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementListAST result = GALGAS_extendStaticListElementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementListAST result = GALGAS_extendStaticListElementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_extendStaticListElementListAST result = GALGAS_extendStaticListElementListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListElementListAST::plusAssign_operation (const GALGAS_extendStaticListElementListAST inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListElementListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  GALGAS_extendStaticListExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_extendStaticListElementListAST::getter_mEndOfExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extendStaticListElementListAST * p = (cCollectionElement_extendStaticListElementListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
    result = p->mObject.mProperty_mEndOfExpression ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_extendStaticListElementListAST::cEnumerator_extendStaticListElementListAST (const GALGAS_extendStaticListElementListAST & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST_2D_element cEnumerator_extendStaticListElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementListAST * p = (const cCollectionElement_extendStaticListElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListExpressionAST cEnumerator_extendStaticListElementListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementListAST * p = (const cCollectionElement_extendStaticListElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
  return p->mObject.mProperty_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_extendStaticListElementListAST::current_mEndOfExpression (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticListElementListAST * p = (const cCollectionElement_extendStaticListElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticListElementListAST) ;
  return p->mObject.mProperty_mEndOfExpression ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @extendStaticListElementListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticListElementListAST ("extendStaticListElementListAST",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extendStaticListElementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListElementListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extendStaticListElementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListElementListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListElementListAST GALGAS_extendStaticListElementListAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListElementListAST result ;
  const GALGAS_extendStaticListElementListAST * p = (const GALGAS_extendStaticListElementListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticListElementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListElementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_extendStaticListExpressionAST_expression::cEnumAssociatedValues_extendStaticListExpressionAST_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_extendStaticListExpressionAST_expression::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_extendStaticListExpressionAST_expression::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_extendStaticListExpressionAST_expression * ptr = dynamic_cast<const cEnumAssociatedValues_extendStaticListExpressionAST_expression *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_extendStaticListExpressionAST_function::cEnumAssociatedValues_extendStaticListExpressionAST_function (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                            const GALGAS_routineFormalArgumentListAST & inAssociatedValue1
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_extendStaticListExpressionAST_function::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_extendStaticListExpressionAST_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_extendStaticListExpressionAST_function * ptr = dynamic_cast<const cEnumAssociatedValues_extendStaticListExpressionAST_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListExpressionAST::GALGAS_extendStaticListExpressionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::constructor_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_expression ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_extendStaticListExpressionAST_expression (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::constructor_function (const GALGAS_lstring & inAssociatedValue0,
                                                                                                 const GALGAS_routineFormalArgumentListAST & inAssociatedValue1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_extendStaticListExpressionAST_function (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListExpressionAST::method_expression (GALGAS_expressionAST & outAssociatedValue0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_expression) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @extendStaticListExpressionAST expression invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_extendStaticListExpressionAST_expression * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListExpressionAST::method_function (GALGAS_lstring & outAssociatedValue0,
                                                            GALGAS_routineFormalArgumentListAST & outAssociatedValue1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @extendStaticListExpressionAST function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_extendStaticListExpressionAST_function * ptr = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_extendStaticListExpressionAST [3] = {
  "(not built)",
  "expression",
  "function"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_extendStaticListExpressionAST::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_expression == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_extendStaticListExpressionAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extendStaticListExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<enum @extendStaticListExpressionAST: " << gEnumNameArrayFor_extendStaticListExpressionAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extendStaticListExpressionAST::objectCompare (const GALGAS_extendStaticListExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @extendStaticListExpressionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticListExpressionAST ("extendStaticListExpressionAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extendStaticListExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticListExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extendStaticListExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticListExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticListExpressionAST GALGAS_extendStaticListExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticListExpressionAST result ;
  const GALGAS_extendStaticListExpressionAST * p = (const GALGAS_extendStaticListExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticListExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticListExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_staticlistMap::cMapElement_staticlistMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_propertyList & in_mStaticListPropertyList
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mStaticListPropertyList (in_mStaticListPropertyList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_staticlistMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStaticListPropertyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_staticlistMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticlistMap (mProperty_lkey, mProperty_mStaticListPropertyList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_staticlistMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStaticListPropertyList" ":" ;
  mProperty_mStaticListPropertyList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_staticlistMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticlistMap * operand = (cMapElement_staticlistMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mStaticListPropertyList.objectCompare (operand->mProperty_mStaticListPropertyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap::GALGAS_staticlistMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap::GALGAS_staticlistMap (const GALGAS_staticlistMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap & GALGAS_staticlistMap::operator = (const GALGAS_staticlistMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap GALGAS_staticlistMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap GALGAS_staticlistMap::constructor_mapWithMapToOverride (const GALGAS_staticlistMap & inMapToOverride
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap GALGAS_staticlistMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_staticlistMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticlistMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_propertyList & inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = NULL ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticlistMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticlistMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_propertyList inArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = NULL ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList GALGAS_staticlistMap::getter_mStaticListPropertyListForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) attributes ;
  GALGAS_propertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    result = p->mProperty_mStaticListPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticlistMap::setter_setMStaticListPropertyListForKey (GALGAS_propertyList inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticlistMap * p = (cMapElement_staticlistMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    p->mProperty_mStaticListPropertyList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_staticlistMap * GALGAS_staticlistMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * result = (cMapElement_staticlistMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticlistMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_staticlistMap::cEnumerator_staticlistMap (const GALGAS_staticlistMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap_2D_element cEnumerator_staticlistMap::current (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return GALGAS_staticlistMap_2D_element (p->mProperty_lkey, p->mProperty_mStaticListPropertyList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_staticlistMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList cEnumerator_staticlistMap::current_mStaticListPropertyList (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return p->mProperty_mStaticListPropertyList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @staticlistMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticlistMap ("staticlistMap",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticlistMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticlistMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistMap GALGAS_staticlistMap::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  const GALGAS_staticlistMap * p = (const GALGAS_staticlistMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticlistMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_staticListInitializationMap::cMapElement_staticListInitializationMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_stringlist & in_mInitializationList
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitializationList (in_mInitializationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_staticListInitializationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitializationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_staticListInitializationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticListInitializationMap (mProperty_lkey, mProperty_mInitializationList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_staticListInitializationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitializationList" ":" ;
  mProperty_mInitializationList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_staticListInitializationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticListInitializationMap * operand = (cMapElement_staticListInitializationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInitializationList.objectCompare (operand->mProperty_mInitializationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap::GALGAS_staticListInitializationMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap::GALGAS_staticListInitializationMap (const GALGAS_staticListInitializationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap & GALGAS_staticListInitializationMap::operator = (const GALGAS_staticListInitializationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::constructor_mapWithMapToOverride (const GALGAS_staticListInitializationMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInitializationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInitializationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_stringlist & inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInitializationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInitializationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInitializationMap::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_stringlist inArgument0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInitializationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_staticListInitializationMap::getter_mInitializationListForKey (const GALGAS_string & inKey,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) attributes ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    result = p->mProperty_mInitializationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInitializationMap::setter_setMInitializationListForKey (GALGAS_stringlist inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticListInitializationMap * p = (cMapElement_staticListInitializationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
    p->mProperty_mInitializationList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_staticListInitializationMap * GALGAS_staticListInitializationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_staticListInitializationMap * result = (cMapElement_staticListInitializationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInitializationMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_staticListInitializationMap::cEnumerator_staticListInitializationMap (const GALGAS_staticListInitializationMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap_2D_element cEnumerator_staticListInitializationMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return GALGAS_staticListInitializationMap_2D_element (p->mProperty_lkey, p->mProperty_mInitializationList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_staticListInitializationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_staticListInitializationMap::current_mInitializationList (LOCATION_ARGS) const {
  const cMapElement_staticListInitializationMap * p = (const cMapElement_staticListInitializationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInitializationMap) ;
  return p->mProperty_mInitializationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @staticListInitializationMap type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListInitializationMap ("staticListInitializationMap",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticListInitializationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticListInitializationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInitializationMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInitializationMap GALGAS_staticListInitializationMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap result ;
  const GALGAS_staticListInitializationMap * p = (const GALGAS_staticListInitializationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListInitializationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_staticListInvokedFunctionSetMap::cMapElement_staticListInvokedFunctionSetMap (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_stringset & in_mInvokedFunctionSet
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_staticListInvokedFunctionSetMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInvokedFunctionSet.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_staticListInvokedFunctionSetMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_staticListInvokedFunctionSetMap (mProperty_lkey, mProperty_mInvokedFunctionSet COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_staticListInvokedFunctionSetMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInvokedFunctionSet" ":" ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_staticListInvokedFunctionSetMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_staticListInvokedFunctionSetMap * operand = (cMapElement_staticListInvokedFunctionSetMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (operand->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap::GALGAS_staticListInvokedFunctionSetMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap::GALGAS_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap & GALGAS_staticListInvokedFunctionSetMap::operator = (const GALGAS_staticListInvokedFunctionSetMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::constructor_mapWithMapToOverride (const GALGAS_staticListInvokedFunctionSetMap & inMapToOverride
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_staticListInvokedFunctionSetMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInvokedFunctionSetMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_stringset & inArgument0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInvokedFunctionSetMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticListInvokedFunctionSetMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInvokedFunctionSetMap::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_stringset inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * p = NULL ;
  macroMyNew (p, cMapElement_staticListInvokedFunctionSetMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey = "INTERNAL ERROR" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInvokedFunctionSetMap::method_searchKey (GALGAS_lstring inKey,
                                                               GALGAS_stringset & outArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey
                                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    outArgument0 = p->mProperty_mInvokedFunctionSet ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_staticListInvokedFunctionSetMap::getter_mInvokedFunctionSetForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) attributes ;
  GALGAS_stringset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    result = p->mProperty_mInvokedFunctionSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticListInvokedFunctionSetMap::setter_setMInvokedFunctionSetForKey (GALGAS_stringset inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticListInvokedFunctionSetMap * p = (cMapElement_staticListInvokedFunctionSetMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
    p->mProperty_mInvokedFunctionSet = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_staticListInvokedFunctionSetMap * GALGAS_staticListInvokedFunctionSetMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticListInvokedFunctionSetMap * result = (cMapElement_staticListInvokedFunctionSetMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticListInvokedFunctionSetMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_staticListInvokedFunctionSetMap::cEnumerator_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap_2D_element cEnumerator_staticListInvokedFunctionSetMap::current (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return GALGAS_staticListInvokedFunctionSetMap_2D_element (p->mProperty_lkey, p->mProperty_mInvokedFunctionSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_staticListInvokedFunctionSetMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset cEnumerator_staticListInvokedFunctionSetMap::current_mInvokedFunctionSet (LOCATION_ARGS) const {
  const cMapElement_staticListInvokedFunctionSetMap * p = (const cMapElement_staticListInvokedFunctionSetMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticListInvokedFunctionSetMap) ;
  return p->mProperty_mInvokedFunctionSet ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @staticListInvokedFunctionSetMap type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ("staticListInvokedFunctionSetMap",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticListInvokedFunctionSetMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticListInvokedFunctionSetMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInvokedFunctionSetMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticListInvokedFunctionSetMap GALGAS_staticListInvokedFunctionSetMap::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap result ;
  const GALGAS_staticListInvokedFunctionSetMap * p = (const GALGAS_staticListInvokedFunctionSetMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListInvokedFunctionSetMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@staticListInitializationMap generateLLVMForStaticLists'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVMForStaticLists (const GALGAS_staticListInitializationMap inObject,
                                                 const GALGAS_staticListInvokedFunctionSetMap constinArgument_inUsefulStaticArrayMap,
                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_first_21804 = GALGAS_bool (true) ;
  const GALGAS_staticListInitializationMap temp_0 = inObject ;
  cEnumerator_staticListInitializationMap enumerator_21840 (temp_0, kENUMERATION_UP) ;
  while (enumerator_21840.hasCurrentObject ()) {
    const enumGalgasBool test_1 = constinArgument_inUsefulStaticArrayMap.getter_hasKey (enumerator_21840.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 514)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 514)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_first_21804.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_first_21804 = GALGAS_bool (false) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 517)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (enumerator_21840.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 519)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 519)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(enumerator_21840.current_mInitializationList (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 520)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 520)).add_operation (GALGAS_string (" x %$"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 520)).add_operation (function_llvmNameForStaticListElementType (enumerator_21840.current_lkey (HERE).getter_string (HERE).getter_nowhere (SOURCE_FILE ("declaration-static-array.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 520)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 520)).add_operation (GALGAS_string ("] [\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 520)) ;
      cEnumerator_stringlist enumerator_22244 (enumerator_21840.current_mInitializationList (HERE), kENUMERATION_UP) ;
      while (enumerator_22244.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %$").add_operation (function_llvmNameForStaticListElementType (enumerator_21840.current_lkey (HERE).getter_string (HERE).getter_nowhere (SOURCE_FILE ("declaration-static-array.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 523)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 523)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 523)).add_operation (enumerator_22244.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 523)) ;
        if (enumerator_22244.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 525)) ;
        }
        enumerator_22244.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"
        "]\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 527)) ;
    }
    enumerator_21840.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@taskSetupListAST' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_taskSetupListAST : public cCollectionElement {
  public : GALGAS_taskSetupListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_taskSetupListAST (const GALGAS_lbigint & in_mTaskSetupPriority,
                                                const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_taskSetupListAST::cCollectionElement_taskSetupListAST (const GALGAS_lbigint & in_mTaskSetupPriority,
                                                                          const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                                          const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskSetupPriority, in_mTaskSetupInstructionList, in_mEndOfTaskSetupDeclaration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_taskSetupListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_taskSetupListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_taskSetupListAST (mObject.mProperty_mTaskSetupPriority, mObject.mProperty_mTaskSetupInstructionList, mObject.mProperty_mEndOfTaskSetupDeclaration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_taskSetupListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupPriority" ":" ;
  mObject.mProperty_mTaskSetupPriority.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTaskSetupInstructionList" ":" ;
  mObject.mProperty_mTaskSetupInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfTaskSetupDeclaration" ":" ;
  mObject.mProperty_mEndOfTaskSetupDeclaration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_taskSetupListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_taskSetupListAST * operand = (cCollectionElement_taskSetupListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_taskSetupListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST::GALGAS_taskSetupListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskSetupListAST  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::constructor_listWithValue (const GALGAS_lbigint & inOperand0,
                                                                            const GALGAS_instructionListAST & inOperand1,
                                                                            const GALGAS_location & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskSetupListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskSetupListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_lbigint & in_mTaskSetupPriority,
                                                         const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                         const GALGAS_location & in_mEndOfTaskSetupDeclaration
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_taskSetupListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_taskSetupListAST (in_mTaskSetupPriority,
                                                      in_mTaskSetupInstructionList,
                                                      in_mEndOfTaskSetupDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::addAssign_operation (const GALGAS_lbigint & inOperand0,
                                                   const GALGAS_instructionListAST & inOperand1,
                                                   const GALGAS_location & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::setter_insertAtIndex (const GALGAS_lbigint inOperand0,
                                                    const GALGAS_instructionListAST inOperand1,
                                                    const GALGAS_location inOperand2,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_taskSetupListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::setter_removeAtIndex (GALGAS_lbigint & outOperand0,
                                                    GALGAS_instructionListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
      outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
      outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::setter_popFirst (GALGAS_lbigint & outOperand0,
                                               GALGAS_instructionListAST & outOperand1,
                                               GALGAS_location & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::setter_popLast (GALGAS_lbigint & outOperand0,
                                              GALGAS_instructionListAST & outOperand1,
                                              GALGAS_location & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::method_first (GALGAS_lbigint & outOperand0,
                                            GALGAS_instructionListAST & outOperand1,
                                            GALGAS_location & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::method_last (GALGAS_lbigint & outOperand0,
                                           GALGAS_instructionListAST & outOperand1,
                                           GALGAS_location & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskSetupPriority ;
    outOperand1 = p->mObject.mProperty_mTaskSetupInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::add_operation (const GALGAS_taskSetupListAST & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_taskSetupListAST result = GALGAS_taskSetupListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskSetupListAST::plusAssign_operation (const GALGAS_taskSetupListAST inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskSetupListAST::getter_mTaskSetupPriorityAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mTaskSetupPriority ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskSetupListAST::getter_mTaskSetupInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_instructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mTaskSetupInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskSetupListAST::getter_mEndOfTaskSetupDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskSetupListAST * p = (cCollectionElement_taskSetupListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
    result = p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_taskSetupListAST::cEnumerator_taskSetupListAST (const GALGAS_taskSetupListAST & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST_2D_element cEnumerator_taskSetupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_taskSetupListAST::current_mTaskSetupPriority (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mTaskSetupPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cEnumerator_taskSetupListAST::current_mTaskSetupInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mTaskSetupInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_taskSetupListAST::current_mEndOfTaskSetupDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskSetupListAST * p = (const cCollectionElement_taskSetupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskSetupListAST) ;
  return p->mObject.mProperty_mEndOfTaskSetupDeclaration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskSetupListAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskSetupListAST ("taskSetupListAST",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskSetupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskSetupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskSetupListAST GALGAS_taskSetupListAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST result ;
  const GALGAS_taskSetupListAST * p = (const GALGAS_taskSetupListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskSetupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

