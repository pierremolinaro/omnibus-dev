#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctInfixExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctInfixExpressionAST_checkCompileTimeExpression (const cPtr_ctExpressionAST * inObject,
                                                                             const GALGAS_ctCheckMap constinArgument_inMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ctInfixExpressionAST * object = (const cPtr_ctInfixExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ctInfixExpressionAST) ;
  const GALGAS_ctInfixExpressionAST temp_0 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 418)) ;
  const GALGAS_ctInfixExpressionAST temp_1 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 419)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctInfixExpressionAST_checkCompileTimeExpression (void) {
  enterExtensionMethod_checkCompileTimeExpression (kTypeDescriptor_GALGAS_ctInfixExpressionAST.mSlotID,
                                                   extensionMethod_ctInfixExpressionAST_checkCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctInfixExpressionAST_checkCompileTimeExpression (defineExtensionMethod_ctInfixExpressionAST_checkCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctPrefixExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctPrefixExpressionAST_checkCompileTimeExpression (const cPtr_ctExpressionAST * inObject,
                                                                              const GALGAS_ctCheckMap constinArgument_inMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ctPrefixExpressionAST * object = (const cPtr_ctPrefixExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ctPrefixExpressionAST) ;
  const GALGAS_ctPrefixExpressionAST temp_0 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inMap, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 425)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctPrefixExpressionAST_checkCompileTimeExpression (void) {
  enterExtensionMethod_checkCompileTimeExpression (kTypeDescriptor_GALGAS_ctPrefixExpressionAST.mSlotID,
                                                   extensionMethod_ctPrefixExpressionAST_checkCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctPrefixExpressionAST_checkCompileTimeExpression (defineExtensionMethod_ctPrefixExpressionAST_checkCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctTrueExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctTrueExpressionAST_checkCompileTimeExpression (const cPtr_ctExpressionAST * /* inObject */,
                                                                            const GALGAS_ctCheckMap /* constinArgument_inMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctTrueExpressionAST_checkCompileTimeExpression (void) {
  enterExtensionMethod_checkCompileTimeExpression (kTypeDescriptor_GALGAS_ctTrueExpressionAST.mSlotID,
                                                   extensionMethod_ctTrueExpressionAST_checkCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctTrueExpressionAST_checkCompileTimeExpression (defineExtensionMethod_ctTrueExpressionAST_checkCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctFalseExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctFalseExpressionAST_checkCompileTimeExpression (const cPtr_ctExpressionAST * /* inObject */,
                                                                             const GALGAS_ctCheckMap /* constinArgument_inMap */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctFalseExpressionAST_checkCompileTimeExpression (void) {
  enterExtensionMethod_checkCompileTimeExpression (kTypeDescriptor_GALGAS_ctFalseExpressionAST.mSlotID,
                                                   extensionMethod_ctFalseExpressionAST_checkCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctFalseExpressionAST_checkCompileTimeExpression (defineExtensionMethod_ctFalseExpressionAST_checkCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIntExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctIntExpressionAST_checkCompileTimeExpression (const cPtr_ctExpressionAST * /* inObject */,
                                                                           const GALGAS_ctCheckMap /* constinArgument_inMap */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctIntExpressionAST_checkCompileTimeExpression (void) {
  enterExtensionMethod_checkCompileTimeExpression (kTypeDescriptor_GALGAS_ctIntExpressionAST.mSlotID,
                                                   extensionMethod_ctIntExpressionAST_checkCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctIntExpressionAST_checkCompileTimeExpression (defineExtensionMethod_ctIntExpressionAST_checkCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIdentifierExpressionAST checkCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctIdentifierExpressionAST_checkCompileTimeExpression (const cPtr_ctExpressionAST * inObject,
                                                                                  const GALGAS_ctCheckMap constinArgument_inMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ctIdentifierExpressionAST * object = (const cPtr_ctIdentifierExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ctIdentifierExpressionAST) ;
  const GALGAS_ctIdentifierExpressionAST temp_0 = object ;
  constinArgument_inMap.method_searchKey (temp_0.getter_mIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 446)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctIdentifierExpressionAST_checkCompileTimeExpression (void) {
  enterExtensionMethod_checkCompileTimeExpression (kTypeDescriptor_GALGAS_ctIdentifierExpressionAST.mSlotID,
                                                   extensionMethod_ctIdentifierExpressionAST_checkCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctIdentifierExpressionAST_checkCompileTimeExpression (defineExtensionMethod_ctIdentifierExpressionAST_checkCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctInfixExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctInfixExpressionAST_computeCompileTimeExpression (const cPtr_ctExpressionAST * inObject,
                                                                               const GALGAS_ctMap constinArgument_inMap,
                                                                               GALGAS_bigint & outArgument_outValue,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ctInfixExpressionAST * object = (const cPtr_ctInfixExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ctInfixExpressionAST) ;
  GALGAS_bigint var_left_16146 ;
  const GALGAS_ctInfixExpressionAST temp_0 = object ;
  callExtensionMethod_computeCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inMap, var_left_16146, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 471)) ;
  GALGAS_bigint var_right_16227 ;
  const GALGAS_ctInfixExpressionAST temp_1 = object ;
  callExtensionMethod_computeCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inMap, var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 472)) ;
  const GALGAS_ctInfixExpressionAST temp_2 = object ;
  switch (temp_2.getter_mInfixOperator (HERE).enumValue ()) {
  case GALGAS_compileTimeInfixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_equal:
    {
      GALGAS_bigint temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_left_16146.objectCompare (var_right_16227)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 474)) ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 474)) ;
      }
      outArgument_outValue = temp_3 ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_lessThan:
    {
      GALGAS_bigint temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_left_16146.objectCompare (var_right_16227)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 475)) ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 475)) ;
      }
      outArgument_outValue = temp_5 ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseAndOp:
    {
      outArgument_outValue = var_left_16146.operator_and (var_right_16227 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 476)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseOrOp:
    {
      outArgument_outValue = var_left_16146.operator_or (var_right_16227 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 477)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_bitWiseXorOp:
    {
      outArgument_outValue = var_left_16146.operator_xor (var_right_16227 COMMA_SOURCE_FILE ("compile-time-expression.galgas", 478)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_addOp:
    {
      outArgument_outValue = var_left_16146.add_operation (var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 479)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_subOp:
    {
      outArgument_outValue = var_left_16146.substract_operation (var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 480)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_mulOp:
    {
      outArgument_outValue = var_left_16146.multiply_operation (var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 481)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_divOp:
    {
      outArgument_outValue = var_left_16146.divide_operation (var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 482)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_divNoOvf:
    {
      outArgument_outValue = var_left_16146.divide_operation (var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 483)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_modOp:
    {
      outArgument_outValue = var_left_16146.modulo_operation (var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 484)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_moduloNoOvf:
    {
      outArgument_outValue = var_left_16146.modulo_operation (var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 485)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_leftShift:
    {
      outArgument_outValue = var_left_16146.left_shift_operation (var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 486)) ;
    }
    break ;
  case GALGAS_compileTimeInfixOperatorEnumeration::kEnum_rightShift:
    {
      outArgument_outValue = var_left_16146.right_shift_operation (var_right_16227, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 487)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctInfixExpressionAST_computeCompileTimeExpression (void) {
  enterExtensionMethod_computeCompileTimeExpression (kTypeDescriptor_GALGAS_ctInfixExpressionAST.mSlotID,
                                                     extensionMethod_ctInfixExpressionAST_computeCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctInfixExpressionAST_computeCompileTimeExpression (defineExtensionMethod_ctInfixExpressionAST_computeCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctPrefixExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctPrefixExpressionAST_computeCompileTimeExpression (const cPtr_ctExpressionAST * inObject,
                                                                                const GALGAS_ctMap constinArgument_inMap,
                                                                                GALGAS_bigint & outArgument_outValue,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ctPrefixExpressionAST * object = (const cPtr_ctPrefixExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ctPrefixExpressionAST) ;
  GALGAS_bigint var_exp_17257 ;
  const GALGAS_ctPrefixExpressionAST temp_0 = object ;
  callExtensionMethod_computeCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inMap, var_exp_17257, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 497)) ;
  const GALGAS_ctPrefixExpressionAST temp_1 = object ;
  switch (temp_1.getter_mPrefixOperator (HERE).enumValue ()) {
  case GALGAS_compileTimePrefixOperatorEnumeration::kNotBuilt:
    break ;
  case GALGAS_compileTimePrefixOperatorEnumeration::kEnum_minusOp:
    {
      outArgument_outValue = var_exp_17257.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 499)) ;
    }
    break ;
  case GALGAS_compileTimePrefixOperatorEnumeration::kEnum_notOp:
    {
      GALGAS_bigint temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_exp_17257.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)) ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 500)) ;
      }
      outArgument_outValue = temp_2 ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctPrefixExpressionAST_computeCompileTimeExpression (void) {
  enterExtensionMethod_computeCompileTimeExpression (kTypeDescriptor_GALGAS_ctPrefixExpressionAST.mSlotID,
                                                     extensionMethod_ctPrefixExpressionAST_computeCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctPrefixExpressionAST_computeCompileTimeExpression (defineExtensionMethod_ctPrefixExpressionAST_computeCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctTrueExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctTrueExpressionAST_computeCompileTimeExpression (const cPtr_ctExpressionAST * /* inObject */,
                                                                              const GALGAS_ctMap /* constinArgument_inMap */,
                                                                              GALGAS_bigint & outArgument_outValue,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 510)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctTrueExpressionAST_computeCompileTimeExpression (void) {
  enterExtensionMethod_computeCompileTimeExpression (kTypeDescriptor_GALGAS_ctTrueExpressionAST.mSlotID,
                                                     extensionMethod_ctTrueExpressionAST_computeCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctTrueExpressionAST_computeCompileTimeExpression (defineExtensionMethod_ctTrueExpressionAST_computeCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctFalseExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctFalseExpressionAST_computeCompileTimeExpression (const cPtr_ctExpressionAST * /* inObject */,
                                                                               const GALGAS_ctMap /* constinArgument_inMap */,
                                                                               GALGAS_bigint & outArgument_outValue,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outValue = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-expression.galgas", 519)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctFalseExpressionAST_computeCompileTimeExpression (void) {
  enterExtensionMethod_computeCompileTimeExpression (kTypeDescriptor_GALGAS_ctFalseExpressionAST.mSlotID,
                                                     extensionMethod_ctFalseExpressionAST_computeCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctFalseExpressionAST_computeCompileTimeExpression (defineExtensionMethod_ctFalseExpressionAST_computeCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIntExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctIntExpressionAST_computeCompileTimeExpression (const cPtr_ctExpressionAST * inObject,
                                                                             const GALGAS_ctMap /* constinArgument_inMap */,
                                                                             GALGAS_bigint & outArgument_outValue,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ctIntExpressionAST * object = (const cPtr_ctIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ctIntExpressionAST) ;
  const GALGAS_ctIntExpressionAST temp_0 = object ;
  outArgument_outValue = temp_0.getter_mValue (HERE).getter_bigint (SOURCE_FILE ("compile-time-expression.galgas", 528)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctIntExpressionAST_computeCompileTimeExpression (void) {
  enterExtensionMethod_computeCompileTimeExpression (kTypeDescriptor_GALGAS_ctIntExpressionAST.mSlotID,
                                                     extensionMethod_ctIntExpressionAST_computeCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctIntExpressionAST_computeCompileTimeExpression (defineExtensionMethod_ctIntExpressionAST_computeCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ctIdentifierExpressionAST computeCompileTimeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ctIdentifierExpressionAST_computeCompileTimeExpression (const cPtr_ctExpressionAST * inObject,
                                                                                    const GALGAS_ctMap constinArgument_inMap,
                                                                                    GALGAS_bigint & outArgument_outValue,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ctIdentifierExpressionAST * object = (const cPtr_ctIdentifierExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ctIdentifierExpressionAST) ;
  const GALGAS_ctIdentifierExpressionAST temp_0 = object ;
  constinArgument_inMap.method_searchKey (temp_0.getter_mIdentifier (HERE), outArgument_outValue, inCompiler COMMA_SOURCE_FILE ("compile-time-expression.galgas", 537)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ctIdentifierExpressionAST_computeCompileTimeExpression (void) {
  enterExtensionMethod_computeCompileTimeExpression (kTypeDescriptor_GALGAS_ctIdentifierExpressionAST.mSlotID,
                                                     extensionMethod_ctIdentifierExpressionAST_computeCompileTimeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ctIdentifierExpressionAST_computeCompileTimeExpression (defineExtensionMethod_ctIdentifierExpressionAST_computeCompileTimeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmGenericType locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_llvmGenericType_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_llvmGenericType * object = (const cPtr_llvmGenericType *) inObject ;
  macroValidSharedObject (object, cPtr_llvmGenericType) ;
  const GALGAS_llvmGenericType temp_0 = object ;
  result_outLocation = temp_0.getter_mTypeName (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmGenericType_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_llvmGenericType.mSlotID,
                                                  extensionGetter_llvmGenericType_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmGenericType_locationForErrorSignaling (defineExtensionGetter_llvmGenericType_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenericType enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmGenericType_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmGenericType * object = (const cPtr_llvmGenericType *) inObject ;
  macroValidSharedObject (object, cPtr_llvmGenericType) ;
  const GALGAS_llvmGenericType temp_0 = object ;
  GALGAS_lstring var_nodeName_5802 = temp_0.getter_mTypeName (HERE) ;
  {
  const GALGAS_llvmGenericType temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5802, temp_1, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 169)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmGenericType_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_llvmGenericType.mSlotID,
                                               extensionMethod_llvmGenericType_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmGenericType_enterInPrecedenceGraph (defineExtensionMethod_llvmGenericType_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmGenericType keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_llvmGenericType_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_llvmGenericType * object = (const cPtr_llvmGenericType *) inObject ;
  macroValidSharedObject (object, cPtr_llvmGenericType) ;
  const GALGAS_llvmGenericType temp_0 = object ;
  result_outRepresentation = GALGAS_string ("Generic type ").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 175)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmGenericType_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_llvmGenericType.mSlotID,
                                                           extensionGetter_llvmGenericType_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmGenericType_keyRepresentationForErrorSignaling (defineExtensionGetter_llvmGenericType_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenericType enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmGenericType_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                            GALGAS_semanticContext & ioArgument_ioContext,
                                                            GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                            GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                            GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                            GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                            GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                            GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                            GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmGenericType * object = (const cPtr_llvmGenericType *) inObject ;
  macroValidSharedObject (object, cPtr_llvmGenericType) ;
  GALGAS_ctCheckMap var_formalGenericConstantParameterMap_7905 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("llvm-generic-type.galgas", 217)) ;
  const GALGAS_llvmGenericType temp_0 = object ;
  extensionMethod_buildFormalGenericConstantMap (temp_0.getter_mGenericFormalParameterList (HERE), var_formalGenericConstantParameterMap_7905, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 218)) ;
  const GALGAS_llvmGenericType temp_1 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_1.getter_mWhereClause (HERE).ptr (), var_formalGenericConstantParameterMap_7905, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 220)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_llvmGenericType temp_3 = object ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.getter_mGenericFormalParameterList (HERE).getter_length (SOURCE_FILE ("llvm-generic-type.galgas", 224)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_llvmGenericType temp_4 = object ;
      const GALGAS_llvmGenericType temp_5 = object ;
      const GALGAS_llvmGenericType temp_6 = object ;
      GALGAS_omnibusType var_llvmType_8332 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("llvm-generic-type.galgas", 227)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("llvm-generic-type.galgas", 228)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("llvm-generic-type.galgas", 228)) COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 228)), temp_4.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("llvm-generic-type.galgas", 229)), GALGAS_typeKind::constructor_llvmType (temp_5.getter_mBitSize (HERE)  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 230)), GALGAS_string ("i").add_operation (temp_6.getter_mBitSize (HERE).getter_string (SOURCE_FILE ("llvm-generic-type.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 231))  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 225)) ;
      {
      const GALGAS_llvmGenericType temp_7 = object ;
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_7.getter_mTypeName (HERE), var_llvmType_8332, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 233)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmGenericType_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_llvmGenericType.mSlotID,
                                       extensionMethod_llvmGenericType_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmGenericType_enterInContext (defineExtensionMethod_llvmGenericType_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmAssignmentOperatorDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_llvmAssignmentOperatorDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_llvmAssignmentOperatorDeclarationAST * object = (const cPtr_llvmAssignmentOperatorDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmAssignmentOperatorDeclarationAST) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.getter_mOperatorLocation (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmAssignmentOperatorDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST.mSlotID,
                                                  extensionGetter_llvmAssignmentOperatorDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmAssignmentOperatorDeclarationAST_locationForErrorSignaling (defineExtensionGetter_llvmAssignmentOperatorDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmAssignmentOperatorDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmAssignmentOperatorDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmAssignmentOperatorDeclarationAST * object = (const cPtr_llvmAssignmentOperatorDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmAssignmentOperatorDeclarationAST) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_0 = object ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_1 = object ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_2 = object ;
  GALGAS_lstring var_nodeName_6335 = GALGAS_lstring::constructor_new (temp_0.getter_mTargetTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 148)).add_operation (temp_1.getter_mSourceTypeName (HERE).getter_string (SOURCE_FILE ("assignment-operator-definition.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 148)), temp_2.getter_mOperatorLocation (HERE)  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 148)) ;
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6335, temp_3, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 149)) ;
  }
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6335, temp_4.getter_mTargetTypeName (HERE) COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 150)) ;
  }
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6335, temp_5.getter_mSourceTypeName (HERE) COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 151)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmAssignmentOperatorDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST.mSlotID,
                                               extensionMethod_llvmAssignmentOperatorDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmAssignmentOperatorDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_llvmAssignmentOperatorDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmAssignmentOperatorDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_llvmAssignmentOperatorDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_llvmAssignmentOperatorDeclarationAST * object = (const cPtr_llvmAssignmentOperatorDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmAssignmentOperatorDeclarationAST) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_0 = object ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_1 = object ;
  result_outRepresentation = GALGAS_string ("Assignment ").add_operation (temp_0.getter_mTargetTypeName (HERE).getter_string (SOURCE_FILE ("assignment-operator-definition.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)).add_operation (temp_1.getter_mSourceTypeName (HERE).getter_string (SOURCE_FILE ("assignment-operator-definition.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 157)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmAssignmentOperatorDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST.mSlotID,
                                                           extensionGetter_llvmAssignmentOperatorDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmAssignmentOperatorDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_llvmAssignmentOperatorDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorFuncName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_assignmentOperatorFuncName (const GALGAS_omnibusType & constinArgument_inTargetType,
                                                   const GALGAS_omnibusType & constinArgument_inSourceType,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("assign.").add_operation (constinArgument_inTargetType.getter_llvmBaseTypeName (SOURCE_FILE ("assignment-operator-definition.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)).add_operation (GALGAS_string (".ref.from."), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)).add_operation (constinArgument_inSourceType.getter_llvmBaseTypeName (SOURCE_FILE ("assignment-operator-definition.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)).add_operation (GALGAS_string (".ref"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 165)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_assignmentOperatorFuncName [3] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_assignmentOperatorFuncName (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_omnibusType operand1 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_assignmentOperatorFuncName (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignmentOperatorFuncName ("assignmentOperatorFuncName",
                                                                            functionWithGenericHeader_assignmentOperatorFuncName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            2,
                                                                            functionArgs_assignmentOperatorFuncName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_assignmentOperatorKey (const GALGAS_omnibusType & constinArgument_inTargetType,
                                               const GALGAS_location & constinArgument_inErrorLocation,
                                               const GALGAS_omnibusType & constinArgument_inSourceType,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (constinArgument_inTargetType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("assignment-operator-definition.galgas", 174)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 174)).add_operation (constinArgument_inSourceType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("assignment-operator-definition.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 174)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 173)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_assignmentOperatorKey [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_assignmentOperatorKey (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_location operand1 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_assignmentOperatorKey (operand0,
                                         operand1,
                                         operand2,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignmentOperatorKey ("assignmentOperatorKey",
                                                                       functionWithGenericHeader_assignmentOperatorKey,
                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                       3,
                                                                       functionArgs_assignmentOperatorKey) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmAssignmentOperatorDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmAssignmentOperatorDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                                 GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                                 GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                                 GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                                 GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                                 GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmAssignmentOperatorDeclarationAST * object = (const cPtr_llvmAssignmentOperatorDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmAssignmentOperatorDeclarationAST) ;
  GALGAS_ctCheckMap var_formalGenericConstantParameterMap_9977 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 219)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_0 = object ;
  extensionMethod_buildFormalGenericConstantMap (temp_0.getter_mTargetGenericFormalParameterList (HERE), var_formalGenericConstantParameterMap_9977, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 220)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_1 = object ;
  extensionMethod_buildFormalGenericConstantMap (temp_1.getter_mSourceGenericFormalParameterList (HERE), var_formalGenericConstantParameterMap_9977, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 221)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_2 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_2.getter_mWhereClause (HERE).ptr (), var_formalGenericConstantParameterMap_9977, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 223)) ;
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_3 = object ;
  var_formalGenericConstantParameterMap_9977.setter_insertKey (temp_3.getter_mTargetVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 225)) ;
  }
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_4 = object ;
  var_formalGenericConstantParameterMap_9977.setter_insertKey (temp_4.getter_mSourceVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 226)) ;
  }
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_5 = object ;
  extensionMethod_checkInstructionList (temp_5.getter_mLLVMInstructionList (HERE), var_formalGenericConstantParameterMap_9977, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 227)) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetTypeProxy_10684 ;
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_6 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_6.getter_mTargetTypeName (HERE), var_targetTypeProxy_10684 COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 229)) ;
  }
  GALGAS_omnibusType var_targetType_10702 = var_targetTypeProxy_10684.getter_type (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 230)) ;
  GALGAS_unifiedTypeMap_2D_entry var_sourceTypeProxy_10826 ;
  {
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_7 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_7.getter_mSourceTypeName (HERE), var_sourceTypeProxy_10826 COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 231)) ;
  }
  GALGAS_omnibusType var_sourceType_10844 = var_sourceTypeProxy_10826.getter_type (inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 232)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_8 = object ;
  GALGAS_lstring var_key_10884 = function_assignmentOperatorKey (var_targetType_10702, temp_8.getter_mOperatorLocation (HERE), var_sourceType_10844, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 234)) ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_9 = object ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_10 = object ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_11 = object ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_12 = object ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_13 = object ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST temp_14 = object ;
  GALGAS_llvmAssignmentOperatorUsage var_operatorUsage_10978 = GALGAS_llvmAssignmentOperatorUsage::constructor_new (var_targetType_10702, temp_9.getter_mTargetVariableName (HERE), temp_10.getter_mTargetGenericFormalParameterList (HERE), var_sourceType_10844, temp_11.getter_mSourceVariableName (HERE), temp_12.getter_mSourceGenericFormalParameterList (HERE), temp_13.getter_mWhereClause (HERE), temp_14.getter_mLLVMInstructionList (HERE)  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 235)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_10884, var_operatorUsage_10978, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 245)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GALGAS_llvmAssignmentOperatorDeclarationAST temp_16 = object ;
    GALGAS_bool test_17 = GALGAS_bool (kIsEqual, temp_16.getter_mTargetGenericFormalParameterList (HERE).getter_length (SOURCE_FILE ("assignment-operator-definition.galgas", 252)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_17.boolEnum ()) {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_18 = object ;
      test_17 = GALGAS_bool (kIsEqual, temp_18.getter_mSourceGenericFormalParameterList (HERE).getter_length (SOURCE_FILE ("assignment-operator-definition.galgas", 253)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    GALGAS_bool test_19 = test_17 ;
    if (kBoolTrue == test_19.boolEnum ()) {
      test_19 = var_sourceType_10844.getter_kind (HERE).getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas", 254)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 254)) ;
    }
    GALGAS_bool test_20 = test_19 ;
    if (kBoolTrue == test_20.boolEnum ()) {
      test_20 = var_sourceType_10844.getter_kind (HERE).getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas", 255)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 255)) ;
    }
    test_15 = test_20.boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_assignmentGenerationVarMap var_varMap_11700 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 256)) ;
      {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_21 = object ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_22 = object ;
      var_varMap_11700.setter_insertKey (temp_21.getter_mTargetVariableName (HERE), GALGAS_string ("%").add_operation (temp_22.getter_mTargetVariableName (HERE).getter_string (SOURCE_FILE ("assignment-operator-definition.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 257)) ;
      }
      {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_23 = object ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_24 = object ;
      var_varMap_11700.setter_insertKey (temp_23.getter_mSourceVariableName (HERE), GALGAS_string ("%").add_operation (temp_24.getter_mSourceVariableName (HERE).getter_string (SOURCE_FILE ("assignment-operator-definition.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 258)) ;
      }
      GALGAS_assignmentGenerationVarMap var_typeMap_11911 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 259)) ;
      {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_25 = object ;
      var_typeMap_11911.setter_insertKey (temp_25.getter_mTargetVariableName (HERE), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_targetType_10702.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 260)) ;
      }
      {
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_26 = object ;
      var_typeMap_11911.setter_insertKey (temp_26.getter_mSourceVariableName (HERE), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_10844.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 261)) ;
      }
      GALGAS_stringlist var_generatedInstructions_12112 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("assignment-operator-definition.galgas", 262)) ;
      GALGAS_allocaList var_allocaList_12144 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("assignment-operator-definition.galgas", 263)) ;
      GALGAS_uint var_temporaryIndex_12174 = GALGAS_uint ((uint32_t) 0U) ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_27 = object ;
      extensionMethod_generateIRCode (temp_27.getter_mLLVMInstructionList (HERE), var_varMap_11700, var_typeMap_11911, var_generatedInstructions_12112, var_temporaryIndex_12174, var_allocaList_12144, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 265)) ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_28 = object ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_29 = object ;
      const GALGAS_llvmAssignmentOperatorDeclarationAST temp_30 = object ;
      GALGAS_assignmentRoutineIR var_routine_12312 = GALGAS_assignmentRoutineIR::constructor_new (GALGAS_lstring::constructor_new (function_assignmentOperatorFuncName (var_targetType_10702, var_sourceType_10844, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 267)), temp_28.getter_mOperatorLocation (HERE)  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 267)), GALGAS_bool (false), GALGAS_bool (false), var_targetType_10702, temp_29.getter_mTargetVariableName (HERE).getter_string (HERE), var_sourceType_10844, temp_30.getter_mSourceVariableName (HERE).getter_string (HERE), var_generatedInstructions_12112, var_allocaList_12144  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 266)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (var_routine_12312  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 277)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmAssignmentOperatorDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST.mSlotID,
                                       extensionMethod_llvmAssignmentOperatorDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmAssignmentOperatorDeclarationAST_enterInContext (defineExtensionMethod_llvmAssignmentOperatorDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmAssignmentOperatorUsage_generateCode (const cPtr_abstractAssignmentOperatorUsage * inObject,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      const GALGAS_omnibusType constinArgument_inTargetType,
                                                                      const GALGAS_string constinArgument_inTargetLLVMName,
                                                                      const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                      const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                      const GALGAS_bool /* constinArgument_inTargetIsInitialized */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmAssignmentOperatorUsage * object = (const cPtr_llvmAssignmentOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_llvmAssignmentOperatorUsage) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_llvmAssignmentOperatorUsage temp_1 = object ;
    GALGAS_bool test_2 = GALGAS_bool (kIsEqual, temp_1.getter_mTargetGenericFormalParameterList (HERE).getter_length (SOURCE_FILE ("assignment-operator-definition.galgas", 308)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      const GALGAS_llvmAssignmentOperatorUsage temp_3 = object ;
      test_2 = GALGAS_bool (kIsEqual, temp_3.getter_mSourceGenericFormalParameterList (HERE).getter_length (SOURCE_FILE ("assignment-operator-definition.galgas", 309)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    GALGAS_bool test_4 = test_2 ;
    if (kBoolTrue == test_4.boolEnum ()) {
      test_4 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 310)).getter_kind (HERE).getter_isCompileTimeInteger (SOURCE_FILE ("assignment-operator-definition.galgas", 310)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 310)) ;
    }
    GALGAS_bool test_5 = test_4 ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 311)).getter_kind (HERE).getter_isCompileTimeBool (SOURCE_FILE ("assignment-operator-definition.galgas", 311)).operator_not (SOURCE_FILE ("assignment-operator-definition.galgas", 311)) ;
    }
    test_0 = test_5.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_llvmRoutineName_14172 = function_assignmentOperatorFuncName (constinArgument_inTargetType, extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 312)) ;
      GALGAS_string var_s_14263 = GALGAS_string ("call void @").add_operation (var_llvmRoutineName_14172.getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 313)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 313)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 314)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 315)) ;
      {
      GALGAS_stringset temp_6 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
      temp_6.addAssign_operation (var_llvmRoutineName_14172  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_14263, temp_6, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 316)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_omnibusType var_sourceType_14673 ;
    GALGAS_string var_srcLLVMName_14700 ;
    constinArgument_inSourcePossibleReference.method_reference (var_sourceType_14673, var_srcLLVMName_14700, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 318)) ;
    GALGAS_assignmentGenerationVarMap var_varMap_14740 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 319)) ;
    {
    const GALGAS_llvmAssignmentOperatorUsage temp_7 = object ;
    var_varMap_14740.setter_insertKey (temp_7.getter_mTargetVarName (HERE), constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 320)) ;
    }
    {
    const GALGAS_llvmAssignmentOperatorUsage temp_8 = object ;
    var_varMap_14740.setter_insertKey (temp_8.getter_mSourceVarName (HERE), var_srcLLVMName_14700, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 321)) ;
    }
    GALGAS_assignmentGenerationVarMap var_typeMap_14908 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("assignment-operator-definition.galgas", 322)) ;
    {
    const GALGAS_llvmAssignmentOperatorUsage temp_9 = object ;
    var_typeMap_14908.setter_insertKey (temp_9.getter_mTargetVarName (HERE), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 323)) ;
    }
    {
    const GALGAS_llvmAssignmentOperatorUsage temp_10 = object ;
    var_typeMap_14908.setter_insertKey (temp_10.getter_mSourceVarName (HERE), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_sourceType_14673.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 324)) ;
    }
    GALGAS_stringlist var_generatedInstructions_15102 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("assignment-operator-definition.galgas", 325)) ;
    const GALGAS_llvmAssignmentOperatorUsage temp_11 = object ;
    extensionMethod_generateIRCode (temp_11.getter_mInstructionList (HERE), var_varMap_14740, var_typeMap_14908, var_generatedInstructions_15102, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 326)) ;
    cEnumerator_stringlist enumerator_15277 (var_generatedInstructions_15102, kENUMERATION_UP) ;
    while (enumerator_15277.hasCurrentObject ()) {
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, enumerator_15277.current_mValue (HERE), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("assignment-operator-definition.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 328)) ;
      }
      enumerator_15277.gotoNextObject () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmAssignmentOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage.mSlotID,
                                     extensionMethod_llvmAssignmentOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmAssignmentOperatorUsage_generateCode (defineExtensionMethod_llvmAssignmentOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentRoutineIR * object = (const cPtr_assignmentRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentRoutineIR) ;
  const GALGAS_assignmentRoutineIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 379)) ;
  const GALGAS_assignmentRoutineIR temp_1 = object ;
  const GALGAS_assignmentRoutineIR temp_2 = object ;
  const GALGAS_assignmentRoutineIR temp_3 = object ;
  const GALGAS_assignmentRoutineIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.getter_mTargetType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (temp_2.getter_mTargetVarName (HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_3.getter_mSourceType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)).add_operation (temp_4.getter_mSourceVarName (HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 380)) ;
  const GALGAS_assignmentRoutineIR temp_5 = object ;
  extensionMethod_generateAllocaList (temp_5.getter_mAllocaList (HERE), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 382)) ;
  const GALGAS_assignmentRoutineIR temp_6 = object ;
  cEnumerator_stringlist enumerator_17367 (temp_6.getter_mGeneratedInstructions (HERE), kENUMERATION_UP) ;
  while (enumerator_17367.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_17367.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 384)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 384)) ;
    enumerator_17367.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 387)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_assignmentRoutineIR.mSlotID,
                                           extensionMethod_assignmentRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentRoutineIR_llvmCodeGeneration (defineExtensionMethod_assignmentRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@simpleAssignmentCopyRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_simpleAssignmentCopyRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_simpleAssignmentCopyRoutineIR * object = (const cPtr_simpleAssignmentCopyRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_simpleAssignmentCopyRoutineIR) ;
  const GALGAS_simpleAssignmentCopyRoutineIR temp_0 = object ;
  GALGAS_string var_typeName_18023 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.getter_mTargetType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 403)) ;
  GALGAS_string var_targetVarName_18077 = GALGAS_string ("%targetPtr") ;
  GALGAS_string var_sourceVarName_18112 = GALGAS_string ("%sourcePtr") ;
  const GALGAS_simpleAssignmentCopyRoutineIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_1.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("assignment-operator-definition.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_typeName_18023, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (var_targetVarName_18077, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)).add_operation (var_typeName_18023, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)).add_operation (var_sourceVarName_18112, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 407)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (var_typeName_18023, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (var_typeName_18023, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (var_sourceVarName_18112, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 409)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_typeName_18023, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (var_typeName_18023, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (var_targetVarName_18077, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 410)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 411)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 412)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_simpleAssignmentCopyRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR.mSlotID,
                                           extensionMethod_simpleAssignmentCopyRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_simpleAssignmentCopyRoutineIR_llvmCodeGeneration (defineExtensionMethod_simpleAssignmentCopyRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@simpleCopyAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_simpleCopyAssignmentOperatorUsage_generateCode (const cPtr_abstractAssignmentOperatorUsage * /* inObject */,
                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                            const GALGAS_omnibusType constinArgument_inTargetType,
                                                                            const GALGAS_string constinArgument_inTargetLLVMName,
                                                                            const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                            const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                            const GALGAS_bool /* constinArgument_inTargetIsInitialized */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_sourceValue_19407 = constinArgument_inSourcePossibleReference ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inSourcePossibleReference.getter_isReference (SOURCE_FILE ("assignment-operator-definition.galgas", 434)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_getNewTempValue (constinArgument_inTargetType, ioArgument_ioTemporaries, var_sourceValue_19407, inCompiler  COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 435)) ;
      }
      GALGAS_string var_s_19560 = extensionGetter_llvmName (var_sourceValue_19407, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 436)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 437)) ;
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_19560, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("assignment-operator-definition.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 438)) ;
      }
    }
  }
  GALGAS_string var_s_19818 = GALGAS_string ("store ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (extensionGetter_llvmName (var_sourceValue_19407, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 441)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 442)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_19818, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("assignment-operator-definition.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("assignment-operator-definition.galgas", 443)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_simpleCopyAssignmentOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage.mSlotID,
                                     extensionMethod_simpleCopyAssignmentOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_simpleCopyAssignmentOperatorUsage_generateCode (defineExtensionMethod_simpleCopyAssignmentOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmVarInstruction checkInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmVarInstruction_checkInstructionList (const cPtr_abstractLLVMInstruction * inObject,
                                                                     GALGAS_ctCheckMap & ioArgument_ioMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmVarInstruction * object = (const cPtr_llvmVarInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_llvmVarInstruction) ;
  {
  const GALGAS_llvmVarInstruction temp_0 = object ;
  ioArgument_ioMap.setter_insertKey (temp_0.getter_mVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 120)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmVarInstruction_checkInstructionList (void) {
  enterExtensionMethod_checkInstructionList (kTypeDescriptor_GALGAS_llvmVarInstruction.mSlotID,
                                             extensionMethod_llvmVarInstruction_checkInstructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmVarInstruction_checkInstructionList (defineExtensionMethod_llvmVarInstruction_checkInstructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenerationInstruction checkInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmGenerationInstruction_checkInstructionList (const cPtr_abstractLLVMInstruction * inObject,
                                                                            GALGAS_ctCheckMap & ioArgument_ioMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmGenerationInstruction * object = (const cPtr_llvmGenerationInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_llvmGenerationInstruction) ;
  const GALGAS_llvmGenerationInstruction temp_0 = object ;
  cEnumerator_llvmGenerationInstructionElementList enumerator_5140 (temp_0.getter_mGenerationList (HERE), kENUMERATION_UP) ;
  while (enumerator_5140.hasCurrentObject ()) {
    switch (enumerator_5140.current_mElement (HERE).enumValue ()) {
    case GALGAS_llvmGenerationInstructionElement::kNotBuilt:
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_string:
      {
      }
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_symbol:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol * extractPtr_5239 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol *) (enumerator_5140.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5239->mAssociatedValue0 ;
        ioArgument_ioMap.method_searchKey (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 130)) ;
      }
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_type:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_type * extractPtr_5292 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_type *) (enumerator_5140.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5292->mAssociatedValue0 ;
        ioArgument_ioMap.method_searchKey (extractedValue_name, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 132)) ;
      }
      break ;
    }
    enumerator_5140.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmGenerationInstruction_checkInstructionList (void) {
  enterExtensionMethod_checkInstructionList (kTypeDescriptor_GALGAS_llvmGenerationInstruction.mSlotID,
                                             extensionMethod_llvmGenerationInstruction_checkInstructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmGenerationInstruction_checkInstructionList (defineExtensionMethod_llvmGenerationInstruction_checkInstructionList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmGenerationInstruction generateIRCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmGenerationInstruction_generateIRCode (const cPtr_abstractLLVMInstruction * inObject,
                                                                      GALGAS_assignmentGenerationVarMap & ioArgument_ioVarMap,
                                                                      GALGAS_assignmentGenerationVarMap & ioArgument_ioTypeMap,
                                                                      GALGAS_stringlist & ioArgument_ioInstructionAsStringListIR,
                                                                      GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
                                                                      GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmGenerationInstruction * object = (const cPtr_llvmGenerationInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_llvmGenerationInstruction) ;
  GALGAS_string var_s_7085 = GALGAS_string::makeEmptyString () ;
  const GALGAS_llvmGenerationInstruction temp_0 = object ;
  cEnumerator_llvmGenerationInstructionElementList enumerator_7131 (temp_0.getter_mGenerationList (HERE), kENUMERATION_UP) ;
  while (enumerator_7131.hasCurrentObject ()) {
    switch (enumerator_7131.current_mElement (HERE).enumValue ()) {
    case GALGAS_llvmGenerationInstructionElement::kNotBuilt:
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_string:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_string * extractPtr_7200 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_string *) (enumerator_7131.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_value = extractPtr_7200->mAssociatedValue0 ;
        var_s_7085.plusAssign_operation(extractedValue_value, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 185)) ;
      }
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_symbol:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol * extractPtr_7289 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_symbol *) (enumerator_7131.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7289->mAssociatedValue0 ;
        GALGAS_string var_value_7270 ;
        ioArgument_ioVarMap.method_searchKey (extractedValue_name, var_value_7270, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 187)) ;
        var_s_7085.plusAssign_operation(var_value_7270, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 188)) ;
      }
      break ;
    case GALGAS_llvmGenerationInstructionElement::kEnum_type:
      {
        const cEnumAssociatedValues_llvmGenerationInstructionElement_type * extractPtr_7377 = (const cEnumAssociatedValues_llvmGenerationInstructionElement_type *) (enumerator_7131.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7377->mAssociatedValue0 ;
        GALGAS_string var_value_7358 ;
        ioArgument_ioTypeMap.method_searchKey (extractedValue_name, var_value_7358, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 190)) ;
        var_s_7085.plusAssign_operation(var_value_7358, inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 191)) ;
      }
      break ;
    }
    enumerator_7131.gotoNextObject () ;
  }
  ioArgument_ioInstructionAsStringListIR.addAssign_operation (var_s_7085  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 194)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmGenerationInstruction_generateIRCode (void) {
  enterExtensionMethod_generateIRCode (kTypeDescriptor_GALGAS_llvmGenerationInstruction.mSlotID,
                                       extensionMethod_llvmGenerationInstruction_generateIRCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmGenerationInstruction_generateIRCode (defineExtensionMethod_llvmGenerationInstruction_generateIRCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmVarInstruction generateIRCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmVarInstruction_generateIRCode (const cPtr_abstractLLVMInstruction * inObject,
                                                               GALGAS_assignmentGenerationVarMap & ioArgument_ioVarMap,
                                                               GALGAS_assignmentGenerationVarMap & /* ioArgument_ioTypeMap */,
                                                               GALGAS_stringlist & /* ioArgument_ioInstructionAsStringListIR */,
                                                               GALGAS_uint & ioArgument_ioTemporaryIndex,
                                                               GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmVarInstruction * object = (const cPtr_llvmVarInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_llvmVarInstruction) ;
  GALGAS_string var_newTemporaryVariable_7849 = GALGAS_string ("%temp").add_operation (ioArgument_ioTemporaryIndex.getter_string (SOURCE_FILE ("llvm-instructions.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 206)) ;
  ioArgument_ioTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("llvm-instructions.galgas", 207)) ;
  {
  const GALGAS_llvmVarInstruction temp_0 = object ;
  ioArgument_ioVarMap.setter_insertKey (temp_0.getter_mVariableName (HERE), var_newTemporaryVariable_7849, inCompiler COMMA_SOURCE_FILE ("llvm-instructions.galgas", 208)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmVarInstruction_generateIRCode (void) {
  enterExtensionMethod_generateIRCode (kTypeDescriptor_GALGAS_llvmVarInstruction.mSlotID,
                                       extensionMethod_llvmVarInstruction_generateIRCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmVarInstruction_generateIRCode (defineExtensionMethod_llvmVarInstruction_generateIRCode, NULL) ;

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "omnibus-target",
  "omnibus-import",
  "omnibus",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a target definition text file with the .omnibus-target extension",
  "an imported text file with the .omnibus-import extension",
  "a source text file with the .omnibus extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "1.0.0" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_filewrapper var_fw_1182 = GALGAS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_omnibus_5F_options_listTargets.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_targetDirectoryOption_1297 = GALGAS_string (gOption_omnibus_5F_options_useDirAsTargetDir.getter_value ()) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, var_targetDirectoryOption_1297.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_stringlist var_embeddedFiles_1412 = var_fw_1182.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 29)) ;
            inCompiler->printMessage (GALGAS_string ("Embedded targets:\n")  COMMA_SOURCE_FILE ("target-generation.galgas", 30)) ;
            cEnumerator_stringlist enumerator_1504 (var_embeddedFiles_1412, kENUMERATION_UP) ;
            while (enumerator_1504.hasCurrentObject ()) {
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GALGAS_bool (kIsEqual, enumerator_1504.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 32)).objectCompare (GALGAS_string ("+config.omnibus-target"))).boolEnum () ;
                if (kBoolTrue == test_2) {
                  GALGAS_string var_targetName_1598 = enumerator_1504.current_mValue (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 33)).getter_subStringFromIndex (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("target-generation.galgas", 33)) ;
                  inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_targetName_1598, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34))  COMMA_SOURCE_FILE ("target-generation.galgas", 34)) ;
                }
              }
              enumerator_1504.gotoNextObject () ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_string var_targetDirectory_1762 = var_targetDirectoryOption_1297.getter_absolutePathFromPath (GALGAS_string::constructor_stringWithCurrentDirectory (SOURCE_FILE ("target-generation.galgas", 38)) COMMA_SOURCE_FILE ("target-generation.galgas", 38)) ;
          inCompiler->printMessage (GALGAS_string ("Targets in '").add_operation (var_targetDirectory_1762, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)).add_operation (GALGAS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39))  COMMA_SOURCE_FILE ("target-generation.galgas", 39)) ;
          GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("target-generation.galgas", 40)) ;
          temp_3.addAssign_operation (GALGAS_string ("omnibus-target")  COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          GALGAS_stringlist var_allConfigFiles_1928 = var_targetDirectory_1762.getter_regularFilesWithExtensions (GALGAS_bool (true), temp_3 COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          cEnumerator_stringlist enumerator_2034 (var_allConfigFiles_1928, kENUMERATION_UP) ;
          while (enumerator_2034.hasCurrentObject ()) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, enumerator_2034.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 42)).objectCompare (GALGAS_string ("+config.omnibus-target"))).boolEnum () ;
              if (kBoolTrue == test_4) {
                inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_2034.current_mValue (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43))  COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
              }
            }
            enumerator_2034.gotoNextObject () ;
          }
        }
      }
    }
    GALGAS_string var_path_2250 = GALGAS_string (gOption_omnibus_5F_options_extractEmbeddedTargets.getter_value ()) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_path_2250.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_stringlist var_embeddedFiles_2349 = var_fw_1182.getter_allTextFilePathes (SOURCE_FILE ("target-generation.galgas", 51)) ;
        cEnumerator_stringlist enumerator_2403 (var_embeddedFiles_2349, kENUMERATION_UP) ;
        while (enumerator_2403.hasCurrentObject ()) {
          GALGAS_string var_filePath_2425 = var_path_2250.add_operation (enumerator_2403.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 53)) ;
          inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_filePath_2425, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54))  COMMA_SOURCE_FILE ("target-generation.galgas", 54)) ;
          GALGAS_string var_dir_2487 = var_filePath_2425.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 55)) ;
          var_dir_2487.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 56)) ;
          GALGAS_string var_text_2575 = var_fw_1182.getter_textFileContentsAtPath (enumerator_2403.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 57)) ;
          GALGAS_bool joker_2665 ; // Joker input parameter
          var_text_2575.method_writeToFileWhenDifferentContents (var_filePath_2425, joker_2665, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 58)) ;
          enumerator_2403.gotoNextObject () ;
        }
      }
    }
  }
  {
    GALGAS_filewrapper var_fw_624 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (gOption_omnibus_5F_options_listEmbeddedSampleFiles.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_stringlist var_files_738 = var_fw_624.getter_allTextFilePathes (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
        inCompiler->printMessage (GALGAS_string ("Embedded sample code:\n")  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
        cEnumerator_stringlist enumerator_822 (var_files_738, kENUMERATION_UP) ;
        while (enumerator_822.hasCurrentObject ()) {
          inCompiler->printMessage (GALGAS_string ("  ").add_operation (enumerator_822.current_mValue (HERE).getter_subStringFromIndex (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GALGAS_char (TO_UNICODE (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19))  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
          enumerator_822.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_path_904 = GALGAS_string (gOption_omnibus_5F_options_extractEmbeddedSampleFile.getter_value ()) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsNotEqual, var_path_904.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_fw_624.getter_fileExistsAtPath (var_path_904, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 24)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_string var_text_1039 = var_fw_624.getter_textFileContentsAtPath (var_path_904, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 25)) ;
            GALGAS_string var_sourceName_1096 = var_path_904.getter_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas", 26)) ;
            GALGAS_bool joker_1182 ; // Joker input parameter
            var_text_1039.method_writeToFileWhenDifferentContents (var_sourceName_1096, joker_1182, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 27)) ;
          }
        }
        if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).getter_location (SOURCE_FILE ("embedded-sample-code.galgas", 29)), GALGAS_string ("there is no '").add_operation (var_path_904, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GALGAS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)), fixItArray9  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring /* constinArgument_inSourceFile */,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GALGAS_lstring /* constinArgument_inSourceFile */,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_galgas_5F_builtin_5F_options_mode.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.getter_value ()).operator_not (SOURCE_FILE ("program.galgas", 24)) COMMA_SOURCE_FILE ("program.galgas", 24)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_importFilesAndCompile (constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 25)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

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

