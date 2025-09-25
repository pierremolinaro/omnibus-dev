#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_integerBuiltinFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerBuiltinFunctionIR temp_0 = this ;
  const GGS_integerBuiltinFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal ").add_operation (temp_0.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 401)) ;
  const GGS_integerBuiltinFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (temp_2.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)).add_operation (GGS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 402)) ;
  const GGS_integerBuiltinFunctionIR temp_3 = this ;
  const GGS_integerBuiltinFunctionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %value = load ").add_operation (temp_3.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (temp_4.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GGS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
  const GGS_integerBuiltinFunctionIR temp_5 = this ;
  const GGS_integerBuiltinFunctionIR temp_6 = this ;
  const GGS_integerBuiltinFunctionIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %result = call ").add_operation (temp_5.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GGS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_6.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_7.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  const GGS_integerBuiltinFunctionIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (temp_8.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)).add_operation (GGS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
  const GGS_integerBuiltinFunctionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (temp_9.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 407)) ;
  const GGS_integerBuiltinFunctionIR temp_10 = this ;
  const GGS_integerBuiltinFunctionIR temp_11 = this ;
  const GGS_integerBuiltinFunctionIR temp_12 = this ;
  const GGS_integerBuiltinFunctionIR temp_13 = this ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (temp_10.readProperty_mLLVMTypeName ().add_operation (GGS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_11.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_12.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_13.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409))  COMMA_SOURCE_FILE ("type-integer.galgas", 408)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_literalStringDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("type-static-string.galgas", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_literalStringTypeName_1049 = function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 21)) ;
  {
  const GGS_literalStringDeclarationAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1049, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1049, GGS_string ("u8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_literalStringDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GGS_string ("literal string ").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalStringDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_selfType_2457 = function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 47)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 49)), var_selfType_2457, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)) ;
  }
  GGS_lstring var_key_2624 = function_assignmentOperatorKey (var_selfType_2457, GGS_location::class_func_nowhere (SOURCE_FILE ("type-static-string.galgas", 53)), var_selfType_2457, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 53)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2624, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 54)) ;
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
  GGS_omnibusTypeAttributes var_opaqueTypeAttributes_4121 = GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE) ;
  GGS_bool var_copyable_4154 = GGS_bool (false) ;
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4178 (temp_0.readProperty_mAttributeList ()) ;
  while (enumerator_4178.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_4178.current_mValue (HERE).readProperty_string ().objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_opaqueTypeAttributes_4121.getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4178.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_opaqueTypeAttributes_4121 = var_opaqueTypeAttributes_4121.operator_or (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, enumerator_4178.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_copyable_4154.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4178.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_copyable_4154 = GGS_bool (true) ;
            var_opaqueTypeAttributes_4121 = var_opaqueTypeAttributes_4121.operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_4178.current_mValue (HERE).readProperty_location (), GGS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GGS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GGS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), fixItArray7  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
      }
    }
    enumerator_4178.gotoNextObject () ;
  }
  GGS_objectIR var_sizeExpressionIR_5151 ;
  {
  const GGS_typeOpaqueDeclarationAST temp_8 = this ;
  const GGS_typeOpaqueDeclarationAST temp_9 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_8.readProperty_mSizeExpression (), temp_9.readProperty_mSizeExpressionLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 117)), var_sizeExpressionIR_5151, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_sizeExpressionIR_5151.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_typeOpaqueDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mSizeExpressionLocation (), GGS_string ("array size expression is not a literal integer"), fixItArray12  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GGS_constructorMap var_constructorMap_5343 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = var_opaqueTypeAttributes_4121.getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 124)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 124)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        {
        GGS_constructorSignature temp_14 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        var_constructorMap_5343.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), temp_14, GGS_constructorValue::class_func_simple (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        }
        {
        const GGS_typeOpaqueDeclarationAST temp_15 = this ;
        ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_15.readProperty_mOpaqueTypeName (), var_constructorMap_5343, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)) ;
        }
      }
    }
    GGS_bigint var_bitSize_5654 ;
    GGS_omnibusType joker_5639_1 ; // Joker input parameter
    var_sizeExpressionIR_5151.method_extractLiteralInteger (joker_5639_1, var_bitSize_5654, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    const GGS_typeOpaqueDeclarationAST temp_16 = this ;
    const GGS_typeOpaqueDeclarationAST temp_17 = this ;
    GGS_omnibusType var_opaqueType_5671 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), var_opaqueTypeAttributes_4121, temp_16.readProperty_mOpaqueTypeName ().readProperty_string (), GGS_typeKind::class_func_opaque (var_bitSize_5654  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)), temp_17.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    {
    const GGS_typeOpaqueDeclarationAST temp_18 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_18.readProperty_mOpaqueTypeName (), var_opaqueType_5671, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 136)) ;
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = var_copyable_4154.boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      const GGS_typeOpaqueDeclarationAST temp_20 = this ;
      routine_print_3F_ (GGS_string ("OPAQUE ").add_operation (temp_20.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)).add_operation (GGS_string (" is copyable\n"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)) ;
      }
    }
  }
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
  GGS_lstring var_nodeName_12446 = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
  {
  const GGS_controlRegisterGroupDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12446, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  }
  const GGS_controlRegisterGroupDeclarationAST temp_2 = this ;
  UpEnumerator_controlRegisterDeclarationList enumerator_12650 (temp_2.readProperty_mRegisters ()) ;
  while (enumerator_12650.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12446, enumerator_12650.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 323)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12446, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
    }
    GGS_stringlist var_split_12933 = enumerator_12650.current (HERE).readProperty_mRegisterTypeName ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("u") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_bool test_4 = GGS_bool (ComparisonKind::equal, var_split_12933.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GGS_uint (uint32_t (2U)))) ;
      if (GalgasBool::boolTrue == test_4.boolEnum ()) {
        test_4 = GGS_bool (ComparisonKind::equal, var_split_12933.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GGS_string::makeEmptyString ())) ;
      }
      GGS_bool test_5 = test_4 ;
      if (GalgasBool::boolTrue == test_5.boolEnum ()) {
        test_5 = var_split_12933.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
      }
      test_3 = test_5.boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_uint var_n_13131 = var_split_12933.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::greaterThan, var_n_13131.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_lstring var_bitSizeTypeName_13216 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_n_13131.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)), enumerator_12650.current (HERE).readProperty_mRegisterTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12446, var_bitSizeTypeName_13216 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
            }
          }
        }
      }
    }
    UpEnumerator_controlRegisterBitSliceList enumerator_13441 (enumerator_12650.current (HERE).readProperty_mRegisterBitSliceList ()) ;
    while (enumerator_13441.hasCurrentObject ()) {
      switch (enumerator_13441.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GGS_controlRegisterBitSlice::Enumeration::invalid:
        break ;
      case GGS_controlRegisterBitSlice::Enumeration::enum_unusedBits:
        break ;
      case GGS_controlRegisterBitSlice::Enumeration::enum_namedBit:
        {
          GGS_lstring extractedValue_13548__0 ;
          GGS_lbigint extractedValue_13559_count_1 ;
          enumerator_13441.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_namedBit (extractedValue_13548__0, extractedValue_13559_count_1) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::greaterOrEqual, extractedValue_13559_count_1.readProperty_bigint ().objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_13559_count_1.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)), extractedValue_13559_count_1.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13441.gotoNextObject () ;
    }
    GGS_lstring var_rootNode_13751 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)), var_nodeName_12446.readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12446, var_rootNode_13751 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 346)) ;
    }
    UpEnumerator_controlRegisterNameListAST enumerator_13960 (enumerator_12650.current (HERE).readProperty_mRegisterArrayList ()) ;
    while (enumerator_13960.hasCurrentObject ()) {
      switch (enumerator_13960.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
      case GGS_controlRegisterKind::Enumeration::invalid:
        break ;
      case GGS_controlRegisterKind::Enumeration::enum_scalar:
        break ;
      case GGS_controlRegisterKind::Enumeration::enum_registerArray:
        {
          GGS_expressionAST extractedValue_14086_arraySize_0 ;
          GGS_location extractedValue_14096__1 ;
          GGS_expressionAST extractedValue_14113_arrayElementSize_2 ;
          GGS_location extractedValue_14130__3 ;
          enumerator_13960.current (HERE).readProperty_mControlRegisterKind ().getAssociatedValuesFor_registerArray (extractedValue_14086_arraySize_0, extractedValue_14096__1, extractedValue_14113_arrayElementSize_2, extractedValue_14130__3) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14086_arraySize_0.ptr (), var_nodeName_12446, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 352)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_14113_arrayElementSize_2.ptr (), var_nodeName_12446, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 353)) ;
        }
        break ;
      }
      enumerator_13960.gotoNextObject () ;
    }
    enumerator_12650.gotoNextObject () ;
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
      GGS_bigint extractedValue_16271__0 ;
      GGS_bigint extractedValue_16273__1 ;
      GGS_bool extractedValue_16275__2 ;
      GGS_uint extractedValue_16277_bitCount_3 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_16271__0, extractedValue_16273__1, extractedValue_16275__2, extractedValue_16277_bitCount_3) ;
      outArgument_outRegisterBitCount = extractedValue_16277_bitCount_3 ;
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
      GGS_uint extractedValue_16460__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_16460__0) ;
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
      GGS_propertyList extractedValue_16935__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_16935__0) ;
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
      GGS_bigint extractedValue_17161__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_17161__0) ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_17284__0 ;
      GGS_bigint extractedValue_17286__1 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_17284__0, extractedValue_17286__1) ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 423)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_17410__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_17410__0) ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 425)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_17527__0 ;
      GGS_routineTypedSignature extractedValue_17527__1 ;
      GGS_unifiedTypeMapEntry extractedValue_17527__2 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_17527__0, extractedValue_17527__1, extractedValue_17527__2) ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 427)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_17643__0 ;
      GGS_ctExpressionAST extractedValue_17643__1 ;
      GGS_llvmStringDefinition extractedValue_17643__2 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_17643__0, extractedValue_17643__1, extractedValue_17643__2) ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GGS_string ("a register should be an $iXXor an $uXX"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_17759__0 ;
      outArgument_outRegisterType.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_17759__0) ;
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
      GGS_uint var_shiftCount_18598 = GGS_uint (uint32_t (0U)) ;
      DownEnumerator_controlRegisterBitSliceList enumerator_18624 (constinArgument_inRegisterBitSliceList) ;
      while (enumerator_18624.hasCurrentObject ()) {
        switch (enumerator_18624.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GGS_controlRegisterBitSlice::Enumeration::invalid:
          break ;
        case GGS_controlRegisterBitSlice::Enumeration::enum_unusedBits:
          {
            GGS_lbigint extractedValue_18735_count_0 ;
            enumerator_18624.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_unusedBits (extractedValue_18735_count_0) ;
            var_shiftCount_18598 = var_shiftCount_18598.add_operation (extractedValue_18735_count_0.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)) ;
            outArgument_outControlRegisterFieldList.addAssignOperation (extractedValue_18735_count_0.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)), GGS_string ("—")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
          }
          break ;
        case GGS_controlRegisterBitSlice::Enumeration::enum_namedBit:
          {
            GGS_lstring extractedValue_18894_name_0 ;
            GGS_lbigint extractedValue_18908_count_1 ;
            enumerator_18624.current_mRegisterBitSlice (HERE).getAssociatedValuesFor_namedBit (extractedValue_18894_name_0, extractedValue_18908_count_1) ;
            GGS_uint var_bitCount_18929 = extractedValue_18908_count_1.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)) ;
            outArgument_outControlRegisterFieldList.addAssignOperation (var_bitCount_18929, extractedValue_18894_name_0.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_18894_name_0, var_shiftCount_18598, var_bitCount_18929, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
            }
            GGS_bigint var_mask_19169 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_bitCount_18929, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_shiftCount_18598, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_18894_name_0, GGS_llvmBinaryOperation::class_func_and (SOURCE_FILE ("declaration-control-register.galgas", 470)), var_mask_19169, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)) ;
            }
            var_shiftCount_18598 = var_shiftCount_18598.add_operation (var_bitCount_18929, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          }
          break ;
        }
        enumerator_18624.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_18598)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GGS_string ("total bit slice count is ").add_operation (var_shiftCount_18598.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GGS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 479)) ;
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
  GGS_controlRegisterMap var_regMap_24212 = GGS_controlRegisterMap::init (inCompiler COMMA_HERE) ;
  const GGS_controlRegisterGroupDeclarationAST temp_0 = this ;
  UpEnumerator_controlRegisterDeclarationList enumerator_24243 (temp_0.readProperty_mRegisters ()) ;
  while (enumerator_24243.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_24243.current (HERE), ioArgument_ioContext, var_regMap_24212, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 598)) ;
    enumerator_24243.gotoNextObject () ;
  }
  const GGS_controlRegisterGroupDeclarationAST temp_1 = this ;
  UpEnumerator_registerGroupListAST enumerator_24413 (temp_1.readProperty_mRegisterGroupList ()) ;
  while (enumerator_24413.hasCurrentObject ()) {
    GGS_controlRegisterMap var_registerMap_24463 = var_regMap_24212 ;
    UpEnumerator_controlRegisterMap enumerator_24540 (var_regMap_24212) ;
    while (enumerator_24540.hasCurrentObject ()) {
      GGS_string var_key_24560 = GGS_string ("#").add_operation (enumerator_24413.current (HERE).readProperty_mRegisterGroupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (enumerator_24540.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_24560 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          var_registerMap_24463.setter_setMUserAccessForKey (GGS_bool (true), enumerator_24540.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 610)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_24560.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611)) ;
          }
        }
      }
      enumerator_24540.gotoNextObject () ;
    }
    switch (enumerator_24413.current (HERE).readProperty_mControlRegisterGroupKind ().enumValue ()) {
    case GGS_controlRegisterGroupKindAST::Enumeration::invalid:
      break ;
    case GGS_controlRegisterGroupKindAST::Enumeration::enum_single:
      {
        GGS_lbigint extractedValue_24903_baseAddress_0 ;
        enumerator_24413.current (HERE).readProperty_mControlRegisterGroupKind ().getAssociatedValuesFor_single (extractedValue_24903_baseAddress_0) ;
        GGS_registerGroupKind var_groupKind_24928 = GGS_registerGroupKind::class_func_single (extractedValue_24903_baseAddress_0.readProperty_bigint ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 617)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24413.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_24928, var_registerMap_24463, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 618)) ;
        }
      }
      break ;
    case GGS_controlRegisterGroupKindAST::Enumeration::enum_groupArray:
      {
        GGS_expressionAST extractedValue_25119_groupSizeExpression_0 ;
        GGS_location extractedValue_25139_groupSizeExpressionLocation_1 ;
        GGS_lbigintlist extractedValue_25167_baseAddresses_2 ;
        enumerator_24413.current (HERE).readProperty_mControlRegisterGroupKind ().getAssociatedValuesFor_groupArray (extractedValue_25119_groupSizeExpression_0, extractedValue_25139_groupSizeExpressionLocation_1, extractedValue_25167_baseAddresses_2) ;
        GGS_objectIR var_groupArraySizeExpressionResult_25459 ;
        {
        routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_25119_groupSizeExpression_0, extractedValue_25139_groupSizeExpressionLocation_1, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 625)), var_groupArraySizeExpressionResult_25459, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)) ;
        }
        GGS_bigint var_groupSize_25516 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_groupArraySizeExpressionResult_25459.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 629)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 629)).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_25139_groupSizeExpressionLocation_1, GGS_string ("control register group size is not a static integer expression"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
            var_groupSize_25516.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GGS_omnibusType joker_25808_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_25459.method_extractLiteralInteger (joker_25808_1, var_groupSize_25516, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, var_groupSize_25516.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)).objectCompare (extractedValue_25167_baseAddresses_2.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 636)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_25139_groupSizeExpressionLocation_1, GGS_string ("the group size is ").add_operation (var_groupSize_25516.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GGS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (extractedValue_25167_baseAddresses_2.getter_count (SOURCE_FILE ("declaration-control-register.galgas", 638)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GGS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 637)) ;
          }
        }
        GGS_registerGroupKind var_groupKind_26068 = GGS_registerGroupKind::class_func_arrayGroup (extractedValue_25167_baseAddresses_2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24413.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_26068, var_registerMap_24463, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedControlRegisterArrayGroupDeclaration::init_21__21_ (enumerator_24413.current (HERE).readProperty_mRegisterGroupName (), extractedValue_25167_baseAddresses_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642)) ;
      }
      break ;
    }
    enumerator_24413.gotoNextObject () ;
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
  GGS_string var_byAddressFilePath_29610 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 727)) ;
  GGS_string var_byNameFilePath_29702 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 728)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_controlRegisterByAddress temp_1 = GGS_controlRegisterByAddress::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 730)) ;
      GGS_controlRegisterByAddress var_controlRegisterByAddress_29889 = temp_1 ;
      GGS_controlRegisterByName temp_2 = GGS_controlRegisterByName::init (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 731)) ;
      GGS_controlRegisterByName var_controlRegisterByName_29951 = temp_2 ;
      GGS_uint var_controlRegisterCount_29993 = GGS_uint (uint32_t (0U)) ;
      UpEnumerator_controlRegisterGroupMap enumerator_30055 (constinArgument_inControlRegisterGroupMap) ;
      while (enumerator_30055.hasCurrentObject ()) {
        switch (enumerator_30055.current_mGroupKind (HERE).enumValue ()) {
        case GGS_registerGroupKind::Enumeration::invalid:
          break ;
        case GGS_registerGroupKind::Enumeration::enum_single:
          {
            GGS_bigint extractedValue_30163_groupBaseAddress_0 ;
            enumerator_30055.current_mGroupKind (HERE).getAssociatedValuesFor_single (extractedValue_30163_groupBaseAddress_0) ;
            {
            routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_30055.current_mControlRegisterMap (HERE), extractedValue_30163_groupBaseAddress_0, enumerator_30055.current_lkey (HERE).readProperty_string (), var_controlRegisterByAddress_29889, var_controlRegisterByName_29951, var_controlRegisterCount_29993, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 736)) ;
            }
          }
          break ;
        case GGS_registerGroupKind::Enumeration::enum_arrayGroup:
          {
            GGS_lbigintlist extractedValue_30462_baseAddresses_0 ;
            enumerator_30055.current_mGroupKind (HERE).getAssociatedValuesFor_arrayGroup (extractedValue_30462_baseAddresses_0) ;
            UpEnumerator_lbigintlist enumerator_30492 (extractedValue_30462_baseAddresses_0) ;
            GGS_uint index_30487 (uint32_t (0)) ;
            while (enumerator_30492.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps_3F__3F__3F__26__26__26_ (enumerator_30055.current_mControlRegisterMap (HERE), enumerator_30492.current_mValue (HERE).readProperty_bigint (), enumerator_30055.current_lkey (HERE).readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (index_30487.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)), var_controlRegisterByAddress_29889, var_controlRegisterByName_29951, var_controlRegisterCount_29993, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 746)) ;
              }
              enumerator_30492.gotoNextObject () ;
              index_30487.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)) ;
            }
          }
          break ;
        }
        enumerator_30055.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_30842 = GGS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 758)), var_controlRegisterCount_29993, var_controlRegisterByAddress_29889 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757))) ;
      GGS_bool joker_31102 ; // Joker input parameter
      var_typeDumpString_30842.method_writeToFileWhenDifferentContents (var_byAddressFilePath_29610, joker_31102, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
      var_typeDumpString_30842 = GGS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 764)), var_controlRegisterCount_29993, var_controlRegisterByName_29951 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763))) ;
      GGS_bool joker_31361 ; // Joker input parameter
      var_typeDumpString_30842.method_writeToFileWhenDifferentContents (var_byNameFilePath_29702, joker_31361, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_byAddressFilePath_29610, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)) ;
    }
    {
    GGS_string::class_method_deleteFileIfExists (var_byNameFilePath_29702, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
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
  UpEnumerator_controlRegisterMap enumerator_32014 (constinArgument_inControlRegisterMap) ;
  while (enumerator_32014.hasCurrentObject ()) {
    GGS_bigint var_registerAddress_32072 = constinArgument_inGroupBaseAddress.add_operation (enumerator_32014.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_32014.current_mArraySize (HERE).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
        GGS_string var_registerName_32230 = constinArgument_inGroupName.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (enumerator_32014.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
        GGS_string var_s_32284 = GGS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32230, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 790)).add_operation (GGS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 791)).add_operation (enumerator_32014.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GGS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (var_registerAddress_32072.getter_hexStringSeparatedBy (GGS_char (TO_UNICODE (95)), GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GGS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_32014.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 794)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_s_32284.plusAssignOperation(GGS_string ("<table class=\"fields\">").add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)).add_operation (function_fieldIndexColumns (enumerator_32014.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GGS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)) ;
            DownEnumerator_controlRegisterFieldList enumerator_32758 (enumerator_32014.current_mControlRegisterFieldList (HERE)) ;
            while (enumerator_32758.hasCurrentObject ()) {
              var_s_32284.plusAssignOperation(GGS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_32758.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (enumerator_32758.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)) ;
              enumerator_32758.gotoNextObject () ;
            }
            var_s_32284.plusAssignOperation(GGS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 801)) ;
          }
        }
        var_s_32284.plusAssignOperation(GGS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)) ;
        ioArgument_ioControlRegisterByAddress.addAssignOperation (var_registerAddress_32072, var_s_32284  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804)) ;
        ioArgument_ioControlRegisterByName.addAssignOperation (var_registerAddress_32072, var_s_32284, var_registerName_32230  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_32014.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)) ;
      UpEnumerator_uintlist enumerator_33205 (function_arrayIndexListFor (enumerator_32014.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 808))) ;
      while (enumerator_33205.hasCurrentObject ()) {
        GGS_bigint var_address_33272 = var_registerAddress_32072.add_operation (enumerator_33205.current_mValue (HERE).multiply_operation (enumerator_32014.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)) ;
        GGS_string var_registerName_33343 = constinArgument_inGroupName.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_32014.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_33205.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)) ;
        GGS_string var_s_33429 = GGS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_33343, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)).add_operation (GGS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 812)).add_operation (enumerator_32014.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GGS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (var_address_33272.getter_hexStringSeparatedBy (GGS_char (TO_UNICODE (95)), GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GGS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_32014.current_mControlRegisterFieldList (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 816)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_s_33429.plusAssignOperation(GGS_string ("<table class=\"fields\">").add_operation (GGS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)).add_operation (function_fieldIndexColumns (enumerator_32014.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)).add_operation (GGS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
            DownEnumerator_controlRegisterFieldList enumerator_33902 (enumerator_32014.current_mControlRegisterFieldList (HERE)) ;
            while (enumerator_33902.hasCurrentObject ()) {
              var_s_33429.plusAssignOperation(GGS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_33902.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GGS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (enumerator_33902.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)) ;
              enumerator_33902.gotoNextObject () ;
            }
            var_s_33429.plusAssignOperation(GGS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 822)) ;
          }
        }
        var_s_33429.plusAssignOperation(GGS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 824)) ;
        ioArgument_ioControlRegisterByAddress.addAssignOperation (var_registerAddress_32072, var_s_33429  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 825)) ;
        ioArgument_ioControlRegisterByName.addAssignOperation (var_registerAddress_32072, var_s_33429, var_registerName_33343  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 826)) ;
        enumerator_33205.gotoNextObject () ;
      }
    }
    enumerator_32014.gotoNextObject () ;
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
  DownEnumerator_range enumerator_35119 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 852)))) ;
  while (enumerator_35119.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("<td class=\"fields\">").add_operation (enumerator_35119.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)).add_operation (GGS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)) ;
    enumerator_35119.gotoNextObject () ;
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
  UpEnumerator_range enumerator_35409 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inSize.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 861)))) ;
  while (enumerator_35409.hasCurrentObject ()) {
    result_result.addAssignOperation (enumerator_35409.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 862)) ;
    enumerator_35409.gotoNextObject () ;
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
  GGS_bool var_displayValue_4384 = GGS_bool (false) ;
  const GGS_globalConstantDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4412 (temp_0.readProperty_mAttributeList ()) ;
  while (enumerator_4412.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_4412.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("display"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4412.current_mValue (HERE).readProperty_location (), GGS_string ("attribute should be @display"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 100)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_displayValue_4384.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4412.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 102)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_displayValue_4384 = GGS_bool (true) ;
      }
    }
    enumerator_4412.gotoNextObject () ;
  }
  GGS_objectIR var_expressionResult_4961 ;
  {
  const GGS_globalConstantDeclarationAST temp_5 = this ;
  const GGS_globalConstantDeclarationAST temp_6 = this ;
  const GGS_globalConstantDeclarationAST temp_7 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_5.readProperty_mSourceExpression (), temp_6.readProperty_mConstantName ().readProperty_location (), temp_7.readProperty_mConstantTypeName (), var_expressionResult_4961, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }
  {
  const GGS_globalConstantDeclarationAST temp_8 = this ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_8.readProperty_mConstantName (), var_expressionResult_4961, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 117)) ;
  }
  {
  const GGS_globalConstantDeclarationAST temp_9 = this ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_9.readProperty_mConstantName (), var_expressionResult_4961, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 118)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_displayValue_4384.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      {
      const GGS_globalConstantDeclarationAST temp_11 = this ;
      routine_print_3F_ (GGS_string ("Global constant '").add_operation (temp_11.readProperty_mConstantName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GGS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (extensionGetter_llvmValue (var_expressionResult_4961, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)) ;
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
  GGS_string var_typeDumpFilePath_5889 = constinArgument_inSourceFile.readProperty_string ().add_operation (GGS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 134)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 136)) ;
      GGS_stringset var_firstLetterSet_6046 = temp_1 ;
      UpEnumerator_globalConstantMap enumerator_6081 (constinArgument_inGlobalConstantMap) ;
      while (enumerator_6081.hasCurrentObject ()) {
        var_firstLetterSet_6046.plusPlusAssignOperation (enumerator_6081.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 138))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)) ;
        enumerator_6081.gotoNextObject () ;
      }
      GGS_string var_tableOfTypeString_6201 = GGS_string::makeEmptyString () ;
      GGS_char var_currentFirstLetter_6238 = GGS_char (TO_UNICODE (32)) ;
      UpEnumerator_globalConstantMap enumerator_6282 (constinArgument_inGlobalConstantMap) ;
      while (enumerator_6282.hasCurrentObject ()) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, var_currentFirstLetter_6238.objectCompare (enumerator_6282.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_currentFirstLetter_6238 = enumerator_6282.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)) ;
            var_tableOfTypeString_6201.plusAssignOperation(GGS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6238.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 145)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GGS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (var_currentFirstLetter_6238.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GGS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)) ;
          }
        }
        var_tableOfTypeString_6201.plusAssignOperation(function_linkForGlobalConstant (enumerator_6282.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)).add_operation (GGS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)) ;
        enumerator_6282.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_6689 = GGS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 150)), constinArgument_inGlobalConstantMap, var_firstLetterSet_6046, var_tableOfTypeString_6201 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 149))) ;
      GGS_bool joker_6946 ; // Joker input parameter
      var_typeDumpString_6689.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_5889, joker_6946, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 155)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    GGS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_5889, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 157)) ;
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
//Overriding extension method '@syncToolInstanceDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_syncToolInstanceDeclarationAST temp_0 = this ;
  const GGS_syncToolInstanceDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncInstanceName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 46)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_syncToolInstanceDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_syncToolInstanceDeclarationAST temp_4 = this ;
      const GGS_syncToolInstanceDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncInstanceName (), temp_5.readProperty_mSyncTypeName () COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 48)) ;
      }
    }
  }
  const GGS_syncToolInstanceDeclarationAST temp_6 = this ;
  const GGS_syncToolInstanceDeclarationAST temp_7 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), temp_7.readProperty_mSyncInstanceName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 50)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syncToolInstanceDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_syncToolInstanceDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("sync ").add_operation (temp_0.readProperty_mSyncInstanceName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_syncToolInstanceDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_syncToolInstanceDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mSyncInstanceName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syncToolInstanceDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                 GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                 GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                 GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_optionalSyncType_4131 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_syncToolInstanceDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_optionalSyncType_4131 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 92)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_syncToolInstanceDeclarationAST temp_2 = this ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_2.readProperty_mSyncTypeName (), var_optionalSyncType_4131, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 94)) ;
  }
  GGS_objectIR var_expressionResult_4598 ;
  {
  const GGS_syncToolInstanceDeclarationAST temp_3 = this ;
  const GGS_syncToolInstanceDeclarationAST temp_4 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_3.readProperty_mSourceExpression (), temp_4.readProperty_mSyncInstanceName ().readProperty_location (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 102)), var_expressionResult_4598, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 97)) ;
  }
  const GGS_syncToolInstanceDeclarationAST temp_5 = this ;
  GGS_objectIR var_result_4670 = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_4598, var_optionalSyncType_4131, temp_5.readProperty_mSyncInstanceName ().readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 106)) ;
  {
  const GGS_syncToolInstanceDeclarationAST temp_6 = this ;
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_6.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4670, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 116)), var_result_4670, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 114)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = extensionGetter_type (var_result_4670, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).readProperty_kind ().getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_syncToolInstanceDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mSyncInstanceName ().readProperty_location (), GGS_string ("the type is not a synchronization tool type"), fixItArray9  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)) ;
    }
  }
  {
  const GGS_syncToolInstanceDeclarationAST temp_10 = this ;
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_10.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4670, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)) ;
  }
  const GGS_syncToolInstanceDeclarationAST temp_11 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedSyncInstance::init_21__21_ (temp_11.readProperty_mSyncInstanceName (), var_result_4670, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedSyncInstance semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedSyncInstance::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_decoratedSyncInstance temp_0 = this ;
  const GGS_decoratedSyncInstance temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_0.readProperty_mSyncInstanceName (), temp_1.readProperty_mExpressionGeneratedCode (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 145)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@implementedDriverAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_implementedDriverAST temp_0 = this ;
  const GGS_implementedDriverAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDriverName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 165)) ;
  }
  {
  const GGS_implementedDriverAST temp_2 = this ;
  const GGS_implementedDriverAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDriverName (), function_omnibusTypeSpecificNameForDriver (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) ;
  }
  const GGS_implementedDriverAST temp_4 = this ;
  UpEnumerator_lstringlist enumerator_6062 (temp_4.readProperty_mDriverDependanceList ()) ;
  while (enumerator_6062.hasCurrentObject ()) {
    {
    const GGS_implementedDriverAST temp_5 = this ;
    ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDriverName (), enumerator_6062.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 168)) ;
    }
    enumerator_6062.gotoNextObject () ;
  }
  {
  const GGS_implementedDriverAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mDriverName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_implementedDriverAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_implementedDriverAST temp_0 = this ;
  result_outRepresentation = GGS_string ("driver ").add_operation (temp_0.readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 176)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_implementedDriverAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_implementedDriverAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mDriverName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusTypeSpecificNameForDriver'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_omnibusTypeSpecificNameForDriver (const GGS_lstring & constinArgument_inDriverName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("driver.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 190)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_omnibusTypeSpecificNameForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_omnibusTypeSpecificNameForDriver (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_omnibusTypeSpecificNameForDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusTypeSpecificNameForDriver ("omnibusTypeSpecificNameForDriver",
                                                                                  functionWithGenericHeader_omnibusTypeSpecificNameForDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_omnibusTypeSpecificNameForDriver) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmDriverNameFromName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmDriverNameFromName (const GGS_lstring & constinArgument_inDriverName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("driver$").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmDriverNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmDriverNameFromName (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmDriverNameFromName (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmDriverNameFromName ("llvmDriverNameFromName",
                                                                        functionWithGenericHeader_llvmDriverNameFromName,
                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                        1,
                                                                        functionArgs_llvmDriverNameFromName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmBootRoutineNameFromDriver (const GGS_lstring & constinArgument_inDriverName,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("boot.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmBootRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmBootRoutineNameFromDriver (Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GGS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmBootRoutineNameFromDriver (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmBootRoutineNameFromDriver ("llvmBootRoutineNameFromDriver",
                                                                               functionWithGenericHeader_llvmBootRoutineNameFromDriver,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               1,
                                                                               functionArgs_llvmBootRoutineNameFromDriver) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmStartupRoutineNameFromDriver (const GGS_lstring & constinArgument_inDriverName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("startup.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)), constinArgument_inDriverName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmStartupRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmStartupRoutineNameFromDriver (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmStartupRoutineNameFromDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmStartupRoutineNameFromDriver ("llvmStartupRoutineNameFromDriver",
                                                                                  functionWithGenericHeader_llvmStartupRoutineNameFromDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmStartupRoutineNameFromDriver) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers&'
//
//--------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers_26_ (GGS_ast & ioArgument_ioAST,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 233)) ;
  GGS_lstringlist var_driverWithNoDependenceList_9001 = temp_0 ;
  UpEnumerator_driverDeclarationListAST enumerator_9041 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST ()) ;
  while (enumerator_9041.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_9041.current_mDriver (HERE).readProperty_mDriverDependanceList ().getter_count (SOURCE_FILE ("declaration-driver.galgas", 235)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_driverWithNoDependenceList_9001.addAssignOperation (enumerator_9041.current_mDriver (HERE).readProperty_mDriverName ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 236)) ;
      }
    }
    enumerator_9041.gotoNextObject () ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_driverWithNoDependenceList_9001.getter_count (SOURCE_FILE ("declaration-driver.galgas", 239)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_lstringlist enumerator_9287 (var_driverWithNoDependenceList_9001) ;
      while (enumerator_9287.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9287.current_mValue (HERE).readProperty_location (), GGS_string ("almost one driver can have no dependence"), fixItArray3  COMMA_SOURCE_FILE ("declaration-driver.galgas", 241)) ;
        enumerator_9287.gotoNextObject () ;
      }
    }
  }
  GGS_instanciedDriverMap var_instanciedDriverMap_9474 = GGS_instanciedDriverMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_driverInstanciationListAST enumerator_9518 (ioArgument_ioAST.readProperty_mRequiredDriverListAST ()) ;
  while (enumerator_9518.hasCurrentObject ()) {
    GGS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_9600 = GGS_driverInstanciationArgumentMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_driverInstanciationArgumentListAST enumerator_9656 (enumerator_9518.current_mDriverInstanciationArgumentList (HERE)) ;
    while (enumerator_9656.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_9600.setter_insertKey (enumerator_9656.current_mSelector (HERE), enumerator_9656.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 249)) ;
      }
      enumerator_9656.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_9474.setter_insertKey (enumerator_9518.current_mDriverName (HERE), var_driverInstanciationArgumentMap_9600, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 251)) ;
    }
    enumerator_9518.gotoNextObject () ;
  }
  GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 254)) ;
  GGS_stringset var_validDriverNames_9940 = temp_4 ;
  UpEnumerator_driverDeclarationListAST enumerator_10025 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST ()) ;
  while (enumerator_10025.hasCurrentObject ()) {
    var_validDriverNames_9940.plusPlusAssignOperation (enumerator_10025.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 256)) ;
    GGS_bool var_driverIsInstancied_10140 = var_instanciedDriverMap_9474.getter_hasKey (enumerator_10025.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-driver.galgas", 257)) ;
    GGS_structurePropertyListAST temp_5 = GGS_structurePropertyListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 259)) ;
    GGS_structurePropertyListAST var_driverPropertyListAST_10304 = temp_5 ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_driverIsInstancied_10140.boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_10430 ;
        var_instanciedDriverMap_9474.method_searchKey (enumerator_10025.current_mDriver (HERE).readProperty_mDriverName (), var_driverInstanciationArgumentMap_10430, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 261)) ;
        GGS_stringset temp_7 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 263)) ;
        GGS_stringset var_validArgumentSet_10543 = temp_7 ;
        UpEnumerator_structurePropertyListAST enumerator_10639 (enumerator_10025.current_mDriver (HERE).readProperty_mPropertyListAST ()) ;
        while (enumerator_10639.hasCurrentObject ()) {
          GGS_propertyKindAST var_driverPropertyKind_10717 ;
          switch (enumerator_10639.current_mPropertyKind (HERE).enumValue ()) {
          case GGS_propertyKindAST::Enumeration::invalid:
            break ;
          case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
            {
              GGS_expressionAST var_initExpression_10879 ;
              var_driverInstanciationArgumentMap_10430.method_searchKey (enumerator_10639.current_mPropertyName (HERE), var_initExpression_10879, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 268)) ;
              var_validArgumentSet_10543.plusPlusAssignOperation (enumerator_10639.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 269)) ;
              var_driverPropertyKind_10717 = GGS_propertyKindAST::class_func_initializedStoredProperty (var_initExpression_10879  COMMA_SOURCE_FILE ("declaration-driver.galgas", 270)) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
            {
              GGS_expressionAST var_initExpression_11153 ;
              var_driverInstanciationArgumentMap_10430.method_searchKey (enumerator_10639.current_mPropertyName (HERE), var_initExpression_11153, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 272)) ;
              var_validArgumentSet_10543.plusPlusAssignOperation (enumerator_10639.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 273)) ;
              var_driverPropertyKind_10717 = GGS_propertyKindAST::class_func_initializedConstantProperty (var_initExpression_11153  COMMA_SOURCE_FILE ("declaration-driver.galgas", 274)) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
            {
              GGS_expressionAST extractedValue_11353__0 ;
              enumerator_10639.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedStoredProperty (extractedValue_11353__0) ;
              var_driverPropertyKind_10717 = enumerator_10639.current_mPropertyKind (HERE) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
            {
              GGS_expressionAST extractedValue_11444__0 ;
              enumerator_10639.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedConstantProperty (extractedValue_11444__0) ;
              var_driverPropertyKind_10717 = enumerator_10639.current_mPropertyKind (HERE) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
            {
              GGS_instructionListAST extractedValue_11533__0 ;
              GGS_location extractedValue_11533__1 ;
              enumerator_10639.current_mPropertyKind (HERE).getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_11533__0, extractedValue_11533__1) ;
              var_driverPropertyKind_10717 = enumerator_10639.current_mPropertyKind (HERE) ;
            }
            break ;
          case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
            {
              GGS_instructionListAST extractedValue_11619__0 ;
              GGS_location extractedValue_11619__1 ;
              enumerator_10639.current_mPropertyKind (HERE).getAssociatedValuesFor_writeComputedProperty (extractedValue_11619__0, extractedValue_11619__1) ;
              var_driverPropertyKind_10717 = enumerator_10639.current_mPropertyKind (HERE) ;
            }
            break ;
          }
          var_driverPropertyListAST_10304.addAssignOperation (enumerator_10639.current_mPropertyName (HERE), enumerator_10639.current_mPropertyAttributeList (HERE), GGS_propertyVisibility::class_func_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 287)), enumerator_10639.current_mPropertyTypeName (HERE), var_driverPropertyKind_10717  COMMA_SOURCE_FILE ("declaration-driver.galgas", 284)) ;
          enumerator_10639.gotoNextObject () ;
        }
        UpEnumerator_stringset enumerator_11943 (var_driverInstanciationArgumentMap_10430.getter_keySet (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 292)).substract_operation (var_validArgumentSet_10543, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 292))) ;
        while (enumerator_11943.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_10430.getter_locationForKey (enumerator_11943.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)), GGS_string ("invalid selector"), fixItArray8  COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)) ;
          enumerator_11943.gotoNextObject () ;
        }
      }
    }
    GGS_lstringlist temp_9 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 301)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_structureDeclarationAST::init_21__21__21__21__21__21__21_ (function_omnibusTypeSpecificNameForDriver (enumerator_10025.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 298)), function_omnibusTypeSpecificNameForDriver (enumerator_10025.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 299)), function_llvmDriverNameFromName (enumerator_10025.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 300)), temp_9, GGS_bool (false), var_driverPropertyListAST_10304, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssignOperation (GGS_implementedDriverAST::init_21__21__21__21__21__21__21__21__21_ (enumerator_10025.current_mDriver (HERE).readProperty_mDriverName (), enumerator_10025.current_mDriver (HERE).readProperty_mDriverDependanceList (), var_driverIsInstancied_10140, enumerator_10025.current_mDriver (HERE).readProperty_mBootLocation (), enumerator_10025.current_mDriver (HERE).readProperty_mBootInstructionList (), enumerator_10025.current_mDriver (HERE).readProperty_mBootEndLocation (), enumerator_10025.current_mDriver (HERE).readProperty_mStartupLocation (), enumerator_10025.current_mDriver (HERE).readProperty_mStartupInstructionList (), enumerator_10025.current_mDriver (HERE).readProperty_mStartupEndLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306)) ;
    enumerator_10025.gotoNextObject () ;
  }
  GGS_driverDeclarationListAST temp_10 = GGS_driverDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 318)) ;
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST = temp_10 ;
  UpEnumerator_stringset enumerator_13056 (var_instanciedDriverMap_9474.getter_keySet (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 320)).substract_operation (var_validDriverNames_9940, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 320))) ;
  while (enumerator_13056.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_9474.getter_locationForKey (enumerator_13056.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)), GGS_string ("undefined driver"), fixItArray11  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)) ;
    enumerator_13056.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@implementedDriverAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_implementedDriverAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                       GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                       GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                       GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                       GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                       GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                       GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                       GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_driverType_14228 ;
  const GGS_implementedDriverAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)), var_driverType_14228, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 339)) ;
  {
  const GGS_implementedDriverAST temp_1 = this ;
  const GGS_implementedDriverAST temp_2 = this ;
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_1.readProperty_mDriverName (), temp_2.readProperty_mIsInstancied (), var_driverType_14228, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 343)) ;
  }
  const GGS_implementedDriverAST temp_3 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedRequiredDriver::init_21_ (temp_3.readProperty_mDriverName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 345)) ;
  const GGS_implementedDriverAST temp_4 = this ;
  const GGS_implementedDriverAST temp_5 = this ;
  GGS_routineFormalArgumentListAST temp_6 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 356)) ;
  const GGS_implementedDriverAST temp_7 = this ;
  const GGS_implementedDriverAST temp_8 = this ;
  const GGS_implementedDriverAST temp_9 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (function_omnibusTypeSpecificNameForDriver (temp_4.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 348)), GGS_mode::class_func_bootMode (SOURCE_FILE ("declaration-driver.galgas", 349)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-driver.galgas", 351)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), function_llvmBootRoutineNameFromDriver (temp_5.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 355)), temp_6, GGS_bool (true), temp_7.readProperty_mBootInstructionList (), temp_8.readProperty_mBootEndLocation (), GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), temp_9.readProperty_mBootLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 347)) ;
  const GGS_implementedDriverAST temp_10 = this ;
  const GGS_implementedDriverAST temp_11 = this ;
  GGS_routineFormalArgumentListAST temp_12 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 371)) ;
  const GGS_implementedDriverAST temp_13 = this ;
  const GGS_implementedDriverAST temp_14 = this ;
  const GGS_implementedDriverAST temp_15 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (function_omnibusTypeSpecificNameForDriver (temp_10.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 363)), GGS_mode::class_func_startupMode (SOURCE_FILE ("declaration-driver.galgas", 364)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-driver.galgas", 366)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), function_llvmStartupRoutineNameFromDriver (temp_11.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 370)), temp_12, GGS_bool (true), temp_13.readProperty_mStartupInstructionList (), temp_14.readProperty_mStartupEndLocation (), GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), temp_15.readProperty_mStartupLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 362)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedRequiredDriver semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedRequiredDriver::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_driverType_16504 ;
  const GGS_decoratedRequiredDriver temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 394)), var_driverType_16504, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 393)) ;
  const GGS_decoratedRequiredDriver temp_1 = this ;
  GGS_lstring var_typeName_16525 = GGS_lstring::init_21__21_ (var_driverType_16504.readProperty_omnibusTypeDescriptionName (), temp_1.readProperty_mDriverName ().readProperty_location (), inCompiler COMMA_HERE) ;
  GGS_constructorMap var_constructorMap_16662 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_16525, var_constructorMap_16662, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 398)) ;
  GGS_constructorValue var_constructorValue_16752 ;
  const GGS_decoratedRequiredDriver temp_2 = this ;
  GGS_constructorSignature joker_16744 ; // Joker input parameter
  var_constructorMap_16662.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("()"), temp_2.readProperty_mDriverName ().readProperty_location (), inCompiler COMMA_HERE), joker_16744, var_constructorValue_16752, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)) ;
  GGS_sortedOperandIRList var_sortedOperandList_16830 ;
  var_constructorValue_16752.method_extractStructure (var_sortedOperandList_16830, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 400)) ;
  GGS_operandIRList temp_3 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 401)) ;
  GGS_operandIRList var_initialValueList_16870 = temp_3 ;
  UpEnumerator_sortedOperandIRList enumerator_16913 (var_sortedOperandList_16830) ;
  while (enumerator_16913.hasCurrentObject ()) {
    var_initialValueList_16870.addAssignOperation (enumerator_16913.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 403)) ;
    enumerator_16913.gotoNextObject () ;
  }
  const GGS_decoratedRequiredDriver temp_4 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssignOperation (temp_4.readProperty_mDriverName (), var_driverType_16504, var_initialValueList_16870  COMMA_SOURCE_FILE ("declaration-driver.galgas", 405)) ;
  const GGS_decoratedRequiredDriver temp_5 = this ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.plusPlusAssignOperation (temp_5.readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 410)) ;
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
    test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (temp_1.readProperty_mStaticListName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 162)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_staticListValueListAST var_elements_6292 ;
      {
      const GGS_staticListAST temp_2 = this ;
      ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (temp_2.readProperty_mStaticListName ().readProperty_string (), var_elements_6292, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 163)) ;
      }
      const GGS_staticListAST temp_3 = this ;
      const GGS_staticListAST temp_4 = this ;
      const GGS_staticListAST temp_5 = this ;
      outArgument_outNewDeclaration = GGS_staticListAST::init_21__21__21_ (temp_3.readProperty_mStaticListName (), temp_4.readProperty_mPropertyList (), temp_5.readProperty_mValueList ().add_operation (var_elements_6292, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 167)), inCompiler COMMA_HERE) ;
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
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mStaticListName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 180)) ;
  }
  {
  const GGS_staticListAST temp_2 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mStaticListName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 181)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 181)) ;
  }
  const GGS_staticListAST temp_3 = this ;
  UpEnumerator_staticListPropertyListAST enumerator_7106 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_7106.hasCurrentObject ()) {
    switch (enumerator_7106.current_mPropertyType (HERE).enumValue ()) {
    case GGS_staticListPropertyTypeAST::Enumeration::invalid:
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_valueType:
      {
        GGS_lstring extractedValue_7182_propertyTypeName_0 ;
        enumerator_7106.current_mPropertyType (HERE).getAssociatedValuesFor_valueType (extractedValue_7182_propertyTypeName_0) ;
        {
        const GGS_staticListAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mStaticListName (), extractedValue_7182_propertyTypeName_0 COMMA_SOURCE_FILE ("declaration-static-list.galgas", 186)) ;
        }
      }
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_function:
      {
        GGS_mode extractedValue_7297__0 ;
        GGS_routineFormalArgumentListAST extractedValue_7329_formalArgs_1 ;
        GGS_lstring extractedValue_7349_returnType_2 ;
        enumerator_7106.current_mPropertyType (HERE).getAssociatedValuesFor_function (extractedValue_7297__0, extractedValue_7329_formalArgs_1, extractedValue_7349_returnType_2) ;
        UpEnumerator_routineFormalArgumentListAST enumerator_7401 (extractedValue_7329_formalArgs_1) ;
        while (enumerator_7401.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7401.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 189)) ;
          }
          enumerator_7401.gotoNextObject () ;
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::notEqual, extractedValue_7349_returnType_2.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            {
            const GGS_staticListAST temp_6 = this ;
            ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mStaticListName (), extractedValue_7349_returnType_2 COMMA_SOURCE_FILE ("declaration-static-list.galgas", 192)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_7106.gotoNextObject () ;
  }
  const GGS_staticListAST temp_7 = this ;
  UpEnumerator_staticListValueListAST enumerator_7692 (temp_7.readProperty_mValueList ()) ;
  while (enumerator_7692.hasCurrentObject ()) {
    UpEnumerator_extendStaticListElementAST enumerator_7734 (enumerator_7692.current_mElement (HERE)) ;
    while (enumerator_7734.hasCurrentObject ()) {
      switch (enumerator_7734.current_mExpression (HERE).enumValue ()) {
      case GGS_extendStaticListExpressionAST::Enumeration::invalid:
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_expression:
        {
          GGS_expressionAST extractedValue_7808_exp_0 ;
          enumerator_7734.current_mExpression (HERE).getAssociatedValuesFor_expression (extractedValue_7808_exp_0) ;
          const GGS_staticListAST temp_8 = this ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_7808_exp_0.ptr (), temp_8.readProperty_mStaticListName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 201)) ;
        }
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_function:
        {
          GGS_lstring extractedValue_7919__0 ;
          GGS_routineFormalArgumentListAST extractedValue_7951_formalArgs_1 ;
          enumerator_7734.current_mExpression (HERE).getAssociatedValuesFor_function (extractedValue_7919__0, extractedValue_7951_formalArgs_1) ;
          UpEnumerator_routineFormalArgumentListAST enumerator_8005 (extractedValue_7951_formalArgs_1) ;
          while (enumerator_8005.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_8005.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 204)) ;
            }
            enumerator_8005.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7734.gotoNextObject () ;
    }
    enumerator_7692.gotoNextObject () ;
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
  result_result = GGS_string ("staticlist ").add_operation (temp_0.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 220)) ;
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
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 230)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
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
                                                                          const cObjectArray & inEffectiveParameterArray,
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
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist-").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 236)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
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
                                                                       const cObjectArray & inEffectiveParameterArray,
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
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 242)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
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
                                                                                 const cObjectArray & inEffectiveParameterArray,
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
  result_result = GGS_lstring::init_21__21_ (GGS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 248)), constinArgument_inStaticListName.readProperty_location (), inCompiler COMMA_HERE) ;
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
                                                                              const cObjectArray & inEffectiveParameterArray,
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
  GGS_propertyList temp_0 = GGS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 279)) ;
  GGS_propertyList var_propertyList_11332 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 281)) ;
  GGS_stringset var_propertyNameSet_11414 = temp_1 ;
  const GGS_staticListAST temp_2 = this ;
  GGS_lstring var_omnibusElementTypeName_11442 = function_omnibusNameForStaticListElementType (temp_2.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 282)) ;
  GGS_unifiedTypeMapEntry var_elementTypeProxy_11590 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11442, var_elementTypeProxy_11590, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 283)) ;
  }
  const GGS_staticListAST temp_3 = this ;
  UpEnumerator_staticListPropertyListAST enumerator_11723 (temp_3.readProperty_mPropertyList ()) ;
  GGS_uint index_11705 (uint32_t (0)) ;
  while (enumerator_11723.hasCurrentObject ()) {
    switch (enumerator_11723.current_mPropertyType (HERE).enumValue ()) {
    case GGS_staticListPropertyTypeAST::Enumeration::invalid:
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_valueType:
      {
        GGS_lstring extractedValue_11815_propertyTypeName_0 ;
        enumerator_11723.current_mPropertyType (HERE).getAssociatedValuesFor_valueType (extractedValue_11815_propertyTypeName_0) ;
        GGS_omnibusType var_propertyType_11845 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_11815_propertyTypeName_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = var_propertyNameSet_11414.getter_hasKey (enumerator_11723.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 289)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_11723.current_mPropertyName (HERE).readProperty_location (), GGS_string ("duplicated property name"), fixItArray5  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 290)) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          var_propertyNameSet_11414.plusPlusAssignOperation (enumerator_11723.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
          var_propertyList_11332.addAssignOperation (enumerator_11723.current_mPropertyName (HERE).readProperty_string (), var_propertyType_11845  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 293)) ;
          {
          const GGS_staticListAST temp_6 = this ;
          extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListElementType (temp_6.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 295)), enumerator_11723.current_mPropertyName (HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 297)), GGS_propertyGetterKind::class_func_storedProperty (var_propertyType_11845, index_11705  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 294)) ;
          }
        }
      }
      break ;
    case GGS_staticListPropertyTypeAST::Enumeration::enum_function:
      {
        GGS_mode extractedValue_12409_mode_0 ;
        GGS_routineFormalArgumentListAST extractedValue_12444_formalArgs_1 ;
        GGS_lstring extractedValue_12464_returnTypeName_2 ;
        enumerator_11723.current_mPropertyType (HERE).getAssociatedValuesFor_function (extractedValue_12409_mode_0, extractedValue_12444_formalArgs_1, extractedValue_12464_returnTypeName_2) ;
        const GGS_staticListAST temp_7 = this ;
        GGS_lstring var_routineLLVMName_12519 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (temp_7.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 304)).readProperty_string (), enumerator_11723.current_mPropertyName (HERE), extractedValue_12444_formalArgs_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 303)) ;
        GGS_routineTypedSignature var_signature_12767 ;
        {
        routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_12444_formalArgs_1, var_signature_12767, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 309)) ;
        }
        GGS_unifiedTypeMapEntry temp_8 ;
        const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, extractedValue_12464_returnTypeName_2.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          temp_8 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-static-list.galgas", 311)) ;
        }else if (GalgasBool::boolFalse == test_9) {
          temp_8 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_12464_returnTypeName_2, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 313)) ;
        }
        GGS_unifiedTypeMapEntry var_returnTypeProxy_12809 = temp_8 ;
        GGS_omnibusType var_propertyType_13003 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 317)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), GGS_string::makeEmptyString (), GGS_typeKind::class_func_function (extractedValue_12409_mode_0, var_signature_12767, var_returnTypeProxy_12809  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 320)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
        var_propertyList_11332.addAssignOperation (enumerator_11723.current_mPropertyName (HERE).readProperty_string (), var_propertyType_13003  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 328)) ;
        const GGS_staticListAST temp_10 = this ;
        GGS_lstring var_routineMangledName_13411 = GGS_lstring::init_21__21_ (function_omnibusNameForStaticListElementType (temp_10.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (enumerator_11723.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (extensionGetter_routineSignature (extractedValue_12444_formalArgs_1, enumerator_11723.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)), enumerator_11723.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
        {
        GGS_routineLLVMNameDict temp_11 = GGS_routineLLVMNameDict::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        temp_11.plusPlusAssignOperation (GGS_routineLLVMNameDict_2E_element::init_21__21_ (GGS_mode::class_func_userMode (SOURCE_FILE ("declaration-static-list.galgas", 339)), var_routineLLVMName_12519.readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_13411, GGS_bool (true), var_signature_12767, var_returnTypeProxy_12809, temp_11, GGS_bool (false), GGS_mode::class_func_userMode (SOURCE_FILE ("declaration-static-list.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 334)) ;
        }
        ioArgument_ioRoutineListIR.addAssignOperation (GGS_staticListIndirectRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (var_routineLLVMName_12519, GGS_bool (true), GGS_bool (true), var_elementTypeProxy_11590, var_signature_12767, var_returnTypeProxy_12809, index_11705, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 344)) ;
      }
      break ;
    }
    enumerator_11723.gotoNextObject () ;
    index_11705.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 285)) ;
  }
  {
  const GGS_staticListAST temp_12 = this ;
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (temp_12.readProperty_mStaticListName (), var_propertyList_11332, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 355)) ;
  }
  const GGS_staticListAST temp_13 = this ;
  const GGS_staticListAST temp_14 = this ;
  GGS_omnibusType var_elementType_14327 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 358)), GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE), function_omnibusNameForStaticListElementType (temp_13.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 360)).readProperty_string (), GGS_typeKind::class_func_structure (var_propertyList_11332  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 361)), function_llvmNameForStaticListElementType (temp_14.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 362)).readProperty_string (), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11442, var_elementType_14327, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 364)) ;
  }
  GGS_stringlist temp_15 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 366)) ;
  GGS_stringlist var_stringValueList_14821 = temp_15 ;
  const GGS_staticListAST temp_16 = this ;
  UpEnumerator_staticListValueListAST enumerator_14858 (temp_16.readProperty_mValueList ()) ;
  while (enumerator_14858.hasCurrentObject ()) {
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = GGS_bool (ComparisonKind::notEqual, var_propertyList_11332.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 368)).objectCompare (enumerator_14858.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 368)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        const GGS_staticListAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mStaticListName ().readProperty_location (), var_propertyList_11332.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 370)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (GGS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (enumerator_14858.current_mElement (HERE).getter_count (SOURCE_FILE ("declaration-static-list.galgas", 371)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 370)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 371)), fixItArray19  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 369)) ;
      }
    }
    if (GalgasBool::boolFalse == test_17) {
      GGS_string var_staticValue_15100 = GGS_string ("{") ;
      UpEnumerator_extendStaticListElementAST enumerator_15137 (enumerator_14858.current_mElement (HERE)) ;
      UpEnumerator_propertyList enumerator_15162 (var_propertyList_11332) ;
      while (enumerator_15137.hasCurrentObject () && enumerator_15162.hasCurrentObject ()) {
        switch (enumerator_15137.current_mExpression (HERE).enumValue ()) {
        case GGS_extendStaticListExpressionAST::Enumeration::invalid:
          break ;
        case GGS_extendStaticListExpressionAST::Enumeration::enum_expression:
          {
            GGS_expressionAST extractedValue_15258_exp_0 ;
            enumerator_15137.current_mExpression (HERE).getAssociatedValuesFor_expression (extractedValue_15258_exp_0) ;
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = enumerator_15162.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 377)).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_15137.current_mEndOfExpression (HERE), GGS_string ("a function name is expected here"), fixItArray21  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 378)) ;
              }
            }
            if (GalgasBool::boolFalse == test_20) {
              GGS_objectIR var_expressionResult_15675 ;
              {
              routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_15258_exp_0, enumerator_15137.current_mEndOfExpression (HERE), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 385)), var_expressionResult_15675, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 380)) ;
              }
              var_staticValue_15100.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15162.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)).add_operation (extensionGetter_llvmName (var_expressionResult_15675, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 389)) ;
            }
          }
          break ;
        case GGS_extendStaticListExpressionAST::Enumeration::enum_function:
          {
            GGS_lstring extractedValue_15886_functionName_0 ;
            GGS_routineFormalArgumentListAST extractedValue_15929_formalArgs_1 ;
            enumerator_15137.current_mExpression (HERE).getAssociatedValuesFor_function (extractedValue_15886_functionName_0, extractedValue_15929_formalArgs_1) ;
            GalgasBool test_22 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_22) {
              test_22 = enumerator_15162.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 392)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 392)).boolEnum () ;
              if (GalgasBool::boolTrue == test_22) {
                GenericArray <FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (enumerator_15137.current_mEndOfExpression (HERE), GGS_string ("a static expression is expected here"), fixItArray23  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)) ;
              }
            }
            if (GalgasBool::boolFalse == test_22) {
              GGS_mode var_mode_16150 ;
              GGS_routineTypedSignature var_functionSignature_16184 ;
              GGS_unifiedTypeMapEntry var_functionReturnTypeProxy_16237 ;
              enumerator_15162.current_mType (HERE).readProperty_kind ().method_extractFunction (var_mode_16150, var_functionSignature_16184, var_functionReturnTypeProxy_16237, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 395)) ;
              GGS_lstring var_argumentSignature_16291 = extensionGetter_routineSignature (extractedValue_15929_formalArgs_1, extractedValue_15886_functionName_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 400)) ;
              GGS_lstring var_functionMangledName_16371 = GGS_lstring::init_21__21_ (extractedValue_15886_functionName_0.readProperty_string ().add_operation (var_argumentSignature_16291.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 401)), extractedValue_15886_functionName_0.readProperty_location (), inCompiler COMMA_HERE) ;
              GGS_bool var_candidateIsPublic_16565 ;
              GGS_routineTypedSignature var_candidateSignature_16602 ;
              GGS_unifiedTypeMapEntry var_candidateReturnTypeProxy_16640 ;
              GGS_routineLLVMNameDict var_implementedModeDictionary_16712 ;
              GGS_bool var_implementedIsExported_16764 ;
              GGS_mode var_candidateMode_16812 ;
              ioArgument_ioContext.readProperty_mRoutineMap ().method_searchKey (var_functionMangledName_16371, var_candidateIsPublic_16565, var_candidateSignature_16602, var_candidateReturnTypeProxy_16640, var_implementedModeDictionary_16712, var_implementedIsExported_16764, var_candidateMode_16812, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 402)) ;
              GGS_string var_routineLLVMName_16882 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_16712, var_mode_16150, extractedValue_15886_functionName_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 412)) ;
              GalgasBool test_24 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_24) {
                GGS_bool test_25 = var_functionReturnTypeProxy_16237.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 413)) ;
                if (GalgasBool::boolTrue == test_25.boolEnum ()) {
                  test_25 = var_candidateReturnTypeProxy_16640.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 413)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 413)) ;
                }
                test_24 = test_25.boolEnum () ;
                if (GalgasBool::boolTrue == test_24) {
                  GenericArray <FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_15886_functionName_0.readProperty_location (), GGS_string ("this function should return an $").add_operation (extensionGetter_key (var_candidateReturnTypeProxy_16640, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)).add_operation (GGS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)), fixItArray26  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)) ;
                }
              }
              if (GalgasBool::boolFalse == test_24) {
                GalgasBool test_27 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_27) {
                  GGS_bool test_28 = var_functionReturnTypeProxy_16237.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 415)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 415)) ;
                  if (GalgasBool::boolTrue == test_28.boolEnum ()) {
                    test_28 = var_candidateReturnTypeProxy_16640.getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 415)) ;
                  }
                  test_27 = test_28.boolEnum () ;
                  if (GalgasBool::boolTrue == test_27) {
                    GenericArray <FixItDescription> fixItArray29 ;
                    inCompiler->emitSemanticError (extractedValue_15886_functionName_0.readProperty_location (), GGS_string ("this function should return no object"), fixItArray29  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 416)) ;
                  }
                }
              }
              GalgasBool test_30 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_30) {
                test_30 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_16184.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 418)).objectCompare (var_candidateSignature_16602.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 418)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_30) {
                  GenericArray <FixItDescription> fixItArray31 ;
                  inCompiler->emitSemanticError (extractedValue_15886_functionName_0.readProperty_location (), GGS_string ("this function has ").add_operation (var_candidateSignature_16602.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 420)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GGS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (var_functionSignature_16184.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 421)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)).add_operation (GGS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 421)), fixItArray31  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 419)) ;
                }
              }
              if (GalgasBool::boolFalse == test_30) {
                UpEnumerator_routineTypedSignature enumerator_17679 (var_functionSignature_16184) ;
                UpEnumerator_routineTypedSignature enumerator_17711 (var_candidateSignature_16602) ;
                while (enumerator_17679.hasCurrentObject () && enumerator_17711.hasCurrentObject ()) {
                  GalgasBool test_32 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_32) {
                    test_32 = GGS_bool (ComparisonKind::notEqual, enumerator_17679.current (HERE).readProperty_mTypeProxy ().objectCompare (enumerator_17711.current (HERE).readProperty_mTypeProxy ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_32) {
                      GenericArray <FixItDescription> fixItArray33 ;
                      inCompiler->emitSemanticError (enumerator_17711.current (HERE).readProperty_mSelector ().readProperty_location (), GGS_string ("argument type should be $").add_operation (extensionGetter_key (enumerator_17679.current (HERE).readProperty_mTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), fixItArray33  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)) ;
                    }
                  }
                  enumerator_17679.gotoNextObject () ;
                  enumerator_17711.gotoNextObject () ;
                }
              }
              var_staticValue_15100.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15162.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)).add_operation (var_routineLLVMName_16882.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)) ;
            }
          }
          break ;
        }
        enumerator_15137.gotoNextObject () ;
        enumerator_15162.gotoNextObject () ;
        if (enumerator_15137.hasCurrentObject () && enumerator_15162.hasCurrentObject ()) {
          var_staticValue_15100.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 433)) ;
        }
      }
      var_staticValue_15100.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 435)) ;
      var_stringValueList_14821.addAssignOperation (var_staticValue_15100  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 436)) ;
    }
    enumerator_14858.gotoNextObject () ;
  }
  {
  const GGS_staticListAST temp_34 = this ;
  ioArgument_ioStaticListValueMap.setter_insertKey (temp_34.readProperty_mStaticListName (), var_stringValueList_14821, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 439)) ;
  }
  {
  const GGS_staticListAST temp_35 = this ;
  const GGS_staticListAST temp_36 = this ;
  const GGS_staticListAST temp_37 = this ;
  extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListType (temp_35.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 442)), GGS_lstring::init_21__21_ (GGS_string ("count"), temp_36.readProperty_mStaticListName ().readProperty_location (), inCompiler COMMA_HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 444)), GGS_propertyGetterKind::class_func_constantProperty (GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), temp_37.readProperty_mValueList ().getter_count (SOURCE_FILE ("declaration-static-list.galgas", 445)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 441)) ;
  }
  const GGS_staticListAST temp_38 = this ;
  const GGS_staticListAST temp_39 = this ;
  GGS_omnibusType var_arrayType_18776 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_staticSubscript (var_elementType_14327, var_stringValueList_14821.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 449)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 449))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 450)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("declaration-static-list.galgas", 450)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 450)), function_omnibusNameForStaticListType (temp_38.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 451)).readProperty_string (), GGS_typeKind::class_func_staticArrayType (var_elementType_14327, var_stringValueList_14821.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 452)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 452))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 452)), function_llvmNameForStaticListType (temp_39.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 453)).readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_staticListAST temp_40 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_omnibusNameForStaticListType (temp_40.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 456)), var_arrayType_18776, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 455)) ;
  }
  const GGS_staticListAST temp_41 = this ;
  GGS_unifiedTypeMapEntry var_staticListType_19399 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusNameForStaticListType (temp_41.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)) ;
  {
  const GGS_staticListAST temp_42 = this ;
  const GGS_staticListAST temp_43 = this ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_42.readProperty_mStaticListName (), GGS_objectIR::class_func_reference (extensionGetter_type (var_staticListType_19399, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)), function_llvmNameForGlobalVariable (temp_43.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 461)) ;
  }
  {
  const GGS_staticListAST temp_44 = this ;
  const GGS_staticListAST temp_45 = this ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_44.readProperty_mStaticListName (), GGS_objectIR::class_func_reference (extensionGetter_type (var_staticListType_19399, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467)), function_llvmNameForGlobalVariable (temp_45.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 465)) ;
  }
  const GGS_staticListAST temp_46 = this ;
  const GGS_staticListAST temp_47 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedStaticList::init_21__21_ (temp_46.readProperty_mStaticListName (), temp_47.readProperty_mValueList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 470)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_14327.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 473)), var_propertyList_11332, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMStaticArrayTypeDefinitionIR::init_21__21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_18776.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 477)), var_elementType_14327, var_stringValueList_14821.getter_count (SOURCE_FILE ("declaration-static-list.galgas", 479)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 479)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 476)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedStaticList semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedStaticList::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                        GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 508)) ;
  GGS_stringset var_invokedFunctionSet_21522 = temp_0 ;
  const GGS_decoratedStaticList temp_1 = this ;
  UpEnumerator_staticListValueListAST enumerator_21562 (temp_1.readProperty_mValueList ()) ;
  while (enumerator_21562.hasCurrentObject ()) {
    UpEnumerator_extendStaticListElementAST enumerator_21604 (enumerator_21562.current_mElement (HERE)) ;
    while (enumerator_21604.hasCurrentObject ()) {
      switch (enumerator_21604.current_mExpression (HERE).enumValue ()) {
      case GGS_extendStaticListExpressionAST::Enumeration::invalid:
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_expression:
        break ;
      case GGS_extendStaticListExpressionAST::Enumeration::enum_function:
        {
          GGS_lstring extractedValue_21724_functionName_0 ;
          GGS_routineFormalArgumentListAST extractedValue_21767_formalArgs_1 ;
          enumerator_21604.current_mExpression (HERE).getAssociatedValuesFor_function (extractedValue_21724_functionName_0, extractedValue_21767_formalArgs_1) ;
          GGS_lstring var_routineMangledName_21825 = function_routineMangledNameFromAST (GGS_string::makeEmptyString (), extractedValue_21724_functionName_0, extractedValue_21767_formalArgs_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 515)) ;
          var_invokedFunctionSet_21522.plusPlusAssignOperation (var_routineMangledName_21825.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 520)) ;
        }
        break ;
      }
      enumerator_21604.gotoNextObject () ;
    }
    enumerator_21562.gotoNextObject () ;
  }
  {
  const GGS_decoratedStaticList temp_2 = this ;
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (temp_2.readProperty_mStaticListName (), var_invokedFunctionSet_21522, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 524)) ;
  }
  {
  const GGS_decoratedStaticList temp_3 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (temp_3.readProperty_mStaticListName (), var_invokedFunctionSet_21522, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 525)) ;
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
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 575)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_staticListIndirectRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 576)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 577)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_staticListIndirectRoutineIR temp_2 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 579)) ;
  }
  const GGS_staticListIndirectRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)) ;
  const GGS_staticListIndirectRoutineIR temp_4 = this ;
  GGS_string var_receiverLLVMTypeName_24475 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_4.readProperty_mStaticListElementType (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 582)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 582)) ;
  GGS_bool var_first_24554 = GGS_bool (true) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_24475.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssignOperation(var_receiverLLVMTypeName_24475.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 585)) ;
      var_first_24554 = GGS_bool (false) ;
    }
  }
  const GGS_staticListIndirectRoutineIR temp_6 = this ;
  UpEnumerator_routineTypedSignature enumerator_24742 (temp_6.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_24742.hasCurrentObject ()) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = var_first_24554.boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        var_first_24554 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 592)) ;
    }
    switch (enumerator_24742.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_24742.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)).add_operation (enumerator_24742.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_24742.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).add_operation (GGS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)).add_operation (enumerator_24742.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_24742.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).add_operation (GGS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).add_operation (enumerator_24742.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)) ;
      }
      break ;
    }
    enumerator_24742.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)) ;
  GGS_string var_llvmFunctionTypeName_25442 ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_staticListIndirectRoutineIR temp_9 = this ;
    test_8 = temp_9.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 606)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_llvmFunctionTypeName_25442 = GGS_string ("void") ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_staticListIndirectRoutineIR temp_10 = this ;
    var_llvmFunctionTypeName_25442 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_10.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 609)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 609)) ;
  }
  var_llvmFunctionTypeName_25442.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 611)) ;
  var_first_24554 = GGS_bool (true) ;
  const GGS_staticListIndirectRoutineIR temp_11 = this ;
  UpEnumerator_routineTypedSignature enumerator_25714 (temp_11.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_25714.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_first_24554.boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        var_first_24554 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      var_llvmFunctionTypeName_25442.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)) ;
    }
    switch (enumerator_25714.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_llvmFunctionTypeName_25442.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25714.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        var_llvmFunctionTypeName_25442.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25714.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 623)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        var_llvmFunctionTypeName_25442.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25714.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 625)) ;
      }
      break ;
    }
    enumerator_25714.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_25442.plusAssignOperation(GGS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 628)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_24475, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)) ;
  const GGS_staticListIndirectRoutineIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", ").add_operation (var_receiverLLVMTypeName_24475, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GGS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (temp_13.readProperty_mPropertyIndex ().getter_string (SOURCE_FILE ("declaration-static-list.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_25442, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (var_llvmFunctionTypeName_25442, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)).add_operation (GGS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)) ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_staticListIndirectRoutineIR temp_15 = this ;
    test_14 = temp_15.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 633)).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 634)) ;
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    const GGS_staticListIndirectRoutineIR temp_16 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %result = call ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_16.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)) ;
  var_first_24554 = GGS_bool (true) ;
  const GGS_staticListIndirectRoutineIR temp_17 = this ;
  UpEnumerator_routineTypedSignature enumerator_26737 (temp_17.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_26737.hasCurrentObject ()) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_first_24554.boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_first_24554 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_18) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)) ;
    }
    switch (enumerator_26737.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26737.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)).add_operation (enumerator_26737.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 648)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26737.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).add_operation (GGS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)).add_operation (enumerator_26737.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 650)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26737.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (GGS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (enumerator_26737.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)) ;
      }
      break ;
    }
    enumerator_26737.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)) ;
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    const GGS_staticListIndirectRoutineIR temp_20 = this ;
    test_19 = temp_20.readProperty_mReturnTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-static-list.galgas", 657)).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 658)) ;
    }
  }
  if (GalgasBool::boolFalse == test_19) {
    const GGS_staticListIndirectRoutineIR temp_21 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_21.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 662)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedTaskListDeclaration semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_decoratedTaskListDeclaration temp_0 = this ;
  UpEnumerator_decoratedTaskList enumerator_12017 (temp_0.readProperty_mTaskList ()) ;
  GGS_uint index_12000 (uint32_t (0)) ;
  while (enumerator_12017.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_12017.current (HERE), constinArgument_inContext, index_12000, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 320)) ;
    enumerator_12017.gotoNextObject () ;
    index_12000.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 319)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines_3F__21_ (const GGS_taskSetupListAST constinArgument_inTaskRoutineLISTAST,
                                                 GGS_stringlist & outArgument_outSetupOrderedList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetupOrderedList.drop () ; // Release 'out' argument
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 335)) ;
  outArgument_outSetupOrderedList = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 336)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_uint var_numberOfEntriesWithoutAnyPrecedence_12612 = GGS_uint (uint32_t (0U)) ;
      UpEnumerator_taskSetupListAST enumerator_12663 (constinArgument_inTaskRoutineLISTAST) ;
      while (enumerator_12663.hasCurrentObject ()) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, enumerator_12663.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 340)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_numberOfEntriesWithoutAnyPrecedence_12612.plusAssignOperation(var_numberOfEntriesWithoutAnyPrecedence_12612.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 341)) ;
          }
        }
        enumerator_12663.gotoNextObject () ;
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_numberOfEntriesWithoutAnyPrecedence_12612.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          UpEnumerator_taskSetupListAST enumerator_12922 (constinArgument_inTaskRoutineLISTAST) ;
          while (enumerator_12922.hasCurrentObject ()) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_12922.current_mName (HERE).readProperty_location (), GGS_string ("Exactly one routine should have no precedence"), fixItArray4  COMMA_SOURCE_FILE ("task-declaration.galgas", 346)) ;
            enumerator_12922.gotoNextObject () ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_numberOfEntriesWithoutAnyPrecedence_12612.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            UpEnumerator_taskSetupListAST enumerator_13102 (constinArgument_inTaskRoutineLISTAST) ;
            while (enumerator_13102.hasCurrentObject ()) {
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::equal, enumerator_13102.current_mDependanceList (HERE).getter_count (SOURCE_FILE ("task-declaration.galgas", 350)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_13102.current_mName (HERE).readProperty_location (), GGS_string ("Exactly one routine should have no precedence"), fixItArray7  COMMA_SOURCE_FILE ("task-declaration.galgas", 351)) ;
                }
              }
              enumerator_13102.gotoNextObject () ;
            }
          }
        }
      }
      GGS_taskSetupListAST var_taskSetupListAST_13360 = constinArgument_inTaskRoutineLISTAST ;
      GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 357)) ;
      GGS_stringset var_precedenceSet_13419 = temp_8 ;
      GGS_bool var_continue_13447 = GGS_bool (true) ;
      if (constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).isValid ()) {
        uint32_t variant_13467 = constinArgument_inTaskRoutineLISTAST.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).uintValue () ;
        bool loop_13467 = true ;
        while (loop_13467) {
          GGS_bool test_9 = var_continue_13447 ;
          if (GalgasBool::boolTrue == test_9.boolEnum ()) {
            test_9 = GGS_bool (ComparisonKind::greaterThan, var_taskSetupListAST_13360.getter_count (SOURCE_FILE ("task-declaration.galgas", 359)).objectCompare (GGS_uint (uint32_t (0U)))) ;
          }
          loop_13467 = test_9.isValid () ;
          if (loop_13467) {
            loop_13467 = test_9.boolValue () ;
          }
          if (loop_13467 && (0 == variant_13467)) {
            loop_13467 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 359)) ;
          }
          if (loop_13467) {
            variant_13467 -- ;
            var_continue_13447 = GGS_bool (false) ;
            GGS_bigint var_idx_13588 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 361)) ;
            UpEnumerator_taskSetupListAST enumerator_13612 (var_taskSetupListAST_13360) ;
            while (enumerator_13612.hasCurrentObject ()) {
              GGS_bool var_allPrecedenceDefined_13663 = GGS_bool (true) ;
              UpEnumerator_lstringlist enumerator_13704 (enumerator_13612.current_mDependanceList (HERE)) ;
              bool bool_10 = var_allPrecedenceDefined_13663.isValidAndTrue () ;
              if (enumerator_13704.hasCurrentObject () && bool_10) {
                while (enumerator_13704.hasCurrentObject () && bool_10) {
                  var_allPrecedenceDefined_13663 = var_precedenceSet_13419.getter_hasKey (enumerator_13704.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas", 365)) ;
                  enumerator_13704.gotoNextObject () ;
                  if (enumerator_13704.hasCurrentObject ()) {
                    bool_10 = var_allPrecedenceDefined_13663.isValidAndTrue () ;
                  }
                }
              }
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = var_allPrecedenceDefined_13663.boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  outArgument_outSetupOrderedList.addAssignOperation (enumerator_13612.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 368)) ;
                  var_precedenceSet_13419.plusPlusAssignOperation (enumerator_13612.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 369)) ;
                  var_continue_13447 = GGS_bool (true) ;
                  {
                  GGS_lstring joker_14052_2 ; // Joker input parameter
                  GGS_lstringlist joker_14052_1 ; // Joker input parameter
                  var_taskSetupListAST_13360.setter_removeAtIndex (joker_14052_2, joker_14052_1, var_idx_13588.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                var_idx_13588 = var_idx_13588.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 373)) ;
              }
              enumerator_13612.gotoNextObject () ;
            }
          }
        }
      }
      UpEnumerator_taskSetupListAST enumerator_14183 (var_taskSetupListAST_13360) ;
      while (enumerator_14183.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_14183.current_mName (HERE).readProperty_location (), GGS_string ("this routine is out of execution order"), fixItArray12  COMMA_SOURCE_FILE ("task-declaration.galgas", 379)) ;
        enumerator_14183.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@taskActivateFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_taskActivateFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                             const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskActivateFunctionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 611)) ;
  const GGS_taskActivateFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("(%").add_operation (temp_1.readProperty_mAssemblerTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 612)) ;
  const GGS_taskActivateFunctionIR temp_2 = this ;
  const GGS_taskActivateFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (temp_2.readProperty_mActivateServiceInvocationName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GGS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (temp_3.readProperty_mTaskIndex ().getter_string (SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 613)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 614)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 615)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 616)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 617)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@taskSetupDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_taskSetupDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskSetupDeclarationAST temp_0 = this ;
  const GGS_taskSetupDeclarationAST temp_1 = this ;
  const GGS_taskSetupDeclarationAST temp_2 = this ;
  GGS_string var_s_3439 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)) ;
  {
  const GGS_taskSetupDeclarationAST temp_3 = this ;
  const GGS_taskSetupDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_3439, temp_3.readProperty_mSetupName ().readProperty_location (), inCompiler COMMA_HERE), temp_4, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 91)) ;
  }
  {
  const GGS_taskSetupDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_5.readProperty_mTaskName () COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 93)) ;
  }
  const GGS_taskSetupDeclarationAST temp_6 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_6.readProperty_mTaskSetupInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 94)) ;
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
  result_result = GGS_string ("task function ").add_operation (temp_0.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (temp_1.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)) ;
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
  GGS_string var_mangledName_5188 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)) ;
  const GGS_taskSetupDeclarationAST temp_3 = this ;
  const GGS_taskSetupDeclarationAST temp_4 = this ;
  GGS_routineFormalArgumentListAST temp_5 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 134)) ;
  const GGS_taskSetupDeclarationAST temp_6 = this ;
  const GGS_taskSetupDeclarationAST temp_7 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (temp_3.readProperty_mTaskName (), GGS_mode::class_func_userMode (SOURCE_FILE ("task-setup-declaration.galgas", 127)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("task-setup-declaration.galgas", 129)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("task-setup-declaration.galgas", 132)), GGS_lstring::init_21__21_ (var_mangledName_5188, temp_4.readProperty_mSetupName ().readProperty_location (), inCompiler COMMA_HERE), temp_5, GGS_bool (true), temp_6.readProperty_mTaskSetupInstructionList (), temp_7.readProperty_mEndOfTaskSetupDeclaration (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-setup-declaration.galgas", 138))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 125)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_4580 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_functionDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_functionDeclarationAST temp_2 = this ;
      var_s_4580.plusAssignOperation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 153)) ;
    }
  }
  const GGS_functionDeclarationAST temp_3 = this ;
  var_s_4580.plusAssignOperation(temp_3.readProperty_mFunctionName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 155)) ;
  const GGS_functionDeclarationAST temp_4 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_4767 (temp_4.readProperty_mFunctionFormalArgumentList ()) ;
  while (enumerator_4767.hasCurrentObject ()) {
    var_s_4580.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_4767.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (enumerator_4767.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 157)) ;
    enumerator_4767.gotoNextObject () ;
  }
  var_s_4580.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 159)) ;
  const GGS_functionDeclarationAST temp_5 = this ;
  GGS_lstring var_nodeName_4910 = GGS_lstring::init_21__21_ (var_s_4580, temp_5.readProperty_mFunctionName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_functionDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4910, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 161)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4910, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) ;
  }
  const GGS_functionDeclarationAST temp_7 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_5117 (temp_7.readProperty_mFunctionFormalArgumentList ()) ;
  while (enumerator_5117.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5117.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 165)) ;
    }
    enumerator_5117.gotoNextObject () ;
  }
  const GGS_functionDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mFunctionInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 167)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_functionDeclarationAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      {
      const GGS_functionDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 169)) ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_functionDeclarationAST temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mFunctionReturnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      const GGS_functionDeclarationAST temp_14 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_14.readProperty_mFunctionReturnTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 172)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_functionDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_functionDeclarationAST temp_0 = this ;
  const GGS_functionDeclarationAST temp_1 = this ;
  result_result = GGS_string ("function ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (temp_1.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_functionDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_functionDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mFunctionName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                         GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                         GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                         GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                         GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                         GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                         GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                         GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature var_signature_7009 ;
  {
  const GGS_functionDeclarationAST temp_0 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mFunctionFormalArgumentList (), var_signature_7009, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 203)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_7114 ;
  {
  const GGS_functionDeclarationAST temp_1 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mFunctionReturnTypeName (), var_returnTypeProxy_7114, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 205)) ;
  }
  GGS_bool var_warnIfUnused_7153 = GGS_bool (true) ;
  GGS_bool var_exportedFunction_7179 = GGS_bool (false) ;
  GGS_bool var_canMutateProperties_7210 = GGS_bool (false) ;
  const GGS_functionDeclarationAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_7245 (temp_2.readProperty_mFunctionAttributeList ()) ;
  while (enumerator_7245.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_7245.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 211)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = var_warnIfUnused_7153.operator_not (SOURCE_FILE ("declaration-function.galgas", 212)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_7245.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), fixItArray5  COMMA_SOURCE_FILE ("declaration-function.galgas", 213)) ;
          }
        }
        var_warnIfUnused_7153 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::equal, enumerator_7245.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 216)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = var_exportedFunction_7179.boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_7245.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), fixItArray8  COMMA_SOURCE_FILE ("declaration-function.galgas", 218)) ;
            }
          }
          var_exportedFunction_7179 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_7245.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 221)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = var_canMutateProperties_7210.boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GenericArray <FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_7245.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), fixItArray11  COMMA_SOURCE_FILE ("declaration-function.galgas", 223)) ;
              }
            }
            var_canMutateProperties_7210 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_7245.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 227)).add_operation (GGS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (GGS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), fixItArray12  COMMA_SOURCE_FILE ("declaration-function.galgas", 227)) ;
        }
      }
    }
    enumerator_7245.gotoNextObject () ;
  }
  const GGS_functionDeclarationAST temp_13 = this ;
  const GGS_functionDeclarationAST temp_14 = this ;
  const GGS_functionDeclarationAST temp_15 = this ;
  GGS_lstring var_functionLLVMName_8163 = function_routineMangledNameFromAST (temp_13.readProperty_mReceiverTypeName ().readProperty_string (), temp_14.readProperty_mFunctionName (), temp_15.readProperty_mFunctionFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 232)) ;
  const GGS_functionDeclarationAST temp_16 = this ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_8384 = extensionGetter_routineLLVMDictionaryForFunction (temp_16.readProperty_mMode (), var_functionLLVMName_8163.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 238)) ;
  const GGS_functionDeclarationAST temp_17 = this ;
  const GGS_functionDeclarationAST temp_18 = this ;
  GGS_lstring var_routineMangledName_8476 = extensionGetter_mangledName (var_signature_7009, temp_17.readProperty_mReceiverTypeName ().readProperty_string (), temp_18.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 239)) ;
  {
  const GGS_functionDeclarationAST temp_19 = this ;
  const GGS_functionDeclarationAST temp_20 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_8476, temp_19.readProperty_mPublicFunction (), var_signature_7009, var_returnTypeProxy_7114, var_routineLLVMNameDict_8384, var_exportedFunction_7179, temp_20.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 240)) ;
  }
  const GGS_functionDeclarationAST temp_21 = this ;
  const GGS_functionDeclarationAST temp_22 = this ;
  const GGS_functionDeclarationAST temp_23 = this ;
  const GGS_functionDeclarationAST temp_24 = this ;
  const GGS_functionDeclarationAST temp_25 = this ;
  const GGS_functionDeclarationAST temp_26 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (temp_21.readProperty_mReceiverTypeName (), temp_22.readProperty_mMode (), ioArgument_ioContext.readProperty_mRequiredRoutineSet ().getter_hasKey (var_functionLLVMName_8163.readProperty_string () COMMA_SOURCE_FILE ("declaration-function.galgas", 253)), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-function.galgas", 254)), var_warnIfUnused_7153, var_exportedFunction_7179, GGS_routineAttributes::init (inCompiler COMMA_HERE), var_functionLLVMName_8163, temp_23.readProperty_mFunctionFormalArgumentList (), GGS_bool (true), temp_24.readProperty_mFunctionInstructionList (), temp_25.readProperty_mEndOfFunctionDeclaration (), temp_26.readProperty_mFunctionReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-function.galgas", 250)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@systemRoutineDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_systemRoutineDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_4992 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_systemRoutineDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_systemRoutineDeclarationAST temp_2 = this ;
      var_s_4992.plusAssignOperation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)) ;
    }
  }
  const GGS_systemRoutineDeclarationAST temp_3 = this ;
  var_s_4992.plusAssignOperation(temp_3.readProperty_mSystemRoutineName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)) ;
  const GGS_systemRoutineDeclarationAST temp_4 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_5184 (temp_4.readProperty_mFormalArgumentList ()) ;
  while (enumerator_5184.hasCurrentObject ()) {
    var_s_4992.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_5184.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (enumerator_5184.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)) ;
    enumerator_5184.gotoNextObject () ;
  }
  var_s_4992.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 175)) ;
  const GGS_systemRoutineDeclarationAST temp_5 = this ;
  GGS_lstring var_nodeKey_5319 = GGS_lstring::init_21__21_ (var_s_4992, temp_5.readProperty_mSystemRoutineName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_systemRoutineDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeKey_5319, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 177)) ;
  }
  const GGS_systemRoutineDeclarationAST temp_7 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_5449 (temp_7.readProperty_mFormalArgumentList ()) ;
  while (enumerator_5449.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5449.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 180)) ;
    }
    enumerator_5449.gotoNextObject () ;
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
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5319, temp_12.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 185)) ;
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
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5319, temp_16.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 189)) ;
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
  GGS_string var_s_7121 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_section:
    {
      var_s_7121 = GGS_string ("section") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_service:
    {
      var_s_7121 = GGS_string ("service") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_primitive:
    {
      var_s_7121 = GGS_string ("primitive") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_function:
    {
      var_s_7121 = GGS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_7121.plusAssignOperation(GGS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 225)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_7121.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)) ;
    }
  }
  var_s_7121.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 229)) ;
  var_s_7121.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_7475 (constinArgument_inFormalArgumentList) ;
  while (enumerator_7475.hasCurrentObject ()) {
    var_s_7121.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_7475.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (enumerator_7475.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)) ;
    enumerator_7475.gotoNextObject () ;
  }
  var_s_7121.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_7121, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  GGS_string var_s_8093 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_section:
    {
      var_s_8093 = GGS_string ("section") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_service:
    {
      var_s_8093 = GGS_string ("service") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_primitive:
    {
      var_s_8093 = GGS_string ("primitive") ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_function:
    {
      var_s_8093 = GGS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_8093.plusAssignOperation(GGS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 256)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_8093.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)) ;
    }
  }
  var_s_8093.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 260)) ;
  var_s_8093.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_8457 (constinArgument_inFormalArgumentList) ;
  while (enumerator_8457.hasCurrentObject ()) {
    var_s_8093.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_8457.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (enumerator_8457.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
    enumerator_8457.gotoNextObject () ;
  }
  var_s_8093.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_8093, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  GGS_unifiedTypeMapEntry var_selfTypeProxy_9654 ;
  {
  const GGS_systemRoutineDeclarationAST temp_0 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_selfTypeProxy_9654, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
  }
  GGS_string temp_1 ;
  const GalgasBool test_2 = var_selfTypeProxy_9654.getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 286)).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = extensionGetter_type (var_selfTypeProxy_9654, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)).readProperty_llvmBaseTypeName () ;
  }
  GGS_string var_receiverLLVMBaseTypeName_9700 = temp_1 ;
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  GGS_stringset var_attributeSet_9841 = temp_3 ;
  const GGS_systemRoutineDeclarationAST temp_4 = this ;
  UpEnumerator_lstringlist enumerator_9884 (temp_4.readProperty_mAttributeList ()) ;
  while (enumerator_9884.hasCurrentObject ()) {
    var_attributeSet_9841.plusPlusAssignOperation (enumerator_9884.current (HERE).readProperty_mValue ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)) ;
    enumerator_9884.gotoNextObject () ;
  }
  GGS_routineKind var_routineKind_9977 ;
  const GGS_systemRoutineDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mMode ().enumValue ()) {
  case GGS_mode::Enumeration::invalid:
    break ;
  case GGS_mode::Enumeration::enum_sectionMode:
  case GGS_mode::Enumeration::enum_safeSectionMode:
    {
      var_routineKind_9977 = GGS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas", 296)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_serviceMode:
  case GGS_mode::Enumeration::enum_safeServiceMode:
    {
      var_routineKind_9977 = GGS_routineKind::class_func_service (SOURCE_FILE ("declaration-svc.galgas", 298)) ;
    }
    break ;
  case GGS_mode::Enumeration::enum_primitiveMode:
  case GGS_mode::Enumeration::enum_safePrimitiveMode:
    {
      var_routineKind_9977 = GGS_routineKind::class_func_primitive (SOURCE_FILE ("declaration-svc.galgas", 300)) ;
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
      var_routineKind_9977.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_systemRoutineDeclarationAST temp_8 = this ;
  const GGS_systemRoutineDeclarationAST temp_9 = this ;
  GGS_lstring var_userRoutineMangledName_10430 = function_systemUserMangledNameFromAST (var_receiverLLVMBaseTypeName_9700, var_routineKind_9977, temp_8.readProperty_mSystemRoutineName (), temp_9.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
  const GGS_systemRoutineDeclarationAST temp_10 = this ;
  const GGS_systemRoutineDeclarationAST temp_11 = this ;
  GGS_lstring var_implementationRoutineMangledName_10602 = function_systemImplementationMangledNameFromAST (var_receiverLLVMBaseTypeName_9700, var_routineKind_9977, temp_10.readProperty_mSystemRoutineName (), temp_11.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  GGS_routineTypedSignature var_signature_10880 ;
  {
  const GGS_systemRoutineDeclarationAST temp_12 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_12.readProperty_mFormalArgumentList (), var_signature_10880, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_10978 ;
  {
  const GGS_systemRoutineDeclarationAST temp_13 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_13.readProperty_mReturnTypeName (), var_returnTypeProxy_10978, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 320)) ;
  }
  GGS_bool var_mutatingRoutine_11017 = GGS_bool (false) ;
  GGS_bool var_noUnusedWarning_11047 = GGS_bool (false) ;
  const GGS_systemRoutineDeclarationAST temp_14 = this ;
  UpEnumerator_lstringlist enumerator_11078 (temp_14.readProperty_mAttributeList ()) ;
  while (enumerator_11078.hasCurrentObject ()) {
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::equal, enumerator_11078.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 325)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = var_noUnusedWarning_11047.boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GenericArray <FixItDescription> fixItArray17 ;
            fixItArray17.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_11078.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), fixItArray17  COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)) ;
          }
        }
        var_noUnusedWarning_11047 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_15) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::equal, enumerator_11078.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 330)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GalgasBool test_19 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_19) {
            test_19 = var_mutatingRoutine_11017.boolEnum () ;
            if (GalgasBool::boolTrue == test_19) {
              GenericArray <FixItDescription> fixItArray20 ;
              fixItArray20.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11078.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), fixItArray20  COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)) ;
            }
          }
          var_mutatingRoutine_11017 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GenericArray <FixItDescription> fixItArray21 ;
        fixItArray21.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_11078.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (GGS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), fixItArray21  COMMA_SOURCE_FILE ("declaration-svc.galgas", 336)) ;
      }
    }
    enumerator_11078.gotoNextObject () ;
  }
  GGS_routineAttributes var_attributes_11787 = GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-svc.galgas", 341)) ;
  const GGS_systemRoutineDeclarationAST temp_22 = this ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_11870 = extensionGetter_routineLLVMDictionaryForSystemRoutine (temp_22.readProperty_mMode (), var_userRoutineMangledName_10430.readProperty_string (), var_implementationRoutineMangledName_10602.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 343)) ;
  const GGS_systemRoutineDeclarationAST temp_23 = this ;
  const GGS_systemRoutineDeclarationAST temp_24 = this ;
  GGS_lstring var_routineMangledName_12018 = extensionGetter_mangledName (var_signature_10880, temp_23.readProperty_mReceiverTypeName ().readProperty_string (), temp_24.readProperty_mSystemRoutineName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 347)) ;
  {
  const GGS_systemRoutineDeclarationAST temp_25 = this ;
  const GGS_systemRoutineDeclarationAST temp_26 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_12018, temp_25.readProperty_mPublic (), var_signature_10880, var_returnTypeProxy_10978, var_routineLLVMNameDict_11870, GGS_bool (true), temp_26.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
  }
  const GGS_systemRoutineDeclarationAST temp_27 = this ;
  const GGS_systemRoutineDeclarationAST temp_28 = this ;
  const GGS_systemRoutineDeclarationAST temp_29 = this ;
  const GGS_systemRoutineDeclarationAST temp_30 = this ;
  const GGS_systemRoutineDeclarationAST temp_31 = this ;
  const GGS_systemRoutineDeclarationAST temp_32 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (temp_27.readProperty_mReceiverTypeName (), temp_28.readProperty_mMode (), GGS_bool (false), var_routineKind_9977, var_noUnusedWarning_11047.operator_not (SOURCE_FILE ("declaration-svc.galgas", 363)), GGS_bool (true), var_attributes_11787, var_implementationRoutineMangledName_10602, temp_29.readProperty_mFormalArgumentList (), var_noUnusedWarning_11047, temp_30.readProperty_mInstructionList (), temp_31.readProperty_mEndOfInstructionListLocation (), temp_32.readProperty_mReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 358)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_systemUserRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (var_userRoutineMangledName_10430, GGS_bool (false), GGS_bool (false), var_implementationRoutineMangledName_10602.readProperty_string (), var_signature_10880, var_selfTypeProxy_9654, GGS_bool (ComparisonKind::equal, var_routineKind_9977.objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("declaration-svc.galgas", 380)))), var_returnTypeProxy_10978, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)) ;
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
  GGS_bool var_first_14404 = GGS_bool (true) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("declaration-svc.galgas", 414)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)).add_operation (GGS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
      var_first_14404 = GGS_bool (false) ;
    }
  }
  UpEnumerator_routineFormalArgumentListIR enumerator_14588 (constinArgument_inFormalArgumentListForGeneration) ;
  while (enumerator_14588.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_first_14404.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_first_14404 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)) ;
    }
    switch (enumerator_14588.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14588.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (enumerator_14588.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14588.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (function_llvmNameForLocalVariable (enumerator_14588.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        result_result.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14588.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (function_llvmNameForLocalVariable (enumerator_14588.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)) ;
      }
      break ;
    }
    enumerator_14588.gotoNextObject () ;
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
  UpEnumerator_sectionIRlist enumerator_15513 (constinArgument_inSectionIRlist) ;
  GGS_uint index_15498 (uint32_t (0)) ;
  while (enumerator_15513.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_15513.current (HERE).readProperty_invocationFromAnyMode ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_15590 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromAnyMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)) ;
        var_s_15590 = var_s_15590.getter_stringByReplacingStringByString (GGS_string ("!USER_ROUTINE!"), enumerator_15513.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 451)) ;
        var_s_15590 = var_s_15590.getter_stringByReplacingStringByString (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15513.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 452)) ;
        var_s_15590 = var_s_15590.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_15498.getter_string (SOURCE_FILE ("declaration-svc.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 453)) ;
        ioArgument_ioAssemblerCode.plusAssignOperation(var_s_15590, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 454)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_s_16070 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromUserMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 456)) ;
      var_s_16070 = var_s_16070.getter_stringByReplacingStringByString (GGS_string ("!USER_ROUTINE!"), enumerator_15513.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)) ;
      var_s_16070 = var_s_16070.getter_stringByReplacingStringByString (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15513.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 461)) ;
      var_s_16070 = var_s_16070.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_15498.getter_string (SOURCE_FILE ("declaration-svc.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 462)) ;
      ioArgument_ioAssemblerCode.plusAssignOperation(var_s_16070, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 463)) ;
    }
    enumerator_15513.gotoNextObject () ;
    index_15498.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)) ;
  UpEnumerator_sectionIRlist enumerator_16736 (constinArgument_inSectionIRlist) ;
  GGS_uint index_16703 (uint32_t (0)) ;
  while (enumerator_16736.hasCurrentObject ()) {
    GGS_string var_s_16775 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
    var_s_16775 = var_s_16775.getter_stringByReplacingStringByString (GGS_string ("!USER_ROUTINE!"), enumerator_16736.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
    var_s_16775 = var_s_16775.getter_stringByReplacingStringByString (GGS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_16736.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 476)) ;
    var_s_16775 = var_s_16775.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_16703.getter_string (SOURCE_FILE ("declaration-svc.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 477)) ;
    ioArgument_ioAssemblerCode.plusAssignOperation(var_s_16775, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)) ;
    enumerator_16736.gotoNextObject () ;
    index_16703.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 470)) ;
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
  UpEnumerator_primitiveAndServiceIRlist enumerator_18067 (constinArgument_inServiceList) ;
  GGS_uint index_18052 (uint32_t (0)) ;
  while (enumerator_18067.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_18067.current (HERE).readProperty_mHasReturnValue ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_18136 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryWithReturnValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 506)) ;
        var_s_18136 = var_s_18136.getter_stringByReplacingStringByString (GGS_string ("!ENTRY!"), enumerator_18067.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 510)) ;
        var_s_18136 = var_s_18136.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_18052.getter_string (SOURCE_FILE ("declaration-svc.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 511)) ;
        ioArgument_ioAssemblerCode.plusAssignOperation(var_s_18136, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 512)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_s_18481 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryNoReturnedValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 514)) ;
      var_s_18481 = var_s_18481.getter_stringByReplacingStringByString (GGS_string ("!ENTRY!"), enumerator_18067.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)) ;
      var_s_18481 = var_s_18481.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_18052.getter_string (SOURCE_FILE ("declaration-svc.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 519)) ;
      ioArgument_ioAssemblerCode.plusAssignOperation(var_s_18481, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 520)) ;
    }
    enumerator_18067.gotoNextObject () ;
    index_18052.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 504)) ;
  }
  ioArgument_ioAssemblerCode.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)) ;
  UpEnumerator_primitiveAndServiceIRlist enumerator_18993 (constinArgument_inServiceList) ;
  GGS_uint index_18978 (uint32_t (0)) ;
  while (enumerator_18993.hasCurrentObject ()) {
    GGS_string var_s_19024 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 528)) ;
    var_s_19024 = var_s_19024.getter_stringByReplacingStringByString (GGS_string ("!ENTRY!"), enumerator_18993.current (HERE).readProperty_mImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 532)) ;
    var_s_19024 = var_s_19024.getter_stringByReplacingStringByString (GGS_string ("!IDX!"), index_18978.getter_string (SOURCE_FILE ("declaration-svc.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 533)) ;
    ioArgument_ioAssemblerCode.plusAssignOperation(var_s_19024, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 534)) ;
    enumerator_18993.gotoNextObject () ;
    index_18978.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 527)) ;
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
  GGS_string var_userMangledName_20581 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 567)) ;
  const GGS_systemUserRoutineIR temp_1 = this ;
  GGS_string var_implementationMangledName_20656 = temp_1.readProperty_mMangledImplementationName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 568)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_systemUserRoutineIR temp_3 = this ;
    test_2 = temp_3.readProperty_mIsSection ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioSectionList.addAssignOperation (var_userMangledName_20581, var_implementationMangledName_20656, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 570)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioPrimitiveAndServiceList.addAssignOperation (var_userMangledName_20581, var_implementationMangledName_20656, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)) ;
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
  GGS_bool var_first_21519 = GGS_bool (true) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_systemUserRoutineIR temp_5 = this ;
    test_4 = temp_5.readProperty_mReceiverTypeProxy ().getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 591)).operator_not (SOURCE_FILE ("declaration-svc.galgas", 591)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_systemUserRoutineIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_6.readProperty_mReceiverTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).add_operation (GGS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)) ;
      var_first_21519 = GGS_bool (false) ;
    }
  }
  const GGS_systemUserRoutineIR temp_7 = this ;
  UpEnumerator_routineTypedSignature enumerator_21730 (temp_7.readProperty_mFormalArgumentList ()) ;
  while (enumerator_21730.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_first_21519.boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        var_first_21519 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 599)) ;
    }
    switch (enumerator_21730.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_21730.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_21730.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_21730.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)) ;
      }
      break ;
    }
    enumerator_21730.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)) ;
}

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
  UpEnumerator_requiredFunctionDeclarationListAST enumerator_2198 (constinArgument_inAST.readProperty_mRequiredFunctionListAST ()) ;
  while (enumerator_2198.hasCurrentObject ()) {
    GGS_lstring var_requiredFunctionSignature_2234 = extensionGetter_routineSignature (enumerator_2198.current (HERE).readProperty_mFormalArgumentList (), enumerator_2198.current (HERE).readProperty_mName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    GGS_string var_requiredFunctionMangledName_2350 = enumerator_2198.current (HERE).readProperty_mName ().readProperty_string ().add_operation (var_requiredFunctionSignature_2234.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inContext.readProperty_mRoutineMap ().getter_hasKey (var_requiredFunctionMangledName_2350 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 63)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2198.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool var_implementedPublic_2694 ;
      GGS_routineTypedSignature var_implementedSignature_2725 ;
      GGS_unifiedTypeMapEntry var_implementedReturnTypeProxy_2759 ;
      GGS_routineLLVMNameDict var_implementedModeDictionary_2834 ;
      GGS_bool var_implementedIsExported_2873 ;
      GGS_mode var_implementedMode_2908 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_2350.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 67)), var_implementedPublic_2694, var_implementedSignature_2725, var_implementedReturnTypeProxy_2759, var_implementedModeDictionary_2834, var_implementedIsExported_2873, var_implementedMode_2908, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      GGS_location var_errorLocation_2942 = constinArgument_inContext.readProperty_mRoutineMap ().getter_locationForKey (var_requiredFunctionMangledName_2350, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GGS_routineTypedSignature var_requiredTypedSignature_3145 ;
      {
      routine_routineTypedSignature_32__3F__3F__21_ (constinArgument_inContext.readProperty_mTypeMap (), enumerator_2198.current (HERE).readProperty_mFormalArgumentList (), var_requiredTypedSignature_3145, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typedString (var_requiredTypedSignature_3145, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2725, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3145, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)).add_operation (GGS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_implementedReturnTypeProxy_2759.getter_isNull (SOURCE_FILE ("declaration-required-proc.galgas", 83)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 83)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
        }
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_implementedMode_2908.objectCompare (enumerator_2198.current (HERE).readProperty_mExecutionMode ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2198.current (HERE).readProperty_mExecutionMode (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)) ;
        }
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_implementedPublic_2694.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 99)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 100)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_bool test_11 = enumerator_2198.current (HERE).readProperty_mIsExported () ;
        if (GalgasBool::boolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_2873.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 103)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItInsertAfter, GGS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106))) ;
          inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GGS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 104)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          GGS_bool test_14 = var_implementedIsExported_2873 ;
          if (GalgasBool::boolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2198.current (HERE).readProperty_mIsExported ().operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 107)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GenericArray <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_2942, GGS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)).add_operation (GGS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 108)) ;
          }
        }
      }
    }
    enumerator_2198.gotoNextObject () ;
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
  UpEnumerator_routineFormalArgumentListIR enumerator_6971 (temp_4.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_6971.hasCurrentObject ()) {
    switch (enumerator_6971.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6971.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (enumerator_6971.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6971.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (function_llvmNameForLocalVariable (enumerator_6971.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_6971.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (function_llvmNameForLocalVariable (enumerator_6971.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)) ;
      }
      break ;
    }
    enumerator_6971.gotoNextObject () ;
    if (enumerator_6971.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (GGS_string ("; declared by extern Omnibus function declaration\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@isrDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_isrDeclarationAST temp_0 = this ;
  GGS_lstring var_receiverTypeName_2047 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 53)) ;
  const GGS_isrDeclarationAST temp_1 = this ;
  GGS_string var_s_2125 = var_receiverTypeName_2047.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)) ;
  {
  const GGS_isrDeclarationAST temp_2 = this ;
  const GGS_isrDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_2125, temp_2.readProperty_mISRName ().readProperty_location (), inCompiler COMMA_HERE), temp_3, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)) ;
  }
  const GGS_isrDeclarationAST temp_4 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_4.readProperty_mISRInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 57)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverTypeName_2047.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      ioArgument_ioGraph.setter_noteNode (var_receiverTypeName_2047 COMMA_SOURCE_FILE ("declaration-isr.galgas", 59)) ;
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
  GGS_lstring var_receiverTypeName_2616 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 66)) ;
  const GGS_isrDeclarationAST temp_1 = this ;
  result_result = GGS_string ("function ").add_operation (var_receiverTypeName_2616.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)) ;
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
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedISRDeclaration::init_21__21__21_ (temp_0.readProperty_mISRName (), temp_1.readProperty_mMode (), temp_2.readProperty_mDriverName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)) ;
  const GGS_isrDeclarationAST temp_3 = this ;
  GGS_lstring var_driverLLVMBaseTypeName_4096 = function_llvmDriverNameFromName (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 93)) ;
  const GGS_isrDeclarationAST temp_4 = this ;
  GGS_routineFormalArgumentListAST temp_5 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  GGS_lstring var_isrRoutineMangledName_4170 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_4096.readProperty_string (), temp_4.readProperty_mISRName (), temp_5, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  const GGS_isrDeclarationAST temp_6 = this ;
  const GGS_isrDeclarationAST temp_7 = this ;
  GGS_routineFormalArgumentListAST temp_8 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 104)) ;
  const GGS_isrDeclarationAST temp_9 = this ;
  const GGS_isrDeclarationAST temp_10 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (function_omnibusTypeSpecificNameForDriver (temp_6.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), temp_7.readProperty_mMode (), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-isr.galgas", 99)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-isr.galgas", 102)), var_isrRoutineMangledName_4170, temp_8, GGS_bool (true), temp_9.readProperty_mISRInstructionList (), temp_10.readProperty_mEndOfISRDeclaration (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 108))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 95)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedISRDeclaration semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedISRDeclaration::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_selfType_5732 ;
  const GGS_decoratedISRDeclaration temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)), var_selfType_5732, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)) ;
  const GGS_decoratedISRDeclaration temp_1 = this ;
  GGS_interruptionPanicCode joker_5824 ; // Joker input parameter
  constinArgument_inContext.readProperty_mAvailableInterruptMap ().method_searchKey (temp_1.readProperty_mISRName (), joker_5824, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 131)) ;
  {
  const GGS_decoratedISRDeclaration temp_2 = this ;
  const GGS_decoratedISRDeclaration temp_3 = this ;
  const GGS_decoratedISRDeclaration temp_4 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (temp_2.readProperty_mISRName (), var_selfType_5732, temp_3.readProperty_mDriverName ().readProperty_string (), temp_4.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 132)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@guardDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3131 = GGS_string ("guard.") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_guardDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_guardDeclarationAST temp_2 = this ;
      var_s_3131.plusAssignOperation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)) ;
    }
  }
  const GGS_guardDeclarationAST temp_3 = this ;
  var_s_3131.plusAssignOperation(temp_3.readProperty_mGuardName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)) ;
  const GGS_guardDeclarationAST temp_4 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_3321 (temp_4.readProperty_mGuardFormalArgumentList ()) ;
  while (enumerator_3321.hasCurrentObject ()) {
    var_s_3131.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_3321.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (enumerator_3321.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)) ;
    enumerator_3321.gotoNextObject () ;
  }
  var_s_3131.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 93)) ;
  {
  const GGS_guardDeclarationAST temp_5 = this ;
  const GGS_guardDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_3131, temp_5.readProperty_mGuardName ().readProperty_location (), inCompiler COMMA_HERE), temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)) ;
  }
  const GGS_guardDeclarationAST temp_7 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_3556 (temp_7.readProperty_mGuardFormalArgumentList ()) ;
  while (enumerator_3556.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_3556.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 97)) ;
    }
    enumerator_3556.gotoNextObject () ;
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
  GGS_routineTypedSignature var_signature_5308 ;
  {
  const GGS_guardDeclarationAST temp_0 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mGuardFormalArgumentList (), var_signature_5308, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 132)) ;
  }
  const GGS_guardDeclarationAST temp_1 = this ;
  const GGS_guardDeclarationAST temp_2 = this ;
  GGS_lstring var_guardMangledName_5349 = extensionGetter_mangledName (var_signature_5308, temp_1.readProperty_mReceiverTypeName ().readProperty_string (), temp_2.readProperty_mGuardName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 134)) ;
  const GGS_guardDeclarationAST temp_3 = this ;
  const GGS_guardDeclarationAST temp_4 = this ;
  const GGS_guardDeclarationAST temp_5 = this ;
  GGS_lstring var_guardUserLLVMName_5505 = function_guardUserLLVMName (temp_3.readProperty_mReceiverLLVMBaseTypeName (), temp_4.readProperty_mGuardName (), temp_5.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 136)) ;
  const GGS_guardDeclarationAST temp_6 = this ;
  const GGS_guardDeclarationAST temp_7 = this ;
  const GGS_guardDeclarationAST temp_8 = this ;
  GGS_lstring var_guardImplementationLLVMName_5691 = function_guardImplementationLLVMName (temp_6.readProperty_mReceiverLLVMBaseTypeName (), temp_7.readProperty_mGuardName (), temp_8.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 142)) ;
  {
  const GGS_guardDeclarationAST temp_9 = this ;
  ioArgument_ioContext.mProperty_mGuardMap.setter_insertKey (var_guardMangledName_5349, temp_9.readProperty_mIsPublic (), var_signature_5308, var_guardUserLLVMName_5505, var_guardImplementationLLVMName_5691, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 147)) ;
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
  GGS_string var_s_6845 = GGS_string ("guard.user.") ;
  var_s_6845.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
  var_s_6845.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 176)) ;
  var_s_6845.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 177)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_6984 (constinArgument_inFormalArgumentList) ;
  while (enumerator_6984.hasCurrentObject ()) {
    var_s_6845.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_6984.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (enumerator_6984.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)) ;
    enumerator_6984.gotoNextObject () ;
  }
  var_s_6845.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_6845, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  GGS_string var_s_7538 = GGS_string ("guard.implementation.") ;
  var_s_7538.plusAssignOperation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  var_s_7538.plusAssignOperation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 193)) ;
  var_s_7538.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 194)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_7687 (constinArgument_inFormalArgumentList) ;
  while (enumerator_7687.hasCurrentObject ()) {
    var_s_7538.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_7687.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (enumerator_7687.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
    enumerator_7687.gotoNextObject () ;
  }
  var_s_7538.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_7538, constinArgument_inGuardName.readProperty_location (), inCompiler COMMA_HERE) ;
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
  GGS_omnibusType var_receiverType_9610 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mReceiverTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)) ;
  GGS_bool var_warnIfUnused_9707 = GGS_bool (true) ;
  const GGS_decoratedGuardDeclaration temp_1 = this ;
  UpEnumerator_lstringlist enumerator_9734 (temp_1.readProperty_mGuardAttributeList ()) ;
  while (enumerator_9734.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_9734.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 242)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_warnIfUnused_9707.operator_not (SOURCE_FILE ("declaration-guard.galgas", 243)).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9734.current_mValue (HERE).readProperty_location (), GGS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)) ;
          }
        }
        var_warnIfUnused_9707 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_9734.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)) ;
    }
    enumerator_9734.gotoNextObject () ;
  }
  GGS_universalValuedObjectMap var_universalMap_10140 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_10140, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 253)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_10140, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 254)) ;
  }
  GGS_routineFormalArgumentListIR temp_6 = GGS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 255)) ;
  GGS_routineFormalArgumentListIR var_formalArguments_10293 = temp_6 ;
  GGS_guardKindGenerationIR var_convenienceGuardGenerationIR_10344 ;
  GGS_allocaList temp_7 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 257)) ;
  GGS_allocaList var_allocaList_10391 = temp_7 ;
  GGS_instructionListIR temp_8 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 258)) ;
  GGS_instructionListIR var_instructionGenerationList_10433 = temp_8 ;
  const GGS_decoratedGuardDeclaration temp_9 = this ;
  switch (temp_9.readProperty_mGuardKind ().enumValue ()) {
  case GGS_guardKind::Enumeration::invalid:
    break ;
  case GGS_guardKind::Enumeration::enum_baseGuard:
    {
      const GGS_decoratedGuardDeclaration temp_10 = this ;
      GGS_lstring var_resultVarName_10553 = GGS_lstring::init_21__21_ (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)), temp_10.readProperty_mGuardName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_resultType_10755 = extensionGetter_booleanType (constinArgument_inContext, var_resultVarName_10553.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 264)) ;
      var_allocaList_10391.addAssignOperation (function_llvmNameForLocalVariable (var_resultVarName_10553.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)), var_resultType_10755, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_10140, var_resultVarName_10553, var_resultType_10755, var_resultVarName_10553, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("declaration-guard.galgas", 278)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 274)) ;
      }
      {
      const GGS_decoratedGuardDeclaration temp_11 = this ;
      routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_11.readProperty_mGuardFormalArgumentList (), var_universalMap_10140, var_formalArguments_10293, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 282)) ;
      }
      var_convenienceGuardGenerationIR_10344 = GGS_guardKindGenerationIR::class_func_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 289)) ;
      const GGS_decoratedGuardDeclaration temp_12 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_12.readProperty_mGuardInstructionList (), var_receiverType_9610, GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 293)), constinArgument_inContext, GGS_mode::class_func_guardMode (SOURCE_FILE ("declaration-guard.galgas", 295)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10140, var_allocaList_10391, var_instructionGenerationList_10433, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 291)) ;
    }
    break ;
  case GGS_guardKind::Enumeration::enum_convenienceGuard:
    {
      GGS_callInstructionAST extractedValue_12189_baseGuardInstruction_0 ;
      temp_9.readProperty_mGuardKind ().getAssociatedValuesFor_convenienceGuard (extractedValue_12189_baseGuardInstruction_0) ;
      {
      const GGS_decoratedGuardDeclaration temp_13 = this ;
      routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_13.readProperty_mGuardFormalArgumentList (), var_universalMap_10140, var_formalArguments_10293, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 304)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((cPtr_callInstructionAST *) extractedValue_12189_baseGuardInstruction_0.ptr (), var_receiverType_9610, GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 314)), constinArgument_inContext, GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 316)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10140, var_convenienceGuardGenerationIR_10344, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 312)) ;
      const GGS_decoratedGuardDeclaration temp_14 = this ;
      extensionMethod_analyzeRoutineInstructionList (temp_14.readProperty_mGuardInstructionList (), var_receiverType_9610, GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-guard.galgas", 325)), constinArgument_inContext, GGS_mode::class_func_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 327)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10140, var_allocaList_10391, var_instructionGenerationList_10433, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 323)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_10140, var_instructionGenerationList_10433, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 336)) ;
  {
  const GGS_decoratedGuardDeclaration temp_15 = this ;
  extensionSetter_closeBranch (var_universalMap_10140, temp_15.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 337)) ;
  }
  {
  const GGS_decoratedGuardDeclaration temp_16 = this ;
  extensionSetter_closeOverride (var_universalMap_10140, temp_16.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 338)) ;
  }
  const GGS_decoratedGuardDeclaration temp_17 = this ;
  const GGS_decoratedGuardDeclaration temp_18 = this ;
  GGS_lstring var_guardUserLLVMName_13583 = function_guardUserLLVMName (var_receiverType_9610.readProperty_llvmBaseTypeName (), temp_17.readProperty_mGuardName (), temp_18.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 340)) ;
  const GGS_decoratedGuardDeclaration temp_19 = this ;
  const GGS_decoratedGuardDeclaration temp_20 = this ;
  GGS_lstring var_guardImplementationLLVMName_13724 = function_guardImplementationLLVMName (var_receiverType_9610.readProperty_llvmBaseTypeName (), temp_19.readProperty_mGuardName (), temp_20.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 345)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_guardUserRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (var_guardUserLLVMName_13583, GGS_bool (false), var_warnIfUnused_9707, var_guardImplementationLLVMName_13724.readProperty_string (), var_formalArguments_10293, var_receiverType_9610, var_convenienceGuardGenerationIR_10344, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 351)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_guardImplementationRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (var_guardImplementationLLVMName_13724, GGS_bool (false), var_warnIfUnused_9707, var_formalArguments_10293, var_receiverType_9610, var_convenienceGuardGenerationIR_10344, var_allocaList_10391, var_instructionGenerationList_10433, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 360)) ;
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
  GGS_allocaList var_baseGuardAllocaList_16523 = temp_0 ;
  GGS_instructionListIR temp_1 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 414)) ;
  GGS_instructionListIR var_baseGuardInstructionGenerationList_16574 = temp_1 ;
  GGS_objectIR var_currentObject_16731 ;
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
          var_currentObject_16731.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        var_currentObject_16731 = GGS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 421))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 421)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_procedureCallInstructionAST temp_7 = this ;
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, temp_7.readProperty_mIdentifier (), constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObject_16731, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 424)) ;
  }
  const GGS_procedureCallInstructionAST temp_8 = this ;
  GGS_accessInAssignmentListAST var_accessList_17218 = temp_8.readProperty_mAccessList () ;
  GGS_accessInAssignmentAST var_lastAccess_17277 ;
  {
  var_accessList_17218.setter_popLast (var_lastAccess_17277, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
  }
  UpEnumerator_accessInAssignmentListAST enumerator_17322 (var_accessList_17218) ;
  while (enumerator_17322.hasCurrentObject ()) {
    GGS_omnibusType var_currentType_17355 = extensionGetter_type (var_currentObject_16731, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 436)) ;
    switch (enumerator_17322.current_mAccess (HERE).enumValue ()) {
    case GGS_accessInAssignmentAST::Enumeration::invalid:
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_17436_propertyName_0 ;
        enumerator_17322.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_17436_propertyName_0) ;
        GGS_propertyGetterMap var_propertyGetterMap_17569 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_17355, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 440)) ;
        GGS_propertyGetterKind var_propertyAccess_17770 ;
        GGS_propertyVisibility joker_17762 ; // Joker input parameter
        var_propertyGetterMap_17569.method_searchKey (extractedValue_17436_propertyName_0, joker_17762, var_propertyAccess_17770, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 442)) ;
        switch (var_propertyAccess_17770.enumValue ()) {
        case GGS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GGS_objectIR extractedValue_17843__0 ;
            var_propertyAccess_17770.getAssociatedValuesFor_constantProperty (extractedValue_17843__0) ;
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_17436_propertyName_0.readProperty_location (), GGS_string ("a constant property not available in this context"), fixItArray9  COMMA_SOURCE_FILE ("declaration-guard.galgas", 445)) ;
            var_currentObject_16731.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GGS_omnibusType extractedValue_17984_propertyType_0 ;
            GGS_uint extractedValue_18003_propertyIndex_1 ;
            var_propertyAccess_17770.getAssociatedValuesFor_storedProperty (extractedValue_17984_propertyType_0, extractedValue_18003_propertyIndex_1) ;
            GGS_string var_property_5F_llvmName_18065 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_18065, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 447)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_16574, var_currentType_17355, extensionGetter_llvmName (var_currentObject_16731, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 450)), var_property_5F_llvmName_18065, extractedValue_18003_propertyIndex_1, extractedValue_17436_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 448)) ;
            }
            var_currentObject_16731 = GGS_objectIR::class_func_reference (extractedValue_17984_propertyType_0, var_property_5F_llvmName_18065  COMMA_SOURCE_FILE ("declaration-guard.galgas", 455)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GGS_unifiedTypeMapEntry extractedValue_18427__0 ;
            GGS_routineLLVMNameDict extractedValue_18427__1 ;
            var_propertyAccess_17770.getAssociatedValuesFor_computedProperty (extractedValue_18427__0, extractedValue_18427__1) ;
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_17436_propertyName_0.readProperty_location (), GGS_string ("a computed property cannot be named in guard"), fixItArray10  COMMA_SOURCE_FILE ("declaration-guard.galgas", 457)) ;
            var_currentObject_16731.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_18556__0 ;
        GGS_location extractedValue_18568_endOfIndex_1 ;
        GGS_bool extractedValue_18579__2 ;
        enumerator_17322.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_18556__0, extractedValue_18568_endOfIndex_1, extractedValue_18579__2) ;
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (extractedValue_18568_endOfIndex_1, GGS_string ("not handled yet"), fixItArray11  COMMA_SOURCE_FILE ("declaration-guard.galgas", 460)) ;
        var_currentObject_16731.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_17322.gotoNextObject () ;
  }
  switch (var_lastAccess_17277.enumValue ()) {
  case GGS_accessInAssignmentAST::Enumeration::invalid:
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_18727_methodName_0 ;
      var_lastAccess_17277.getAssociatedValuesFor_property (extractedValue_18727_methodName_0) ;
      GGS_omnibusType var_currentType_18749 = extensionGetter_type (var_currentObject_16731, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 466)) ;
      const GGS_procedureCallInstructionAST temp_12 = this ;
      GGS_lstring var_guardMangledName_18792 = extensionGetter_mangledName (temp_12.readProperty_mArguments (), var_currentType_18749.readProperty_omnibusTypeDescriptionName (), extractedValue_18727_methodName_0, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 467)) ;
      GGS_routineTypedSignature var_formalSignature_18986 ;
      GGS_lstring var_guardRoutineImplentationLLVMName_19010 ;
      GGS_bool joker_18978 ; // Joker input parameter
      GGS_lstring joker_19002 ; // Joker input parameter
      constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_18792, joker_18978, var_formalSignature_18986, joker_19002, var_guardRoutineImplentationLLVMName_19010, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 468)) ;
      GGS_procCallEffectiveParameterListIR temp_13 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)) ;
      temp_13.plusPlusAssignOperation (GGS_procCallEffectiveParameterListIR_2E_element::init_21__21_ (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("declaration-guard.galgas", 471)), GGS_objectIR::class_func_reference (var_currentType_18749, extensionGetter_llvmName (var_currentObject_16731, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 471))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 471)) ;
      GGS_procCallEffectiveParameterListIR var_effectiveParameterListIR_19125 = temp_13 ;
      {
      const GGS_procedureCallInstructionAST temp_14 = this ;
      routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_18986, temp_14.readProperty_mArguments (), extractedValue_18727_methodName_0.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_16523, var_baseGuardInstructionGenerationList_16574, var_effectiveParameterListIR_19125, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 474)) ;
      }
      outArgument_outConvenienceGuardGenerationIR = GGS_guardKindGenerationIR::class_func_convenienceGuard (var_baseGuardAllocaList_16523, var_baseGuardInstructionGenerationList_16574, var_guardRoutineImplentationLLVMName_19010.readProperty_string (), var_effectiveParameterListIR_19125  COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)) ;
    }
    break ;
  case GGS_accessInAssignmentAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_20162__0 ;
      GGS_location extractedValue_20174_endOfIndex_1 ;
      GGS_bool extractedValue_20185__2 ;
      var_lastAccess_17277.getAssociatedValuesFor_arrayAccess (extractedValue_20162__0, extractedValue_20174_endOfIndex_1, extractedValue_20185__2) ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (extractedValue_20174_endOfIndex_1, GGS_string ("a property access is required here"), fixItArray15  COMMA_SOURCE_FILE ("declaration-guard.galgas", 497)) ;
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
  GGS_string var_userMangledName_22004 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 538)) ;
  const GGS_guardUserRoutineIR temp_1 = this ;
  GGS_string var_implementationMangledName_22079 = temp_1.readProperty_mMangledImplementationGuardName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 539)) ;
  const GGS_guardUserRoutineIR temp_2 = this ;
  switch (temp_2.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GGS_guardKindGenerationIR::Enumeration::invalid:
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_convenienceGuard:
    {
      GGS_allocaList extractedValue_22232__0 ;
      GGS_instructionListIR extractedValue_22234__1 ;
      GGS_string extractedValue_22236__2 ;
      GGS_procCallEffectiveParameterListIR extractedValue_22238__3 ;
      temp_2.readProperty_mGuardKindGenerationIR ().getAssociatedValuesFor_convenienceGuard (extractedValue_22232__0, extractedValue_22234__1, extractedValue_22236__2, extractedValue_22238__3) ;
      ioArgument_ioPrimitiveAndServiceList.addAssignOperation (var_userMangledName_22004, var_implementationMangledName_22079, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 542)) ;
    }
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_baseGuard:
    {
      ioArgument_ioSectionList.addAssignOperation (var_userMangledName_22004, var_implementationMangledName_22079, GGS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)) ;
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
  GGS_string var_prototype_22774 = function_llvmFunctionPrototype (GGS_string ("i1"), temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 560)), temp_1.readProperty_mReceiverType (), temp_2.readProperty_mFormalArgumentListForGeneration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 558)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare ").add_operation (var_prototype_22774, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 564)) ;
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
  GGS_string var_guardRoutineName_23742 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 584)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define i1 @").add_operation (var_guardRoutineName_23742, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 585)) ;
  const GGS_guardImplementationRoutineIR temp_1 = this ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("declaration-guard.galgas", 586)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_3) {
    const GGS_guardImplementationRoutineIR temp_4 = this ;
    temp_2 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)) ;
  }
  GGS_string var_receiverLLVMTypeName_23874 = temp_2 ;
  GGS_bool var_first_24002 = GGS_bool (true) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_23874.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssignOperation(var_receiverLLVMTypeName_23874.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 593)) ;
      var_first_24002 = GGS_bool (false) ;
    }
  }
  const GGS_guardImplementationRoutineIR temp_6 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_24190 (temp_6.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_24190.hasCurrentObject ()) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = var_first_24002.boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        var_first_24002 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)) ;
    }
    switch (enumerator_24190.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24190.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)).add_operation (enumerator_24190.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24190.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)).add_operation (function_llvmNameForLocalVariable (enumerator_24190.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24190.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)).add_operation (function_llvmNameForLocalVariable (enumerator_24190.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      }
      break ;
    }
    enumerator_24190.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
  const GGS_guardImplementationRoutineIR temp_8 = this ;
  GGS_allocaList var_allocaList_24840 = temp_8.readProperty_mAllocaList () ;
  const GGS_guardImplementationRoutineIR temp_9 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_24954 (temp_9.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_24954.hasCurrentObject ()) {
    switch (enumerator_24954.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_allocaList_24840.addAssignOperation (function_llvmNameForLocalVariable (enumerator_24954.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)), enumerator_24954.current_mFormalArgumentType (HERE), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_24954.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_24840, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 623)) ;
  const GGS_guardImplementationRoutineIR temp_10 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_25338 (temp_10.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_25338.hasCurrentObject ()) {
    switch (enumerator_25338.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        GGS_string var_llvmType_25461 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25338.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 628)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_25461, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (enumerator_25338.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (var_llvmType_25461, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (function_llvmNameForLocalVariable (enumerator_25338.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_25338.gotoNextObject () ;
  }
  GGS_string var_accepted_5F_llvmName_25756 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 635)) ;
  GGS_string var_accepted_5F_llvmName_5F_loaded_25839 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)).add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
  const GGS_guardImplementationRoutineIR temp_11 = this ;
  switch (temp_11.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GGS_guardKindGenerationIR::Enumeration::invalid:
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_baseGuard:
    {
      GGS_string var_accepted_5F_label_26038 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 640)).add_operation (GGS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 640)) ;
      GGS_string var_rejected_5F_label_26112 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)).add_operation (GGS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)) ;
      const GGS_guardImplementationRoutineIR temp_12 = this ;
      extensionMethod_instructionListLLVMCode (temp_12.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 642)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_25839, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (GGS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (var_accepted_5F_llvmName_25756, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_25839, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_accepted_5F_label_26038, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_rejected_5F_label_26112, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_accepted_5F_label_26038.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret i1 true\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 647)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_rejected_5F_label_26112.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 649)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 650)) ;
    }
    break ;
  case GGS_guardKindGenerationIR::Enumeration::enum_convenienceGuard:
    {
      GGS_allocaList extractedValue_26777_baseGuardAllocaList_0 ;
      GGS_instructionListIR extractedValue_26797_baseGuardInstructionGenerationList_1 ;
      GGS_string extractedValue_26832_baseGuardMangledName_2 ;
      GGS_procCallEffectiveParameterListIR extractedValue_26853_baseGuardEffectiveParameterList_3 ;
      temp_11.readProperty_mGuardKindGenerationIR ().getAssociatedValuesFor_convenienceGuard (extractedValue_26777_baseGuardAllocaList_0, extractedValue_26797_baseGuardInstructionGenerationList_1, extractedValue_26832_baseGuardMangledName_2, extractedValue_26853_baseGuardEffectiveParameterList_3) ;
      extensionMethod_generateAllocaList (extractedValue_26777_baseGuardAllocaList_0, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 652)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_26797_baseGuardInstructionGenerationList_1, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 653)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_26832_baseGuardMangledName_2.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 655)) ;
      UpEnumerator_procCallEffectiveParameterListIR enumerator_27232 (extractedValue_26853_baseGuardEffectiveParameterList_3) ;
      while (enumerator_27232.hasCurrentObject ()) {
        switch (enumerator_27232.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
          break ;
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
          {
            ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_27232.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)).add_operation (extensionGetter_llvmName (enumerator_27232.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 659)) ;
          }
          break ;
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
          {
            ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_27232.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)).add_operation (extensionGetter_llvmName (enumerator_27232.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 661)) ;
          }
          break ;
        case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_27232.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)).add_operation (extensionGetter_llvmName (enumerator_27232.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 663)) ;
          }
          break ;
        }
        enumerator_27232.gotoNextObject () ;
        if (enumerator_27232.hasCurrentObject ()) {
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
      GGS_allocaList extractedValue_28758__0 ;
      GGS_instructionListIR extractedValue_28760_baseGuardInstructionGenerationList_1 ;
      GGS_string extractedValue_28795_baseGuardImplementationMangledName_2 ;
      GGS_procCallEffectiveParameterListIR extractedValue_28830__3 ;
      temp_1.readProperty_mGuardKindGenerationIR ().getAssociatedValuesFor_convenienceGuard (extractedValue_28758__0, extractedValue_28760_baseGuardInstructionGenerationList_1, extractedValue_28795_baseGuardImplementationMangledName_2, extractedValue_28830__3) ;
      ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (extractedValue_28795_baseGuardImplementationMangledName_2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 691)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_28760_baseGuardInstructionGenerationList_1, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 692)) ;
    }
    break ;
  }
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
  GGS_routineTypedSignature temp_0 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 167)) ;
  outArgument_outSignature = temp_0 ;
  UpEnumerator_routineFormalArgumentListAST enumerator_6126 (constinArgument_inFormalArgumentList) ;
  while (enumerator_6126.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_typeProxy_6229 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6126.current_mFormalArgumentTypeName (HERE), var_typeProxy_6229, inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 169)) ;
    }
    outArgument_outSignature.addAssignOperation (enumerator_6126.current_mFormalArgumentPassingMode (HERE), enumerator_6126.current_mSelector (HERE), var_typeProxy_6229, enumerator_6126.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 170)) ;
    enumerator_6126.gotoNextObject () ;
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
  GGS_routineTypedSignature temp_0 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 180)) ;
  outArgument_outSignature = temp_0 ;
  UpEnumerator_routineFormalArgumentListAST enumerator_6751 (constinArgument_inFormalArgumentList) ;
  while (enumerator_6751.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_typeProxy_6806 = extensionGetter_searchKey (constinArgument_inTypeMap, enumerator_6751.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 182)) ;
    outArgument_outSignature.addAssignOperation (enumerator_6751.current_mFormalArgumentPassingMode (HERE), enumerator_6751.current_mSelector (HERE), var_typeProxy_6806, enumerator_6751.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 183)) ;
    enumerator_6751.gotoNextObject () ;
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
  UpEnumerator_routineFormalArgumentListAST enumerator_9267 (constinArgument_inFormalArgumentsAST) ;
  while (enumerator_9267.hasCurrentObject ()) {
    GGS_omnibusType var_typeProxy_9322 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), enumerator_9267.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)) ;
    ioArgument_ioFormalArguments.addAssignOperation (enumerator_9267.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9322, enumerator_9267.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("formal-arguments.galgas", 242)) ;
    switch (enumerator_9267.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_9267.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = constinArgument_inUnusedWarning.boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                {
                extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9267.current_mFormalArgumentName (HERE), GGS_bool (true), var_typeProxy_9322, enumerator_9267.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 247)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              {
              extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9267.current_mFormalArgumentName (HERE), GGS_bool (true), var_typeProxy_9322, enumerator_9267.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 249)) ;
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
          test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_9267.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = constinArgument_inUnusedWarning.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                {
                extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9267.current_mFormalArgumentName (HERE), var_typeProxy_9322, enumerator_9267.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas", 255)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 255)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              {
              extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9267.current_mFormalArgumentName (HERE), var_typeProxy_9322, enumerator_9267.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("formal-arguments.galgas", 257)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 257)) ;
              }
            }
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9267.current_mFormalArgumentName (HERE), var_typeProxy_9322, enumerator_9267.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("formal-arguments.galgas", 261)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 261)) ;
        }
      }
      break ;
    }
    enumerator_9267.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@regularRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                            GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_regularRoutineIR temp_0 = this ;
  UpEnumerator_instructionListIR enumerator_6074 (temp_0.readProperty_mInstructionGenerationList ()) ;
  while (enumerator_6074.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_6074.current (HERE).readProperty_mInstructionGeneration ().ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 154)) ;
    enumerator_6074.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@regularRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_regularRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mExportedFunction ().operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 169)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 170)) ;
    }
  }
  const GGS_regularRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)) ;
  const GGS_regularRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
  const GGS_regularRoutineIR temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 174)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_6) {
    const GGS_regularRoutineIR temp_7 = this ;
    temp_5 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_7.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 176)) ;
  }
  GGS_string var_receiverLLVMTypeName_6770 = temp_5 ;
  GGS_bool var_first_6896 = GGS_bool (true) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_6770.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssignOperation(var_receiverLLVMTypeName_6770.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)) ;
      var_first_6896 = GGS_bool (false) ;
    }
  }
  const GGS_regularRoutineIR temp_9 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_7084 (temp_9.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_7084.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_first_6896.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        var_first_6896 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 187)) ;
    }
    switch (enumerator_7084.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7084.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (enumerator_7084.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7084.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_7084.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7084.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (function_llvmNameForLocalVariable (enumerator_7084.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)) ;
      }
      break ;
    }
    enumerator_7084.gotoNextObject () ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    GGS_bool test_12 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 198)) ;
    if (GalgasBool::boolTrue == test_12.boolEnum ()) {
      const GGS_regularRoutineIR temp_13 = this ;
      test_12 = temp_13.readProperty_mAppendFileAndLineArgumentForPanicLocation () ;
    }
    test_11 = test_12.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = var_first_6896.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 199)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 200)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (GGS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)) ;
  const GGS_regularRoutineIR temp_15 = this ;
  GGS_allocaList var_allocaList_8001 = temp_15.readProperty_mAllocaList () ;
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_regularRoutineIR temp_17 = this ;
    test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mReturnType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 207)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_regularRoutineIR temp_18 = this ;
      var_allocaList_8001.addAssignOperation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), temp_18.readProperty_mReturnType (), GGS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)) ;
    }
  }
  const GGS_regularRoutineIR temp_19 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_8264 (temp_19.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_8264.hasCurrentObject ()) {
    switch (enumerator_8264.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_allocaList_8001.addAssignOperation (function_llvmNameForLocalVariable (enumerator_8264.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)), enumerator_8264.current_mFormalArgumentType (HERE), GGS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_8264.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_8001, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 218)) ;
  const GGS_regularRoutineIR temp_20 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_8738 (temp_20.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_8738.hasCurrentObject ()) {
    switch (enumerator_8738.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Input argument '").add_operation (enumerator_8738.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)) ;
        GGS_string var_llvmType_8941 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8738.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_8941, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (enumerator_8738.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (var_llvmType_8941, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8738.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)) ;
        callExtensionMethod_generateRetain ((cPtr_omnibusType *) enumerator_8738.current_mFormalArgumentType (HERE).ptr (), enumerator_8738.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)) ;
        GalgasBool test_21 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_21) {
          const GGS_regularRoutineIR temp_22 = this ;
          test_21 = GGS_bool (ComparisonKind::equal, temp_22.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 229)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8738.current_mFormalArgumentType (HERE).ptr (), enumerator_8738.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 230)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          const GGS_regularRoutineIR temp_24 = this ;
          test_23 = GGS_bool (ComparisonKind::equal, temp_24.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 233)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8738.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8738.current_mFormalArgumentType (HERE).ptr (), enumerator_8738.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      break ;
    }
    enumerator_8738.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 241)) ;
  const GGS_regularRoutineIR temp_25 = this ;
  extensionMethod_instructionListLLVMCode (temp_25.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 242)) ;
  const GGS_regularRoutineIR temp_26 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_10044 (temp_26.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_10044.hasCurrentObject ()) {
    switch (enumerator_10044.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Release input argument '").add_operation (enumerator_10044.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)) ;
        callExtensionMethod_generateRelease ((cPtr_omnibusType *) enumerator_10044.current_mFormalArgumentType (HERE).ptr (), enumerator_10044.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        GalgasBool test_27 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_27) {
          const GGS_regularRoutineIR temp_28 = this ;
          test_27 = GGS_bool (ComparisonKind::equal, temp_28.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 251)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_27) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Insulate input/output argument '").add_operation (enumerator_10044.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10044.current_mFormalArgumentType (HERE).ptr (), enumerator_10044.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        GalgasBool test_29 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_29) {
          const GGS_regularRoutineIR temp_30 = this ;
          test_29 = GGS_bool (ComparisonKind::equal, temp_30.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 256)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_29) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Insulate output argument '").add_operation (enumerator_10044.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10044.current_mFormalArgumentType (HERE).ptr (), enumerator_10044.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)) ;
          }
        }
      }
      break ;
    }
    enumerator_10044.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)) ;
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    const GGS_regularRoutineIR temp_32 = this ;
    test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mReturnType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 264)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 265)) ;
    }
  }
  if (GalgasBool::boolFalse == test_31) {
    GGS_string var_resultVarLLVMName_11015 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)) ;
    const GGS_regularRoutineIR temp_33 = this ;
    const GGS_regularRoutineIR temp_34 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %result = load ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_33.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_34.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (var_resultVarLLVMName_11015, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
    const GGS_regularRoutineIR temp_35 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_35.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 271)) ;
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
    test_0 = constinArgument_inCalledRoutineDictionary.getter_hasKey (constinArgument_inCallerRoutineMode COMMA_SOURCE_FILE ("logical-modes.galgas", 184)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      constinArgument_inCalledRoutineDictionary.method_searchKey (constinArgument_inCallerRoutineMode, result_result, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 185)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_m_8411 = GGS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GGS_string ("' routine cannot be invoked from '"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (extensionGetter_string (constinArgument_inCallerRoutineMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GGS_string ("' mode, but only from:"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)) ;
    UpEnumerator_routineLLVMNameDict enumerator_8540 (constinArgument_inCalledRoutineDictionary) ;
    while (enumerator_8540.hasCurrentObject ()) {
      var_m_8411.plusAssignOperation(GGS_string ("\n  - '").add_operation (extensionGetter_string (enumerator_8540.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)).add_operation (GGS_string ("' mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 189)) ;
      enumerator_8540.gotoNextObject () ;
    }
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_m_8411, fixItArray1  COMMA_SOURCE_FILE ("logical-modes.galgas", 191)) ;
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
                                                                                const cObjectArray & inEffectiveParameterArray,
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
  GGS_lstring var_nodeName_2463 = GGS_lstring::init_21__21_ (GGS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)), temp_4.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_panicAST temp_5 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2463, temp_5, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 63)) ;
  }
  const GGS_panicAST temp_6 = this ;
  GGS_lstring var_configNode_2650 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 64)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2463, var_configNode_2650 COMMA_SOURCE_FILE ("panic.galgas", 65)) ;
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
  GGS_routineFormalArgumentListAST var_arguments_6206 = temp_8 ;
  var_arguments_6206.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 138)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 139)), ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 140)), GGS_string ("LINE").getter_nowhere (SOURCE_FILE ("panic.galgas", 141))  COMMA_SOURCE_FILE ("panic.galgas", 137)) ;
  var_arguments_6206.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 143)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 144)), ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 145)), GGS_string ("CODE").getter_nowhere (SOURCE_FILE ("panic.galgas", 146))  COMMA_SOURCE_FILE ("panic.galgas", 142)) ;
  var_arguments_6206.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas", 148)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 149)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 150)).getter_nowhere (SOURCE_FILE ("panic.galgas", 150)), GGS_string ("FILE").getter_nowhere (SOURCE_FILE ("panic.galgas", 151))  COMMA_SOURCE_FILE ("panic.galgas", 147)) ;
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
  GGS_lstring var_routineMangledName_6582 = GGS_lstring::init_21__21_ (GGS_string ("panic.").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (temp_12.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)), temp_13.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_panicAST temp_14 = this ;
  const GGS_panicAST temp_15 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 157)), GGS_mode::class_func_panicMode (SOURCE_FILE ("panic.galgas", 158)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("panic.galgas", 160)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_routineMangledName_6582, var_arguments_6206, GGS_bool (false), temp_14.readProperty_mPanicInstructionList (), temp_15.readProperty_mEndOfPanicInstructions (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 169))  COMMA_SOURCE_FILE ("panic.galgas", 156)) ;
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
  UpEnumerator_stringset enumerator_8262 (constinArgument_inSourceFileAbsolutePathSet) ;
  while (enumerator_8262.hasCurrentObject ()) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_fileSpecificPanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (function_panicRoutineNameForFilePath (enumerator_8262.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 196)).getter_nowhere (SOURCE_FILE ("panic.galgas", 196)), GGS_bool (false), GGS_bool (false), enumerator_8262.current_key (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas", 195)) ;
    enumerator_8262.gotoNextObject () ;
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
  GGS_uint var_emptyStringIndex_10958 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, GGS_string::makeEmptyString (), var_emptyStringIndex_10958, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 260)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GGS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_10958, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 263)) ;
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
  GGS_string var_arguments_12338 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 288)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)) ;
  const GGS_fileSpecificPanicRoutineIR temp_0 = this ;
  GGS_string var_fileBaseName_12535 = temp_0.readProperty_inFilePath ().getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 292)).getter_deletingPathExtension (SOURCE_FILE ("panic.galgas", 292)) ;
  GGS_uint var_staticStringIndex_12701 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, var_fileBaseName_12535, var_staticStringIndex_12701, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 294)) ;
  }
  const GGS_fileSpecificPanicRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (temp_1.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 298)) ;
  const GGS_fileSpecificPanicRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("panic.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GGS_string (" %in.CODE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %in.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_staticStringIndex_12701, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (var_arguments_12338, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 303)) ;
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
  GGS_string var_arguments_14326 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 331)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_arguments_14326, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 338)) ;
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
  GGS_string var_arguments_16400 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 382)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_arguments_16400.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 388)) ;
  const GGS_sectionModePanicRoutineIR temp_0 = this ;
  UpEnumerator_panicSortedListIR enumerator_16766 (temp_0.readProperty_mPanicSetupListIR ()) ;
  while (enumerator_16766.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @panic.setup.").add_operation (enumerator_16766.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (var_arguments_16400, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 391)) ;
    enumerator_16766.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %panic.loop\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 394)) ;
  const GGS_sectionModePanicRoutineIR temp_1 = this ;
  UpEnumerator_panicSortedListIR enumerator_16971 (temp_1.readProperty_mPanicLoopListIR ()) ;
  while (enumerator_16971.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @panic.loop.").add_operation (enumerator_16971.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (var_arguments_16400, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 396)) ;
    enumerator_16971.gotoNextObject () ;
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
  UpEnumerator_panicSortedListIR enumerator_17440 (temp_0.readProperty_mPanicSetupListIR ()) ;
  while (enumerator_17440.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (GGS_string ("panic.setup.").add_operation (enumerator_17440.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 409))  COMMA_SOURCE_FILE ("panic.galgas", 409)) ;
    enumerator_17440.gotoNextObject () ;
  }
  const GGS_sectionModePanicRoutineIR temp_1 = this ;
  UpEnumerator_panicSortedListIR enumerator_17546 (temp_1.readProperty_mPanicLoopListIR ()) ;
  while (enumerator_17546.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (GGS_string ("panic.loop.").add_operation (enumerator_17546.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 412))  COMMA_SOURCE_FILE ("panic.galgas", 412)) ;
    enumerator_17546.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicRoutineName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_panicRoutineName (Compiler *
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("handle.panic") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicRoutineName = false ;
static GGS_string gOnceFunctionResult_panicRoutineName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_panicRoutineName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicRoutineName) {
    gOnceFunctionResult_panicRoutineName = onceFunction_panicRoutineName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicRoutineName = true ;
  }
  return gOnceFunctionResult_panicRoutineName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicRoutineName (void) {
  gOnceFunctionResult_panicRoutineName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicRoutineName (nullptr,
                                                            releaseOnceFunctionResult_panicRoutineName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicRoutineName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicRoutineName (Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicRoutineName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineName ("panicRoutineName",
                                                                  functionWithGenericHeader_panicRoutineName,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  0,
                                                                  functionArgs_panicRoutineName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForAssertViolation'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForAssertViolation (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForAssertViolation = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForAssertViolation ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForAssertViolation (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForAssertViolation) {
    gOnceFunctionResult_panicCodeForAssertViolation = onceFunction_panicCodeForAssertViolation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForAssertViolation = true ;
  }
  return gOnceFunctionResult_panicCodeForAssertViolation ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForAssertViolation (void) {
  gOnceFunctionResult_panicCodeForAssertViolation.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForAssertViolation (nullptr,
                                                                       releaseOnceFunctionResult_panicCodeForAssertViolation) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForAssertViolation [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForAssertViolation (Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForAssertViolation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForAssertViolation ("panicCodeForAssertViolation",
                                                                             functionWithGenericHeader_panicCodeForAssertViolation,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForAssertViolation) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedAdditionOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GGS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedAdditionOverflow (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedAdditionOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForSignedAdditionOverflow = onceFunction_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedAdditionOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedAdditionOverflow (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedAdditionOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedAdditionOverflow (Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedAdditionOverflow ("panicCodeForSignedAdditionOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedAdditionOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedSubtractOverflow (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedSubtractOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow = onceFunction_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedSubtractOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedSubtractOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow (Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GGS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedSubtractOverflow ("panicCodeForUnsignedSubtractOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedSubtractOverflow (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedSubtractOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForSignedSubtractOverflow = onceFunction_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedSubtractOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedSubtractOverflow (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedSubtractOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedSubtractOverflow (Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedSubtractOverflow ("panicCodeForSignedSubtractOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedSubtractOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedMultiplicationOverflow (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow = onceFunction_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedMultiplicationOverflow (nullptr,
                                                                                      releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedMultiplicationOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow (Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GGS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedMultiplicationOverflow ("panicCodeForUnsignedMultiplicationOverflow",
                                                                                            functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow,
                                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                                            0,
                                                                                            functionArgs_panicCodeForUnsignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedMultiplicationOverflow (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedMultiplicationOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow = onceFunction_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedMultiplicationOverflow (nullptr,
                                                                                    releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedMultiplicationOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow (Compiler * inCompiler,
                                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                                      const GGS_location & /* inErrorLocation */
                                                                                      COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedMultiplicationOverflow ("panicCodeForSignedMultiplicationOverflow",
                                                                                          functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow,
                                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                                          0,
                                                                                          functionArgs_panicCodeForSignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedDivisionByZero (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedDivisionByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForUnsignedDivisionByZero = onceFunction_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedDivisionByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedDivisionByZero (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedDivisionByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedDivisionByZero (Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedDivisionByZero ("panicCodeForUnsignedDivisionByZero",
                                                                                    functionWithGenericHeader_panicCodeForUnsignedDivisionByZero,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForUnsignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedDivisionByZero (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 23)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedDivisionByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedDivisionByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForSignedDivisionByZero = onceFunction_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedDivisionByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForSignedDivisionByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedDivisionByZero (nullptr,
                                                                            releaseOnceFunctionResult_panicCodeForSignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedDivisionByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedDivisionByZero (Compiler * inCompiler,
                                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedDivisionByZero ("panicCodeForSignedDivisionByZero",
                                                                                  functionWithGenericHeader_panicCodeForSignedDivisionByZero,
                                                                                  & kTypeDescriptor_GALGAS_bigint,
                                                                                  0,
                                                                                  functionArgs_panicCodeForSignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedRemainderByZero (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 25)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedRemainderByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForUnsignedRemainderByZero = onceFunction_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedRemainderByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedRemainderByZero (nullptr,
                                                                               releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedRemainderByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedRemainderByZero (Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedRemainderByZero ("panicCodeForUnsignedRemainderByZero",
                                                                                     functionWithGenericHeader_panicCodeForUnsignedRemainderByZero,
                                                                                     & kTypeDescriptor_GALGAS_bigint,
                                                                                     0,
                                                                                     functionArgs_panicCodeForUnsignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedRemainderByZero (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 27)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedRemainderByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedRemainderByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForSignedRemainderByZero = onceFunction_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedRemainderByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForSignedRemainderByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedRemainderByZero (nullptr,
                                                                             releaseOnceFunctionResult_panicCodeForSignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedRemainderByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedRemainderByZero (Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedRemainderByZero ("panicCodeForSignedRemainderByZero",
                                                                                   functionWithGenericHeader_panicCodeForSignedRemainderByZero,
                                                                                   & kTypeDescriptor_GALGAS_bigint,
                                                                                   0,
                                                                                   functionArgs_panicCodeForSignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForConvertOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForConvertOverflow (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 31)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForConvertOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForConvertOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForConvertOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForConvertOverflow) {
    gOnceFunctionResult_panicCodeForConvertOverflow = onceFunction_panicCodeForConvertOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForConvertOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForConvertOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForConvertOverflow (void) {
  gOnceFunctionResult_panicCodeForConvertOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForConvertOverflow (nullptr,
                                                                       releaseOnceFunctionResult_panicCodeForConvertOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForConvertOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForConvertOverflow (Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForConvertOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForConvertOverflow ("panicCodeForConvertOverflow",
                                                                             functionWithGenericHeader_panicCodeForConvertOverflow,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForConvertOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForNegativeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForNegativeArrayIndex (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 35)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForNegativeArrayIndex ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForNegativeArrayIndex (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex) {
    gOnceFunctionResult_panicCodeForNegativeArrayIndex = onceFunction_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForNegativeArrayIndex ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForNegativeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForNegativeArrayIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForNegativeArrayIndex (nullptr,
                                                                          releaseOnceFunctionResult_panicCodeForNegativeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForNegativeArrayIndex [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForNegativeArrayIndex (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForNegativeArrayIndex ("panicCodeForNegativeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForNegativeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForNegativeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForTooLargeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForTooLargeArrayIndex (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForTooLargeArrayIndex (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex) {
    gOnceFunctionResult_panicCodeForTooLargeArrayIndex = onceFunction_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForTooLargeArrayIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForTooLargeArrayIndex (nullptr,
                                                                          releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForTooLargeArrayIndex [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForTooLargeArrayIndex (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForTooLargeArrayIndex ("panicCodeForTooLargeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForTooLargeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForTooLargeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForClosedSync'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForClosedSync (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 41)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForClosedSync = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForClosedSync ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForClosedSync (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForClosedSync) {
    gOnceFunctionResult_panicCodeForClosedSync = onceFunction_panicCodeForClosedSync (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForClosedSync = true ;
  }
  return gOnceFunctionResult_panicCodeForClosedSync ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForClosedSync (void) {
  gOnceFunctionResult_panicCodeForClosedSync.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForClosedSync (nullptr,
                                                                  releaseOnceFunctionResult_panicCodeForClosedSync) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForClosedSync [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForClosedSync (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_panicCodeForClosedSync (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForClosedSync ("panicCodeForClosedSync",
                                                                        functionWithGenericHeader_panicCodeForClosedSync,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_panicCodeForClosedSync) ;

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
  GGS_lstring var_nodeName_3427 = GGS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3427, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 88)) ;
  }
  {
  const GGS_compileTimeConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3427, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 89)) ;
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
  GGS_lstring var_nodeName_4180 = GGS_lstring::init_21__21_ (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)), temp_2.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmConvertToBooleanAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4180, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 104)) ;
  }
  {
  const GGS_llvmConvertToBooleanAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4180, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 105)) ;
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
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_5868 ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_5868, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 132)) ;
  }
  GGS_omnibusType var_receiverType_5893 = extensionGetter_type (var_receiverTypeProxy_5868, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 133)) ;
  const GGS_compileTimeConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_receiverType_5893.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 134)) ;
  GGS_ctCheckMap var_ctCheckMap_6062 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeConvertToBooleanAST temp_6 = this ;
  var_ctCheckMap_6062.setter_insertKey (temp_6.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 137)) ;
  }
  const GGS_compileTimeConvertToBooleanAST temp_7 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_7.readProperty_mExpression ().ptr (), var_ctCheckMap_6062, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 138)) ;
  const GGS_compileTimeConvertToBooleanAST temp_8 = this ;
  GGS_lstring var_key_6227 = GGS_lstring::init_21__21_ (var_receiverType_5893.readProperty_omnibusTypeDescriptionName (), temp_8.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_compileTimeConvertToBooleanAST temp_9 = this ;
  const GGS_compileTimeConvertToBooleanAST temp_10 = this ;
  GGS_compileTimeImplicitConverterToBoolean var_converter_6324 = GGS_compileTimeImplicitConverterToBoolean::init_21__21_ (temp_9.readProperty_mReceiverName (), temp_10.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_6227, var_converter_6324, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 142)) ;
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
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_7419 ;
  {
  const GGS_llvmConvertToBooleanAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_7419, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 161)) ;
  }
  GGS_omnibusType var_receiverType_7444 = extensionGetter_type (var_receiverTypeProxy_7419, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 162)) ;
  const GGS_llvmConvertToBooleanAST temp_5 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_receiverType_7444.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 163)) ;
  const GGS_llvmConvertToBooleanAST temp_6 = this ;
  GGS_lstring var_key_7601 = GGS_lstring::init_21__21_ (var_receiverType_7444.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_llvmConvertToBooleanAST temp_7 = this ;
  const GGS_llvmConvertToBooleanAST temp_8 = this ;
  GGS_llvmImplicitConverterToBoolean var_converter_7698 = GGS_llvmImplicitConverterToBoolean::init_21__21__21_ (temp_7.readProperty_mReceiverName (), var_receiverType_7444, temp_8.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_7601, var_converter_7698, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 167)) ;
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
  GGS_bigint var_receiverValue_10492 ;
  GGS_omnibusType joker_10476_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_10476_1, var_receiverValue_10492, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 228)) ;
  GGS_ctMap var_varMap_10520 = GGS_ctMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeImplicitConverterToBoolean temp_0 = this ;
  var_varMap_10520.setter_insertKey (temp_0.readProperty_mReceiverName (), var_receiverValue_10492, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 230)) ;
  }
  GGS_bigint var_result_10661 ;
  const GGS_compileTimeImplicitConverterToBoolean temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mExpression ().ptr (), var_varMap_10520, var_result_10661, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 231)) ;
  outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_compileTime (GGS_bool (ComparisonKind::notEqual, var_result_10661.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 232))))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 232)) ;
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
    GGS_assignmentGenerationVarMap var_varMap_11651 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmImplicitConverterToBoolean temp_2 = this ;
    var_varMap_11651.setter_insertKey (temp_2.readProperty_mReceiverName (), extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)) ;
    }
    GGS_string var_resultLLVMName_11747 = GGS_string ("%temp").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("convert-to-boolean.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 258)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 259)) ;
    {
    var_varMap_11651.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("convert-to-boolean.galgas", 260)), var_resultLLVMName_11747, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 260)) ;
    }
    GGS_assignmentGenerationVarMap var_typeMap_11943 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
    {
    const GGS_llvmImplicitConverterToBoolean temp_3 = this ;
    const GGS_llvmImplicitConverterToBoolean temp_4 = this ;
    var_typeMap_11943.setter_insertKey (temp_3.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)) ;
    }
    GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 265)) ;
    GGS_stringlist var_generatedInstructions_12061 = temp_5 ;
    const GGS_llvmImplicitConverterToBoolean temp_6 = this ;
    extensionMethod_generateIRCode (temp_6.readProperty_mInstructionList (), var_varMap_11651, var_typeMap_11943, var_generatedInstructions_12061, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 266)) ;
    UpEnumerator_stringlist enumerator_12229 (var_generatedInstructions_12061) ;
    while (enumerator_12229.hasCurrentObject ()) {
      {
      GGS_stringset temp_7 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 268)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_12229.current_mValue (HERE), temp_7, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 268)) ;
      }
      enumerator_12229.gotoNextObject () ;
    }
    outArgument_outResult = GGS_implicitBooleanConversionResult::class_func_llvmVariable (var_resultLLVMName_11747  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 270)) ;
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
  GGS_omnibusType var_annotationType_695 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inOptionalTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_annotationType_695 = function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 16)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inOptionalTypeName, var_annotationType_695, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 18)) ;
  }
  GGS_semanticTemporariesStruct var_unusedSemanticTemporariesStruct_918 = GGS_semanticTemporariesStruct::init (inCompiler COMMA_HERE) ;
  GGS_allocaList temp_1 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 22)) ;
  GGS_allocaList var_unusedAllocaList_974 = temp_1 ;
  GGS_instructionListIR temp_2 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 23)) ;
  GGS_instructionListIR var_unusedInstructionListIR_1022 = temp_2 ;
  GGS_objectIR var_expressionIR_1459 ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) constinArgument_inExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 25)), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_annotationType_695, ioArgument_ioContext, GGS_mode::class_func_bootMode (SOURCE_FILE ("compute-static-expression.galgas", 29)), var_unusedSemanticTemporariesStruct_918, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, var_unusedAllocaList_974, var_unusedInstructionListIR_1022, var_expressionIR_1459, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 24)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = extensionGetter_isStatic (var_expressionIR_1459, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 37)).operator_not (SOURCE_FILE ("compute-static-expression.galgas", 37)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("compute-static-expression.galgas", 38)) ;
      outArgument_outStaticExpressionIR.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outStaticExpressionIR = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionIR_1459, var_annotationType_695, constinArgument_inErrorLocation, GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 41)) ;
  }
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
  GGS_objectIR var_expressionResult_4171 ;
  const GGS_convertExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4171, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4171, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 100)) ;
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
  GGS_omnibusType var_resultType_4486 = temp_5 ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_resultType_4486.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 114)).operator_not (SOURCE_FILE ("expression-convert.galgas", 114)).boolEnum () ;
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
      test_11 = extensionGetter_type (var_expressionResult_4171, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 116)).operator_not (SOURCE_FILE ("expression-convert.galgas", 116)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_convertExpressionAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray13  COMMA_SOURCE_FILE ("expression-convert.galgas", 117)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GGS_bigint var_minSource_4972 ;
      GGS_bigint var_maxSource_4991 ;
      GGS_bool joker_5001_2 ; // Joker input parameter
      GGS_uint joker_5001_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4171, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)).readProperty_kind ().method_extractInteger (var_minSource_4972, var_maxSource_4991, joker_5001_2, joker_5001_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)) ;
      GGS_bigint var_minTarget_5051 ;
      GGS_bigint var_maxTarget_5070 ;
      GGS_bool joker_5080_2 ; // Joker input parameter
      GGS_uint joker_5080_1 ; // Joker input parameter
      var_resultType_4486.readProperty_kind ().method_extractInteger (var_minTarget_5051, var_maxTarget_5070, joker_5080_2, joker_5080_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      GGS_bool test_14 = GGS_bool (ComparisonKind::lowerOrEqual, var_minTarget_5051.objectCompare (var_minSource_4972)) ;
      if (GalgasBool::boolTrue == test_14.boolEnum ()) {
        test_14 = GGS_bool (ComparisonKind::greaterOrEqual, var_maxTarget_5070.objectCompare (var_maxSource_4991)) ;
      }
      GGS_bool var_alwaysPossible_5093 = test_14 ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = var_alwaysPossible_5093.boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_convertExpressionAST temp_16 = this ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless explicit conversion"), fixItArray17  COMMA_SOURCE_FILE ("expression-convert.galgas", 123)) ;
        }
      }
      {
      routine_getNewTempValue_3F__26__21_ (var_resultType_4486, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 125)) ;
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_truncateInstructionIR::init_21__21_ (outArgument_outResult, var_expressionResult_4171, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 127)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        const GGS_convertExpressionAST temp_19 = this ;
        ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_convertInstructionIR::init_21__21__21_ (outArgument_outResult, var_expressionResult_4171, temp_19.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 132)) ;
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
  GGS_string var_lbl_6867 = temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).getter_string (SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GGS_string var_convertMinOkLabel_6922 = GGS_string ("min.").add_operation (var_lbl_6867, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GGS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GGS_string var_convertMaxOkLabel_6969 = GGS_string ("max.").add_operation (var_lbl_6867, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GGS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GGS_string var_convertFailLabel_7016 = GGS_string ("fail.").add_operation (var_lbl_6867, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GGS_string var_compareMinVar_7056 = GGS_string ("cmp.").add_operation (var_lbl_6867, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GGS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  GGS_string var_compareMaxVar_7104 = GGS_string ("cmp.").add_operation (var_lbl_6867, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GGS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  GGS_bigint var_minTarget_7198 ;
  GGS_bigint var_maxTarget_7217 ;
  const GGS_convertInstructionIR temp_1 = this ;
  GGS_bool joker_7227_2 ; // Joker input parameter
  GGS_uint joker_7227_1 ; // Joker input parameter
  extensionGetter_type (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).readProperty_kind ().method_extractInteger (var_minTarget_7198, var_maxTarget_7217, joker_7227_2, joker_7227_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  GGS_bigint var_minSource_7285 ;
  GGS_bool var_operandIsUnsigned_7316 ;
  const GGS_convertInstructionIR temp_2 = this ;
  GGS_bigint joker_7295 ; // Joker input parameter
  GGS_uint joker_7334_1 ; // Joker input parameter
  extensionGetter_type (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).readProperty_kind ().method_extractInteger (var_minSource_7285, joker_7295, var_operandIsUnsigned_7316, joker_7334_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  const GGS_convertInstructionIR temp_3 = this ;
  GGS_string var_operandType_7345 = extensionGetter_llvmTypeName (temp_3.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_minTarget_7198.objectCompare (var_minSource_7285)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_compareMinVar_7056, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
      GGS_string temp_5 ;
      const GalgasBool test_6 = var_operandIsUnsigned_7316.boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("uge") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string ("sge") ;
      }
      ioArgument_ioLLVMcode.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
      const GGS_convertInstructionIR temp_7 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (var_operandType_7345, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_minTarget_7198.getter_string (SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %").add_operation (var_compareMinVar_7056, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertMinOkLabel_6922, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertFailLabel_7016, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_convertMinOkLabel_6922.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_compareMaxVar_7104, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  GGS_string temp_8 ;
  const GalgasBool test_9 = var_operandIsUnsigned_7316.boolEnum () ;
  if (GalgasBool::boolTrue == test_9) {
    temp_8 = GGS_string ("ule") ;
  }else if (GalgasBool::boolFalse == test_9) {
    temp_8 = GGS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(temp_8, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  const GGS_convertInstructionIR temp_10 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (var_operandType_7345, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_maxTarget_7217.getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %").add_operation (var_compareMaxVar_7104, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertMaxOkLabel_6969, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertFailLabel_7016, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_convertFailLabel_7016.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  const GGS_convertInstructionIR temp_11 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_11.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).getter_assemblerRepresentation (SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  const GGS_convertInstructionIR temp_12 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (temp_12.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  const GGS_convertInstructionIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_string (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GGS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (temp_13.readProperty_mLocation ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_convertMaxOkLabel_6969.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  const GGS_convertInstructionIR temp_14 = this ;
  const GGS_convertInstructionIR temp_15 = this ;
  const GGS_convertInstructionIR temp_16 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_14.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_operandType_7345, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (temp_15.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmTypeName (temp_16.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
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
  GGS_objectIR var_expressionResult_4046 ;
  const GGS_extendExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4046, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 85)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4046, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
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
  GGS_omnibusType var_resultType_4210 = temp_2 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_resultType_4210.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 108)).operator_not (SOURCE_FILE ("expression-extend.galgas", 108)).boolEnum () ;
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
      test_8 = extensionGetter_type (var_expressionResult_4046, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 110)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 110)).operator_not (SOURCE_FILE ("expression-extend.galgas", 110)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_extendExpressionAST temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-extend.galgas", 111)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_bool var_sourceIsUnsigned_4705 ;
      GGS_uint var_sourceSize_4736 ;
      GGS_bigint joker_4687_2 ; // Joker input parameter
      GGS_bigint joker_4687_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4046, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)).readProperty_kind ().method_extractInteger (joker_4687_2, joker_4687_1, var_sourceIsUnsigned_4705, var_sourceSize_4736, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)) ;
      GGS_bool var_targetIsUnsigned_4802 ;
      GGS_uint var_targetSize_4833 ;
      GGS_bigint joker_4784_2 ; // Joker input parameter
      GGS_bigint joker_4784_1 ; // Joker input parameter
      var_resultType_4210.readProperty_kind ().method_extractInteger (joker_4784_2, joker_4784_1, var_targetIsUnsigned_4802, var_targetSize_4833, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_bool test_12 = var_sourceIsUnsigned_4705 ;
        if (GalgasBool::boolTrue == test_12.boolEnum ()) {
          test_12 = var_targetIsUnsigned_4802 ;
        }
        test_11 = test_12.boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = GGS_bool (ComparisonKind::greaterThan, var_sourceSize_4736.objectCompare (var_targetSize_4833)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_extendExpressionAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray15  COMMA_SOURCE_FILE ("expression-extend.galgas", 117)) ;
            }
          }
          if (GalgasBool::boolFalse == test_13) {
            GalgasBool test_16 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_16) {
              test_16 = GGS_bool (ComparisonKind::equal, var_sourceSize_4736.objectCompare (var_targetSize_4833)).boolEnum () ;
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
          GGS_bool test_20 = var_sourceIsUnsigned_4705 ;
          if (GalgasBool::boolTrue == test_20.boolEnum ()) {
            test_20 = var_targetIsUnsigned_4802.operator_not (SOURCE_FILE ("expression-extend.galgas", 121)) ;
          }
          test_19 = test_20.boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GalgasBool test_21 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_21) {
              test_21 = GGS_bool (ComparisonKind::greaterOrEqual, var_sourceSize_4736.objectCompare (var_targetSize_4833)).boolEnum () ;
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
            GGS_bool test_25 = var_sourceIsUnsigned_4705.operator_not (SOURCE_FILE ("expression-extend.galgas", 125)) ;
            if (GalgasBool::boolTrue == test_25.boolEnum ()) {
              test_25 = var_targetIsUnsigned_4802 ;
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
              test_28 = GGS_bool (ComparisonKind::greaterThan, var_sourceSize_4736.objectCompare (var_targetSize_4833)).boolEnum () ;
              if (GalgasBool::boolTrue == test_28) {
                const GGS_extendExpressionAST temp_29 = this ;
                GenericArray <FixItDescription> fixItArray30 ;
                inCompiler->emitSemanticError (temp_29.readProperty_mTypeName ().readProperty_location (), GGS_string ("cannot extend, use convert or truncate"), fixItArray30  COMMA_SOURCE_FILE ("expression-extend.galgas", 129)) ;
              }
            }
            if (GalgasBool::boolFalse == test_28) {
              GalgasBool test_31 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_31) {
                test_31 = GGS_bool (ComparisonKind::equal, var_sourceSize_4736.objectCompare (var_targetSize_4833)).boolEnum () ;
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
      routine_getNewTempValue_3F__26__21_ (var_resultType_4210, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4046, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 135)) ;
      }
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
  GGS_objectIR var_expressionResult_4169 ;
  const GGS_truncateExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 90)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4169, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4169, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 100)) ;
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
  GGS_omnibusType var_resultType_4333 = temp_2 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_resultType_4333.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 110)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 110)).boolEnum () ;
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
      test_8 = extensionGetter_type (var_expressionResult_4169, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 112)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 112)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_truncateExpressionAST temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GGS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_bigint var_minSource_4819 ;
      GGS_bigint var_maxSource_4838 ;
      GGS_uint var_expSize_4866 ;
      GGS_bool joker_4848_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4169, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)).readProperty_kind ().method_extractInteger (var_minSource_4819, var_maxSource_4838, joker_4848_1, var_expSize_4866, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)) ;
      GGS_bigint var_minTarget_4920 ;
      GGS_bigint var_maxTarget_4939 ;
      GGS_uint var_resultSize_4975 ;
      GGS_bool joker_4949 ; // Joker input parameter
      var_resultType_4333.readProperty_kind ().method_extractInteger (var_minTarget_4920, var_maxTarget_4939, joker_4949, var_resultSize_4975, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      GGS_bool test_11 = GGS_bool (ComparisonKind::lowerOrEqual, var_minTarget_4920.objectCompare (var_minSource_4819)) ;
      if (GalgasBool::boolTrue == test_11.boolEnum ()) {
        test_11 = GGS_bool (ComparisonKind::greaterOrEqual, var_maxTarget_4939.objectCompare (var_maxSource_4838)) ;
      }
      GGS_bool var_alwaysPossible_4995 = test_11 ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = var_alwaysPossible_4995.boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_truncateExpressionAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless explicit conversion"), fixItArray14  COMMA_SOURCE_FILE ("expression-truncate.galgas", 119)) ;
        }
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::lowerThan, var_resultSize_4975.objectCompare (var_expSize_4866)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          {
          routine_getNewTempValue_3F__26__21_ (var_resultType_4333, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 122)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_truncateInstructionIR::init_21__21_ (outArgument_outResult, var_expressionResult_4169, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-truncate.galgas", 123)) ;
        }
      }
      if (GalgasBool::boolFalse == test_15) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4169, var_resultType_4333, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)) ;
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
  GGS_string var_operandType_6307 = extensionGetter_llvmTypeName (temp_0.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 151)) ;
  const GGS_truncateInstructionIR temp_1 = this ;
  const GGS_truncateInstructionIR temp_2 = this ;
  const GGS_truncateInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GGS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (var_operandType_6307, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofControlRegisterAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                                    GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofControlRegisterAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addressofControlRegisterAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 44)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofControlRegisterAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_string var_llvmRegisterAddressName_3674 ;
  const GGS_addressofControlRegisterAST temp_0 = this ;
  GGS_omnibusType joker_3585 ; // Joker input parameter
  GGS_uint joker_3605 ; // Joker input parameter
  GGS_sliceMap joker_3629 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_3585, joker_3605, joker_3629, var_llvmRegisterAddressName_3674, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 64)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_3737 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 82)).getter_nowhere (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 81)) ;
  outArgument_outResult = GGS_objectIR::class_func_llvmNamedValue (extensionGetter_type (var_resultTypeProxy_3737, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)), var_llvmRegisterAddressName_3674  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)) ;
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
    GGS_LValueRepresentation var_lvalueIR_3676 ;
    const GGS_addressofExpressionAST temp_3 = this ;
    extensionMethod_analyzeLValue (temp_3.readProperty_mLValue (), constinArgument_inSelfType, GGS_bool (true), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_3676, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 70)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_3699 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)).getter_nowhere (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 83)) ;
    GGS_omnibusType var_resultType_3834 = extensionGetter_type (var_resultTypeProxy_3699, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 86)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_3834, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 87)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_addressofInstructionIR::init_21__21_ (outArgument_outResult, var_lvalueIR_3676, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 88)) ;
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
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-sizeof.galgas", 75)) ;
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
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-sizeof.galgas", 97)) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_sizeofExpressionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GGS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 98)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_omnibusType var_type_4485 ;
    const GGS_sizeofExpressionAST temp_3 = this ;
    extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_3.readProperty_mLValue (), var_type_4485, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 101)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_4499 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 103)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 102)) ;
    GGS_omnibusType var_resultType_4625 = extensionGetter_type (var_resultTypeProxy_4499, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 105)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_4625, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 106)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_sizeofInstructionIR::init_21__21_ (outArgument_outResult, var_type_4485, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 107)) ;
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
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-sizeof.galgas", 131)) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 131)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_sizeofTypeAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GGS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 132)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_sizeofTypeAST temp_3 = this ;
    GGS_omnibusType var_type_5806 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_5875 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 136)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 135)) ;
    GGS_omnibusType var_resultType_6001 = extensionGetter_type (var_resultTypeProxy_5875, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 138)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_6001, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 139)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_sizeofInstructionIR::init_21__21_ (outArgument_outResult, var_type_5806, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140)) ;
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
  GGS_string var_typeName_7036 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 162)) ;
  const GGS_sizeofInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GGS_string (".asPtr = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7036, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7036, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)) ;
  const GGS_sizeofInstructionIR temp_2 = this ;
  const GGS_sizeofInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_2.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GGS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (var_typeName_7036, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GGS_string (".asPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typedConstantCallAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                             GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) ;
      }
    }
  }
  const GGS_typedConstantCallAST temp_3 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_2147 (temp_3.readProperty_mAccessList ()) ;
  while (enumerator_2147.hasCurrentObject ()) {
    switch (enumerator_2147.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_2286_indexExpression_0 ;
        GGS_location extractedValue_2303__1 ;
        GGS_bool extractedValue_2303__2 ;
        enumerator_2147.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_2286_indexExpression_0, extractedValue_2303__1, extractedValue_2303__2) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2286_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 53)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_2414__0 ;
        GGS_effectiveArgumentListAST extractedValue_2442_arguments_1 ;
        GGS_location extractedValue_2452__2 ;
        enumerator_2147.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_2414__0, extractedValue_2442_arguments_1, extractedValue_2452__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_2492 (extractedValue_2442_arguments_1) ;
        while (enumerator_2492.hasCurrentObject ()) {
          switch (enumerator_2492.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_2602__0 ;
              GGS_lstring extractedValue_2613_typeName_1 ;
              GGS_lstring extractedValue_2622__2 ;
              enumerator_2492.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_2602__0, extractedValue_2613_typeName_1, extractedValue_2622__2) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_2613_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_2613_typeName_1 COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 60)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_2745_expression_0 ;
              GGS_location extractedValue_2756__1 ;
              enumerator_2492.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_2745_expression_0, extractedValue_2756__1) ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2745_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 62)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_2492.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_2147.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typedConstantCallAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 77)) ;
      }
    }
  }
  const GGS_typedConstantCallAST temp_3 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_3495 (temp_3.readProperty_mAccessList ()) ;
  while (enumerator_3495.hasCurrentObject ()) {
    switch (enumerator_3495.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_3634_indexExpression_0 ;
        GGS_location extractedValue_3651__1 ;
        GGS_bool extractedValue_3651__2 ;
        enumerator_3495.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_3634_indexExpression_0, extractedValue_3651__1, extractedValue_3651__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3634_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_3746__0 ;
        GGS_effectiveArgumentListAST extractedValue_3774_arguments_1 ;
        GGS_location extractedValue_3784__2 ;
        enumerator_3495.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_3746__0, extractedValue_3774_arguments_1, extractedValue_3784__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_3824 (extractedValue_3774_arguments_1) ;
        while (enumerator_3824.hasCurrentObject ()) {
          switch (enumerator_3824.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_3934__0 ;
              GGS_lstring extractedValue_3945_typeName_1 ;
              GGS_lstring extractedValue_3954__2 ;
              enumerator_3824.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_3934__0, extractedValue_3945_typeName_1, extractedValue_3954__2) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_3945_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_3945_typeName_1 COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 91)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_4077_expression_0 ;
              GGS_location extractedValue_4088__1 ;
              enumerator_3824.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4077_expression_0, extractedValue_4088__1) ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4077_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 93)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_3824.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3495.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typedConstantCallAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_omnibusType var_inferredResultType_5230 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_inferredResultType_5230 = constinArgument_inOptionalTargetType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_typedConstantCallAST temp_2 = this ;
    var_inferredResultType_5230 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_2.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_inferredResultType_5230.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-typed-constant.galgas", 126)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_typedConstantCallAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mConstructorName ().readProperty_location (), GGS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 127)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_typedConstantCallAST temp_6 = this ;
    GGS_lstring var_typeName_5565 = GGS_lstring::init_21__21_ (var_inferredResultType_5230.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mConstructorName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_constantMap var_classConstantMap_5723 ;
    constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_typeName_5565, var_classConstantMap_5723, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)) ;
    GGS_bigint var_value_5873 ;
    GGS_lstring var_classTypeName_5884 ;
    const GGS_typedConstantCallAST temp_7 = this ;
    var_classConstantMap_5723.method_searchKey (temp_7.readProperty_mConstructorName (), var_value_5873, var_classTypeName_5884, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 132)) ;
    GGS_omnibusType var_resultType_5907 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_classTypeName_5884, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)) ;
    outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_5907, var_value_5873  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 134)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_typedConstantCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::greaterThan, temp_9.readProperty_mAccessList ().getter_count (SOURCE_FILE ("expression-typed-constant.galgas", 137)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_objectIR var_newTemporaryReference_6314 ;
      {
      routine_getNewTempReference_3F__26__21_ (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)), ioArgument_ioTemporaries, var_newTemporaryReference_6314, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)) ;
      }
      ioArgument_ioAllocaList.addAssignOperation (extensionGetter_llvmName (var_newTemporaryReference_6314, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_type (var_newTemporaryReference_6314, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), GGS_bool (false)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6314, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 145)), extensionGetter_llvmName (var_newTemporaryReference_6314, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 146)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 144)) ;
      }
      outArgument_outResult = var_newTemporaryReference_6314 ;
      {
      const GGS_typedConstantCallAST temp_10 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 151)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                        GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 68)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 69)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 77)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 78)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 79)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
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
  GGS_objectIR var_ifExpressionResult_5027 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5027, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 100)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResult_5027, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  }
  GGS_implicitBooleanConversionResult var_ifExpressionConvertedToBoolean_5414 ;
  const GGS_ifExpressionAST temp_1 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_ifExpressionResult_5027, temp_1.readProperty_mIfExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_ifExpressionConvertedToBoolean_5414, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  GGS_objectIR var_thenExpressionTempResult_6014 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_2.readProperty_mThenExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_6014, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 128)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionTempResult_6014, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)) ;
  }
  const GGS_ifExpressionAST temp_3 = this ;
  GGS_objectIR var_thenExpressionResult_6163 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_thenExpressionTempResult_6014, constinArgument_inOptionalTargetType, temp_3.readProperty_mThenExpressionEndLocation (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)) ;
  GGS_objectIR var_elseExpressionTempResult_6847 ;
  const GGS_ifExpressionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mElseExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_6847, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 153)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionTempResult_6847, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)) ;
  }
  const GGS_ifExpressionAST temp_5 = this ;
  GGS_objectIR var_elseExpressionResult_6996 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_elseExpressionTempResult_6847, extensionGetter_type (var_thenExpressionResult_6163, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 173)), temp_5.readProperty_mElseExpressionEndLocation (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
  switch (var_ifExpressionConvertedToBoolean_5414.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_7355_boolValue_0 ;
      var_ifExpressionConvertedToBoolean_5414.getAssociatedValuesFor_compileTime (extractedValue_7355_boolValue_0) ;
      GGS_objectIR temp_6 ;
      const GalgasBool test_7 = extractedValue_7355_boolValue_0.boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = var_thenExpressionResult_6163 ;
      }else if (GalgasBool::boolFalse == test_7) {
        temp_6 = var_elseExpressionResult_6996 ;
      }
      outArgument_outResult = temp_6 ;
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GGS_string extractedValue_7474_testResultVariableName_0 ;
      var_ifExpressionConvertedToBoolean_5414.getAssociatedValuesFor_llvmVariable (extractedValue_7474_testResultVariableName_0) ;
      {
      routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_elseExpressionResult_6996, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
      }
      {
      extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extractedValue_7474_testResultVariableName_0, var_thenExpressionResult_6163, var_elseExpressionResult_6996, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 183)) ;
      }
    }
    break ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 19)) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 28)) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 29)) ;
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
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 50)) ;
  GGS_instructionListIR var_leftInstructionGenerationList_2786 = temp_0 ;
  GGS_objectIR var_leftOperand_3218 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_2786, var_leftOperand_3218, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_3218, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 64)) ;
  }
  GGS_implicitBooleanConversionResult var_leftBooleanOperand_3579 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_leftOperand_3218, temp_2.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_leftInstructionGenerationList_2786, ioArgument_ioAllocaList, var_leftBooleanOperand_3579, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 68)) ;
  GGS_instructionListIR temp_3 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 77)) ;
  GGS_instructionListIR var_rightInstructionGenerationList_3657 = temp_3 ;
  GGS_objectIR var_rightOperand_4094 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_3218, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 81)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3657, var_rightOperand_4094, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 78)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_4094, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 91)) ;
  }
  GGS_implicitBooleanConversionResult var_rightBooleanOperand_4426 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_5 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_rightOperand_4094, temp_5.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_rightInstructionGenerationList_3657, ioArgument_ioAllocaList, var_rightBooleanOperand_4426, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    GGS_bool test_7 = var_leftBooleanOperand_3579.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    if (GalgasBool::boolTrue == test_7.boolEnum ()) {
      test_7 = var_rightBooleanOperand_4426.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    }
    test_6 = test_7.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_bool var_leftStaticValue_4638 ;
      var_leftBooleanOperand_3579.method_extractCompileTime (var_leftStaticValue_4638, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 105)) ;
      GGS_bool var_rightStaticValue_4716 ;
      var_rightBooleanOperand_4426.method_extractCompileTime (var_rightStaticValue_4716, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 106)) ;
      outArgument_outResult = GGS_objectIR::class_func_literalInteger (extensionGetter_type (var_leftOperand_3218, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)), var_leftStaticValue_4638.operator_and (var_rightStaticValue_4716 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)).getter_bigint (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    {
    const GGS_booleanShortCircuitAndOperatorExpressionAST temp_8 = this ;
    routine_getNewTempValue_3F__26__21_ (extensionGetter_booleanType (constinArgument_inContext, temp_8.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)) ;
    }
    {
    const GGS_booleanShortCircuitAndOperatorExpressionAST temp_9 = this ;
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_llvmName (var_leftBooleanOperand_3579, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 114)), var_leftInstructionGenerationList_2786, extensionGetter_llvmName (var_rightBooleanOperand_4426, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 116)), var_rightInstructionGenerationList_3657, temp_9.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 112)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerSliceExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                  GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerSliceExpressionAST temp_0 = this ;
  UpEnumerator_integerSliceFieldListAST enumerator_2438 (temp_0.readProperty_mSliceValues ()) ;
  while (enumerator_2438.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2438.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 58)) ;
    enumerator_2438.gotoNextObject () ;
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
  UpEnumerator_integerSliceFieldListAST enumerator_3068 (temp_1.readProperty_mSliceValues ()) ;
  while (enumerator_3068.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_3068.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 71)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = enumerator_3068.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 72)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_uint var_sliceWidth_3245 = enumerator_3068.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 73)) ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_sliceWidth_3245.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3068.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 75)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          {
          extensionSetter_noteUINTType (ioArgument_ioGraph, var_sliceWidth_3245, enumerator_3068.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 77)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, enumerator_3068.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)).getter_nowhere (SOURCE_FILE ("expression-integer-slice.galgas", 80)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)) ;
          }
        }
      }
    }
    enumerator_3068.gotoNextObject () ;
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
  GGS_omnibusType var_resultType_4534 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_resultType_4534.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-integer-slice.galgas", 105)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 105)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_integerSliceExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_bool var_unsigned_4832 ;
    GGS_uint var_bitCount_4855 ;
    GGS_bigint joker_4814_2 ; // Joker input parameter
    GGS_bigint joker_4814_1 ; // Joker input parameter
    var_resultType_4534.readProperty_kind ().method_extractInteger (joker_4814_2, joker_4814_1, var_unsigned_4832, var_bitCount_4855, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 108)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_unsigned_4832.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 109)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_integerSliceExpressionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 110)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_uint var_leftShiftAmount_5071 = var_bitCount_4855 ;
      GGS_bigint var_accumulatedFieldStaticValues_5116 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 114)) ;
      GGS_operandIRList temp_7 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 115)) ;
      GGS_operandIRList var_operandList_5174 = temp_7 ;
      const GGS_integerSliceExpressionAST temp_8 = this ;
      UpEnumerator_integerSliceFieldListAST enumerator_5228 (temp_8.readProperty_mSliceValues ()) ;
      while (enumerator_5228.hasCurrentObject ()) {
        GGS_uint var_sliceWidth_5290 ;
        GGS_lstring var_expressionTypeName_5322 ;
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_5228.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray10  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 120)) ;
            var_operandList_5174.drop () ; // Release error dropped variable
            var_sliceWidth_5290.drop () ; // Release error dropped variable
            var_expressionTypeName_5322.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_5228.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GGS_string ("b"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              var_sliceWidth_5290 = GGS_uint (uint32_t (1U)) ;
              const GGS_integerSliceExpressionAST temp_12 = this ;
              var_expressionTypeName_5322 = GGS_lstring::init_21__21_ (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)), temp_12.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = enumerator_5228.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 124)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 124)).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GenericArray <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticError (enumerator_5228.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the selector should be an unsigned integer value"), fixItArray14  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 125)) ;
                var_operandList_5174.drop () ; // Release error dropped variable
                var_sliceWidth_5290.drop () ; // Release error dropped variable
                var_expressionTypeName_5322.drop () ; // Release error dropped variable
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              var_sliceWidth_5290 = enumerator_5228.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 127)) ;
              const GGS_integerSliceExpressionAST temp_15 = this ;
              var_expressionTypeName_5322 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_sliceWidth_5290.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)), temp_15.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
              GalgasBool test_16 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_16) {
                test_16 = GGS_bool (ComparisonKind::equal, var_sliceWidth_5290.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_16) {
                  GenericArray <FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_5228.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("the bit slice width should be > 0"), fixItArray17  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 130)) ;
                }
              }
            }
          }
        }
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::greaterOrEqual, var_leftShiftAmount_5071.objectCompare (var_sliceWidth_5290)).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            var_leftShiftAmount_5071 = var_leftShiftAmount_5071.substract_operation (var_sliceWidth_5290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 134)) ;
          }
        }
        if (GalgasBool::boolFalse == test_18) {
          GGS_uint var_specifiedBitCount_6258 = var_bitCount_4855.add_operation (var_sliceWidth_5290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)).substract_operation (var_leftShiftAmount_5071, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)) ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (enumerator_5228.current_mSliceWidth (HERE).readProperty_location (), GGS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6258.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (GGS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (var_bitCount_4855.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)), fixItArray19  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)) ;
          var_leftShiftAmount_5071 = GGS_uint (uint32_t (0U)) ;
        }
        GGS_omnibusType var_expressionTargetType_6510 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_expressionTypeName_5322, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)) ;
        GGS_objectIR var_expressionResult_7047 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_5228.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_expressionTargetType_6510, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 142)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 155)) ;
        }
        switch (extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().enumValue ()) {
        case GGS_typeKind::Enumeration::invalid:
          break ;
        case GGS_typeKind::Enumeration::enum_staticArrayType:
          {
            GGS_omnibusType extractedValue_7311__0 ;
            GGS_bigint extractedValue_7313__1 ;
            extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_7311__0, extractedValue_7313__1) ;
            GenericArray <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 162)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_dynamicArrayType:
          {
            GGS_omnibusType extractedValue_7435__0 ;
            extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_7435__0) ;
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 164)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_opaque:
          {
            GGS_bigint extractedValue_7547__0 ;
            extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_7547__0) ;
            GenericArray <FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 166)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_enumeration:
          {
            GGS_uint extractedValue_7664__0 ;
            extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_enumeration (extractedValue_7664__0) ;
            GenericArray <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 168)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_structure:
          {
            GGS_propertyList extractedValue_7779__0 ;
            extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_7779__0) ;
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 170)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_syncTool:
          {
            GenericArray <FixItDescription> fixItArray25 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 172)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_boolean:
          {
            GalgasBool test_26 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_26) {
              test_26 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 174)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_expressionTargetType_6510.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_26) {
                GenericArray <FixItDescription> fixItArray27 ;
                inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an $").add_operation (var_expressionTargetType_6510.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GGS_string (" expression is required, found an $"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GGS_string (" expression"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)), fixItArray27  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 175)) ;
              }
            }
            GalgasBool test_28 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_28) {
              test_28 = var_expressionResult_7047.getter_isLiteralInteger (SOURCE_FILE ("expression-integer-slice.galgas", 179)).boolEnum () ;
              if (GalgasBool::boolTrue == test_28) {
                GGS_bigint var_value_8495 ;
                GGS_omnibusType joker_8472_1 ; // Joker input parameter
                var_expressionResult_7047.method_extractLiteralInteger (joker_8472_1, var_value_8495, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 180)) ;
                var_accumulatedFieldStaticValues_5116 = var_accumulatedFieldStaticValues_5116.operator_or (var_value_8495.left_shift_operation (var_leftShiftAmount_5071, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) ;
              }
            }
            if (GalgasBool::boolFalse == test_28) {
              GGS_objectIR var_extendedResult_8745 ;
              {
              routine_getNewTempValue_3F__26__21_ (var_resultType_4534, ioArgument_ioTemporaries, var_extendedResult_8745, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 184)) ;
              }
              {
              extensionSetter_appendBoolToUInt (ioArgument_ioInstructionGenerationList, var_extendedResult_8745, var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 185)) ;
              }
              GGS_objectIR var_shiftedResult_8952 ;
              {
              routine_getNewTempValue_3F__26__21_ (var_resultType_4534, ioArgument_ioTemporaries, var_shiftedResult_8952, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 187)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_8952, var_extendedResult_8745, var_leftShiftAmount_5071, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 188)) ;
              }
              var_operandList_5174.addAssignOperation (var_shiftedResult_8952  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 190)) ;
            }
          }
          break ;
        case GGS_typeKind::Enumeration::enum_void:
          {
            GenericArray <FixItDescription> fixItArray29 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray29  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 193)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_literalString:
          {
            GenericArray <FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray30  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 195)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_function:
          {
            GGS_mode extractedValue_9404__0 ;
            GGS_routineTypedSignature extractedValue_9404__1 ;
            GGS_unifiedTypeMapEntry extractedValue_9404__2 ;
            extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_function (extractedValue_9404__0, extractedValue_9404__1, extractedValue_9404__2) ;
            GenericArray <FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray31  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 197)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_generic:
          {
            GGS_genericFormalParameterList extractedValue_9518__0 ;
            GGS_ctExpressionAST extractedValue_9518__1 ;
            GGS_llvmStringDefinition extractedValue_9518__2 ;
            extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_9518__0, extractedValue_9518__1, extractedValue_9518__2) ;
            GenericArray <FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray32  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 199)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_llvmType:
          {
            GGS_bigint extractedValue_9632__0 ;
            extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_9632__0) ;
            GenericArray <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray33  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 201)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_compileTimeBool:
          {
            GenericArray <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray34  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 203)) ;
          }
          break ;
        case GGS_typeKind::Enumeration::enum_compileTimeInteger:
          {
            GGS_bigint var_value_9947 ;
            GGS_omnibusType joker_9924_1 ; // Joker input parameter
            var_expressionResult_7047.method_extractLiteralInteger (joker_9924_1, var_value_9947, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 205)) ;
            GalgasBool test_35 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_35) {
              test_35 = GGS_bool (ComparisonKind::lowerThan, var_value_9947.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 206)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_35) {
                GenericArray <FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("this integer expression should be positive"), fixItArray36  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 207)) ;
              }
            }
            if (GalgasBool::boolFalse == test_35) {
              GalgasBool test_37 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_37) {
                test_37 = GGS_bool (ComparisonKind::lowerThan, var_value_9947.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)).left_shift_operation (var_sliceWidth_5290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_37) {
                  var_accumulatedFieldStaticValues_5116 = var_accumulatedFieldStaticValues_5116.operator_or (var_value_9947.left_shift_operation (var_leftShiftAmount_5071, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) ;
                }
              }
              if (GalgasBool::boolFalse == test_37) {
                GenericArray <FixItDescription> fixItArray38 ;
                inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("expression too large (should be < ").add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).left_shift_operation (var_sliceWidth_5290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)), fixItArray38  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)) ;
              }
            }
          }
          break ;
        case GGS_typeKind::Enumeration::enum_integer:
          {
            GGS_bigint extractedValue_10380_min_0 ;
            GGS_bigint extractedValue_10399_max_1 ;
            GGS_bool extractedValue_10409_unsigned_2 ;
            GGS_uint extractedValue_10424_expressionBitCount_3 ;
            extensionGetter_type (var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_10380_min_0, extractedValue_10399_max_1, extractedValue_10409_unsigned_2, extractedValue_10424_expressionBitCount_3) ;
            GalgasBool test_39 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_39) {
              test_39 = extractedValue_10409_unsigned_2.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 214)).boolEnum () ;
              if (GalgasBool::boolTrue == test_39) {
                GenericArray <FixItDescription> fixItArray40 ;
                inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an $uint").add_operation (var_sliceWidth_5290.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)).add_operation (GGS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)), fixItArray40  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)) ;
              }
            }
            if (GalgasBool::boolFalse == test_39) {
              GalgasBool test_41 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_41) {
                test_41 = GGS_bool (ComparisonKind::notEqual, extractedValue_10424_expressionBitCount_3.objectCompare (var_sliceWidth_5290)).boolEnum () ;
                if (GalgasBool::boolTrue == test_41) {
                  GenericArray <FixItDescription> fixItArray42 ;
                  inCompiler->emitSemanticError (enumerator_5228.current_mExpressionLocation (HERE), GGS_string ("an $uint").add_operation (var_sliceWidth_5290.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)).add_operation (GGS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)), fixItArray42  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)) ;
                }
              }
              if (GalgasBool::boolFalse == test_41) {
                GGS_objectIR var_extendedResult_10850 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_resultType_4534, ioArgument_ioTemporaries, var_extendedResult_10850, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 220)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_10850, var_expressionResult_7047, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 221)) ;
                }
                GGS_objectIR var_shiftedResult_11053 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_resultType_4534, ioArgument_ioTemporaries, var_shiftedResult_11053, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 223)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_11053, var_extendedResult_10850, var_leftShiftAmount_5071, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 224)) ;
                }
                var_operandList_5174.addAssignOperation (var_shiftedResult_11053  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 226)) ;
              }
            }
          }
          break ;
        }
        enumerator_5228.gotoNextObject () ;
      }
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        test_43 = GGS_bool (ComparisonKind::notEqual, var_leftShiftAmount_5071.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          const GGS_integerSliceExpressionAST temp_44 = this ;
          GenericArray <FixItDescription> fixItArray45 ;
          inCompiler->emitSemanticError (temp_44.readProperty_mLocation (), var_bitCount_4855.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GGS_string (" bits required, "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (var_bitCount_4855.substract_operation (var_leftShiftAmount_5071, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GGS_string (" bits defined"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)), fixItArray45  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)) ;
        }
      }
      outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_4534, var_accumulatedFieldStaticValues_5116  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 234)) ;
      UpEnumerator_operandIRList enumerator_11613 (var_operandList_5174) ;
      while (enumerator_11613.hasCurrentObject ()) {
        GGS_objectIR var_newResult_11698 ;
        {
        routine_getNewTempValue_3F__26__21_ (var_resultType_4534, ioArgument_ioTemporaries, var_newResult_11698, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 236)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_11698, extensionGetter_type (var_newResult_11698, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 239)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 240)), outArgument_outResult, GGS_llvmBinaryOperation::class_func_ior (SOURCE_FILE ("expression-integer-slice.galgas", 242)), enumerator_11613.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 237)) ;
        }
        outArgument_outResult = var_newResult_11698 ;
        enumerator_11613.gotoNextObject () ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                      GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                   const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GGS_semanticContext /* constinArgument_inContext */,
                                                                   const GGS_mode /* constinArgument_inMode */,
                                                                   GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GGS_objectIR & outArgument_outResult,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntegerInExpressionAST temp_0 = this ;
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)), temp_0.readProperty_mLiteralInteger ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                     GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GGS_lstring::init_21__21_ (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalStringInExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                  const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                  const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                  const GGS_semanticContext /* constinArgument_inContext */,
                                                                  const GGS_mode /* constinArgument_inMode */,
                                                                  GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                  GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                  GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                  GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                  GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                  GGS_objectIR & outArgument_outResult,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_staticStringIndex_3344 ;
  {
  const GGS_literalStringInExpressionAST temp_0 = this ;
  extensionSetter_findOrAddStaticString (ioArgument_ioStaticEntityMap, temp_0.readProperty_mLiteralString ().readProperty_string (), var_staticStringIndex_3344, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 62)) ;
  }
  const GGS_literalStringInExpressionAST temp_1 = this ;
  outArgument_outResult = GGS_objectIR::class_func_literalString (temp_1.readProperty_mLiteralString ().readProperty_string ().getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 63)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)), var_staticStringIndex_3344  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                      GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

