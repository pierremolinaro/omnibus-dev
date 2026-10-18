#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enterRegisterAddressIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_enterRegisterAddressIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enterRegisterAddressIR temp_0 = this ;
  const GGS_enterRegisterAddressIR temp_1 = this ;
  const GGS_enterRegisterAddressIR temp_2 = this ;
  const GGS_enterRegisterAddressIR temp_3 = this ;
  const GGS_enterRegisterAddressIR temp_4 = this ;
  const GGS_enterRegisterAddressIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_0.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 29)).add_operation (GGS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 29)).add_operation (temp_1.readProperty_mBaseAddress ().getter_string (SOURCE_FILE ("intermediate-enter-register-address.galgas3", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 29)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 29)).add_operation (temp_2.readProperty_mAddressOffset ().getter_string (SOURCE_FILE ("intermediate-enter-register-address.galgas3", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 30)).add_operation (GGS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 30)).add_operation (temp_3.readProperty_mRegisterName (), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 30)).add_operation (GGS_string (" at "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 30)).add_operation (temp_4.readProperty_mBaseAddress ().getter_hexString (SOURCE_FILE ("intermediate-enter-register-address.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 31)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 31)).add_operation (temp_5.readProperty_mAddressOffset ().getter_hexString (SOURCE_FILE ("intermediate-enter-register-address.galgas3", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 31)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas3", 29)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typeOpaqueDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typeOpaqueDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  const GGS_typeOpaqueDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mOpaqueTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 58)) ;
  }
  const GGS_typeOpaqueDeclarationAST temp_2 = this ;
  const GGS_typeOpaqueDeclarationAST temp_3 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_2.readProperty_mSizeExpression ().ptr (), temp_3.readProperty_mOpaqueTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@typeOpaqueDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typeOpaqueDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("opaque ").add_operation (temp_0.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 66)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@typeOpaqueDeclarationAST locationForErrorSignaling'
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
//Overriding extension proc '@typeOpaqueDeclarationAST enterInContext'
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
  GGS_omnibusTypeAttributes var_opaqueTypeAttributes_3718 = GGS_omnibusTypeAttributes::init (inCompiler COMMA_HERE) ;
  GGS_bool var_copyable_3751 = GGS_bool (false) ;
  const GGS_typeOpaqueDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_3775 (temp_0.readProperty_mAttributeList ()) ;
  while (enumerator_3775.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_3775.current_mValue (HERE).readProperty_string ().objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 92)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_opaqueTypeAttributes_3718.getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas3", 93)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 93)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_3775.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 94)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_opaqueTypeAttributes_3718 = var_opaqueTypeAttributes_3718.operator_or (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas3", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 96)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, enumerator_3775.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 98)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_copyable_3751.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_3775.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 100)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_copyable_3751 = GGS_bool (true) ;
            var_opaqueTypeAttributes_3718 = var_opaqueTypeAttributes_3718.operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-opaque-declaration.galgas3", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 103)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_3775.current_mValue (HERE).readProperty_location (), GGS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 107)).add_operation (GGS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 107)).add_operation (GGS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 107)), fixItArray7  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 106)) ;
      }
    }
    enumerator_3775.gotoNextObject () ;
  }
  GGS_objectIR var_sizeExpressionIR_4753 ;
  {
  const GGS_typeOpaqueDeclarationAST temp_8 = this ;
  const GGS_typeOpaqueDeclarationAST temp_9 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_8.readProperty_mSizeExpression (), temp_9.readProperty_mSizeExpressionLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas3", 117)), var_sizeExpressionIR_4753, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 112)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_sizeExpressionIR_4753.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas3", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas3", 120)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_typeOpaqueDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mSizeExpressionLocation (), GGS_string ("array size expression is not a literal integer"), fixItArray12  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 121)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GGS_constructorMap var_constructorMap_4945 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = var_opaqueTypeAttributes_3718.getter_contains (GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas3", 124)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 124)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        {
        GGS_constructorSignature temp_14 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 125)) ;
        var_constructorMap_4945.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas3", 125)), temp_14, GGS_constructorValue::class_func_simple (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 125)) ;
        }
        {
        const GGS_typeOpaqueDeclarationAST temp_15 = this ;
        ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_15.readProperty_mOpaqueTypeName (), var_constructorMap_4945, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 126)) ;
        }
      }
    }
    GGS_bigint var_bitSize_5254 ;
    GGS_omnibusType joker_5239_1 ; // Joker input parameter
    var_sizeExpressionIR_4753.method_extractLiteralInteger (joker_5239_1, var_bitSize_5254, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 128)) ;
    const GGS_typeOpaqueDeclarationAST temp_16 = this ;
    const GGS_typeOpaqueDeclarationAST temp_17 = this ;
    GGS_omnibusType var_opaqueType_5271 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas3", 130)), var_opaqueTypeAttributes_3718, temp_16.readProperty_mOpaqueTypeName ().readProperty_string (), GGS_typeKind::class_func_opaque (var_bitSize_5254  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 133)), temp_17.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    {
    const GGS_typeOpaqueDeclarationAST temp_18 = this ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_18.readProperty_mOpaqueTypeName (), var_opaqueType_5271, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 136)) ;
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = var_copyable_3751.boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      const GGS_typeOpaqueDeclarationAST temp_20 = this ;
      routine_print_3F_ (GGS_string ("OPAQUE ").add_operation (temp_20.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 140)).add_operation (GGS_string (" is copyable\n"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 140)), inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas3", 140)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                      GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas3", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas3", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas3", 34)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas3", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas3", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas3", 42)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalIntegerInExpressionAST analyzeExpression'
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
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas3", 62)), temp_0.readProperty_mLiteralInteger ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas3", 62)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@panicAST enterInPrecedenceGraph'
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
  GGS_lstring var_nodeName_2152 = GGS_lstring::init_21__21_ (GGS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 60)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 60)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 60)), temp_4.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_panicAST temp_5 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2152, temp_5, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 63)) ;
  }
  const GGS_panicAST temp_6 = this ;
  GGS_lstring var_configNode_2339 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 64)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2152, var_configNode_2339 COMMA_SOURCE_FILE ("panic.galgas3", 65)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@panicAST keyRepresentationForErrorSignaling'
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
  result_outRepresentation = GGS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 71)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 71)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas3", 71)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 71)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@panicAST locationForErrorSignaling'
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
    test_0 = constinArgument_inLocation.getter_isNowhere (SOURCE_FILE ("panic.galgas3", 85)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("raise.panic.nofile") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("raise.panic.file.").add_operation (constinArgument_inLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 88)).getter_lastPathComponent (SOURCE_FILE ("panic.galgas3", 88)).getter_deletingPathExtension (SOURCE_FILE ("panic.galgas3", 88)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 88)) ;
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
                                                                             const GALGAS_ObjectArray & inEffectiveParameterArray,
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
    result_result = GGS_string ("raise.panic.file.").add_operation (constinArgument_inFilePath.getter_lastPathComponent (SOURCE_FILE ("panic.galgas3", 98)).getter_deletingPathExtension (SOURCE_FILE ("panic.galgas3", 98)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 98)) ;
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
                                                                         const GALGAS_ObjectArray & inEffectiveParameterArray,
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
//Overriding extension proc '@panicAST enterInContext'
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
      ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GGS_lstring::init_21__21_ (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas3", 126)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 126)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_panicAST temp_4 = this ;
    const GGS_panicAST temp_5 = this ;
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GGS_lstring::init_21__21_ (temp_4.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas3", 128)), temp_5.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 128)) ;
    }
  }
  const GGS_panicAST temp_6 = this ;
  const GGS_panicAST temp_7 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedPanicRoutine::init_21__21_ (temp_6.readProperty_mIsSetup (), temp_7.readProperty_mPriority (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas3", 131)) ;
  GGS_routineFormalArgumentListAST temp_8 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 136)) ;
  GGS_routineFormalArgumentListAST var_arguments_5698 = temp_8 ;
  var_arguments_5698.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas3", 138)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas3", 139)), ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas3", 140)), GGS_string ("LINE").getter_nowhere (SOURCE_FILE ("panic.galgas3", 141))  COMMA_SOURCE_FILE ("panic.galgas3", 137)) ;
  var_arguments_5698.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas3", 143)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas3", 144)), ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas3", 145)), GGS_string ("CODE").getter_nowhere (SOURCE_FILE ("panic.galgas3", 146))  COMMA_SOURCE_FILE ("panic.galgas3", 142)) ;
  var_arguments_5698.addAssignOperation (GGS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("panic.galgas3", 148)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas3", 149)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 150)).getter_nowhere (SOURCE_FILE ("panic.galgas3", 150)), GGS_string ("FILE").getter_nowhere (SOURCE_FILE ("panic.galgas3", 151))  COMMA_SOURCE_FILE ("panic.galgas3", 147)) ;
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
  GGS_lstring var_routineMangledName_6056 = GGS_lstring::init_21__21_ (GGS_string ("panic.").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 153)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 153)).add_operation (temp_12.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas3", 153)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 153)), temp_13.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE) ;
  const GGS_panicAST temp_14 = this ;
  const GGS_panicAST temp_15 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas3", 157)), GGS_mode::class_func_panicMode (SOURCE_FILE ("panic.galgas3", 158)), GGS_bool (false), GGS_routineKind::class_func_function (SOURCE_FILE ("panic.galgas3", 160)), GGS_bool (false), GGS_bool (false), GGS_routineAttributes::init (inCompiler COMMA_HERE), var_routineMangledName_6056, var_arguments_5698, GGS_bool (false), temp_14.readProperty_mPanicInstructionList (), temp_15.readProperty_mEndOfPanicInstructions (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas3", 169))  COMMA_SOURCE_FILE ("panic.galgas3", 156)) ;
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
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_universalModePanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused (GGS_string ("section.user.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas3", 181)), GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas3", 180)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_sectionModePanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (GGS_string ("section.implementation.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas3", 187)), GGS_bool (false), GGS_bool (false), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicSetupListIR (), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicLoopListIR (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas3", 186)) ;
  UpEnumerator_stringset enumerator_7635 (constinArgument_inSourceFileAbsolutePathSet) ;
  while (enumerator_7635.hasCurrentObject ()) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_fileSpecificPanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (function_panicRoutineNameForFilePath (enumerator_7635.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 196)).getter_nowhere (SOURCE_FILE ("panic.galgas3", 196)), GGS_bool (false), GGS_bool (false), enumerator_7635.current_key (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas3", 195)) ;
    enumerator_7635.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (GGS_fileSpecificPanicRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (function_panicRoutineNameForFilePath (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 203)).getter_nowhere (SOURCE_FILE ("panic.galgas3", 203)), GGS_bool (false), GGS_bool (false), GGS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("panic.galgas3", 202)) ;
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
                                                           const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
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
//Overriding extension proc '@decoratedPanicRoutine semanticAnalysis'
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
      ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GGS_lstring::init_21__21_ (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas3", 234)), temp_3.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 234)) ;
      }
      const GGS_decoratedPanicRoutine temp_4 = this ;
      ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupListIR.addAssignOperation (temp_4.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas3", 235)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_decoratedPanicRoutine temp_5 = this ;
    const GGS_decoratedPanicRoutine temp_6 = this ;
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GGS_lstring::init_21__21_ (temp_5.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas3", 237)), temp_6.readProperty_mPriority ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 237)) ;
    }
    const GGS_decoratedPanicRoutine temp_7 = this ;
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopListIR.addAssignOperation (temp_7.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas3", 238)) ;
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
  GGS_uint var_emptyStringIndex_10147 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, GGS_string::makeEmptyString (), var_emptyStringIndex_10147, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 260)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 261)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 261)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 262)).add_operation (GGS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 262)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 262)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 262)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 262)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_10147, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 263)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 263)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 263)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 263)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 264)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 264)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 264)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 265)).add_operation (GGS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 265)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 265)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 266)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 266)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 266)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 267)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 268)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 269)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 270)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@fileSpecificPanicRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                 const GGS_generationContext constinArgument_inGenerationContext,
                                                                 GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arguments_11505 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 289)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 288)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 289)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 290)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 289)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 290)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 290)) ;
  const GGS_fileSpecificPanicRoutineIR temp_0 = this ;
  GGS_string var_fileBaseName_11698 = temp_0.readProperty_inFilePath ().getter_lastPathComponent (SOURCE_FILE ("panic.galgas3", 292)).getter_deletingPathExtension (SOURCE_FILE ("panic.galgas3", 292)) ;
  GGS_uint var_staticStringIndex_11858 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, var_fileBaseName_11698, var_staticStringIndex_11858, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 294)) ;
  }
  const GGS_fileSpecificPanicRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (temp_1.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 298)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 298)) ;
  const GGS_fileSpecificPanicRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("panic.galgas3", 299)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 299)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 299)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 299)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 300)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 300)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 300)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 301)).add_operation (GGS_string (" %in.CODE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 301)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 301)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 301)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 301)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 301)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %in.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_staticStringIndex_11858, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 302)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 302)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 302)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 302)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 303)).add_operation (var_arguments_11505, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 303)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 303)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 304)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 305)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@fileSpecificPanicRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 314)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 314))  COMMA_SOURCE_FILE ("panic.galgas3", 314)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@universalModePanicRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                  const GGS_generationContext constinArgument_inGenerationContext,
                                                                  GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arguments_13483 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 332)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 331)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 332)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 333)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 332)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 333)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 333)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 336)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 336)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 337)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 337)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_arguments_13483, inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 338)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 339)).add_operation (GGS_string ("noreturn\n\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 339)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 339)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@universalModePanicRoutineIR svcDeclarationGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_svcDeclarationGeneration (GGS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                                        GGS_sectionIRlist & ioArgument_ioSectionList,
                                                                        GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioSectionList.addAssignOperation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 350)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 350)), function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 351)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 351)), GGS_bool (true)  COMMA_SOURCE_FILE ("panic.galgas3", 349)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@universalModePanicRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 361)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 361))  COMMA_SOURCE_FILE ("panic.galgas3", 361)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sectionModePanicRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                const GGS_generationContext constinArgument_inGenerationContext,
                                                                GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Raise Panic internal (section mode)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 380)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 380)) ;
  GGS_string var_arguments_15548 = GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 383)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 382)).add_operation (GGS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 383)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 384)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 383)).add_operation (GGS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 384)).add_operation (GGS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 384)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 387)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 387)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_arguments_15548.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 388)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 388)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 388)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 388)) ;
  const GGS_sectionModePanicRoutineIR temp_0 = this ;
  UpEnumerator_panicSortedListIR enumerator_15909 (temp_0.readProperty_mPanicSetupListIR ()) ;
  while (enumerator_15909.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @panic.setup.").add_operation (enumerator_15909.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas3", 391)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 391)).add_operation (var_arguments_15548, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 391)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 391)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 391)) ;
    enumerator_15909.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %panic.loop\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 393)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 394)) ;
  const GGS_sectionModePanicRoutineIR temp_1 = this ;
  UpEnumerator_panicSortedListIR enumerator_16114 (temp_1.readProperty_mPanicLoopListIR ()) ;
  while (enumerator_16114.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @panic.loop.").add_operation (enumerator_16114.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas3", 396)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 396)).add_operation (var_arguments_15548, inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 396)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 396)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 396)) ;
    enumerator_16114.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 398)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas3", 399)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sectionModePanicRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                     GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sectionModePanicRoutineIR temp_0 = this ;
  UpEnumerator_panicSortedListIR enumerator_16582 (temp_0.readProperty_mPanicSetupListIR ()) ;
  while (enumerator_16582.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (GGS_string ("panic.setup.").add_operation (enumerator_16582.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas3", 409)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 409))  COMMA_SOURCE_FILE ("panic.galgas3", 409)) ;
    enumerator_16582.gotoNextObject () ;
  }
  const GGS_sectionModePanicRoutineIR temp_1 = this ;
  UpEnumerator_panicSortedListIR enumerator_16688 (temp_1.readProperty_mPanicLoopListIR ()) ;
  while (enumerator_16688.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (GGS_string ("panic.loop.").add_operation (enumerator_16688.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas3", 412)), inCompiler COMMA_SOURCE_FILE ("panic.galgas3", 412))  COMMA_SOURCE_FILE ("panic.galgas3", 412)) ;
    enumerator_16688.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enter_NOP_function&'
//
//--------------------------------------------------------------------------------------------------

void routine_enter_5F_NOP_5F_function_26_ (GGS_declarationListAST & ioArgument_ioDeclarationListAST,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas3", 14)) ;
  temp_0.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas3", 14)).getter_nowhere (SOURCE_FILE ("instruction-nop.galgas3", 14)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-nop.galgas3", 14)) ;
  GGS_lstringlist var_attributeList_594 = temp_0 ;
  GGS_instructionListAST temp_1 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas3", 15)) ;
  temp_1.plusPlusAssignOperation (GGS_instructionListAST_2E_element::init_21_ (GGS_instructionNOP::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("instruction-nop.galgas3", 15)), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-nop.galgas3", 15)) ;
  GGS_instructionListAST var_instructionList_658 = temp_1 ;
  GGS_routineFormalArgumentListAST temp_2 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas3", 23)) ;
  ioArgument_ioDeclarationListAST.addAssignOperation (GGS_functionDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (GGS_mode::class_func_anySafeMode (SOURCE_FILE ("instruction-nop.galgas3", 18)), GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas3", 20)), GGS_string ("nop").getter_nowhere (SOURCE_FILE ("instruction-nop.galgas3", 21)), var_attributeList_594, temp_2, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas3", 24)), var_instructionList_658, GGS_location::class_func_nowhere (SOURCE_FILE ("instruction-nop.galgas3", 26)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-nop.galgas3", 17)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@instructionNOP noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_instructionNOP::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@instructionNOP instructionSemanticAnalysis'
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
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas3", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'codeOptimization?&intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_codeOptimization_3F__26_intermediateCode (const GGS_string constinArgument_inSourceFile,
                                                       GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineAccessibilityIR temp_0 = GGS_routineAccessibilityIR::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 27)) ;
  GGS_routineAccessibilityIR var_routineAccessibilityIR_1021 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 29)) ;
  GGS_stringset var_exploreRoutineSet_1144 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 30)) ;
  GGS_stringset var_allRoutineSet_1185 = temp_2 ;
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 31)) ;
  GGS_stringset var_definedRoutineSet_1222 = temp_3 ;
  UpEnumerator_routineListIR enumerator_1288 (ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR ()) ;
  while (enumerator_1288.hasCurrentObject ()) {
    GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 33)) ;
    GGS_stringset var_accessibleRoutineSet_1325 = temp_4 ;
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractRoutineIR *) enumerator_1288.current (HERE).readProperty_mRoutine ().ptr (), var_accessibleRoutineSet_1325, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 34)) ;
    var_routineAccessibilityIR_1021.addAssignOperation (enumerator_1288.current (HERE).readProperty_mRoutine (), var_accessibleRoutineSet_1325  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 35)) ;
    var_allRoutineSet_1185.plusAssignOperation(var_accessibleRoutineSet_1325, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 36)) ;
    var_definedRoutineSet_1222.plusPlusAssignOperation (enumerator_1288.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 37)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = enumerator_1288.current (HERE).readProperty_mRoutine ().readProperty_isRequired ().boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_exploreRoutineSet_1144.plusPlusAssignOperation (enumerator_1288.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 39)) ;
      }
    }
    enumerator_1288.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_string var_m_1831 = GGS_string ("** Dead code elimination\n") ;
      var_m_1831.plusAssignOperation(GGS_string ("    ").add_operation (ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR ().getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 44)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas3", 44)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 44)).add_operation (GGS_string (" routines, "), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 44)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 44)) ;
      var_m_1831.plusAssignOperation(var_exploreRoutineSet_1144.getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 45)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas3", 45)).add_operation (GGS_string (" root routines.\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 45)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 45)) ;
      {
      routine_print_3F_ (var_m_1831, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 46)) ;
      }
    }
  }
  GGS_stringset var_undefinedRoutineSet_2131 = var_allRoutineSet_1185.substract_operation (var_definedRoutineSet_1222, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 49)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::greaterThan, var_undefinedRoutineSet_2131.getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 50)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string var_m_2235 = GGS_string ("undefined routine(s):") ;
      UpEnumerator_stringset enumerator_2272 (var_undefinedRoutineSet_2131) ;
      while (enumerator_2272.hasCurrentObject ()) {
        var_m_2235.plusAssignOperation(GGS_string ("\n    - ").add_operation (enumerator_2272.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 53)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 53)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 53)) ;
        enumerator_2272.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("dead-code-elimination.galgas3", 55)), var_m_2235, fixItArray8  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 55)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (gOption_omnibus_5F_options_noDeadCodeElimination.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      {
      routine_print_3F_ (GGS_string ("    No dead code elimination (option --").add_operation (GGS_string (gOption_omnibus_5F_options_noDeadCodeElimination.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 59)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 59)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 59)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 61)) ;
    GGS_stringset var_usefulRoutineSet_2667 = temp_10 ;
    if (ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR ().getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 62)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 62)).isValid ()) {
      uint32_t variant_2694 = ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR ().getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 62)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 62)).uintValue () ;
      bool loop_2694 = true ;
      while (loop_2694) {
        loop_2694 = GGS_bool (ComparisonKind::greaterThan, var_exploreRoutineSet_1144.getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 62)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
        if (loop_2694) {
          loop_2694 = GGS_bool (ComparisonKind::greaterThan, var_exploreRoutineSet_1144.getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 62)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
        }
        if (loop_2694 && (0 == variant_2694)) {
          loop_2694 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("dead-code-elimination.galgas3", 62)) ;
        }
        if (loop_2694) {
          variant_2694 -= 1 ;
          GGS_stringset var_currentSet_2798 = var_exploreRoutineSet_1144 ;
          GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 64)) ;
          var_exploreRoutineSet_1144 = temp_11 ;
          UpEnumerator_routineAccessibilityIR enumerator_2880 (var_routineAccessibilityIR_1021) ;
          while (enumerator_2880.hasCurrentObject ()) {
            GGS_lstring var_routineMangledName_2918 = enumerator_2880.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName () ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = var_currentSet_2798.getter_hasKey (var_routineMangledName_2918.readProperty_string () COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 67)).operator_and (var_usefulRoutineSet_2667.getter_hasKey (var_routineMangledName_2918.readProperty_string () COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 67)).operator_not (SOURCE_FILE ("dead-code-elimination.galgas3", 67)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 67)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                var_usefulRoutineSet_2667.plusPlusAssignOperation (var_routineMangledName_2918.readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 68)) ;
                var_exploreRoutineSet_1144.plusAssignOperation(enumerator_2880.current (HERE).readProperty_mAccessibleRoutineSet (), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 69)) ;
              }
            }
            enumerator_2880.gotoNextObject () ;
          }
        }
      }
    }
    UpEnumerator_routineAccessibilityIR enumerator_3317 (var_routineAccessibilityIR_1021) ;
    while (enumerator_3317.hasCurrentObject ()) {
      GGS_lstring var_routineMangledName_3353 = enumerator_3317.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName () ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = enumerator_3317.current (HERE).readProperty_mRoutine ().readProperty_warnsIfUnused ().operator_and (var_usefulRoutineSet_2667.getter_hasKey (var_routineMangledName_3353.readProperty_string () COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 76)).operator_not (SOURCE_FILE ("dead-code-elimination.galgas3", 76)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 76)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticWarning (var_routineMangledName_3353.readProperty_location (), GGS_string ("unused routine"), fixItArray14  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 77)) ;
        }
      }
      enumerator_3317.gotoNextObject () ;
    }
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_string var_m_3697 = GGS_string ("    ").add_operation (var_usefulRoutineSet_2667.getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 82)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas3", 82)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 82)).add_operation (GGS_string (" useful routines.\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 82)) ;
        {
        routine_print_3F_ (var_m_3697, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 86)) ;
        }
      }
    }
    GGS_routineListIR temp_16 = GGS_routineListIR::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 89)) ;
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR = temp_16 ;
    UpEnumerator_routineAccessibilityIR enumerator_4022 (var_routineAccessibilityIR_1021) ;
    while (enumerator_4022.hasCurrentObject ()) {
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = var_usefulRoutineSet_2667.getter_hasKey (enumerator_4022.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string () COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 91)).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (enumerator_4022.current_mRoutine (HERE)  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 92)) ;
        }
      }
      enumerator_4022.gotoNextObject () ;
    }
  }
  GGS_string var_filePath_4244 = constinArgument_inSourceFile.add_operation (GGS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 97)) ;
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (gOption_omnibus_5F_options_emitRoutineInvocationGraphFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      {
      routine_displayInvocationGraph_3F__3F_ (ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR (), var_filePath_4244, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 99)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_18) {
    {
    GGS_string::class_method_deleteFileIfExists (var_filePath_4244, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 101)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'displayInvocationGraph??'
//
//--------------------------------------------------------------------------------------------------

void routine_displayInvocationGraph_3F__3F_ (const GGS_routineListIR constinArgument_inRoutineListIR,
                                             const GGS_string constinArgument_inFilePath,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_4715 = GGS_string ("digraph G {\n") ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 113)) ;
  GGS_stringset var_definedRoutines_4770 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 114)) ;
  GGS_stringset var_allRoutines_4809 = temp_1 ;
  UpEnumerator_routineListIR enumerator_4834 (constinArgument_inRoutineListIR) ;
  while (enumerator_4834.hasCurrentObject ()) {
    var_definedRoutines_4770.plusPlusAssignOperation (enumerator_4834.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 116)) ;
    var_allRoutines_4809.plusPlusAssignOperation (enumerator_4834.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 117)) ;
    GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 118)) ;
    GGS_stringset var_accessibleRoutineSet_4984 = temp_2 ;
    GGS_uint joker_5071 = GGS_uint (uint32_t (0U)) ;
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractRoutineIR *) enumerator_4834.current_mRoutine (HERE).ptr (), var_accessibleRoutineSet_4984, joker_5071, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 119)) ;
    var_allRoutines_4809.plusAssignOperation(var_accessibleRoutineSet_4984, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 120)) ;
    var_s_4715.plusAssignOperation(GGS_string ("  \"").add_operation (enumerator_4834.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 121)).add_operation (GGS_string ("\" [shape=rectangle"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 121)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 121)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_4834.current_mRoutine (HERE).readProperty_isRequired ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_s_4715.plusAssignOperation(GGS_string (", color=blue"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 123)) ;
      }
    }
    var_s_4715.plusAssignOperation(GGS_string ("] ;\n"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 125)) ;
    UpEnumerator_stringset enumerator_5327 (var_accessibleRoutineSet_4984) ;
    while (enumerator_5327.hasCurrentObject ()) {
      var_s_4715.plusAssignOperation(GGS_string ("  \"").add_operation (enumerator_4834.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 127)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 127)).add_operation (enumerator_5327.current (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 127)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 127)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 127)) ;
      enumerator_5327.gotoNextObject () ;
    }
    enumerator_4834.gotoNextObject () ;
  }
  GGS_stringset var_undefinedRoutineSet_5503 = var_allRoutines_4809.substract_operation (var_definedRoutines_4770, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 131)) ;
  UpEnumerator_stringset enumerator_5574 (var_undefinedRoutineSet_5503) ;
  while (enumerator_5574.hasCurrentObject ()) {
    var_s_4715.plusAssignOperation(GGS_string ("  \"").add_operation (enumerator_5574.current (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 133)).add_operation (GGS_string ("\" [shape=rectangle, color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 133)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 133)) ;
    enumerator_5574.gotoNextObject () ;
  }
  var_s_4715.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 135)) ;
  GGS_bool joker_5734 ; // Joker input parameter
  var_s_4715.method_writeToFileWhenDifferentContents (constinArgument_inFilePath, joker_5734, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 136)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::greaterThan, var_undefinedRoutineSet_5503.getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 137)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_string var_m_5786 = var_undefinedRoutineSet_5503.getter_count (SOURCE_FILE ("dead-code-elimination.galgas3", 138)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas3", 138)).add_operation (GGS_string (" undefined routine(s) in routine invocation graph"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 138)) ;
      UpEnumerator_stringset enumerator_5886 (var_undefinedRoutineSet_5503) ;
      while (enumerator_5886.hasCurrentObject ()) {
        var_m_5786.plusAssignOperation(GGS_string ("\n    - ").add_operation (enumerator_5886.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 140)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 140)) ;
        enumerator_5886.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("dead-code-elimination.galgas3", 142)), var_m_5786, fixItArray5  COMMA_SOURCE_FILE ("dead-code-elimination.galgas3", 142)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_4279 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_functionDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_functionDeclarationAST temp_2 = this ;
      var_s_4279.plusAssignOperation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas3", 153)) ;
    }
  }
  const GGS_functionDeclarationAST temp_3 = this ;
  var_s_4279.plusAssignOperation(temp_3.readProperty_mFunctionName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 155)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas3", 155)) ;
  const GGS_functionDeclarationAST temp_4 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_4466 (temp_4.readProperty_mFunctionFormalArgumentList ()) ;
  while (enumerator_4466.hasCurrentObject ()) {
    var_s_4279.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_4466.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 157)).add_operation (enumerator_4466.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 157)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 157)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas3", 157)) ;
    enumerator_4466.gotoNextObject () ;
  }
  var_s_4279.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas3", 159)) ;
  const GGS_functionDeclarationAST temp_5 = this ;
  GGS_lstring var_nodeName_4607 = GGS_lstring::init_21__21_ (var_s_4279, temp_5.readProperty_mFunctionName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_functionDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4607, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 161)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4607, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 162)) COMMA_SOURCE_FILE ("declaration-function.galgas3", 162)) ;
  }
  const GGS_functionDeclarationAST temp_7 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_4815 (temp_7.readProperty_mFunctionFormalArgumentList ()) ;
  while (enumerator_4815.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_4815.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas3", 165)) ;
    }
    enumerator_4815.gotoNextObject () ;
  }
  const GGS_functionDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mFunctionInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 167)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_functionDeclarationAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      {
      const GGS_functionDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas3", 169)) ;
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
      ioArgument_ioGraph.setter_noteNode (temp_14.readProperty_mFunctionReturnTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas3", 172)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@functionDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_functionDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_functionDeclarationAST temp_0 = this ;
  const GGS_functionDeclarationAST temp_1 = this ;
  result_result = GGS_string ("function ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 179)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 179)).add_operation (temp_1.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 179)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@functionDeclarationAST locationForErrorSignaling'
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
//Overriding extension proc '@functionDeclarationAST enterInContext'
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
  GGS_routineTypedSignature var_signature_6606 ;
  {
  const GGS_functionDeclarationAST temp_0 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mFunctionFormalArgumentList (), var_signature_6606, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas3", 203)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_6712 ;
  {
  const GGS_functionDeclarationAST temp_1 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mFunctionReturnTypeName (), var_returnTypeProxy_6712, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 205)) ;
  }
  GGS_bool var_warnIfUnused_6752 = GGS_bool (true) ;
  GGS_bool var_exportedFunction_6778 = GGS_bool (false) ;
  GGS_bool var_canMutateProperties_6809 = GGS_bool (false) ;
  const GGS_functionDeclarationAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_6844 (temp_2.readProperty_mFunctionAttributeList ()) ;
  while (enumerator_6844.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_6844.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 211)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = var_warnIfUnused_6752.operator_not (SOURCE_FILE ("declaration-function.galgas3", 212)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_6844.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 213)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 213)), fixItArray5  COMMA_SOURCE_FILE ("declaration-function.galgas3", 213)) ;
          }
        }
        var_warnIfUnused_6752 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::equal, enumerator_6844.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 216)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = var_exportedFunction_6778.boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_6844.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 218)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 218)), fixItArray8  COMMA_SOURCE_FILE ("declaration-function.galgas3", 218)) ;
            }
          }
          var_exportedFunction_6778 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_6844.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 221)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = var_canMutateProperties_6809.boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GenericArray <FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_6844.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 223)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 223)), fixItArray11  COMMA_SOURCE_FILE ("declaration-function.galgas3", 223)) ;
              }
            }
            var_canMutateProperties_6809 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_6844.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 227)).add_operation (GGS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 228)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 228)).add_operation (GGS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 228)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 228)), fixItArray12  COMMA_SOURCE_FILE ("declaration-function.galgas3", 227)) ;
        }
      }
    }
    enumerator_6844.gotoNextObject () ;
  }
  const GGS_functionDeclarationAST temp_13 = this ;
  const GGS_functionDeclarationAST temp_14 = this ;
  const GGS_functionDeclarationAST temp_15 = this ;
  GGS_lstring var_functionLLVMName_7767 = function_routineMangledNameFromAST (temp_13.readProperty_mReceiverTypeName ().readProperty_string (), temp_14.readProperty_mFunctionName (), temp_15.readProperty_mFunctionFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 232)) ;
  const GGS_functionDeclarationAST temp_16 = this ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_7989 = extensionGetter_routineLLVMDictionaryForFunction (temp_16.readProperty_mMode (), var_functionLLVMName_7767.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 238)) ;
  const GGS_functionDeclarationAST temp_17 = this ;
  const GGS_functionDeclarationAST temp_18 = this ;
  GGS_lstring var_routineMangledName_8081 = extensionGetter_mangledName (var_signature_6606, temp_17.readProperty_mReceiverTypeName ().readProperty_string (), temp_18.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 239)) ;
  {
  const GGS_functionDeclarationAST temp_19 = this ;
  const GGS_functionDeclarationAST temp_20 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_8081, temp_19.readProperty_mPublicFunction (), var_signature_6606, var_returnTypeProxy_6712, var_routineLLVMNameDict_7989, var_exportedFunction_6778, temp_20.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas3", 240)) ;
  }
  const GGS_functionDeclarationAST temp_21 = this ;
  const GGS_functionDeclarationAST temp_22 = this ;
  const GGS_functionDeclarationAST temp_23 = this ;
  const GGS_functionDeclarationAST temp_24 = this ;
  const GGS_functionDeclarationAST temp_25 = this ;
  const GGS_functionDeclarationAST temp_26 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (temp_21.readProperty_mReceiverTypeName (), temp_22.readProperty_mMode (), ioArgument_ioContext.readProperty_mRequiredRoutineSet ().getter_hasKey (var_functionLLVMName_7767.readProperty_string () COMMA_SOURCE_FILE ("declaration-function.galgas3", 253)), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-function.galgas3", 254)), var_warnIfUnused_6752, var_exportedFunction_6778, GGS_routineAttributes::init (inCompiler COMMA_HERE), var_functionLLVMName_7767, temp_23.readProperty_mFunctionFormalArgumentList (), GGS_bool (true), temp_24.readProperty_mFunctionInstructionList (), temp_25.readProperty_mEndOfFunctionDeclaration (), temp_26.readProperty_mFunctionReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-function.galgas3", 250)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addressofControlRegisterAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                                    GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addressofControlRegisterAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addressofControlRegisterAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas3", 44)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addressofControlRegisterAST analyzeExpression'
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
  GGS_string var_llvmRegisterAddressName_3160 ;
  const GGS_addressofControlRegisterAST temp_0 = this ;
  GGS_omnibusType joker_3071 ; // Joker input parameter
  GGS_uint joker_3091 ; // Joker input parameter
  GGS_sliceMap joker_3115 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_3071, joker_3091, joker_3115, var_llvmRegisterAddressName_3160, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas3", 64)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_3224 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-control-register.galgas3", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas3", 82)).getter_nowhere (SOURCE_FILE ("expression-addressof-control-register.galgas3", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas3", 81)) ;
  outArgument_outResult = GGS_objectIR::class_func_llvmNamedValue (extensionGetter_type (var_resultTypeProxy_3224, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas3", 84)), var_llvmRegisterAddressName_3160  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas3", 84)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@compileTimeIntAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeIntAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_829 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 21)) ;
  {
  const GGS_compileTimeIntAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_829, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_829, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 23)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 23)) COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 23)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@compileTimeIntAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeIntAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 29)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'ctIntegerTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_ctIntegerTypeName (Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ctInt") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_ctIntegerTypeName = false ;
static GGS_string gOnceFunctionResult_ctIntegerTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_ctIntegerTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctIntegerTypeName) {
    gOnceFunctionResult_ctIntegerTypeName = onceFunction_ctIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctIntegerTypeName = true ;
  }
  return gOnceFunctionResult_ctIntegerTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_ctIntegerTypeName (void) {
  gOnceFunctionResult_ctIntegerTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_ctIntegerTypeName (nullptr,
                                                             releaseOnceFunctionResult_ctIntegerTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_ctIntegerTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_ctIntegerTypeName (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_ctIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_ctIntegerTypeName ("ctIntegerTypeName",
                                                                   functionWithGenericHeader_ctIntegerTypeName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_ctIntegerTypeName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                    GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                    GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                    GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                    GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                    GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                    GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_ctIntegerTypeName_2222 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 52)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 52)) ;
  GGS_omnibusType var_ctInt_2277 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 53)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctIntegerTypeName_2222, var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 55)) ;
  }
  GGS_lstring var_key_2435 = function_prefixOperatorMapKey (var_ctInt_2277, GGS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("compile-time-type-int.galgas3", 57)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 57)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 57)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, var_ctInt_2277, GGS_compileTimeIntComplementOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 58)) ;
  }
  var_key_2435 = function_prefixOperatorMapKey (var_ctInt_2277, GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("compile-time-type-int.galgas3", 60)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 60)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, var_ctInt_2277, GGS_compileTimeIntMinusOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 61)) ;
  }
  var_key_2435 = function_prefixOperatorMapKey (var_ctInt_2277, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("compile-time-type-int.galgas3", 63)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 63)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 63)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, var_ctInt_2277, GGS_compileTimeIntMinusOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 64)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("compile-time-type-int.galgas3", 66)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 66)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 66)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntBitWiseAndOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 67)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-type-int.galgas3", 69)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 69)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 69)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntBitWiseOrOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 70)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-type-int.galgas3", 72)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 72)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntXorOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 73)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("compile-time-type-int.galgas3", 75)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 75)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntAddOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 76)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas3", 78)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 78)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 78)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntAddOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 79)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("compile-time-type-int.galgas3", 81)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 81)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 81)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntSubtractOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 82)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas3", 84)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 84)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 84)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntSubtractOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 85)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("compile-time-type-int.galgas3", 87)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 87)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 87)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntMultiplyOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 88)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("compile-time-type-int.galgas3", 90)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 90)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 90)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntDivideOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 91)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas3", 93)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 93)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 93)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntDivideZeroOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 94)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("compile-time-type-int.galgas3", 96)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 96)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 96)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntModuloOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 97)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas3", 99)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 99)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 99)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntModuloZeroOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 100)) ;
  }
  GGS_omnibusType var_ctBoolType_5256 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 102)) ;
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("compile-time-type-int.galgas3", 103)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 103)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 103)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctBoolType_5256, GGS_compileTimeIntEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 104)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("compile-time-type-int.galgas3", 106)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 106)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 106)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctBoolType_5256, GGS_compileTimeIntLessThanOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 107)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("compile-time-type-int.galgas3", 109)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 109)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 109)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctBoolType_5256, GGS_compileTimeIntLowerOrEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 110)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("compile-time-type-int.galgas3", 112)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 112)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 112)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntShiftLeftOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 113)) ;
  }
  var_key_2435 = function_infixOperatorMapKey (var_ctInt_2277, GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("compile-time-type-int.galgas3", 115)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas3", 115)), var_ctInt_2277, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 115)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2435, var_ctInt_2277, GGS_compileTimeIntShiftRightOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 116)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntModuloOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location constinArgument_inOperatorLocation,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_7073 ;
  GGS_omnibusType joker_7057_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_7057_1, var_rightValue_7073, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 138)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_7073.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 139)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 140)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_7259 ;
    GGS_omnibusType joker_7243_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_7243_1, var_leftValue_7259, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 142)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_7259.modulo_operation (var_rightValue_7073, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 143))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 143)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntModuloZeroOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloZeroOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_8101 ;
  GGS_omnibusType joker_8085_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_8085_1, var_rightValue_8101, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 164)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_8101.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 165)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 166))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 166)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_8272 ;
    GGS_omnibusType joker_8256_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_8256_1, var_leftValue_8272, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 168)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_8272.modulo_operation (var_rightValue_8101, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 169))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 169)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntDivideOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location constinArgument_inOperatorLocation,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_9099 ;
  GGS_omnibusType joker_9083_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_9083_1, var_rightValue_9099, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 190)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_9099.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 191)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 192)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_9285 ;
    GGS_omnibusType joker_9269_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_9269_1, var_leftValue_9285, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 194)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_9285.divide_operation (var_rightValue_9099, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 195))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 195)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntDivideZeroOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideZeroOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_10125 ;
  GGS_omnibusType joker_10109_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_10109_1, var_rightValue_10125, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 216)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_10125.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 217)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 218))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 218)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_10296 ;
    GGS_omnibusType joker_10280_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_10280_1, var_leftValue_10296, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 220)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_10296.divide_operation (var_rightValue_10125, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 221))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 221)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntMultiplyOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMultiplyOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_objectIR constinArgument_inRightOperand,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_11131 ;
  GGS_omnibusType joker_11115_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_11115_1, var_leftValue_11131, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 242)) ;
  GGS_bigint var_rightValue_11198 ;
  GGS_omnibusType joker_11182_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_11182_1, var_rightValue_11198, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 243)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_11131.multiply_operation (var_rightValue_11198, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 244))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 244)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntSubtractOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntSubtractOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_objectIR constinArgument_inRightOperand,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_12026 ;
  GGS_omnibusType joker_12010_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_12010_1, var_leftValue_12026, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 264)) ;
  GGS_bigint var_rightValue_12093 ;
  GGS_omnibusType joker_12077_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_12077_1, var_rightValue_12093, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 265)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_12026.substract_operation (var_rightValue_12093, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 266))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 266)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntEqualOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntEqualOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                            const GGS_location /* constinArgument_inOperatorLocation */,
                                                            const GGS_objectIR constinArgument_inRightOperand,
                                                            const GGS_omnibusType constinArgument_inResultType,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                            GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                            GGS_objectIR & outArgument_outResultValue,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_12915 ;
  GGS_omnibusType joker_12899_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_12899_1, var_leftValue_12915, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 286)) ;
  GGS_bigint var_rightValue_12982 ;
  GGS_omnibusType joker_12966_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_12966_1, var_rightValue_12982, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 287)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::equal, var_leftValue_12915.objectCompare (var_rightValue_12982)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas3", 288))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 288)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntAddOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAddOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                          const GGS_location /* constinArgument_inOperatorLocation */,
                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GGS_objectIR & outArgument_outResultValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_13801 ;
  GGS_omnibusType joker_13785_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_13785_1, var_leftValue_13801, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 308)) ;
  GGS_bigint var_rightValue_13868 ;
  GGS_omnibusType joker_13852_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_13852_1, var_rightValue_13868, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 309)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_13801.add_operation (var_rightValue_13868, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 310))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 310)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntBitWiseAndOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseAndOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_14700 ;
  GGS_omnibusType joker_14684_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_14684_1, var_leftValue_14700, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 330)) ;
  GGS_bigint var_rightValue_14767 ;
  GGS_omnibusType joker_14751_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_14751_1, var_rightValue_14767, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 331)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_14700.operator_and (var_rightValue_14767 COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 332))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 332)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntShiftLeftOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftLeftOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                const GGS_location constinArgument_inOperatorLocation,
                                                                const GGS_objectIR constinArgument_inRightOperand,
                                                                const GGS_omnibusType constinArgument_inResultType,
                                                                GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GGS_objectIR & outArgument_outResultValue,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_15591 ;
  GGS_omnibusType joker_15575_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_15575_1, var_rightValue_15591, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 352)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_rightValue_15591.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 353)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time left shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 354)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_15800 ;
    GGS_omnibusType joker_15784_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_15784_1, var_leftValue_15800, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 356)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_15800.left_shift_operation (var_rightValue_15591, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 357))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 357)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntShiftRightOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftRightOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location constinArgument_inOperatorLocation,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_16634 ;
  GGS_omnibusType joker_16618_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_16618_1, var_rightValue_16634, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 378)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_rightValue_16634.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 379)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time right shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 380)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_16844 ;
    GGS_omnibusType joker_16828_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_16828_1, var_leftValue_16844, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 382)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_16844.right_shift_operation (var_rightValue_16634, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 383))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 383)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntLessThanOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLessThanOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_objectIR constinArgument_inRightOperand,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_17680 ;
  GGS_omnibusType joker_17664_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_17664_1, var_leftValue_17680, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 404)) ;
  GGS_bigint var_rightValue_17747 ;
  GGS_omnibusType joker_17731_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_17731_1, var_rightValue_17747, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 405)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::lowerThan, var_leftValue_17680.objectCompare (var_rightValue_17747)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas3", 406))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 406)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntLowerOrEqualOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLowerOrEqualOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                   const GGS_location /* constinArgument_inOperatorLocation */,
                                                                   const GGS_objectIR constinArgument_inRightOperand,
                                                                   const GGS_omnibusType constinArgument_inResultType,
                                                                   GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GGS_objectIR & outArgument_outResultValue,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_18583 ;
  GGS_omnibusType joker_18567_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_18567_1, var_leftValue_18583, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 426)) ;
  GGS_bigint var_rightValue_18650 ;
  GGS_omnibusType joker_18634_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_18634_1, var_rightValue_18650, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 427)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::lowerOrEqual, var_leftValue_18583.objectCompare (var_rightValue_18650)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas3", 428))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 428)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntXorOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntXorOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                          const GGS_location /* constinArgument_inOperatorLocation */,
                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GGS_objectIR & outArgument_outResultValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_19469 ;
  GGS_omnibusType joker_19453_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_19453_1, var_leftValue_19469, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 448)) ;
  GGS_bigint var_rightValue_19536 ;
  GGS_omnibusType joker_19520_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_19520_1, var_rightValue_19536, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 449)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_19469.operator_xor (var_rightValue_19536 COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 450))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 450)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntBitWiseOrOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseOrOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                const GGS_location /* constinArgument_inOperatorLocation */,
                                                                const GGS_objectIR constinArgument_inRightOperand,
                                                                const GGS_omnibusType constinArgument_inResultType,
                                                                GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GGS_objectIR & outArgument_outResultValue,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_20366 ;
  GGS_omnibusType joker_20350_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_20350_1, var_leftValue_20366, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 470)) ;
  GGS_bigint var_rightValue_20433 ;
  GGS_omnibusType joker_20417_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_20417_1, var_rightValue_20433, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 471)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_20366.operator_or (var_rightValue_20433 COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 472))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 472)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntMinusOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMinusOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                            const GGS_location /* constinArgument_inOperatorLocation */,
                                                            const GGS_omnibusType constinArgument_inResultType,
                                                            const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                            const GGS_bool /* constinArgument_inSafeMode */,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                            GGS_objectIR & outArgument_outResultValue,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_21421 ;
  GGS_omnibusType joker_21405_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_21405_1, var_receiverValue_21421, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 494)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_receiverValue_21421.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 495))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 495)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@compileTimeIntComplementOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntComplementOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                                 const GGS_bool /* constinArgument_inSafeMode */,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_22282 ;
  GGS_omnibusType joker_22266_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_22266_1, var_receiverValue_22282, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 515)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_receiverValue_22282.operator_tilde (SOURCE_FILE ("compile-time-type-int.galgas3", 516))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas3", 516)) ;
}

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
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
    GGS_filewrapper var_fw_894 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (gOption_omnibus_5F_options_listTargets.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_targetDirectoryOption_990 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, var_targetDirectoryOption_990.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_stringlist var_embeddedFiles_1113 = var_fw_894.getter_allTextFilePaths (SOURCE_FILE ("target-generation.galgas3", 29)) ;
            {
            routine_print_3F_ (GGS_string ("Embedded targets:\n"), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 30)) ;
            }
            UpEnumerator_stringlist enumerator_1197 (var_embeddedFiles_1113) ;
            while (enumerator_1197.hasCurrentObject ()) {
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::equal, enumerator_1197.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas3", 32)).objectCompare (GGS_string ("+config.omnibus-target"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_2) {
                  GGS_string var_targetName_1298 = enumerator_1197.current_mValue (HERE).getter_deletingLastPathComponent (SOURCE_FILE ("target-generation.galgas3", 33)).getter_subStringFromIndex (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("target-generation.galgas3", 33)) ;
                  {
                  routine_print_3F_ (GGS_string ("  ").add_operation (var_targetName_1298, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 34)).add_operation (GGS_char (utf32 (10)).getter_string (SOURCE_FILE ("target-generation.galgas3", 34)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 34)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 34)) ;
                  }
                }
              }
              enumerator_1197.gotoNextObject () ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GGS_string var_targetDirectory_1448 = var_targetDirectoryOption_990.getter_absolutePathFromPath (GGS_string::class_func_stringWithCurrentDirectory (SOURCE_FILE ("target-generation.galgas3", 38)) COMMA_SOURCE_FILE ("target-generation.galgas3", 38)) ;
          {
          routine_print_3F_ (GGS_string ("Targets in '").add_operation (var_targetDirectory_1448, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 39)).add_operation (GGS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 39)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 39)) ;
          }
          GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 40)) ;
          temp_3.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("omnibus-target"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("target-generation.galgas3", 40)) ;
          GGS_stringlist var_allConfigFiles_1616 = var_targetDirectory_1448.getter_regularFilesWithExtensions (GGS_bool (true), temp_3 COMMA_SOURCE_FILE ("target-generation.galgas3", 40)) ;
          UpEnumerator_stringlist enumerator_1719 (var_allConfigFiles_1616) ;
          while (enumerator_1719.hasCurrentObject ()) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, enumerator_1719.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas3", 42)).objectCompare (GGS_string ("+config.omnibus-target"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                {
                routine_print_3F_ (GGS_string ("  ").add_operation (enumerator_1719.current_mValue (HERE).getter_deletingLastPathComponent (SOURCE_FILE ("target-generation.galgas3", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 43)).add_operation (GGS_char (utf32 (10)).getter_string (SOURCE_FILE ("target-generation.galgas3", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 43)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 43)) ;
                }
              }
            }
            enumerator_1719.gotoNextObject () ;
          }
        }
      }
    }
    GGS_string var_path_1941 = GGS_string (gOption_omnibus_5F_options_extractEmbeddedTargets.readProperty_value ()) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, var_path_1941.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_stringlist var_embeddedFiles_2031 = var_fw_894.getter_allTextFilePaths (SOURCE_FILE ("target-generation.galgas3", 51)) ;
        UpEnumerator_stringlist enumerator_2076 (var_embeddedFiles_2031) ;
        while (enumerator_2076.hasCurrentObject ()) {
          GGS_string var_filePath_2109 = var_path_1941.add_operation (enumerator_2076.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 53)) ;
          {
          routine_print_3F_ (GGS_string ("  ").add_operation (var_filePath_2109, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 54)).add_operation (GGS_char (utf32 (10)).getter_string (SOURCE_FILE ("target-generation.galgas3", 54)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 54)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas3", 54)) ;
          }
          GGS_string var_dir_2177 = var_filePath_2109.getter_deletingLastPathComponent (SOURCE_FILE ("target-generation.galgas3", 55)) ;
          var_dir_2177.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 56)) ;
          GGS_string var_text_2254 = var_fw_894.getter_textFileContentsAtPath (enumerator_2076.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 57)) ;
          GGS_bool joker_2347 ; // Joker input parameter
          var_text_2254.method_writeToFileWhenDifferentContents (var_filePath_2109, joker_2347, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas3", 58)) ;
          enumerator_2076.gotoNextObject () ;
        }
      }
    }
  }
  {
    GGS_filewrapper var_fw_561 = GGS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (gOption_omnibus_5F_options_listEmbeddedSampleFiles.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_stringlist var_files_672 = var_fw_561.getter_allTextFilePaths (SOURCE_FILE ("embedded-sample-code.galgas3", 16)) ;
        {
        routine_print_3F_ (GGS_string ("Embedded sample code:\n"), inCompiler  COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 17)) ;
        }
        UpEnumerator_stringlist enumerator_748 (var_files_672) ;
        while (enumerator_748.hasCurrentObject ()) {
          {
          routine_print_3F_ (GGS_string ("  ").add_operation (enumerator_748.current_mValue (HERE).getter_subStringFromIndex (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 19)).add_operation (GGS_char (utf32 (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas3", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 19)), inCompiler  COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 19)) ;
          }
          enumerator_748.gotoNextObject () ;
        }
      }
    }
    GGS_string var_path_838 = GGS_string (gOption_omnibus_5F_options_extractEmbeddedSampleFile.readProperty_value ()) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, var_path_838.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_fw_561.getter_fileExistsAtPath (var_path_838, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 24)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string var_text_973 = var_fw_561.getter_textFileContentsAtPath (var_path_838, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 25)) ;
            GGS_string var_sourceName_1024 = var_path_838.getter_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas3", 26)) ;
            GGS_bool joker_1117 ; // Joker input parameter
            var_text_973.method_writeToFileWhenDifferentContents (var_sourceName_1024, joker_1117, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 27)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas3", 29)).readProperty_location (), GGS_string ("there is no '").add_operation (var_path_838, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 29)).add_operation (GGS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 29)), fixItArray9  COMMA_SOURCE_FILE ("embedded-sample-code.galgas3", 29)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_galgas_5F_builtin_5F_options_mode.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.readProperty_value ()).operator_not (SOURCE_FILE ("program.galgas3", 24)) COMMA_SOURCE_FILE ("program.galgas3", 24)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_importFilesAndCompile_3F_sourceFilePath (constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("program.galgas3", 25)) ;
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
  GenericUniqueArray <String> sourceFilesArray ;
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
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
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

