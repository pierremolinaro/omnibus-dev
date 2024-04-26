#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"



//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_ (const GALGAS_string constinArgument_inKey,
                                                                                                                             Lexique_omnibus_5F_lexique * inCompiler) {
  GALGAS_lstring var_key_3358 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 82)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_key_3358.readProperty_string ().objectCompare (constinArgument_inKey)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, constinArgument_inKey) ;
      inCompiler->emitSemanticError (var_key_3358.readProperty_location (), GALGAS_string ("invalid key (found '").add_operation (var_key_3358.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)).add_operation (GALGAS_string ("', required '"), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)).add_operation (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 84)), fixItArray1  COMMA_SOURCE_FILE ("configuration.galgas", 84)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas", 86)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 82)) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("configuration.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GALGAS__32_lstringlist & outArgument_outPythonUtilityToolList,
                                                                                                                                          Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outPythonUtilityToolList.drop () ; // Release 'out' argument
  nt_configuration_5F_key_ (GALGAS_string ("PYTHON_UTILITIES"), inCompiler) ;
  GALGAS__32_lstringlist temp_0 = GALGAS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 93)) ;
  outArgument_outPythonUtilityToolList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_0 (inCompiler) == 2) {
      GALGAS_lstring var_relativePath_3840 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 96)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 97)) ;
      GALGAS_lstring var_destinationFile_3886 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 98)) ;
      outArgument_outPythonUtilityToolList.addAssign_operation (var_relativePath_3840, var_destinationFile_3886  COMMA_SOURCE_FILE ("configuration.galgas", 99)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 96)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 97)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 98)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 96)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 97)) ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 98)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_ (GALGAS_ast & ioArgument_ioAST,
                                                                                                                                         GALGAS_lstringlist & outArgument_outImportedFileList,
                                                                                                                                         GALGAS_location & outArgument_outEndOfSourceFile,
                                                                                                                                         Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_outImportedFileList.drop () ; // Release 'out' argument
  outArgument_outEndOfSourceFile.drop () ; // Release 'out' argument
  GALGAS_location var_loc_4272 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 110)) ;
  GALGAS__32_lstringlist var_python_5F_utilityToolList_4329 ;
  nt_python_5F_utility_5F_tool_5F_list_ (var_python_5F_utilityToolList_4329, inCompiler) ;
  nt_configuration_5F_key_ (GALGAS_string ("PYTHON_BUILD"), inCompiler) ;
  GALGAS_lstring var_python_5F_build_4412 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 113)) ;
  nt_configuration_5F_key_ (GALGAS_string ("LINKER_SCRIPT"), inCompiler) ;
  GALGAS_lstring var_linkerScript_4486 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 115)) ;
  nt_configuration_5F_key_ (GALGAS_string ("PANIC_CODE_TYPE_NAME"), inCompiler) ;
  GALGAS_lstring var_panicCodeTypeName_4565 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 117)) ;
  nt_configuration_5F_key_ (GALGAS_string ("PANIC_LINE_TYPE_NAME"), inCompiler) ;
  GALGAS_lstring var_panicLineTypeName_4650 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
  nt_configuration_5F_key_ (GALGAS_string ("POINTER_BIT_COUNT"), inCompiler) ;
  GALGAS_lbigint var_pointerSize_4732 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
  nt_configuration_5F_key_ (GALGAS_string ("DYNAMIC_ARRAY"), inCompiler) ;
  GALGAS_bool var_handleDynamicArray_4799 ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
    var_handleDynamicArray_4799 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 128)) ;
    var_handleDynamicArray_4799 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_ (GALGAS_string ("SYSTEM_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_systemStackSize_4996 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 132)) ;
  nt_configuration_5F_key_ (GALGAS_string ("NOP"), inCompiler) ;
  GALGAS_lstring var_nopInstructionStringInLLVM_5063 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 134)) ;
  nt_configuration_5F_key_ (GALGAS_string ("BIT_BAND"), inCompiler) ;
  GALGAS_lbigint var_bitbandRegisterBaseAddress_5143 ;
  GALGAS_lbigint var_bitbandRegisterEndAddress_5187 ;
  GALGAS_lbigint var_bitbandRegisterRelocationAddress_5230 ;
  GALGAS_lbigint var_bitbandRegisterOffsetMultiplier_5280 ;
  GALGAS_lbigint var_bitbandRegisterBitMultiplier_5329 ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 142)) ;
    var_bitbandRegisterBaseAddress_5143 = GALGAS_lbigint::init_21__21_ (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 143)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 143)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterEndAddress_5187 = GALGAS_lbigint::init_21__21_ (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 144)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 144)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterRelocationAddress_5230 = GALGAS_lbigint::init_21__21_ (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 145)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 145)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterOffsetMultiplier_5280 = GALGAS_lbigint::init_21__21_ (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 146)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 146)), inCompiler COMMA_HERE) ;
    var_bitbandRegisterBitMultiplier_5329 = GALGAS_lbigint::init_21__21_ (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 147)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 147)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_bitbandRegisterBaseAddress_5143 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 149)) ;
    var_bitbandRegisterEndAddress_5187 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 150)) ;
    var_bitbandRegisterRelocationAddress_5230 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 151)) ;
    var_bitbandRegisterOffsetMultiplier_5280 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 152)) ;
    var_bitbandRegisterBitMultiplier_5329 = inCompiler->synthetizedAttribute_bigInteger () ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_HANDLER"), inCompiler) ;
  GALGAS_lstring var_serviceHandler_5966 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_SYSTEM_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_servicePushedRegisterByteSize_6053 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_DISPATCHER_HEADER"), inCompiler) ;
  GALGAS_lstring var_serviceDispatcherHeader_6156 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_DISPATCHER_ENTRY"), inCompiler) ;
  GALGAS_lstring var_serviceDispatcherEntry_6252 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_ENTRY_NO_RETURNED_VALUE"), inCompiler) ;
  GALGAS_lstring var_serviceEntryNoReturnedValue_6354 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SERVICE_ENTRY_WITH_RETURNED_VALUE"), inCompiler) ;
  GALGAS_lstring var_serviceEntryReturnValue_6463 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_HANDLER"), inCompiler) ;
  GALGAS_lstring var_sectionHandler_6550 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_SYSTEM_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_sectionPushedRegisterByteSize_6637 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_DISPATCHER_HEADER"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherHeader_6740 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_DISPATCHER_ENTRY"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherEntry_6836 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_ENTRY_FROM_UNKNOWN_MODE"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherInvocationFromAnyMode_6938 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  nt_configuration_5F_key_ (GALGAS_string ("SECTION_ENTRY_FROM_USER_MODE"), inCompiler) ;
  GALGAS_lstring var_sectionDispatcherInvocationFromUserMode_7053 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_configuration_5F_key_ (GALGAS_string ("INTERRUPT_HANDLER"), inCompiler) ;
  GALGAS_lstring var_xtrInterruptHandler_7158 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 180)) ;
  nt_configuration_5F_key_ (GALGAS_string ("INTERRUPT_USER_STACK_SIZE"), inCompiler) ;
  GALGAS_lbigint var_stackedUserRegisterOnInterruptByteSize_7250 = inCompiler->synthetizedAttribute_bigInteger () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 182)) ;
  nt_configuration_5F_key_ (GALGAS_string ("UNUSED_INTERRUPT"), inCompiler) ;
  GALGAS_lstring var_undefinedInterruptHandler_7353 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
  nt_configuration_5F_key_ (GALGAS_string ("CPP_FILES"), inCompiler) ;
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 186)) ;
  GALGAS_lstringlist var_C_5F_definitionFiles_7437 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_3 (inCompiler) == 2) {
      GALGAS_lstring var_fileRelativePath_7504 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 189)) ;
      var_C_5F_definitionFiles_7437.addAssign_operation (var_fileRelativePath_7504  COMMA_SOURCE_FILE ("configuration.galgas", 190)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_configuration_5F_key_ (GALGAS_string ("S_FILES"), inCompiler) ;
  GALGAS_lstringlist temp_2 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 193)) ;
  GALGAS_lstringlist var_S_5F_definitionFiles_7630 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_4 (inCompiler) == 2) {
      GALGAS_lstring var_fileRelativePath_7697 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 196)) ;
      var_S_5F_definitionFiles_7630.addAssign_operation (var_fileRelativePath_7697  COMMA_SOURCE_FILE ("configuration.galgas", 197)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  nt_configuration_5F_key_ (GALGAS_string ("LL_FILES"), inCompiler) ;
  GALGAS_lstringlist temp_4 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 200)) ;
  GALGAS_lstringlist var_LL_5F_definitionFiles_7824 = temp_4 ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_5 (inCompiler) == 2) {
      GALGAS_lstring var_fileRelativePath_7892 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 203)) ;
      var_LL_5F_definitionFiles_7824.addAssign_operation (var_fileRelativePath_7892  COMMA_SOURCE_FILE ("configuration.galgas", 204)) ;
    }else{
      repeatFlag_5 = false ;
    }
  }
  GALGAS_lstringlist temp_6 = GALGAS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 206)) ;
  outArgument_outImportedFileList = temp_6 ;
  nt_configuration_5F_key_ (GALGAS_string ("OMNIBUS_FILES"), inCompiler) ;
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_6 (inCompiler) == 2) {
      GALGAS_lstring var_relativeFilePath_8077 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
      outArgument_outImportedFileList.addAssign_operation (var_relativeFilePath_8077  COMMA_SOURCE_FILE ("configuration.galgas", 211)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  GALGAS_interruptionConfigurationList var_interruptionConfigurationList_8180 ;
  GALGAS_enumerationConstantList var_interruptConstantList_8215 ;
  nt_interruptConfigList_ (var_interruptionConfigurationList_8180, var_interruptConstantList_8215, inCompiler) ;
  GALGAS_uint var_ptrSize_8251 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (ComparisonKind::equal, var_pointerSize_4732.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 215)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (var_pointerSize_4732.readProperty_location (), GALGAS_string ("zero size pointer is invalid"), fixItArray9  COMMA_SOURCE_FILE ("configuration.galgas", 216)) ;
      var_ptrSize_8251.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    var_ptrSize_8251 = var_pointerSize_4732.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 218)) ;
  }
  GALGAS_targetParameters var_parameters_8429 = GALGAS_targetParameters::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_loc_4272, var_python_5F_utilityToolList_4329, var_python_5F_build_4412, var_linkerScript_4486, var_ptrSize_8251, var_handleDynamicArray_4799, var_systemStackSize_4996, var_stackedUserRegisterOnInterruptByteSize_7250, var_nopInstructionStringInLLVM_5063, var_bitbandRegisterBaseAddress_5143, var_bitbandRegisterEndAddress_5187, var_bitbandRegisterRelocationAddress_5230, var_bitbandRegisterOffsetMultiplier_5280, var_bitbandRegisterBitMultiplier_5329, var_sectionHandler_6550, var_sectionPushedRegisterByteSize_6637, var_sectionDispatcherHeader_6740, var_sectionDispatcherEntry_6836, var_sectionDispatcherInvocationFromAnyMode_6938, var_sectionDispatcherInvocationFromUserMode_7053, var_C_5F_definitionFiles_7437, var_S_5F_definitionFiles_7630, var_LL_5F_definitionFiles_7824, var_xtrInterruptHandler_7158, var_undefinedInterruptHandler_7353, var_serviceHandler_5966, var_servicePushedRegisterByteSize_6053, var_serviceDispatcherEntry_6252, var_serviceDispatcherHeader_6156, var_serviceEntryNoReturnedValue_6354, var_serviceEntryReturnValue_6463, inCompiler COMMA_HERE) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_configurationDeclarationAST::init_21__21__21__21_ (var_panicCodeTypeName_4565, var_panicLineTypeName_4650, var_parameters_8429, var_interruptionConfigurationList_8180, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 253)) ;
  outArgument_outEndOfSourceFile = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("configuration.galgas", 259)) ;
  ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_enumerationDeclarationAST::init_21__21_ (GALGAS_lstring::init_21__21_ (function_isrSlotTypeName (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 261)), var_xtrInterruptHandler_7158.readProperty_location (), inCompiler COMMA_HERE), var_interruptConstantList_8215, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("configuration.galgas", 260)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_python_5F_utility_5F_tool_5F_list_parse (inCompiler) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 113)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 115)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 117)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 132)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 134)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 149)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 150)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 151)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 152)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 180)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 182)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 196)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 203)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  nt_interruptConfigList_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_python_5F_utility_5F_tool_5F_list_indexing (inCompiler) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 113)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 115)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 117)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__24_type COMMA_SOURCE_FILE ("configuration.galgas", 119)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 121)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("configuration.galgas", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 128)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 132)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 134)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  switch (select_omnibus_5F_target_5F_specific_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_no COMMA_SOURCE_FILE ("configuration.galgas", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 149)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 150)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 151)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 152)) ;
    inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 156)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 158)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 160)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 162)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 164)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 166)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 168)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 170)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 172)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 174)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 176)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 178)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 180)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 182)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 184)) ;
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 196)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 203)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__22_string_22_ COMMA_SOURCE_FILE ("configuration.galgas", 210)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  nt_interruptConfigList_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_ (GALGAS_interruptionConfigurationList & outArgument_interruptionConfigurationList,
                                                                                                                            GALGAS_enumerationConstantList & outArgument_outEnumerationConstantList,
                                                                                                                            Lexique_omnibus_5F_lexique * inCompiler) {
  outArgument_interruptionConfigurationList.drop () ; // Release 'out' argument
  outArgument_outEnumerationConstantList.drop () ; // Release 'out' argument
  GALGAS_interruptionConfigurationList temp_0 = GALGAS_interruptionConfigurationList::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 272)) ;
  outArgument_interruptionConfigurationList = temp_0 ;
  GALGAS_enumerationConstantList temp_1 = GALGAS_enumerationConstantList::init (inCompiler COMMA_SOURCE_FILE ("configuration.galgas", 273)) ;
  outArgument_outEnumerationConstantList = temp_1 ;
  nt_configuration_5F_key_ (GALGAS_string ("INTERRUPTS"), inCompiler) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_7 (inCompiler) == 2) {
      GALGAS_lstring var_interruptName_10235 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 277)) ;
      GALGAS_interruptionPanicCode var_interruptionPanicCode_10282 ;
      switch (select_omnibus_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_interruptionPanicCode_10282 = GALGAS_interruptionPanicCode::class_func_noCode (SOURCE_FILE ("configuration.galgas", 280)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 282)) ;
        GALGAS_lbigint var_panicCode_10402 = inCompiler->synthetizedAttribute_bigInteger () ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 283)) ;
        var_interruptionPanicCode_10282 = GALGAS_interruptionPanicCode::class_func_code (var_panicCode_10402  COMMA_SOURCE_FILE ("configuration.galgas", 284)) ;
        outArgument_outEnumerationConstantList.addAssign_operation (var_interruptName_10235, var_panicCode_10402.readProperty_bigint ()  COMMA_SOURCE_FILE ("configuration.galgas", 285)) ;
      } break ;
      default:
        break ;
      }
      outArgument_interruptionConfigurationList.addAssign_operation (var_interruptName_10235, var_interruptionPanicCode_10282  COMMA_SOURCE_FILE ("configuration.galgas", 287)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_parse (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 277)) ;
      switch (select_omnibus_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 282)) ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 283)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_omnibus_5F_target_5F_specific_5F_syntax::rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_indexing (Lexique_omnibus_5F_lexique * inCompiler) {
  nt_configuration_5F_key_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_omnibus_5F_target_5F_specific_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("configuration.galgas", 277)) ;
      switch (select_omnibus_5F_target_5F_specific_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("configuration.galgas", 282)) ;
        inCompiler->acceptTerminal (Lexique_omnibus_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("configuration.galgas", 283)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode::GALGAS_interruptionPanicCode (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::class_func_noCode (UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  result.mEnum = Enumeration::enum_noCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::class_func_code (const GALGAS_lbigint & inAssociatedValue0
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  result.mEnum = Enumeration::enum_code ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_interruptionPanicCode_2D_code (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionPanicCode::method_extractCode (GALGAS_lbigint & outAssociatedValue_value,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_code) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @interruptionPanicCode.code invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_interruptionPanicCode_2D_code *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode_2D_code_3F_ GALGAS_interruptionPanicCode::getter_getCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionPanicCode_2D_code_3F_ result ;
  if (mEnum == Enumeration::enum_code) {
    const auto ptr = (const GALGAS_interruptionPanicCode_2D_code *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_interruptionPanicCode_2D_code (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionPanicCode::getAssociatedValuesFor_code (GALGAS_lbigint & out_value) const {
  const auto ptr = (const GALGAS_interruptionPanicCode_2D_code *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_interruptionPanicCode [3] = {
  "(not built)",
  "noCode",
  "code"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_interruptionPanicCode::getter_isNoCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noCode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_interruptionPanicCode::getter_isCode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_code == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionPanicCode::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @interruptionPanicCode: ") ;
  ioString.appendCString (gEnumNameArrayFor_interruptionPanicCode [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @interruptionPanicCode generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionPanicCode ("interruptionPanicCode",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_interruptionPanicCode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionPanicCode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_interruptionPanicCode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionPanicCode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode GALGAS_interruptionPanicCode::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_interruptionPanicCode result ;
  const GALGAS_interruptionPanicCode * p = (const GALGAS_interruptionPanicCode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_interruptionPanicCode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionPanicCode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@interruptionConfigurationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_interruptionConfigurationList : public cCollectionElement {
  public: GALGAS_interruptionConfigurationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_interruptionConfigurationList (const GALGAS_lstring & in_mInterruptName,
                                                            const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_interruptionConfigurationList (const GALGAS_interruptionConfigurationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_interruptionConfigurationList::cCollectionElement_interruptionConfigurationList (const GALGAS_lstring & in_mInterruptName,
                                                                                                    const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInterruptName, in_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_interruptionConfigurationList::cCollectionElement_interruptionConfigurationList (const GALGAS_interruptionConfigurationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInterruptName, inElement.mProperty_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_interruptionConfigurationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_interruptionConfigurationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_interruptionConfigurationList (mObject.mProperty_mInterruptName, mObject.mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_interruptionConfigurationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInterruptName" ":") ;
  mObject.mProperty_mInterruptName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInterruptionPanicCode" ":") ;
  mObject.mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList::GALGAS_interruptionConfigurationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList::GALGAS_interruptionConfigurationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_interruptionConfigurationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_interruptionConfigurationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::enterElement (const GALGAS_interruptionConfigurationList_2D_element & inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_interruptionConfigurationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mInterruptName,
                                                                      const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_interruptionConfigurationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_interruptionConfigurationList (in_mInterruptName,
                                                                   in_mInterruptionPanicCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_interruptionPanicCode & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::setter_append (const GALGAS_lstring inOperand0,
                                                          const GALGAS_interruptionPanicCode inOperand1,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_interruptionPanicCode inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_interruptionConfigurationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_interruptionPanicCode & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
        outOperand0 = p->mObject.mProperty_mInterruptName ;
        outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_interruptionPanicCode & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_interruptionPanicCode & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_interruptionPanicCode & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_interruptionPanicCode & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    outOperand0 = p->mObject.mProperty_mInterruptName ;
    outOperand1 = p->mObject.mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::add_operation (const GALGAS_interruptionConfigurationList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_interruptionConfigurationList result = GALGAS_interruptionConfigurationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::plusAssign_operation (const GALGAS_interruptionConfigurationList inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::setter_setMInterruptNameAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInterruptName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_interruptionConfigurationList::getter_mInterruptNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    result = p->mObject.mProperty_mInterruptName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList::setter_setMInterruptionPanicCodeAtIndex (GALGAS_interruptionPanicCode inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInterruptionPanicCode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode GALGAS_interruptionConfigurationList::getter_mInterruptionPanicCodeAtIndex (const GALGAS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_interruptionConfigurationList * p = (cCollectionElement_interruptionConfigurationList *) attributes.ptr () ;
  GALGAS_interruptionPanicCode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
    result = p->mObject.mProperty_mInterruptionPanicCode ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_interruptionConfigurationList::cEnumerator_interruptionConfigurationList (const GALGAS_interruptionConfigurationList & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element cEnumerator_interruptionConfigurationList::current (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_interruptionConfigurationList::current_mInterruptName (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode cEnumerator_interruptionConfigurationList::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cCollectionElement_interruptionConfigurationList * p = (const cCollectionElement_interruptionConfigurationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_interruptionConfigurationList) ;
  return p->mObject.mProperty_mInterruptionPanicCode ;
}




//--------------------------------------------------------------------------------------------------
//
//     @interruptionConfigurationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList ("interruptionConfigurationList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_interruptionConfigurationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_interruptionConfigurationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionConfigurationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_interruptionConfigurationList::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList result ;
  const GALGAS_interruptionConfigurationList * p = (const GALGAS_interruptionConfigurationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_interruptionConfigurationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractDeclarationAST::objectCompare (const GALGAS_abstractDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST GALGAS_abstractDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST result ;
  const GALGAS_abstractDeclarationAST * p = (const GALGAS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractDeclarationAST_2D_weak::objectCompare (const GALGAS_abstractDeclarationAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak::GALGAS_abstractDeclarationAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak & GALGAS_abstractDeclarationAST_2D_weak::operator = (const GALGAS_abstractDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak::GALGAS_abstractDeclarationAST_2D_weak (const GALGAS_abstractDeclarationAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak GALGAS_abstractDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST GALGAS_abstractDeclarationAST_2D_weak::bang_abstractDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDeclarationAST) ;
      result = GALGAS_abstractDeclarationAST ((cPtr_abstractDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak ("abstractDeclarationAST-weak",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST_2D_weak GALGAS_abstractDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST_2D_weak result ;
  const GALGAS_abstractDeclarationAST_2D_weak * p = (const GALGAS_abstractDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@declarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_declarationListAST : public cCollectionElement {
  public: GALGAS_declarationListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_declarationListAST (const GALGAS_declarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_declarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_declarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_declarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_declarationListAST (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_declarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST::GALGAS_declarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST::GALGAS_declarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::enterElement (const GALGAS_declarationListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::class_func_listWithValue (const GALGAS_abstractDeclarationAST & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractDeclarationAST & in_mDeclaration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_declarationListAST (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::addAssign_operation (const GALGAS_abstractDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_append (const GALGAS_abstractDeclarationAST inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_insertAtIndex (const GALGAS_abstractDeclarationAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_removeAtIndex (GALGAS_abstractDeclarationAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
        outOperand0 = p->mObject.mProperty_mDeclaration ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_popFirst (GALGAS_abstractDeclarationAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_popLast (GALGAS_abstractDeclarationAST & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::method_first (GALGAS_abstractDeclarationAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::method_last (GALGAS_abstractDeclarationAST & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::add_operation (const GALGAS_declarationListAST & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST::setter_setMDeclarationAtIndex (GALGAS_abstractDeclarationAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST GALGAS_declarationListAST::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  GALGAS_abstractDeclarationAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_declarationListAST::cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element cEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST cEnumerator_declarationListAST::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @declarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_declarationListAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  const GALGAS_declarationListAST * p = (const GALGAS_declarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

class cNode_extendStaticArrayDeclarationDictAST : public GALGAS_extendStaticArrayDeclarationDictAST_2D_element {
  public: cNode_extendStaticArrayDeclarationDictAST * mInfPtr ;
  public: cNode_extendStaticArrayDeclarationDictAST * mSupPtr ;
  public: int32_t mBalance ;

  public: cNode_extendStaticArrayDeclarationDictAST (const GALGAS_string & in_key,
                                                     const GALGAS_staticListValueListAST & inProperty_mStaticList) :
  GALGAS_extendStaticArrayDeclarationDictAST_2D_element (in_key, inProperty_mStaticList),
  mInfPtr (nullptr),
  mSupPtr (nullptr),
  mBalance (0) {
  }

  public: cNode_extendStaticArrayDeclarationDictAST (cNode_extendStaticArrayDeclarationDictAST * inNode) ;

  public: cNode_extendStaticArrayDeclarationDictAST (cNode_extendStaticArrayDeclarationDictAST &) = delete ;

  public: cNode_extendStaticArrayDeclarationDictAST& operator = (cNode_extendStaticArrayDeclarationDictAST &) = delete ;

  public: virtual ~ cNode_extendStaticArrayDeclarationDictAST (void) {
    macroMyDelete (mInfPtr) ;
    macroMyDelete (mSupPtr) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

class cSharedDictRoot_extendStaticArrayDeclarationDictAST : public SharedObject {
//--------------------------------- Attributes
  private: cNode_extendStaticArrayDeclarationDictAST * mRoot ;
  private: uint32_t mCount ;

//--------------------------------- Constructor
  protected: cSharedDictRoot_extendStaticArrayDeclarationDictAST (LOCATION_ARGS) :
  SharedObject (THERE),
  mRoot (nullptr),
  mCount (0) {
  }

//--------------------------------- Virtual destructor
  protected: virtual ~ cSharedDictRoot_extendStaticArrayDeclarationDictAST (void) {
    macroMyDelete (mRoot) ;
  }

//--------------------------------- No copy
  private: cSharedDictRoot_extendStaticArrayDeclarationDictAST (const cSharedDictRoot_extendStaticArrayDeclarationDictAST &) ;
  private: cSharedDictRoot_extendStaticArrayDeclarationDictAST & operator = (const cSharedDictRoot_extendStaticArrayDeclarationDictAST &) ;

//--------------------------------- Copy a map
  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_extendStaticArrayDeclarationDictAST * inSource) ;

//--------------------------------- Insert
  protected: VIRTUAL_IN_DEBUG void performInsert (const GALGAS_extendStaticArrayDeclarationDictAST_2D_element & inNewNode,
                                                  const bool inEntryOverrideAllowed) {
    macroUniqueSharedObject (this) ;
    bool extension = false ;
    bool entryAlreadyInDict = false ;
    recursiveAddEntry (mRoot, inNewNode, entryAlreadyInDict, extension, inEntryOverrideAllowed) ;
    if (!entryAlreadyInDict) {
      mCount ++ ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkDict (HERE) ;
    #endif
  }

  protected: static void rotateLeft (cNode_extendStaticArrayDeclarationDictAST * & ioRootPtr) {
    cNode_extendStaticArrayDeclarationDictAST * ptr = ioRootPtr->mSupPtr ;
    ioRootPtr->mSupPtr = ptr->mInfPtr ;
    ptr->mInfPtr = ioRootPtr;

    if (ptr->mBalance >= 0) {
      ioRootPtr->mBalance ++ ;
    }else{
      ioRootPtr->mBalance += 1 - ptr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ptr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ptr->mBalance ++ ;
    }
    ioRootPtr = ptr ;
  }

  protected: static void rotateRight (cNode_extendStaticArrayDeclarationDictAST * & ioRootPtr) {
    cNode_extendStaticArrayDeclarationDictAST * ptr = ioRootPtr->mInfPtr ;
    ioRootPtr->mInfPtr = ptr->mSupPtr ;
    ptr->mSupPtr = ioRootPtr ;
   
    if (ptr->mBalance > 0) {
      ioRootPtr->mBalance += -ptr->mBalance - 1 ;
    }else{
      ioRootPtr->mBalance -- ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ptr->mBalance -- ;
    }else{
      ptr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr = ptr ;
  }

  protected: static void recursiveAddEntry (cNode_extendStaticArrayDeclarationDictAST * & ioRootPtr,
                                            const GALGAS_extendStaticArrayDeclarationDictAST_2D_element & inNewNode,
                                            bool & outEntryAlreadyPresent,
                                            bool & ioExtension,
                                            const bool inEntryOverrideAllowed) {
    if (ioRootPtr == nullptr) {
      macroMyNew (ioRootPtr, cNode_extendStaticArrayDeclarationDictAST (inNewNode.mProperty_key, inNewNode.mProperty_mStaticList)) ;
      ioExtension = true ;
      outEntryAlreadyPresent = false ;
    }else{
      macroValidPointer (ioRootPtr) ;
      const ComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;
        if (ioExtension) {
          ioRootPtr->mBalance++;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false;
          }else if (ioRootPtr->mBalance == 2) {
            if (ioRootPtr->mInfPtr->mBalance == -1) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;
        if (ioExtension) {
          ioRootPtr->mBalance-- ;
          if (ioRootPtr->mBalance == 0) {
            ioExtension = false ;
          }else if (ioRootPtr->mBalance == -2) {
            if (ioRootPtr->mSupPtr->mBalance == 1) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            ioExtension = false;
          }
        }
      }else{  // Found
        ioExtension = false ;
        outEntryAlreadyPresent = true ;
        if (inEntryOverrideAllowed) {
          ioRootPtr->mProperty_mStaticList = inNewNode.mProperty_mStaticList ;
        }
      }
    }
  }

//--------------------------------- Search
  private: VIRTUAL_IN_DEBUG cNode_extendStaticArrayDeclarationDictAST * findEntryInDict (const GALGAS_string & inKey) const {
    cNode_extendStaticArrayDeclarationDictAST * result = nullptr ;
    cNode_extendStaticArrayDeclarationDictAST * currentNode = mRoot ;
    while ((currentNode != nullptr) && (nullptr == result)) {
      macroValidPointer (currentNode) ;
      const ComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        result = currentNode ;
      }
    }
    return result ;
  }

//--------------------------------- Remove
  protected: VIRTUAL_IN_DEBUG void performRemove (const GALGAS_string & inKey, cNode_extendStaticArrayDeclarationDictAST * & outRemovedNodePtr) {
    bool branchHasBeenRemoved = false ; // Unused here
    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;
    if (nullptr != outRemovedNodePtr) {
      mCount -- ;
    }
  }

  protected: static void supBranchDecreased (cNode_extendStaticArrayDeclarationDictAST * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance ++ ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case 1:
      ioBranchHasBeenRemoved = false;
      break;
    case 2:
      switch (ioRoot->mInfPtr->mBalance) {
      case -1:
        rotateLeft (ioRoot->mInfPtr) ;
        rotateRight (ioRoot) ;
        break;
      case 0:
        rotateRight (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case 1:
        rotateRight (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected: static void infBranchDecreased (cNode_extendStaticArrayDeclarationDictAST * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -- ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false;
      break;
    case -2:
      switch (ioRoot->mSupPtr->mBalance) {
      case 1:
        rotateRight (ioRoot->mSupPtr) ;
        rotateLeft (ioRoot) ;
        break;
      case 0:
        rotateLeft (ioRoot) ;
        ioBranchHasBeenRemoved = false;
        break;
      case -1:
        rotateLeft (ioRoot) ;
        break;
      }
      break;
    }
  }

  protected: static void getPreviousElement (cNode_extendStaticArrayDeclarationDictAST * & ioRoot,
                                             cNode_extendStaticArrayDeclarationDictAST * & ioElement,
                                             bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr == nullptr) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  protected: static void internalRemoveRecursively (cNode_extendStaticArrayDeclarationDictAST * & ioRoot,
                                                     const GALGAS_string & inKeyToRemove,
                                                     cNode_extendStaticArrayDeclarationDictAST * & outRemovedNode,
                                                     bool & ioBranchHasBeenRemoved) {
    if (ioRoot != nullptr) {
      const ComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;
      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {
        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {
        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{
        cNode_extendStaticArrayDeclarationDictAST * p = ioRoot ;
        if (p->mInfPtr == nullptr) {
          ioRoot = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else if (p->mSupPtr == nullptr) {
          ioRoot = p->mInfPtr;
          p->mInfPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else{
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr = nullptr;
          ioRoot->mBalance = p->mBalance;
          p->mBalance = 0;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
        outRemovedNode = p ;
      }
    }
  }

//--------------------------------- Internal method for enumeration
  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//--------------------------------- Check Dictionary
  #ifndef DO_NOT_GENERATE_CHECKINGS
      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {
      uint32_t n = 0 ;
      checkNode (mRoot, n) ;
      macroAssertThere (n == mCount, "n (%lld) != mCount (%lld)", n, mCount) ;
    }
  #endif


  #ifndef DO_NOT_GENERATE_CHECKINGS
    private: static void checkNode (const cNode_extendStaticArrayDeclarationDictAST * inNode,
                                     uint32_t & ioCount) {
      if (nullptr != inNode) {
        checkNode (inNode->mInfPtr, ioCount) ;
        ioCount ++ ;
        checkNode (inNode->mSupPtr, ioCount) ;
      }
    }
  #endif

//--------------------------------- Compare Dictionaries
  public: ComparisonResult compare (const cSharedDictRoot_extendStaticArrayDeclarationDictAST * inOperand) const {
    ComparisonResult result = ComparisonResult::operandEqual ;
    if (mCount < inOperand->mCount) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mCount > inOperand->mCount) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      capCollectionElementArray enumerationArray ;
      populateEnumerationArray (enumerationArray) ;
      capCollectionElementArray operandEnumerationArray ;
      inOperand->populateEnumerationArray (operandEnumerationArray) ;
      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;
    }
    return result ;
  }

//--------------------------------- Friend
  friend class GALGAS_extendStaticArrayDeclarationDictAST ;
} ;


//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticArrayDeclarationDictAST::GALGAS_extendStaticArrayDeclarationDictAST (void) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticArrayDeclarationDictAST::~ GALGAS_extendStaticArrayDeclarationDictAST (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticArrayDeclarationDictAST::GALGAS_extendStaticArrayDeclarationDictAST (const GALGAS_extendStaticArrayDeclarationDictAST & inSource) :
AC_GALGAS_root (),
mSharedDict (nullptr) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticArrayDeclarationDictAST & GALGAS_extendStaticArrayDeclarationDictAST::operator = (const GALGAS_extendStaticArrayDeclarationDictAST & inSource) {
  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::drop (void) {
  macroDetachSharedObject (mSharedDict) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticArrayDeclarationDictAST GALGAS_extendStaticArrayDeclarationDictAST::class_func_emptyDict (LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationDictAST result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_extendStaticArrayDeclarationDictAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticArrayDeclarationDictAST GALGAS_extendStaticArrayDeclarationDictAST::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationDictAST result ;
  macroMyNew (result.mSharedDict, cSharedDictRoot_extendStaticArrayDeclarationDictAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Description
#endif

//--------------------------------------------------------------------------------------------------

static void internalDescription_extendStaticArrayDeclarationDictAST (const cNode_extendStaticArrayDeclarationDictAST * inNode,
                                 String & ioString,
                                 const int32_t inIndentation) {
  if (nullptr != inNode) {
    internalDescription_extendStaticArrayDeclarationDictAST (inNode->mInfPtr, ioString, inIndentation) ;
    ioString.appendNewLine () ;
    inNode->description (ioString, inIndentation) ;
    internalDescription_extendStaticArrayDeclarationDictAST (inNode->mSupPtr, ioString, inIndentation) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (":") ;
  if (isValid ()) {
    internalDescription_extendStaticArrayDeclarationDictAST (mSharedDict->mRoot, ioString, inIndentation) ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_extendStaticArrayDeclarationDictAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint (mSharedDict->mCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticArrayDeclarationDictAST_2D_element_3F_ GALGAS_extendStaticArrayDeclarationDictAST
::readSubscript__3F_ (const class GALGAS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_extendStaticArrayDeclarationDictAST_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_extendStaticArrayDeclarationDictAST * p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
      result = GALGAS_extendStaticArrayDeclarationDictAST_2D_element_3F_::init_nil () ;
    }else{
      result = *p ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insulate
#endif

//--------------------------------------------------------------------------------------------------

cNode_extendStaticArrayDeclarationDictAST::cNode_extendStaticArrayDeclarationDictAST (cNode_extendStaticArrayDeclarationDictAST * inNode) :
GALGAS_extendStaticArrayDeclarationDictAST_2D_element (inNode->mProperty_key, inNode->mProperty_mStaticList),
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance) {
  if (inNode->mInfPtr != nullptr) {
    macroMyNew (mInfPtr, cNode_extendStaticArrayDeclarationDictAST (inNode->mInfPtr)) ;
  }
  if (inNode->mSupPtr != nullptr) {
    macroMyNew (mSupPtr, cNode_extendStaticArrayDeclarationDictAST (inNode->mSupPtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_extendStaticArrayDeclarationDictAST::copyFrom (const cSharedDictRoot_extendStaticArrayDeclarationDictAST * inSource) {
  macroUniqueSharedObject (this) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    inSource->checkDict (HERE) ;
  #endif
  macroValidSharedObject (inSource, cSharedDictRoot_extendStaticArrayDeclarationDictAST) ;
  mCount = inSource->mCount ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, cNode_extendStaticArrayDeclarationDictAST (inSource->mRoot)) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::insulate (LOCATION_ARGS) {
  if ((nullptr != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {
    cSharedDictRoot_extendStaticArrayDeclarationDictAST * p = nullptr ;
    macroMyNew (p, cSharedDictRoot_extendStaticArrayDeclarationDictAST (THERE)) ;
    p->copyFrom (mSharedDict) ;
    macroAssignSharedObject (mSharedDict, p) ;
    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insert
#endif

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::enterElement (const GALGAS_extendStaticArrayDeclarationDictAST_2D_element & inValue,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (inValue, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::addAssign_operation (const GALGAS_string & inKey,
                                                                      const GALGAS_staticListValueListAST & inArgument0,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationDictAST_2D_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::setter_insert (const GALGAS_string inKey,
                                                                const GALGAS_staticListValueListAST inArgument0,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationDictAST_2D_element newElement (inKey, inArgument0) ;
  if (isValid () && newElement.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    const bool entryOverrideAllowed = true ;
    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extendStaticArrayDeclarationDictAST::getter_hasKey (const GALGAS_string & inKey
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const cNode_extendStaticArrayDeclarationDictAST * p = mSharedDict->findEntryInDict (inKey) ;
    result = GALGAS_bool (p != nullptr) ;
   }
   return result ;
 }

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::method_searchKey (GALGAS_string inKey,
                                                                   GALGAS_staticListValueListAST & outArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cNode_extendStaticArrayDeclarationDictAST * p = nullptr ;
  if (isValid () && inKey.isValid ()) {
    p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_extendStaticArrayDeclarationDictAST) ;
    outArgument0 = p->mProperty_mStaticList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::setter_removeKey (GALGAS_string inKey,
                                                                   GALGAS_staticListValueListAST & outArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cNode_extendStaticArrayDeclarationDictAST * p = nullptr ;
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    mSharedDict->performRemove (inKey, p) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cNode_extendStaticArrayDeclarationDictAST) ;
    outArgument0 = p->mProperty_mStaticList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST GALGAS_extendStaticArrayDeclarationDictAST::getter_mStaticListForKey (const GALGAS_string & inKey,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_staticListValueListAST result ;
  if (isValid () && inKey.isValid ()) {
  const cNode_extendStaticArrayDeclarationDictAST * p = mSharedDict->findEntryInDict (inKey) ;
   if (nullptr == p) {
    //--- Build error message
      String message = "cannot get mStaticList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      macroValidSharedObject (p, cNode_extendStaticArrayDeclarationDictAST) ;
      result = p->mProperty_mStaticList  ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::setter_setMStaticListForKey (GALGAS_staticListValueListAST inPropertyValue,
                                                                              GALGAS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    macroUniqueSharedObject (mSharedDict) ;
    cNode_extendStaticArrayDeclarationDictAST * p = mSharedDict->findEntryInDict (inKey) ;
    if (nullptr == p) {
    //--- Build error message
      String message = "cannot setMStaticListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      p->mProperty_mStaticList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object compare
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extendStaticArrayDeclarationDictAST::objectCompare (const GALGAS_extendStaticArrayDeclarationDictAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    result = mSharedDict->compare (inOperand.mSharedDict) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark map Enumeration
#endif

//--------------------------------------------------------------------------------------------------

class cCollectionElement_extendStaticArrayDeclarationDictAST : public cCollectionElement {
  public: GALGAS_extendStaticArrayDeclarationDictAST_2D_element mElement ;

//--- Constructor
  public: cCollectionElement_extendStaticArrayDeclarationDictAST (const GALGAS_extendStaticArrayDeclarationDictAST_2D_element & inElement) :
  cCollectionElement (HERE),
  mElement (inElement) {
  }

//--- No copy
  private: cCollectionElement_extendStaticArrayDeclarationDictAST (const cCollectionElement_extendStaticArrayDeclarationDictAST &) ;
  private: cCollectionElement_extendStaticArrayDeclarationDictAST & operator = (const cCollectionElement_extendStaticArrayDeclarationDictAST &) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const { return mElement.isValid () ; }

//--- Virtual method for comparing elements

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_extendStaticArrayDeclarationDictAST (mElement)) ;
    return p ;
  }

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const {
    mElement.description (ioString, inIndentation) ;
  }
} ;

//--------------------------------------------------------------------------------------------------

static void enterAscendingEnumeration_extendStaticArrayDeclarationDictAST (cNode_extendStaticArrayDeclarationDictAST * inNode,
                                                       capCollectionElementArray & ioEnumerationArray) {
  if (inNode != nullptr) {
    enterAscendingEnumeration_extendStaticArrayDeclarationDictAST (inNode->mInfPtr, ioEnumerationArray) ;
    cCollectionElement_extendStaticArrayDeclarationDictAST * p = nullptr ;
    macroMyNew (p, cCollectionElement_extendStaticArrayDeclarationDictAST (*inNode)) ;
    capCollectionElement element ;
    element.setPointer (p) ;
    macroDetachSharedObject (p) ;
    ioEnumerationArray.appendObject (element) ;
    enterAscendingEnumeration_extendStaticArrayDeclarationDictAST (inNode->mSupPtr, ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void cSharedDictRoot_extendStaticArrayDeclarationDictAST::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkDict (HERE) ;
  #endif
  ioEnumerationArray.setCapacity (mCount) ;
  enterAscendingEnumeration_extendStaticArrayDeclarationDictAST (mRoot, ioEnumerationArray) ;
  macroAssert (mCount == ioEnumerationArray.count (), "mCount (%lld) != ioEnumerationArray.count () (%lld)", mCount, ioEnumerationArray.count ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extendStaticArrayDeclarationDictAST::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  if (nullptr != mSharedDict) {
    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extendStaticArrayDeclarationDictAST::cEnumerator_extendStaticArrayDeclarationDictAST (const GALGAS_extendStaticArrayDeclarationDictAST & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticArrayDeclarationDictAST_2D_element cEnumerator_extendStaticArrayDeclarationDictAST::current (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticArrayDeclarationDictAST* p = dynamic_cast  <const cCollectionElement_extendStaticArrayDeclarationDictAST*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationDictAST) ;
  return GALGAS_extendStaticArrayDeclarationDictAST_2D_element (p->mElement) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_extendStaticArrayDeclarationDictAST::current_key (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticArrayDeclarationDictAST* p = dynamic_cast  <const cCollectionElement_extendStaticArrayDeclarationDictAST*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationDictAST) ;
  return p->mElement.mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListValueListAST cEnumerator_extendStaticArrayDeclarationDictAST::current_mStaticList (LOCATION_ARGS) const {
  const cCollectionElement_extendStaticArrayDeclarationDictAST* p = dynamic_cast  <const cCollectionElement_extendStaticArrayDeclarationDictAST*> (currentObjectPtr (THERE)) ;
  macroValidSharedObject (p, cCollectionElement_extendStaticArrayDeclarationDictAST) ;
  return p->mElement.mProperty_mStaticList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extendStaticArrayDeclarationDictAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST ("extendStaticArrayDeclarationDictAST",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extendStaticArrayDeclarationDictAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extendStaticArrayDeclarationDictAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticArrayDeclarationDictAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extendStaticArrayDeclarationDictAST GALGAS_extendStaticArrayDeclarationDictAST::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationDictAST result ;
  const GALGAS_extendStaticArrayDeclarationDictAST * p = (const GALGAS_extendStaticArrayDeclarationDictAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extendStaticArrayDeclarationDictAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationDictAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@requiredFunctionDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_requiredFunctionDeclarationListAST : public cCollectionElement {
  public: GALGAS_requiredFunctionDeclarationListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_requiredFunctionDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                 const GALGAS_mode & in_mExecutionMode,
                                                                 const GALGAS_bool & in_mIsExported,
                                                                 const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                 const GALGAS_location & in_mEndOfProcLocation
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_requiredFunctionDeclarationListAST (const GALGAS_requiredFunctionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_requiredFunctionDeclarationListAST::cCollectionElement_requiredFunctionDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                              const GALGAS_mode & in_mExecutionMode,
                                                                                                              const GALGAS_bool & in_mIsExported,
                                                                                                              const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                              const GALGAS_location & in_mEndOfProcLocation
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mExecutionMode, in_mIsExported, in_mFormalArgumentList, in_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_requiredFunctionDeclarationListAST::cCollectionElement_requiredFunctionDeclarationListAST (const GALGAS_requiredFunctionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mExecutionMode, inElement.mProperty_mIsExported, inElement.mProperty_mFormalArgumentList, inElement.mProperty_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_requiredFunctionDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_requiredFunctionDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_requiredFunctionDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mExecutionMode, mObject.mProperty_mIsExported, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_requiredFunctionDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExecutionMode" ":") ;
  mObject.mProperty_mExecutionMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsExported" ":") ;
  mObject.mProperty_mIsExported.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentList" ":") ;
  mObject.mProperty_mFormalArgumentList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfProcLocation" ":") ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST::GALGAS_requiredFunctionDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST::GALGAS_requiredFunctionDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredFunctionDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredFunctionDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::enterElement (const GALGAS_requiredFunctionDeclarationListAST_2D_element & inValue,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                               const GALGAS_mode & inOperand1,
                                                                                                               const GALGAS_bool & inOperand2,
                                                                                                               const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                               const GALGAS_location & inOperand4
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_requiredFunctionDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_requiredFunctionDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_requiredFunctionDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mName,
                                                                           const GALGAS_mode & in_mExecutionMode,
                                                                           const GALGAS_bool & in_mIsExported,
                                                                           const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                           const GALGAS_location & in_mEndOfProcLocation
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (in_mName,
                                                                        in_mExecutionMode,
                                                                        in_mIsExported,
                                                                        in_mFormalArgumentList,
                                                                        in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_mode & inOperand1,
                                                                     const GALGAS_bool & inOperand2,
                                                                     const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                     const GALGAS_location & inOperand4
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_append (const GALGAS_lstring inOperand0,
                                                               const GALGAS_mode inOperand1,
                                                               const GALGAS_bool inOperand2,
                                                               const GALGAS_routineFormalArgumentListAST inOperand3,
                                                               const GALGAS_location inOperand4,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_mode inOperand1,
                                                                      const GALGAS_bool inOperand2,
                                                                      const GALGAS_routineFormalArgumentListAST inOperand3,
                                                                      const GALGAS_location inOperand4,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_requiredFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_mode & outOperand1,
                                                                      GALGAS_bool & outOperand2,
                                                                      GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                      GALGAS_location & outOperand4,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mName ;
        outOperand1 = p->mObject.mProperty_mExecutionMode ;
        outOperand2 = p->mObject.mProperty_mIsExported ;
        outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
        outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_mode & outOperand1,
                                                                 GALGAS_bool & outOperand2,
                                                                 GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                 GALGAS_location & outOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_mode & outOperand1,
                                                                GALGAS_bool & outOperand2,
                                                                GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                GALGAS_location & outOperand4,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_mode & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              GALGAS_routineFormalArgumentListAST & outOperand3,
                                                              GALGAS_location & outOperand4,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_mode & outOperand1,
                                                             GALGAS_bool & outOperand2,
                                                             GALGAS_routineFormalArgumentListAST & outOperand3,
                                                             GALGAS_location & outOperand4,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mExecutionMode ;
    outOperand2 = p->mObject.mProperty_mIsExported ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::add_operation (const GALGAS_requiredFunctionDeclarationListAST & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_requiredFunctionDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_requiredFunctionDeclarationListAST result = GALGAS_requiredFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_requiredFunctionDeclarationListAST result = GALGAS_requiredFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_requiredFunctionDeclarationListAST result = GALGAS_requiredFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::plusAssign_operation (const GALGAS_requiredFunctionDeclarationListAST inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_requiredFunctionDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMExecutionModeAtIndex (GALGAS_mode inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExecutionMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_requiredFunctionDeclarationListAST::getter_mExecutionModeAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mExecutionMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMIsExportedAtIndex (GALGAS_bool inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsExported = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_requiredFunctionDeclarationListAST::getter_mIsExportedAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mIsExported ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMFormalArgumentListAtIndex (GALGAS_routineFormalArgumentListAST inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_requiredFunctionDeclarationListAST::getter_mFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mFormalArgumentList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST::setter_setMEndOfProcLocationAtIndex (GALGAS_location inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfProcLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_requiredFunctionDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_requiredFunctionDeclarationListAST * p = (cCollectionElement_requiredFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_requiredFunctionDeclarationListAST::cEnumerator_requiredFunctionDeclarationListAST (const GALGAS_requiredFunctionDeclarationListAST & inEnumeratedObject,
                                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element cEnumerator_requiredFunctionDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_requiredFunctionDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_requiredFunctionDeclarationListAST::current_mExecutionMode (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mExecutionMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_requiredFunctionDeclarationListAST::current_mIsExported (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mIsExported ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST cEnumerator_requiredFunctionDeclarationListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_requiredFunctionDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_requiredFunctionDeclarationListAST * p = (const cCollectionElement_requiredFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_requiredFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @requiredFunctionDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST ("requiredFunctionDeclarationListAST",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_requiredFunctionDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_requiredFunctionDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredFunctionDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST GALGAS_requiredFunctionDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_requiredFunctionDeclarationListAST result ;
  const GALGAS_requiredFunctionDeclarationListAST * p = (const GALGAS_requiredFunctionDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_requiredFunctionDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredFunctionDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@externFunctionDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externFunctionDeclarationListAST : public cCollectionElement {
  public: GALGAS_externFunctionDeclarationListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_externFunctionDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
                                                               const GALGAS_mode & in_mMode,
                                                               const GALGAS_lstringlist & in_mAttributeList,
                                                               const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                               const GALGAS_lstring & in_mReturnTypeName,
                                                               const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                               const GALGAS_location & in_mEndOfProcLocation
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externFunctionDeclarationListAST (const GALGAS_externFunctionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externFunctionDeclarationListAST::cCollectionElement_externFunctionDeclarationListAST (const GALGAS_lstring & in_mExternProcedureName,
                                                                                                          const GALGAS_mode & in_mMode,
                                                                                                          const GALGAS_lstringlist & in_mAttributeList,
                                                                                                          const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                                                          const GALGAS_lstring & in_mReturnTypeName,
                                                                                                          const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                                                          const GALGAS_location & in_mEndOfProcLocation
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternProcedureName, in_mMode, in_mAttributeList, in_mProcFormalArgumentList, in_mReturnTypeName, in_mRoutineNameForGeneration, in_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externFunctionDeclarationListAST::cCollectionElement_externFunctionDeclarationListAST (const GALGAS_externFunctionDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternProcedureName, inElement.mProperty_mMode, inElement.mProperty_mAttributeList, inElement.mProperty_mProcFormalArgumentList, inElement.mProperty_mReturnTypeName, inElement.mProperty_mRoutineNameForGeneration, inElement.mProperty_mEndOfProcLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externFunctionDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externFunctionDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externFunctionDeclarationListAST (mObject.mProperty_mExternProcedureName, mObject.mProperty_mMode, mObject.mProperty_mAttributeList, mObject.mProperty_mProcFormalArgumentList, mObject.mProperty_mReturnTypeName, mObject.mProperty_mRoutineNameForGeneration, mObject.mProperty_mEndOfProcLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_externFunctionDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExternProcedureName" ":") ;
  mObject.mProperty_mExternProcedureName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMode" ":") ;
  mObject.mProperty_mMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeList" ":") ;
  mObject.mProperty_mAttributeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProcFormalArgumentList" ":") ;
  mObject.mProperty_mProcFormalArgumentList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnTypeName" ":") ;
  mObject.mProperty_mReturnTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineNameForGeneration" ":") ;
  mObject.mProperty_mRoutineNameForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfProcLocation" ":") ;
  mObject.mProperty_mEndOfProcLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST::GALGAS_externFunctionDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST::GALGAS_externFunctionDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::enterElement (const GALGAS_externFunctionDeclarationListAST_2D_element & inValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                           const GALGAS_mode & inOperand1,
                                                                                                           const GALGAS_lstringlist & inOperand2,
                                                                                                           const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                           const GALGAS_lstring & inOperand4,
                                                                                                           const GALGAS_lstring & inOperand5,
                                                                                                           const GALGAS_location & inOperand6
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_externFunctionDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externFunctionDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mExternProcedureName,
                                                                         const GALGAS_mode & in_mMode,
                                                                         const GALGAS_lstringlist & in_mAttributeList,
                                                                         const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                         const GALGAS_lstring & in_mReturnTypeName,
                                                                         const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                         const GALGAS_location & in_mEndOfProcLocation
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (in_mExternProcedureName,
                                                                      in_mMode,
                                                                      in_mAttributeList,
                                                                      in_mProcFormalArgumentList,
                                                                      in_mReturnTypeName,
                                                                      in_mRoutineNameForGeneration,
                                                                      in_mEndOfProcLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_mode & inOperand1,
                                                                   const GALGAS_lstringlist & inOperand2,
                                                                   const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                   const GALGAS_lstring & inOperand4,
                                                                   const GALGAS_lstring & inOperand5,
                                                                   const GALGAS_location & inOperand6
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_append (const GALGAS_lstring inOperand0,
                                                             const GALGAS_mode inOperand1,
                                                             const GALGAS_lstringlist inOperand2,
                                                             const GALGAS_routineFormalArgumentListAST inOperand3,
                                                             const GALGAS_lstring inOperand4,
                                                             const GALGAS_lstring inOperand5,
                                                             const GALGAS_location inOperand6,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_mode inOperand1,
                                                                    const GALGAS_lstringlist inOperand2,
                                                                    const GALGAS_routineFormalArgumentListAST inOperand3,
                                                                    const GALGAS_lstring inOperand4,
                                                                    const GALGAS_lstring inOperand5,
                                                                    const GALGAS_location inOperand6,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_externFunctionDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_mode & outOperand1,
                                                                    GALGAS_lstringlist & outOperand2,
                                                                    GALGAS_routineFormalArgumentListAST & outOperand3,
                                                                    GALGAS_lstring & outOperand4,
                                                                    GALGAS_lstring & outOperand5,
                                                                    GALGAS_location & outOperand6,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mExternProcedureName ;
        outOperand1 = p->mObject.mProperty_mMode ;
        outOperand2 = p->mObject.mProperty_mAttributeList ;
        outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
        outOperand4 = p->mObject.mProperty_mReturnTypeName ;
        outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
        outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_mode & outOperand1,
                                                               GALGAS_lstringlist & outOperand2,
                                                               GALGAS_routineFormalArgumentListAST & outOperand3,
                                                               GALGAS_lstring & outOperand4,
                                                               GALGAS_lstring & outOperand5,
                                                               GALGAS_location & outOperand6,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_mode & outOperand1,
                                                              GALGAS_lstringlist & outOperand2,
                                                              GALGAS_routineFormalArgumentListAST & outOperand3,
                                                              GALGAS_lstring & outOperand4,
                                                              GALGAS_lstring & outOperand5,
                                                              GALGAS_location & outOperand6,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_mode & outOperand1,
                                                            GALGAS_lstringlist & outOperand2,
                                                            GALGAS_routineFormalArgumentListAST & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_lstring & outOperand5,
                                                            GALGAS_location & outOperand6,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_mode & outOperand1,
                                                           GALGAS_lstringlist & outOperand2,
                                                           GALGAS_routineFormalArgumentListAST & outOperand3,
                                                           GALGAS_lstring & outOperand4,
                                                           GALGAS_lstring & outOperand5,
                                                           GALGAS_location & outOperand6,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mExternProcedureName ;
    outOperand1 = p->mObject.mProperty_mMode ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mProcFormalArgumentList ;
    outOperand4 = p->mObject.mProperty_mReturnTypeName ;
    outOperand5 = p->mObject.mProperty_mRoutineNameForGeneration ;
    outOperand6 = p->mObject.mProperty_mEndOfProcLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::add_operation (const GALGAS_externFunctionDeclarationListAST & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationListAST result = GALGAS_externFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationListAST result = GALGAS_externFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationListAST result = GALGAS_externFunctionDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::plusAssign_operation (const GALGAS_externFunctionDeclarationListAST inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMExternProcedureNameAtIndex (GALGAS_lstring inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExternProcedureName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationListAST::getter_mExternProcedureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mExternProcedureName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMModeAtIndex (GALGAS_mode inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_externFunctionDeclarationListAST::getter_mModeAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMAttributeListAtIndex (GALGAS_lstringlist inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_externFunctionDeclarationListAST::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMProcFormalArgumentListAtIndex (GALGAS_routineFormalArgumentListAST inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProcFormalArgumentList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST GALGAS_externFunctionDeclarationListAST::getter_mProcFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_routineFormalArgumentListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mProcFormalArgumentList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMReturnTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReturnTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationListAST::getter_mReturnTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mReturnTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMRoutineNameForGenerationAtIndex (GALGAS_lstring inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineNameForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationListAST::getter_mRoutineNameForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mRoutineNameForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionDeclarationListAST::setter_setMEndOfProcLocationAtIndex (GALGAS_location inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfProcLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_externFunctionDeclarationListAST::getter_mEndOfProcLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externFunctionDeclarationListAST * p = (cCollectionElement_externFunctionDeclarationListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
    result = p->mObject.mProperty_mEndOfProcLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_externFunctionDeclarationListAST::cEnumerator_externFunctionDeclarationListAST (const GALGAS_externFunctionDeclarationListAST & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST_2D_element cEnumerator_externFunctionDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externFunctionDeclarationListAST::current_mExternProcedureName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mExternProcedureName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_externFunctionDeclarationListAST::current_mMode (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_externFunctionDeclarationListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST cEnumerator_externFunctionDeclarationListAST::current_mProcFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mProcFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externFunctionDeclarationListAST::current_mReturnTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mReturnTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externFunctionDeclarationListAST::current_mRoutineNameForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mRoutineNameForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_externFunctionDeclarationListAST::current_mEndOfProcLocation (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionDeclarationListAST * p = (const cCollectionElement_externFunctionDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionDeclarationListAST) ;
  return p->mObject.mProperty_mEndOfProcLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @externFunctionDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST ("externFunctionDeclarationListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationListAST GALGAS_externFunctionDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationListAST result ;
  const GALGAS_externFunctionDeclarationListAST * p = (const GALGAS_externFunctionDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externFunctionDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@taskListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_taskListAST : public cCollectionElement {
  public: GALGAS_taskListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_taskListAST (const GALGAS_lstring & in_mTaskName,
                                          const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                          const GALGAS_lbigint & in_mStackSize,
                                          const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                          const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                          const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                          const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                          const GALGAS_location & in_mEndOfTaskDeclaration,
                                          const GALGAS_bool & in_mAutoStart
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_taskListAST (const GALGAS_taskListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GALGAS_lstring & in_mTaskName,
                                                                const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                                                const GALGAS_lbigint & in_mStackSize,
                                                                const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                const GALGAS_bool & in_mAutoStart
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTaskName, in_mLowerPriorityTaskList, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration, in_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_taskListAST::cCollectionElement_taskListAST (const GALGAS_taskListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mLowerPriorityTaskList, inElement.mProperty_mStackSize, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mGuardedCommandList, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_taskListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_taskListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_taskListAST (mObject.mProperty_mTaskName, mObject.mProperty_mLowerPriorityTaskList, mObject.mProperty_mStackSize, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mGuardedCommandList, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mAutoStart COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_taskListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskName" ":") ;
  mObject.mProperty_mTaskName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLowerPriorityTaskList" ":") ;
  mObject.mProperty_mLowerPriorityTaskList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStackSize" ":") ;
  mObject.mProperty_mStackSize.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskSetupListAST" ":") ;
  mObject.mProperty_mTaskSetupListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskActivateListAST" ":") ;
  mObject.mProperty_mTaskActivateListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTaskDeactivateListAST" ":") ;
  mObject.mProperty_mTaskDeactivateListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGuardedCommandList" ":") ;
  mObject.mProperty_mGuardedCommandList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfTaskDeclaration" ":") ;
  mObject.mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAutoStart" ":") ;
  mObject.mProperty_mAutoStart.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST::GALGAS_taskListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST::GALGAS_taskListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_taskListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::enterElement (const GALGAS_taskListAST_2D_element & inValue,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_lstringlist & inOperand1,
                                                                 const GALGAS_lbigint & inOperand2,
                                                                 const GALGAS_taskSetupListAST & inOperand3,
                                                                 const GALGAS_taskSetupListAST & inOperand4,
                                                                 const GALGAS_taskSetupListAST & inOperand5,
                                                                 const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                 const GALGAS_location & inOperand7,
                                                                 const GALGAS_bool & inOperand8
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_taskListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_taskListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_taskListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_lstring & in_mTaskName,
                                                    const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                                    const GALGAS_lbigint & in_mStackSize,
                                                    const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                    const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                    const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                    const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                    const GALGAS_location & in_mEndOfTaskDeclaration,
                                                    const GALGAS_bool & in_mAutoStart
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_taskListAST (in_mTaskName,
                                                 in_mLowerPriorityTaskList,
                                                 in_mStackSize,
                                                 in_mTaskSetupListAST,
                                                 in_mTaskActivateListAST,
                                                 in_mTaskDeactivateListAST,
                                                 in_mGuardedCommandList,
                                                 in_mEndOfTaskDeclaration,
                                                 in_mAutoStart COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                              const GALGAS_lstringlist & inOperand1,
                                              const GALGAS_lbigint & inOperand2,
                                              const GALGAS_taskSetupListAST & inOperand3,
                                              const GALGAS_taskSetupListAST & inOperand4,
                                              const GALGAS_taskSetupListAST & inOperand5,
                                              const GALGAS_syncInstructionBranchListAST & inOperand6,
                                              const GALGAS_location & inOperand7,
                                              const GALGAS_bool & inOperand8
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_append (const GALGAS_lstring inOperand0,
                                        const GALGAS_lstringlist inOperand1,
                                        const GALGAS_lbigint inOperand2,
                                        const GALGAS_taskSetupListAST inOperand3,
                                        const GALGAS_taskSetupListAST inOperand4,
                                        const GALGAS_taskSetupListAST inOperand5,
                                        const GALGAS_syncInstructionBranchListAST inOperand6,
                                        const GALGAS_location inOperand7,
                                        const GALGAS_bool inOperand8,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                               const GALGAS_lstringlist inOperand1,
                                               const GALGAS_lbigint inOperand2,
                                               const GALGAS_taskSetupListAST inOperand3,
                                               const GALGAS_taskSetupListAST inOperand4,
                                               const GALGAS_taskSetupListAST inOperand5,
                                               const GALGAS_syncInstructionBranchListAST inOperand6,
                                               const GALGAS_location inOperand7,
                                               const GALGAS_bool inOperand8,
                                               const GALGAS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_taskListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                               GALGAS_lstringlist & outOperand1,
                                               GALGAS_lbigint & outOperand2,
                                               GALGAS_taskSetupListAST & outOperand3,
                                               GALGAS_taskSetupListAST & outOperand4,
                                               GALGAS_taskSetupListAST & outOperand5,
                                               GALGAS_syncInstructionBranchListAST & outOperand6,
                                               GALGAS_location & outOperand7,
                                               GALGAS_bool & outOperand8,
                                               const GALGAS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        outOperand8.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_taskListAST) ;
        outOperand0 = p->mObject.mProperty_mTaskName ;
        outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
        outOperand2 = p->mObject.mProperty_mStackSize ;
        outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
        outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
        outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
        outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
        outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
        outOperand8 = p->mObject.mProperty_mAutoStart ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                          GALGAS_lstringlist & outOperand1,
                                          GALGAS_lbigint & outOperand2,
                                          GALGAS_taskSetupListAST & outOperand3,
                                          GALGAS_taskSetupListAST & outOperand4,
                                          GALGAS_taskSetupListAST & outOperand5,
                                          GALGAS_syncInstructionBranchListAST & outOperand6,
                                          GALGAS_location & outOperand7,
                                          GALGAS_bool & outOperand8,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                         GALGAS_lstringlist & outOperand1,
                                         GALGAS_lbigint & outOperand2,
                                         GALGAS_taskSetupListAST & outOperand3,
                                         GALGAS_taskSetupListAST & outOperand4,
                                         GALGAS_taskSetupListAST & outOperand5,
                                         GALGAS_syncInstructionBranchListAST & outOperand6,
                                         GALGAS_location & outOperand7,
                                         GALGAS_bool & outOperand8,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::method_first (GALGAS_lstring & outOperand0,
                                       GALGAS_lstringlist & outOperand1,
                                       GALGAS_lbigint & outOperand2,
                                       GALGAS_taskSetupListAST & outOperand3,
                                       GALGAS_taskSetupListAST & outOperand4,
                                       GALGAS_taskSetupListAST & outOperand5,
                                       GALGAS_syncInstructionBranchListAST & outOperand6,
                                       GALGAS_location & outOperand7,
                                       GALGAS_bool & outOperand8,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::method_last (GALGAS_lstring & outOperand0,
                                      GALGAS_lstringlist & outOperand1,
                                      GALGAS_lbigint & outOperand2,
                                      GALGAS_taskSetupListAST & outOperand3,
                                      GALGAS_taskSetupListAST & outOperand4,
                                      GALGAS_taskSetupListAST & outOperand5,
                                      GALGAS_syncInstructionBranchListAST & outOperand6,
                                      GALGAS_location & outOperand7,
                                      GALGAS_bool & outOperand8,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    outOperand0 = p->mObject.mProperty_mTaskName ;
    outOperand1 = p->mObject.mProperty_mLowerPriorityTaskList ;
    outOperand2 = p->mObject.mProperty_mStackSize ;
    outOperand3 = p->mObject.mProperty_mTaskSetupListAST ;
    outOperand4 = p->mObject.mProperty_mTaskActivateListAST ;
    outOperand5 = p->mObject.mProperty_mTaskDeactivateListAST ;
    outOperand6 = p->mObject.mProperty_mGuardedCommandList ;
    outOperand7 = p->mObject.mProperty_mEndOfTaskDeclaration ;
    outOperand8 = p->mObject.mProperty_mAutoStart ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::add_operation (const GALGAS_taskListAST & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_taskListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_taskListAST result = GALGAS_taskListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_taskListAST result = GALGAS_taskListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_taskListAST result = GALGAS_taskListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::plusAssign_operation (const GALGAS_taskListAST inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMTaskNameAtIndex (GALGAS_lstring inOperand,
                                                     GALGAS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_taskListAST::getter_mTaskNameAtIndex (const GALGAS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMLowerPriorityTaskListAtIndex (GALGAS_lstringlist inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLowerPriorityTaskList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_taskListAST::getter_mLowerPriorityTaskListAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mLowerPriorityTaskList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMStackSizeAtIndex (GALGAS_lbigint inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStackSize = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_taskListAST::getter_mStackSizeAtIndex (const GALGAS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mStackSize ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMTaskSetupListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskSetupListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskListAST::getter_mTaskSetupListASTAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskSetupListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMTaskActivateListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskActivateListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskListAST::getter_mTaskActivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskActivateListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMTaskDeactivateListASTAtIndex (GALGAS_taskSetupListAST inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTaskDeactivateListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST GALGAS_taskListAST::getter_mTaskDeactivateListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_taskSetupListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mTaskDeactivateListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMGuardedCommandListAtIndex (GALGAS_syncInstructionBranchListAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGuardedCommandList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST GALGAS_taskListAST::getter_mGuardedCommandListAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_syncInstructionBranchListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mGuardedCommandList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMEndOfTaskDeclarationAtIndex (GALGAS_location inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfTaskDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_taskListAST::getter_mEndOfTaskDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mEndOfTaskDeclaration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST::setter_setMAutoStartAtIndex (GALGAS_bool inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAutoStart = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_taskListAST::getter_mAutoStartAtIndex (const GALGAS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_taskListAST * p = (cCollectionElement_taskListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_taskListAST) ;
    result = p->mObject.mProperty_mAutoStart ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_taskListAST::cEnumerator_taskListAST (const GALGAS_taskListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element cEnumerator_taskListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_taskListAST::current_mTaskName (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_taskListAST::current_mLowerPriorityTaskList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mLowerPriorityTaskList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint cEnumerator_taskListAST::current_mStackSize (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_taskListAST::current_mTaskSetupListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_taskListAST::current_mTaskActivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST cEnumerator_taskListAST::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syncInstructionBranchListAST cEnumerator_taskListAST::current_mGuardedCommandList (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mGuardedCommandList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_taskListAST::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_taskListAST::current_mAutoStart (LOCATION_ARGS) const {
  const cCollectionElement_taskListAST * p = (const cCollectionElement_taskListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_taskListAST) ;
  return p->mObject.mProperty_mAutoStart ;
}




//--------------------------------------------------------------------------------------------------
//
//     @taskListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskListAST ("taskListAST",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST GALGAS_taskListAST::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskListAST result ;
  const GALGAS_taskListAST * p = (const GALGAS_taskListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@checkTargetListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_checkTargetListAST : public cCollectionElement {
  public: GALGAS_checkTargetListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                 const GALGAS_lstringlist & in_mAcceptedTargetList
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_checkTargetListAST (const GALGAS_checkTargetListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GALGAS_location & in_mTargetConstructLocation,
                                                                              const GALGAS_lstringlist & in_mAcceptedTargetList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetConstructLocation, in_mAcceptedTargetList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_checkTargetListAST::cCollectionElement_checkTargetListAST (const GALGAS_checkTargetListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetConstructLocation, inElement.mProperty_mAcceptedTargetList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_checkTargetListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_checkTargetListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_checkTargetListAST (mObject.mProperty_mTargetConstructLocation, mObject.mProperty_mAcceptedTargetList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_checkTargetListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetConstructLocation" ":") ;
  mObject.mProperty_mTargetConstructLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAcceptedTargetList" ":") ;
  mObject.mProperty_mAcceptedTargetList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST::GALGAS_checkTargetListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_checkTargetListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_checkTargetListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::enterElement (const GALGAS_checkTargetListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_checkTargetListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::class_func_listWithValue (const GALGAS_location & inOperand0,
                                                                               const GALGAS_lstringlist & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_checkTargetListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_checkTargetListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_checkTargetListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_location & in_mTargetConstructLocation,
                                                           const GALGAS_lstringlist & in_mAcceptedTargetList
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_checkTargetListAST (in_mTargetConstructLocation,
                                                        in_mAcceptedTargetList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::addAssign_operation (const GALGAS_location & inOperand0,
                                                     const GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_append (const GALGAS_location inOperand0,
                                               const GALGAS_lstringlist inOperand1,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                      const GALGAS_lstringlist inOperand1,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_checkTargetListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                      GALGAS_lstringlist & outOperand1,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
        outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
        outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_popFirst (GALGAS_location & outOperand0,
                                                 GALGAS_lstringlist & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_popLast (GALGAS_location & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::method_first (GALGAS_location & outOperand0,
                                              GALGAS_lstringlist & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::method_last (GALGAS_location & outOperand0,
                                             GALGAS_lstringlist & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    outOperand0 = p->mObject.mProperty_mTargetConstructLocation ;
    outOperand1 = p->mObject.mProperty_mAcceptedTargetList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::add_operation (const GALGAS_checkTargetListAST & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_checkTargetListAST result = GALGAS_checkTargetListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::plusAssign_operation (const GALGAS_checkTargetListAST inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_setMTargetConstructLocationAtIndex (GALGAS_location inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetConstructLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_checkTargetListAST::getter_mTargetConstructLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mTargetConstructLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_checkTargetListAST::setter_setMAcceptedTargetListAtIndex (GALGAS_lstringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAcceptedTargetList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_checkTargetListAST::getter_mAcceptedTargetListAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_checkTargetListAST * p = (cCollectionElement_checkTargetListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
    result = p->mObject.mProperty_mAcceptedTargetList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_checkTargetListAST::cEnumerator_checkTargetListAST (const GALGAS_checkTargetListAST & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST_2D_element cEnumerator_checkTargetListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_checkTargetListAST::current_mTargetConstructLocation (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mTargetConstructLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_checkTargetListAST::current_mAcceptedTargetList (LOCATION_ARGS) const {
  const cCollectionElement_checkTargetListAST * p = (const cCollectionElement_checkTargetListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_checkTargetListAST) ;
  return p->mObject.mProperty_mAcceptedTargetList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @checkTargetListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkTargetListAST ("checkTargetListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_checkTargetListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkTargetListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_checkTargetListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkTargetListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_checkTargetListAST GALGAS_checkTargetListAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_checkTargetListAST result ;
  const GALGAS_checkTargetListAST * p = (const GALGAS_checkTargetListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_checkTargetListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkTargetListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@driverDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverDeclarationListAST : public cCollectionElement {
  public: GALGAS_driverDeclarationListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationAST & in_mDriver
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverDeclarationListAST::cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationAST & in_mDriver
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriver) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverDeclarationListAST::cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriver) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_driverDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_driverDeclarationListAST (mObject.mProperty_mDriver COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_driverDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDriver" ":") ;
  mObject.mProperty_mDriver.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST::GALGAS_driverDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST::GALGAS_driverDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_driverDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::enterElement (const GALGAS_driverDeclarationListAST_2D_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::class_func_listWithValue (const GALGAS_driverDeclarationAST & inOperand0
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_driverDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_driverDeclarationAST & in_mDriver
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_driverDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverDeclarationListAST (in_mDriver COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::addAssign_operation (const GALGAS_driverDeclarationAST & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_append (const GALGAS_driverDeclarationAST inOperand0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_insertAtIndex (const GALGAS_driverDeclarationAST inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_removeAtIndex (GALGAS_driverDeclarationAST & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mDriver ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_popFirst (GALGAS_driverDeclarationAST & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_popLast (GALGAS_driverDeclarationAST & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::method_first (GALGAS_driverDeclarationAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::method_last (GALGAS_driverDeclarationAST & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::add_operation (const GALGAS_driverDeclarationListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result = GALGAS_driverDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result = GALGAS_driverDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result = GALGAS_driverDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::plusAssign_operation (const GALGAS_driverDeclarationListAST inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST::setter_setMDriverAtIndex (GALGAS_driverDeclarationAST inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriver = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST GALGAS_driverDeclarationListAST::getter_mDriverAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  GALGAS_driverDeclarationAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    result = p->mObject.mProperty_mDriver ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_driverDeclarationListAST::cEnumerator_driverDeclarationListAST (const GALGAS_driverDeclarationListAST & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element cEnumerator_driverDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverDeclarationListAST * p = (const cCollectionElement_driverDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationAST cEnumerator_driverDeclarationListAST::current_mDriver (LOCATION_ARGS) const {
  const cCollectionElement_driverDeclarationListAST * p = (const cCollectionElement_driverDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
  return p->mObject.mProperty_mDriver ;
}




//--------------------------------------------------------------------------------------------------
//
//     @driverDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationListAST ("driverDeclarationListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST result ;
  const GALGAS_driverDeclarationListAST * p = (const GALGAS_driverDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@driverInstanciationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_driverInstanciationListAST : public cCollectionElement {
  public: GALGAS_driverInstanciationListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_driverInstanciationListAST (const GALGAS_lstring & in_mDriverName,
                                                         const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_driverInstanciationListAST (const GALGAS_driverInstanciationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationListAST::cCollectionElement_driverInstanciationListAST (const GALGAS_lstring & in_mDriverName,
                                                                                              const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mDriverInstanciationArgumentList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_driverInstanciationListAST::cCollectionElement_driverInstanciationListAST (const GALGAS_driverInstanciationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriverName, inElement.mProperty_mDriverInstanciationArgumentList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_driverInstanciationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_driverInstanciationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_driverInstanciationListAST (mObject.mProperty_mDriverName, mObject.mProperty_mDriverInstanciationArgumentList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_driverInstanciationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDriverName" ":") ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDriverInstanciationArgumentList" ":") ;
  mObject.mProperty_mDriverInstanciationArgumentList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST::GALGAS_driverInstanciationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST::GALGAS_driverInstanciationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverInstanciationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_driverInstanciationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::enterElement (const GALGAS_driverInstanciationListAST_2D_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverInstanciationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                               const GALGAS_driverInstanciationArgumentListAST & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_driverInstanciationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverInstanciationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mDriverName,
                                                                   const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_driverInstanciationListAST (in_mDriverName,
                                                                in_mDriverInstanciationArgumentList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_driverInstanciationArgumentListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_append (const GALGAS_lstring inOperand0,
                                                       const GALGAS_driverInstanciationArgumentListAST inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_driverInstanciationArgumentListAST inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
        outOperand0 = p->mObject.mProperty_mDriverName ;
        outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::add_operation (const GALGAS_driverInstanciationListAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result = GALGAS_driverInstanciationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result = GALGAS_driverInstanciationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result = GALGAS_driverInstanciationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::plusAssign_operation (const GALGAS_driverInstanciationListAST inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_setMDriverNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriverName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_driverInstanciationListAST::getter_mDriverNameAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST::setter_setMDriverInstanciationArgumentListAtIndex (GALGAS_driverInstanciationArgumentListAST inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDriverInstanciationArgumentList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationListAST::getter_mDriverInstanciationArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  GALGAS_driverInstanciationArgumentListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    result = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_driverInstanciationListAST::cEnumerator_driverInstanciationListAST (const GALGAS_driverInstanciationListAST & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element cEnumerator_driverInstanciationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_driverInstanciationListAST::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject.mProperty_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST cEnumerator_driverInstanciationListAST::current_mDriverInstanciationArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject.mProperty_mDriverInstanciationArgumentList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationListAST ("driverInstanciationListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST result ;
  const GALGAS_driverInstanciationListAST * p = (const GALGAS_driverInstanciationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterUserAccesMapAST::cMapElement_controlRegisterUserAccesMapAST (const GALGAS_controlRegisterUserAccesMapAST_2D_element & inValue
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterUserAccesMapAST::cMapElement_controlRegisterUserAccesMapAST (const GALGAS_lstring & inKey
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterUserAccesMapAST::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterUserAccesMapAST::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_controlRegisterUserAccesMapAST (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterUserAccesMapAST::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST::GALGAS_controlRegisterUserAccesMapAST (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST::GALGAS_controlRegisterUserAccesMapAST (const GALGAS_controlRegisterUserAccesMapAST & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST & GALGAS_controlRegisterUserAccesMapAST::operator = (const GALGAS_controlRegisterUserAccesMapAST & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ GALGAS_controlRegisterUserAccesMapAST
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_controlRegisterUserAccesMapAST * p = (cMapElement_controlRegisterUserAccesMapAST *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_controlRegisterUserAccesMapAST_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_controlRegisterUserAccesMapAST_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::class_func_mapWithMapToOverride (const GALGAS_controlRegisterUserAccesMapAST & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterUserAccesMapAST result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST::enterElement (const GALGAS_controlRegisterUserAccesMapAST_2D_element & inValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterUserAccesMapAST insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterUserAccesMapAST insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::add_operation (const GALGAS_controlRegisterUserAccesMapAST & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterUserAccesMapAST result = *this ;
  cEnumerator_controlRegisterUserAccesMapAST enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST::setter_insertKey (GALGAS_lstring inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register is already marked as @user in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST::setter_removeKey (GALGAS_lstring inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "-- INTERNAL ERROR ('%K') --" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_controlRegisterUserAccesMapAST * p = (cMapElement_controlRegisterUserAccesMapAST *) attributes.ptr () ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterUserAccesMapAST) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterUserAccesMapAST * GALGAS_controlRegisterUserAccesMapAST::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * result = (cMapElement_controlRegisterUserAccesMapAST *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterUserAccesMapAST) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterUserAccesMapAST::cEnumerator_controlRegisterUserAccesMapAST (const GALGAS_controlRegisterUserAccesMapAST & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element cEnumerator_controlRegisterUserAccesMapAST::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterUserAccesMapAST * p = (const cMapElement_controlRegisterUserAccesMapAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterUserAccesMapAST) ;
  return GALGAS_controlRegisterUserAccesMapAST_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterUserAccesMapAST::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterUserAccesMapAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST ("controlRegisterUserAccesMapAST",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterUserAccesMapAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterUserAccesMapAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterUserAccesMapAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  const GALGAS_controlRegisterUserAccesMapAST * p = (const GALGAS_controlRegisterUserAccesMapAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterUserAccesMapAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location callExtensionGetter_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
  if (nullptr != inObject) {
    result = inObject->getter_locationForErrorSignaling (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST enterExtension'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_enterExtension (GALGAS_extendStaticArrayDeclarationDictAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                         GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractDeclarationAST temp_0 = this ;
  outArgument_outNewDeclaration = temp_0 ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExtension (cPtr_abstractDeclarationAST * inObject,
                                         GALGAS_extendStaticArrayDeclarationDictAST & io_ioExtendStaticArrayDeclarationAST,
                                         GALGAS_abstractDeclarationAST & out_outNewDeclaration,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  out_outNewDeclaration.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterExtension  (io_ioExtendStaticArrayDeclarationAST, out_outNewDeclaration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GALGAS_routineKind::GALGAS_routineKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::class_func_function (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = Enumeration::enum_function ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::class_func_section (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = Enumeration::enum_section ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::class_func_service (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = Enumeration::enum_service ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::class_func_primitive (UNUSED_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  result.mEnum = Enumeration::enum_primitive ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_routineKind [5] = {
  "(not built)",
  "function",
  "section",
  "service",
  "primitive"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_function == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isSection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_section == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isService (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_service == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineKind::getter_isPrimitive (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_primitive == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineKind::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @routineKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_routineKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineKind::objectCompare (const GALGAS_routineKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ("routineKind",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineKind GALGAS_routineKind::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_routineKind result ;
  const GALGAS_routineKind * p = (const GALGAS_routineKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_flatValuedObjectMap::cMapElement_flatValuedObjectMap (const GALGAS_flatValuedObjectMap_2D_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mObjectState (inValue.mProperty_mObjectState),
mProperty_mObjectShouldBeValuedAtEndOfScope (inValue.mProperty_mObjectShouldBeValuedAtEndOfScope),
mProperty_mValuedObject (inValue.mProperty_mValuedObject) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_flatValuedObjectMap::cMapElement_flatValuedObjectMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_valuedObjectState & in_mObjectState,
                                                                  const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                                  const GALGAS_valuedObject & in_mValuedObject
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mObjectState (in_mObjectState),
mProperty_mObjectShouldBeValuedAtEndOfScope (in_mObjectShouldBeValuedAtEndOfScope),
mProperty_mValuedObject (in_mValuedObject) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_flatValuedObjectMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_flatValuedObjectMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_flatValuedObjectMap (mProperty_lkey, mProperty_mObjectState, mProperty_mObjectShouldBeValuedAtEndOfScope, mProperty_mValuedObject COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_flatValuedObjectMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObjectState" ":") ;
  mProperty_mObjectState.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObjectShouldBeValuedAtEndOfScope" ":") ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValuedObject" ":") ;
  mProperty_mValuedObject.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap::GALGAS_flatValuedObjectMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap::GALGAS_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap & GALGAS_flatValuedObjectMap::operator = (const GALGAS_flatValuedObjectMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element_3F_ GALGAS_flatValuedObjectMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_flatValuedObjectMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_flatValuedObjectMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_flatValuedObjectMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mObjectState = p->mProperty_mObjectState ;
      element.mProperty_mObjectShouldBeValuedAtEndOfScope = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
      element.mProperty_mValuedObject = p->mProperty_mValuedObject ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::class_func_mapWithMapToOverride (const GALGAS_flatValuedObjectMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_flatValuedObjectMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::enterElement (const GALGAS_flatValuedObjectMap_2D_element & inValue,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = nullptr ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@flatValuedObjectMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_valuedObjectState & inArgument0,
                                                      const GALGAS_bool & inArgument1,
                                                      const GALGAS_valuedObject & inArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = nullptr ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@flatValuedObjectMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::add_operation (const GALGAS_flatValuedObjectMap & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_flatValuedObjectMap result = *this ;
  cEnumerator_flatValuedObjectMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mObjectState (HERE), enumerator.current_mObjectShouldBeValuedAtEndOfScope (HERE), enumerator.current_mValuedObject (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_valuedObjectState inArgument0,
                                                   GALGAS_bool inArgument1,
                                                   GALGAS_valuedObject inArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * p = nullptr ;
  macroMyNew (p, cMapElement_flatValuedObjectMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' entity is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_flatValuedObjectMap_searchKey = "there is no '%K' entity" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_valuedObjectState & outArgument0,
                                                   GALGAS_bool & outArgument1,
                                                   GALGAS_valuedObject & outArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_flatValuedObjectMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    outArgument0 = p->mProperty_mObjectState ;
    outArgument1 = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = p->mProperty_mValuedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_removeKey (GALGAS_lstring inKey,
                                                   GALGAS_valuedObjectState & outArgument0,
                                                   GALGAS_bool & outArgument1,
                                                   GALGAS_valuedObject & outArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' entity" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    outArgument0 = p->mProperty_mObjectState ;
    outArgument1 = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = p->mProperty_mValuedObject ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_flatValuedObjectMap::getter_mObjectStateForKey (const GALGAS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GALGAS_valuedObjectState result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mObjectState ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_flatValuedObjectMap::getter_mObjectShouldBeValuedAtEndOfScopeForKey (const GALGAS_string & inKey,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_flatValuedObjectMap::getter_mValuedObjectForKey (const GALGAS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) attributes ;
  GALGAS_valuedObject result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    result = p->mProperty_mValuedObject ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_setMObjectStateForKey (GALGAS_valuedObjectState inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mObjectState = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_setMObjectShouldBeValuedAtEndOfScopeForKey (GALGAS_bool inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mObjectShouldBeValuedAtEndOfScope = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap::setter_setMValuedObjectForKey (GALGAS_valuedObject inAttributeValue,
                                                                GALGAS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_flatValuedObjectMap * p = (cMapElement_flatValuedObjectMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
    p->mProperty_mValuedObject = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_flatValuedObjectMap * GALGAS_flatValuedObjectMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_flatValuedObjectMap * result = (cMapElement_flatValuedObjectMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_flatValuedObjectMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_flatValuedObjectMap::cEnumerator_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element cEnumerator_flatValuedObjectMap::current (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return GALGAS_flatValuedObjectMap_2D_element (p->mProperty_lkey, p->mProperty_mObjectState, p->mProperty_mObjectShouldBeValuedAtEndOfScope, p->mProperty_mValuedObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_flatValuedObjectMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState cEnumerator_flatValuedObjectMap::current_mObjectState (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectState ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_flatValuedObjectMap::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject cEnumerator_flatValuedObjectMap::current_mValuedObject (LOCATION_ARGS) const {
  const cMapElement_flatValuedObjectMap * p = (const cMapElement_flatValuedObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_flatValuedObjectMap) ;
  return p->mProperty_mValuedObject ;
}

//--------------------------------------------------------------------------------------------------
//
//     @flatValuedObjectMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap ("flatValuedObjectMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_flatValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_flatValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_flatValuedObjectMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap GALGAS_flatValuedObjectMap::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap result ;
  const GALGAS_flatValuedObjectMap * p = (const GALGAS_flatValuedObjectMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_flatValuedObjectMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@scopeStack' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_scopeStack : public cCollectionElement {
  public: GALGAS_scopeStack_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_scopeStack (const GALGAS_scopeKind & in_mScopeKind,
                                         const GALGAS_bool & in_mFirstBranch,
                                         const GALGAS_referenceStateMap & in_mInitialStateMap,
                                         const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                         const GALGAS_lstringlist & in_mObjectList
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_scopeStack (const GALGAS_scopeStack_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GALGAS_scopeKind & in_mScopeKind,
                                                              const GALGAS_bool & in_mFirstBranch,
                                                              const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                              const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                              const GALGAS_lstringlist & in_mObjectList
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mScopeKind, in_mFirstBranch, in_mInitialStateMap, in_mReferenceStateMap, in_mObjectList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_scopeStack::cCollectionElement_scopeStack (const GALGAS_scopeStack_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mScopeKind, inElement.mProperty_mFirstBranch, inElement.mProperty_mInitialStateMap, inElement.mProperty_mReferenceStateMap, inElement.mProperty_mObjectList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_scopeStack::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_scopeStack::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_scopeStack (mObject.mProperty_mScopeKind, mObject.mProperty_mFirstBranch, mObject.mProperty_mInitialStateMap, mObject.mProperty_mReferenceStateMap, mObject.mProperty_mObjectList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_scopeStack::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mScopeKind" ":") ;
  mObject.mProperty_mScopeKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFirstBranch" ":") ;
  mObject.mProperty_mFirstBranch.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInitialStateMap" ":") ;
  mObject.mProperty_mInitialStateMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReferenceStateMap" ":") ;
  mObject.mProperty_mReferenceStateMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObjectList" ":") ;
  mObject.mProperty_mObjectList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack::GALGAS_scopeStack (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack::GALGAS_scopeStack (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_scopeStack (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_scopeStack (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::enterElement (const GALGAS_scopeStack_2D_element & inValue,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_scopeStack (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::class_func_listWithValue (const GALGAS_scopeKind & inOperand0,
                                                               const GALGAS_bool & inOperand1,
                                                               const GALGAS_referenceStateMap & inOperand2,
                                                               const GALGAS_referenceStateMap & inOperand3,
                                                               const GALGAS_lstringlist & inOperand4
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_scopeStack result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_scopeStack (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_scopeStack::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_scopeKind & in_mScopeKind,
                                                   const GALGAS_bool & in_mFirstBranch,
                                                   const GALGAS_referenceStateMap & in_mInitialStateMap,
                                                   const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                   const GALGAS_lstringlist & in_mObjectList
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = nullptr ;
  macroMyNew (p, cCollectionElement_scopeStack (in_mScopeKind,
                                                in_mFirstBranch,
                                                in_mInitialStateMap,
                                                in_mReferenceStateMap,
                                                in_mObjectList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::addAssign_operation (const GALGAS_scopeKind & inOperand0,
                                             const GALGAS_bool & inOperand1,
                                             const GALGAS_referenceStateMap & inOperand2,
                                             const GALGAS_referenceStateMap & inOperand3,
                                             const GALGAS_lstringlist & inOperand4
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_append (const GALGAS_scopeKind inOperand0,
                                       const GALGAS_bool inOperand1,
                                       const GALGAS_referenceStateMap inOperand2,
                                       const GALGAS_referenceStateMap inOperand3,
                                       const GALGAS_lstringlist inOperand4,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_insertAtIndex (const GALGAS_scopeKind inOperand0,
                                              const GALGAS_bool inOperand1,
                                              const GALGAS_referenceStateMap inOperand2,
                                              const GALGAS_referenceStateMap inOperand3,
                                              const GALGAS_lstringlist inOperand4,
                                              const GALGAS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_scopeStack (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_removeAtIndex (GALGAS_scopeKind & outOperand0,
                                              GALGAS_bool & outOperand1,
                                              GALGAS_referenceStateMap & outOperand2,
                                              GALGAS_referenceStateMap & outOperand3,
                                              GALGAS_lstringlist & outOperand4,
                                              const GALGAS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_scopeStack) ;
        outOperand0 = p->mObject.mProperty_mScopeKind ;
        outOperand1 = p->mObject.mProperty_mFirstBranch ;
        outOperand2 = p->mObject.mProperty_mInitialStateMap ;
        outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
        outOperand4 = p->mObject.mProperty_mObjectList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_popFirst (GALGAS_scopeKind & outOperand0,
                                         GALGAS_bool & outOperand1,
                                         GALGAS_referenceStateMap & outOperand2,
                                         GALGAS_referenceStateMap & outOperand3,
                                         GALGAS_lstringlist & outOperand4,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_popLast (GALGAS_scopeKind & outOperand0,
                                        GALGAS_bool & outOperand1,
                                        GALGAS_referenceStateMap & outOperand2,
                                        GALGAS_referenceStateMap & outOperand3,
                                        GALGAS_lstringlist & outOperand4,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::method_first (GALGAS_scopeKind & outOperand0,
                                      GALGAS_bool & outOperand1,
                                      GALGAS_referenceStateMap & outOperand2,
                                      GALGAS_referenceStateMap & outOperand3,
                                      GALGAS_lstringlist & outOperand4,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::method_last (GALGAS_scopeKind & outOperand0,
                                     GALGAS_bool & outOperand1,
                                     GALGAS_referenceStateMap & outOperand2,
                                     GALGAS_referenceStateMap & outOperand3,
                                     GALGAS_lstringlist & outOperand4,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    outOperand0 = p->mObject.mProperty_mScopeKind ;
    outOperand1 = p->mObject.mProperty_mFirstBranch ;
    outOperand2 = p->mObject.mProperty_mInitialStateMap ;
    outOperand3 = p->mObject.mProperty_mReferenceStateMap ;
    outOperand4 = p->mObject.mProperty_mObjectList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::add_operation (const GALGAS_scopeStack & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_scopeStack result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::getter_subListWithRange (const GALGAS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_scopeStack result = GALGAS_scopeStack::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::plusAssign_operation (const GALGAS_scopeStack inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMScopeKindAtIndex (GALGAS_scopeKind inOperand,
                                                     GALGAS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mScopeKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeKind GALGAS_scopeStack::getter_mScopeKindAtIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_scopeKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mScopeKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMFirstBranchAtIndex (GALGAS_bool inOperand,
                                                       GALGAS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFirstBranch = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_scopeStack::getter_mFirstBranchAtIndex (const GALGAS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mFirstBranch ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMInitialStateMapAtIndex (GALGAS_referenceStateMap inOperand,
                                                           GALGAS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInitialStateMap = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_scopeStack::getter_mInitialStateMapAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_referenceStateMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mInitialStateMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMReferenceStateMapAtIndex (GALGAS_referenceStateMap inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReferenceStateMap = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_scopeStack::getter_mReferenceStateMapAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_referenceStateMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mReferenceStateMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeStack::setter_setMObjectListAtIndex (GALGAS_lstringlist inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObjectList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_scopeStack::getter_mObjectListAtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_scopeStack * p = (cCollectionElement_scopeStack *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_scopeStack) ;
    result = p->mObject.mProperty_mObjectList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_scopeStack::cEnumerator_scopeStack (const GALGAS_scopeStack & inEnumeratedObject,
                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack_2D_element cEnumerator_scopeStack::current (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_scopeKind cEnumerator_scopeStack::current_mScopeKind (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mScopeKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_scopeStack::current_mFirstBranch (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mFirstBranch ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mInitialStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mInitialStateMap ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap cEnumerator_scopeStack::current_mReferenceStateMap (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mReferenceStateMap ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_scopeStack::current_mObjectList (LOCATION_ARGS) const {
  const cCollectionElement_scopeStack * p = (const cCollectionElement_scopeStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_scopeStack) ;
  return p->mObject.mProperty_mObjectList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @scopeStack generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack ("scopeStack",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scopeStack::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeStack ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scopeStack::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeStack (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeStack GALGAS_scopeStack::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_scopeStack result ;
  const GALGAS_scopeStack * p = (const GALGAS_scopeStack *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_scopeStack *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeStack", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST::GALGAS_LValueOperandAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST GALGAS_LValueOperandAST::class_func_noOperand (UNUSED_LOCATION_ARGS) {
  GALGAS_LValueOperandAST result ;
  result.mEnum = Enumeration::enum_noOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST GALGAS_LValueOperandAST::class_func_property (const GALGAS_lstring & inAssociatedValue0,
                                                                      const GALGAS_LValueOperandAST & inAssociatedValue1
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueOperandAST result ;
  result.mEnum = Enumeration::enum_property ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_LValueOperandAST_2D_property (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST GALGAS_LValueOperandAST::class_func_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                         const GALGAS_location & inAssociatedValue1,
                                                                         const GALGAS_bool & inAssociatedValue2,
                                                                         const GALGAS_LValueOperandAST & inAssociatedValue3
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueOperandAST result ;
  result.mEnum = Enumeration::enum_arrayAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_LValueOperandAST_2D_arrayAccess (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST::method_extractProperty (GALGAS_lstring & outAssociatedValue_name,
                                                      GALGAS_LValueOperandAST & outAssociatedValue_next,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_property) {
    outAssociatedValue_name.drop () ;
    outAssociatedValue_next.drop () ;
    String s ;
    s.appendCString ("method @LValueOperandAST.property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_LValueOperandAST_2D_property *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
    outAssociatedValue_next = ptr->mProperty_next ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST::method_extractArrayAccess (GALGAS_expressionAST & outAssociatedValue_index,
                                                         GALGAS_location & outAssociatedValue_endOfIndex,
                                                         GALGAS_bool & outAssociatedValue_checkIndexExpression,
                                                         GALGAS_LValueOperandAST & outAssociatedValue_next,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayAccess) {
    outAssociatedValue_index.drop () ;
    outAssociatedValue_endOfIndex.drop () ;
    outAssociatedValue_checkIndexExpression.drop () ;
    outAssociatedValue_next.drop () ;
    String s ;
    s.appendCString ("method @LValueOperandAST.arrayAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_LValueOperandAST_2D_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
    outAssociatedValue_next = ptr->mProperty_next ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_property_3F_ GALGAS_LValueOperandAST::getter_getProperty (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueOperandAST_2D_property_3F_ result ;
  if (mEnum == Enumeration::enum_property) {
    const auto ptr = (const GALGAS_LValueOperandAST_2D_property *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_LValueOperandAST_2D_property (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST::getAssociatedValuesFor_property (GALGAS_lstring & out_name,
                                                               GALGAS_LValueOperandAST & out_next) const {
  const auto ptr = (const GALGAS_LValueOperandAST_2D_property *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
  out_next = ptr->mProperty_next ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST_2D_arrayAccess_3F_ GALGAS_LValueOperandAST::getter_getArrayAccess (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueOperandAST_2D_arrayAccess_3F_ result ;
  if (mEnum == Enumeration::enum_arrayAccess) {
    const auto ptr = (const GALGAS_LValueOperandAST_2D_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_LValueOperandAST_2D_arrayAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST::getAssociatedValuesFor_arrayAccess (GALGAS_expressionAST & out_index,
                                                                  GALGAS_location & out_endOfIndex,
                                                                  GALGAS_bool & out_checkIndexExpression,
                                                                  GALGAS_LValueOperandAST & out_next) const {
  const auto ptr = (const GALGAS_LValueOperandAST_2D_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_index = ptr->mProperty_index ;
  out_endOfIndex = ptr->mProperty_endOfIndex ;
  out_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  out_next = ptr->mProperty_next ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_LValueOperandAST [4] = {
  "(not built)",
  "noOperand",
  "property",
  "arrayAccess"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_LValueOperandAST::getter_isNoOperand (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noOperand == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_LValueOperandAST::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_property == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_LValueOperandAST::getter_isArrayAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_LValueOperandAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @LValueOperandAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_LValueOperandAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_LValueOperandAST::objectCompare (const GALGAS_LValueOperandAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_property: {
        const auto left = (GALGAS_LValueOperandAST_2D_property *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GALGAS_LValueOperandAST_2D_property *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_arrayAccess: {
        const auto left = (GALGAS_LValueOperandAST_2D_arrayAccess *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GALGAS_LValueOperandAST_2D_arrayAccess *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @LValueOperandAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueOperandAST ("LValueOperandAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_LValueOperandAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueOperandAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_LValueOperandAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueOperandAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueOperandAST GALGAS_LValueOperandAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_LValueOperandAST result ;
  const GALGAS_LValueOperandAST * p = (const GALGAS_LValueOperandAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_LValueOperandAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueOperandAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState::GALGAS_valuedObjectState (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_valuedObjectState::class_func_noValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = Enumeration::enum_noValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_valuedObjectState::class_func_hasUnreadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = Enumeration::enum_hasUnreadValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_valuedObjectState::class_func_hasReadValue (UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  result.mEnum = Enumeration::enum_hasReadValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_valuedObjectState [4] = {
  "(not built)",
  "noValue",
  "hasUnreadValue",
  "hasReadValue"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObjectState::getter_isNoValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObjectState::getter_isHasUnreadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasUnreadValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObjectState::getter_isHasReadValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasReadValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObjectState::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @valuedObjectState: ") ;
  ioString.appendCString (gEnumNameArrayFor_valuedObjectState [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_valuedObjectState::objectCompare (const GALGAS_valuedObjectState & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @valuedObjectState generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObjectState ("valuedObjectState",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_valuedObjectState::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObjectState ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_valuedObjectState::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObjectState (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_valuedObjectState::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_valuedObjectState result ;
  const GALGAS_valuedObjectState * p = (const GALGAS_valuedObjectState *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_valuedObjectState *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObjectState", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject::GALGAS_valuedObject (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::class_func_driver (const GALGAS_omnibusType & inAssociatedValue0,
                                                            const GALGAS_bool & inAssociatedValue1
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  result.mEnum = Enumeration::enum_driver ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_valuedObject_2D_driver (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::class_func_task (const GALGAS_omnibusType & inAssociatedValue0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  result.mEnum = Enumeration::enum_task ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_valuedObject_2D_task (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::class_func_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  result.mEnum = Enumeration::enum_globalConstant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_valuedObject_2D_globalConstant (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::class_func_localConstant (const GALGAS_omnibusType & inAssociatedValue0,
                                                                   const GALGAS_lstring & inAssociatedValue1,
                                                                   const GALGAS_bool & inAssociatedValue2
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  result.mEnum = Enumeration::enum_localConstant ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_valuedObject_2D_localConstant (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::class_func_localVariable (const GALGAS_omnibusType & inAssociatedValue0,
                                                                   const GALGAS_lstring & inAssociatedValue1
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  result.mEnum = Enumeration::enum_localVariable ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_valuedObject_2D_localVariable (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::class_func_globalSyncInstance (const GALGAS_omnibusType & inAssociatedValue0,
                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  result.mEnum = Enumeration::enum_globalSyncInstance ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_valuedObject_2D_globalSyncInstance (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_extractDriver (GALGAS_omnibusType & outAssociatedValue_type,
                                                GALGAS_bool & outAssociatedValue_instancied,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_driver) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_instancied.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.driver invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_valuedObject_2D_driver *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_instancied = ptr->mProperty_instancied ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_extractTask (GALGAS_omnibusType & outAssociatedValue_type,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_task) {
    outAssociatedValue_type.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.task invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_valuedObject_2D_task *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_extractGlobalConstant (GALGAS_objectIR & outAssociatedValue_objectIR,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_globalConstant) {
    outAssociatedValue_objectIR.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.globalConstant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_valuedObject_2D_globalConstant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_objectIR = ptr->mProperty_objectIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_extractLocalConstant (GALGAS_omnibusType & outAssociatedValue_type,
                                                       GALGAS_lstring & outAssociatedValue_omnibusName,
                                                       GALGAS_bool & outAssociatedValue_isFormalInputArgument,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_localConstant) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_omnibusName.drop () ;
    outAssociatedValue_isFormalInputArgument.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.localConstant invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_valuedObject_2D_localConstant *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_omnibusName = ptr->mProperty_omnibusName ;
    outAssociatedValue_isFormalInputArgument = ptr->mProperty_isFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_extractLocalVariable (GALGAS_omnibusType & outAssociatedValue_type,
                                                       GALGAS_lstring & outAssociatedValue_omnibusName,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_localVariable) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_omnibusName.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.localVariable invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_valuedObject_2D_localVariable *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_omnibusName = ptr->mProperty_omnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::method_extractGlobalSyncInstance (GALGAS_omnibusType & outAssociatedValue_type,
                                                            GALGAS_lstring & outAssociatedValue_omnibusName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_globalSyncInstance) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_omnibusName.drop () ;
    String s ;
    s.appendCString ("method @valuedObject.globalSyncInstance invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_valuedObject_2D_globalSyncInstance *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_omnibusName = ptr->mProperty_omnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_driver_3F_ GALGAS_valuedObject::getter_getDriver (UNUSED_LOCATION_ARGS) const {
  GALGAS_valuedObject_2D_driver_3F_ result ;
  if (mEnum == Enumeration::enum_driver) {
    const auto ptr = (const GALGAS_valuedObject_2D_driver *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_valuedObject_2D_driver (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::getAssociatedValuesFor_driver (GALGAS_omnibusType & out_type,
                                                         GALGAS_bool & out_instancied) const {
  const auto ptr = (const GALGAS_valuedObject_2D_driver *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_instancied = ptr->mProperty_instancied ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_task_3F_ GALGAS_valuedObject::getter_getTask (UNUSED_LOCATION_ARGS) const {
  GALGAS_valuedObject_2D_task_3F_ result ;
  if (mEnum == Enumeration::enum_task) {
    const auto ptr = (const GALGAS_valuedObject_2D_task *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_valuedObject_2D_task (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::getAssociatedValuesFor_task (GALGAS_omnibusType & out_type) const {
  const auto ptr = (const GALGAS_valuedObject_2D_task *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalConstant_3F_ GALGAS_valuedObject::getter_getGlobalConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_valuedObject_2D_globalConstant_3F_ result ;
  if (mEnum == Enumeration::enum_globalConstant) {
    const auto ptr = (const GALGAS_valuedObject_2D_globalConstant *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_valuedObject_2D_globalConstant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::getAssociatedValuesFor_globalConstant (GALGAS_objectIR & out_objectIR) const {
  const auto ptr = (const GALGAS_valuedObject_2D_globalConstant *) mAssociatedValues.associatedValuesPointer () ;
  out_objectIR = ptr->mProperty_objectIR ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_localConstant_3F_ GALGAS_valuedObject::getter_getLocalConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_valuedObject_2D_localConstant_3F_ result ;
  if (mEnum == Enumeration::enum_localConstant) {
    const auto ptr = (const GALGAS_valuedObject_2D_localConstant *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_valuedObject_2D_localConstant (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::getAssociatedValuesFor_localConstant (GALGAS_omnibusType & out_type,
                                                                GALGAS_lstring & out_omnibusName,
                                                                GALGAS_bool & out_isFormalInputArgument) const {
  const auto ptr = (const GALGAS_valuedObject_2D_localConstant *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_omnibusName = ptr->mProperty_omnibusName ;
  out_isFormalInputArgument = ptr->mProperty_isFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_localVariable_3F_ GALGAS_valuedObject::getter_getLocalVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_valuedObject_2D_localVariable_3F_ result ;
  if (mEnum == Enumeration::enum_localVariable) {
    const auto ptr = (const GALGAS_valuedObject_2D_localVariable *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_valuedObject_2D_localVariable (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::getAssociatedValuesFor_localVariable (GALGAS_omnibusType & out_type,
                                                                GALGAS_lstring & out_omnibusName) const {
  const auto ptr = (const GALGAS_valuedObject_2D_localVariable *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_omnibusName = ptr->mProperty_omnibusName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject_2D_globalSyncInstance_3F_ GALGAS_valuedObject::getter_getGlobalSyncInstance (UNUSED_LOCATION_ARGS) const {
  GALGAS_valuedObject_2D_globalSyncInstance_3F_ result ;
  if (mEnum == Enumeration::enum_globalSyncInstance) {
    const auto ptr = (const GALGAS_valuedObject_2D_globalSyncInstance *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_valuedObject_2D_globalSyncInstance (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::getAssociatedValuesFor_globalSyncInstance (GALGAS_omnibusType & out_type,
                                                                     GALGAS_lstring & out_omnibusName) const {
  const auto ptr = (const GALGAS_valuedObject_2D_globalSyncInstance *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_omnibusName = ptr->mProperty_omnibusName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_valuedObject [7] = {
  "(not built)",
  "driver",
  "task",
  "globalConstant",
  "localConstant",
  "localVariable",
  "globalSyncInstance"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isDriver (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_driver == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isTask (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_task == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isGlobalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_globalConstant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isLocalConstant (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_localConstant == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isLocalVariable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_localVariable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_valuedObject::getter_isGlobalSyncInstance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_globalSyncInstance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_valuedObject::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @valuedObject: ") ;
  ioString.appendCString (gEnumNameArrayFor_valuedObject [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @valuedObject generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject ("valuedObject",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_valuedObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_valuedObject ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_valuedObject::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_valuedObject (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObject GALGAS_valuedObject::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_valuedObject result ;
  const GALGAS_valuedObject * p = (const GALGAS_valuedObject *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_valuedObject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("valuedObject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeKind::GALGAS_scopeKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_scopeKind GALGAS_scopeKind::class_func_selectScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = Enumeration::enum_selectScope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeKind GALGAS_scopeKind::class_func_repeatScope (UNUSED_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  result.mEnum = Enumeration::enum_repeatScope ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_scopeKind [3] = {
  "(not built)",
  "selectScope",
  "repeatScope"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_scopeKind::getter_isSelectScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selectScope == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_scopeKind::getter_isRepeatScope (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_repeatScope == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeKind::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @scopeKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_scopeKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @scopeKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeKind ("scopeKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scopeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scopeKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeKind GALGAS_scopeKind::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_scopeKind result ;
  const GALGAS_scopeKind * p = (const GALGAS_scopeKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_scopeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_referenceStateMap::cMapElement_referenceStateMap (const GALGAS_referenceStateMap_2D_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mState (inValue.mProperty_mState) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_referenceStateMap::cMapElement_referenceStateMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_valuedObjectState & in_mState
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mState (in_mState) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_referenceStateMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_referenceStateMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_referenceStateMap (mProperty_lkey, mProperty_mState COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_referenceStateMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mState" ":") ;
  mProperty_mState.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap::GALGAS_referenceStateMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap::GALGAS_referenceStateMap (const GALGAS_referenceStateMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap & GALGAS_referenceStateMap::operator = (const GALGAS_referenceStateMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_referenceStateMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_referenceStateMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element_3F_ GALGAS_referenceStateMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_referenceStateMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_referenceStateMap * p = (cMapElement_referenceStateMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_referenceStateMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_referenceStateMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mState = p->mProperty_mState ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_referenceStateMap::class_func_mapWithMapToOverride (const GALGAS_referenceStateMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_referenceStateMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_referenceStateMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap::enterElement (const GALGAS_referenceStateMap_2D_element & inValue,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = nullptr ;
  macroMyNew (p, cMapElement_referenceStateMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@referenceStateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_valuedObjectState & inArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = nullptr ;
  macroMyNew (p, cMapElement_referenceStateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@referenceStateMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_referenceStateMap::add_operation (const GALGAS_referenceStateMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_referenceStateMap result = *this ;
  cEnumerator_referenceStateMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mState (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_valuedObjectState inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * p = nullptr ;
  macroMyNew (p, cMapElement_referenceStateMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "INTERNAL ERROR" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_referenceStateMap_searchKey = "INTERNAL ERROR" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_valuedObjectState & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_referenceStateMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    outArgument0 = p->mProperty_mState ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState GALGAS_referenceStateMap::getter_mStateForKey (const GALGAS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) attributes ;
  GALGAS_valuedObjectState result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    result = p->mProperty_mState ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap::setter_setMStateForKey (GALGAS_valuedObjectState inAttributeValue,
                                                       GALGAS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_referenceStateMap * p = (cMapElement_referenceStateMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_referenceStateMap) ;
    p->mProperty_mState = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_referenceStateMap * GALGAS_referenceStateMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_referenceStateMap * result = (cMapElement_referenceStateMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_referenceStateMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_referenceStateMap::cEnumerator_referenceStateMap (const GALGAS_referenceStateMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element cEnumerator_referenceStateMap::current (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return GALGAS_referenceStateMap_2D_element (p->mProperty_lkey, p->mProperty_mState) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_referenceStateMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_valuedObjectState cEnumerator_referenceStateMap::current_mState (LOCATION_ARGS) const {
  const cMapElement_referenceStateMap * p = (const cMapElement_referenceStateMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_referenceStateMap) ;
  return p->mProperty_mState ;
}

//--------------------------------------------------------------------------------------------------
//
//     @referenceStateMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap ("referenceStateMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_referenceStateMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_referenceStateMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap GALGAS_referenceStateMap::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap result ;
  const GALGAS_referenceStateMap * p = (const GALGAS_referenceStateMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_referenceStateMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@valuedObjectState string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_valuedObjectState & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_valuedObjectState temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_valuedObjectState::Enumeration::invalid:
    break ;
  case GALGAS_valuedObjectState::Enumeration::enum_noValue:
    {
      result_result = GALGAS_string ("no value") ;
    }
    break ;
  case GALGAS_valuedObjectState::Enumeration::enum_hasUnreadValue:
    {
      result_result = GALGAS_string ("unread value") ;
    }
    break ;
  case GALGAS_valuedObjectState::Enumeration::enum_hasReadValue:
    {
      result_result = GALGAS_string ("read value") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//'@semanticTypePrecedenceGraph' graph
//
//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph::GALGAS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                         GALGAS_abstractDeclarationAST inArgument_0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//--------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_topologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                 GALGAS_lstringlist & outSortedKeyList,
                                                                 GALGAS_declarationListAST & outUnsortedList,
                                                                 GALGAS_lstringlist & outUnsortedKeyList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                           GALGAS_lstringlist & outSortedKeyList,
                                                                           GALGAS_declarationListAST & outUnsortedList,
                                                                           GALGAS_lstringlist & outUnsortedKeyList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_circularities (GALGAS_declarationListAST & outInfoList,
                                                               GALGAS_lstringlist & outKeyList
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_declarationListAST & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_declarationListAST & outInfoList,
                                                                        GALGAS_lstringlist & outKeyList
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST GALGAS_semanticTypePrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                   const GALGAS_stringset & inNodesToExclude,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_semanticTypePrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticTypePrecedenceGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypePrecedenceGraph GALGAS_semanticTypePrecedenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypePrecedenceGraph result ;
  const GALGAS_semanticTypePrecedenceGraph * p = (const GALGAS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticTypePrecedenceGraph noteUINTType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_noteUINTType (GALGAS_semanticTypePrecedenceGraph & ioObject,
                                   const GALGAS_uint constinArgument_inBitSize,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_typeName_974 = GALGAS_lstring::init_21__21_ (GALGAS_string ("u").add_operation (constinArgument_inBitSize.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 14)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  {
  ioObject.setter_noteNode (var_typeName_974 COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 15)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_keyRepresentationForErrorSignaling (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeDeclarationBarrierAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeDeclarationBarrierAST::cPtr_compileTimeDeclarationBarrierAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeDeclarationBarrierAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeDeclarationBarrierAST::objectCompare (const GALGAS_compileTimeDeclarationBarrierAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST::GALGAS_compileTimeDeclarationBarrierAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST GALGAS_compileTimeDeclarationBarrierAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_compileTimeDeclarationBarrierAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeDeclarationBarrierAST (inCompiler COMMA_THERE)) ;
  object->compileTimeDeclarationBarrierAST_init (inCompiler) ;
  const GALGAS_compileTimeDeclarationBarrierAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::
compileTimeDeclarationBarrierAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST::GALGAS_compileTimeDeclarationBarrierAST (const cPtr_compileTimeDeclarationBarrierAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeDeclarationBarrierAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST GALGAS_compileTimeDeclarationBarrierAST::class_func_new (LOCATION_ARGS) {
  GALGAS_compileTimeDeclarationBarrierAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeDeclarationBarrierAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeDeclarationBarrierAST class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeDeclarationBarrierAST::cPtr_compileTimeDeclarationBarrierAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeDeclarationBarrierAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;
}

void cPtr_compileTimeDeclarationBarrierAST::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@compileTimeDeclarationBarrierAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeDeclarationBarrierAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeDeclarationBarrierAST (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @compileTimeDeclarationBarrierAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ("compileTimeDeclarationBarrierAST",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeDeclarationBarrierAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeDeclarationBarrierAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeDeclarationBarrierAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST GALGAS_compileTimeDeclarationBarrierAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeDeclarationBarrierAST result ;
  const GALGAS_compileTimeDeclarationBarrierAST * p = (const GALGAS_compileTimeDeclarationBarrierAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeDeclarationBarrierAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeDeclarationBarrierAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_compileTimeDeclarationBarrierAST_2D_weak::objectCompare (const GALGAS_compileTimeDeclarationBarrierAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST_2D_weak::GALGAS_compileTimeDeclarationBarrierAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST_2D_weak & GALGAS_compileTimeDeclarationBarrierAST_2D_weak::operator = (const GALGAS_compileTimeDeclarationBarrierAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST_2D_weak::GALGAS_compileTimeDeclarationBarrierAST_2D_weak (const GALGAS_compileTimeDeclarationBarrierAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST_2D_weak GALGAS_compileTimeDeclarationBarrierAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_compileTimeDeclarationBarrierAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST GALGAS_compileTimeDeclarationBarrierAST_2D_weak::bang_compileTimeDeclarationBarrierAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_compileTimeDeclarationBarrierAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimeDeclarationBarrierAST) ;
      result = GALGAS_compileTimeDeclarationBarrierAST ((cPtr_compileTimeDeclarationBarrierAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeDeclarationBarrierAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2D_weak ("compileTimeDeclarationBarrierAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_compileTimeDeclarationBarrierAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_compileTimeDeclarationBarrierAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_compileTimeDeclarationBarrierAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_compileTimeDeclarationBarrierAST_2D_weak GALGAS_compileTimeDeclarationBarrierAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_compileTimeDeclarationBarrierAST_2D_weak result ;
  const GALGAS_compileTimeDeclarationBarrierAST_2D_weak * p = (const GALGAS_compileTimeDeclarationBarrierAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_compileTimeDeclarationBarrierAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeDeclarationBarrierAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_panicRoutinePriorityMap::cMapElement_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap_2D_element & inValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_panicRoutinePriorityMap::cMapElement_panicRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_panicRoutinePriorityMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_panicRoutinePriorityMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_panicRoutinePriorityMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_panicRoutinePriorityMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap::GALGAS_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap & GALGAS_panicRoutinePriorityMap::operator = (const GALGAS_panicRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element_3F_ GALGAS_panicRoutinePriorityMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_panicRoutinePriorityMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_panicRoutinePriorityMap * p = (cMapElement_panicRoutinePriorityMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_panicRoutinePriorityMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_panicRoutinePriorityMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::class_func_mapWithMapToOverride (const GALGAS_panicRoutinePriorityMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_panicRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap::enterElement (const GALGAS_panicRoutinePriorityMap_2D_element & inValue,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = nullptr ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@panicRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = nullptr ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@panicRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::add_operation (const GALGAS_panicRoutinePriorityMap & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_panicRoutinePriorityMap result = *this ;
  cEnumerator_panicRoutinePriorityMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap::setter_insertSetupKey (GALGAS_lstring inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = nullptr ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic setup routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap::setter_insertLoopKey (GALGAS_lstring inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * p = nullptr ;
  macroMyNew (p, cMapElement_panicRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a panic loop routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey = "there is no panic setup routine with priority %K" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap::method_searchSetupKey (GALGAS_lstring inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey = "there is no panic loop routine with priority %K" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap::method_searchLoopKey (GALGAS_lstring inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_panicRoutinePriorityMap * GALGAS_panicRoutinePriorityMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_panicRoutinePriorityMap * result = (cMapElement_panicRoutinePriorityMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_panicRoutinePriorityMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_panicRoutinePriorityMap::cEnumerator_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element cEnumerator_panicRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_panicRoutinePriorityMap * p = (const cMapElement_panicRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_panicRoutinePriorityMap) ;
  return GALGAS_panicRoutinePriorityMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_panicRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicRoutinePriorityMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap ("panicRoutinePriorityMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap GALGAS_panicRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap result ;
  const GALGAS_panicRoutinePriorityMap * p = (const GALGAS_panicRoutinePriorityMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMapForContext::cMapElement_routineMapForContext (const GALGAS_routineMapForContext_2D_element & inValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIsPublic (inValue.mProperty_mIsPublic),
mProperty_mSignature (inValue.mProperty_mSignature),
mProperty_mReturnTypeProxy (inValue.mProperty_mReturnTypeProxy),
mProperty_mModeDictionary (inValue.mProperty_mModeDictionary),
mProperty_mIsExported (inValue.mProperty_mIsExported),
mProperty_mFunctionMode (inValue.mProperty_mFunctionMode) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMapForContext::cMapElement_routineMapForContext (const GALGAS_lstring & inKey,
                                                                    const GALGAS_bool & in_mIsPublic,
                                                                    const GALGAS_routineTypedSignature & in_mSignature,
                                                                    const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                    const GALGAS_routineLLVMNameDict & in_mModeDictionary,
                                                                    const GALGAS_bool & in_mIsExported,
                                                                    const GALGAS_mode & in_mFunctionMode
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mSignature (in_mSignature),
mProperty_mReturnTypeProxy (in_mReturnTypeProxy),
mProperty_mModeDictionary (in_mModeDictionary),
mProperty_mIsExported (in_mIsExported),
mProperty_mFunctionMode (in_mFunctionMode) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_routineMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_routineMapForContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_routineMapForContext (mProperty_lkey, mProperty_mIsPublic, mProperty_mSignature, mProperty_mReturnTypeProxy, mProperty_mModeDictionary, mProperty_mIsExported, mProperty_mFunctionMode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_routineMapForContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsPublic" ":") ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnTypeProxy" ":") ;
  mProperty_mReturnTypeProxy.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mModeDictionary" ":") ;
  mProperty_mModeDictionary.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsExported" ":") ;
  mProperty_mIsExported.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFunctionMode" ":") ;
  mProperty_mFunctionMode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext::GALGAS_routineMapForContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext::GALGAS_routineMapForContext (const GALGAS_routineMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext & GALGAS_routineMapForContext::operator = (const GALGAS_routineMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext GALGAS_routineMapForContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext GALGAS_routineMapForContext::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element_3F_ GALGAS_routineMapForContext
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_routineMapForContext_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_routineMapForContext_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_routineMapForContext_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIsPublic = p->mProperty_mIsPublic ;
      element.mProperty_mSignature = p->mProperty_mSignature ;
      element.mProperty_mReturnTypeProxy = p->mProperty_mReturnTypeProxy ;
      element.mProperty_mModeDictionary = p->mProperty_mModeDictionary ;
      element.mProperty_mIsExported = p->mProperty_mIsExported ;
      element.mProperty_mFunctionMode = p->mProperty_mFunctionMode ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext GALGAS_routineMapForContext::class_func_mapWithMapToOverride (const GALGAS_routineMapForContext & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext GALGAS_routineMapForContext::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_routineMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::enterElement (const GALGAS_routineMapForContext_2D_element & inValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_routineMapForContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_bool & inArgument0,
                                                       const GALGAS_routineTypedSignature & inArgument1,
                                                       const GALGAS_unifiedTypeMapEntry & inArgument2,
                                                       const GALGAS_routineLLVMNameDict & inArgument3,
                                                       const GALGAS_bool & inArgument4,
                                                       const GALGAS_mode & inArgument5,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@routineMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext GALGAS_routineMapForContext::add_operation (const GALGAS_routineMapForContext & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_routineMapForContext result = *this ;
  cEnumerator_routineMapForContext enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsPublic (HERE), enumerator.current_mSignature (HERE), enumerator.current_mReturnTypeProxy (HERE), enumerator.current_mModeDictionary (HERE), enumerator.current_mIsExported (HERE), enumerator.current_mFunctionMode (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_bool inArgument0,
                                                    GALGAS_routineTypedSignature inArgument1,
                                                    GALGAS_unifiedTypeMapEntry inArgument2,
                                                    GALGAS_routineLLVMNameDict inArgument3,
                                                    GALGAS_bool inArgument4,
                                                    GALGAS_mode inArgument5,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_routineMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_routineMapForContext_searchKey = "there is no '%K' function" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_bool & outArgument0,
                                                    GALGAS_routineTypedSignature & outArgument1,
                                                    GALGAS_unifiedTypeMapEntry & outArgument2,
                                                    GALGAS_routineLLVMNameDict & outArgument3,
                                                    GALGAS_bool & outArgument4,
                                                    GALGAS_mode & outArgument5,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_routineMapForContext_searchKey
                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mReturnTypeProxy ;
    outArgument3 = p->mProperty_mModeDictionary ;
    outArgument4 = p->mProperty_mIsExported ;
    outArgument5 = p->mProperty_mFunctionMode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineMapForContext::getter_mIsPublicForKey (const GALGAS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_routineMapForContext::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_routineTypedSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_routineMapForContext::getter_mReturnTypeProxyForKey (const GALGAS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mReturnTypeProxy ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict GALGAS_routineMapForContext::getter_mModeDictionaryForKey (const GALGAS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_routineLLVMNameDict result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mModeDictionary ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineMapForContext::getter_mIsExportedForKey (const GALGAS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mIsExported ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode GALGAS_routineMapForContext::getter_mFunctionModeForKey (const GALGAS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) attributes ;
  GALGAS_mode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    result = p->mProperty_mFunctionMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMSignatureForKey (GALGAS_routineTypedSignature inAttributeValue,
                                                              GALGAS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMReturnTypeProxyForKey (GALGAS_unifiedTypeMapEntry inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mReturnTypeProxy = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMModeDictionaryForKey (GALGAS_routineLLVMNameDict inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mModeDictionary = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMIsExportedForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mIsExported = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext::setter_setMFunctionModeForKey (GALGAS_mode inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_routineMapForContext * p = (cMapElement_routineMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_routineMapForContext) ;
    p->mProperty_mFunctionMode = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_routineMapForContext * GALGAS_routineMapForContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_routineMapForContext * result = (cMapElement_routineMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_routineMapForContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_routineMapForContext::cEnumerator_routineMapForContext (const GALGAS_routineMapForContext & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element cEnumerator_routineMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return GALGAS_routineMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mSignature, p->mProperty_mReturnTypeProxy, p->mProperty_mModeDictionary, p->mProperty_mIsExported, p->mProperty_mFunctionMode) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_routineMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mIsPublic ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature cEnumerator_routineMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_routineMapForContext::current_mReturnTypeProxy (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mReturnTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineLLVMNameDict cEnumerator_routineMapForContext::current_mModeDictionary (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mModeDictionary ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_routineMapForContext::current_mIsExported (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mIsExported ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mode cEnumerator_routineMapForContext::current_mFunctionMode (LOCATION_ARGS) const {
  const cMapElement_routineMapForContext * p = (const cMapElement_routineMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_routineMapForContext) ;
  return p->mProperty_mFunctionMode ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineMapForContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext ("routineMapForContext",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapForContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext GALGAS_routineMapForContext::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  const GALGAS_routineMapForContext * p = (const GALGAS_routineMapForContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_guardMapForContext::cMapElement_guardMapForContext (const GALGAS_guardMapForContext_2D_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIsPublic (inValue.mProperty_mIsPublic),
mProperty_mSignature (inValue.mProperty_mSignature),
mProperty_mUserRoutineLLVMName (inValue.mProperty_mUserRoutineLLVMName),
mProperty_mImplementationRoutineLLVMName (inValue.mProperty_mImplementationRoutineLLVMName) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_guardMapForContext::cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                                                const GALGAS_bool & in_mIsPublic,
                                                                const GALGAS_routineTypedSignature & in_mSignature,
                                                                const GALGAS_lstring & in_mUserRoutineLLVMName,
                                                                const GALGAS_lstring & in_mImplementationRoutineLLVMName
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsPublic (in_mIsPublic),
mProperty_mSignature (in_mSignature),
mProperty_mUserRoutineLLVMName (in_mUserRoutineLLVMName),
mProperty_mImplementationRoutineLLVMName (in_mImplementationRoutineLLVMName) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_guardMapForContext::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_guardMapForContext::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_guardMapForContext (mProperty_lkey, mProperty_mIsPublic, mProperty_mSignature, mProperty_mUserRoutineLLVMName, mProperty_mImplementationRoutineLLVMName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_guardMapForContext::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsPublic" ":") ;
  mProperty_mIsPublic.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mUserRoutineLLVMName" ":") ;
  mProperty_mUserRoutineLLVMName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mImplementationRoutineLLVMName" ":") ;
  mProperty_mImplementationRoutineLLVMName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext::GALGAS_guardMapForContext (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext::GALGAS_guardMapForContext (const GALGAS_guardMapForContext & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext & GALGAS_guardMapForContext::operator = (const GALGAS_guardMapForContext & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext GALGAS_guardMapForContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext GALGAS_guardMapForContext::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element_3F_ GALGAS_guardMapForContext
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_guardMapForContext_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_guardMapForContext_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_guardMapForContext_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIsPublic = p->mProperty_mIsPublic ;
      element.mProperty_mSignature = p->mProperty_mSignature ;
      element.mProperty_mUserRoutineLLVMName = p->mProperty_mUserRoutineLLVMName ;
      element.mProperty_mImplementationRoutineLLVMName = p->mProperty_mImplementationRoutineLLVMName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext GALGAS_guardMapForContext::class_func_mapWithMapToOverride (const GALGAS_guardMapForContext & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext GALGAS_guardMapForContext::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_guardMapForContext result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::enterElement (const GALGAS_guardMapForContext_2D_element & inValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_guardMapForContext (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_bool & inArgument0,
                                                     const GALGAS_routineTypedSignature & inArgument1,
                                                     const GALGAS_lstring & inArgument2,
                                                     const GALGAS_lstring & inArgument3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@guardMapForContext insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext GALGAS_guardMapForContext::add_operation (const GALGAS_guardMapForContext & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_guardMapForContext result = *this ;
  cEnumerator_guardMapForContext enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsPublic (HERE), enumerator.current_mSignature (HERE), enumerator.current_mUserRoutineLLVMName (HERE), enumerator.current_mImplementationRoutineLLVMName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_bool inArgument0,
                                                  GALGAS_routineTypedSignature inArgument1,
                                                  GALGAS_lstring inArgument2,
                                                  GALGAS_lstring inArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * p = nullptr ;
  macroMyNew (p, cMapElement_guardMapForContext (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' guard is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_guardMapForContext_searchKey = "there is no '%K' guard" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_bool & outArgument0,
                                                  GALGAS_routineTypedSignature & outArgument1,
                                                  GALGAS_lstring & outArgument2,
                                                  GALGAS_lstring & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_guardMapForContext_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    outArgument0 = p->mProperty_mIsPublic ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mUserRoutineLLVMName ;
    outArgument3 = p->mProperty_mImplementationRoutineLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_guardMapForContext::getter_mIsPublicForKey (const GALGAS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mIsPublic ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature GALGAS_guardMapForContext::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_routineTypedSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guardMapForContext::getter_mUserRoutineLLVMNameForKey (const GALGAS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mUserRoutineLLVMName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_guardMapForContext::getter_mImplementationRoutineLLVMNameForKey (const GALGAS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    result = p->mProperty_mImplementationRoutineLLVMName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::setter_setMIsPublicForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mIsPublic = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::setter_setMSignatureForKey (GALGAS_routineTypedSignature inAttributeValue,
                                                            GALGAS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::setter_setMUserRoutineLLVMNameForKey (GALGAS_lstring inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mUserRoutineLLVMName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext::setter_setMImplementationRoutineLLVMNameForKey (GALGAS_lstring inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_guardMapForContext * p = (cMapElement_guardMapForContext *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_guardMapForContext) ;
    p->mProperty_mImplementationRoutineLLVMName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_guardMapForContext * GALGAS_guardMapForContext::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_guardMapForContext * result = (cMapElement_guardMapForContext *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_guardMapForContext) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_guardMapForContext::cEnumerator_guardMapForContext (const GALGAS_guardMapForContext & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element cEnumerator_guardMapForContext::current (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return GALGAS_guardMapForContext_2D_element (p->mProperty_lkey, p->mProperty_mIsPublic, p->mProperty_mSignature, p->mProperty_mUserRoutineLLVMName, p->mProperty_mImplementationRoutineLLVMName) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guardMapForContext::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_guardMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mIsPublic ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature cEnumerator_guardMapForContext::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guardMapForContext::current_mUserRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mUserRoutineLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_guardMapForContext::current_mImplementationRoutineLLVMName (LOCATION_ARGS) const {
  const cMapElement_guardMapForContext * p = (const cMapElement_guardMapForContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_guardMapForContext) ;
  return p->mProperty_mImplementationRoutineLLVMName ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardMapForContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext ("guardMapForContext",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext GALGAS_guardMapForContext::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext result ;
  const GALGAS_guardMapForContext * p = (const GALGAS_guardMapForContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterGroupMap::cMapElement_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap_2D_element & inValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mGroupKind (inValue.mProperty_mGroupKind),
mProperty_mControlRegisterMap (inValue.mProperty_mControlRegisterMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterGroupMap::cMapElement_controlRegisterGroupMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_registerGroupKind & in_mGroupKind,
                                                                          const GALGAS_controlRegisterMap & in_mControlRegisterMap
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mGroupKind (in_mGroupKind),
mProperty_mControlRegisterMap (in_mControlRegisterMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_controlRegisterGroupMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_controlRegisterGroupMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_controlRegisterGroupMap (mProperty_lkey, mProperty_mGroupKind, mProperty_mControlRegisterMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_controlRegisterGroupMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupKind" ":") ;
  mProperty_mGroupKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mControlRegisterMap" ":") ;
  mProperty_mControlRegisterMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap::GALGAS_controlRegisterGroupMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap::GALGAS_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap & GALGAS_controlRegisterGroupMap::operator = (const GALGAS_controlRegisterGroupMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element_3F_ GALGAS_controlRegisterGroupMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_controlRegisterGroupMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_controlRegisterGroupMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mGroupKind = p->mProperty_mGroupKind ;
      element.mProperty_mControlRegisterMap = p->mProperty_mControlRegisterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::class_func_mapWithMapToOverride (const GALGAS_controlRegisterGroupMap & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::enterElement (const GALGAS_controlRegisterGroupMap_2D_element & inValue,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterGroupMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_registerGroupKind & inArgument0,
                                                          const GALGAS_controlRegisterMap & inArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterGroupMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::add_operation (const GALGAS_controlRegisterGroupMap & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupMap result = *this ;
  cEnumerator_controlRegisterGroupMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mGroupKind (HERE), enumerator.current_mControlRegisterMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_registerGroupKind inArgument0,
                                                       GALGAS_controlRegisterMap inArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = nullptr ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' control register group has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_controlRegisterGroupMap_searchKey = "** internal error **" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_registerGroupKind & outArgument0,
                                                       GALGAS_controlRegisterMap & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_controlRegisterGroupMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    outArgument0 = p->mProperty_mGroupKind ;
    outArgument1 = p->mProperty_mControlRegisterMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind GALGAS_controlRegisterGroupMap::getter_mGroupKindForKey (const GALGAS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) attributes ;
  GALGAS_registerGroupKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    result = p->mProperty_mGroupKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap GALGAS_controlRegisterGroupMap::getter_mControlRegisterMapForKey (const GALGAS_string & inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) attributes ;
  GALGAS_controlRegisterMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    result = p->mProperty_mControlRegisterMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::setter_setMGroupKindForKey (GALGAS_registerGroupKind inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    p->mProperty_mGroupKind = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap::setter_setMControlRegisterMapForKey (GALGAS_controlRegisterMap inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    p->mProperty_mControlRegisterMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_controlRegisterGroupMap * GALGAS_controlRegisterGroupMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * result = (cMapElement_controlRegisterGroupMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterGroupMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_controlRegisterGroupMap::cEnumerator_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element cEnumerator_controlRegisterGroupMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return GALGAS_controlRegisterGroupMap_2D_element (p->mProperty_lkey, p->mProperty_mGroupKind, p->mProperty_mControlRegisterMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controlRegisterGroupMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupKind cEnumerator_controlRegisterGroupMap::current_mGroupKind (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return p->mProperty_mGroupKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap cEnumerator_controlRegisterGroupMap::current_mControlRegisterMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return p->mProperty_mControlRegisterMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap ("controlRegisterGroupMap",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  const GALGAS_controlRegisterGroupMap * p = (const GALGAS_controlRegisterGroupMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalConstantMap::cMapElement_globalConstantMap (const GALGAS_globalConstantMap_2D_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mValue (inValue.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalConstantMap::cMapElement_globalConstantMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_objectIR & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_globalConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_globalConstantMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_globalConstantMap (mProperty_lkey, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_globalConstantMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap::GALGAS_globalConstantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap::GALGAS_globalConstantMap (const GALGAS_globalConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap & GALGAS_globalConstantMap::operator = (const GALGAS_globalConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap GALGAS_globalConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap GALGAS_globalConstantMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element_3F_ GALGAS_globalConstantMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalConstantMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_globalConstantMap * p = (cMapElement_globalConstantMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_globalConstantMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_globalConstantMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mValue = p->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap GALGAS_globalConstantMap::class_func_mapWithMapToOverride (const GALGAS_globalConstantMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap GALGAS_globalConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_globalConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap::enterElement (const GALGAS_globalConstantMap_2D_element & inValue,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalConstantMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_objectIR & inArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap GALGAS_globalConstantMap::add_operation (const GALGAS_globalConstantMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_globalConstantMap result = *this ;
  cEnumerator_globalConstantMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_objectIR inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_globalConstantMap_searchKey = "there is no '%K' constant" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_objectIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_globalConstantMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    outArgument0 = p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_globalConstantMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) attributes ;
  GALGAS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap::setter_setMValueForKey (GALGAS_objectIR inAttributeValue,
                                                       GALGAS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalConstantMap * p = (cMapElement_globalConstantMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalConstantMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalConstantMap * GALGAS_globalConstantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_globalConstantMap * result = (cMapElement_globalConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalConstantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_globalConstantMap::cEnumerator_globalConstantMap (const GALGAS_globalConstantMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element cEnumerator_globalConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return GALGAS_globalConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_globalConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_globalConstantMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_globalConstantMap * p = (const cMapElement_globalConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalConstantMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalConstantMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap ("globalConstantMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap GALGAS_globalConstantMap::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap result ;
  const GALGAS_globalConstantMap * p = (const GALGAS_globalConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMap::cMapElement_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap_2D_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_type (inValue.mProperty_type),
mProperty_initialValue (inValue.mProperty_initialValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMap::cMapElement_globalSyncInstanceMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_omnibusType & in_type,
                                                                      const GALGAS_objectIR & in_initialValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type),
mProperty_initialValue (in_initialValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_globalSyncInstanceMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_globalSyncInstanceMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_globalSyncInstanceMap (mProperty_lkey, mProperty_type, mProperty_initialValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_globalSyncInstanceMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("type" ":") ;
  mProperty_type.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("initialValue" ":") ;
  mProperty_initialValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap::GALGAS_globalSyncInstanceMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap::GALGAS_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap & GALGAS_globalSyncInstanceMap::operator = (const GALGAS_globalSyncInstanceMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element_3F_ GALGAS_globalSyncInstanceMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_globalSyncInstanceMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_globalSyncInstanceMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_globalSyncInstanceMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_type = p->mProperty_type ;
      element.mProperty_initialValue = p->mProperty_initialValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::class_func_mapWithMapToOverride (const GALGAS_globalSyncInstanceMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_globalSyncInstanceMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::enterElement (const GALGAS_globalSyncInstanceMap_2D_element & inValue,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_omnibusType & inArgument0,
                                                        const GALGAS_objectIR & inArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::add_operation (const GALGAS_globalSyncInstanceMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_globalSyncInstanceMap result = *this ;
  cEnumerator_globalSyncInstanceMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_type (HERE), enumerator.current_initialValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_omnibusType inArgument0,
                                                     GALGAS_objectIR inArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = nullptr ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' global variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_globalSyncInstanceMap_searchKey = "there is no '%K' global variable" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_omnibusType & outArgument0,
                                                     GALGAS_objectIR & outArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_globalSyncInstanceMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_initialValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_globalSyncInstanceMap::getter_typeForKey (const GALGAS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) attributes ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    result = p->mProperty_type ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_globalSyncInstanceMap::getter_initialValueForKey (const GALGAS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) attributes ;
  GALGAS_objectIR result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    result = p->mProperty_initialValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::setter_setTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                         GALGAS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    p->mProperty_type = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap::setter_setInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    p->mProperty_initialValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_globalSyncInstanceMap * GALGAS_globalSyncInstanceMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * result = (cMapElement_globalSyncInstanceMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalSyncInstanceMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_globalSyncInstanceMap::cEnumerator_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element cEnumerator_globalSyncInstanceMap::current (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return GALGAS_globalSyncInstanceMap_2D_element (p->mProperty_lkey, p->mProperty_type, p->mProperty_initialValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_globalSyncInstanceMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_globalSyncInstanceMap::current_type (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return p->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR cEnumerator_globalSyncInstanceMap::current_initialValue (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return p->mProperty_initialValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalSyncInstanceMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap ("globalSyncInstanceMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  const GALGAS_globalSyncInstanceMap * p = (const GALGAS_globalSyncInstanceMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalSyncInstanceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticlistMap::cMapElement_staticlistMap (const GALGAS_staticlistMap_2D_element & inValue
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mStaticListPropertyList (inValue.mProperty_mStaticListPropertyList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticlistMap::cMapElement_staticlistMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_propertyList & in_mStaticListPropertyList
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mStaticListPropertyList (in_mStaticListPropertyList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_staticlistMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_staticlistMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_staticlistMap (mProperty_lkey, mProperty_mStaticListPropertyList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_staticlistMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStaticListPropertyList" ":") ;
  mProperty_mStaticListPropertyList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap::GALGAS_staticlistMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap::GALGAS_staticlistMap (const GALGAS_staticlistMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap & GALGAS_staticlistMap::operator = (const GALGAS_staticlistMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element_3F_ GALGAS_staticlistMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_staticlistMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_staticlistMap * p = (cMapElement_staticlistMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_staticlistMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_staticlistMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mStaticListPropertyList = p->mProperty_mStaticListPropertyList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::class_func_mapWithMapToOverride (const GALGAS_staticlistMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_staticlistMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap::enterElement (const GALGAS_staticlistMap_2D_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticlistMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticlistMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                const GALGAS_propertyList & inArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@staticlistMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::add_operation (const GALGAS_staticlistMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_staticlistMap result = *this ;
  cEnumerator_staticlistMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mStaticListPropertyList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap::setter_insertKey (GALGAS_lstring inKey,
                                             GALGAS_propertyList inArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * p = nullptr ;
  macroMyNew (p, cMapElement_staticlistMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "static list '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList GALGAS_staticlistMap::getter_mStaticListPropertyListForKey (const GALGAS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) attributes ;
  GALGAS_propertyList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    result = p->mProperty_mStaticListPropertyList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap::setter_setMStaticListPropertyListForKey (GALGAS_propertyList inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_staticlistMap * p = (cMapElement_staticlistMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_staticlistMap) ;
    p->mProperty_mStaticListPropertyList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_staticlistMap * GALGAS_staticlistMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_staticlistMap * result = (cMapElement_staticlistMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_staticlistMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_staticlistMap::cEnumerator_staticlistMap (const GALGAS_staticlistMap & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element cEnumerator_staticlistMap::current (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return GALGAS_staticlistMap_2D_element (p->mProperty_lkey, p->mProperty_mStaticListPropertyList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_staticlistMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList cEnumerator_staticlistMap::current_mStaticListPropertyList (LOCATION_ARGS) const {
  const cMapElement_staticlistMap * p = (const cMapElement_staticlistMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_staticlistMap) ;
  return p->mProperty_mStaticListPropertyList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticlistMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap ("staticlistMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticlistMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticlistMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap GALGAS_staticlistMap::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap result ;
  const GALGAS_staticlistMap * p = (const GALGAS_staticlistMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticlistMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_unifiedTypeMap_2D_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mElement (inValue.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_unifiedTypeMapElementClass & in_mElement
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mElement (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_unifiedTypeMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element_3F_ GALGAS_unifiedTypeMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_unifiedTypeMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_unifiedTypeMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mElement = p->mProperty_mElement ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::class_func_mapWithMapToOverride (const GALGAS_unifiedTypeMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::enterElement (const GALGAS_unifiedTypeMap_2D_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unifiedTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_unifiedTypeMapElementClass & inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unifiedTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::add_operation (const GALGAS_unifiedTypeMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap result = *this ;
  cEnumerator_unifiedTypeMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mElement (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::setter_internalInsertKey (GALGAS_lstring inKey,
                                                      GALGAS_unifiedTypeMapElementClass inArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMap::getter_mElementForKey (const GALGAS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMapElementClass result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mElement ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::setter_setMElementForKey (GALGAS_unifiedTypeMapElementClass inAttributeValue,
                                                      GALGAS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_mElement = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element cEnumerator_unifiedTypeMap::current (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return GALGAS_unifiedTypeMap_2D_element (p->mProperty_lkey, p->mProperty_mElement) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass cEnumerator_unifiedTypeMap::current_mElement (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstantMap::cMapElement_typeConstantMap (const GALGAS_typeConstantMap_2D_element & inValue
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mConstantMap (inValue.mProperty_mConstantMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstantMap::cMapElement_typeConstantMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_constantMap & in_mConstantMap
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstantMap (in_mConstantMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_typeConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typeConstantMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_typeConstantMap (mProperty_lkey, mProperty_mConstantMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_typeConstantMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantMap" ":") ;
  mProperty_mConstantMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap::GALGAS_typeConstantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap::GALGAS_typeConstantMap (const GALGAS_typeConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap & GALGAS_typeConstantMap::operator = (const GALGAS_typeConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_typeConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_typeConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element_3F_ GALGAS_typeConstantMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeConstantMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_typeConstantMap * p = (cMapElement_typeConstantMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_typeConstantMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_typeConstantMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mConstantMap = p->mProperty_mConstantMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::class_func_mapWithMapToOverride (const GALGAS_typeConstantMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_typeConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap::enterElement (const GALGAS_typeConstantMap_2D_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstantMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_constantMap & inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::add_operation (const GALGAS_typeConstantMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_typeConstantMap result = *this ;
  cEnumerator_typeConstantMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mConstantMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_constantMap inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstantMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typeConstantMap_searchKey = "there is no $%K type" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_constantMap & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_typeConstantMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    outArgument0 = p->mProperty_mConstantMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap GALGAS_typeConstantMap::getter_mConstantMapForKey (const GALGAS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) attributes ;
  GALGAS_constantMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    result = p->mProperty_mConstantMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap::setter_setMConstantMapForKey (GALGAS_constantMap inAttributeValue,
                                                           GALGAS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typeConstantMap * p = (cMapElement_typeConstantMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typeConstantMap) ;
    p->mProperty_mConstantMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstantMap * GALGAS_typeConstantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_typeConstantMap * result = (cMapElement_typeConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typeConstantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_typeConstantMap::cEnumerator_typeConstantMap (const GALGAS_typeConstantMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element cEnumerator_typeConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstantMap) ;
  return GALGAS_typeConstantMap_2D_element (p->mProperty_lkey, p->mProperty_mConstantMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap cEnumerator_typeConstantMap::current_mConstantMap (LOCATION_ARGS) const {
  const cMapElement_typeConstantMap * p = (const cMapElement_typeConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstantMap) ;
  return p->mProperty_mConstantMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeConstantMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap ("typeConstantMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap GALGAS_typeConstantMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeConstantMap result ;
  const GALGAS_typeConstantMap * p = (const GALGAS_typeConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstructorMap::cMapElement_typeConstructorMap (const GALGAS_typeConstructorMap_2D_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mConstructorMap (inValue.mProperty_mConstructorMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstructorMap::cMapElement_typeConstructorMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_constructorMap & in_mConstructorMap
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mConstructorMap (in_mConstructorMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_typeConstructorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typeConstructorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_typeConstructorMap (mProperty_lkey, mProperty_mConstructorMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_typeConstructorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstructorMap" ":") ;
  mProperty_mConstructorMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap::GALGAS_typeConstructorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap::GALGAS_typeConstructorMap (const GALGAS_typeConstructorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap & GALGAS_typeConstructorMap::operator = (const GALGAS_typeConstructorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_typeConstructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_typeConstructorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element_3F_ GALGAS_typeConstructorMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeConstructorMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_typeConstructorMap * p = (cMapElement_typeConstructorMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_typeConstructorMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_typeConstructorMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mConstructorMap = p->mProperty_mConstructorMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::class_func_mapWithMapToOverride (const GALGAS_typeConstructorMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeConstructorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_typeConstructorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap::enterElement (const GALGAS_typeConstructorMap_2D_element & inValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstructorMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_constructorMap & inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstructorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typeConstructorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::add_operation (const GALGAS_typeConstructorMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_typeConstructorMap result = *this ;
  cEnumerator_typeConstructorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mConstructorMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_constructorMap inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * p = nullptr ;
  macroMyNew (p, cMapElement_typeConstructorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typeConstructorMap_searchKey = "there is no $%K type" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_constructorMap & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_typeConstructorMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    outArgument0 = p->mProperty_mConstructorMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap GALGAS_typeConstructorMap::getter_mConstructorMapForKey (const GALGAS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) attributes ;
  GALGAS_constructorMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    result = p->mProperty_mConstructorMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap::setter_setMConstructorMapForKey (GALGAS_constructorMap inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typeConstructorMap * p = (cMapElement_typeConstructorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
    p->mProperty_mConstructorMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_typeConstructorMap * GALGAS_typeConstructorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_typeConstructorMap * result = (cMapElement_typeConstructorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typeConstructorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_typeConstructorMap::cEnumerator_typeConstructorMap (const GALGAS_typeConstructorMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element cEnumerator_typeConstructorMap::current (LOCATION_ARGS) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
  return GALGAS_typeConstructorMap_2D_element (p->mProperty_lkey, p->mProperty_mConstructorMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typeConstructorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap cEnumerator_typeConstructorMap::current_mConstructorMap (LOCATION_ARGS) const {
  const cMapElement_typeConstructorMap * p = (const cMapElement_typeConstructorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typeConstructorMap) ;
  return p->mProperty_mConstructorMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeConstructorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap ("typeConstructorMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeConstructorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeConstructorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeConstructorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap GALGAS_typeConstructorMap::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeConstructorMap result ;
  const GALGAS_typeConstructorMap * p = (const GALGAS_typeConstructorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeConstructorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertySetterMap::cMapElement_typePropertySetterMap (const GALGAS_typePropertySetterMap_2D_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSetterMap (inValue.mProperty_mSetterMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertySetterMap::cMapElement_typePropertySetterMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_propertySetterMap & in_mSetterMap
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSetterMap (in_mSetterMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_typePropertySetterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typePropertySetterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_typePropertySetterMap (mProperty_lkey, mProperty_mSetterMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_typePropertySetterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSetterMap" ":") ;
  mProperty_mSetterMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap::GALGAS_typePropertySetterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap::GALGAS_typePropertySetterMap (const GALGAS_typePropertySetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap & GALGAS_typePropertySetterMap::operator = (const GALGAS_typePropertySetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_typePropertySetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element_3F_ GALGAS_typePropertySetterMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typePropertySetterMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_typePropertySetterMap * p = (cMapElement_typePropertySetterMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_typePropertySetterMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_typePropertySetterMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSetterMap = p->mProperty_mSetterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::class_func_mapWithMapToOverride (const GALGAS_typePropertySetterMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_typePropertySetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::enterElement (const GALGAS_typePropertySetterMap_2D_element & inValue,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertySetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_propertySetterMap & inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertySetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::add_operation (const GALGAS_typePropertySetterMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typePropertySetterMap result = *this ;
  cEnumerator_typePropertySetterMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSetterMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_propertySetterMap inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typePropertySetterMap_searchKey = "there is no $%K type" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_propertySetterMap & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_typePropertySetterMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    outArgument0 = p->mProperty_mSetterMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                                           GALGAS_propertySetterMap inArgument0
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertySetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap GALGAS_typePropertySetterMap::getter_mSetterMapForKey (const GALGAS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) attributes ;
  GALGAS_propertySetterMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    result = p->mProperty_mSetterMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap::setter_setMSetterMapForKey (GALGAS_propertySetterMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typePropertySetterMap * p = (cMapElement_typePropertySetterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
    p->mProperty_mSetterMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertySetterMap * GALGAS_typePropertySetterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * result = (cMapElement_typePropertySetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typePropertySetterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_typePropertySetterMap::cEnumerator_typePropertySetterMap (const GALGAS_typePropertySetterMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element cEnumerator_typePropertySetterMap::current (LOCATION_ARGS) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
  return GALGAS_typePropertySetterMap_2D_element (p->mProperty_lkey, p->mProperty_mSetterMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typePropertySetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap cEnumerator_typePropertySetterMap::current_mSetterMap (LOCATION_ARGS) const {
  const cMapElement_typePropertySetterMap * p = (const cMapElement_typePropertySetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertySetterMap) ;
  return p->mProperty_mSetterMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typePropertySetterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap ("typePropertySetterMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePropertySetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePropertySetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePropertySetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap GALGAS_typePropertySetterMap::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap result ;
  const GALGAS_typePropertySetterMap * p = (const GALGAS_typePropertySetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typePropertySetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertyGetterMap::cMapElement_typePropertyGetterMap (const GALGAS_typePropertyGetterMap_2D_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mGetterMap (inValue.mProperty_mGetterMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertyGetterMap::cMapElement_typePropertyGetterMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_propertyGetterMap & in_mGetterMap
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mGetterMap (in_mGetterMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_typePropertyGetterMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_typePropertyGetterMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_typePropertyGetterMap (mProperty_lkey, mProperty_mGetterMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_typePropertyGetterMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGetterMap" ":") ;
  mProperty_mGetterMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap::GALGAS_typePropertyGetterMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap::GALGAS_typePropertyGetterMap (const GALGAS_typePropertyGetterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap & GALGAS_typePropertyGetterMap::operator = (const GALGAS_typePropertyGetterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element_3F_ GALGAS_typePropertyGetterMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typePropertyGetterMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_typePropertyGetterMap * p = (cMapElement_typePropertyGetterMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_typePropertyGetterMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_typePropertyGetterMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mGetterMap = p->mProperty_mGetterMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::class_func_mapWithMapToOverride (const GALGAS_typePropertyGetterMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_typePropertyGetterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::enterElement (const GALGAS_typePropertyGetterMap_2D_element & inValue,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertyGetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_propertyGetterMap & inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@typePropertyGetterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::add_operation (const GALGAS_typePropertyGetterMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typePropertyGetterMap result = *this ;
  cEnumerator_typePropertyGetterMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mGetterMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_propertyGetterMap inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the $%K type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_typePropertyGetterMap_searchKey = "there is no $%K type" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_propertyGetterMap & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_typePropertyGetterMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    outArgument0 = p->mProperty_mGetterMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::setter_insertOrReplace (GALGAS_lstring inKey,
                                                           GALGAS_propertyGetterMap inArgument0
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * p = nullptr ;
  macroMyNew (p, cMapElement_typePropertyGetterMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  performInsertOrReplace (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap GALGAS_typePropertyGetterMap::getter_mGetterMapForKey (const GALGAS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) attributes ;
  GALGAS_propertyGetterMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    result = p->mProperty_mGetterMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap::setter_setMGetterMapForKey (GALGAS_propertyGetterMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_typePropertyGetterMap * p = (cMapElement_typePropertyGetterMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
    p->mProperty_mGetterMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_typePropertyGetterMap * GALGAS_typePropertyGetterMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * result = (cMapElement_typePropertyGetterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_typePropertyGetterMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_typePropertyGetterMap::cEnumerator_typePropertyGetterMap (const GALGAS_typePropertyGetterMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element cEnumerator_typePropertyGetterMap::current (LOCATION_ARGS) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
  return GALGAS_typePropertyGetterMap_2D_element (p->mProperty_lkey, p->mProperty_mGetterMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_typePropertyGetterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap cEnumerator_typePropertyGetterMap::current_mGetterMap (LOCATION_ARGS) const {
  const cMapElement_typePropertyGetterMap * p = (const cMapElement_typePropertyGetterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_typePropertyGetterMap) ;
  return p->mProperty_mGetterMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typePropertyGetterMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap ("typePropertyGetterMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePropertyGetterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePropertyGetterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePropertyGetterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap GALGAS_typePropertyGetterMap::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap result ;
  const GALGAS_typePropertyGetterMap * p = (const GALGAS_typePropertyGetterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typePropertyGetterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_availableInterruptMap::cMapElement_availableInterruptMap (const GALGAS_availableInterruptMap_2D_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mInterruptionPanicCode (inValue.mProperty_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_availableInterruptMap::cMapElement_availableInterruptMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInterruptionPanicCode (in_mInterruptionPanicCode) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_availableInterruptMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_availableInterruptMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_availableInterruptMap (mProperty_lkey, mProperty_mInterruptionPanicCode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_availableInterruptMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInterruptionPanicCode" ":") ;
  mProperty_mInterruptionPanicCode.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap::GALGAS_availableInterruptMap (const GALGAS_availableInterruptMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap & GALGAS_availableInterruptMap::operator = (const GALGAS_availableInterruptMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element_3F_ GALGAS_availableInterruptMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_availableInterruptMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_availableInterruptMap * p = (cMapElement_availableInterruptMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_availableInterruptMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_availableInterruptMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mInterruptionPanicCode = p->mProperty_mInterruptionPanicCode ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::class_func_mapWithMapToOverride (const GALGAS_availableInterruptMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_availableInterruptMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap::enterElement (const GALGAS_availableInterruptMap_2D_element & inValue,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = nullptr ;
  macroMyNew (p, cMapElement_availableInterruptMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@availableInterruptMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_interruptionPanicCode & inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = nullptr ;
  macroMyNew (p, cMapElement_availableInterruptMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@availableInterruptMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::add_operation (const GALGAS_availableInterruptMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_availableInterruptMap result = *this ;
  cEnumerator_availableInterruptMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInterruptionPanicCode (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_interruptionPanicCode inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * p = nullptr ;
  macroMyNew (p, cMapElement_availableInterruptMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "interrupt '%K' is already defined" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_availableInterruptMap_searchKey = "interrupt '%K' is not defined" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_interruptionPanicCode & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_availableInterruptMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    outArgument0 = p->mProperty_mInterruptionPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode GALGAS_availableInterruptMap::getter_mInterruptionPanicCodeForKey (const GALGAS_string & inKey,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) attributes ;
  GALGAS_interruptionPanicCode result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    result = p->mProperty_mInterruptionPanicCode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap::setter_setMInterruptionPanicCodeForKey (GALGAS_interruptionPanicCode inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_availableInterruptMap * p = (cMapElement_availableInterruptMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
    p->mProperty_mInterruptionPanicCode = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_availableInterruptMap * GALGAS_availableInterruptMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_availableInterruptMap * result = (cMapElement_availableInterruptMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_availableInterruptMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_availableInterruptMap::cEnumerator_availableInterruptMap (const GALGAS_availableInterruptMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element cEnumerator_availableInterruptMap::current (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return GALGAS_availableInterruptMap_2D_element (p->mProperty_lkey, p->mProperty_mInterruptionPanicCode) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_availableInterruptMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionPanicCode cEnumerator_availableInterruptMap::current_mInterruptionPanicCode (LOCATION_ARGS) const {
  const cMapElement_availableInterruptMap * p = (const cMapElement_availableInterruptMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_availableInterruptMap) ;
  return p->mProperty_mInterruptionPanicCode ;
}

//--------------------------------------------------------------------------------------------------
//
//     @availableInterruptMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap ("availableInterruptMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_availableInterruptMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_availableInterruptMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap GALGAS_availableInterruptMap::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap result ;
  const GALGAS_availableInterruptMap * p = (const GALGAS_availableInterruptMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_availableInterruptMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_infixOperatorMap::cMapElement_infixOperatorMap (const GALGAS_infixOperatorMap_2D_element & inValue
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mResultType (inValue.mProperty_mResultType),
mProperty_mOperatorUsage (inValue.mProperty_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_infixOperatorMap::cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_omnibusType & in_mResultType,
                                                            const GALGAS_omnibusInfixOperatorUsage & in_mOperatorUsage
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mResultType (in_mResultType),
mProperty_mOperatorUsage (in_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_infixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_infixOperatorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_infixOperatorMap (mProperty_lkey, mProperty_mResultType, mProperty_mOperatorUsage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_infixOperatorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResultType" ":") ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOperatorUsage" ":") ;
  mProperty_mOperatorUsage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (const GALGAS_infixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap & GALGAS_infixOperatorMap::operator = (const GALGAS_infixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element_3F_ GALGAS_infixOperatorMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_infixOperatorMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_infixOperatorMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_infixOperatorMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mResultType = p->mProperty_mResultType ;
      element.mProperty_mOperatorUsage = p->mProperty_mOperatorUsage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::class_func_mapWithMapToOverride (const GALGAS_infixOperatorMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_infixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::enterElement (const GALGAS_infixOperatorMap_2D_element & inValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_infixOperatorMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@infixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_omnibusType & inArgument0,
                                                   const GALGAS_omnibusInfixOperatorUsage & inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@infixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::add_operation (const GALGAS_infixOperatorMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_infixOperatorMap result = *this ;
  cEnumerator_infixOperatorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mResultType (HERE), enumerator.current_mOperatorUsage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_omnibusType inArgument0,
                                                GALGAS_omnibusInfixOperatorUsage inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' infix operator is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_infixOperatorMap_searchKey = "there is no '%K' infix operator" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_omnibusType & outArgument0,
                                                GALGAS_omnibusInfixOperatorUsage & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_infixOperatorMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    outArgument0 = p->mProperty_mResultType ;
    outArgument1 = p->mProperty_mOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_infixOperatorMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage GALGAS_infixOperatorMap::getter_mOperatorUsageForKey (const GALGAS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_omnibusInfixOperatorUsage result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mProperty_mOperatorUsage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::setter_setMResultTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                           GALGAS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap::setter_setMOperatorUsageForKey (GALGAS_omnibusInfixOperatorUsage inAttributeValue,
                                                              GALGAS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mProperty_mOperatorUsage = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_infixOperatorMap * GALGAS_infixOperatorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * result = (cMapElement_infixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_infixOperatorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_infixOperatorMap::cEnumerator_infixOperatorMap (const GALGAS_infixOperatorMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element cEnumerator_infixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return GALGAS_infixOperatorMap_2D_element (p->mProperty_lkey, p->mProperty_mResultType, p->mProperty_mOperatorUsage) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_infixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_infixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusInfixOperatorUsage cEnumerator_infixOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mProperty_mOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------
//
//     @infixOperatorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap ("infixOperatorMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_infixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_infixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  const GALGAS_infixOperatorMap * p = (const GALGAS_infixOperatorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_infixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GALGAS_prefixOperatorMap_2D_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mReceiverType (inValue.mProperty_mReceiverType),
mProperty_mResultType (inValue.mProperty_mResultType),
mProperty_mOperator (inValue.mProperty_mOperator) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_omnibusType & in_mReceiverType,
                                                              const GALGAS_omnibusType & in_mResultType,
                                                              const GALGAS_prefixOperatorUsage & in_mOperator
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mResultType (in_mResultType),
mProperty_mOperator (in_mOperator) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_prefixOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_prefixOperatorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_prefixOperatorMap (mProperty_lkey, mProperty_mReceiverType, mProperty_mResultType, mProperty_mOperator COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_prefixOperatorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReceiverType" ":") ;
  mProperty_mReceiverType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResultType" ":") ;
  mProperty_mResultType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOperator" ":") ;
  mProperty_mOperator.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (const GALGAS_prefixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap & GALGAS_prefixOperatorMap::operator = (const GALGAS_prefixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element_3F_ GALGAS_prefixOperatorMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_prefixOperatorMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_prefixOperatorMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_prefixOperatorMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mReceiverType = p->mProperty_mReceiverType ;
      element.mProperty_mResultType = p->mProperty_mResultType ;
      element.mProperty_mOperator = p->mProperty_mOperator ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::class_func_mapWithMapToOverride (const GALGAS_prefixOperatorMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::enterElement (const GALGAS_prefixOperatorMap_2D_element & inValue,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@prefixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_omnibusType & inArgument0,
                                                    const GALGAS_omnibusType & inArgument1,
                                                    const GALGAS_prefixOperatorUsage & inArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@prefixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::add_operation (const GALGAS_prefixOperatorMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorMap result = *this ;
  cEnumerator_prefixOperatorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mReceiverType (HERE), enumerator.current_mResultType (HERE), enumerator.current_mOperator (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_omnibusType inArgument0,
                                                 GALGAS_omnibusType inArgument1,
                                                 GALGAS_prefixOperatorUsage inArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' infix operator is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_prefixOperatorMap_searchKey = "there is no '%K' infix operator" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_omnibusType & outArgument0,
                                                 GALGAS_omnibusType & outArgument1,
                                                 GALGAS_prefixOperatorUsage & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_prefixOperatorMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    outArgument0 = p->mProperty_mReceiverType ;
    outArgument1 = p->mProperty_mResultType ;
    outArgument2 = p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_prefixOperatorMap::getter_mReceiverTypeForKey (const GALGAS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mProperty_mReceiverType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_prefixOperatorMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GALGAS_omnibusType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage GALGAS_prefixOperatorMap::getter_mOperatorForKey (const GALGAS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GALGAS_prefixOperatorUsage result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::setter_setMReceiverTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                              GALGAS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mProperty_mReceiverType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::setter_setMResultTypeForKey (GALGAS_omnibusType inAttributeValue,
                                                            GALGAS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap::setter_setMOperatorForKey (GALGAS_prefixOperatorUsage inAttributeValue,
                                                          GALGAS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mProperty_mOperator = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_prefixOperatorMap * GALGAS_prefixOperatorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * result = (cMapElement_prefixOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_prefixOperatorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_prefixOperatorMap::cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element cEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return GALGAS_prefixOperatorMap_2D_element (p->mProperty_lkey, p->mProperty_mReceiverType, p->mProperty_mResultType, p->mProperty_mOperator) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_prefixOperatorMap::current_mReceiverType (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mProperty_mReceiverType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType cEnumerator_prefixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mProperty_mResultType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorUsage cEnumerator_prefixOperatorMap::current_mOperator (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mProperty_mOperator ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap ("prefixOperatorMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  const GALGAS_prefixOperatorMap * p = (const GALGAS_prefixOperatorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentOperatorMap::cMapElement_assignmentOperatorMap (const GALGAS_assignmentOperatorMap_2D_element & inValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mOperatorUsage (inValue.mProperty_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentOperatorMap::cMapElement_assignmentOperatorMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOperatorUsage (in_mOperatorUsage) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_assignmentOperatorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_assignmentOperatorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_assignmentOperatorMap (mProperty_lkey, mProperty_mOperatorUsage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_assignmentOperatorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOperatorUsage" ":") ;
  mProperty_mOperatorUsage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap::GALGAS_assignmentOperatorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap::GALGAS_assignmentOperatorMap (const GALGAS_assignmentOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap & GALGAS_assignmentOperatorMap::operator = (const GALGAS_assignmentOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element_3F_ GALGAS_assignmentOperatorMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_assignmentOperatorMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_assignmentOperatorMap * p = (cMapElement_assignmentOperatorMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_assignmentOperatorMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_assignmentOperatorMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mOperatorUsage = p->mProperty_mOperatorUsage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::class_func_mapWithMapToOverride (const GALGAS_assignmentOperatorMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap::enterElement (const GALGAS_assignmentOperatorMap_2D_element & inValue,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentOperatorMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_abstractAssignmentOperatorUsage & inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentOperatorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@assignmentOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::add_operation (const GALGAS_assignmentOperatorMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentOperatorMap result = *this ;
  cEnumerator_assignmentOperatorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mOperatorUsage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_abstractAssignmentOperatorUsage inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * p = nullptr ;
  macroMyNew (p, cMapElement_assignmentOperatorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' assignment is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_assignmentOperatorMap_searchKey = "there is no '%K' assignment" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_abstractAssignmentOperatorUsage & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_assignmentOperatorMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    outArgument0 = p->mProperty_mOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage GALGAS_assignmentOperatorMap::getter_mOperatorUsageForKey (const GALGAS_string & inKey,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) attributes ;
  GALGAS_abstractAssignmentOperatorUsage result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    result = p->mProperty_mOperatorUsage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap::setter_setMOperatorUsageForKey (GALGAS_abstractAssignmentOperatorUsage inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_assignmentOperatorMap * p = (cMapElement_assignmentOperatorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
    p->mProperty_mOperatorUsage = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_assignmentOperatorMap * GALGAS_assignmentOperatorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_assignmentOperatorMap * result = (cMapElement_assignmentOperatorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_assignmentOperatorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_assignmentOperatorMap::cEnumerator_assignmentOperatorMap (const GALGAS_assignmentOperatorMap & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element cEnumerator_assignmentOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
  return GALGAS_assignmentOperatorMap_2D_element (p->mProperty_lkey, p->mProperty_mOperatorUsage) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_assignmentOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractAssignmentOperatorUsage cEnumerator_assignmentOperatorMap::current_mOperatorUsage (LOCATION_ARGS) const {
  const cMapElement_assignmentOperatorMap * p = (const cMapElement_assignmentOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_assignmentOperatorMap) ;
  return p->mProperty_mOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentOperatorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap ("assignmentOperatorMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentOperatorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap GALGAS_assignmentOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap result ;
  const GALGAS_assignmentOperatorMap * p = (const GALGAS_assignmentOperatorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

