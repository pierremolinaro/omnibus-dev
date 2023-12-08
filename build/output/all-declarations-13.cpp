#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedSyncInstance semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_decoratedSyncInstance::method_semanticAnalysis (const GALGAS_semanticContext /* constinArgument_inContext */,
                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_decoratedSyncInstance temp_0 = this ;
  const GALGAS_decoratedSyncInstance temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_0.readProperty_mSyncInstanceName (), temp_1.readProperty_mExpressionGeneratedCode (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 145)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_implementedDriverAST temp_0 = this ;
  const GALGAS_implementedDriverAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDriverName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 165)) ;
  }
  {
  const GALGAS_implementedDriverAST temp_2 = this ;
  const GALGAS_implementedDriverAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDriverName (), function_omnibusTypeSpecificNameForDriver (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) ;
  }
  const GALGAS_implementedDriverAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_6186 (temp_4.readProperty_mDriverDependanceList (), kENUMERATION_UP) ;
  while (enumerator_6186.hasCurrentObject ()) {
    {
    const GALGAS_implementedDriverAST temp_5 = this ;
    ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDriverName (), enumerator_6186.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 168)) ;
    }
    enumerator_6186.gotoNextObject () ;
  }
  {
  const GALGAS_implementedDriverAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mDriverName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_implementedDriverAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_implementedDriverAST temp_0 = this ;
  result_outRepresentation = GALGAS_string ("driver ").add_operation (temp_0.readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 176)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_implementedDriverAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_implementedDriverAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mDriverName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'omnibusTypeSpecificNameForDriver'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusTypeSpecificNameForDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 190)), constinArgument_inDriverName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 190)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusTypeSpecificNameForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusTypeSpecificNameForDriver (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusTypeSpecificNameForDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusTypeSpecificNameForDriver ("omnibusTypeSpecificNameForDriver",
                                                                                  functionWithGenericHeader_omnibusTypeSpecificNameForDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_omnibusTypeSpecificNameForDriver) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmDriverNameFromName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmDriverNameFromName (const GALGAS_lstring & constinArgument_inDriverName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver$").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)), constinArgument_inDriverName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmDriverNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmDriverNameFromName (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmDriverNameFromName (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmDriverNameFromName ("llvmDriverNameFromName",
                                                                        functionWithGenericHeader_llvmDriverNameFromName,
                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                        1,
                                                                        functionArgs_llvmDriverNameFromName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmBootRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("boot.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)), constinArgument_inDriverName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmBootRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmBootRoutineNameFromDriver (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmBootRoutineNameFromDriver (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmBootRoutineNameFromDriver ("llvmBootRoutineNameFromDriver",
                                                                               functionWithGenericHeader_llvmBootRoutineNameFromDriver,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               1,
                                                                               functionArgs_llvmBootRoutineNameFromDriver) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmStartupRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("startup.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)), constinArgument_inDriverName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmStartupRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmStartupRoutineNameFromDriver (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmStartupRoutineNameFromDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmStartupRoutineNameFromDriver ("llvmStartupRoutineNameFromDriver",
                                                                                  functionWithGenericHeader_llvmStartupRoutineNameFromDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmStartupRoutineNameFromDriver) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers (GALGAS_ast & ioArgument_ioAST,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist var_driverWithNoDependenceList_9347 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 233)) ;
  cEnumerator_driverDeclarationListAST enumerator_9386 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_9386.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_9386.current_mDriver (HERE).readProperty_mDriverDependanceList ().getter_count (SOURCE_FILE ("declaration-driver.galgas", 235)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_driverWithNoDependenceList_9347.addAssign_operation (enumerator_9386.current_mDriver (HERE).readProperty_mDriverName ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 236)) ;
      }
    }
    enumerator_9386.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_driverWithNoDependenceList_9347.getter_count (SOURCE_FILE ("declaration-driver.galgas", 239)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_9634 (var_driverWithNoDependenceList_9347, kENUMERATION_UP) ;
      while (enumerator_9634.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9634.current_mValue (HERE).readProperty_location (), GALGAS_string ("almost one driver can have no dependence"), fixItArray2  COMMA_SOURCE_FILE ("declaration-driver.galgas", 241)) ;
        enumerator_9634.gotoNextObject () ;
      }
    }
  }
  GALGAS_instanciedDriverMap var_instanciedDriverMap_9821 = GALGAS_instanciedDriverMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 245)) ;
  cEnumerator_driverInstanciationListAST enumerator_9864 (ioArgument_ioAST.readProperty_mRequiredDriverListAST (), kENUMERATION_UP) ;
  while (enumerator_9864.hasCurrentObject ()) {
    GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_9946 = GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 247)) ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_10001 (enumerator_9864.current_mDriverInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_10001.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_9946.setter_insertKey (enumerator_10001.current_mSelector (HERE), enumerator_10001.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 249)) ;
      }
      enumerator_10001.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_9821.setter_insertKey (enumerator_9864.current_mDriverName (HERE), var_driverInstanciationArgumentMap_9946, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 251)) ;
    }
    enumerator_9864.gotoNextObject () ;
  }
  GALGAS_stringset var_validDriverNames_10285 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 254)) ;
  cEnumerator_driverDeclarationListAST enumerator_10369 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_10369.hasCurrentObject ()) {
    var_validDriverNames_10285.addAssign_operation (enumerator_10369.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 256)) ;
    GALGAS_bool var_driverIsInstancied_10484 = var_instanciedDriverMap_9821.getter_hasKey (enumerator_10369.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-driver.galgas", 257)) ;
    GALGAS_structurePropertyListAST var_driverPropertyListAST_10648 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 259)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_driverIsInstancied_10484.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_10773 ;
        var_instanciedDriverMap_9821.method_searchKey (enumerator_10369.current_mDriver (HERE).readProperty_mDriverName (), var_driverInstanciationArgumentMap_10773, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 261)) ;
        GALGAS_stringset var_validArgumentSet_10886 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 263)) ;
        cEnumerator_structurePropertyListAST enumerator_10981 (enumerator_10369.current_mDriver (HERE).readProperty_mPropertyListAST (), kENUMERATION_UP) ;
        while (enumerator_10981.hasCurrentObject ()) {
          GALGAS_propertyKindAST var_driverPropertyKind_11059 ;
          switch (enumerator_10981.current_mPropertyKind (HERE).enumValue ()) {
          case GALGAS_propertyKindAST::kNotBuilt:
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
            {
              GALGAS_expressionAST var_initExpression_11221 ;
              var_driverInstanciationArgumentMap_10773.method_searchKey (enumerator_10981.current_mPropertyName (HERE), var_initExpression_11221, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 268)) ;
              var_validArgumentSet_10886.addAssign_operation (enumerator_10981.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 269)) ;
              var_driverPropertyKind_11059 = GALGAS_propertyKindAST::constructor_initializedStoredProperty (var_initExpression_11221  COMMA_SOURCE_FILE ("declaration-driver.galgas", 270)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
            {
              GALGAS_expressionAST var_initExpression_11495 ;
              var_driverInstanciationArgumentMap_10773.method_searchKey (enumerator_10981.current_mPropertyName (HERE), var_initExpression_11495, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 272)) ;
              var_validArgumentSet_10886.addAssign_operation (enumerator_10981.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 273)) ;
              var_driverPropertyKind_11059 = GALGAS_propertyKindAST::constructor_initializedConstantProperty (var_initExpression_11495  COMMA_SOURCE_FILE ("declaration-driver.galgas", 274)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
            {
              var_driverPropertyKind_11059 = enumerator_10981.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
            {
              var_driverPropertyKind_11059 = enumerator_10981.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
            {
              var_driverPropertyKind_11059 = enumerator_10981.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
            {
              var_driverPropertyKind_11059 = enumerator_10981.current_mPropertyKind (HERE) ;
            }
            break ;
          }
          var_driverPropertyListAST_10648.addAssign_operation (enumerator_10981.current_mPropertyName (HERE), enumerator_10981.current_mPropertyAttributeList (HERE), GALGAS_propertyVisibility::constructor_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 287)), enumerator_10981.current_mPropertyTypeName (HERE), var_driverPropertyKind_11059  COMMA_SOURCE_FILE ("declaration-driver.galgas", 284)) ;
          enumerator_10981.gotoNextObject () ;
        }
        cEnumerator_stringset enumerator_12285 (var_driverInstanciationArgumentMap_10773.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 292)).substract_operation (var_validArgumentSet_10886, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 292)), kENUMERATION_UP) ;
        while (enumerator_12285.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_10773.getter_locationForKey (enumerator_12285.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)), GALGAS_string ("invalid selector"), fixItArray4  COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)) ;
          enumerator_12285.gotoNextObject () ;
        }
      }
    }
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (function_omnibusTypeSpecificNameForDriver (enumerator_10369.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 298)), function_omnibusTypeSpecificNameForDriver (enumerator_10369.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 299)), function_llvmDriverNameFromName (enumerator_10369.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 300)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 301)), GALGAS_bool (false), var_driverPropertyListAST_10648, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_implementedDriverAST::constructor_new (enumerator_10369.current_mDriver (HERE).readProperty_mDriverName (), enumerator_10369.current_mDriver (HERE).readProperty_mDriverDependanceList (), var_driverIsInstancied_10484, enumerator_10369.current_mDriver (HERE).readProperty_mBootLocation (), enumerator_10369.current_mDriver (HERE).readProperty_mBootInstructionList (), enumerator_10369.current_mDriver (HERE).readProperty_mBootEndLocation (), enumerator_10369.current_mDriver (HERE).readProperty_mStartupLocation (), enumerator_10369.current_mDriver (HERE).readProperty_mStartupInstructionList (), enumerator_10369.current_mDriver (HERE).readProperty_mStartupEndLocation ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306)) ;
    enumerator_10369.gotoNextObject () ;
  }
  ioArgument_ioAST.setter_setMDriverDeclarationListAST (GALGAS_driverDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 318)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 318)) ;
  cEnumerator_stringset enumerator_13404 (var_instanciedDriverMap_9821.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 320)).substract_operation (var_validDriverNames_10285, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 320)), kENUMERATION_UP) ;
  while (enumerator_13404.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_9821.getter_locationForKey (enumerator_13404.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)), GALGAS_string ("undefined driver"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)) ;
    enumerator_13404.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                       GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                       GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                       GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                       GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                       GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                       GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                       GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_driverType_14620 ;
  const GALGAS_implementedDriverAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)), var_driverType_14620, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 339)) ;
  {
  const GALGAS_implementedDriverAST temp_1 = this ;
  const GALGAS_implementedDriverAST temp_2 = this ;
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_1.readProperty_mDriverName (), temp_2.readProperty_mIsInstancied (), var_driverType_14620, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 343)) ;
  }
  const GALGAS_implementedDriverAST temp_3 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedRequiredDriver::constructor_new (temp_3.readProperty_mDriverName ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 345))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 345)) ;
  const GALGAS_implementedDriverAST temp_4 = this ;
  const GALGAS_implementedDriverAST temp_5 = this ;
  const GALGAS_implementedDriverAST temp_6 = this ;
  const GALGAS_implementedDriverAST temp_7 = this ;
  const GALGAS_implementedDriverAST temp_8 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_4.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 348)), GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-driver.galgas", 349)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 351)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 354)), function_llvmBootRoutineNameFromDriver (temp_5.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 355)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 356)), GALGAS_bool (true), temp_6.readProperty_mBootInstructionList (), temp_7.readProperty_mBootEndLocation (), GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), temp_8.readProperty_mBootLocation (), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 360))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 347)) ;
  const GALGAS_implementedDriverAST temp_9 = this ;
  const GALGAS_implementedDriverAST temp_10 = this ;
  const GALGAS_implementedDriverAST temp_11 = this ;
  const GALGAS_implementedDriverAST temp_12 = this ;
  const GALGAS_implementedDriverAST temp_13 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_9.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 363)), GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-driver.galgas", 364)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 366)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 369)), function_llvmStartupRoutineNameFromDriver (temp_10.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 370)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 371)), GALGAS_bool (true), temp_11.readProperty_mStartupInstructionList (), temp_12.readProperty_mStartupEndLocation (), GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), temp_13.readProperty_mStartupLocation (), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 375))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 362)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedRequiredDriver semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_decoratedRequiredDriver::method_semanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_driverType_16956 ;
  const GALGAS_decoratedRequiredDriver temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 394)), var_driverType_16956, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 393)) ;
  const GALGAS_decoratedRequiredDriver temp_1 = this ;
  GALGAS_lstring var_typeName_16977 = GALGAS_lstring::constructor_new (var_driverType_16956.readProperty_omnibusTypeDescriptionName (), temp_1.readProperty_mDriverName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 397)) ;
  GALGAS_constructorMap var_constructorMap_17118 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_16977, var_constructorMap_17118, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 398)) ;
  GALGAS_constructorValue var_constructorValue_17211 ;
  const GALGAS_decoratedRequiredDriver temp_2 = this ;
  GALGAS_constructorSignature joker_17203 ; // Joker input parameter
  var_constructorMap_17118.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), temp_2.readProperty_mDriverName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)), joker_17203, var_constructorValue_17211, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_17282 ;
  var_constructorValue_17211.method_structure (var_sortedOperandList_17282, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 400)) ;
  GALGAS_operandIRList var_initialValueList_17322 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 401)) ;
  cEnumerator_sortedOperandIRList enumerator_17364 (var_sortedOperandList_17282, kENUMERATION_UP) ;
  while (enumerator_17364.hasCurrentObject ()) {
    var_initialValueList_17322.addAssign_operation (enumerator_17364.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 403)) ;
    enumerator_17364.gotoNextObject () ;
  }
  const GALGAS_decoratedRequiredDriver temp_3 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (temp_3.readProperty_mDriverName (), var_driverType_16956, var_initialValueList_17322  COMMA_SOURCE_FILE ("declaration-driver.galgas", 405)) ;
  const GALGAS_decoratedRequiredDriver temp_4 = this ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (temp_4.readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 410)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterExtension'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterExtension (GALGAS_extendStaticArrayDeclarationDictAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticListAST temp_1 = this ;
    test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (temp_1.readProperty_mStaticListName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_staticListValueListAST var_elements_6415 ;
      {
      const GALGAS_staticListAST temp_2 = this ;
      ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (temp_2.readProperty_mStaticListName ().readProperty_string (), var_elements_6415, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 163)) ;
      }
      const GALGAS_staticListAST temp_3 = this ;
      const GALGAS_staticListAST temp_4 = this ;
      const GALGAS_staticListAST temp_5 = this ;
      outArgument_outNewDeclaration = GALGAS_staticListAST::constructor_new (temp_3.readProperty_mStaticListName (), temp_4.readProperty_mPropertyList (), temp_5.readProperty_mValueList ().add_operation (var_elements_6415, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 167))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 164)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticListAST temp_6 = this ;
    outArgument_outNewDeclaration = temp_6 ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_staticListAST temp_0 = this ;
  const GALGAS_staticListAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mStaticListName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 180)) ;
  }
  {
  const GALGAS_staticListAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mStaticListName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 181)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 181)) ;
  }
  const GALGAS_staticListAST temp_3 = this ;
  cEnumerator_staticListPropertyListAST enumerator_7267 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7267.hasCurrentObject ()) {
    switch (enumerator_7267.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_7427 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_7267.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7343_propertyTypeName = extractPtr_7427->mAssociatedValue0 ;
        {
        const GALGAS_staticListAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mStaticListName (), extractedValue_7343_propertyTypeName COMMA_SOURCE_FILE ("declaration-static-list.galgas", 186)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7741 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_7267.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_7480_formalArgs = extractPtr_7741->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_7500_returnType = extractPtr_7741->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentListAST enumerator_7552 (extractedValue_7480_formalArgs, kENUMERATION_UP) ;
        while (enumerator_7552.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7552.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 189)) ;
          }
          enumerator_7552.gotoNextObject () ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsNotEqual, extractedValue_7500_returnType.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            const GALGAS_staticListAST temp_6 = this ;
            ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mStaticListName (), extractedValue_7500_returnType COMMA_SOURCE_FILE ("declaration-static-list.galgas", 192)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_7267.gotoNextObject () ;
  }
  const GALGAS_staticListAST temp_7 = this ;
  cEnumerator_staticListValueListAST enumerator_7833 (temp_7.readProperty_mValueList (), kENUMERATION_UP) ;
  while (enumerator_7833.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_7875 (enumerator_7833.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_7875.hasCurrentObject ()) {
      switch (enumerator_7875.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_8037 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7875.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_7949_exp = extractPtr_8037->mAssociatedValue0 ;
          const GALGAS_staticListAST temp_8 = this ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_7949_exp.ptr (), temp_8.readProperty_mStaticListName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 201)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_8229 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7875.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_8092_formalArgs = extractPtr_8229->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_8146 (extractedValue_8092_formalArgs, kENUMERATION_UP) ;
          while (enumerator_8146.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_8146.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 204)) ;
            }
            enumerator_8146.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7875.gotoNextObject () ;
    }
    enumerator_7833.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_staticListAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_staticListAST temp_0 = this ;
  result_result = temp_0.readProperty_mStaticListName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_staticListAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_staticListAST temp_0 = this ;
  result_result = GALGAS_string ("staticlist ").add_operation (temp_0.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 220)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 230)), constinArgument_inStaticListName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 230)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListType (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusNameForStaticListType (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListType ("omnibusNameForStaticListType",
                                                                              functionWithGenericHeader_omnibusNameForStaticListType,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_omnibusNameForStaticListType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 236)), constinArgument_inStaticListName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 236)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListType (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForStaticListType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListType ("llvmNameForStaticListType",
                                                                           functionWithGenericHeader_llvmNameForStaticListType,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           1,
                                                                           functionArgs_llvmNameForStaticListType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListElementType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 242)), constinArgument_inStaticListName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 242)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusNameForStaticListElementType (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListElementType ("omnibusNameForStaticListElementType",
                                                                                     functionWithGenericHeader_omnibusNameForStaticListElementType,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_omnibusNameForStaticListElementType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListElementType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 248)), constinArgument_inStaticListName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 248)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForStaticListElementType (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListElementType ("llvmNameForStaticListElementType",
                                                                                  functionWithGenericHeader_llvmNameForStaticListElementType,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmNameForStaticListElementType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_staticListAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList var_propertyList_11568 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 279)) ;
  GALGAS_stringset var_propertyNameSet_11648 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 281)) ;
  const GALGAS_staticListAST temp_0 = this ;
  GALGAS_lstring var_omnibusElementTypeName_11675 = function_omnibusNameForStaticListElementType (temp_0.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 282)) ;
  GALGAS_unifiedTypeMapEntry var_elementTypeProxy_11823 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11675, var_elementTypeProxy_11823, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 283)) ;
  }
  const GALGAS_staticListAST temp_1 = this ;
  cEnumerator_staticListPropertyListAST enumerator_11956 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  GALGAS_uint index_11938 ((uint32_t) 0) ;
  while (enumerator_11956.hasCurrentObject ()) {
    switch (enumerator_11956.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_12613 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_11956.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_12048_propertyTypeName = extractPtr_12613->mAssociatedValue0 ;
        GALGAS_omnibusType var_propertyType_12078 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_12048_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_propertyNameSet_11648.getter_hasKey (enumerator_11956.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 289)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_11956.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("duplicated property name"), fixItArray3  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 290)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_propertyNameSet_11648.addAssign_operation (enumerator_11956.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
          var_propertyList_11568.addAssign_operation (enumerator_11956.current_mPropertyName (HERE).readProperty_string (), var_propertyType_12078  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 293)) ;
          {
          const GALGAS_staticListAST temp_4 = this ;
          extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListElementType (temp_4.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 295)), enumerator_11956.current_mPropertyName (HERE), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 297)), GALGAS_propertyGetterKind::constructor_storedProperty (var_propertyType_12078, index_11938  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 294)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_14370 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_11956.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_12642_mode = extractPtr_14370->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_12677_formalArgs = extractPtr_14370->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_12697_returnTypeName = extractPtr_14370->mAssociatedValue2 ;
        const GALGAS_staticListAST temp_5 = this ;
        GALGAS_lstring var_routineLLVMName_12752 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (temp_5.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 304)).readProperty_string (), enumerator_11956.current_mPropertyName (HERE), extractedValue_12677_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 303)) ;
        GALGAS_routineTypedSignature var_signature_13000 ;
        {
        routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_12677_formalArgs, var_signature_13000, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 309)) ;
        }
        GALGAS_unifiedTypeMapEntry temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, extractedValue_12697_returnTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 311)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_12697_returnTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 313)) ;
        }
        GALGAS_unifiedTypeMapEntry var_returnTypeProxy_13042 = temp_6 ;
        GALGAS_omnibusType var_propertyType_13236 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 317)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 318)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_function (extractedValue_12642_mode, var_signature_13000, var_returnTypeProxy_13042  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 320)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 316)) ;
        var_propertyList_11568.addAssign_operation (enumerator_11956.current_mPropertyName (HERE).readProperty_string (), var_propertyType_13236  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 328)) ;
        const GALGAS_staticListAST temp_8 = this ;
        GALGAS_lstring var_routineMangledName_13649 = GALGAS_lstring::constructor_new (function_omnibusNameForStaticListElementType (temp_8.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (enumerator_11956.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (extensionGetter_routineSignature (extractedValue_12677_formalArgs, enumerator_11956.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)), enumerator_11956.current_mPropertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 330)) ;
        {
        GALGAS_routineLLVMNameDict temp_9 = GALGAS_routineLLVMNameDict::constructor_emptyDict (SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        temp_9.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 339)), var_routineLLVMName_12752.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_13649, GALGAS_bool (true), var_signature_13000, var_returnTypeProxy_13042, temp_9, GALGAS_bool (false), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 334)) ;
        }
        ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticListIndirectRoutineIR::constructor_new (var_routineLLVMName_12752, GALGAS_bool (true), GALGAS_bool (true), var_elementTypeProxy_11823, var_signature_13000, var_returnTypeProxy_13042, index_11938  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 344))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 344)) ;
      }
      break ;
    }
    enumerator_11956.gotoNextObject () ;
    index_11938.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 285)) ;
  }
  {
  const GALGAS_staticListAST temp_10 = this ;
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (temp_10.readProperty_mStaticListName (), var_propertyList_11568, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 355)) ;
  }
  const GALGAS_staticListAST temp_11 = this ;
  const GALGAS_staticListAST temp_12 = this ;
  GALGAS_omnibusType var_elementType_14570 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 358)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 359)), function_omnibusNameForStaticListElementType (temp_11.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 360)).readProperty_string (), GALGAS_typeKind::constructor_structure (var_propertyList_11568  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 361)), function_llvmNameForStaticListElementType (temp_12.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 362)).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 357)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11675, var_elementType_14570, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 364)) ;
  }
  GALGAS_stringlist var_stringValueList_15069 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 366)) ;
  const GALGAS_staticListAST temp_13 = this ;
  cEnumerator_staticListValueListAST enumerator_15105 (temp_13.readProperty_mValueList (), kENUMERATION_UP) ;
  while (enumerator_15105.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsNotEqual, var_propertyList_11568.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 368)).objectCompare (enumerator_15105.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 368)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_staticListAST temp_15 = this ;
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mStaticListName ().readProperty_location (), var_propertyList_11568.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 370)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (enumerator_15105.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 371)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 371)), fixItArray16  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 369)) ;
      }
    }
    if (kBoolFalse == test_14) {
      GALGAS_string var_staticValue_15351 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementAST enumerator_15388 (enumerator_15105.current_mElement (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_15413 (var_propertyList_11568, kENUMERATION_UP) ;
      while (enumerator_15388.hasCurrentObject () && enumerator_15413.hasCurrentObject ()) {
        switch (enumerator_15388.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_16095 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_15388.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_15509_exp = extractPtr_16095->mAssociatedValue0 ;
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              test_17 = enumerator_15413.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 377)).boolEnum () ;
              if (kBoolTrue == test_17) {
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (enumerator_15388.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray18  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 378)) ;
              }
            }
            if (kBoolFalse == test_17) {
              GALGAS_objectIR var_expressionResult_15926 ;
              {
              routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_15509_exp, enumerator_15388.current_mEndOfExpression (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 385)), var_expressionResult_15926, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 380)) ;
              }
              var_staticValue_15351.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15413.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)).add_operation (extensionGetter_llvmName (var_expressionResult_15926, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_18325 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_15388.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_16137_functionName = extractPtr_18325->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_16180_formalArgs = extractPtr_18325->mAssociatedValue1 ;
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = enumerator_15413.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 392)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 392)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_15388.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray20  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)) ;
              }
            }
            if (kBoolFalse == test_19) {
              GALGAS_mode var_mode_16394 ;
              GALGAS_routineTypedSignature var_functionSignature_16428 ;
              GALGAS_unifiedTypeMapEntry var_functionReturnTypeProxy_16481 ;
              enumerator_15413.current_mType (HERE).readProperty_kind ().method_function (var_mode_16394, var_functionSignature_16428, var_functionReturnTypeProxy_16481, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 395)) ;
              GALGAS_lstring var_argumentSignature_16535 = extensionGetter_routineSignature (extractedValue_16180_formalArgs, extractedValue_16137_functionName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 400)) ;
              GALGAS_lstring var_functionMangledName_16615 = GALGAS_lstring::constructor_new (extractedValue_16137_functionName.readProperty_string ().add_operation (var_argumentSignature_16535.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 401)), extractedValue_16137_functionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 401)) ;
              GALGAS_bool var_candidateIsPublic_16813 ;
              GALGAS_routineTypedSignature var_candidateSignature_16850 ;
              GALGAS_unifiedTypeMapEntry var_candidateReturnTypeProxy_16888 ;
              GALGAS_routineLLVMNameDict var_implementedModeDictionary_16960 ;
              GALGAS_bool var_implementedIsExported_17012 ;
              GALGAS_mode var_candidateMode_17060 ;
              ioArgument_ioContext.readProperty_mRoutineMap ().method_searchKey (var_functionMangledName_16615, var_candidateIsPublic_16813, var_candidateSignature_16850, var_candidateReturnTypeProxy_16888, var_implementedModeDictionary_16960, var_implementedIsExported_17012, var_candidateMode_17060, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 402)) ;
              GALGAS_string var_routineLLVMName_17130 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_16960, var_mode_16394, extractedValue_16137_functionName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 412)) ;
              enumGalgasBool test_21 = kBoolTrue ;
              if (kBoolTrue == test_21) {
                GALGAS_bool test_22 = GALGAS_bool (kIsEqual, var_functionReturnTypeProxy_16481.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 413)))) ;
                if (kBoolTrue == test_22.boolEnum ()) {
                  test_22 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_16888.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 413)))) ;
                }
                test_21 = test_22.boolEnum () ;
                if (kBoolTrue == test_21) {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_16137_functionName.readProperty_location (), GALGAS_string ("this function should return an $").add_operation (extensionGetter_key (var_candidateReturnTypeProxy_16888, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)), fixItArray23  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)) ;
                }
              }
              if (kBoolFalse == test_21) {
                enumGalgasBool test_24 = kBoolTrue ;
                if (kBoolTrue == test_24) {
                  GALGAS_bool test_25 = GALGAS_bool (kIsNotEqual, var_functionReturnTypeProxy_16481.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 415)))) ;
                  if (kBoolTrue == test_25.boolEnum ()) {
                    test_25 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_16888.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 415)))) ;
                  }
                  test_24 = test_25.boolEnum () ;
                  if (kBoolTrue == test_24) {
                    TC_Array <C_FixItDescription> fixItArray26 ;
                    inCompiler->emitSemanticError (extractedValue_16137_functionName.readProperty_location (), GALGAS_string ("this function should return no object"), fixItArray26  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 416)) ;
                  }
                }
              }
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                test_27 = GALGAS_bool (kIsNotEqual, var_functionSignature_16428.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 418)).objectCompare (var_candidateSignature_16850.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 418)))).boolEnum () ;
                if (kBoolTrue == test_27) {
                  TC_Array <C_FixItDescription> fixItArray28 ;
                  inCompiler->emitSemanticError (extractedValue_16137_functionName.readProperty_location (), GALGAS_string ("this function has ").add_operation (var_candidateSignature_16850.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 420)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (var_functionSignature_16428.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 421)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 421)), fixItArray28  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 419)) ;
                }
              }
              if (kBoolFalse == test_27) {
                cEnumerator_routineTypedSignature enumerator_17931 (var_functionSignature_16428, kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_17963 (var_candidateSignature_16850, kENUMERATION_UP) ;
                while (enumerator_17931.hasCurrentObject () && enumerator_17963.hasCurrentObject ()) {
                  enumGalgasBool test_29 = kBoolTrue ;
                  if (kBoolTrue == test_29) {
                    test_29 = GALGAS_bool (kIsNotEqual, enumerator_17931.current (HERE).readProperty_mTypeProxy ().objectCompare (enumerator_17963.current (HERE).readProperty_mTypeProxy ())).boolEnum () ;
                    if (kBoolTrue == test_29) {
                      TC_Array <C_FixItDescription> fixItArray30 ;
                      inCompiler->emitSemanticError (enumerator_17963.current (HERE).readProperty_mSelector ().readProperty_location (), GALGAS_string ("argument type should be $").add_operation (extensionGetter_key (enumerator_17931.current (HERE).readProperty_mTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), fixItArray30  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)) ;
                    }
                  }
                  enumerator_17931.gotoNextObject () ;
                  enumerator_17963.gotoNextObject () ;
                }
              }
              var_staticValue_15351.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15413.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (var_routineLLVMName_17130.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)) ;
            }
          }
          break ;
        }
        if (enumerator_15388.hasNextObject () && enumerator_15413.hasNextObject ()) {
          var_staticValue_15351.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 433)) ;
        }
        enumerator_15388.gotoNextObject () ;
        enumerator_15413.gotoNextObject () ;
      }
      var_staticValue_15351.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 435)) ;
      var_stringValueList_15069.addAssign_operation (var_staticValue_15351  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 436)) ;
    }
    enumerator_15105.gotoNextObject () ;
  }
  {
  const GALGAS_staticListAST temp_31 = this ;
  ioArgument_ioStaticListValueMap.setter_insertKey (temp_31.readProperty_mStaticListName (), var_stringValueList_15069, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 439)) ;
  }
  {
  const GALGAS_staticListAST temp_32 = this ;
  const GALGAS_staticListAST temp_33 = this ;
  const GALGAS_staticListAST temp_34 = this ;
  extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListType (temp_32.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 442)), GALGAS_lstring::constructor_new (GALGAS_string ("count"), temp_33.readProperty_mStaticListName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 443)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 444)), GALGAS_propertyGetterKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), temp_34.readProperty_mValueList ().getter_count (SOURCE_FILE ("declaration-static-list.galgas", 445)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 441)) ;
  }
  const GALGAS_staticListAST temp_35 = this ;
  const GALGAS_staticListAST temp_36 = this ;
  GALGAS_omnibusType var_arrayType_19032 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_staticSubscript (var_elementType_14570, var_stringValueList_15069.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 449)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 449))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 450)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("declaration-static-list.galgas", 450)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 450)), function_omnibusNameForStaticListType (temp_35.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 451)).readProperty_string (), GALGAS_typeKind::constructor_staticArrayType (var_elementType_14570, var_stringValueList_15069.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 452)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 452))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 452)), function_llvmNameForStaticListType (temp_36.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 453)).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 448)) ;
  {
  const GALGAS_staticListAST temp_37 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_omnibusNameForStaticListType (temp_37.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 456)), var_arrayType_19032, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 455)) ;
  }
  const GALGAS_staticListAST temp_38 = this ;
  GALGAS_unifiedTypeMapEntry var_staticListType_19661 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusNameForStaticListType (temp_38.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)) ;
  {
  const GALGAS_staticListAST temp_39 = this ;
  const GALGAS_staticListAST temp_40 = this ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_39.readProperty_mStaticListName (), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_staticListType_19661, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)), function_llvmNameForGlobalVariable (temp_40.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 461)) ;
  }
  {
  const GALGAS_staticListAST temp_41 = this ;
  const GALGAS_staticListAST temp_42 = this ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_41.readProperty_mStaticListName (), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_staticListType_19661, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467)), function_llvmNameForGlobalVariable (temp_42.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 465)) ;
  }
  const GALGAS_staticListAST temp_43 = this ;
  const GALGAS_staticListAST temp_44 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStaticList::constructor_new (temp_43.readProperty_mStaticListName (), temp_44.readProperty_mValueList ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 470))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 470)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_14570.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 473)), var_propertyList_11568  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_19032.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 477)), var_elementType_14570, var_stringValueList_15069.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 479)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 479))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 476))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 476)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedStaticList semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_decoratedStaticList::method_semanticAnalysis (const GALGAS_semanticContext /* constinArgument_inContext */,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_invokedFunctionSet_21858 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 508)) ;
  const GALGAS_decoratedStaticList temp_0 = this ;
  cEnumerator_staticListValueListAST enumerator_21897 (temp_0.readProperty_mValueList (), kENUMERATION_UP) ;
  while (enumerator_21897.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_21939 (enumerator_21897.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_21939.hasCurrentObject ()) {
      switch (enumerator_21939.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_22027 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_21939.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_22022_exp = extractPtr_22027->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_22311 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_21939.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_22059_functionName = extractPtr_22311->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_22102_formalArgs = extractPtr_22311->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_22160 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_22059_functionName, extractedValue_22102_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 515)) ;
          var_invokedFunctionSet_21858.addAssign_operation (var_routineMangledName_22160.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 520)) ;
        }
        break ;
      }
      enumerator_21939.gotoNextObject () ;
    }
    enumerator_21897.gotoNextObject () ;
  }
  {
  const GALGAS_decoratedStaticList temp_1 = this ;
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (temp_1.readProperty_mStaticListName (), var_invokedFunctionSet_21858, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 524)) ;
  }
  {
  const GALGAS_decoratedStaticList temp_2 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (temp_2.readProperty_mStaticListName (), var_invokedFunctionSet_21858, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 525)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListIndirectRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_staticListIndirectRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 575)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticListIndirectRoutineIR temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 576)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 577)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticListIndirectRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)) ;
  }
  const GALGAS_staticListIndirectRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)) ;
  const GALGAS_staticListIndirectRoutineIR temp_4 = this ;
  GALGAS_string var_receiverLLVMTypeName_24902 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_4.readProperty_mStaticListElementType (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 582)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 582)) ;
  GALGAS_bool var_first_24981 = GALGAS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_24902.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24902.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)) ;
      var_first_24981 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_staticListIndirectRoutineIR temp_6 = this ;
  cEnumerator_routineTypedSignature enumerator_25169 (temp_6.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_25169.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_first_24981.boolEnum () ;
      if (kBoolTrue == test_7) {
        var_first_24981 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 592)) ;
    }
    switch (enumerator_25169.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25169.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).add_operation (enumerator_25169.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25169.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).add_operation (enumerator_25169.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25169.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).add_operation (enumerator_25169.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)) ;
      }
      break ;
    }
    enumerator_25169.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)) ;
  GALGAS_string var_llvmFunctionTypeName_25869 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_staticListIndirectRoutineIR temp_9 = this ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 606)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_llvmFunctionTypeName_25869 = GALGAS_string ("void") ;
    }
  }
  if (kBoolFalse == test_8) {
    const GALGAS_staticListIndirectRoutineIR temp_10 = this ;
    var_llvmFunctionTypeName_25869 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_10.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 609)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 609)) ;
  }
  var_llvmFunctionTypeName_25869.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 611)) ;
  var_first_24981 = GALGAS_bool (true) ;
  const GALGAS_staticListIndirectRoutineIR temp_11 = this ;
  cEnumerator_routineTypedSignature enumerator_26141 (temp_11.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_26141.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_first_24981.boolEnum () ;
      if (kBoolTrue == test_12) {
        var_first_24981 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_12) {
      var_llvmFunctionTypeName_25869.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)) ;
    }
    switch (enumerator_26141.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_llvmFunctionTypeName_25869.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26141.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        var_llvmFunctionTypeName_25869.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26141.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        var_llvmFunctionTypeName_25869.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26141.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)) ;
      }
      break ;
    }
    enumerator_26141.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_25869.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 628)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_24902, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)) ;
  const GALGAS_staticListIndirectRoutineIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_receiverLLVMTypeName_24902, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GALGAS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (temp_13.readProperty_mPropertyIndex ().getter_string (SOURCE_FILE ("declaration-static-list.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_25869, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (var_llvmFunctionTypeName_25869, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_staticListIndirectRoutineIR temp_15 = this ;
    test_14 = GALGAS_bool (kIsEqual, temp_15.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 633)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 634)) ;
    }
  }
  if (kBoolFalse == test_14) {
    const GALGAS_staticListIndirectRoutineIR temp_16 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_16.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)) ;
  var_first_24981 = GALGAS_bool (true) ;
  const GALGAS_staticListIndirectRoutineIR temp_17 = this ;
  cEnumerator_routineTypedSignature enumerator_27164 (temp_17.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_27164.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_first_24981.boolEnum () ;
      if (kBoolTrue == test_18) {
        var_first_24981 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_18) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)) ;
    }
    switch (enumerator_27164.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_27164.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).add_operation (enumerator_27164.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_27164.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).add_operation (enumerator_27164.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_27164.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (enumerator_27164.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)) ;
      }
      break ;
    }
    enumerator_27164.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_staticListIndirectRoutineIR temp_20 = this ;
    test_19 = GALGAS_bool (kIsEqual, temp_20.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 657)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 658)) ;
    }
  }
  if (kBoolFalse == test_19) {
    const GALGAS_staticListIndirectRoutineIR temp_21 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_21.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 662)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedTaskListDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::method_semanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_decoratedTaskListDeclaration temp_0 = this ;
  cEnumerator_decoratedTaskList enumerator_12262 (temp_0.readProperty_mTaskList (), kENUMERATION_UP) ;
  GALGAS_uint index_12245 ((uint32_t) 0) ;
  while (enumerator_12262.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_12262.current (HERE), constinArgument_inContext, index_12245, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 320)) ;
    enumerator_12262.gotoNextObject () ;
    index_12245.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 319)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines (const GALGAS_taskSetupListAST constinArgument_inTaskRoutineLISTAST,
                                         GALGAS_stringlist & outArgument_outSetupOrderedList,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetupOrderedList.drop () ; // Release 'out' argument
  outArgument_outSetupOrderedList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 335)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 336)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_numberOfEntriesWithoutAnyPrecedence_12857 = GALGAS_uint (uint32_t (0U)) ;
      cEnumerator_taskSetupListAST enumerator_12908 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
      while (enumerator_12908.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, enumerator_12908.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 340)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_numberOfEntriesWithoutAnyPrecedence_12857.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_12857.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 341)) ;
          }
        }
        enumerator_12908.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_numberOfEntriesWithoutAnyPrecedence_12857.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          cEnumerator_taskSetupListAST enumerator_13168 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
          while (enumerator_13168.hasCurrentObject ()) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_13168.current_mName (HERE).readProperty_location (), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 346)) ;
            enumerator_13168.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsStrictSup, var_numberOfEntriesWithoutAnyPrecedence_12857.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            cEnumerator_taskSetupListAST enumerator_13348 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
            while (enumerator_13348.hasCurrentObject ()) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, enumerator_13348.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 350)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_13348.current_mName (HERE).readProperty_location (), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 351)) ;
                }
              }
              enumerator_13348.gotoNextObject () ;
            }
          }
        }
      }
      GALGAS_taskSetupListAST var_taskSetupListAST_13607 = constinArgument_inTaskRoutineLISTAST ;
      GALGAS_stringset var_precedenceSet_13666 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 357)) ;
      GALGAS_bool var_continue_13693 = GALGAS_bool (true) ;
      if (constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).isValid ()) {
        uint32_t variant_13713 = constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).uintValue () ;
        bool loop_13713 = true ;
        while (loop_13713) {
          GALGAS_bool test_7 = var_continue_13693 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsStrictSup, var_taskSetupListAST_13607.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
          }
          loop_13713 = test_7.isValid () ;
          if (loop_13713) {
            loop_13713 = test_7.boolValue () ;
          }
          if (loop_13713 && (0 == variant_13713)) {
            loop_13713 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 359)) ;
          }
          if (loop_13713) {
            variant_13713 -- ;
            var_continue_13693 = GALGAS_bool (false) ;
            GALGAS_bigint var_idx_13836 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 361)) ;
            cEnumerator_taskSetupListAST enumerator_13860 (var_taskSetupListAST_13607, kENUMERATION_UP) ;
            while (enumerator_13860.hasCurrentObject ()) {
              GALGAS_bool var_allPrecedenceDefined_13911 = GALGAS_bool (true) ;
              cEnumerator_lstringlist enumerator_13952 (enumerator_13860.current_mDependanceList (HERE), kENUMERATION_UP) ;
              bool bool_8 = var_allPrecedenceDefined_13911.isValidAndTrue () ;
              if (enumerator_13952.hasCurrentObject () && bool_8) {
                while (enumerator_13952.hasCurrentObject () && bool_8) {
                  var_allPrecedenceDefined_13911 = var_precedenceSet_13666.getter_hasKey (enumerator_13952.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas", 365)) ;
                  enumerator_13952.gotoNextObject () ;
                  if (enumerator_13952.hasCurrentObject ()) {
                    bool_8 = var_allPrecedenceDefined_13911.isValidAndTrue () ;
                  }
                }
              }
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_allPrecedenceDefined_13911.boolEnum () ;
                if (kBoolTrue == test_9) {
                  outArgument_outSetupOrderedList.addAssign_operation (enumerator_13860.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 368)) ;
                  var_precedenceSet_13666.addAssign_operation (enumerator_13860.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 369)) ;
                  var_continue_13693 = GALGAS_bool (true) ;
                  {
                  GALGAS_lstring joker_14300_2 ; // Joker input parameter
                  GALGAS_lstringlist joker_14300_1 ; // Joker input parameter
                  var_taskSetupListAST_13607.setter_removeAtIndex (joker_14300_2, joker_14300_1, var_idx_13836.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)) ;
                  }
                }
              }
              if (kBoolFalse == test_9) {
                var_idx_13836 = var_idx_13836.add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 373)) ;
              }
              enumerator_13860.gotoNextObject () ;
            }
          }
        }
      }
      cEnumerator_taskSetupListAST enumerator_14431 (var_taskSetupListAST_13607, kENUMERATION_UP) ;
      while (enumerator_14431.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_14431.current_mName (HERE).readProperty_location (), GALGAS_string ("this routine is out of execution order"), fixItArray10  COMMA_SOURCE_FILE ("task-declaration.galgas", 379)) ;
        enumerator_14431.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskActivateFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_taskActivateFunctionIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskActivateFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 611)) ;
  const GALGAS_taskActivateFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%").add_operation (temp_1.readProperty_mAssemblerTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 612)) ;
  const GALGAS_taskActivateFunctionIR temp_2 = this ;
  const GALGAS_taskActivateFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (temp_2.readProperty_mActivateServiceInvocationName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GALGAS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (temp_3.readProperty_mTaskIndex ().getter_string (SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 613)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 614)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 615)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 616)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 617)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskSetupDeclarationAST temp_0 = this ;
  const GALGAS_taskSetupDeclarationAST temp_1 = this ;
  const GALGAS_taskSetupDeclarationAST temp_2 = this ;
  GALGAS_string var_s_3585 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)) ;
  {
  const GALGAS_taskSetupDeclarationAST temp_3 = this ;
  const GALGAS_taskSetupDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::constructor_new (var_s_3585, temp_3.readProperty_mSetupName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 91)), temp_4, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 91)) ;
  }
  {
  const GALGAS_taskSetupDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_5.readProperty_mTaskName () COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 93)) ;
  }
  const GALGAS_taskSetupDeclarationAST temp_6 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_6.readProperty_mTaskSetupInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 94)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_taskSetupDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_taskSetupDeclarationAST temp_0 = this ;
  const GALGAS_taskSetupDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("task function ").add_operation (temp_0.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (temp_1.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_taskSetupDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_taskSetupDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mSetupName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::method_enterInContext (GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                          GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                          GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_taskSetupDeclarationAST temp_0 = this ;
  const GALGAS_taskSetupDeclarationAST temp_1 = this ;
  const GALGAS_taskSetupDeclarationAST temp_2 = this ;
  GALGAS_string var_mangledName_5425 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)) ;
  const GALGAS_taskSetupDeclarationAST temp_3 = this ;
  const GALGAS_taskSetupDeclarationAST temp_4 = this ;
  const GALGAS_taskSetupDeclarationAST temp_5 = this ;
  const GALGAS_taskSetupDeclarationAST temp_6 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_3.readProperty_mTaskName (), GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-setup-declaration.galgas", 127)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("task-setup-declaration.galgas", 129)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutatingRoutine (SOURCE_FILE ("task-setup-declaration.galgas", 132)), GALGAS_lstring::constructor_new (var_mangledName_5425, temp_4.readProperty_mSetupName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 133)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("task-setup-declaration.galgas", 134)), GALGAS_bool (true), temp_5.readProperty_mTaskSetupInstructionList (), temp_6.readProperty_mEndOfTaskSetupDeclaration (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-setup-declaration.galgas", 138))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 125)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_4718 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_functionDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_functionDeclarationAST temp_2 = this ;
      var_s_4718.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 153)) ;
    }
  }
  const GALGAS_functionDeclarationAST temp_3 = this ;
  var_s_4718.plusAssign_operation(temp_3.readProperty_mFunctionName ().readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 155)) ;
  const GALGAS_functionDeclarationAST temp_4 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_4905 (temp_4.readProperty_mFunctionFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_4905.hasCurrentObject ()) {
    var_s_4718.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4905.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (enumerator_4905.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 157)) ;
    enumerator_4905.gotoNextObject () ;
  }
  var_s_4718.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 159)) ;
  const GALGAS_functionDeclarationAST temp_5 = this ;
  GALGAS_lstring var_nodeName_5048 = GALGAS_lstring::constructor_new (var_s_4718, temp_5.readProperty_mFunctionName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 160)) ;
  {
  const GALGAS_functionDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5048, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 161)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5048, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) ;
  }
  const GALGAS_functionDeclarationAST temp_7 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_5249 (temp_7.readProperty_mFunctionFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_5249.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5249.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 165)) ;
    }
    enumerator_5249.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mFunctionInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 167)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_functionDeclarationAST temp_10 = this ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_functionDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 169)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GALGAS_functionDeclarationAST temp_13 = this ;
    test_12 = GALGAS_bool (kIsNotEqual, temp_13.readProperty_mFunctionReturnTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      const GALGAS_functionDeclarationAST temp_14 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_14.readProperty_mFunctionReturnTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 172)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_functionDeclarationAST temp_0 = this ;
  const GALGAS_functionDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("function ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (temp_1.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_functionDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_functionDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mFunctionName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                         GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                         GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                         GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                         GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_7229 ;
  {
  const GALGAS_functionDeclarationAST temp_0 = this ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mFunctionFormalArgumentList (), var_signature_7229, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 203)) ;
  }
  GALGAS_unifiedTypeMapEntry var_returnTypeProxy_7334 ;
  {
  const GALGAS_functionDeclarationAST temp_1 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mFunctionReturnTypeName (), var_returnTypeProxy_7334, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 205)) ;
  }
  GALGAS_bool var_warnIfUnused_7373 = GALGAS_bool (true) ;
  GALGAS_bool var_exportedFunction_7399 = GALGAS_bool (false) ;
  GALGAS_bool var_canMutateProperties_7430 = GALGAS_bool (false) ;
  const GALGAS_functionDeclarationAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_7465 (temp_2.readProperty_mFunctionAttributeList (), kENUMERATION_UP) ;
  while (enumerator_7465.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_7465.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 211)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_warnIfUnused_7373.operator_not (SOURCE_FILE ("declaration-function.galgas", 212)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_7465.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), fixItArray5  COMMA_SOURCE_FILE ("declaration-function.galgas", 213)) ;
          }
        }
        var_warnIfUnused_7373 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsEqual, enumerator_7465.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 216)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_exportedFunction_7399.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_7465.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), fixItArray8  COMMA_SOURCE_FILE ("declaration-function.galgas", 218)) ;
            }
          }
          var_exportedFunction_7399 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (kIsEqual, enumerator_7465.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 221)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = var_canMutateProperties_7430.boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_7465.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), fixItArray11  COMMA_SOURCE_FILE ("declaration-function.galgas", 223)) ;
              }
            }
            var_canMutateProperties_7430 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_9) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_7465.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 227)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), fixItArray12  COMMA_SOURCE_FILE ("declaration-function.galgas", 227)) ;
        }
      }
    }
    enumerator_7465.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationAST temp_13 = this ;
  const GALGAS_functionDeclarationAST temp_14 = this ;
  const GALGAS_functionDeclarationAST temp_15 = this ;
  GALGAS_lstring var_functionLLVMName_8383 = function_routineMangledNameFromAST (temp_13.readProperty_mReceiverTypeName ().readProperty_string (), temp_14.readProperty_mFunctionName (), temp_15.readProperty_mFunctionFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 232)) ;
  const GALGAS_functionDeclarationAST temp_16 = this ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_8604 = extensionGetter_routineLLVMDictionaryForFunction (temp_16.readProperty_mMode (), var_functionLLVMName_8383.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 238)) ;
  const GALGAS_functionDeclarationAST temp_17 = this ;
  const GALGAS_functionDeclarationAST temp_18 = this ;
  GALGAS_lstring var_routineMangledName_8696 = extensionGetter_mangledName (var_signature_7229, temp_17.readProperty_mReceiverTypeName ().readProperty_string (), temp_18.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 239)) ;
  {
  const GALGAS_functionDeclarationAST temp_19 = this ;
  const GALGAS_functionDeclarationAST temp_20 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_8696, temp_19.readProperty_mPublicFunction (), var_signature_7229, var_returnTypeProxy_7334, var_routineLLVMNameDict_8604, var_exportedFunction_7399, temp_20.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 240)) ;
  }
  const GALGAS_functionDeclarationAST temp_21 = this ;
  const GALGAS_functionDeclarationAST temp_22 = this ;
  const GALGAS_functionDeclarationAST temp_23 = this ;
  const GALGAS_functionDeclarationAST temp_24 = this ;
  const GALGAS_functionDeclarationAST temp_25 = this ;
  const GALGAS_functionDeclarationAST temp_26 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_21.readProperty_mReceiverTypeName (), temp_22.readProperty_mMode (), ioArgument_ioContext.readProperty_mRequiredRoutineSet ().getter_hasKey (var_functionLLVMName_8383.readProperty_string () COMMA_SOURCE_FILE ("declaration-function.galgas", 253)), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-function.galgas", 254)), var_warnIfUnused_7373, var_exportedFunction_7399, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-function.galgas", 257)), var_functionLLVMName_8383, temp_23.readProperty_mFunctionFormalArgumentList (), GALGAS_bool (true), temp_24.readProperty_mFunctionInstructionList (), temp_25.readProperty_mEndOfFunctionDeclaration (), temp_26.readProperty_mFunctionReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-function.galgas", 250)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemRoutineDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_5136 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_systemRoutineDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_systemRoutineDeclarationAST temp_2 = this ;
      var_s_5136.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)) ;
    }
  }
  const GALGAS_systemRoutineDeclarationAST temp_3 = this ;
  var_s_5136.plusAssign_operation(temp_3.readProperty_mSystemRoutineName ().readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)) ;
  const GALGAS_systemRoutineDeclarationAST temp_4 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_5328 (temp_4.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_5328.hasCurrentObject ()) {
    var_s_5136.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5328.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (enumerator_5328.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)) ;
    enumerator_5328.gotoNextObject () ;
  }
  var_s_5136.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 175)) ;
  const GALGAS_systemRoutineDeclarationAST temp_5 = this ;
  GALGAS_lstring var_nodeKey_5463 = GALGAS_lstring::constructor_new (var_s_5136, temp_5.readProperty_mSystemRoutineName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 176)) ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeKey_5463, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 177)) ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_7 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_5597 (temp_7.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_5597.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5597.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 180)) ;
    }
    enumerator_5597.gotoNextObject () ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 182)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_systemRoutineDeclarationAST temp_10 = this ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_systemRoutineDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 184)) ;
      }
      {
      const GALGAS_systemRoutineDeclarationAST temp_12 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5463, temp_12.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 185)) ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_systemRoutineDeclarationAST temp_14 = this ;
    test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mReturnTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GALGAS_systemRoutineDeclarationAST temp_15 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_15.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 188)) ;
      }
      {
      const GALGAS_systemRoutineDeclarationAST temp_16 = this ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5463, temp_16.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 189)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_systemRoutineDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_systemRoutineDeclarationAST temp_0 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("system ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (temp_1.readProperty_mSystemRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_systemRoutineDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_systemRoutineDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mSystemRoutineName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'systemUserMangledNameFromAST'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_systemUserMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                      const GALGAS_routineKind & constinArgument_inKind,
                                                      const GALGAS_lstring & constinArgument_inGuardName,
                                                      const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7337 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_7337 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_7337 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_7337 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_7337 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_7337.plusAssign_operation(GALGAS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 225)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_7337.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)) ;
    }
  }
  var_s_7337.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 229)) ;
  var_s_7337.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7691 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_7691.hasCurrentObject ()) {
    var_s_7337.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7691.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (enumerator_7691.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)) ;
    enumerator_7691.gotoNextObject () ;
  }
  var_s_7337.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_7337, constinArgument_inGuardName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 235)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemUserMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_systemUserMangledNameFromAST (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand3 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_systemUserMangledNameFromAST (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemUserMangledNameFromAST ("systemUserMangledNameFromAST",
                                                                              functionWithGenericHeader_systemUserMangledNameFromAST,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              4,
                                                                              functionArgs_systemUserMangledNameFromAST) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'systemImplementationMangledNameFromAST'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_systemImplementationMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                                const GALGAS_routineKind & constinArgument_inKind,
                                                                const GALGAS_lstring & constinArgument_inGuardName,
                                                                const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_8335 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_8335 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_8335 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_8335 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_8335 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_8335.plusAssign_operation(GALGAS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 256)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_8335.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)) ;
    }
  }
  var_s_8335.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 260)) ;
  var_s_8335.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_8699 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_8699.hasCurrentObject ()) {
    var_s_8335.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_8699.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (enumerator_8699.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
    enumerator_8699.gotoNextObject () ;
  }
  var_s_8335.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_8335, constinArgument_inGuardName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemImplementationMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_systemImplementationMangledNameFromAST (C_Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand3 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_systemImplementationMangledNameFromAST (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemImplementationMangledNameFromAST ("systemImplementationMangledNameFromAST",
                                                                                        functionWithGenericHeader_systemImplementationMangledNameFromAST,
                                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                                        4,
                                                                                        functionArgs_systemImplementationMangledNameFromAST) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemRoutineDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                              GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_selfTypeProxy_9944 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_0 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_selfTypeProxy_9944, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = var_selfTypeProxy_9944.getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_type (var_selfTypeProxy_9944, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)).readProperty_llvmBaseTypeName () ;
  }
  GALGAS_string var_receiverLLVMBaseTypeName_9990 = temp_1 ;
  GALGAS_stringset var_attributeSet_10131 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  const GALGAS_systemRoutineDeclarationAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_10173 (temp_3.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_10173.hasCurrentObject ()) {
    var_attributeSet_10131.addAssign_operation (enumerator_10173.current (HERE).readProperty_mValue ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)) ;
    enumerator_10173.gotoNextObject () ;
  }
  GALGAS_routineKind var_routineKind_10266 ;
  const GALGAS_systemRoutineDeclarationAST temp_4 = this ;
  switch (temp_4.readProperty_mMode ().enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_sectionMode:
  case GALGAS_mode::kEnum_safeSectionMode:
    {
      var_routineKind_10266 = GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-svc.galgas", 296)) ;
    }
    break ;
  case GALGAS_mode::kEnum_serviceMode:
  case GALGAS_mode::kEnum_safeServiceMode:
    {
      var_routineKind_10266 = GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-svc.galgas", 298)) ;
    }
    break ;
  case GALGAS_mode::kEnum_primitiveMode:
  case GALGAS_mode::kEnum_safePrimitiveMode:
    {
      var_routineKind_10266 = GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-svc.galgas", 300)) ;
    }
    break ;
  case GALGAS_mode::kEnum_userMode:
  case GALGAS_mode::kEnum_safeUserMode:
  case GALGAS_mode::kEnum_anyMode:
  case GALGAS_mode::kEnum_anySafeMode:
  case GALGAS_mode::kEnum_bootMode:
  case GALGAS_mode::kEnum_guardMode:
  case GALGAS_mode::kEnum_panicMode:
  case GALGAS_mode::kEnum_safeGuardMode:
  case GALGAS_mode::kEnum_startupMode:
    {
      const GALGAS_systemRoutineDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mSystemRoutineName ().readProperty_location (), GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("declaration-svc.galgas", 302)) ;
      var_routineKind_10266.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_7 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_8 = this ;
  GALGAS_lstring var_userRoutineMangledName_10719 = function_systemUserMangledNameFromAST (var_receiverLLVMBaseTypeName_9990, var_routineKind_10266, temp_7.readProperty_mSystemRoutineName (), temp_8.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
  const GALGAS_systemRoutineDeclarationAST temp_9 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_10 = this ;
  GALGAS_lstring var_implementationRoutineMangledName_10891 = function_systemImplementationMangledNameFromAST (var_receiverLLVMBaseTypeName_9990, var_routineKind_10266, temp_9.readProperty_mSystemRoutineName (), temp_10.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  GALGAS_routineTypedSignature var_signature_11169 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_11 = this ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_11.readProperty_mFormalArgumentList (), var_signature_11169, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)) ;
  }
  GALGAS_unifiedTypeMapEntry var_returnTypeProxy_11267 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_12 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_12.readProperty_mReturnTypeName (), var_returnTypeProxy_11267, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 320)) ;
  }
  GALGAS_bool var_mutatingRoutine_11306 = GALGAS_bool (false) ;
  GALGAS_bool var_noUnusedWarning_11336 = GALGAS_bool (false) ;
  const GALGAS_systemRoutineDeclarationAST temp_13 = this ;
  cEnumerator_lstringlist enumerator_11367 (temp_13.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_11367.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsEqual, enumerator_11367.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 325)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = var_noUnusedWarning_11336.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            fixItArray16.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_11367.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), fixItArray16  COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)) ;
          }
        }
        var_noUnusedWarning_11336 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_14) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsEqual, enumerator_11367.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 330)))).boolEnum () ;
        if (kBoolTrue == test_17) {
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_mutatingRoutine_11306.boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              fixItArray19.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11367.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), fixItArray19  COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)) ;
            }
          }
          var_mutatingRoutine_11306 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_17) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        fixItArray20.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_11367.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), fixItArray20  COMMA_SOURCE_FILE ("declaration-svc.galgas", 336)) ;
      }
    }
    enumerator_11367.gotoNextObject () ;
  }
  GALGAS_routineAttributes var_attributes_12079 = GALGAS_routineAttributes::constructor_mutatingRoutine (SOURCE_FILE ("declaration-svc.galgas", 341)) ;
  const GALGAS_systemRoutineDeclarationAST temp_21 = this ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_12162 = extensionGetter_routineLLVMDictionaryForSystemRoutine (temp_21.readProperty_mMode (), var_userRoutineMangledName_10719.readProperty_string (), var_implementationRoutineMangledName_10891.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 343)) ;
  const GALGAS_systemRoutineDeclarationAST temp_22 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_23 = this ;
  GALGAS_lstring var_routineMangledName_12310 = extensionGetter_mangledName (var_signature_11169, temp_22.readProperty_mReceiverTypeName ().readProperty_string (), temp_23.readProperty_mSystemRoutineName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 347)) ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_24 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_25 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_12310, temp_24.readProperty_mPublic (), var_signature_11169, var_returnTypeProxy_11267, var_routineLLVMNameDict_12162, GALGAS_bool (true), temp_25.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_26 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_27 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_28 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_29 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_30 = this ;
  const GALGAS_systemRoutineDeclarationAST temp_31 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_26.readProperty_mReceiverTypeName (), temp_27.readProperty_mMode (), GALGAS_bool (false), var_routineKind_10266, var_noUnusedWarning_11336.operator_not (SOURCE_FILE ("declaration-svc.galgas", 363)), GALGAS_bool (true), var_attributes_12079, var_implementationRoutineMangledName_10891, temp_28.readProperty_mFormalArgumentList (), var_noUnusedWarning_11336, temp_29.readProperty_mInstructionList (), temp_30.readProperty_mEndOfInstructionListLocation (), temp_31.readProperty_mReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 358)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_systemUserRoutineIR::constructor_new (var_userRoutineMangledName_10719, GALGAS_bool (false), GALGAS_bool (false), var_implementationRoutineMangledName_10891.readProperty_string (), var_signature_11169, var_selfTypeProxy_9944, GALGAS_bool (kIsEqual, var_routineKind_10266.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-svc.galgas", 380)))), var_returnTypeProxy_11267  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmFunctionPrototype'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmFunctionPrototype (const GALGAS_string & constinArgument_inReturnTypeLLVMName,
                                              const GALGAS_string & constinArgument_inFunctionName,
                                              const GALGAS_omnibusType & constinArgument_inReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & constinArgument_inFormalArgumentListForGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inReturnTypeLLVMName ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
  GALGAS_bool var_first_14784 = GALGAS_bool (true) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 414)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
      var_first_14784 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_14968 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_14968.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_first_14784.boolEnum () ;
      if (kBoolTrue == test_1) {
        var_first_14784 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)) ;
    }
    switch (enumerator_14968.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14968.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (enumerator_14968.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14968.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (function_llvmNameForLocalVariable (enumerator_14968.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14968.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (function_llvmNameForLocalVariable (enumerator_14968.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)) ;
      }
      break ;
    }
    enumerator_14968.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListIR,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmFunctionPrototype (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListIR operand3 = GALGAS_routineFormalArgumentListIR::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                         inCompiler
                                                                                                         COMMA_THERE) ;
  return function_llvmFunctionPrototype (operand0,
                                         operand1,
                                         operand2,
                                         operand3,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmFunctionPrototype ("llvmFunctionPrototype",
                                                                       functionWithGenericHeader_llvmFunctionPrototype,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       4,
                                                                       functionArgs_llvmFunctionPrototype) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateSectionDispatcher'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateSectionDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inTargetName,
                                        const GALGAS_targetParameters constinArgument_inTargetParameters,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS_sectionIRlist constinArgument_inSectionIRlist,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_sectionIRlist enumerator_15915 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_15900 ((uint32_t) 0) ;
  while (enumerator_15915.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_15915.current (HERE).readProperty_invocationFromAnyMode ().boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_15992 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromAnyMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)) ;
        var_s_15992 = var_s_15992.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15915.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 451)) ;
        var_s_15992 = var_s_15992.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15915.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 452)) ;
        var_s_15992 = var_s_15992.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15900.getter_string (SOURCE_FILE ("declaration-svc.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 453)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15992, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 454)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_16472 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromUserMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 456)) ;
      var_s_16472 = var_s_16472.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15915.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)) ;
      var_s_16472 = var_s_16472.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15915.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 461)) ;
      var_s_16472 = var_s_16472.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15900.getter_string (SOURCE_FILE ("declaration-svc.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 462)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16472, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 463)) ;
    }
    enumerator_15915.gotoNextObject () ;
    index_15900.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)) ;
  cEnumerator_sectionIRlist enumerator_17138 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_17105 ((uint32_t) 0) ;
  while (enumerator_17138.hasCurrentObject ()) {
    GALGAS_string var_s_17177 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
    var_s_17177 = var_s_17177.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_17138.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
    var_s_17177 = var_s_17177.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_17138.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 476)) ;
    var_s_17177 = var_s_17177.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_17105.getter_string (SOURCE_FILE ("declaration-svc.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 477)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_17177, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)) ;
    enumerator_17138.gotoNextObject () ;
    index_17105.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 470)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 480)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 485)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 486)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generatePrimitiveAndServiceDispatcher'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generatePrimitiveAndServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                                    const GALGAS_string constinArgument_inTargetName,
                                                    GALGAS_string & ioArgument_ioAssemblerCode,
                                                    const GALGAS_primitiveAndServiceIRlist constinArgument_inServiceList,
                                                    const GALGAS_targetParameters constinArgument_inTargetParameters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_18491 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_18476 ((uint32_t) 0) ;
  while (enumerator_18491.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_18491.current (HERE).readProperty_mHasReturnValue ().boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_18560 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryWithReturnValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 506)) ;
        var_s_18560 = var_s_18560.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_18491.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 510)) ;
        var_s_18560 = var_s_18560.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_18476.getter_string (SOURCE_FILE ("declaration-svc.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 511)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18560, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 512)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_18905 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryNoReturnedValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 514)) ;
      var_s_18905 = var_s_18905.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_18491.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)) ;
      var_s_18905 = var_s_18905.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_18476.getter_string (SOURCE_FILE ("declaration-svc.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 519)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18905, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 520)) ;
    }
    enumerator_18491.gotoNextObject () ;
    index_18476.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 504)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_19417 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_19402 ((uint32_t) 0) ;
  while (enumerator_19417.hasCurrentObject ()) {
    GALGAS_string var_s_19448 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 528)) ;
    var_s_19448 = var_s_19448.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_19417.current (HERE).readProperty_mImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 532)) ;
    var_s_19448 = var_s_19448.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_19402.getter_string (SOURCE_FILE ("declaration-svc.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 533)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_19448, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 534)) ;
    enumerator_19417.gotoNextObject () ;
    index_19402.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 527)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 536)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemUserRoutineIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mMangledImplementationName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 557)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR svcDeclarationGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_svcDeclarationGeneration (GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_systemUserRoutineIR temp_0 = this ;
  GALGAS_string var_userMangledName_21052 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 567)) ;
  const GALGAS_systemUserRoutineIR temp_1 = this ;
  GALGAS_string var_implementationMangledName_21127 = temp_1.readProperty_mMangledImplementationName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 568)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_systemUserRoutineIR temp_3 = this ;
    test_2 = temp_3.readProperty_mIsSection ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_21052, var_implementationMangledName_21127, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 570)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_21052, var_implementationMangledName_21127, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_systemUserRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 583)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_systemUserRoutineIR temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 584)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 585)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_systemUserRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)) ;
  }
  const GALGAS_systemUserRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)) ;
  GALGAS_bool var_first_21990 = GALGAS_bool (true) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_systemUserRoutineIR temp_5 = this ;
    test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mReceiverTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 591)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_systemUserRoutineIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_6.readProperty_mReceiverTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).add_operation (GALGAS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)) ;
      var_first_21990 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_systemUserRoutineIR temp_7 = this ;
  cEnumerator_routineTypedSignature enumerator_22197 (temp_7.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_22197.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_first_21990.boolEnum () ;
      if (kBoolTrue == test_8) {
        var_first_21990 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 599)) ;
    }
    switch (enumerator_22197.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_22197.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_22197.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_22197.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)) ;
      }
      break ;
    }
    enumerator_22197.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkRequiredProcedures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredFunctionDeclarationListAST enumerator_2313 (constinArgument_inAST.readProperty_mRequiredFunctionListAST (), kENUMERATION_UP) ;
  while (enumerator_2313.hasCurrentObject ()) {
    GALGAS_lstring var_requiredFunctionSignature_2349 = extensionGetter_routineSignature (enumerator_2313.current (HERE).readProperty_mFormalArgumentList (), enumerator_2313.current (HERE).readProperty_mName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    GALGAS_string var_requiredFunctionMangledName_2465 = enumerator_2313.current (HERE).readProperty_mName ().readProperty_string ().add_operation (var_requiredFunctionSignature_2349.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inContext.readProperty_mRoutineMap ().getter_hasKey (var_requiredFunctionMangledName_2465 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 63)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2313.current (HERE).readProperty_mName ().readProperty_location (), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool var_implementedPublic_2809 ;
      GALGAS_routineTypedSignature var_implementedSignature_2840 ;
      GALGAS_unifiedTypeMapEntry var_implementedReturnTypeProxy_2874 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_2949 ;
      GALGAS_bool var_implementedIsExported_2988 ;
      GALGAS_mode var_implementedMode_3023 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_2465.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 67)), var_implementedPublic_2809, var_implementedSignature_2840, var_implementedReturnTypeProxy_2874, var_implementedModeDictionary_2949, var_implementedIsExported_2988, var_implementedMode_3023, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      GALGAS_location var_errorLocation_3057 = constinArgument_inContext.readProperty_mRoutineMap ().getter_locationForKey (var_requiredFunctionMangledName_2465, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GALGAS_routineTypedSignature var_requiredTypedSignature_3260 ;
      {
      routine_routineTypedSignature_32_ (constinArgument_inContext.readProperty_mTypeMap (), enumerator_2313.current (HERE).readProperty_mFormalArgumentList (), var_requiredTypedSignature_3260, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_typedString (var_requiredTypedSignature_3260, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2840, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_3057, GALGAS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3260, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)).add_operation (GALGAS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_implementedReturnTypeProxy_2874.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-required-proc.galgas", 83)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_3057, GALGAS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_implementedMode_3023.objectCompare (enumerator_2313.current (HERE).readProperty_mExecutionMode ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_3057, GALGAS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2313.current (HERE).readProperty_mExecutionMode (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_implementedPublic_2809.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_3057, GALGAS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 100)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_bool test_11 = enumerator_2313.current (HERE).readProperty_mIsExported () ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_2988.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 103)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106))) ;
          inCompiler->emitSemanticError (var_errorLocation_3057, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 104)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          GALGAS_bool test_14 = var_implementedIsExported_2988 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2313.current (HERE).readProperty_mIsExported ().operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 107)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_3057, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 108)) ;
          }
        }
      }
    }
    enumerator_2313.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 176)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_externRoutineIR temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mReturnType ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 177)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 178)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_externRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 180)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 180)) ;
  }
  const GALGAS_externRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 182)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 182)) ;
  const GALGAS_externRoutineIR temp_4 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_7372 (temp_4.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_7372.hasCurrentObject ()) {
    switch (enumerator_7372.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7372.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)).add_operation (enumerator_7372.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 187)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7372.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)).add_operation (function_llvmNameForLocalVariable (enumerator_7372.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 189)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7372.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)).add_operation (function_llvmNameForLocalVariable (enumerator_7372.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 191)) ;
      }
      break ;
    }
    if (enumerator_7372.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 194)) ;
    }
    enumerator_7372.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)).add_operation (GALGAS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 196)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_isrDeclarationAST temp_0 = this ;
  GALGAS_lstring var_receiverTypeName_2186 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 53)) ;
  const GALGAS_isrDeclarationAST temp_1 = this ;
  GALGAS_string var_s_2264 = var_receiverTypeName_2186.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)) ;
  {
  const GALGAS_isrDeclarationAST temp_2 = this ;
  const GALGAS_isrDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::constructor_new (var_s_2264, temp_2.readProperty_mISRName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)), temp_3, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)) ;
  }
  const GALGAS_isrDeclarationAST temp_4 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_4.readProperty_mISRInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 57)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_2186.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioGraph.setter_noteNode (var_receiverTypeName_2186 COMMA_SOURCE_FILE ("declaration-isr.galgas", 59)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_isrDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_isrDeclarationAST temp_0 = this ;
  GALGAS_lstring var_receiverTypeName_2780 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 66)) ;
  const GALGAS_isrDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("function ").add_operation (var_receiverTypeName_2780.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_isrDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_isrDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mISRName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInContext (GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                    GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                    GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                    GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_isrDeclarationAST temp_0 = this ;
  const GALGAS_isrDeclarationAST temp_1 = this ;
  const GALGAS_isrDeclarationAST temp_2 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedISRDeclaration::constructor_new (temp_0.readProperty_mISRName (), temp_1.readProperty_mMode (), temp_2.readProperty_mDriverName ()  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)) ;
  const GALGAS_isrDeclarationAST temp_3 = this ;
  GALGAS_lstring var_driverLLVMBaseTypeName_4330 = function_llvmDriverNameFromName (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 93)) ;
  const GALGAS_isrDeclarationAST temp_4 = this ;
  GALGAS_lstring var_isrRoutineMangledName_4404 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_4330.readProperty_string (), temp_4.readProperty_mISRName (), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  const GALGAS_isrDeclarationAST temp_5 = this ;
  const GALGAS_isrDeclarationAST temp_6 = this ;
  const GALGAS_isrDeclarationAST temp_7 = this ;
  const GALGAS_isrDeclarationAST temp_8 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_5.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), temp_6.readProperty_mMode (), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-isr.galgas", 99)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutatingRoutine (SOURCE_FILE ("declaration-isr.galgas", 102)), var_isrRoutineMangledName_4404, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 104)), GALGAS_bool (true), temp_7.readProperty_mISRInstructionList (), temp_8.readProperty_mEndOfISRDeclaration (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 108))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 95)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedISRDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_decoratedISRDeclaration::method_semanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_selfType_6011 ;
  const GALGAS_decoratedISRDeclaration temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)), var_selfType_6011, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)) ;
  const GALGAS_decoratedISRDeclaration temp_1 = this ;
  GALGAS_interruptionPanicCode joker_6103 ; // Joker input parameter
  constinArgument_inContext.readProperty_mAvailableInterruptMap ().method_searchKey (temp_1.readProperty_mISRName (), joker_6103, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 131)) ;
  {
  const GALGAS_decoratedISRDeclaration temp_2 = this ;
  const GALGAS_decoratedISRDeclaration temp_3 = this ;
  const GALGAS_decoratedISRDeclaration temp_4 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (temp_2.readProperty_mISRName (), var_selfType_6011, temp_3.readProperty_mDriverName ().readProperty_string (), temp_4.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 132)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_3291 = GALGAS_string ("guard.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_guardDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_guardDeclarationAST temp_2 = this ;
      var_s_3291.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)) ;
    }
  }
  const GALGAS_guardDeclarationAST temp_3 = this ;
  var_s_3291.plusAssign_operation(temp_3.readProperty_mGuardName ().readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)) ;
  const GALGAS_guardDeclarationAST temp_4 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_3481 (temp_4.readProperty_mGuardFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_3481.hasCurrentObject ()) {
    var_s_3291.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3481.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (enumerator_3481.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)) ;
    enumerator_3481.gotoNextObject () ;
  }
  var_s_3291.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 93)) ;
  {
  const GALGAS_guardDeclarationAST temp_5 = this ;
  const GALGAS_guardDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::constructor_new (var_s_3291, temp_5.readProperty_mGuardName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)), temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)) ;
  }
  const GALGAS_guardDeclarationAST temp_7 = this ;
  cEnumerator_routineFormalArgumentListAST enumerator_3719 (temp_7.readProperty_mGuardFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_3719.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_3719.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 97)) ;
    }
    enumerator_3719.gotoNextObject () ;
  }
  const GALGAS_guardDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mGuardInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 99)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_guardDeclarationAST temp_10 = this ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_guardDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-guard.galgas", 101)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_guardDeclarationAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_guardDeclarationAST temp_0 = this ;
  const GALGAS_guardDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("guard ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (temp_1.readProperty_mGuardName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_guardDeclarationAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_guardDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mGuardName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                      GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                      GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                      GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                      GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                      GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                      GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                      GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature var_signature_5559 ;
  {
  const GALGAS_guardDeclarationAST temp_0 = this ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mGuardFormalArgumentList (), var_signature_5559, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 132)) ;
  }
  const GALGAS_guardDeclarationAST temp_1 = this ;
  const GALGAS_guardDeclarationAST temp_2 = this ;
  GALGAS_lstring var_guardMangledName_5600 = extensionGetter_mangledName (var_signature_5559, temp_1.readProperty_mReceiverTypeName ().readProperty_string (), temp_2.readProperty_mGuardName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 134)) ;
  const GALGAS_guardDeclarationAST temp_3 = this ;
  const GALGAS_guardDeclarationAST temp_4 = this ;
  const GALGAS_guardDeclarationAST temp_5 = this ;
  GALGAS_lstring var_guardUserLLVMName_5756 = function_guardUserLLVMName (temp_3.readProperty_mReceiverLLVMBaseTypeName (), temp_4.readProperty_mGuardName (), temp_5.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 136)) ;
  const GALGAS_guardDeclarationAST temp_6 = this ;
  const GALGAS_guardDeclarationAST temp_7 = this ;
  const GALGAS_guardDeclarationAST temp_8 = this ;
  GALGAS_lstring var_guardImplementationLLVMName_5942 = function_guardImplementationLLVMName (temp_6.readProperty_mReceiverLLVMBaseTypeName (), temp_7.readProperty_mGuardName (), temp_8.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 142)) ;
  {
  const GALGAS_guardDeclarationAST temp_9 = this ;
  ioArgument_ioContext.mProperty_mGuardMap.setter_insertKey (var_guardMangledName_5600, temp_9.readProperty_mIsPublic (), var_signature_5559, var_guardUserLLVMName_5756, var_guardImplementationLLVMName_5942, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 147)) ;
  }
  const GALGAS_guardDeclarationAST temp_10 = this ;
  const GALGAS_guardDeclarationAST temp_11 = this ;
  const GALGAS_guardDeclarationAST temp_12 = this ;
  const GALGAS_guardDeclarationAST temp_13 = this ;
  const GALGAS_guardDeclarationAST temp_14 = this ;
  const GALGAS_guardDeclarationAST temp_15 = this ;
  const GALGAS_guardDeclarationAST temp_16 = this ;
  const GALGAS_guardDeclarationAST temp_17 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedGuardDeclaration::constructor_new (temp_10.readProperty_mReceiverTypeName (), temp_11.readProperty_mGuardName (), temp_12.readProperty_mIsPublic (), temp_13.readProperty_mGuardAttributeList (), temp_14.readProperty_mGuardFormalArgumentList (), temp_15.readProperty_mGuardKind (), temp_16.readProperty_mGuardInstructionList (), temp_17.readProperty_mEndOfGuardDeclaration ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'guardUserLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_guardUserLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                           const GALGAS_lstring & constinArgument_inGuardName,
                                           const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7144 = GALGAS_string ("guard.user.") ;
  var_s_7144.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
  var_s_7144.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 176)) ;
  var_s_7144.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 177)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7283 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_7283.hasCurrentObject ()) {
    var_s_7144.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7283.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (enumerator_7283.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)) ;
    enumerator_7283.gotoNextObject () ;
  }
  var_s_7144.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_7144, constinArgument_inGuardName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 182)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_guardUserLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_guardUserLLVMName (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand2 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_guardUserLLVMName (operand0,
                                     operand1,
                                     operand2,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_guardUserLLVMName ("guardUserLLVMName",
                                                                   functionWithGenericHeader_guardUserLLVMName,
                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                   3,
                                                                   functionArgs_guardUserLLVMName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'guardImplementationLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_guardImplementationLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                     const GALGAS_lstring & constinArgument_inGuardName,
                                                     const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7841 = GALGAS_string ("guard.implementation.") ;
  var_s_7841.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  var_s_7841.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 193)) ;
  var_s_7841.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 194)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7990 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_7990.hasCurrentObject ()) {
    var_s_7841.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7990.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (enumerator_7990.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
    enumerator_7990.gotoNextObject () ;
  }
  var_s_7841.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_7841, constinArgument_inGuardName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 199)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_guardImplementationLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_guardImplementationLLVMName (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand2 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_guardImplementationLLVMName (operand0,
                                               operand1,
                                               operand2,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_guardImplementationLLVMName ("guardImplementationLLVMName",
                                                                             functionWithGenericHeader_guardImplementationLLVMName,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             3,
                                                                             functionArgs_guardImplementationLLVMName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedGuardDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_decoratedGuardDeclaration::method_semanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_decoratedGuardDeclaration temp_0 = this ;
  GALGAS_omnibusType var_receiverType_10022 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mReceiverTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)) ;
  GALGAS_bool var_warnIfUnused_10119 = GALGAS_bool (true) ;
  const GALGAS_decoratedGuardDeclaration temp_1 = this ;
  cEnumerator_lstringlist enumerator_10146 (temp_1.readProperty_mGuardAttributeList (), kENUMERATION_UP) ;
  while (enumerator_10146.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_10146.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 242)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_warnIfUnused_10119.operator_not (SOURCE_FILE ("declaration-guard.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_10146.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)) ;
          }
        }
        var_warnIfUnused_10119 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_10146.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)) ;
    }
    enumerator_10146.gotoNextObject () ;
  }
  GALGAS_universalValuedObjectMap var_universalMap_10552 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_10552, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 253)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_10552, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 254)) ;
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_10705 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 255)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_10755 ;
  GALGAS_allocaList var_allocaList_10802 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 257)) ;
  GALGAS_instructionListIR var_instructionGenerationList_10843 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 258)) ;
  const GALGAS_decoratedGuardDeclaration temp_6 = this ;
  switch (temp_6.readProperty_mGuardKind ().enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      const GALGAS_decoratedGuardDeclaration temp_7 = this ;
      GALGAS_lstring var_resultVarName_10962 = GALGAS_lstring::constructor_new (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)), temp_7.readProperty_mGuardName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)) ;
      GALGAS_omnibusType var_resultType_11168 = extensionGetter_booleanType (constinArgument_inContext, var_resultVarName_10962.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 264)) ;
      var_allocaList_10802.addAssign_operation (function_llvmNameForLocalVariable (var_resultVarName_10962.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)), var_resultType_11168, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_10552, var_resultVarName_10962, var_resultType_11168, var_resultVarName_10962, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 278)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 274)) ;
      }
      {
      const GALGAS_decoratedGuardDeclaration temp_8 = this ;
      routine_enterFormalArguments (constinArgument_inContext, temp_8.readProperty_mGuardFormalArgumentList (), var_universalMap_10552, var_formalArguments_10705, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 282)) ;
      }
      var_convenienceGuardGenerationIR_10755 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 289)) ;
      const GALGAS_decoratedGuardDeclaration temp_9 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_9.readProperty_mGuardInstructionList (), var_receiverType_10022, GALGAS_routineAttributes::constructor_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 293)), constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 295)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10552, var_allocaList_10802, var_instructionGenerationList_10843, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 291)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_13737 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (temp_6.readProperty_mGuardKind ().unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_12602_baseGuardInstruction = extractPtr_13737->mAssociatedValue0 ;
      {
      const GALGAS_decoratedGuardDeclaration temp_10 = this ;
      routine_enterFormalArguments (constinArgument_inContext, temp_10.readProperty_mGuardFormalArgumentList (), var_universalMap_10552, var_formalArguments_10705, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 304)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((cPtr_callInstructionAST *) extractedValue_12602_baseGuardInstruction.ptr (), var_receiverType_10022, GALGAS_routineAttributes::constructor_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 314)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 316)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10552, var_convenienceGuardGenerationIR_10755, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 312)) ;
      const GALGAS_decoratedGuardDeclaration temp_11 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_11.readProperty_mGuardInstructionList (), var_receiverType_10022, GALGAS_routineAttributes::constructor_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 325)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 327)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10552, var_allocaList_10802, var_instructionGenerationList_10843, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 323)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_10552, var_instructionGenerationList_10843, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 336)) ;
  {
  const GALGAS_decoratedGuardDeclaration temp_12 = this ;
  extensionSetter_closeBranch (var_universalMap_10552, temp_12.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 337)) ;
  }
  {
  const GALGAS_decoratedGuardDeclaration temp_13 = this ;
  extensionSetter_closeOverride (var_universalMap_10552, temp_13.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 338)) ;
  }
  const GALGAS_decoratedGuardDeclaration temp_14 = this ;
  const GALGAS_decoratedGuardDeclaration temp_15 = this ;
  GALGAS_lstring var_guardUserLLVMName_13996 = function_guardUserLLVMName (var_receiverType_10022.readProperty_llvmBaseTypeName (), temp_14.readProperty_mGuardName (), temp_15.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 340)) ;
  const GALGAS_decoratedGuardDeclaration temp_16 = this ;
  const GALGAS_decoratedGuardDeclaration temp_17 = this ;
  GALGAS_lstring var_guardImplementationLLVMName_14137 = function_guardImplementationLLVMName (var_receiverType_10022.readProperty_llvmBaseTypeName (), temp_16.readProperty_mGuardName (), temp_17.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 345)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardUserRoutineIR::constructor_new (var_guardUserLLVMName_13996, GALGAS_bool (false), var_warnIfUnused_10119, var_guardImplementationLLVMName_14137.readProperty_string (), var_formalArguments_10705, var_receiverType_10022, var_convenienceGuardGenerationIR_10755  COMMA_SOURCE_FILE ("declaration-guard.galgas", 351))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 351)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardImplementationRoutineIR::constructor_new (var_guardImplementationLLVMName_14137, GALGAS_bool (false), var_warnIfUnused_10119, var_formalArguments_10705, var_receiverType_10022, var_convenienceGuardGenerationIR_10755, var_allocaList_10802, var_instructionGenerationList_10843  COMMA_SOURCE_FILE ("declaration-guard.galgas", 360))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 360)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_standAloneProcedureCallInstructionAST::method_baseGuardAnalyze (const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                          const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                          const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                          const GALGAS_mode /* constinArgument_inMode */,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                          GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                          GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_standAloneProcedureCallInstructionAST temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mSandAloneRoutineName ().readProperty_location (), GALGAS_string ("NOT HANDLED YET"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 398)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST baseGuardAnalyze'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procedureCallInstructionAST::method_baseGuardAnalyze (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                const GALGAS_mode constinArgument_inMode,
                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allocaList var_baseGuardAllocaList_17032 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 413)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_17082 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 414)) ;
  GALGAS_objectIR var_currentObject_17238 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_procedureCallInstructionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 418)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_procedureCallInstructionAST temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 419)) ;
          var_currentObject_17238.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        var_currentObject_17238 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 421))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 421)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_procedureCallInstructionAST temp_5 = this ;
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, temp_5.readProperty_mIdentifier (), constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 424)) ;
  }
  const GALGAS_procedureCallInstructionAST temp_6 = this ;
  GALGAS_accessInAssignmentListAST var_accessList_17725 = temp_6.readProperty_mAccessList () ;
  GALGAS_accessInAssignmentAST var_lastAccess_17784 ;
  {
  var_accessList_17725.setter_popLast (var_lastAccess_17784, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_17829 (var_accessList_17725, kENUMERATION_UP) ;
  while (enumerator_17829.hasCurrentObject ()) {
    GALGAS_omnibusType var_currentType_17862 = extensionGetter_type (var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 436)) ;
    switch (enumerator_17829.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_19037 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_17829.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_17943_propertyName = extractPtr_19037->mAssociatedValue0 ;
        GALGAS_propertyGetterMap var_propertyGetterMap_18076 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_17862, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 440)) ;
        GALGAS_propertyGetterKind var_propertyAccess_18277 ;
        GALGAS_propertyVisibility joker_18269 ; // Joker input parameter
        var_propertyGetterMap_18076.method_searchKey (extractedValue_17943_propertyName, joker_18269, var_propertyAccess_18277, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 442)) ;
        switch (var_propertyAccess_18277.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_17943_propertyName.readProperty_location (), GALGAS_string ("a constant property not available in this context"), fixItArray7  COMMA_SOURCE_FILE ("declaration-guard.galgas", 445)) ;
            var_currentObject_17238.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_18902 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_18277.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_18491_propertyType = extractPtr_18902->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_18510_propertyIndex = extractPtr_18902->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_18572 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_18572, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 447)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_17082, var_currentType_17862, extensionGetter_llvmName (var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 450)), var_property_5F_llvmName_18572, extractedValue_18510_propertyIndex, extractedValue_17943_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 448)) ;
            }
            var_currentObject_17238 = GALGAS_objectIR::constructor_reference (extractedValue_18491_propertyType, var_property_5F_llvmName_18572  COMMA_SOURCE_FILE ("declaration-guard.galgas", 455)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_17943_propertyName.readProperty_location (), GALGAS_string ("a computed property cannot be named in guard"), fixItArray8  COMMA_SOURCE_FILE ("declaration-guard.galgas", 457)) ;
            var_currentObject_17238.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_19136 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_17829.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_location extractedValue_19075_endOfIndex = extractPtr_19136->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (extractedValue_19075_endOfIndex, GALGAS_string ("not handled yet"), fixItArray9  COMMA_SOURCE_FILE ("declaration-guard.galgas", 460)) ;
        var_currentObject_17238.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_17829.gotoNextObject () ;
  }
  switch (var_lastAccess_17784.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_20650 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_17784.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_19234_methodName = extractPtr_20650->mAssociatedValue0 ;
      GALGAS_omnibusType var_currentType_19256 = extensionGetter_type (var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 466)) ;
      const GALGAS_procedureCallInstructionAST temp_10 = this ;
      GALGAS_lstring var_guardMangledName_19299 = extensionGetter_mangledName (temp_10.readProperty_mArguments (), var_currentType_19256.readProperty_omnibusTypeDescriptionName (), extractedValue_19234_methodName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 467)) ;
      GALGAS_routineTypedSignature var_formalSignature_19493 ;
      GALGAS_lstring var_guardRoutineImplentationLLVMName_19517 ;
      GALGAS_bool joker_19485 ; // Joker input parameter
      GALGAS_lstring joker_19509 ; // Joker input parameter
      constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_19299, joker_19485, var_formalSignature_19493, joker_19509, var_guardRoutineImplentationLLVMName_19517, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 468)) ;
      GALGAS_procCallEffectiveParameterListIR temp_11 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 472)) ;
      temp_11.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 471)), GALGAS_objectIR::constructor_reference (var_currentType_19256, extensionGetter_llvmName (var_currentObject_17238, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 472))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 472))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 472)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_19632 = temp_11 ;
      {
      const GALGAS_procedureCallInstructionAST temp_12 = this ;
      routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_19493, temp_12.readProperty_mArguments (), extractedValue_19234_methodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_17032, var_baseGuardInstructionGenerationList_17082, var_effectiveParameterListIR_19632, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 475)) ;
      }
      outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_17032, var_baseGuardInstructionGenerationList_17082, var_guardRoutineImplentationLLVMName_19517.readProperty_string (), var_effectiveParameterListIR_19632  COMMA_SOURCE_FILE ("declaration-guard.galgas", 491)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_20762 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_17784.unsafePointer ()) ;
      const GALGAS_location extractedValue_20684_endOfIndex = extractPtr_20762->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (extractedValue_20684_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray13  COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)) ;
      outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardUserRoutineIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mMangledImplementationGuardName ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR svcDeclarationGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_svcDeclarationGeneration (GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                               GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardUserRoutineIR temp_0 = this ;
  GALGAS_string var_userMangledName_22561 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 539)) ;
  const GALGAS_guardUserRoutineIR temp_1 = this ;
  GALGAS_string var_implementationMangledName_22636 = temp_1.readProperty_mMangledImplementationGuardName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 540)) ;
  const GALGAS_guardUserRoutineIR temp_2 = this ;
  switch (temp_2.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_22561, var_implementationMangledName_22636, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 543)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_22561, var_implementationMangledName_22636, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 545)) ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardUserRoutineIR temp_0 = this ;
  const GALGAS_guardUserRoutineIR temp_1 = this ;
  const GALGAS_guardUserRoutineIR temp_2 = this ;
  GALGAS_string var_prototype_23331 = function_llvmFunctionPrototype (GALGAS_string ("i1"), temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 561)), temp_1.readProperty_mReceiverType (), temp_2.readProperty_mFormalArgumentListForGeneration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 559)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_23331, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardImplementationRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardImplementationRoutineIR temp_0 = this ;
  GALGAS_string var_guardRoutineName_24324 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 585)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_24324, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 586)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 586)) ;
  const GALGAS_guardImplementationRoutineIR temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_1.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 587)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_3) {
    const GALGAS_guardImplementationRoutineIR temp_4 = this ;
    temp_2 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_24456 = temp_2 ;
  GALGAS_bool var_first_24584 = GALGAS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_24456.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24456.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)) ;
      var_first_24584 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_guardImplementationRoutineIR temp_6 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_24772 (temp_6.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_24772.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_first_24584.boolEnum () ;
      if (kBoolTrue == test_7) {
        var_first_24584 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)) ;
    }
    switch (enumerator_24772.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24772.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (enumerator_24772.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24772.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)).add_operation (function_llvmNameForLocalVariable (enumerator_24772.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24772.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)).add_operation (function_llvmNameForLocalVariable (enumerator_24772.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)) ;
      }
      break ;
    }
    enumerator_24772.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)) ;
  const GALGAS_guardImplementationRoutineIR temp_8 = this ;
  GALGAS_allocaList var_allocaList_25422 = temp_8.readProperty_mAllocaList () ;
  const GALGAS_guardImplementationRoutineIR temp_9 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_25536 (temp_9.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_25536.hasCurrentObject ()) {
    switch (enumerator_25536.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_25422.addAssign_operation (function_llvmNameForLocalVariable (enumerator_25536.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 619)), enumerator_25536.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 619)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_25536.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_25422, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 624)) ;
  const GALGAS_guardImplementationRoutineIR temp_10 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_25920 (temp_10.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_25920.hasCurrentObject ()) {
    switch (enumerator_25920.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_26043 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25920.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_26043, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (enumerator_25920.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (var_llvmType_26043, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)).add_operation (function_llvmNameForLocalVariable (enumerator_25920.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_25920.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_26338 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_26421 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 637)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 637)) ;
  const GALGAS_guardImplementationRoutineIR temp_11 = this ;
  switch (temp_11.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      GALGAS_string var_accepted_5F_label_26620 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)).add_operation (GALGAS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)) ;
      GALGAS_string var_rejected_5F_label_26694 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 642)).add_operation (GALGAS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 642)) ;
      const GALGAS_guardImplementationRoutineIR temp_12 = this ;
      extensionMethod_instructionListLLVMCode (temp_12.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_26421, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_accepted_5F_llvmName_26338, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_26421, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (var_accepted_5F_label_26620, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (var_rejected_5F_label_26694, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_label_26620.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 647)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_rejected_5F_label_26694.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 649)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 650)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 651)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_28708 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (temp_11.readProperty_mGuardKindGenerationIR ().unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_27359_baseGuardAllocaList = extractPtr_28708->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_27379_baseGuardInstructionGenerationList = extractPtr_28708->mAssociatedValue1 ;
      const GALGAS_string extractedValue_27414_baseGuardMangledName = extractPtr_28708->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_27435_baseGuardEffectiveParameterList = extractPtr_28708->mAssociatedValue3 ;
      extensionMethod_generateAllocaList (extractedValue_27359_baseGuardAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 653)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_27379_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_27414_baseGuardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 655)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 655)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 656)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_27814 (extractedValue_27435_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_27814.hasCurrentObject ()) {
        switch (enumerator_27814.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27814.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)).add_operation (extensionGetter_llvmName (enumerator_27814.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27814.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)).add_operation (extensionGetter_llvmName (enumerator_27814.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27814.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)).add_operation (extensionGetter_llvmName (enumerator_27814.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)) ;
          }
          break ;
        }
        if (enumerator_27814.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 667)) ;
        }
        enumerator_27814.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 669)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 670)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 671)) ;
      const GALGAS_guardImplementationRoutineIR temp_13 = this ;
      extensionMethod_instructionListLLVMCode (temp_13.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 672)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 673)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 674)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 675)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 676)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 678)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 679)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardImplementationRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_guardImplementationRoutineIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 688)) ;
  const GALGAS_guardImplementationRoutineIR temp_1 = this ;
  switch (temp_1.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_29595 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (temp_1.readProperty_mGuardKindGenerationIR ().unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_29342_baseGuardInstructionGenerationList = extractPtr_29595->mAssociatedValue1 ;
      const GALGAS_string extractedValue_29377_baseGuardImplementationMangledName = extractPtr_29595->mAssociatedValue2 ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_29377_baseGuardImplementationMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 692)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_29342_baseGuardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 693)) ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_routineTypedSignature (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                    const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                    GALGAS_routineTypedSignature & outArgument_outSignature,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 167)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6237 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_6237.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_typeProxy_6340 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6237.current_mFormalArgumentTypeName (HERE), var_typeProxy_6340, inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 169)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_6237.current_mFormalArgumentPassingMode (HERE), enumerator_6237.current_mSelector (HERE), var_typeProxy_6340, enumerator_6237.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 170)) ;
    enumerator_6237.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature2'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_32_ (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                        const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                        GALGAS_routineTypedSignature & outArgument_outSignature,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 180)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6861 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_6861.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_typeProxy_6916 = extensionGetter_searchKey (inArgument_inTypeMap, enumerator_6861.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 182)) ;
    outArgument_outSignature.addAssign_operation (enumerator_6861.current_mFormalArgumentPassingMode (HERE), enumerator_6861.current_mSelector (HERE), var_typeProxy_6916, enumerator_6861.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 183)) ;
    enumerator_6861.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterFormalArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterFormalArguments (const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentsAST,
                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListIR & ioArgument_ioFormalArguments,
                                   const GALGAS_bool constinArgument_inUnusedWarning,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentListAST enumerator_9473 (constinArgument_inFormalArgumentsAST, kENUMERATION_UP) ;
  while (enumerator_9473.hasCurrentObject ()) {
    GALGAS_omnibusType var_typeProxy_9528 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), enumerator_9473.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_9473.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9528, enumerator_9473.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("formal-arguments.galgas", 242)) ;
    switch (enumerator_9473.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, enumerator_9473.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9473.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9528, enumerator_9473.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 247)) ;
                }
              }
            }
            if (kBoolFalse == test_1) {
              {
              extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9473.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9528, enumerator_9473.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 249)) ;
              }
            }
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, enumerator_9473.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9473.current_mFormalArgumentName (HERE), var_typeProxy_9528, enumerator_9473.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas", 255)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 255)) ;
                }
              }
            }
            if (kBoolFalse == test_3) {
              {
              extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9473.current_mFormalArgumentName (HERE), var_typeProxy_9528, enumerator_9473.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("formal-arguments.galgas", 257)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 257)) ;
              }
            }
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9473.current_mFormalArgumentName (HERE), var_typeProxy_9528, enumerator_9473.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("formal-arguments.galgas", 261)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 261)) ;
        }
      }
      break ;
    }
    enumerator_9473.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@regularRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                            GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_regularRoutineIR temp_0 = this ;
  cEnumerator_instructionListIR enumerator_6213 (temp_0.readProperty_mInstructionGenerationList (), kENUMERATION_UP) ;
  while (enumerator_6213.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_6213.current (HERE).readProperty_mInstructionGeneration ().ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 154)) ;
    enumerator_6213.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@regularRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                       const GALGAS_generationContext constinArgument_inGenerationContext,
                                                       GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_regularRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mExportedFunction ().operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 169)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 170)) ;
    }
  }
  const GALGAS_regularRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)) ;
  const GALGAS_regularRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
  const GALGAS_regularRoutineIR temp_4 = this ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, temp_4.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 174)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_6) {
    const GALGAS_regularRoutineIR temp_7 = this ;
    temp_5 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_7.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 176)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_6909 = temp_5 ;
  GALGAS_bool var_first_7035 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_6909.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_6909.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)) ;
      var_first_7035 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_regularRoutineIR temp_9 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_7223 (temp_9.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_7223.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_first_7035.boolEnum () ;
      if (kBoolTrue == test_10) {
        var_first_7035 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_10) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 187)) ;
    }
    switch (enumerator_7223.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7223.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (enumerator_7223.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7223.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_7223.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7223.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (function_llvmNameForLocalVariable (enumerator_7223.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)) ;
      }
      break ;
    }
    enumerator_7223.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    GALGAS_bool test_12 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 198)) ;
    if (kBoolTrue == test_12.boolEnum ()) {
      const GALGAS_regularRoutineIR temp_13 = this ;
      test_12 = temp_13.readProperty_mAppendFileAndLineArgumentForPanicLocation () ;
    }
    test_11 = test_12.boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_first_7035.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 199)).boolEnum () ;
        if (kBoolTrue == test_14) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 200)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)) ;
  const GALGAS_regularRoutineIR temp_15 = this ;
  GALGAS_allocaList var_allocaList_8140 = temp_15.readProperty_mAllocaList () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_regularRoutineIR temp_17 = this ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mReturnType ().readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_regularRoutineIR temp_18 = this ;
      var_allocaList_8140.addAssign_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), temp_18.readProperty_mReturnType (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)) ;
    }
  }
  const GALGAS_regularRoutineIR temp_19 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_8403 (temp_19.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8403.hasCurrentObject ()) {
    switch (enumerator_8403.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_8140.addAssign_operation (function_llvmNameForLocalVariable (enumerator_8403.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)), enumerator_8403.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_8403.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_8140, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 218)) ;
  const GALGAS_regularRoutineIR temp_20 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_8877 (temp_20.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8877.hasCurrentObject ()) {
    switch (enumerator_8877.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Input argument '").add_operation (enumerator_8877.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)) ;
        GALGAS_string var_llvmType_9080 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8877.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9080, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (enumerator_8877.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (var_llvmType_9080, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8877.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)) ;
        callExtensionMethod_generateRetain ((cPtr_omnibusType *) enumerator_8877.current_mFormalArgumentType (HERE).ptr (), enumerator_8877.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)) ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          const GALGAS_regularRoutineIR temp_22 = this ;
          test_21 = GALGAS_bool (kIsEqual, temp_22.readProperty_mKind ().objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 229)))).boolEnum () ;
          if (kBoolTrue == test_21) {
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8877.current_mFormalArgumentType (HERE).ptr (), enumerator_8877.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 230)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          const GALGAS_regularRoutineIR temp_24 = this ;
          test_23 = GALGAS_bool (kIsEqual, temp_24.readProperty_mKind ().objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 233)))).boolEnum () ;
          if (kBoolTrue == test_23) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8877.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8877.current_mFormalArgumentType (HERE).ptr (), enumerator_8877.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
      }
      break ;
    }
    enumerator_8877.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 241)) ;
  const GALGAS_regularRoutineIR temp_25 = this ;
  extensionMethod_instructionListLLVMCode (temp_25.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 242)) ;
  const GALGAS_regularRoutineIR temp_26 = this ;
  cEnumerator_routineFormalArgumentListIR enumerator_10183 (temp_26.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_10183.hasCurrentObject ()) {
    switch (enumerator_10183.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Release input argument '").add_operation (enumerator_10183.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)) ;
        callExtensionMethod_generateRelease ((cPtr_omnibusType *) enumerator_10183.current_mFormalArgumentType (HERE).ptr (), enumerator_10183.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          const GALGAS_regularRoutineIR temp_28 = this ;
          test_27 = GALGAS_bool (kIsEqual, temp_28.readProperty_mKind ().objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 251)))).boolEnum () ;
          if (kBoolTrue == test_27) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_10183.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10183.current_mFormalArgumentType (HERE).ptr (), enumerator_10183.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          const GALGAS_regularRoutineIR temp_30 = this ;
          test_29 = GALGAS_bool (kIsEqual, temp_30.readProperty_mKind ().objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 256)))).boolEnum () ;
          if (kBoolTrue == test_29) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate output argument '").add_operation (enumerator_10183.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10183.current_mFormalArgumentType (HERE).ptr (), enumerator_10183.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)) ;
          }
        }
      }
      break ;
    }
    enumerator_10183.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)) ;
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    const GALGAS_regularRoutineIR temp_32 = this ;
    test_31 = GALGAS_bool (kIsEqual, temp_32.readProperty_mReturnType ().readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 264)))).boolEnum () ;
    if (kBoolTrue == test_31) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 265)) ;
    }
  }
  if (kBoolFalse == test_31) {
    GALGAS_string var_resultVarLLVMName_11154 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)) ;
    const GALGAS_regularRoutineIR temp_33 = this ;
    const GALGAS_regularRoutineIR temp_34 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_33.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_34.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (var_resultVarLLVMName_11154, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
    const GALGAS_regularRoutineIR temp_35 = this ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_35.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 271)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'checkModeAndReturnsRoutineLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_checkModeAndReturnsRoutineLLVMName (const GALGAS_routineLLVMNameDict & constinArgument_inCalledRoutineDictionary,
                                                           const GALGAS_mode & constinArgument_inCallerRoutineMode,
                                                           const GALGAS_lstring & constinArgument_inRoutineName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inCalledRoutineDictionary.getter_hasKey (constinArgument_inCallerRoutineMode COMMA_SOURCE_FILE ("logical-modes.galgas", 184)).boolEnum () ;
    if (kBoolTrue == test_0) {
      constinArgument_inCalledRoutineDictionary.method_searchKey (constinArgument_inCallerRoutineMode, result_result, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 185)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_m_8459 = GALGAS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GALGAS_string ("' routine cannot be invoked from '"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (extensionGetter_string (constinArgument_inCallerRoutineMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GALGAS_string ("' mode, but only from:"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)) ;
    cEnumerator_routineLLVMNameDict enumerator_8588 (constinArgument_inCalledRoutineDictionary, kENUMERATION_UP) ;
    while (enumerator_8588.hasCurrentObject ()) {
      var_m_8459.plusAssign_operation(GALGAS_string ("\n  - '").add_operation (extensionGetter_string (enumerator_8588.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)).add_operation (GALGAS_string ("' mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 189)) ;
      enumerator_8588.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_m_8459, fixItArray1  COMMA_SOURCE_FILE ("logical-modes.galgas", 191)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_checkModeAndReturnsRoutineLLVMName [4] = {
  & kTypeDescriptor_GALGAS_routineLLVMNameDict,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_routineLLVMNameDict operand0 = GALGAS_routineLLVMNameDict::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_mode operand1 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_checkModeAndReturnsRoutineLLVMName (operand0,
                                                      operand1,
                                                      operand2,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_checkModeAndReturnsRoutineLLVMName ("checkModeAndReturnsRoutineLLVMName",
                                                                                    functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    3,
                                                                                    functionArgs_checkModeAndReturnsRoutineLLVMName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_panicAST temp_0 = this ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("loop") ;
  }
  const GALGAS_panicAST temp_3 = this ;
  const GALGAS_panicAST temp_4 = this ;
  GALGAS_lstring var_nodeName_2602 = GALGAS_lstring::constructor_new (GALGAS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)), temp_4.readProperty_mPriority ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 59)) ;
  {
  const GALGAS_panicAST temp_5 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2602, temp_5, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 63)) ;
  }
  const GALGAS_panicAST temp_6 = this ;
  GALGAS_lstring var_configNode_2793 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 64)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 64)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2602, var_configNode_2793 COMMA_SOURCE_FILE ("panic.galgas", 65)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@panicAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_panicAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_panicAST temp_0 = this ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("loop") ;
  }
  const GALGAS_panicAST temp_3 = this ;
  result_outRepresentation = GALGAS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@panicAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_panicAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_panicAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPriority ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForLocationFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_panicRoutineNameForLocationFile (const GALGAS_location & constinArgument_inLocation,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLocation.getter_isNowhere (SOURCE_FILE ("panic.galgas", 85)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("raise.panic.nofile") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("raise.panic.file.").add_operation (constinArgument_inLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)).getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 88)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForLocationFile [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicRoutineNameForLocationFile (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_panicRoutineNameForLocationFile (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForLocationFile ("panicRoutineNameForLocationFile",
                                                                                 functionWithGenericHeader_panicRoutineNameForLocationFile,
                                                                                 & kTypeDescriptor_GALGAS_string,
                                                                                 1,
                                                                                 functionArgs_panicRoutineNameForLocationFile) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForFilePath'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_panicRoutineNameForFilePath (const GALGAS_string & constinArgument_inFilePath,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inFilePath.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("raise.panic.nofile") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("raise.panic.file.").add_operation (constinArgument_inFilePath.getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 98)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 98)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForFilePath [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicRoutineNameForFilePath (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_panicRoutineNameForFilePath (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForFilePath ("panicRoutineNameForFilePath",
                                                                             functionWithGenericHeader_panicRoutineNameForFilePath,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_panicRoutineNameForFilePath) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                           GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                           GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                           GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                           GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                           GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_panicAST temp_1 = this ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_panicAST temp_2 = this ;
      const GALGAS_panicAST temp_3 = this ;
      ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 126)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 126)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_panicAST temp_4 = this ;
    const GALGAS_panicAST temp_5 = this ;
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (temp_4.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 128)), temp_5.readProperty_mPriority ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 128)) ;
    }
  }
  const GALGAS_panicAST temp_6 = this ;
  const GALGAS_panicAST temp_7 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedPanicRoutine::constructor_new (temp_6.readProperty_mIsSetup (), temp_7.readProperty_mPriority ()  COMMA_SOURCE_FILE ("panic.galgas", 131))  COMMA_SOURCE_FILE ("panic.galgas", 131)) ;
  GALGAS_routineFormalArgumentListAST var_arguments_6485 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("panic.galgas", 136)) ;
  var_arguments_6485.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("panic.galgas", 138)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 139)), ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 140)), GALGAS_string ("LINE").getter_nowhere (SOURCE_FILE ("panic.galgas", 141))  COMMA_SOURCE_FILE ("panic.galgas", 137)) ;
  var_arguments_6485.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("panic.galgas", 143)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 144)), ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 145)), GALGAS_string ("CODE").getter_nowhere (SOURCE_FILE ("panic.galgas", 146))  COMMA_SOURCE_FILE ("panic.galgas", 142)) ;
  var_arguments_6485.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("panic.galgas", 148)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 149)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 150)).getter_nowhere (SOURCE_FILE ("panic.galgas", 150)), GALGAS_string ("FILE").getter_nowhere (SOURCE_FILE ("panic.galgas", 151))  COMMA_SOURCE_FILE ("panic.galgas", 147)) ;
  const GALGAS_panicAST temp_8 = this ;
  GALGAS_string temp_9 ;
  const enumGalgasBool test_10 = temp_8.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_string ("loop") ;
  }
  const GALGAS_panicAST temp_11 = this ;
  const GALGAS_panicAST temp_12 = this ;
  GALGAS_lstring var_routineMangledName_6860 = GALGAS_lstring::constructor_new (GALGAS_string ("panic.").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (temp_11.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)), temp_12.readProperty_mPriority ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 152)) ;
  const GALGAS_panicAST temp_13 = this ;
  const GALGAS_panicAST temp_14 = this ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 157)), GALGAS_mode::constructor_panicMode (SOURCE_FILE ("panic.galgas", 158)), GALGAS_bool (false), GALGAS_routineKind::constructor_function (SOURCE_FILE ("panic.galgas", 160)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("panic.galgas", 163)), var_routineMangledName_6860, var_arguments_6485, GALGAS_bool (false), temp_13.readProperty_mPanicInstructionList (), temp_14.readProperty_mEndOfPanicInstructions (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 169))  COMMA_SOURCE_FILE ("panic.galgas", 156)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPanicRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPanicRoutines (const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_universalModePanicRoutineIR::constructor_new (GALGAS_string ("section.user.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 181)), GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("panic.galgas", 180))  COMMA_SOURCE_FILE ("panic.galgas", 180)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_sectionModePanicRoutineIR::constructor_new (GALGAS_string ("section.implementation.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 187)), GALGAS_bool (false), GALGAS_bool (false), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicSetupListIR (), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicLoopListIR ()  COMMA_SOURCE_FILE ("panic.galgas", 186))  COMMA_SOURCE_FILE ("panic.galgas", 186)) ;
  cEnumerator_stringset enumerator_8598 (constinArgument_inSourceFileAbsolutePathSet, kENUMERATION_UP) ;
  while (enumerator_8598.hasCurrentObject ()) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_fileSpecificPanicRoutineIR::constructor_new (function_panicRoutineNameForFilePath (enumerator_8598.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 196)).getter_nowhere (SOURCE_FILE ("panic.galgas", 196)), GALGAS_bool (false), GALGAS_bool (false), enumerator_8598.current_key (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 195))  COMMA_SOURCE_FILE ("panic.galgas", 195)) ;
    enumerator_8598.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_fileSpecificPanicRoutineIR::constructor_new (function_panicRoutineNameForFilePath (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 203)).getter_nowhere (SOURCE_FILE ("panic.galgas", 203)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("panic.galgas", 202))  COMMA_SOURCE_FILE ("panic.galgas", 202)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicModeName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_panicModeName (C_Compiler *
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("panic") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GALGAS_string gOnceFunctionResult_panicModeName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_panicModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicModeName (nullptr,
                                                           releaseOnceFunctionResult_panicModeName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicModeName (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedPanicRoutine semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_decoratedPanicRoutine::method_semanticAnalysis (const GALGAS_semanticContext /* constinArgument_inContext */,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_decoratedPanicRoutine temp_1 = this ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_decoratedPanicRoutine temp_2 = this ;
      const GALGAS_decoratedPanicRoutine temp_3 = this ;
      ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 234)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 234)) ;
      }
      const GALGAS_decoratedPanicRoutine temp_4 = this ;
      ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupListIR.addAssign_operation (temp_4.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 235)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_decoratedPanicRoutine temp_5 = this ;
    const GALGAS_decoratedPanicRoutine temp_6 = this ;
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (temp_5.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 237)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 237)) ;
    }
    const GALGAS_decoratedPanicRoutine temp_7 = this ;
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopListIR.addAssign_operation (temp_7.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 238)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generatePanicCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generatePanicCode (GALGAS_string & ioArgument_ioLLVMcode,
                                const GALGAS_generationContext constinArgument_inGenerationContext,
                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_emptyStringIndex_11399 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, GALGAS_string::makeEmptyString (), var_emptyStringIndex_11399, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 260)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GALGAS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_11399, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)).add_operation (GALGAS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 270)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fileSpecificPanicRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_arguments_12826 = GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 288)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)).add_operation (GALGAS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)) ;
  const GALGAS_fileSpecificPanicRoutineIR temp_0 = this ;
  GALGAS_string var_fileBaseName_13023 = temp_0.readProperty_inFilePath ().getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 292)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 292)) ;
  GALGAS_uint var_staticStringIndex_13197 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, var_fileBaseName_13023, var_staticStringIndex_13197, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 294)) ;
  }
  const GALGAS_fileSpecificPanicRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (temp_1.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 298)) ;
  const GALGAS_fileSpecificPanicRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("panic.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GALGAS_string (" %in.CODE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %in.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_staticStringIndex_13197, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (var_arguments_12826, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 305)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fileSpecificPanicRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314))  COMMA_SOURCE_FILE ("panic.galgas", 314)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_arguments_14869 = GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 331)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)).add_operation (GALGAS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_arguments_14869, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)).add_operation (GALGAS_string ("noreturn\n\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 339)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR svcDeclarationGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_svcDeclarationGeneration (GALGAS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                                        GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioSectionList.addAssign_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("panic.galgas", 349)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361))  COMMA_SOURCE_FILE ("panic.galgas", 361)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sectionModePanicRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_llvmCodeGeneration (GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal (section mode)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 380)) ;
  GALGAS_string var_arguments_16990 = GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 382)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)).add_operation (GALGAS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_arguments_16990.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 388)) ;
  const GALGAS_sectionModePanicRoutineIR temp_0 = this ;
  cEnumerator_panicSortedListIR enumerator_17356 (temp_0.readProperty_mPanicSetupListIR (), kENUMERATION_UP) ;
  while (enumerator_17356.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.setup.").add_operation (enumerator_17356.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (var_arguments_16990, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 391)) ;
    enumerator_17356.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 394)) ;
  const GALGAS_sectionModePanicRoutineIR temp_1 = this ;
  cEnumerator_panicSortedListIR enumerator_17561 (temp_1.readProperty_mPanicLoopListIR (), kENUMERATION_UP) ;
  while (enumerator_17561.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.loop.").add_operation (enumerator_17561.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (var_arguments_16990, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 396)) ;
    enumerator_17561.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 399)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sectionModePanicRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                     GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sectionModePanicRoutineIR temp_0 = this ;
  cEnumerator_panicSortedListIR enumerator_18030 (temp_0.readProperty_mPanicSetupListIR (), kENUMERATION_UP) ;
  while (enumerator_18030.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.addAssign_operation (GALGAS_string ("panic.setup.").add_operation (enumerator_18030.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 409))  COMMA_SOURCE_FILE ("panic.galgas", 409)) ;
    enumerator_18030.gotoNextObject () ;
  }
  const GALGAS_sectionModePanicRoutineIR temp_1 = this ;
  cEnumerator_panicSortedListIR enumerator_18136 (temp_1.readProperty_mPanicLoopListIR (), kENUMERATION_UP) ;
  while (enumerator_18136.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.addAssign_operation (GALGAS_string ("panic.loop.").add_operation (enumerator_18136.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 412))  COMMA_SOURCE_FILE ("panic.galgas", 412)) ;
    enumerator_18136.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicRoutineName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_panicRoutineName (C_Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("handle.panic") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicRoutineName = false ;
static GALGAS_string gOnceFunctionResult_panicRoutineName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_panicRoutineName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicRoutineName) {
    gOnceFunctionResult_panicRoutineName = onceFunction_panicRoutineName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicRoutineName = true ;
  }
  return gOnceFunctionResult_panicRoutineName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicRoutineName (void) {
  gOnceFunctionResult_panicRoutineName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicRoutineName (nullptr,
                                                              releaseOnceFunctionResult_panicRoutineName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineName [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicRoutineName (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_panicRoutineName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineName ("panicRoutineName",
                                                                  functionWithGenericHeader_panicRoutineName,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  0,
                                                                  functionArgs_panicRoutineName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForAssertViolation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForAssertViolation (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForAssertViolation = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForAssertViolation ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForAssertViolation (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForAssertViolation) {
    gOnceFunctionResult_panicCodeForAssertViolation = onceFunction_panicCodeForAssertViolation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForAssertViolation = true ;
  }
  return gOnceFunctionResult_panicCodeForAssertViolation ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForAssertViolation (void) {
  gOnceFunctionResult_panicCodeForAssertViolation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForAssertViolation (nullptr,
                                                                         releaseOnceFunctionResult_panicCodeForAssertViolation) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForAssertViolation [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForAssertViolation (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForAssertViolation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForAssertViolation ("panicCodeForAssertViolation",
                                                                             functionWithGenericHeader_panicCodeForAssertViolation,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForAssertViolation) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedAdditionOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (nullptr,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedAdditionOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForSignedAdditionOverflow = onceFunction_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedAdditionOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedAdditionOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedAdditionOverflow [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedAdditionOverflow ("panicCodeForSignedAdditionOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedAdditionOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedAdditionOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedSubtractOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow = onceFunction_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedSubtractOverflow (nullptr,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedSubtractOverflow [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedSubtractOverflow ("panicCodeForUnsignedSubtractOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedSubtractOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedSubtractOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForSignedSubtractOverflow = onceFunction_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedSubtractOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedSubtractOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedSubtractOverflow [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedSubtractOverflow ("panicCodeForSignedSubtractOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedSubtractOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedSubtractOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedMultiplicationOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow = onceFunction_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedMultiplicationOverflow (nullptr,
                                                                                        releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedMultiplicationOverflow [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedMultiplicationOverflow ("panicCodeForUnsignedMultiplicationOverflow",
                                                                                            functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow,
                                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                                            0,
                                                                                            functionArgs_panicCodeForUnsignedMultiplicationOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedMultiplicationOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow = onceFunction_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedMultiplicationOverflow (nullptr,
                                                                                      releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedMultiplicationOverflow [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                                         const GALGAS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedMultiplicationOverflow ("panicCodeForSignedMultiplicationOverflow",
                                                                                          functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow,
                                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                                          0,
                                                                                          functionArgs_panicCodeForSignedMultiplicationOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedDivisionByZero'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForUnsignedDivisionByZero = onceFunction_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedDivisionByZero.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedDivisionByZero (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedDivisionByZero [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedDivisionByZero ("panicCodeForUnsignedDivisionByZero",
                                                                                    functionWithGenericHeader_panicCodeForUnsignedDivisionByZero,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForUnsignedDivisionByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedDivisionByZero'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 23)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedDivisionByZero ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForSignedDivisionByZero = onceFunction_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedDivisionByZero ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForSignedDivisionByZero.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedDivisionByZero (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForSignedDivisionByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedDivisionByZero [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedDivisionByZero ("panicCodeForSignedDivisionByZero",
                                                                                  functionWithGenericHeader_panicCodeForSignedDivisionByZero,
                                                                                  & kTypeDescriptor_GALGAS_bigint,
                                                                                  0,
                                                                                  functionArgs_panicCodeForSignedDivisionByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedRemainderByZero'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 25)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForUnsignedRemainderByZero = onceFunction_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedRemainderByZero.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedRemainderByZero (nullptr,
                                                                                 releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedRemainderByZero [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedRemainderByZero ("panicCodeForUnsignedRemainderByZero",
                                                                                     functionWithGenericHeader_panicCodeForUnsignedRemainderByZero,
                                                                                     & kTypeDescriptor_GALGAS_bigint,
                                                                                     0,
                                                                                     functionArgs_panicCodeForUnsignedRemainderByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedRemainderByZero'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 27)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedRemainderByZero ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForSignedRemainderByZero = onceFunction_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedRemainderByZero ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForSignedRemainderByZero.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedRemainderByZero (nullptr,
                                                                               releaseOnceFunctionResult_panicCodeForSignedRemainderByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedRemainderByZero [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedRemainderByZero ("panicCodeForSignedRemainderByZero",
                                                                                   functionWithGenericHeader_panicCodeForSignedRemainderByZero,
                                                                                   & kTypeDescriptor_GALGAS_bigint,
                                                                                   0,
                                                                                   functionArgs_panicCodeForSignedRemainderByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForConvertOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForConvertOverflow (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 31)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForConvertOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForConvertOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForConvertOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForConvertOverflow) {
    gOnceFunctionResult_panicCodeForConvertOverflow = onceFunction_panicCodeForConvertOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForConvertOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForConvertOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForConvertOverflow (void) {
  gOnceFunctionResult_panicCodeForConvertOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForConvertOverflow (nullptr,
                                                                         releaseOnceFunctionResult_panicCodeForConvertOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForConvertOverflow [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForConvertOverflow (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForConvertOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForConvertOverflow ("panicCodeForConvertOverflow",
                                                                             functionWithGenericHeader_panicCodeForConvertOverflow,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForConvertOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForNegativeArrayIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 35)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForNegativeArrayIndex ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForNegativeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex) {
    gOnceFunctionResult_panicCodeForNegativeArrayIndex = onceFunction_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForNegativeArrayIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForNegativeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForNegativeArrayIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForNegativeArrayIndex (nullptr,
                                                                            releaseOnceFunctionResult_panicCodeForNegativeArrayIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForNegativeArrayIndex [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForNegativeArrayIndex ("panicCodeForNegativeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForNegativeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForNegativeArrayIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForTooLargeArrayIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex) {
    gOnceFunctionResult_panicCodeForTooLargeArrayIndex = onceFunction_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForTooLargeArrayIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForTooLargeArrayIndex (nullptr,
                                                                            releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForTooLargeArrayIndex [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForTooLargeArrayIndex ("panicCodeForTooLargeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForTooLargeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForTooLargeArrayIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForClosedSync'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForClosedSync (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 41)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForClosedSync = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForClosedSync ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForClosedSync (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForClosedSync) {
    gOnceFunctionResult_panicCodeForClosedSync = onceFunction_panicCodeForClosedSync (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForClosedSync = true ;
  }
  return gOnceFunctionResult_panicCodeForClosedSync ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForClosedSync (void) {
  gOnceFunctionResult_panicCodeForClosedSync.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForClosedSync (nullptr,
                                                                    releaseOnceFunctionResult_panicCodeForClosedSync) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForClosedSync [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForClosedSync (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_panicCodeForClosedSync (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForClosedSync ("panicCodeForClosedSync",
                                                                        functionWithGenericHeader_panicCodeForClosedSync,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_panicCodeForClosedSync) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeConvertToBooleanAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_compileTimeConvertToBooleanAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_compileTimeConvertToBooleanAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmConvertToBooleanAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_llvmConvertToBooleanAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_llvmConvertToBooleanAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeConvertToBooleanAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeConvertToBooleanAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_compileTimeConvertToBooleanAST temp_0 = this ;
  const GALGAS_compileTimeConvertToBooleanAST temp_1 = this ;
  const GALGAS_compileTimeConvertToBooleanAST temp_2 = this ;
  GALGAS_lstring var_nodeName_3595 = GALGAS_lstring::constructor_new (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)) ;
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3595, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 88)) ;
  }
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3595, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 89)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeConvertToBooleanAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_compileTimeConvertToBooleanAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_compileTimeConvertToBooleanAST temp_0 = this ;
  const GALGAS_compileTimeConvertToBooleanAST temp_1 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 95)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 95)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmConvertToBooleanAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmConvertToBooleanAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_llvmConvertToBooleanAST temp_0 = this ;
  const GALGAS_llvmConvertToBooleanAST temp_1 = this ;
  const GALGAS_llvmConvertToBooleanAST temp_2 = this ;
  GALGAS_lstring var_nodeName_4364 = GALGAS_lstring::constructor_new (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)) ;
  {
  const GALGAS_llvmConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4364, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 104)) ;
  }
  {
  const GALGAS_llvmConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4364, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 105)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmConvertToBooleanAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_llvmConvertToBooleanAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_llvmConvertToBooleanAST temp_0 = this ;
  const GALGAS_llvmConvertToBooleanAST temp_1 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 111)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 111)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeConvertToBooleanAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeConvertToBooleanAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                 GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_compileTimeConvertToBooleanAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mConverterName ().readProperty_string ().objectCompare (GALGAS_string ("convertToBoolean"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_compileTimeConvertToBooleanAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GALGAS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 129)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_receiverTypeProxy_6090 ;
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_6090, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 132)) ;
  }
  GALGAS_omnibusType var_receiverType_6115 = extensionGetter_type (var_receiverTypeProxy_6090, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 133)) ;
  const GALGAS_compileTimeConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_receiverType_6115.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 134)) ;
  GALGAS_ctCheckMap var_ctCheckMap_6284 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 136)) ;
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_6 = this ;
  var_ctCheckMap_6284.setter_insertKey (temp_6.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 137)) ;
  }
  const GALGAS_compileTimeConvertToBooleanAST temp_7 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_7.readProperty_mExpression ().ptr (), var_ctCheckMap_6284, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 138)) ;
  const GALGAS_compileTimeConvertToBooleanAST temp_8 = this ;
  GALGAS_lstring var_key_6448 = GALGAS_lstring::constructor_new (var_receiverType_6115.readProperty_omnibusTypeDescriptionName (), temp_8.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 140)) ;
  const GALGAS_compileTimeConvertToBooleanAST temp_9 = this ;
  const GALGAS_compileTimeConvertToBooleanAST temp_10 = this ;
  GALGAS_compileTimeImplicitConverterToBoolean var_converter_6549 = GALGAS_compileTimeImplicitConverterToBoolean::constructor_new (temp_9.readProperty_mReceiverName (), temp_10.readProperty_mExpression ()  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 141)) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_6448, var_converter_6549, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 142)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmConvertToBooleanAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmConvertToBooleanAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                          GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                          GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                          GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_llvmConvertToBooleanAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mConverterName ().readProperty_string ().objectCompare (GALGAS_string ("convertToBoolean"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_llvmConvertToBooleanAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GALGAS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 158)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_receiverTypeProxy_7670 ;
  {
  const GALGAS_llvmConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_7670, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 161)) ;
  }
  GALGAS_omnibusType var_receiverType_7695 = extensionGetter_type (var_receiverTypeProxy_7670, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 162)) ;
  const GALGAS_llvmConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_receiverType_7695.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 163)) ;
  const GALGAS_llvmConvertToBooleanAST temp_6 = this ;
  GALGAS_lstring var_key_7852 = GALGAS_lstring::constructor_new (var_receiverType_7695.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 165)) ;
  const GALGAS_llvmConvertToBooleanAST temp_7 = this ;
  const GALGAS_llvmConvertToBooleanAST temp_8 = this ;
  GALGAS_llvmImplicitConverterToBoolean var_converter_7953 = GALGAS_llvmImplicitConverterToBoolean::constructor_new (temp_7.readProperty_mReceiverName (), var_receiverType_7695, temp_8.readProperty_mInstructionList ()  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 166)) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_7852, var_converter_7953, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 167)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeImplicitConverterToBoolean generateConvertToBooleanCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                                      const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                      GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                      GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                      GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_receiverValue_10830 ;
  GALGAS_omnibusType joker_10814_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_10814_1, var_receiverValue_10830, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 228)) ;
  GALGAS_ctMap var_varMap_10858 = GALGAS_ctMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 229)) ;
  {
  const GALGAS_compileTimeImplicitConverterToBoolean temp_0 = this ;
  var_varMap_10858.setter_insertKey (temp_0.readProperty_mReceiverName (), var_receiverValue_10830, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 230)) ;
  }
  GALGAS_bigint var_result_10998 ;
  const GALGAS_compileTimeImplicitConverterToBoolean temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mExpression ().ptr (), var_varMap_10858, var_result_10998, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 231)) ;
  outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_compileTime (GALGAS_bool (kIsNotEqual, var_result_10998.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 232))))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 232)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmImplicitConverterToBoolean generateConvertToBooleanCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_llvmImplicitConverterToBoolean::method_generateConvertToBooleanCode (const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                               const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                               GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_llvmImplicitConverterToBoolean temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("convert-to-boolean.galgas", 253)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_assignmentGenerationVarMap var_varMap_12014 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 256)) ;
    {
    const GALGAS_llvmImplicitConverterToBoolean temp_2 = this ;
    var_varMap_12014.setter_insertKey (temp_2.readProperty_mReceiverName (), extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)) ;
    }
    GALGAS_string var_resultLLVMName_12109 = GALGAS_string ("%temp").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("convert-to-boolean.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 258)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 259)) ;
    {
    var_varMap_12014.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("convert-to-boolean.galgas", 260)), var_resultLLVMName_12109, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 260)) ;
    }
    GALGAS_assignmentGenerationVarMap var_typeMap_12305 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 262)) ;
    {
    const GALGAS_llvmImplicitConverterToBoolean temp_3 = this ;
    const GALGAS_llvmImplicitConverterToBoolean temp_4 = this ;
    var_typeMap_12305.setter_insertKey (temp_3.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)) ;
    }
    GALGAS_stringlist var_generatedInstructions_12422 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("convert-to-boolean.galgas", 265)) ;
    const GALGAS_llvmImplicitConverterToBoolean temp_5 = this ;
    extensionMethod_generateIRCode (temp_5.readProperty_mInstructionList (), var_varMap_12014, var_typeMap_12305, var_generatedInstructions_12422, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 266)) ;
    cEnumerator_stringlist enumerator_12589 (var_generatedInstructions_12422, kENUMERATION_UP) ;
    while (enumerator_12589.hasCurrentObject ()) {
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_12589.current_mValue (HERE), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("convert-to-boolean.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 268)) ;
      }
      enumerator_12589.gotoNextObject () ;
    }
    outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_llvmVariable (var_resultLLVMName_12109  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 270)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'computeStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_computeStaticExpression (GALGAS_semanticContext & ioArgument_ioContext,
                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                      const GALGAS_expressionAST constinArgument_inExpression,
                                      const GALGAS_location constinArgument_inErrorLocation,
                                      const GALGAS_lstring constinArgument_inOptionalTypeName,
                                      GALGAS_objectIR & outArgument_outStaticExpressionIR,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStaticExpressionIR.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_annotationType_739 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_annotationType_739 = function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 16)) ;
    }
  }
  if (kBoolFalse == test_0) {
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inOptionalTypeName, var_annotationType_739, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 18)) ;
  }
  GALGAS_semanticTemporariesStruct var_unusedSemanticTemporariesStruct_962 = GALGAS_semanticTemporariesStruct::constructor_new (inCompiler  COMMA_SOURCE_FILE ("compute-static-expression.galgas", 21)) ;
  GALGAS_allocaList var_unusedAllocaList_1019 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("compute-static-expression.galgas", 22)) ;
  GALGAS_instructionListIR var_unusedInstructionListIR_1066 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("compute-static-expression.galgas", 23)) ;
  GALGAS_objectIR var_expressionIR_1503 ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) constinArgument_inExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 25)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("compute-static-expression.galgas", 26)), var_annotationType_739, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("compute-static-expression.galgas", 29)), var_unusedSemanticTemporariesStruct_962, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, var_unusedAllocaList_1019, var_unusedInstructionListIR_1066, var_expressionIR_1503, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 24)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_isStatic (var_expressionIR_1503, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 37)).operator_not (SOURCE_FILE ("compute-static-expression.galgas", 37)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("expression is not static"), fixItArray2  COMMA_SOURCE_FILE ("compute-static-expression.galgas", 38)) ;
      outArgument_outStaticExpressionIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outStaticExpressionIR = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionIR_1503, var_annotationType_739, constinArgument_inErrorLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 41)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_convertExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_convertExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-convert.galgas", 52)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_convertExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_convertExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-convert.galgas", 63)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                          const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          GALGAS_objectIR & outArgument_outResult,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_expressionResult_4420 ;
  const GALGAS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4420, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4420, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 100)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_convertExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
    }
  }
  const GALGAS_convertExpressionAST temp_4 = this ;
  GALGAS_omnibusType temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, temp_4.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_6) {
    const GALGAS_convertExpressionAST temp_7 = this ;
    temp_5 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_7.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)) ;
  }
  GALGAS_omnibusType var_resultType_4735 = temp_5 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_resultType_4735.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 114)).operator_not (SOURCE_FILE ("expression-convert.galgas", 114)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_convertExpressionAST temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-convert.galgas", 115)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = extensionGetter_type (var_expressionResult_4420, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 116)).operator_not (SOURCE_FILE ("expression-convert.galgas", 116)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_convertExpressionAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mEndOfExpression (), GALGAS_string ("expression type is not an integer type"), fixItArray13  COMMA_SOURCE_FILE ("expression-convert.galgas", 117)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_11) {
      GALGAS_bigint var_minSource_5214 ;
      GALGAS_bigint var_maxSource_5233 ;
      GALGAS_bool joker_5243_2 ; // Joker input parameter
      GALGAS_uint joker_5243_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4420, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)).readProperty_kind ().method_integer (var_minSource_5214, var_maxSource_5233, joker_5243_2, joker_5243_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)) ;
      GALGAS_bigint var_minTarget_5286 ;
      GALGAS_bigint var_maxTarget_5305 ;
      GALGAS_bool joker_5315_2 ; // Joker input parameter
      GALGAS_uint joker_5315_1 ; // Joker input parameter
      var_resultType_4735.readProperty_kind ().method_integer (var_minTarget_5286, var_maxTarget_5305, joker_5315_2, joker_5315_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      GALGAS_bool test_14 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5286.objectCompare (var_minSource_5214)) ;
      if (kBoolTrue == test_14.boolEnum ()) {
        test_14 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5305.objectCompare (var_maxSource_5233)) ;
      }
      GALGAS_bool var_alwaysPossible_5328 = test_14 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_alwaysPossible_5328.boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_convertExpressionAST temp_16 = this ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("useless explicit conversion"), fixItArray17  COMMA_SOURCE_FILE ("expression-convert.galgas", 123)) ;
        }
      }
      {
      routine_getNewTempValue (var_resultType_4735, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 125)) ;
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_18) {
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4420  COMMA_SOURCE_FILE ("expression-convert.galgas", 127))  COMMA_SOURCE_FILE ("expression-convert.galgas", 127)) ;
        }
      }
      if (kBoolFalse == test_18) {
        const GALGAS_convertExpressionAST temp_19 = this ;
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4420, temp_19.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-convert.galgas", 132))  COMMA_SOURCE_FILE ("expression-convert.galgas", 132)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_convertInstructionIR::method_enterAccessibleEntities (GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_convertInstructionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 159))  COMMA_SOURCE_FILE ("expression-convert.galgas", 159)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_convertInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_convertInstructionIR temp_0 = this ;
  GALGAS_string var_lbl_7223 = temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).getter_string (SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GALGAS_string var_convertMinOkLabel_7275 = GALGAS_string ("min.").add_operation (var_lbl_7223, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GALGAS_string var_convertMaxOkLabel_7322 = GALGAS_string ("max.").add_operation (var_lbl_7223, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GALGAS_string var_convertFailLabel_7369 = GALGAS_string ("fail.").add_operation (var_lbl_7223, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GALGAS_string var_compareMinVar_7409 = GALGAS_string ("cmp.").add_operation (var_lbl_7223, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  GALGAS_string var_compareMaxVar_7457 = GALGAS_string ("cmp.").add_operation (var_lbl_7223, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  GALGAS_bigint var_minTarget_7544 ;
  GALGAS_bigint var_maxTarget_7563 ;
  const GALGAS_convertInstructionIR temp_1 = this ;
  GALGAS_bool joker_7573_2 ; // Joker input parameter
  GALGAS_uint joker_7573_1 ; // Joker input parameter
  extensionGetter_type (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).readProperty_kind ().method_integer (var_minTarget_7544, var_maxTarget_7563, joker_7573_2, joker_7573_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  GALGAS_bigint var_minSource_7624 ;
  GALGAS_bool var_operandIsUnsigned_7655 ;
  const GALGAS_convertInstructionIR temp_2 = this ;
  GALGAS_bigint joker_7634 ; // Joker input parameter
  GALGAS_uint joker_7673_1 ; // Joker input parameter
  extensionGetter_type (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).readProperty_kind ().method_integer (var_minSource_7624, joker_7634, var_operandIsUnsigned_7655, joker_7673_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  const GALGAS_convertInstructionIR temp_3 = this ;
  GALGAS_string var_operandType_7684 = extensionGetter_llvmTypeName (temp_3.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_minTarget_7544.objectCompare (var_minSource_7624)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7409, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = var_operandIsUnsigned_7655.boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("uge") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string ("sge") ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(temp_5, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
      const GALGAS_convertInstructionIR temp_7 = this ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7684, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_minTarget_7544.getter_string (SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7409, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertMinOkLabel_7275, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertFailLabel_7369, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7275.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7457, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_operandIsUnsigned_7655.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_8, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  const GALGAS_convertInstructionIR temp_10 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7684, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_maxTarget_7563.getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7457, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertMaxOkLabel_7322, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertFailLabel_7369, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7369.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  const GALGAS_convertInstructionIR temp_11 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_11.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).getter_assemblerRepresentation (SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  const GALGAS_convertInstructionIR temp_12 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (temp_12.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  const GALGAS_convertInstructionIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_string (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (temp_13.readProperty_mLocation ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7322.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  const GALGAS_convertInstructionIR temp_14 = this ;
  const GALGAS_convertInstructionIR temp_15 = this ;
  const GALGAS_convertInstructionIR temp_16 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_14.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_operandType_7684, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (temp_15.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmTypeName (temp_16.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extendExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_extendExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas", 52)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extendExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_extendExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas", 63)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                         const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         GALGAS_objectIR & outArgument_outResult,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_expressionResult_4273 ;
  const GALGAS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4273, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 85)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4273, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
  }
  const GALGAS_extendExpressionAST temp_1 = this ;
  GALGAS_omnibusType temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_3) {
    const GALGAS_extendExpressionAST temp_4 = this ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
  }
  GALGAS_omnibusType var_resultType_4437 = temp_2 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_resultType_4437.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 108)).operator_not (SOURCE_FILE ("expression-extend.galgas", 108)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_extendExpressionAST temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 109)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_4273, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 110)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 110)).operator_not (SOURCE_FILE ("expression-extend.galgas", 110)).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_extendExpressionAST temp_9 = this ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GALGAS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-extend.galgas", 111)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_8) {
      GALGAS_bool var_sourceIsUnsigned_4925 ;
      GALGAS_uint var_sourceSize_4956 ;
      GALGAS_bigint joker_4907_2 ; // Joker input parameter
      GALGAS_bigint joker_4907_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4273, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)).readProperty_kind ().method_integer (joker_4907_2, joker_4907_1, var_sourceIsUnsigned_4925, var_sourceSize_4956, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)) ;
      GALGAS_bool var_targetIsUnsigned_5015 ;
      GALGAS_uint var_targetSize_5046 ;
      GALGAS_bigint joker_4997_2 ; // Joker input parameter
      GALGAS_bigint joker_4997_1 ; // Joker input parameter
      var_resultType_4437.readProperty_kind ().method_integer (joker_4997_2, joker_4997_1, var_targetIsUnsigned_5015, var_targetSize_5046, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        GALGAS_bool test_12 = var_sourceIsUnsigned_4925 ;
        if (kBoolTrue == test_12.boolEnum ()) {
          test_12 = var_targetIsUnsigned_5015 ;
        }
        test_11 = test_12.boolEnum () ;
        if (kBoolTrue == test_11) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = GALGAS_bool (kIsStrictSup, var_sourceSize_4956.objectCompare (var_targetSize_5046)).boolEnum () ;
            if (kBoolTrue == test_13) {
              const GALGAS_extendExpressionAST temp_14 = this ;
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray15  COMMA_SOURCE_FILE ("expression-extend.galgas", 117)) ;
            }
          }
          if (kBoolFalse == test_13) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsEqual, var_sourceSize_4956.objectCompare (var_targetSize_5046)).boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_extendExpressionAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("same size: useless extend operation"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 119)) ;
              }
            }
          }
        }
      }
      if (kBoolFalse == test_11) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          GALGAS_bool test_20 = var_sourceIsUnsigned_4925 ;
          if (kBoolTrue == test_20.boolEnum ()) {
            test_20 = var_targetIsUnsigned_5015.operator_not (SOURCE_FILE ("expression-extend.galgas", 121)) ;
          }
          test_19 = test_20.boolEnum () ;
          if (kBoolTrue == test_19) {
            enumGalgasBool test_21 = kBoolTrue ;
            if (kBoolTrue == test_21) {
              test_21 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_4956.objectCompare (var_targetSize_5046)).boolEnum () ;
              if (kBoolTrue == test_21) {
                const GALGAS_extendExpressionAST temp_22 = this ;
                TC_Array <C_FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (temp_22.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray23  COMMA_SOURCE_FILE ("expression-extend.galgas", 123)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_19) {
          enumGalgasBool test_24 = kBoolTrue ;
          if (kBoolTrue == test_24) {
            GALGAS_bool test_25 = var_sourceIsUnsigned_4925.operator_not (SOURCE_FILE ("expression-extend.galgas", 125)) ;
            if (kBoolTrue == test_25.boolEnum ()) {
              test_25 = var_targetIsUnsigned_5015 ;
            }
            test_24 = test_25.boolEnum () ;
            if (kBoolTrue == test_24) {
              const GALGAS_extendExpressionAST temp_26 = this ;
              TC_Array <C_FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (temp_26.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray27  COMMA_SOURCE_FILE ("expression-extend.galgas", 126)) ;
            }
          }
          if (kBoolFalse == test_24) {
            enumGalgasBool test_28 = kBoolTrue ;
            if (kBoolTrue == test_28) {
              test_28 = GALGAS_bool (kIsStrictSup, var_sourceSize_4956.objectCompare (var_targetSize_5046)).boolEnum () ;
              if (kBoolTrue == test_28) {
                const GALGAS_extendExpressionAST temp_29 = this ;
                TC_Array <C_FixItDescription> fixItArray30 ;
                inCompiler->emitSemanticError (temp_29.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray30  COMMA_SOURCE_FILE ("expression-extend.galgas", 129)) ;
              }
            }
            if (kBoolFalse == test_28) {
              enumGalgasBool test_31 = kBoolTrue ;
              if (kBoolTrue == test_31) {
                test_31 = GALGAS_bool (kIsEqual, var_sourceSize_4956.objectCompare (var_targetSize_5046)).boolEnum () ;
                if (kBoolTrue == test_31) {
                  const GALGAS_extendExpressionAST temp_32 = this ;
                  TC_Array <C_FixItDescription> fixItArray33 ;
                  inCompiler->emitSemanticError (temp_32.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("same size: useless extend operation"), fixItArray33  COMMA_SOURCE_FILE ("expression-extend.galgas", 131)) ;
                }
              }
            }
          }
        }
      }
      {
      routine_getNewTempValue (var_resultType_4437, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4273, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 135)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_truncateExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_truncateExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas", 52)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_truncateExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_truncateExpressionAST temp_3 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas", 63)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                           const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                           const GALGAS_mode constinArgument_inMode,
                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                           GALGAS_objectIR & outArgument_outResult,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_expressionResult_4418 ;
  const GALGAS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 90)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4418, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4418, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 100)) ;
  }
  const GALGAS_truncateExpressionAST temp_1 = this ;
  GALGAS_omnibusType temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_3) {
    const GALGAS_truncateExpressionAST temp_4 = this ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)) ;
  }
  GALGAS_omnibusType var_resultType_4582 = temp_2 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_resultType_4582.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 110)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_truncateExpressionAST temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-truncate.galgas", 111)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_4418, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 112)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 112)).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_truncateExpressionAST temp_9 = this ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GALGAS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_8) {
      GALGAS_bigint var_minSource_5061 ;
      GALGAS_bigint var_maxSource_5080 ;
      GALGAS_uint var_expSize_5108 ;
      GALGAS_bool joker_5090_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4418, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)).readProperty_kind ().method_integer (var_minSource_5061, var_maxSource_5080, joker_5090_1, var_expSize_5108, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)) ;
      GALGAS_bigint var_minTarget_5155 ;
      GALGAS_bigint var_maxTarget_5174 ;
      GALGAS_uint var_resultSize_5210 ;
      GALGAS_bool joker_5184 ; // Joker input parameter
      var_resultType_4582.readProperty_kind ().method_integer (var_minTarget_5155, var_maxTarget_5174, joker_5184, var_resultSize_5210, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      GALGAS_bool test_11 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5155.objectCompare (var_minSource_5061)) ;
      if (kBoolTrue == test_11.boolEnum ()) {
        test_11 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5174.objectCompare (var_maxSource_5080)) ;
      }
      GALGAS_bool var_alwaysPossible_5230 = test_11 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_alwaysPossible_5230.boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_truncateExpressionAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("useless explicit conversion"), fixItArray14  COMMA_SOURCE_FILE ("expression-truncate.galgas", 119)) ;
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsStrictInf, var_resultSize_5210.objectCompare (var_expSize_5108)).boolEnum () ;
        if (kBoolTrue == test_15) {
          {
          routine_getNewTempValue (var_resultType_4582, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 122)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4418  COMMA_SOURCE_FILE ("expression-truncate.galgas", 123))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 123)) ;
        }
      }
      if (kBoolFalse == test_15) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4418, var_resultType_4582, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_truncateInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_truncateInstructionIR temp_0 = this ;
  GALGAS_string var_operandType_6637 = extensionGetter_llvmTypeName (temp_0.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 151)) ;
  const GALGAS_truncateInstructionIR temp_1 = this ;
  const GALGAS_truncateInstructionIR temp_2 = this ;
  const GALGAS_truncateInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (var_operandType_6637, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofControlRegisterAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                    GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofControlRegisterAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addressofControlRegisterAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 44)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofControlRegisterAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                 const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode constinArgument_inMode,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_llvmRegisterAddressName_3901 ;
  const GALGAS_addressofControlRegisterAST temp_0 = this ;
  GALGAS_omnibusType joker_3812 ; // Joker input parameter
  GALGAS_uint joker_3832 ; // Joker input parameter
  GALGAS_sliceMap joker_3856 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_3812, joker_3832, joker_3856, var_llvmRegisterAddressName_3901, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 64)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_3964 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 82)).getter_nowhere (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 81)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_llvmNamedValue (extensionGetter_type (var_resultTypeProxy_3964, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)), var_llvmRegisterAddressName_3901  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addressofExpressionAST temp_0 = this ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_0.readProperty_mLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 46)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addressofExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                            const GALGAS_mode constinArgument_inMode,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GALGAS_objectIR & outArgument_outResult,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-addressof-regular-var.galgas", 66)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_addressofExpressionAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("addressof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 67)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_LValueRepresentation var_lvalueIR_3890 ;
    const GALGAS_addressofExpressionAST temp_3 = this ;
    extensionMethod_analyzeLValue (temp_3.readProperty_mLValue (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_3890, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 70)) ;
    GALGAS_unifiedTypeMapEntry var_resultTypeProxy_3913 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)).getter_nowhere (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 83)) ;
    GALGAS_omnibusType var_resultType_4048 = extensionGetter_type (var_resultTypeProxy_3913, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 86)) ;
    {
    routine_getNewTempValue (var_resultType_4048, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 87)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_addressofInstructionIR::constructor_new (outArgument_outResult, var_lvalueIR_3890  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 88))  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 88)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addressofInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addressofInstructionIR temp_0 = this ;
  const GALGAS_addressofInstructionIR temp_1 = this ;
  const GALGAS_addressofInstructionIR temp_2 = this ;
  const GALGAS_addressofInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mLValue ().readProperty_type ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (temp_2.readProperty_mLValue ().readProperty_llvmName (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (GALGAS_string (" ; addressof\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                            GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofTypeAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                      GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofTypeAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_sizeofTypeAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-sizeof.galgas", 75)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                         const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode /* constinArgument_inMode */,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         GALGAS_objectIR & outArgument_outResult,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-sizeof.galgas", 97)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_sizeofExpressionAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 98)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_omnibusType var_type_4728 ;
    const GALGAS_sizeofExpressionAST temp_3 = this ;
    extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_3.readProperty_mLValue (), var_type_4728, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 101)) ;
    GALGAS_unifiedTypeMapEntry var_resultTypeProxy_4742 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 103)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 102)) ;
    GALGAS_omnibusType var_resultType_4868 = extensionGetter_type (var_resultTypeProxy_4742, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 105)) ;
    {
    routine_getNewTempValue (var_resultType_4868, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 106)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_sizeofInstructionIR::constructor_new (outArgument_outResult, var_type_4728  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 107))  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 107)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofTypeAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_analyzeExpression (const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                   const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                   const GALGAS_mode /* constinArgument_inMode */,
                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                   GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                   GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   GALGAS_objectIR & outArgument_outResult,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-sizeof.galgas", 131)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_sizeofTypeAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 132)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_sizeofTypeAST temp_3 = this ;
    GALGAS_omnibusType var_type_6084 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)) ;
    GALGAS_unifiedTypeMapEntry var_resultTypeProxy_6153 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 136)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 135)) ;
    GALGAS_omnibusType var_resultType_6279 = extensionGetter_type (var_resultTypeProxy_6153, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 138)) ;
    {
    routine_getNewTempValue (var_resultType_6279, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 139)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_sizeofInstructionIR::constructor_new (outArgument_outResult, var_type_6084  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140))  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sizeofInstructionIR::method_llvmInstructionCode (GALGAS_string & ioArgument_ioLLVMcode,
                                                           const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                           GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sizeofInstructionIR temp_0 = this ;
  GALGAS_string var_typeName_7409 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 162)) ;
  const GALGAS_sizeofInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GALGAS_string (".asPtr = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7409, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7409, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)) ;
  const GALGAS_sizeofInstructionIR temp_2 = this ;
  const GALGAS_sizeofInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_2.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (var_typeName_7409, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GALGAS_string (".asPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typedConstantCallAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_typedConstantCallAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) ;
      }
    }
  }
  const GALGAS_typedConstantCallAST temp_3 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_2280 (temp_3.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_2280.hasCurrentObject ()) {
    switch (enumerator_2280.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_2526 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_2280.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_2419_indexExpression = extractPtr_2526->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2419_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 53)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_3063 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_2280.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_2575_arguments = extractPtr_3063->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_2625 (extractedValue_2575_arguments, kENUMERATION_UP) ;
        while (enumerator_2625.hasCurrentObject ()) {
          switch (enumerator_2625.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2853 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2625.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_2746_typeName = extractPtr_2853->mAssociatedValue1 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsNotEqual, extractedValue_2746_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_2746_typeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 60)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2968 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2625.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_2878_expression = extractPtr_2968->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2878_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 62)) ;
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
            {
            }
            break ;
          }
          enumerator_2625.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_2280.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typedConstantCallAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_typedConstantCallAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 77)) ;
      }
    }
  }
  const GALGAS_typedConstantCallAST temp_3 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_3672 (temp_3.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_3672.hasCurrentObject ()) {
    switch (enumerator_3672.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_3902 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_3672.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_3811_indexExpression = extractPtr_3902->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3811_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4423 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_3672.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_3951_arguments = extractPtr_4423->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_4001 (extractedValue_3951_arguments, kENUMERATION_UP) ;
        while (enumerator_4001.hasCurrentObject ()) {
          switch (enumerator_4001.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4229 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4001.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4122_typeName = extractPtr_4229->mAssociatedValue1 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsNotEqual, extractedValue_4122_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_4122_typeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 91)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4328 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4001.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_4254_expression = extractPtr_4328->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4254_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 93)) ;
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
            {
            }
            break ;
          }
          enumerator_4001.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3672.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typedConstantCallAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                          const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          GALGAS_objectIR & outArgument_outResult,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_inferredResultType_5451 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_typedConstantCallAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_inferredResultType_5451 = constinArgument_inOptionalTargetType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_typedConstantCallAST temp_2 = this ;
    var_inferredResultType_5451 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_2.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_inferredResultType_5451.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-typed-constant.galgas", 126)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_typedConstantCallAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 127)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_typedConstantCallAST temp_6 = this ;
    GALGAS_lstring var_typeName_5786 = GALGAS_lstring::constructor_new (var_inferredResultType_5451.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mConstructorName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 129)) ;
    GALGAS_constantMap var_classConstantMap_5948 ;
    constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_typeName_5786, var_classConstantMap_5948, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)) ;
    GALGAS_bigint var_value_6098 ;
    GALGAS_lstring var_classTypeName_6109 ;
    const GALGAS_typedConstantCallAST temp_7 = this ;
    var_classConstantMap_5948.method_searchKey (temp_7.readProperty_mConstructorName (), var_value_6098, var_classTypeName_6109, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 132)) ;
    GALGAS_omnibusType var_resultType_6132 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_classTypeName_6109, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6132, var_value_6098  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 134)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_typedConstantCallAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsStrictSup, temp_9.readProperty_mAccessList ().getter_count (SOURCE_FILE ("expression-typed-constant.galgas", 137)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_objectIR var_newTemporaryReference_6540 ;
      {
      routine_getNewTempReference (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)), ioArgument_ioTemporaries, var_newTemporaryReference_6540, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)) ;
      }
      ioArgument_ioAllocaList.addAssign_operation (extensionGetter_llvmName (var_newTemporaryReference_6540, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_type (var_newTemporaryReference_6540, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6540, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 145)), extensionGetter_llvmName (var_newTemporaryReference_6540, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 146)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 144)) ;
      }
      outArgument_outResult = var_newTemporaryReference_6540 ;
      {
      const GALGAS_typedConstantCallAST temp_10 = this ;
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 151)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 68)) ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 69)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 77)) ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 78)) ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 79)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                     const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     const GALGAS_mode constinArgument_inMode,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                     GALGAS_objectIR & outArgument_outResult,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_ifExpressionResult_5210 ;
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5210, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 100)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResult_5210, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  }
  GALGAS_implicitBooleanConversionResult var_ifExpressionConvertedToBoolean_5597 ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_ifExpressionResult_5210, temp_1.readProperty_mIfExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_ifExpressionConvertedToBoolean_5597, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  GALGAS_objectIR var_thenExpressionTempResult_6197 ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_2.readProperty_mThenExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_6197, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 128)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionTempResult_6197, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)) ;
  }
  const GALGAS_ifExpressionAST temp_3 = this ;
  GALGAS_objectIR var_thenExpressionResult_6346 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_thenExpressionTempResult_6197, constinArgument_inOptionalTargetType, temp_3.readProperty_mThenExpressionEndLocation (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)) ;
  GALGAS_objectIR var_elseExpressionTempResult_7030 ;
  const GALGAS_ifExpressionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mElseExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_7030, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 153)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionTempResult_7030, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)) ;
  }
  const GALGAS_ifExpressionAST temp_5 = this ;
  GALGAS_objectIR var_elseExpressionResult_7179 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_elseExpressionTempResult_7030, extensionGetter_type (var_thenExpressionResult_6346, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 173)), temp_5.readProperty_mElseExpressionEndLocation (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
  switch (var_ifExpressionConvertedToBoolean_5597.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_7632 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_ifExpressionConvertedToBoolean_5597.unsafePointer ()) ;
      const GALGAS_bool extractedValue_7538_boolValue = extractPtr_7632->mAssociatedValue0 ;
      GALGAS_objectIR temp_6 ;
      const enumGalgasBool test_7 = extractedValue_7538_boolValue.boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = var_thenExpressionResult_6346 ;
      }else if (kBoolFalse == test_7) {
        temp_6 = var_elseExpressionResult_7179 ;
      }
      outArgument_outResult = temp_6 ;
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * extractPtr_7925 = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) (var_ifExpressionConvertedToBoolean_5597.unsafePointer ()) ;
      const GALGAS_string extractedValue_7657_testResultVariableName = extractPtr_7925->mAssociatedValue0 ;
      {
      routine_getNewTempValue (extensionGetter_type (var_elseExpressionResult_7179, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
      }
      {
      extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extractedValue_7657_testResultVariableName, var_thenExpressionResult_6346, var_elseExpressionResult_7179, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 183)) ;
      }
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 19)) ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 20)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 28)) ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 29)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                 const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                 const GALGAS_mode constinArgument_inMode,
                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instructionListIR var_leftInstructionGenerationList_2965 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 50)) ;
  GALGAS_objectIR var_leftOperand_3396 ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_2965, var_leftOperand_3396, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_3396, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 64)) ;
  }
  GALGAS_implicitBooleanConversionResult var_leftBooleanOperand_3724 ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_leftOperand_3396, temp_1.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_leftInstructionGenerationList_2965, ioArgument_ioAllocaList, var_leftBooleanOperand_3724, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 68)) ;
  GALGAS_instructionListIR var_rightInstructionGenerationList_3802 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 77)) ;
  GALGAS_objectIR var_rightOperand_4238 ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_3396, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 81)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3802, var_rightOperand_4238, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 78)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_4238, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 91)) ;
  }
  GALGAS_implicitBooleanConversionResult var_rightBooleanOperand_4570 ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_3 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_rightOperand_4238, temp_3.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_rightInstructionGenerationList_3802, ioArgument_ioAllocaList, var_rightBooleanOperand_4570, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool test_5 = var_leftBooleanOperand_3724.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = var_rightBooleanOperand_4570.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    }
    test_4 = test_5.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_bool var_leftStaticValue_4775 ;
      var_leftBooleanOperand_3724.method_compileTime (var_leftStaticValue_4775, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 105)) ;
      GALGAS_bool var_rightStaticValue_4846 ;
      var_rightBooleanOperand_4570.method_compileTime (var_rightStaticValue_4846, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 106)) ;
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_type (var_leftOperand_3396, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)), var_leftStaticValue_4775.operator_and (var_rightStaticValue_4846 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)).getter_bigint (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)) ;
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_6 = this ;
    routine_getNewTempValue (extensionGetter_booleanType (constinArgument_inContext, temp_6.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)) ;
    }
    {
    const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_7 = this ;
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_llvmName (var_leftBooleanOperand_3724, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 114)), var_leftInstructionGenerationList_2965, extensionGetter_llvmName (var_rightBooleanOperand_4570, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 116)), var_rightInstructionGenerationList_3802, temp_7.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 112)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerSliceExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_integerSliceExpressionAST temp_0 = this ;
  cEnumerator_integerSliceFieldListAST enumerator_2577 (temp_0.readProperty_mSliceValues (), kENUMERATION_UP) ;
  while (enumerator_2577.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2577.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 58)) ;
    enumerator_2577.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerSliceExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_integerSliceExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 69)) ;
  }
  const GALGAS_integerSliceExpressionAST temp_1 = this ;
  cEnumerator_integerSliceFieldListAST enumerator_3251 (temp_1.readProperty_mSliceValues (), kENUMERATION_UP) ;
  while (enumerator_3251.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_3251.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 71)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_3251.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 72)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_sliceWidth_3428 = enumerator_3251.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 73)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_sliceWidth_3428.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3251.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the bit slice width should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 75)) ;
          }
        }
        if (kBoolFalse == test_3) {
          {
          extensionSetter_noteUINTType (ioArgument_ioGraph, var_sliceWidth_3428, enumerator_3251.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 77)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_3251.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string ("b"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)).getter_nowhere (SOURCE_FILE ("expression-integer-slice.galgas", 80)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)) ;
          }
        }
      }
    }
    enumerator_3251.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerSliceExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                               const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_integerSliceExpressionAST temp_0 = this ;
  GALGAS_omnibusType var_resultType_4761 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_resultType_4761.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-integer-slice.galgas", 105)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_integerSliceExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_bool var_unsigned_5052 ;
    GALGAS_uint var_bitCount_5075 ;
    GALGAS_bigint joker_5034_2 ; // Joker input parameter
    GALGAS_bigint joker_5034_1 ; // Joker input parameter
    var_resultType_4761.readProperty_kind ().method_integer (joker_5034_2, joker_5034_1, var_unsigned_5052, var_bitCount_5075, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 108)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unsigned_5052.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_integerSliceExpressionAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 110)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      GALGAS_uint var_leftShiftAmount_5291 = var_bitCount_5075 ;
      GALGAS_bigint var_accumulatedFieldStaticValues_5336 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 114)) ;
      GALGAS_operandIRList var_operandList_5394 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-integer-slice.galgas", 115)) ;
      const GALGAS_integerSliceExpressionAST temp_7 = this ;
      cEnumerator_integerSliceFieldListAST enumerator_5447 (temp_7.readProperty_mSliceValues (), kENUMERATION_UP) ;
      while (enumerator_5447.hasCurrentObject ()) {
        GALGAS_uint var_sliceWidth_5509 ;
        GALGAS_lstring var_expressionTypeName_5541 ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, enumerator_5447.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("anonymous selector not allowed here"), fixItArray9  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 120)) ;
            var_operandList_5394.drop () ; // Release error dropped variable
            var_sliceWidth_5509.drop () ; // Release error dropped variable
            var_expressionTypeName_5541.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsEqual, enumerator_5447.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string ("b"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_sliceWidth_5509 = GALGAS_uint (uint32_t (1U)) ;
              const GALGAS_integerSliceExpressionAST temp_11 = this ;
              var_expressionTypeName_5541 = GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)), temp_11.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)) ;
            }
          }
          if (kBoolFalse == test_10) {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = enumerator_5447.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 124)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 124)).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_5447.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray13  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 125)) ;
                var_operandList_5394.drop () ; // Release error dropped variable
                var_sliceWidth_5509.drop () ; // Release error dropped variable
                var_expressionTypeName_5541.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_12) {
              var_sliceWidth_5509 = enumerator_5447.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 127)) ;
              const GALGAS_integerSliceExpressionAST temp_14 = this ;
              var_expressionTypeName_5541 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_sliceWidth_5509.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)), temp_14.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)) ;
              enumGalgasBool test_15 = kBoolTrue ;
              if (kBoolTrue == test_15) {
                test_15 = GALGAS_bool (kIsEqual, var_sliceWidth_5509.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_15) {
                  TC_Array <C_FixItDescription> fixItArray16 ;
                  inCompiler->emitSemanticError (enumerator_5447.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the bit slice width should be > 0"), fixItArray16  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 130)) ;
                }
              }
            }
          }
        }
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsSupOrEqual, var_leftShiftAmount_5291.objectCompare (var_sliceWidth_5509)).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_leftShiftAmount_5291 = var_leftShiftAmount_5291.substract_operation (var_sliceWidth_5509, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 134)) ;
          }
        }
        if (kBoolFalse == test_17) {
          GALGAS_uint var_specifiedBitCount_6485 = var_bitCount_5075.add_operation (var_sliceWidth_5509, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)).substract_operation (var_leftShiftAmount_5291, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_5447.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6485.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (var_bitCount_5075.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)), fixItArray18  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)) ;
          var_leftShiftAmount_5291 = GALGAS_uint (uint32_t (0U)) ;
        }
        GALGAS_omnibusType var_expressionTargetType_6737 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_expressionTypeName_5541, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)) ;
        GALGAS_objectIR var_expressionResult_7274 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_5447.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_expressionTargetType_6737, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7274, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 142)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7274, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 155)) ;
        }
        switch (extensionGetter_type (var_expressionResult_7274, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().enumValue ()) {
        case GALGAS_typeKind::kNotBuilt:
          break ;
        case GALGAS_typeKind::kEnum_staticArrayType:
          {
            TC_Array <C_FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 162)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_dynamicArrayType:
          {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 164)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 166)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 168)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_structure:
          {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 170)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_syncTool:
          {
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 172)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_boolean:
          {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              test_25 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_expressionResult_7274, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 174)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_expressionTargetType_6737.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
              if (kBoolTrue == test_25) {
                TC_Array <C_FixItDescription> fixItArray26 ;
                inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an $").add_operation (var_expressionTargetType_6737.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GALGAS_string (" expression is required, found an $"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (extensionGetter_type (var_expressionResult_7274, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GALGAS_string (" expression"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)), fixItArray26  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 175)) ;
              }
            }
            enumGalgasBool test_27 = kBoolTrue ;
            if (kBoolTrue == test_27) {
              test_27 = var_expressionResult_7274.getter_isLiteralInteger (SOURCE_FILE ("expression-integer-slice.galgas", 179)).boolEnum () ;
              if (kBoolTrue == test_27) {
                GALGAS_bigint var_value_8715 ;
                GALGAS_omnibusType joker_8692_1 ; // Joker input parameter
                var_expressionResult_7274.method_literalInteger (joker_8692_1, var_value_8715, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 180)) ;
                var_accumulatedFieldStaticValues_5336 = var_accumulatedFieldStaticValues_5336.operator_or (var_value_8715.left_shift_operation (var_leftShiftAmount_5291, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) ;
              }
            }
            if (kBoolFalse == test_27) {
              GALGAS_objectIR var_extendedResult_8965 ;
              {
              routine_getNewTempValue (var_resultType_4761, ioArgument_ioTemporaries, var_extendedResult_8965, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 184)) ;
              }
              {
              extensionSetter_appendBoolToUInt (ioArgument_ioInstructionGenerationList, var_extendedResult_8965, var_expressionResult_7274, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 185)) ;
              }
              GALGAS_objectIR var_shiftedResult_9172 ;
              {
              routine_getNewTempValue (var_resultType_4761, ioArgument_ioTemporaries, var_shiftedResult_9172, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 187)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9172, var_extendedResult_8965, var_leftShiftAmount_5291, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 188)) ;
              }
              var_operandList_5394.addAssign_operation (var_shiftedResult_9172  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 190)) ;
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray28  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 193)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray29 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray29  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 195)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray30  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 197)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_generic:
          {
            TC_Array <C_FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray31  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 199)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_llvmType:
          {
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray32  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 201)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_compileTimeBool:
          {
            TC_Array <C_FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray33  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 203)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_compileTimeInteger:
          {
            GALGAS_bigint var_value_10160 ;
            GALGAS_omnibusType joker_10137_1 ; // Joker input parameter
            var_expressionResult_7274.method_literalInteger (joker_10137_1, var_value_10160, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 205)) ;
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsStrictInf, var_value_10160.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 206)))).boolEnum () ;
              if (kBoolTrue == test_34) {
                TC_Array <C_FixItDescription> fixItArray35 ;
                inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray35  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 207)) ;
              }
            }
            if (kBoolFalse == test_34) {
              enumGalgasBool test_36 = kBoolTrue ;
              if (kBoolTrue == test_36) {
                test_36 = GALGAS_bool (kIsStrictInf, var_value_10160.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)).left_shift_operation (var_sliceWidth_5509, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)))).boolEnum () ;
                if (kBoolTrue == test_36) {
                  var_accumulatedFieldStaticValues_5336 = var_accumulatedFieldStaticValues_5336.operator_or (var_value_10160.left_shift_operation (var_leftShiftAmount_5291, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) ;
                }
              }
              if (kBoolFalse == test_36) {
                TC_Array <C_FixItDescription> fixItArray37 ;
                inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).left_shift_operation (var_sliceWidth_5509, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)), fixItArray37  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)) ;
              }
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_integer:
          {
            const cEnumAssociatedValues_typeKind_integer * extractPtr_11469 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_type (var_expressionResult_7274, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().unsafePointer ()) ;
            const GALGAS_bigint extractedValue_10593_min = extractPtr_11469->mAssociatedValue0 ;
            const GALGAS_bigint extractedValue_10612_max = extractPtr_11469->mAssociatedValue1 ;
            const GALGAS_bool extractedValue_10622_unsigned = extractPtr_11469->mAssociatedValue2 ;
            const GALGAS_uint extractedValue_10637_expressionBitCount = extractPtr_11469->mAssociatedValue3 ;
            enumGalgasBool test_38 = kBoolTrue ;
            if (kBoolTrue == test_38) {
              test_38 = extractedValue_10622_unsigned.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 214)).boolEnum () ;
              if (kBoolTrue == test_38) {
                TC_Array <C_FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5509.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)), fixItArray39  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)) ;
              }
            }
            if (kBoolFalse == test_38) {
              enumGalgasBool test_40 = kBoolTrue ;
              if (kBoolTrue == test_40) {
                test_40 = GALGAS_bool (kIsNotEqual, extractedValue_10637_expressionBitCount.objectCompare (var_sliceWidth_5509)).boolEnum () ;
                if (kBoolTrue == test_40) {
                  TC_Array <C_FixItDescription> fixItArray41 ;
                  inCompiler->emitSemanticError (enumerator_5447.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5509.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)), fixItArray41  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)) ;
                }
              }
              if (kBoolFalse == test_40) {
                GALGAS_objectIR var_extendedResult_11063 ;
                {
                routine_getNewTempValue (var_resultType_4761, ioArgument_ioTemporaries, var_extendedResult_11063, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 220)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_11063, var_expressionResult_7274, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 221)) ;
                }
                GALGAS_objectIR var_shiftedResult_11266 ;
                {
                routine_getNewTempValue (var_resultType_4761, ioArgument_ioTemporaries, var_shiftedResult_11266, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 223)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_11266, var_extendedResult_11063, var_leftShiftAmount_5291, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 224)) ;
                }
                var_operandList_5394.addAssign_operation (var_shiftedResult_11266  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 226)) ;
              }
            }
          }
          break ;
        }
        enumerator_5447.gotoNextObject () ;
      }
      enumGalgasBool test_42 = kBoolTrue ;
      if (kBoolTrue == test_42) {
        test_42 = GALGAS_bool (kIsNotEqual, var_leftShiftAmount_5291.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_42) {
          const GALGAS_integerSliceExpressionAST temp_43 = this ;
          TC_Array <C_FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mLocation (), var_bitCount_5075.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GALGAS_string (" bits required, "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (var_bitCount_5075.substract_operation (var_leftShiftAmount_5291, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GALGAS_string (" bits defined"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)), fixItArray44  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)) ;
        }
      }
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4761, var_accumulatedFieldStaticValues_5336  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 234)) ;
      cEnumerator_operandIRList enumerator_11826 (var_operandList_5394, kENUMERATION_UP) ;
      while (enumerator_11826.hasCurrentObject ()) {
        GALGAS_objectIR var_newResult_11911 ;
        {
        routine_getNewTempValue (var_resultType_4761, ioArgument_ioTemporaries, var_newResult_11911, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 236)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_11911, extensionGetter_type (var_newResult_11911, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 239)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 240)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-integer-slice.galgas", 242)), enumerator_11826.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 237)) ;
        }
        outArgument_outResult = var_newResult_11911 ;
        enumerator_11826.gotoNextObject () ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_analyzeExpression (const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                   const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                   const GALGAS_mode /* constinArgument_inMode */,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                   GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalIntegerInExpressionAST temp_0 = this ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)), temp_0.readProperty_mLiteralInteger ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_analyzeExpression (const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                  const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                  const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                  const GALGAS_mode /* constinArgument_inMode */,
                                                                  GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                  GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                  GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                  GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                  GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                  GALGAS_objectIR & outArgument_outResult,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_staticStringIndex_3565 ;
  {
  const GALGAS_literalStringInExpressionAST temp_0 = this ;
  extensionSetter_findOrAddStaticString (ioArgument_ioStaticEntityMap, temp_0.readProperty_mLiteralString ().readProperty_string (), var_staticStringIndex_3565, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 62)) ;
  }
  const GALGAS_literalStringInExpressionAST temp_1 = this ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (temp_1.readProperty_mLiteralString ().readProperty_string ().getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 63)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)), var_staticStringIndex_3565  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_analyzeExpression (const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                   const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                   const GALGAS_mode /* constinArgument_inMode */,
                                                                   GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                   GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                   GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalBooleanInExpressionAST temp_0 = this ;
  GALGAS_bigint temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mValue ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)), temp_1  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_registerInExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName () COMMA_SOURCE_FILE ("expression-control-register.galgas", 44)) ;
  }
  const GALGAS_registerInExpressionAST temp_1 = this ;
  extensionMethod_addDependenceEdgeForStaticExpression (temp_1.readProperty_mControlRegisterLValue (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 45)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_registerInExpressionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                             const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_mode constinArgument_inMode,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             GALGAS_objectIR & outArgument_outResult,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_registerType_4176 ;
  GALGAS_sliceMap var_sliceMap_4231 ;
  GALGAS_string var_llvmRegisterAddressName_4273 ;
  const GALGAS_registerInExpressionAST temp_0 = this ;
  GALGAS_uint joker_4193 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4176, joker_4193, var_sliceMap_4231, var_llvmRegisterAddressName_4273, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 73)) ;
  {
  routine_getNewTempValue (var_registerType_4176, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 90)) ;
  }
  {
  extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_llvmRegisterAddressName_4273, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 91)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_registerInExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mFieldName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_llvmBinaryOperation var_accessOperator_4656 ;
      GALGAS_bigint var_accessRightOperand_4690 ;
      GALGAS_omnibusType var_resultType_4733 ;
      const GALGAS_registerInExpressionAST temp_3 = this ;
      var_sliceMap_4231.method_searchKey (temp_3.readProperty_mFieldName (), var_accessOperator_4656, var_accessRightOperand_4690, var_resultType_4733, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 94)) ;
      GALGAS_objectIR var_resultIR_4804 ;
      {
      routine_getNewTempValue (var_resultType_4733, ioArgument_ioTemporaries, var_resultIR_4804, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 100)) ;
      }
      {
      const GALGAS_registerInExpressionAST temp_4 = this ;
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_4804, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 103)), temp_4.readProperty_mFieldName ().readProperty_location (), outArgument_outResult, var_accessOperator_4656, GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), var_accessRightOperand_4690  COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 101)) ;
      }
      outArgument_outResult = var_resultIR_4804 ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                      GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_registerConstantExpressionAST temp_0 = this ;
  cEnumerator_registerIntegerFieldListAST enumerator_3044 (temp_0.readProperty_mFieldValues (), kENUMERATION_UP) ;
  while (enumerator_3044.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_3044.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 65)) ;
    enumerator_3044.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap var_controlRegisterMap_4290 ;
  const GALGAS_registerConstantExpressionAST temp_0 = this ;
  GALGAS_registerGroupKind joker_4278 ; // Joker input parameter
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), joker_4278, var_controlRegisterMap_4290, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 87)) ;
  GALGAS_omnibusType var_registerType_4458 ;
  GALGAS_sliceMap var_registerBitSliceMap_4505 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4559 ;
  GALGAS_uint var_registerBitCount_4593 ;
  GALGAS_uint var_powerOfTwoForArraySize_4626 ;
  GALGAS_uint var_elementArraySize_4665 ;
  const GALGAS_registerConstantExpressionAST temp_1 = this ;
  GALGAS_bool joker_4475_2 ; // Joker input parameter
  GALGAS_bool joker_4475_1 ; // Joker input parameter
  GALGAS_bigint joker_4580_2 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4580_1 ; // Joker input parameter
  var_controlRegisterMap_4290.method_searchKey (temp_1.readProperty_mRegisterName (), var_registerType_4458, joker_4475_2, joker_4475_1, var_registerBitSliceMap_4505, var_registerFieldMap_4559, joker_4580_2, joker_4580_1, var_registerBitCount_4593, var_powerOfTwoForArraySize_4626, var_elementArraySize_4665, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 93)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4772 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 105)) ;
  GALGAS_operandIRList var_operandList_4826 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-register-value-from-slices.galgas", 106)) ;
  const GALGAS_registerConstantExpressionAST temp_2 = this ;
  cEnumerator_registerIntegerFieldListAST enumerator_4871 (temp_2.readProperty_mFieldValues (), kENUMERATION_UP) ;
  while (enumerator_4871.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_4871.current_mFieldName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_4871.current_mFieldName (HERE).readProperty_location (), GALGAS_string ("anonymous selector not allowed here"), fixItArray4  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 109)) ;
        var_operandList_4826.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_uint var_fieldBitIndex_5107 ;
      GALGAS_uint var_fieldBitCount_5140 ;
      var_registerFieldMap_4559.method_searchKey (enumerator_4871.current_mFieldName (HERE), var_fieldBitIndex_5107, var_fieldBitCount_5140, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 111)) ;
      GALGAS_lstring var_inferredTypeName_5172 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_fieldBitCount_5140.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), enumerator_4871.current_mFieldName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)) ;
      GALGAS_omnibusType var_inferredType_5317 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_inferredTypeName_5172, var_inferredType_5317, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 117)) ;
      GALGAS_objectIR var_expressionResult_5783 ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_4871.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_inferredType_5317, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5783, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_5783, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 132)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = extensionGetter_type (var_expressionResult_5783, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_bigint var_value_6092 ;
          GALGAS_omnibusType joker_6069_1 ; // Joker input parameter
          var_expressionResult_5783.method_literalInteger (joker_6069_1, var_value_6092, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 138)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsStrictInf, var_value_6092.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 139)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_4871.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray7  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 140)) ;
            }
          }
          if (kBoolFalse == test_6) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = GALGAS_bool (kIsStrictInf, var_value_6092.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)).left_shift_operation (var_fieldBitCount_5140, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)))).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_accumulatedFieldStaticValues_4772 = var_accumulatedFieldStaticValues_4772.operator_or (var_value_6092.left_shift_operation (var_fieldBitIndex_5107, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) ;
              }
            }
            if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_4871.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).left_shift_operation (var_fieldBitCount_5140, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), fixItArray9  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = extensionGetter_type (var_expressionResult_5783, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_bool var_unsigned_6607 ;
            GALGAS_uint var_expressionBitCount_6636 ;
            GALGAS_bigint joker_6583_2 ; // Joker input parameter
            GALGAS_bigint joker_6583_1 ; // Joker input parameter
            extensionGetter_type (var_expressionResult_5783, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)).readProperty_kind ().method_integer (joker_6583_2, joker_6583_1, var_unsigned_6607, var_expressionBitCount_6636, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = var_unsigned_6607.operator_not (SOURCE_FILE ("expression-register-value-from-slices.galgas", 148)).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_4871.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray12  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 149)) ;
              }
            }
            if (kBoolFalse == test_11) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = GALGAS_bool (kIsNotEqual, var_expressionBitCount_6636.objectCompare (var_fieldBitCount_5140)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_4871.current_mExpressionLocation (HERE), GALGAS_string ("type error, $uint").add_operation (var_fieldBitCount_5140.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)).add_operation (GALGAS_string (" type required"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), fixItArray14  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)) ;
                }
              }
              if (kBoolFalse == test_13) {
                GALGAS_objectIR var_partialResult_7010 = var_expressionResult_5783 ;
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsStrictInf, var_expressionBitCount_6636.objectCompare (var_registerBitCount_4593)).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    GALGAS_objectIR var_extendedResult_7163 ;
                    {
                    routine_getNewTempValue (var_registerType_4458, ioArgument_ioTemporaries, var_extendedResult_7163, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 156)) ;
                    }
                    {
                    extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_7163, var_partialResult_7010, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 157)) ;
                    }
                    var_partialResult_7010 = var_extendedResult_7163 ;
                  }
                }
                GALGAS_objectIR var_shiftedResult_7418 ;
                {
                routine_getNewTempValue (var_registerType_4458, ioArgument_ioTemporaries, var_shiftedResult_7418, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 161)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_7418, var_partialResult_7010, var_fieldBitIndex_5107, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 162)) ;
                }
                var_operandList_4826.addAssign_operation (var_shiftedResult_7418  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 164)) ;
              }
            }
          }
        }
      }
    }
    enumerator_4871.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4458, var_accumulatedFieldStaticValues_4772  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 170)) ;
  cEnumerator_operandIRList enumerator_7798 (var_operandList_4826, kENUMERATION_UP) ;
  while (enumerator_7798.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_7881 ;
    {
    routine_getNewTempValue (var_registerType_4458, ioArgument_ioTemporaries, var_newResult_7881, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 172)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_7881, extensionGetter_type (var_newResult_7881, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 175)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 176)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-register-value-from-slices.galgas", 178)), enumerator_7798.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 173)) ;
    }
    outArgument_outResult = var_newResult_7881 ;
    enumerator_7798.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_primaryInExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_primaryInExpressionAST temp_2 = this ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mReceiverName () COMMA_SOURCE_FILE ("expression-primary.galgas", 106)) ;
      }
    }
  }
  const GALGAS_primaryInExpressionAST temp_3 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_4289 (temp_3.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_4289.hasCurrentObject ()) {
    switch (enumerator_4289.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_4535 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_4289.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_4428_indexExpression = extractPtr_4535->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4428_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 113)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_5072 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_4289.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_4584_arguments = extractPtr_5072->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_4634 (extractedValue_4584_arguments, kENUMERATION_UP) ;
        while (enumerator_4634.hasCurrentObject ()) {
          switch (enumerator_4634.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4862 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4634.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4755_typeName = extractPtr_4862->mAssociatedValue1 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsNotEqual, extractedValue_4755_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_4755_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 120)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4977 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4634.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_4887_expression = extractPtr_4977->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4887_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 122)) ;
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
            {
            }
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
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_primaryInExpressionAST temp_0 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_5582 (temp_0.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_5582.hasCurrentObject ()) {
    switch (enumerator_5582.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_5814 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_5582.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_5663_low = extractPtr_5814->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_5676_high = extractPtr_5814->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsSupOrEqual, extractedValue_5676_high.readProperty_bigint ().objectCompare (extractedValue_5663_low.readProperty_bigint ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_5676_high.readProperty_bigint ().substract_operation (extractedValue_5663_low.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), extractedValue_5663_low.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_5970 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_5582.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_5879_indexExpression = extractPtr_5970->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_5879_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 144)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6491 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_5582.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_6019_arguments = extractPtr_6491->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_6069 (extractedValue_6019_arguments, kENUMERATION_UP) ;
        while (enumerator_6069.hasCurrentObject ()) {
          switch (enumerator_6069.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6297 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_6069.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_6190_typeName = extractPtr_6297->mAssociatedValue1 ;
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GALGAS_bool (kIsNotEqual, extractedValue_6190_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_2) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_6190_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 151)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_6396 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_6069.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_6322_expression = extractPtr_6396->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_6322_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 153)) ;
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
            {
            }
            break ;
          }
          enumerator_6069.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_5582.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                            const GALGAS_mode constinArgument_inMode,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GALGAS_objectIR & outArgument_outResult,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_primaryInExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 181)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_primaryInExpressionAST temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 182)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_primaryInExpressionAST temp_5 = this ;
        callExtensionMethod_analyzePrimaryExpressionNoSelf ((cPtr_primaryInExpressionAST *) temp_5.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 184)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 198)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_primaryInExpressionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("'self' is not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_primaryInExpressionAST temp_9 = this ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((cPtr_primaryInExpressionAST *) temp_9.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 201)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'procAnalyzeAccesListInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_procAnalyzeAccesListInExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                               const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               const GALGAS_mode constinArgument_inMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               const GALGAS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                               GALGAS_objectIR & ioArgument_ioResult,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_primaryInExpressionAccessListAST enumerator_14029 (constinArgument_inAccessList, kENUMERATION_UP) ;
  while (enumerator_14029.hasCurrentObject ()) {
    switch (enumerator_14029.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_14331 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_14029.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_14106_low = extractPtr_14331->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_14119_high = extractPtr_14331->mAssociatedValue1 ;
        {
        routine_handleSliceInExpression (constinArgument_inContext, ioArgument_ioResult, extractedValue_14106_low, extractedValue_14119_high, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_14630 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_14029.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_14361_propertyName = extractPtr_14630->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (constinArgument_inContext, ioArgument_ioResult, extractedValue_14361_propertyName, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_15238 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_14029.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_14669_indexExpression = extractPtr_15238->mAssociatedValue0 ;
        const GALGAS_location extractedValue_14695_endOfIndex = extractPtr_15238->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_14706_checkIndexExpression = extractPtr_15238->mAssociatedValue2 ;
        {
        routine_handleArrayAccessInExpression (ioArgument_ioResult, extractedValue_14669_indexExpression, extractedValue_14695_endOfIndex, extractedValue_14706_checkIndexExpression, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 377)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_15916 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_14029.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_15268_methodName = extractPtr_15916->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_15305_arguments = extractPtr_15916->mAssociatedValue1 ;
        const GALGAS_location extractedValue_15325_errorLocation = extractPtr_15916->mAssociatedValue2 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 394)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_15325_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 395)) ;
            ioArgument_ioResult.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_15268_methodName, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_15305_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 397)) ;
          }
        }
      }
      break ;
    }
    enumerator_14029.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleSliceInExpression (const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_objectIR & ioArgument_ioResult,
                                      const GALGAS_lbigint constinArgument_inLow,
                                      const GALGAS_lbigint constinArgument_inHigh,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inLow.readProperty_bigint ().objectCompare (constinArgument_inHigh.readProperty_bigint ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GALGAS_string ("low bound should be lower or equal to high bound"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 506)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      }
      test_2 = test_3.operator_not (SOURCE_FILE ("expression-primary.galgas", 507)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GALGAS_string ("Invalid, receiver is not an integer"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 508)) ;
        ioArgument_ioResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      {
      extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, ioArgument_ioResult, constinArgument_inLow.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
      }
      GALGAS_lstring var_resultIntegerName_19548 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (constinArgument_inHigh.readProperty_bigint ().substract_operation (constinArgument_inLow.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).getter_string (SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), constinArgument_inLow.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
      GALGAS_omnibusType var_sliceType_19710 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_resultIntegerName_19548, var_sliceType_19710, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 514)) ;
      {
      extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_19710, ioArgument_ioResult, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 515)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression (const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_objectIR & ioArgument_ioResult,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               const GALGAS_mode constinArgument_inMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_type_20260 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 530)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_20387 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_type_20260, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
  GALGAS_propertyGetterKind var_accessKind_20518 ;
  GALGAS_propertyVisibility joker_20490 ; // Joker input parameter
  var_propertyGetterMap_20387.method_searchKey (constinArgument_inPropertyName, joker_20490, var_accessKind_20518, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 533)) ;
  switch (var_accessKind_20518.enumValue ()) {
  case GALGAS_propertyGetterKind::kNotBuilt:
    break ;
  case GALGAS_propertyGetterKind::kEnum_constantProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_20609 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (var_accessKind_20518.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_20585_value = extractPtr_20609->mAssociatedValue0 ;
      ioArgument_ioResult = extractedValue_20585_value ;
    }
    break ;
  case GALGAS_propertyGetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_21014 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_accessKind_20518.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_20651_propertyType = extractPtr_21014->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_20670_propertyIndex = extractPtr_21014->mAssociatedValue1 ;
      GALGAS_string var_property_5F_llvmName_20727 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_20727, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 541)), var_property_5F_llvmName_20727, extractedValue_20670_propertyIndex, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 539)) ;
      }
      ioArgument_ioResult = GALGAS_objectIR::constructor_reference (extractedValue_20651_propertyType, var_property_5F_llvmName_20727  COMMA_SOURCE_FILE ("expression-primary.galgas", 546)) ;
    }
    break ;
  case GALGAS_propertyGetterKind::kEnum_computedProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_21490 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_accessKind_20518.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_21041_propertyTypeProxy = extractPtr_21490->mAssociatedValue0 ;
      const GALGAS_routineLLVMNameDict extractedValue_21059_modeDictionary = extractPtr_21490->mAssociatedValue1 ;
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)) ;
      }
      GALGAS_string var_routineLLVMName_21190 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_21059_modeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
      GALGAS_objectIR var_resultValueIR_21455 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, var_routineLLVMName_21190, extensionGetter_type (extractedValue_21041_propertyTypeProxy, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 554)), var_resultValueIR_21455, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 550)) ;
      }
      ioArgument_ioResult = var_resultValueIR_21455 ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInExpression (GALGAS_objectIR & ioArgument_ioResult,
                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                            const GALGAS_location constinArgument_inEndOfIndex,
                                            const GALGAS_bool constinArgument_inCheckIndexExpression,
                                            const GALGAS_omnibusType constinArgument_inSelfType,
                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                            const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  switch (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 582)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string (dynamic array) and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 584)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_23474 = (const cEnumAssociatedValues_subscript_staticSubscript *) (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_22718_elementType = extractPtr_23474->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_22738_arraySize = extractPtr_23474->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_23227 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_22738_arraySize, extractedValue_22718_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_23227, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 587)) ;
      }
      GALGAS_objectIR var_result_23446 ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, extractedValue_22718_elementType, var_indexIR_23227, var_result_23446, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
      }
      ioArgument_ioResult = var_result_23446 ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleFunctionCallInExpression (const GALGAS_lstring constinArgument_inMethodName,
                                             GALGAS_objectIR & ioArgument_ioObjectIR,
                                             const GALGAS_omnibusType constinArgument_inSelfType,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_receiverType_24191 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 631)) ;
  GALGAS_lstring var_methodMangledName_24279 = extensionGetter_mangledName (constinArgument_inArguments, var_receiverType_24191.readProperty_omnibusTypeDescriptionName (), constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 633)) ;
  GALGAS_bool var_implementedPublic_24529 ;
  GALGAS_routineTypedSignature var_formalSignature_24556 ;
  GALGAS_unifiedTypeMapEntry var_formalReturnTypeProxy_24581 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_24640 ;
  GALGAS_bool var_implementedIsExported_24682 ;
  GALGAS_mode var_implementedMode_24720 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_24279, var_implementedPublic_24529, var_formalSignature_24556, var_formalReturnTypeProxy_24581, var_implementedModeDictionary_24640, var_implementedIsExported_24682, var_implementedMode_24720, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 636)) ;
  GALGAS_string var_functionLLVMName_24763 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_24640, constinArgument_inMode, constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 646)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, extensionGetter_type (var_formalReturnTypeProxy_24581, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 648)).readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 648)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.readProperty_location (), GALGAS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 649)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 652)) ;
    }
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_25282 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 654)) ;
    var_effectiveParameterListIR_25282.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 655)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 655)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_24556, constinArgument_inArguments, constinArgument_inMethodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_25282, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 657)) ;
    }
    GALGAS_objectIR var_callReturnedResult_26058 ;
    {
    routine_getNewTempValue (extensionGetter_type (var_formalReturnTypeProxy_24581, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 673)), ioArgument_ioTemporaries, var_callReturnedResult_26058, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 673)) ;
    }
    GALGAS_lstring var_routineMangledName_26107 = function_routineMangledNameFromCall (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)).readProperty_llvmBaseTypeName (), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)) ;
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (var_callReturnedResult_26058, var_routineMangledName_26107, var_functionLLVMName_24763, var_effectiveParameterListIR_25282  COMMA_SOURCE_FILE ("expression-primary.galgas", 676))  COMMA_SOURCE_FILE ("expression-primary.galgas", 676)) ;
    ioArgument_ioObjectIR = var_callReturnedResult_26058 ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_standaloneFunctionInExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mStandaloneFunctionName () COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 37)) ;
  }
  const GALGAS_standaloneFunctionInExpressionAST temp_1 = this ;
  cEnumerator_effectiveArgumentListAST enumerator_2130 (temp_1.readProperty_mArguments (), kENUMERATION_UP) ;
  while (enumerator_2130.hasCurrentObject ()) {
    switch (enumerator_2130.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2340 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2130.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2245_typeName = extractPtr_2340->mAssociatedValue1 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, extractedValue_2245_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_2245_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2451 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2130.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_2361_expression = extractPtr_2451->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2361_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 45)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_2130.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_standaloneFunctionInExpressionAST temp_0 = this ;
  cEnumerator_effectiveArgumentListAST enumerator_3063 (temp_0.readProperty_mArguments (), kENUMERATION_UP) ;
  while (enumerator_3063.hasCurrentObject ()) {
    switch (enumerator_3063.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3273 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3063.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3178_typeName = extractPtr_3273->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, extractedValue_3178_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_3178_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3368 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3063.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_3294_expression = extractPtr_3368->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3294_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 66)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_3063.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                                       const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                       const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       const GALGAS_mode constinArgument_inMode,
                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                       GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GALGAS_objectIR & outArgument_outFunctionCallReturnedValue,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-standalone-function-call.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_standaloneFunctionInExpressionAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mStandaloneFunctionName ().readProperty_location (), GALGAS_string ("a routine cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 92)) ;
    }
  }
  const GALGAS_standaloneFunctionInExpressionAST temp_3 = this ;
  const GALGAS_standaloneFunctionInExpressionAST temp_4 = this ;
  GALGAS_lstring var_routineLLVMName_4685 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), temp_3.readProperty_mStandaloneFunctionName (), temp_4.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 95)) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_5 = this ;
  const GALGAS_standaloneFunctionInExpressionAST temp_6 = this ;
  GALGAS_lstring var_signature_4824 = extensionGetter_routineSignature (temp_5.readProperty_mArguments (), temp_6.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 97)) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_7 = this ;
  const GALGAS_standaloneFunctionInExpressionAST temp_8 = this ;
  GALGAS_lstring var_requiredFunctionMangledName_4944 = GALGAS_lstring::constructor_new (temp_7.readProperty_mStandaloneFunctionName ().readProperty_string ().add_operation (var_signature_4824.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)), temp_8.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)) ;
  GALGAS_bool var_implementedPublic_5189 ;
  GALGAS_routineTypedSignature var_formalSignature_5216 ;
  GALGAS_unifiedTypeMapEntry var_formalReturnTypeProxy_5241 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_5300 ;
  GALGAS_bool var_isExported_5342 ;
  GALGAS_mode var_implementedMode_5369 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_4944, var_implementedPublic_5189, var_formalSignature_5216, var_formalReturnTypeProxy_5241, var_implementedModeDictionary_5300, var_isExported_5342, var_implementedMode_5369, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 101)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_formalReturnTypeProxy_5241.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-standalone-function-call.galgas", 111)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (var_requiredFunctionMangledName_4944.readProperty_location (), GALGAS_string ("this function does not return any value"), fixItArray10  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 112)) ;
      outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_string var_functionLLVMName_5619 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_5300, constinArgument_inMode, var_requiredFunctionMangledName_4944, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 115)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5817 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-standalone-function-call.galgas", 117)) ;
    {
    const GALGAS_standaloneFunctionInExpressionAST temp_11 = this ;
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5216, temp_11.readProperty_mArguments (), var_requiredFunctionMangledName_4944.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5817, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 118)) ;
    }
    {
    routine_getNewTempValue (extensionGetter_type (var_formalReturnTypeProxy_5241, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outFunctionCallReturnedValue, var_routineLLVMName_4685, var_functionLLVMName_5619, var_effectiveParameterListIR_5817  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136))  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_addDependenceEdgeForStaticExpression (const GALGAS_lstring constinArgument_inConstantName,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  }
  const GALGAS_constructorCallAST temp_1 = this ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2242 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_2242.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2242.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 52)) ;
    enumerator_2242.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_noteExpressionTypesInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 61)) ;
  }
  const GALGAS_constructorCallAST temp_1 = this ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2897 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_2897.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2897.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
    enumerator_2897.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_analyzeExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                                        const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                        const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_mode constinArgument_inMode,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                        GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        GALGAS_objectIR & outArgument_outResult,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_constructorKey_4009 = GALGAS_string ("(") ;
  const GALGAS_constructorCallAST temp_0 = this ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_4046 (temp_0.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_4046.hasCurrentObject ()) {
    var_constructorKey_4009.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_4046.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
    enumerator_4046.gotoNextObject () ;
  }
  var_constructorKey_4009.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 89)) ;
  const GALGAS_constructorCallAST temp_1 = this ;
  GALGAS_omnibusType var_resultType_4198 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)) ;
  const GALGAS_constructorCallAST temp_2 = this ;
  GALGAS_lstring var_typeName_4271 = GALGAS_lstring::constructor_new (var_resultType_4198.readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mErrorLocation (), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
  GALGAS_constructorMap var_constructorMap_4415 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_4271, var_constructorMap_4415, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
  GALGAS_constructorSignature var_constructorSignature_4560 ;
  GALGAS_constructorValue var_initValue_4586 ;
  const GALGAS_constructorCallAST temp_3 = this ;
  var_constructorMap_4415.method_searchKey (GALGAS_lstring::constructor_new (var_constructorKey_4009, temp_3.readProperty_mErrorLocation (), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)), var_constructorSignature_4560, var_initValue_4586, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
  switch (var_initValue_4586.enumValue ()) {
  case GALGAS_constructorValue::kNotBuilt:
    break ;
  case GALGAS_constructorValue::kEnum_arrayValue:
    {
      const cEnumAssociatedValues_constructorValue_arrayValue * extractPtr_7821 = (const cEnumAssociatedValues_constructorValue_arrayValue *) (var_initValue_4586.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4659_elementType = extractPtr_7821->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_4671_size = extractPtr_7821->mAssociatedValue1 ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_constructorKey_4009.objectCompare (GALGAS_string ("(!repeated)"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_constructorCallAST temp_5 = this ;
          GALGAS_expressionAST var_expression_4733 = temp_5.readProperty_mParameterList ().getter_mExpressionAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
          GALGAS_objectIR var_expressionResult_5217 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) var_expression_4733.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4659_elementType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5217, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)) ;
          const GALGAS_constructorCallAST temp_6 = this ;
          GALGAS_objectIR var_result_5252 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_5217, extractedValue_4659_elementType, temp_6.readProperty_mParameterList ().getter_mSelectorAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 118)).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = extensionGetter_isStatic (var_result_5252, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 121)).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_uint var_idx_5568 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 122)) ;
              outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedStaticValue (var_resultType_4198, extractedValue_4671_size, var_result_5252, var_idx_5568  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 123)) ;
              GALGAS_operandIRList var_operandIRList_5769 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
              cEnumerator_range enumerator_5811 (GALGAS_range (GALGAS_uint (uint32_t (0U)), extractedValue_4671_size.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 125))), kENUMERATION_UP) ;
              while (enumerator_5811.hasCurrentObject ()) {
                var_operandIRList_5769.addAssign_operation (var_result_5252  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
                enumerator_5811.gotoNextObject () ;
              }
              ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4198, var_operandIRList_5769  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
            }
          }
          if (kBoolFalse == test_7) {
            outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedDynamicValue (var_resultType_4198, extractedValue_4671_size, var_result_5252  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        GALGAS_string var_individualConstructor_6092 = GALGAS_string ("(") ;
        cEnumerator_range enumerator_6141 (GALGAS_range (GALGAS_uint (uint32_t (0U)), extractedValue_4671_size.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134))), kENUMERATION_UP) ;
        while (enumerator_6141.hasCurrentObject ()) {
          var_individualConstructor_6092.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 135)) ;
          enumerator_6141.gotoNextObject () ;
        }
        var_individualConstructor_6092.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)) ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, var_constructorKey_4009.objectCompare (var_individualConstructor_6092)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_operandIRList var_operandIRList_6312 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 139)) ;
            GALGAS_bool var_resultIsStatic_6343 = GALGAS_bool (true) ;
            const GALGAS_constructorCallAST temp_9 = this ;
            cEnumerator_functionCallEffectiveParameterListAST enumerator_6388 (temp_9.readProperty_mParameterList (), kENUMERATION_UP) ;
            while (enumerator_6388.hasCurrentObject ()) {
              GALGAS_objectIR var_expressionResult_6903 ;
              callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_6388.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4659_elementType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6903, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
              GALGAS_objectIR var_result_6946 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_6903, extractedValue_4659_elementType, enumerator_6388.current_mSelector (HERE).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 155)) ;
              var_operandIRList_6312.addAssign_operation (var_result_6946  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 162)) ;
              GALGAS_bool test_10 = var_resultIsStatic_6343 ;
              if (kBoolTrue == test_10.boolEnum ()) {
                test_10 = extensionGetter_isStatic (var_result_6946, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 163)) ;
              }
              var_resultIsStatic_6343 = test_10 ;
              enumerator_6388.gotoNextObject () ;
            }
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = var_resultIsStatic_6343.boolEnum () ;
              if (kBoolTrue == test_11) {
                GALGAS_uint var_idx_7365 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 166)) ;
                outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayStaticValues (var_resultType_4198, var_operandIRList_6312, var_idx_7365  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 167)) ;
                ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4198, var_operandIRList_6312  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 168)) ;
              }
            }
            if (kBoolFalse == test_11) {
              outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayDynamicValues (var_resultType_4198, var_operandIRList_6312  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
            }
          }
        }
        if (kBoolFalse == test_8) {
          const GALGAS_constructorCallAST temp_12 = this ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mErrorLocation (), GALGAS_string ("invalid constructor"), fixItArray13  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 173)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_null:
    {
      outArgument_outResult = GALGAS_objectIR::constructor_null (var_resultType_4198  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 177)) ;
    }
    break ;
  case GALGAS_constructorValue::kEnum_simple:
    {
      const cEnumAssociatedValues_constructorValue_simple * extractPtr_8157 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4586.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_7896_value = extractPtr_8157->mAssociatedValue0 ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_constructorCallAST temp_15 = this ;
        test_14 = GALGAS_bool (kIsNotEqual, temp_15.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 179)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_constructorCallAST temp_16 = this ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mErrorLocation (), var_resultType_4198.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)), fixItArray17  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_14) {
        outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4198, extractedValue_7896_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 182)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_structure:
    {
      const cEnumAssociatedValues_constructorValue_structure * extractPtr_9927 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4586.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_8179_sortedOperandList = extractPtr_9927->mAssociatedValue0 ;
      GALGAS_sortedOperandIRList var_sortedOperandIRList_8208 = extractedValue_8179_sortedOperandList ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        const GALGAS_constructorCallAST temp_19 = this ;
        test_18 = GALGAS_bool (kIsNotEqual, temp_19.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 186)).objectCompare (var_constructorSignature_4560.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 186)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GALGAS_constructorCallAST temp_20 = this ;
          GALGAS_string temp_21 ;
          const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_constructorSignature_4560.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 188)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_22) {
            temp_21 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_22) {
            temp_21 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_constructorCallAST temp_23 = this ;
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mErrorLocation (), GALGAS_string ("this constructor call should name ").add_operation (var_constructorSignature_4560.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 187)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 188)).add_operation (temp_23.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 189)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 189)), fixItArray24  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_18) {
        const GALGAS_constructorCallAST temp_25 = this ;
        cEnumerator_constructorSignature enumerator_8632 (var_constructorSignature_4560, kENUMERATION_UP) ;
        cEnumerator_functionCallEffectiveParameterListAST enumerator_8698 (temp_25.readProperty_mParameterList (), kENUMERATION_UP) ;
        while (enumerator_8632.hasCurrentObject () && enumerator_8698.hasCurrentObject ()) {
          enumGalgasBool test_26 = kBoolTrue ;
          if (kBoolTrue == test_26) {
            test_26 = GALGAS_bool (kIsNotEqual, enumerator_8698.current_mSelector (HERE).readProperty_string ().objectCompare (enumerator_8632.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_26) {
              TC_Array <C_FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (enumerator_8698.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '!").add_operation (enumerator_8632.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)), fixItArray27  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)) ;
            }
          }
          GALGAS_objectIR var_expressionResult_9378 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_8698.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_8632.current_mType (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_9378, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 196)) ;
          GALGAS_objectIR var_result_9417 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_9378, enumerator_8632.current_mType (HERE), enumerator_8698.current_mSelector (HERE).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 209)) ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_9417, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 216)) ;
          }
          var_sortedOperandIRList_8208.addAssign_operation (var_result_9417, enumerator_8632.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 217)) ;
          enumerator_8632.gotoNextObject () ;
          enumerator_8698.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureValue (var_resultType_4198, var_sortedOperandIRList_8208  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 219)) ;
      }
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_compileTimeInfixOperatorAST::getter_locationForErrorSignaling (C_Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_outLocation ; // Returned variable
  const GALGAS_compileTimeInfixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInPrecedenceGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_compileTimeInfixOperatorAST temp_0 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_2 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_3 = this ;
  GALGAS_lstring var_nodeName_5703 = GALGAS_lstring::constructor_new (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)), temp_3.readProperty_mInfixOperatorLocation (), inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)) ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5703, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 184)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5703, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 185)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5703, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 186)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5703, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 187)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)), var_nodeName_5703 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_compileTimeInfixOperatorAST::getter_keyRepresentationForErrorSignaling (C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outRepresentation ; // Returned variable
  const GALGAS_compileTimeInfixOperatorAST temp_0 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_2 = this ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInContext (GALGAS_semanticContext & ioArgument_ioContext,
                                                              GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_leftTypeProxy_7485 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_7485, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 212)) ;
  }
  GALGAS_omnibusType var_leftType_7506 = extensionGetter_type (var_leftTypeProxy_7485, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 213)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_leftType_7506.ptr (), temp_1.readProperty_mLeftTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 214)) ;
  GALGAS_unifiedTypeMapEntry var_rightTypeProxy_7663 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mRightTypeName (), var_rightTypeProxy_7663, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 215)) ;
  }
  GALGAS_omnibusType var_rightType_7685 = extensionGetter_type (var_rightTypeProxy_7663, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 216)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_rightType_7685.ptr (), temp_3.readProperty_mRightTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 217)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_7847 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mResultTypeName (), var_resultTypeProxy_7847, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 218)) ;
  }
  GALGAS_omnibusType var_resultType_7870 = extensionGetter_type (var_resultTypeProxy_7847, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 219)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_resultType_7870.ptr (), temp_5.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 220)) ;
  GALGAS_ctCheckMap var_ctCheckMap_8031 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-compile-time.galgas", 222)) ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_6 = this ;
  var_ctCheckMap_8031.setter_insertKey (temp_6.readProperty_mLeftOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 223)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_7 = this ;
  var_ctCheckMap_8031.setter_insertKey (temp_7.readProperty_mRightOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 224)) ;
  }
  const GALGAS_compileTimeInfixOperatorAST temp_8 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_8.readProperty_mExpression ().ptr (), var_ctCheckMap_8031, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 225)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_9 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_10 = this ;
  GALGAS_lstring var_key_8249 = function_infixOperatorMapKey (var_leftType_7506, extensionGetter_omnibusInfixOperator (temp_9.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)), temp_10.readProperty_mInfixOperatorLocation (), var_rightType_7685, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_11 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_12 = this ;
  const GALGAS_compileTimeInfixOperatorAST temp_13 = this ;
  GALGAS_compileTimeInfixOperatorUsage var_definition_8354 = GALGAS_compileTimeInfixOperatorUsage::constructor_new (temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mExpression ()  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 228)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8249, var_resultType_7870, var_definition_8354, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 233)) ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_compileTimeInfixOperatorAST temp_15 = this ;
    GALGAS_bool test_16 = GALGAS_bool (kIsEqual, temp_15.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    if (kBoolTrue != test_16.boolEnum ()) {
      const GALGAS_compileTimeInfixOperatorAST temp_17 = this ;
      test_16 = GALGAS_bool (kIsEqual, temp_17.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    }
    test_14 = test_16.boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_compileTimeInfixOperatorAST temp_18 = this ;
      GALGAS_lstring var_equal_5F_key_8673 = function_infixOperatorMapKey (var_leftType_7506, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 236)), temp_18.readProperty_mInfixOperatorLocation (), var_rightType_7685, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 236)) ;
      const GALGAS_compileTimeInfixOperatorAST temp_19 = this ;
      GALGAS_lstring var_lessThan_5F_key_8773 = function_infixOperatorMapKey (var_leftType_7506, GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 237)), temp_19.readProperty_mInfixOperatorLocation (), var_rightType_7685, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 237)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_equal_5F_key_8673.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).operator_and (ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_lessThan_5F_key_8773.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_20) {
          GALGAS_omnibusInfixOperatorUsage var_equalOperatorUsage_9044 ;
          GALGAS_omnibusType joker_9036 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_equal_5F_key_8673, joker_9036, var_equalOperatorUsage_9044, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 239)) ;
          GALGAS_omnibusInfixOperatorUsage var_lessThanOperatorUsage_9129 ;
          GALGAS_omnibusType joker_9121 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_lessThan_5F_key_8773, joker_9121, var_lessThanOperatorUsage_9129, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 240)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_compileTimeInfixOperatorUsage var_eou_9163 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_equalOperatorUsage_9044.ptr ())) ;
            if (nullptr == var_eou_9163.ptr ()) {
              test_21 = kBoolFalse ;
            }
            if (kBoolTrue == test_21) {
              GALGAS_compileTimeInfixOperatorUsage var_ltou_9234 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_lessThanOperatorUsage_9129.ptr ())) ;
              if (nullptr == var_ltou_9234.ptr ()) {
                test_21 = kBoolFalse ;
              }
              if (kBoolTrue == test_21) {
                GALGAS_compileTimeInfixInfEqualOperatorUsage var_infEqual_5F_definition_9312 = GALGAS_compileTimeInfixInfEqualOperatorUsage::constructor_new (var_eou_9163, var_ltou_9234  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 243)) ;
                const GALGAS_compileTimeInfixOperatorAST temp_22 = this ;
                GALGAS_lstring var_infEqual_5F_key_9400 = function_infixOperatorMapKey (var_leftType_7506, GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("infix-operator-compile-time.galgas", 244)), temp_22.readProperty_mInfixOperatorLocation (), var_rightType_7685, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 244)) ;
                {
                ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_infEqual_5F_key_9400, var_resultType_7870, var_infEqual_5F_definition_9312, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 245)) ;
                }
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_compileTimeInfixOperatorAST temp_24 = this ;
    test_23 = GALGAS_bool (kIsEqual, temp_24.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 250)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_compileTimeInfixOperatorAST temp_25 = this ;
      GALGAS_lstring var_addOpNoOVF_5F_key_9696 = function_infixOperatorMapKey (var_leftType_7506, GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 251)), temp_25.readProperty_mInfixOperatorLocation (), var_rightType_7685, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 251)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_addOpNoOVF_5F_key_9696, var_resultType_7870, var_definition_8354, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 252)) ;
      }
    }
  }
}
